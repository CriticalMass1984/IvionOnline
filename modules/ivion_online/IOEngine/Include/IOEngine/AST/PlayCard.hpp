#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct PlayCardArgs;

bool PlayCardMethod(GameInstance *instance, Branch *activeBranch, PlayCardArgs *self) noexcept;

struct PlayCardArgs {
	Method const method_{ (Method)PlayCardMethod };
	StackPlayer *const player_; //the selected player
	StackCard *const card_; //the card whose controller will be selected

	PlayCardArgs(StackPlayer *player, StackCard *card) :
			player_(player), card_(card) {
	}
};

PlayCardArgs* PlayCard(GameInstance *instance, Program *program,
		StackPlayer *player, StackCard *card);

struct PlayCardDelta : public Var::Delta {
	PlayCardArgs *const args_;
	Player *const player_;

	static bool ApplyDelta(PlayCardDelta *self);

	static void RevertDelta(PlayCardDelta *self);

	inline PlayCardDelta(PlayCardArgs *args, Player *player) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			player_(player) {
	}

	~PlayCardDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO