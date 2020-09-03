#pragma once

#include <IOEngine/Card.hpp>
#include <IOEngine/Entity.hpp>
#include <IOEngine/Posable.hpp>
#include <IOEngine/Tile.hpp>
#include <IOEngine/Vars/Set.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <IOEngine/Vec2.hpp>
#include <cassert>

namespace IO {
namespace Engine {
class Program;
class GameInstance;
class GameInstance::PlayerDef;

class Player : public Posable {
	std::string name_;

public:
	const int Index;
	const int TeamIndex;

	IntVar Health{ 40 };
	IntVar MaxHealth{ 40 };
	IntVar Actions{ 0 };
	IntVar Power{ 0 };
	TileVar Position;
	Vec2 GetPosition() const override;

	Var::Set<Card *> Deck;
	Var::Set<Card *> Feats;
	Var::Set<Card *> Hand;
	Var::Set<Card *> Discard;

	Var::Var<Program *> MoveAction{ nullptr };
	Var::Var<Program *> BasicAttack{ nullptr };

	Player(GameInstance *instance, const GameInstance::PlayerDef &def);
	~Player() = default;

	const std::string &Name() const noexcept { return name_; }
};
typedef Var::Var<Player *> PlayerVar;
typedef Player *StackPlayer;

} // namespace Engine
} // namespace IO