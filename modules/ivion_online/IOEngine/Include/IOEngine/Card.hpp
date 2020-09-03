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
struct CardDef;

class Card : public Posable {
private:
	const CardDef *const def_;

public:
	Program *PlayEffect;
	Program *ResolveEffect;
	Program *PassiveEffect;

	enum class Zone {
		NONE,
		FEAT,
		DECK,
		HAND,
		STACK,
		FIELD,
		DISCARD,
	};

	Var::Var<Zone> Zone{ Zone::NONE };
	IntVar Actions{ 0 };
	IntVar Power{ 0 };
	IntVar Range{ -1 };
	Var::Var<bool> IsRevealed{ false };
	Var::Var<bool> Instant{ false };
	Var::Var<Player *> Controller{ nullptr };
	Var::Var<Posable *> AttachedTarget{ nullptr };

	Vec2 GetPosition() const override;

	Card(GameInstance *instance, Player *owner, const CardDef *def) noexcept;

	Card(const Card &) noexcept = delete;
	Card(Card &&) noexcept = default;

	const std::string &Name() const noexcept { return def_->name_; }
};
typedef Var::Var<Card *> CardVar;
typedef Card *StackCard;

} // namespace Engine
} // namespace IO