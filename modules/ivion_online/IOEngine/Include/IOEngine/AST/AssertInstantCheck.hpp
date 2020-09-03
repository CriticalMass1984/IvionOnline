#pragma once

#include <IOEngine/AST/Method.hpp>

namespace IO {
namespace Engine {
namespace AST {

struct AssertInstantCheckArgs;

bool AssertInstantCheckMethod(GameInstance *instance, Branch *activeBranch, AssertInstantCheckArgs *args) noexcept;

struct AssertInstantCheckArgs {
	Method const method_{ (Method)AssertInstantCheckMethod };
	Card *const card_;

	inline AssertInstantCheckArgs(Card *card) :
			card_(card) {
	}
};

void AssertInstantCheck(GameInstance *instance, Program *program,
		Card *card);

// doesn't actually do anything, but makes life easier for triggers
struct AssertInstantCheckDelta : public Var::Delta {
	AssertInstantCheckArgs *const args_;
	const bool result_;

	static bool Apply(AssertInstantCheckDelta *self);

	static void Revert(AssertInstantCheckDelta *self);
	inline AssertInstantCheckDelta(AssertInstantCheckArgs *args, bool result) :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			result_(result) {}

	~AssertInstantCheckDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO