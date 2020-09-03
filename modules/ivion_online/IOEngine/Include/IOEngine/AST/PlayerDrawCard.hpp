#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct PlayerDrawCardArgs;

bool PlayerDrawCardMethod(GameInstance *instance, Branch *activeBranch, PlayerDrawCardArgs *args) noexcept;

struct PlayerDrawCardArgs {
	Method const method_{ (Method)PlayerDrawCardMethod };
	StackPlayer const *const player_;
	const int *const value_;

	PlayerDrawCardArgs(StackPlayer *player, int *value) :
			player_(player), value_(value) {
	}
};

void PlayerDrawCard(GameInstance *instance, Program *program,
		StackPlayer *player, int *value);

struct PlayerDrawCardDelta : public Var::Delta {
	const PlayerDrawCardArgs *const args_;
	Player *const player_;
	int const value_;

	static bool Apply(PlayerDrawCardDelta *self);

	static void Revert(PlayerDrawCardDelta *self);
	inline PlayerDrawCardDelta(PlayerDrawCardArgs *args) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			player_(*args->player_),
			value_(*args->value_) {}

	~PlayerDrawCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO