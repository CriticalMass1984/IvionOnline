#include <IOEngine/AST/DamagePlayer.hpp>
#include <IOEngine/AST/PlayerDrawCard.hpp>
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

void PlayerDrawCard(GameInstance *instance, Program *program,
		StackPlayer *player, int *value) {
	program->EmplaceMethodCallArgs<PlayerDrawCardArgs>(&instance->Memory, player, value);
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
			activeBranch->Append<Var::Set<Card *>::RemoveDelta>(player->Deck.Remove(card));
			activeBranch->Append<Var::Set<Card *>::InsertDelta>(player->Hand.Insert(card));
		}
	}
	return true;
}

bool PlayerDrawCardDelta::Apply(PlayerDrawCardDelta *self) {
	return true;
}

void PlayerDrawCardDelta::Revert(PlayerDrawCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO