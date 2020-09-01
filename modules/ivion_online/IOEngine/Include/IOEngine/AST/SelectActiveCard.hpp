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
	Engine::StackCard *const card_;

	SelectActiveCardArgs(StackCard *card) :
			card_(card) {
	}
};

void SelectActiveCard(Program *program, GameInstance *instance, Engine::StackCard *card);
// doesn't actually do anything, but makes life easier for triggers
struct SelectActiveCardDelta : public Var::Delta {
	SelectActiveCardArgs *const args_;
	Card *const card_;

	static bool Apply(SelectActiveCardDelta *self);

	static void Revert(SelectActiveCardDelta *self);

	inline SelectActiveCardDelta(SelectActiveCardArgs *args, Card *card) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			card_(card) {
	}
	~SelectActiveCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO