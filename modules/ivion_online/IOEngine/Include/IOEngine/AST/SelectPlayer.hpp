#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectPlayerArgs;

bool SelectPlayerMethod(GameInstance *instance, Branch *activeBranch, SelectPlayerArgs *self) noexcept;

struct SelectPlayerArgs {
	Method const method_{ (Method)SelectPlayerMethod };
	StackPlayer *const player_;

	SelectPlayerArgs(StackPlayer *player) :
			player_(player) {
	}
};

void SelectPlayer(GameInstance *instance, Program *program,
		StackPlayer *player);

struct SelectPlayerDelta : public Var::Delta {
	SelectPlayerArgs *const args_;
	Player *const player_;

	static bool Apply(SelectPlayerDelta *self);

	static void Revert(SelectPlayerDelta *self);

	inline SelectPlayerDelta(SelectPlayerArgs *args, Player *player) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			player_(player) {
	}

	~SelectPlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO