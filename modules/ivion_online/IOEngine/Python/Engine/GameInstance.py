from Engine.Types.Object import Object
from Engine.Types.List import List
from Engine.Types.List import List
from Engine.Types.Vec2i import Vec2i
from Engine.Types.Integer import Integer
from Engine.Effect import Execute, Revert
from Engine.BasicActions import Move
from Engine.Mutation import Mutation
import Engine.PlayerTypes.RandomAgent as RA

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


def _buildAgent(info: PlayerInfo):
    if info.HasField("AIAgent"):
        return None
    if info.HasField("PlayerAgent"):
        return None
    if info.HasField("RandomAgent"):
        return RA.RandomAgent(info.RandomAgent)


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
        "Agent": _buildAgent(info),
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

class GameInstance:
    def __init__(self, info: GameInfo):
        self.Game = _buildGame(info)

    def AdvanceGameState(self):
        player = self.Game.Get("ActivePlayer")
        paths = list()
        hasGoodPath = False
        for action in player.Get("BasicActions"):
            newPath = list()
            if Execute(newPath, action._value):
                newPath.append(True)
                hasGoodPath = True
            else:
                newPath.append(False)
            Revert(newPath)
            paths.append(newPath)

        mainPath = [paths]
        mainPath.append(hasGoodPath)
        # path.extend(player.Get("MiscActions"))
        # path.extend(player.Get("Hand"))

        agent = player.Get("Agent")
        choices = agent.MakeChoices(mainPath)
        self.ApplyPaths(mainPath, choices)


    def ApplyPaths(self, path: list, choices: list):
        while True:
            for mutation in path:
                if isinstance(mutation, Mutation):
                    mutation.Apply()
            if len(choices) == 0:
                break
            choice = choices[0]
            choices = choices[1:]
            path = path[-2][choice]
        

