#pragma once

#include <IOEngine/AST/Method.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct StartTheTurnArgs;

bool StartTheTurnMethod(GameInstance *instance, Branch *activeBranch, StartTheTurnArgs *args) noexcept;

struct StartTheTurnArgs {
	Method const method_{ (Method)StartTheTurnMethod };

	StartTheTurnArgs() = default;
};

void StartTheTurn(GameInstance *instance, Program *program);

struct StartTheTurnDelta : public Var::Delta {
	const StartTheTurnArgs *const args_;
	Player *const player_;
	int turnNumber_;

	static bool Apply(StartTheTurnDelta *self);

	static void Revert(StartTheTurnDelta *self);
	inline StartTheTurnDelta(StartTheTurnArgs *args, Player *player, int turnNumber) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			player_(player),
			turnNumber_(turnNumber) {
	}

	~StartTheTurnDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO