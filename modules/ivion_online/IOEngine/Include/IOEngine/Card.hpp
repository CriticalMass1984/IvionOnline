#pragma once

#include <IOEngine/Entity.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <IOEngine/Posable.hpp>
#include <IOEngine/Program.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <cassert>

namespace IO {
namespace Engine {
class Player;
class Program;

class Card : public Entity, public Posable {
private:
public:
	Program *Effect;

	enum class Zone {
		NONE,
		FEAT,
		DECK,
		HAND,
		STACK,
		FIELD,
		DISCARD,
	};

	IntVar Range{ -1 };
	Var::Var<Zone> Zone;
	Var::Var<bool> IsRevealed{ false };
	Var::Var<Player *> Controller{ nullptr };
	Var::Var<Posable *> AttachedTarget{ nullptr };

	Vec2 GetPosition() const override;

	Card(Program *effect, Player *owner) noexcept;

	Card(const Card &) noexcept = delete;
	Card(Card &&) noexcept = default;
};
typedef Var::Var<Card *> CardVar;
typedef Card *StackCard;

} // namespace Engine
} // namespace IO