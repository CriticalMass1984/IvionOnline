from Engine.Types.List import List
from Engine.Effect import *

def BuildMoveAction(gameinstance, player):
    # 0
    player = GetMember(gameinstance, "ActivePlayer")
    ents = CopyMember(gameinstance, "Tiles")
    fltr = Filter(ents, Filter.InRange(Constant(1), player))
    dest = Select(ents, Constant(1), False)
    move = Player_Move(player, dest)

    return List([
        player,
        ents,
        fltr,
        dest,
        move,
    ])
