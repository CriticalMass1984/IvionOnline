#include "register_types.h"

#include "core/class_db.h"
#include <Godot/Player.hpp>
#include <Godot/Card.hpp>
#include <Godot/Pawn.hpp>
#include <Godot/Tile.hpp>
#include <Godot/HostController.hpp>
#include <Godot/BattleInstance.hpp>

using namespace godot;

void register_ivion_online_types()
{
    ClassDB::register_class<Player>();
    ClassDB::register_class<Card>();
    ClassDB::register_class<BattleInstance>();
    ClassDB::register_class<HostController>();
    ClassDB::register_class<Pawn>();
    ClassDB::register_class<Tile>();
}
void unregister_ivion_online_types()
{

}
