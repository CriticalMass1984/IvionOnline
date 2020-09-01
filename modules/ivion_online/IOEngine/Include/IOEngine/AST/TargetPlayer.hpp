#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Vars/Delta.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {
struct TargetPlayerArgs;

bool TargetPlayerMethod(GameInstance *instance, Branch *activeBranch, TargetPlayerArgs *self) noexcept;

struct TargetPlayerArgs {
	Method const method_{ (Method)TargetPlayerMethod };
	StackPlayer *const player_;

	TargetPlayerArgs(StackPlayer *player) :
			player_(player) {
	}
};

void TargetPlayer(GameInstance *instance, Program *program,
		StackPlayer *player);

struct TargetPlayerDelta : public Var::Delta {
	TargetPlayerArgs *const args_;
	Player *const player_;

	static bool Apply(TargetPlayerDelta *self);

	static void Revert(TargetPlayerDelta *self);

	inline TargetPlayerDelta(TargetPlayerArgs *args, Player *player) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			player_(player) {
	}

	~TargetPlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO