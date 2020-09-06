#include <IOEngine/AST/PlayCard.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {
PlayCardArgs* PlayCard(GameInstance *instance, Program *program,
		StackPlayer *player, StackCard *card) {
	program->EmplaceMethodCallArgs<PlayCardArgs>(&instance->Memory, player, card);
}
//applies change
bool PlayCardMethod(GameInstance *instance, Branch *activeBranch, PlayCardArgs *args) noexcept {
	activeBranch->Append<PlayCardDelta>(args, (*args->card_)->Controller.Get());
	return true;
}

bool PlayCardDelta::ApplyDelta(PlayCardDelta *self) {
	*self->args_->player_ = self->player_;
	return true;
}

void PlayCardDelta::RevertDelta(PlayCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO