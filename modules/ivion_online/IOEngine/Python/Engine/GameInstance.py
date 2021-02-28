from Engine.Types.Object import Object
from Engine.Types.List import List
from Engine.Types.List import List
from Engine.Types.Vec2i import Vec2i
from Engine.Types.Integer import Integer
from Engine.Effect import Execute, Revert, MakePath
from Engine.BasicActions import Move
from Engine.Mutation import Mutation

from Engine.NetworkIO.GameInfo_pb2 import GameInfo, PlayerInfo, Card, RandomAgent, AIAgent, PlayerAgent


def _buildCard(player: Object, cardInfo: Card):
    card = {
        "Owner": player,
        "Controller": player,
        "Name": cardInfo.Name,
        "Archetype": cardInfo.Archetype,
        # "PlayEffects": List([x for x in cardInfo.PlayEffects]),
        # "ResolveEffects": List([x for x in cardInfo.ResolveEffects]),
    }

    return Object(card)


def _buildPlayer(info: PlayerInfo, game: Object):
    cards = list()
    feats = list()
    basicActions = list()
    player = Object({
        "Health": Integer(40),
        "Actions": Integer(0),
        "Power": Integer(0),
        "Position": Vec2i(info.StartingPosition.X, info.StartingPosition.Y),
        "Deck": List(cards),
        "Feats": List(feats),
        "Hand": List(),
        "BasicActions": List(basicActions),
        "MiscActions": List(),
        "MaxHealth": Integer(40),
        "MaxPower": Integer(5),
        "MaxActions": Integer(5),
        "MoveDistance": Integer(1),
    })
    basicActions.extend([Move.BuildMoveAction(game, player)])
    cards.extend([_buildCard(player, x) for x in info.Deck.Deck])
    feats.extend([_buildCard(player, x) for x in info.Deck.Feats])
    player._value["Ultimate"] = _buildCard(player, info.Deck.Ultimate)

    return player


def _buildTile(pos: Vec2i):
    tile = {
        "Position": pos,
        "Entities": List(),
    }

    return Object(tile)


def _buildGame(info: GameInfo):
    gameDict = dict()
    game = Object(gameDict)
    players = List([_buildPlayer(x, game) for x in info.Players])
    cards = list()
    for player in players:
        cards.extend(player.Get("Deck"))
        cards.extend(player.Get("Feats"))
        cards.append(player.Get("Ultimate"))

    gameDict.update({
        "Players": players,
        "Cards": List(cards),
        "Tiles": List([_buildTile(Vec2i(x, y)) for x, y in zip(list(range(info.MapSize.X)) * info.MapSize.Y, sorted(list(range(info.MapSize.Y)) * info.MapSize.X))]),
        "ActivePlayer": players.Get(0),
    })

    return game

from Engine.NetworkIO.GameInfo_pb2 import GameInfo
from google.protobuf.json_format import Parse
import json

class GameInstance:
    def __init__(self, data: bytes = None):
        message = Parse(json.dumps({
            "Players": [
                {
                    "Username": "Player1",
                    "UID": "1",
                    "Deck": {
                        "Ultimate": {
                            "Name": "TestUltimate",
                            "Archetype": "TestArch",
                            "Count": 0,
                            "Ultimate": True,
                            "Feat": True,
                            "Colors": [],
                            "PlayEffects": "",
                            "ResolveEffects": "",
                        },
                        "Feats": [],
                        "Deck": [],
                    },
                    "StartingPosition": {
                        "X": 0,
                        "Y": 0,
                    },
                    "RandomAgent": {}
                }
            ],
            "MapSize": {
                "X": 4,
                "Y": 4,
            },
        }), GameInfo())
        if data is None:
            self.Game = _buildGame(message)
        else:
            info = GameInfo()
            info.ParseFromString(str(data, 'ascii'))
            self.Game = _buildGame(info)
        self.Branches = list()

    def GenerateBranchingPaths(self):
        player = self.Game.Get("ActivePlayer")
        paths = list()
        hasGoodPath = False

        def AddActions(actions: str):
            goodPath = False
            for action in player.Get(actions):
                newPath = MakePath(player)
                if Execute(newPath, action._value):
                    newPath.append(True)
                    goodPath = True
                else:
                    newPath.append(False)
                Revert(newPath)
                paths.append(newPath)
            return goodPath
        hasGoodPath = AddActions("BasicActions") or hasGoodPath
        hasGoodPath = AddActions("MiscActions") or hasGoodPath
        hasGoodPath = AddActions("Hand") or hasGoodPath

        mainPath = [paths]
        mainPath.append(hasGoodPath)

        self.Branches = mainPath

    def ApplyPath(self, path: list):
        for mutation in path:
            if isinstance(mutation, Mutation):
                mutation.Apply()

    def RevertPath(self, path: list):
        for mutation in reversed(path):
            if isinstance(mutation, Mutation):
                mutation.Revert()

    def GetObject(self, name: str):
        obj = self.Game
        for n in name.split("/"):
            if len(n) == 0:
                continue
            if isinstance(obj, Object):
                obj = obj.Get(n)
            elif isinstance(obj, List):
                obj = obj.Get(int(n))
            else:
                assert(False, "This shouldn't happen!")
                return None
        return obj
