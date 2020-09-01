#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Card.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectActiveCardArgs;

bool SelectActiveCard(GameInstance *instance, Branch *activeBranch, const SelectActiveCardArgs *self) noexcept;

struct SelectActiveCardArgs {
	Method const method_{ (Method)SelectActiveCard };
	Engine::CardVar *const card_;

	SelectActiveCardArgs(CardVar *card) :
			card_(card) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct SelectActiveCardDelta : public Var::Delta {
	Card *const card_;

	static bool Apply(SelectActiveCardDelta *self);

	static void Revert(SelectActiveCardDelta *self);

	inline SelectActiveCardDelta(Card *card) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), card_(card) {
	}

	~SelectActiveCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO