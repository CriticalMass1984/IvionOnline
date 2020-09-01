#include <IOEngine/AST/SelectActiveCard.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
void SelectActiveCard(GameInstance *instance, Program *program, Engine::StackCard *card) {
	program->EmplaceMethodCallArgs<AST::SelectActiveCardArgs>(&instance->Memory, card);
}
//applies change
bool SelectActiveCardMethod(GameInstance *instance, Branch *activeBranch, SelectActiveCardArgs *args) noexcept {
	activeBranch->Append<SelectActiveCardDelta>(args, instance->ActiveCard.Get());
	return true;
}

bool SelectActiveCardDelta::Apply(SelectActiveCardDelta *self) {
	*self->args_->card_ = self->card_;
	return true;
}

void SelectActiveCardDelta::Revert(SelectActiveCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO