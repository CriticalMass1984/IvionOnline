from Engine.Types.Object import Object
from Engine.Types.List import List
from Engine.Types.Vec2i import Vec2i
from Engine.Types.Integer import Integer
from Engine.Mutation import Mutation
import math
from enum import IntEnum


def Revert(path: list):
    # last element of a path is always either None or split paths
    for mut in reversed(path):
        if isinstance(mut, Mutation):
            mut.Revert()


def Execute(path: list, effectsTail: list):
    if len(effectsTail) == 0:
        return True
    head = effectsTail[0]
    tail = effectsTail[1:]
    return head.Execute(path, tail)


def GetPos(e):
    if "Position" in e:
        return e.Get("Position")
    # assume it's a card
    if "Attached" in e:
        target = e.Get("Attached")
        if target is not None:
            return GetPos(target)
    if "Controller" in e:
        return e.Get("Controller").Get("Position")
    raise NotImplementedError(
        "Tried to get the position of an entity, but it failed")


class Effect:
    def __init__(self):
        self.Result = None

    # allows either Effects or Types to be used as arguments
    def Get(self):
        if isinstance(self.Result, int) or isinstance(self.Result, str) or isinstance(self.Result, list) or isinstance(self.Result, dict):
            return self.Result
        return self.Result.Get()


class GetMember(Effect):
    def __init__(self, obj, member):
        super().__init__()
        self.Object = obj
        self.Member = member

    def Execute(self, path: list, effectsTail: list):
        self.Result = self.Object.Get(self.Member)
        return Execute(path, effectsTail)


class CopyMember(Effect):
    def __init__(self, obj, member):
        super().__init__()
        self.Object = obj
        self.Member = member

    def Execute(self, path: list, effectsTail: list):
        self.Result = self.Object.Get(self.Member).Clone()
        return Execute(path, effectsTail)


class Constant(Effect):
    def __init__(self, value):
        super().__init__()
        self.Result = value

    def Execute(self, path: list, effectsTail: list):
        return Execute(path, effectsTail)


class Select(Effect):
    # count is something for which .Get() returns an int
    def __init__(self, ents: Effect, count: Effect, upTo: bool):
        super().__init__()
        self.Entities = ents
        self.Count = count
        self.upTo = upTo
        self.Result = None

    def Execute(self, path: list, effectsTail: list):
        def Choose(choices: list, options: list, n: int):
            results = None
            if self.upTo or len(choices) == self.Count.Get():
                results = [choices]
            else:
                results = list()

            if n == 0:
                return results
            for i in range(len(options)):
                newChoices = options[i:i+1] + choices
                newOptions = options[0:i] + options[i+1:]
                results.extend(Choose(newChoices, newOptions, n-1))
            return results

        self.Result = List()
        # get combinations
        results = Choose(list(), self.Entities.Result._value, self.Count.Get())

        # create branching paths
        newPaths = list()
        path.append(newPaths)
        hasGoodPath = False
        for choiceList in results:
            # new path
            newPath = list()
            newPaths.append(newPath)
            for choice in choiceList:
                newPath.append(self.Result.Append(choice))

            if Execute(newPath, effectsTail):
                newPath.append(True)
                hasGoodPath = True
            else:
                newPath.append(False)

            Revert(newPath)

        return hasGoodPath


class Filter(Effect):
    class InRange:
        def __init__(self, maxDist, source):
            self.Range = maxDist
            self.Source = source

        def IsValid(self, entPos: Vec2i):
            if isinstance(self.Source, list) or isinstance(self.Source, List):
                for source in self.Source:
                    if entPos.Distance(GetPos(source)) <= self.Range.Get():
                        return True
            if isinstance(self.Source.Result, list) or isinstance(self.Source.Result, List):
                for source in self.Source.Result:
                    if entPos.Distance(GetPos(source)) <= self.Range.Get():
                        return True
            else:
                if entPos.Distance(GetPos(self.Source.Result)) <= self.Range.Get():
                    return True
            return False

    def __init__(self, entities: Effect, filtr):
        super().__init__()
        self.Entities = entities
        self.Filter = filtr

    def Execute(self, path: list, effectsTail: list):
        pendingRemoval = list()
        for i in range(len(self.Entities.Result)):
            if not self.Filter.IsValid(GetPos(self.Entities.Result.Get(i))):
                pendingRemoval.append(i)

        for r in reversed(pendingRemoval):
            path.append(self.Entities.Result.Remove(r))

        self.Result = self.Entities.Result

        return Execute(path, effectsTail)


class Player_Move(Effect):
    def __init__(self, player, dest):
        super().__init__()
        self.Player = player
        self.Destination = dest
        self.Result = None

    def Execute(self, path: list, effectsTail: list):
        assert(len(self.Destination.Result) == 1)
        pos = GetPos(self.Destination.Result.Get(0))
        player = None
        if isinstance(self.Player.Result, List):
            assert(len(self.Player.Result) == 1)
            player = self.Player.Result.Get(0)
        elif isinstance(self.Player.Result, list):
            assert(len(self.Player.Result) == 1)
            player = self.Player.Result[0]
        elif isinstance(self.Player.Result, Object):
            player = self.Player.Result


        path.append(player.Get("Position").Set(vec=pos))

        return Execute(path, effectsTail)
