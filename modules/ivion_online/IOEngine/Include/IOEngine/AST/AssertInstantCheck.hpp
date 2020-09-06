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

AssertInstantCheckArgs* AssertInstantCheck(GameInstance *instance, Program *program,
		Card *card);

struct AssertInstantCheckDelta : public Var::Delta {
	AssertInstantCheckArgs *const args_;
	const bool result_;

	static bool ApplyDelta(AssertInstantCheckDelta *self);

	static void RevertDelta(AssertInstantCheckDelta *self);
	inline AssertInstantCheckDelta(AssertInstantCheckArgs *args, bool result) :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			result_(result) {}

	~AssertInstantCheckDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO