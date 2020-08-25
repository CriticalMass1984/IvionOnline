#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>


namespace IO {
namespace Engine {
namespace AST {

struct DamagePlayerArgs;

bool DamagePlayer(Branch *activeBranch, const DamagePlayerArgs *args) noexcept;

struct DamagePlayerArgs {
	Method const method_{ (Method)DamagePlayer };
	Player **const player_;
	int *const value_;

	DamagePlayerArgs(Player **player, int *value) :
			player_(player), value_(value) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct DamagePlayerDelta : public Var::Delta {
	Player *const player_;
	int const value_;

	static bool Apply(DamagePlayerDelta *self);

	static void Revert(DamagePlayerDelta *self);
	inline DamagePlayerDelta(Player *player, int value) noexcept
			:
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), player_(player), value_(value) {
	}

	~DamagePlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO