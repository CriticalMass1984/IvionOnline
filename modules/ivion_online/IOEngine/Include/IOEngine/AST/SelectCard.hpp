#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Card.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectCardArgs;

bool SelectCard(GameInstance *instance, Branch *activeBranch, const SelectCardArgs *self) noexcept;

struct SelectCardArgs {
	Method const method_{ (Method)SelectCard };
	Engine::CardVar *const card_;

	SelectCardArgs(CardVar *card) :
			card_(card) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct SelectCardDelta : public Var::Delta {
	Card *const card_;

	static bool Apply(SelectCardDelta *self);

	static void Revert(SelectCardDelta *self);

	inline SelectCardDelta(Card *card) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), card_(card) {
	}

	~SelectCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO