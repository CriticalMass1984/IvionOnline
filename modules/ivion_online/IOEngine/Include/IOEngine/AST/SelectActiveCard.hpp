#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Card.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {
struct SelectActiveCardArgs;

bool SelectActiveCardMethod(GameInstance *instance, Branch *activeBranch, SelectActiveCardArgs *self) noexcept;

struct SelectActiveCardArgs {
	Method const method_{ (Method)SelectActiveCardMethod };
	StackCard *const card_;
	Card *const actualCard_;

	SelectActiveCardArgs(StackCard *card, Card *actualCard) :
			card_(card), actualCard_(actualCard) {
	}
};

SelectActiveCardArgs* SelectActiveCard(GameInstance *instance, Program *program, StackCard *card, Card *actualCard);

struct SelectActiveCardDelta : public Var::Delta {
	SelectActiveCardArgs *const args_;
	Card *const card_;

	static bool ApplyDelta(SelectActiveCardDelta *self);

	static void RevertDelta(SelectActiveCardDelta *self);

	inline SelectActiveCardDelta(SelectActiveCardArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			card_(args->actualCard_) {
	}
	~SelectActiveCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO