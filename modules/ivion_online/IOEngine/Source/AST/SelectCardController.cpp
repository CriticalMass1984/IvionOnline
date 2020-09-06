#include <IOEngine/AST/SelectCardController.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {
SelectCardControllerArgs* SelectCardController(GameInstance *instance, Program *program,
		StackPlayer *player, StackCard *card) {
	return program->EmplaceMethodCallArgs<SelectCardControllerArgs>(&instance->Memory, player, card);
}
//applies change
bool SelectCardControllerMethod(GameInstance *instance, Branch *activeBranch, SelectCardControllerArgs *args) noexcept {\
	*args->player_ = (*args->card_)->Controller.Get();
	activeBranch->Append<SelectCardControllerDelta>(args);
	return true;
}

bool SelectCardControllerDelta::ApplyDelta(SelectCardControllerDelta *self) {
	*self->args_->player_ = self->player_;
	return true;
}

void SelectCardControllerDelta::RevertDelta(SelectCardControllerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO