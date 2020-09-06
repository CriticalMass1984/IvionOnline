#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct MoveCardArgs;

bool MoveCardMethod(GameInstance *instance, Branch *activeBranch, MoveCardArgs *self) noexcept;

struct MoveCardArgs {
	Method const method_{ (Method)MoveCardMethod };
	StackCard *const card_; //the card whose controller will be selected
	Card::CardZone *const toZone_;

	MoveCardArgs(StackCard *card, Card::CardZone *to) :
			card_(card), toZone_(to) {
	}
};

MoveCardArgs* MoveCard(GameInstance *instance, Program *program,
		StackCard *card, Card::CardZone *to);

struct MoveCardDelta : public Var::Delta {
	Card *const card_; //the card whose controller will be selected
	Card::CardZone const fromZone_;
	Card::CardZone const toZone_;

	static bool ApplyDelta(MoveCardDelta *self);

	static void RevertDelta(MoveCardDelta *self);

	inline MoveCardDelta(MoveCardArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			card_(*args->card_),
			fromZone_((*args->card_)->Zone.Get()),
			toZone_(*args->toZone_) {
	}

	~MoveCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO