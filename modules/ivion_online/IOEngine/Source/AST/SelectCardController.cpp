#include <IOEngine/AST/SelectCardController.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {
void SelectCardController(GameInstance *instance, Program *program,
		StackPlayer *player, StackCard *card) {
	program->EmplaceMethodCallArgs<SelectCardControllerArgs>(&instance->Memory, player, card);
}
//applies change
bool SelectCardControllerMethod(GameInstance *instance, Branch *activeBranch, SelectCardControllerArgs *args) noexcept {
	activeBranch->Append<SelectCardControllerDelta>(args, (*args->card_)->Controller.Get());
	return true;
}

bool SelectCardControllerDelta::Apply(SelectCardControllerDelta *self) {
	*self->args_->player_ = self->player_;
	return true;
}

void SelectCardControllerDelta::Revert(SelectCardControllerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO