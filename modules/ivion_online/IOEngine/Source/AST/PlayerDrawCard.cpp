#include <IOEngine/AST/PlayerDrawCard.hpp>
#include <IOEngine/GameInstance.hpp>

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
		Card *card = player->Deck.GetRandomElement(instance);
		activeBranch->Append<Var::Set<Card *>::RemoveDelta>(player->Deck.Remove(card));
		activeBranch->Append<Var::Set<Card *>::InsertDelta>(player->Hand.Insert(card));
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