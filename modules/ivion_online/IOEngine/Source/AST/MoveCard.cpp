#include <IOEngine/AST/MoveCard.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {

Var::Set<Card *> *GetZone(GameInstance *instance, Card *card, Card::CardZone zone) {
	switch (zone) {
		case Card::CardZone::NONE:
			return nullptr;
		case Card::CardZone::FEAT: {
			return &card->Controller->Feats;
		} break;
		case Card::CardZone::DECK: {
			return &card->Controller->Deck;
		} break;
		case Card::CardZone::HAND: {
			return &card->Controller->Hand;
		} break;
		case Card::CardZone::FIELD: {
			return &instance->Field;
		} break;
		case Card::CardZone::DISCARD: {
			return &card->Controller->Discard;
		} break;
		default:
			return nullptr;
	}
}
namespace AST {
MoveCardArgs* MoveCard(GameInstance *instance, Program *program,
		StackCard *card, Card::CardZone *to) {
	return program->EmplaceMethodCallArgs<MoveCardArgs>(&instance->Memory, card, to);
}
//applies change
bool MoveCardMethod(GameInstance *instance, Branch *activeBranch, MoveCardArgs *args) noexcept {
	activeBranch->Append<MoveCardDelta>(args);
	Card *const card = *args->card_;
	bool success;

	success = activeBranch->Append<Var::Var<Card::CardZone>::SetDelta>(card->Zone.Set(*args->toZone_));
	assert(success);

	if (card->Zone.Get() == Card::CardZone::STACK) {
		assert(instance->Stack.Top() == card);
		success = activeBranch->Append<Var::Stack<Card *>::PopDelta>(instance->Stack.Pop());
		assert(success);
	} else {
		Var::Set<Card *> *fromZone = GetZone(instance, card, card->Zone.Get());
		assert(fromZone);
		success = activeBranch->Append<Var::Set<Card *>::RemoveDelta>(fromZone->Remove(card));
		assert(success);
	}

	if (*args->toZone_ == Card::CardZone::STACK) {
		success = activeBranch->Append<Var::Stack<Card *>::PushDelta>(instance->Stack.Push(card));
		assert(success);
	} else {
		Var::Set<Card *> *toZone = GetZone(instance, card, *args->toZone_);
		assert(toZone);
		success = activeBranch->Append<Var::Set<Card *>::InsertDelta>(toZone->Insert(card));
		assert(success);
	}

	return true;
} // namespace AST

bool MoveCardDelta::ApplyDelta(MoveCardDelta *self) {
	return true;
}

void MoveCardDelta::RevertDelta(MoveCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO