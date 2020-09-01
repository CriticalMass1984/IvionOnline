#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectCardControllerArgs;

bool SelectCardController(GameInstance *instance, Branch *activeBranch, const SelectCardControllerArgs *self) noexcept;

struct SelectCardControllerArgs {
	Method const method_{ (Method)SelectCardController };
	PlayerVar *const player_; //the selected player
	Card **const card_; //the card whose controller will be selected

	SelectCardControllerArgs(PlayerVar *player, Card **card) :
			player_(player), card_(card) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct SelectCardControllerDelta : public Var::Delta {
	Player *const player_;
	Card *const card_;

	static bool Apply(SelectCardControllerDelta *self);

	static void Revert(SelectCardControllerDelta *self);

	inline SelectCardControllerDelta(Player *player, Card *card) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), player_(player), card_(card) {
	}

	~SelectCardControllerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO