#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct AssertInRangeArgs;

bool AssertInRangeMethod(GameInstance *instance, Branch *activeBranch, AssertInRangeArgs *args) noexcept;

struct AssertInRangeArgs {
	Method const method_{ (Method)AssertInRangeMethod };
	StackCard *const card_;
	StackPosable *const target_;

	inline AssertInRangeArgs(StackCard *card, StackPosable *target) :
			card_(card), target_(target) {
	}
};

AssertInRangeArgs* AssertInRange(GameInstance *instance, Program *program,
		StackCard *card, StackPosable *target);

struct AssertInRangeDelta : public Var::Delta {
	AssertInRangeArgs *const args_;
	const bool result_;

	static bool ApplyDelta(AssertInRangeDelta *self);

	static void RevertDelta(AssertInRangeDelta *self);
	inline AssertInRangeDelta(AssertInRangeArgs *args, bool result) :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			result_(result) {}

	~AssertInRangeDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO