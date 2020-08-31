#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Vars/Delta.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {
struct TargetPlayerArgs;

bool TargetPlayer(GameInstance* instance, Branch *activeBranch, const TargetPlayerArgs *self) noexcept;

struct TargetPlayerArgs {
	Method const method_{ (Method)TargetPlayer };
	PlayerVar *const player_;

	TargetPlayerArgs(PlayerVar *player) :
			player_(player) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct TargetPlayerDelta : public Var::Delta {
	Player *const player_;

	static bool Apply(TargetPlayerDelta *self);

	static void Revert(TargetPlayerDelta *self);

	inline TargetPlayerDelta(Player *player) noexcept
			:
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), player_(player) {
	}

	~TargetPlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO