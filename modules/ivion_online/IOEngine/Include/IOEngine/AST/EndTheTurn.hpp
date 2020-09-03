#pragma once

#include <IOEngine/AST/Method.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct EndTheTurnArgs;

bool EndTheTurnMethod(GameInstance *instance, Branch *activeBranch, EndTheTurnArgs *args) noexcept;

struct EndTheTurnArgs {
	Method const method_{ (Method)EndTheTurnMethod };
	StackPlayer const *const player_;

	EndTheTurnArgs(StackPlayer *player) :
			player_(player) {
	}
};

void EndTheTurn(GameInstance *instance, Program *program,
		StackPlayer *player);

struct EndTheTurnDelta : public Var::Delta {
	const EndTheTurnArgs *const args_;
	Player *const player_;

	static bool Apply(EndTheTurnDelta *self);

	static void Revert(EndTheTurnDelta *self);
	inline EndTheTurnDelta(EndTheTurnArgs *args) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			player_(*args->player_) {
	}

	~EndTheTurnDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO