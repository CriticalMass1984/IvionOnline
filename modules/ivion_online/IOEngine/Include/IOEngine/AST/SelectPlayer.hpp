#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

static IO::Engine::Player *p{ nullptr };

namespace IO {
namespace Engine {

namespace AST {
struct SelectPlayerArgs;

bool SelectPlayer(Branch *activeBranch, const SelectPlayerArgs *self) noexcept;

struct SelectPlayerArgs {
	Method const method_{ (Method)SelectPlayer };
	Engine::PlayerVar *const player_;

	SelectPlayerArgs(PlayerVar *player) :
			player_(player) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct SelectPlayerDelta : public Var::Delta {
	Player *const player_;

	static bool Apply(SelectPlayerDelta *self);

	static void Revert(SelectPlayerDelta *self);

	inline SelectPlayerDelta(Player *player) noexcept
			:
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), player_(player) {
	}

	~SelectPlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO