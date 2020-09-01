#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Card.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectCardArgs;

bool SelectCardMethod(GameInstance *instance, Branch *activeBranch, SelectCardArgs *self) noexcept;

struct SelectCardArgs {
	Method const method_{ (Method)SelectCardMethod };
	StackCard *const card_;

	SelectCardArgs(StackCard *card) :
			card_(card) {
	}
};

void SelectCard(GameInstance *instance, Program *program,
		StackCard *card);

// doesn't actually do anything, but makes life easier for triggers
struct SelectCardDelta : public Var::Delta {
	SelectCardArgs *const args_;
	Card *const card_;

	static bool Apply(SelectCardDelta *self);

	static void Revert(SelectCardDelta *self);

	inline SelectCardDelta(SelectCardArgs *args, Card *card) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			card_(card) {
	}

	~SelectCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO