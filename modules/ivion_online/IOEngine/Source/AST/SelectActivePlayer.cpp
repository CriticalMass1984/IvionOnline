#include <IOEngine/AST/SelectActivePlayer.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
void SelectActivePlayer(GameInstance *instance, Program *program, StackPlayer *player) {
	program->EmplaceMethodCallArgs<AST::SelectActivePlayerArgs>(&instance->Memory, player);
}
//applies change
bool SelectActivePlayerMethod(GameInstance *instance, Branch *activeBranch, SelectActivePlayerArgs *args) noexcept {
	activeBranch->Append<SelectActivePlayerDelta>(args, instance->ActivePlayer.Get());
	return true;
}

bool SelectActivePlayerDelta::Apply(SelectActivePlayerDelta *self) {
	*self->args_->player_ = self->player_;
	return true;
}

void SelectActivePlayerDelta::Revert(SelectActivePlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO