#pragma once

#include <IOEngine/AST/Method.hpp>
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

	PlayerDrawCardArgs(StackPlayer *player, int *value, MoveCardArgs * const moveCardArgs) :
			player_(player), value_(value) {
	}
};

PlayerDrawCardArgs* PlayerDrawCard(GameInstance *instance, Program *program,
		StackPlayer *player, int *value);

struct PlayerDrawCardDelta : public Var::Delta {
	Player *const player_;
	int const value_;

	static bool ApplyDelta(PlayerDrawCardDelta *self);

	static void RevertDelta(PlayerDrawCardDelta *self);
	inline PlayerDrawCardDelta(PlayerDrawCardArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			player_(*args->player_),
			value_(*args->value_) {}

	~PlayerDrawCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO