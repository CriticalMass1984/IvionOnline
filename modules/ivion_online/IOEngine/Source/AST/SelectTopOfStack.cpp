#include <IOEngine/AST/SelectTopOfStack.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {
SelectTopOfStackArgs* SelectTopOfStack(GameInstance *instance, Program *program,
		StackCard *card) {
	return program->EmplaceMethodCallArgs<SelectTopOfStackArgs>(&instance->Memory, card);
}
//applies change
bool SelectTopOfStackMethod(GameInstance *instance, Branch *activeBranch, SelectTopOfStackArgs *args) noexcept {
	if (instance->Stack.Empty()) {
		activeBranch->Append<SelectTopOfStackDelta>(args, nullptr);
		return false;
	} else {
		activeBranch->Append<SelectTopOfStackDelta>(args, instance->Stack.Top());
		return true;
	}
}

bool SelectTopOfStackDelta::ApplyDelta(SelectTopOfStackDelta *self) {
	*self->args_->card_ = self->card_;
	return self->card_ != nullptr;
}

void SelectTopOfStackDelta::RevertDelta(SelectTopOfStackDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO