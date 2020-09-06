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

SelectCardControllerArgs* SelectCardController(GameInstance *instance, Program *program,
		StackPlayer *player, StackCard *card);

struct SelectCardControllerDelta : public Var::Delta {
	SelectCardControllerArgs *const args_;
	Player *const player_;

	static bool ApplyDelta(SelectCardControllerDelta *self);

	static void RevertDelta(SelectCardControllerDelta *self);

	inline SelectCardControllerDelta(SelectCardControllerArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			player_(*args->player_) {
	}

	~SelectCardControllerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO