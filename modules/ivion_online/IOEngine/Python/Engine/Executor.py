from Engine.Types.List import List



methods = dict()
def _execute

type(List.Get): ""

def Revert(path: list):
    for i in range(len(path) - 2, -1, -1):
        path[i].Revert()

def _executeEffect(effect, remainingEffects: list):
    # returns (success, a list of mutations)
    pass


def Execute(effects: List):
    path = list()
    if len(effects) == 0:
        return False, path
    return _executeEffect(path[0], path[1:])