#include <IOEngine/AST/SelectActiveCard.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
SelectActiveCardArgs* SelectActiveCard(GameInstance *instance, Program *program, StackCard *card, Card *actualCard) {
	return program->EmplaceMethodCallArgs<AST::SelectActiveCardArgs>(&instance->Memory, card, actualCard);
}
//applies change
bool SelectActiveCardMethod(GameInstance *instance, Branch *activeBranch, SelectActiveCardArgs *args) noexcept {
	activeBranch->Append<SelectActiveCardDelta>(args);
	activeBranch->Append<CardVar::SetDelta>(instance->ActiveCard.Set(args->actualCard_));
	return true;
}

bool SelectActiveCardDelta::ApplyDelta(SelectActiveCardDelta *self) {
	*self->args_->card_ = self->card_;
	return true;
}

void SelectActiveCardDelta::RevertDelta(SelectActiveCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO