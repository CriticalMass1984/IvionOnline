#include <IOEngine/AST/SelectActiveCard.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
void SelectActiveCard(Program *program, GameInstance *instance, Engine::StackCard *card) {
	program->EmplaceMethodCallArgs<AST::SelectActiveCardArgs>(&instance->Memory, outCard);
}
//applies change
bool SelectActiveCardMethod(GameInstance *instance, Branch *activeBranch, const SelectActiveCardArgs *args) noexcept {
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