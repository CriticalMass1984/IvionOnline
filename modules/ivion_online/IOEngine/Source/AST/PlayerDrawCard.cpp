#include <IOEngine/AST/PlayerDrawCard.hpp>

#include <IOEngine/AST/DamagePlayer.hpp>
#include <IOEngine/AST/MoveCard.hpp>
#include <IOEngine/GameInstance.hpp>

IO::Engine::Card *GetRandomElement(std::unordered_set<IO::Engine::Card *> &cards, IO::Engine::GameInstance *instance) {
	assert(!cards.empty());
	assert(instance);
	// https://stackoverflow.com/questions/12761315/random-element-from-unordered-set-in-o1/31522686#31522686
	//get a fake card to insert into the unordered map
	//do not access any members
	IO::Engine::Card *fakeCard = (IO::Engine::Card *)instance->Objects.GetRandomPointer();
	auto [it, success] = cards.insert(fakeCard);
	if (success) {
		//remove it
		it = cards.erase(it);

		// if we somehow inserted the final element, return the first one
		if (it == cards.end()) {
			return *cards.begin();
		}
		return *it;
	} else {
		//managed to hit an actual card by random chance
		return *it;
	}
}

namespace IO {
namespace Engine {
namespace AST {

PlayerDrawCardArgs *PlayerDrawCard(GameInstance *instance, Program *program,
		StackPlayer *player, int *value) {
	Card::CardZone *zone = program->EmplaceStackVar<Card::CardZone>(&instance->Memory, Card::CardZone::HAND);
	StackCard *card = program->EmplaceStackVar<StackCard>(&instance->Memory, nullptr);

	PlayerDrawCardArgs* args = program->EmplaceMethodCallArgs<PlayerDrawCardArgs>(&instance->Memory,
			player, value);
}

//applies change
bool PlayerDrawCardMethod(GameInstance *instance, Branch *activeBranch, PlayerDrawCardArgs *args) noexcept {
	activeBranch->Append<PlayerDrawCardDelta>(args);

	Player *player = *args->player_;
	for (int i = 0; i < *args->value_; ++i) {
		if (player->Deck.Empty()) {
			activeBranch->Append<IntVar::SetDelta>(player->Health.Set(player->Health.Get() - 5));
		} else {
			Card *card = GetRandomElement(player->Deck.GetElements(), instance);
			assert(card->Zone.Get() == Card::CardZone::DECK);
			MoveCardArgs mca(,);
			*mca->card_ = card;
			MoveCardMethod(instance, activeBranch, mca);

			assert(card->Zone.Get() == Card::CardZone::HAND);
		}
	}
	return true;
}

bool PlayerDrawCardDelta::ApplyDelta(PlayerDrawCardDelta *self) {
	return true;
}

void PlayerDrawCardDelta::RevertDelta(PlayerDrawCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO