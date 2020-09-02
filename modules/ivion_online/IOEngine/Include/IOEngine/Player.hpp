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
class GameInstance;
class Player : public Posable {
	std::string name_;

public:
	const int Index;
	const int TeamIndex;

	Var::Var<int> Health{ 40 };
	Var::Var<int> MaxHealth{ 40 };
	TileVar Position;
	Vec2 GetPosition() const override;

	Var::Var<Program *> MoveAction{ nullptr };

	Player(GameInstance *instance, const std::string &name, int idx, int teamIdx, Tile *start);
	~Player() = default;

	const std::string &Name() const noexcept { return name_; }
};
typedef Var::Var<Player *> PlayerVar;
typedef Player *StackPlayer;

} // namespace Engine
} // namespace IO