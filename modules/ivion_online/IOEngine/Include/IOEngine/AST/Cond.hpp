#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct CondArgs;

bool Cond(GameInstance *instance, Branch *activeBranch, const CondArgs *self) noexcept;

struct CondArgs {
	Method const method_{ (Method)Cond };
	bool *const condition_;
	Program *const ifTrue_;
	Program *const ifFalse_;

	CondArgs(bool *condition, Program *ifTrue, Program *ifFalse) :
			condition_(condition), ifTrue_(ifTrue), ifFalse_(ifFalse) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct CondDelta : public Var::Delta {
	bool const condition_;
	Program *const ifTrue_;
	Program *const ifFalse_;

	static bool Apply(CondDelta *self);

	static void Revert(CondDelta *self);

	inline CondDelta(bool condition, Program *ifTrue, Program *ifFalse) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), condition_(condition), ifTrue_(ifTrue), ifFalse_(ifFalse) {
	}

	~CondDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO