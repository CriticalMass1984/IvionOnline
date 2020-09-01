#pragma once

#include <IOEngine/Card.hpp>
#include <IOEngine/Entity.hpp>
#include <IOEngine/Posable.hpp>
#include <IOEngine/Tile.hpp>
#include <IOEngine/Vars/Dictionary.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <IOEngine/Vec2.hpp>
#include <cassert>

namespace IO {
namespace Engine {
class Program;
class Player : public Entity, public Posable {
public:
	const int Index;
	const int TeamIndex;

	Var::Var<int> Health{ 40 };
	Var::Var<int> MaxHealth{ 40 };
	TileVar Position;
	Vec2 GetPosition() const override;

	Var::Dictionary<Program *> Actionables;

	Player(int idx, int teamIdx);
	~Player() = default;
};
typedef Var::Var<Player *> PlayerVar;
typedef Player *StackPlayer;

} // namespace Engine
} // namespace IO