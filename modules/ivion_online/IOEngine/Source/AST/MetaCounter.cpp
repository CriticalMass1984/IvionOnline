#include <IOEngine/AST/MetaCounter.hpp>
#include <IOEngine/AST/MoveCard.hpp>
#include <IOEngine/AST/ResourceCost.hpp>
#include <IOEngine/AST/ResourceGain.hpp>
#include <IOEngine/AST/SelectCardController.hpp>

#include <IOEngine/Branch.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {
MetaCounterArgs *MetaCounter(GameInstance *instance, Program *program,
		StackCard *card) {
	Card::CardZone *zone = program->EmplaceStackVar<Card::CardZone>(&instance->Memory, Card::CardZone::DISCARD);

	int *actions = program->EmplaceStackVar<int>(&instance->Memory, 0);
	int *power = program->EmplaceStackVar<int>(&instance->Memory, 0);
	StackPlayer *player = program->EmplaceStackVar<StackPlayer>(&instance->Memory, nullptr);

	return program->EmplaceMethodCallArgs<MetaCounterArgs>(&instance->Memory, card,
			SelectCardController(instance, program, player, card),
			ResourceGain(instance, program, player, actions, power),
			MoveCard(instance, program, card, zone));
}
//applies change
bool MetaCounterMethod(GameInstance *instance, Branch *activeBranch, MetaCounterArgs *args) noexcept {
	// get the card controller
	if(!SelectCardControllerMethod(instance, activeBranch, args->selectCardControllerArgs_))
	{
		return false;
	}
	
	// move the card
	Card *card = *args->card_;
	if (card->IsFeat()) {
		*args->moveCardArgs_->toZone_ = Card::CardZone::FEAT;
	}

	if(!MoveCardMethod(instance, activeBranch, args->moveCardArgs_))
	{
		return false;
	}
	
	// resource gain
	for (Method *method : card->PlayEffect->Methods()) {
		if (*method == (Method)AST::ResourceCostMethod) {
			AST::ResourceCostArgs *costArgs = reinterpret_cast<AST::ResourceCostArgs *>(method);
			*args->resourceGainArgs_->actions_ = *costArgs->actions_;
			*args->resourceGainArgs_->power_ = *costArgs->power_;
		}
	}

	if(!ResourceGainMethod(instance, activeBranch, args->resourceGainArgs_))
	{
		return false;
	}

	activeBranch->Append<MetaCounterDelta>(args);

	return true;
}

bool MetaCounterDelta::ApplyDelta(MetaCounterDelta *self) {
	return true;
}

void MetaCounterDelta::RevertDelta(MetaCounterDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO