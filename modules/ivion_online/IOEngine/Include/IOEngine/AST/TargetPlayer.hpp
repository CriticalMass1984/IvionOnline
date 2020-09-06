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

TargetPlayerArgs* TargetPlayer(GameInstance *instance, Program *program,
		StackPlayer *player);

struct TargetPlayerDelta : public Var::Delta {
	TargetPlayerArgs *const args_;
	Player *const player_;

	static bool ApplyDelta(TargetPlayerDelta *self);

	static void RevertDelta(TargetPlayerDelta *self);

	inline TargetPlayerDelta(TargetPlayerArgs *args, Player *player) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			player_(player) {
	}

	~TargetPlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO