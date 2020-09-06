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
	StackPlayer *player_;
	StartTheTurnArgs(StackPlayer *player) :
			player_(player) {}
};

StartTheTurnArgs* StartTheTurn(GameInstance *instance, Program *program, StackPlayer *player);

struct StartTheTurnDelta : public Var::Delta {
	const StartTheTurnArgs *const args_;
	Player *const player_;
	int turnNumber_;

	static bool ApplyDelta(StartTheTurnDelta *self);

	static void RevertDelta(StartTheTurnDelta *self);
	inline StartTheTurnDelta(StartTheTurnArgs *args, Player *player, int turnNumber) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			player_(player),
			turnNumber_(turnNumber) {
	}

	~StartTheTurnDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO