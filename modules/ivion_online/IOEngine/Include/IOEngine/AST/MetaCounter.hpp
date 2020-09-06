#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

#include <IOEngine/AST/MoveCard.hpp>
#include <IOEngine/AST/ResourceGain.hpp>
#include <IOEngine/AST/SelectCardController.hpp>

namespace IO {
namespace Engine {

namespace AST {
struct MetaCounterArgs;

bool MetaCounterMethod(GameInstance *instance, Branch *activeBranch, MetaCounterArgs *self) noexcept;

struct MetaCounterArgs {
	Method const method_{ (Method)MetaCounterMethod };
	StackCard *const card_;
	SelectCardControllerArgs *const selectCardControllerArgs_;
	ResourceGainArgs *const resourceGainArgs_;
	MoveCardArgs *const moveCardArgs_;

	// StackPlayer* const player_;
	// Card::CardZone* const zone_;
	// int* const actions_;
	// int* const power_;

	// MetaCounterArgs(StackCard *card, StackPlayer* player, Card::CardZone* const zone, int* actions, int* power) :
	// 		card_(card), player_(player), zone_(zone), actions_(actions), power_(power) {
	// }

	MetaCounterArgs(StackCard *card, SelectCardControllerArgs * selectCardControllerArgs, ResourceGainArgs * resourceGainArgs, MoveCardArgs * moveCardArgs) :
			card_(card), selectCardControllerArgs_(selectCardControllerArgs), resourceGainArgs_(resourceGainArgs), moveCardArgs_(moveCardArgs) {}
};

MetaCounterArgs *MetaCounter(GameInstance *instance, Program *program,
		StackCard *card);

struct MetaCounterDelta : public Var::Delta {
	MetaCounterArgs *const args_;
	Card *const card_;

	static bool ApplyDelta(MetaCounterDelta *self);

	static void RevertDelta(MetaCounterDelta *self);

	inline MetaCounterDelta(MetaCounterArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			card_(*args->card_)
			{
	}

	~MetaCounterDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO