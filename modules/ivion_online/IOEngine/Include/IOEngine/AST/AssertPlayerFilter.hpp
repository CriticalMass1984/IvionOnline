#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct AssertPlayerFilterArgs;

bool AssertPlayerFilterMethod(GameInstance *instance, Branch *activeBranch, AssertPlayerFilterArgs *args) noexcept;

struct AssertPlayerFilterArgs {
	enum class Filter {
		NONE,
		PLAYER,
		ENEMY,
	};
	Method const method_{ (Method)AssertPlayerFilterMethod };
	StackPlayer *const activePlayer_;
	StackPlayer *const targetPlayer_;
	Filter *const filter_;

	inline AssertPlayerFilterArgs(StackPlayer *activePlayer, StackPlayer *const targetPlayer, Filter *filter) :
			activePlayer_(activePlayer), targetPlayer_(targetPlayer), filter_(filter) {
	}
};

void AssertPlayerFilter(GameInstance *instance, Program *program,
		StackPlayer *activePlayer, StackPlayer *const targetPlayer, AssertPlayerFilterArgs::Filter *filter);

struct AssertPlayerFilterDelta : public Var::Delta {
	AssertPlayerFilterArgs *const args_;
	const bool result_;
	Player *const activePlayer_;
	Player *const targetPlayer_;
	AssertPlayerFilterArgs::Filter const filter_;

	static bool Apply(AssertPlayerFilterDelta *self);

	static void Revert(AssertPlayerFilterDelta *self);
	inline AssertPlayerFilterDelta(AssertPlayerFilterArgs *args, bool result) :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			result_(result),
			activePlayer_(*args->activePlayer_),
			targetPlayer_(*args->targetPlayer_),
			filter_(*args->filter_) {
	}

	~AssertPlayerFilterDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO