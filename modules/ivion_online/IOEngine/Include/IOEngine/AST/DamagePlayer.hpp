#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct DamagePlayerArgs;

bool DamagePlayerMethod(GameInstance *instance, Branch *activeBranch, const DamagePlayerArgs *args) noexcept;

struct DamagePlayerArgs {
	Method const method_{ (Method)DamagePlayerMethod };
	StackPlayer const *const player_;
	const int *const value_;

	DamagePlayerArgs(StackPlayer *player, int *value) :
			player_(player), value_(value) {
	}
};

void DamagePlayer(GameInstance *instance, Program *program,
		StackPlayer *player, int *value);

// doesn't actually do anything, but makes life easier for triggers
struct DamagePlayerDelta : public Var::Delta {
	const DamagePlayerArgs *const args_;
	Player *const player_;
	int const value_;

	static bool Apply(DamagePlayerDelta *self);

	static void Revert(DamagePlayerDelta *self);
	inline DamagePlayerDelta(DamagePlayerArgs *args, Player *player, int damage) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			player_(player),
			value_(damage) {
	}

	~DamagePlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO