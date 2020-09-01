#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectCardControllerArgs;

bool SelectCardControllerMethod(GameInstance *instance, Branch *activeBranch, SelectCardControllerArgs *self) noexcept;

struct SelectCardControllerArgs {
	Method const method_{ (Method)SelectCardControllerMethod };
	StackPlayer *const player_; //the selected player
	StackCard *const card_; //the card whose controller will be selected

	SelectCardControllerArgs(StackPlayer *player, StackCard *card) :
			player_(player), card_(card) {
	}
};

void SelectCardController(GameInstance *instance, Program *program,
		StackPlayer *player, StackCard *card);

// doesn't actually do anything, but makes life easier for triggers
struct SelectCardControllerDelta : public Var::Delta {
	SelectCardControllerArgs *const args_;
	Player *const player_;

	static bool Apply(SelectCardControllerDelta *self);

	static void Revert(SelectCardControllerDelta *self);

	inline SelectCardControllerDelta(SelectCardControllerArgs *args, Player *player) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			player_(player) {
	}

	~SelectCardControllerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO