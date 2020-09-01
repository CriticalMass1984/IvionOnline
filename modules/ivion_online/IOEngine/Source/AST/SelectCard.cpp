#include <IOEngine/AST/SelectCard.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
void SelectCard(GameInstance *instance, Program *program,
		StackCard *card) {
	program->EmplaceMethodCallArgs<SelectCardArgs>(&instance->Memory, card);
}

//applies change
bool SelectCardMethod(GameInstance *instance, Branch *activeBranch, SelectCardArgs *args) noexcept {
	// activeBranch->Branches().reserve(instance->ca);
	// for (Card *player : instance->Cards) {
	// 	Branch &newBranch = activeBranch->AddBranch(player);
	// 	newBranch.Append<SelectCardDelta>(player);
	// 	newBranch.Append<CardVar::SetDelta>(args->player_->Set(player));
	// 	newBranch.Revert();
	// }
	return true;
}

bool SelectCardDelta::Apply(SelectCardDelta *self) {
	*self->args_->card_ = self->card_;
	return true;
}

void SelectCardDelta::Revert(SelectCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO