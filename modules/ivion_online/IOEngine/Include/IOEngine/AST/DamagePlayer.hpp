#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct DamagePlayerArgs;

bool DamagePlayerMethod(GameInstance *instance, Branch *activeBranch, DamagePlayerArgs *args) noexcept;

struct DamagePlayerArgs {
	Method const method_{ (Method)DamagePlayerMethod };
	StackPlayer const *const player_;
	const int *const value_;

	DamagePlayerArgs(StackPlayer *player, int *value) :
			player_(player), value_(value) {
	}
};

DamagePlayerArgs* DamagePlayer(GameInstance *instance, Program *program,
		StackPlayer *player, int *value);

struct DamagePlayerDelta : public Var::Delta {
	const DamagePlayerArgs *const args_;
	Player *const player_;
	int const value_;

	static bool ApplyDelta(DamagePlayerDelta *self);

	static void RevertDelta(DamagePlayerDelta *self);
	inline DamagePlayerDelta(DamagePlayerArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			player_(*args->player_),
			value_(*args->value_) {
	}

	~DamagePlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO