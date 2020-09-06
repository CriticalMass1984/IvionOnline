#include <IOEngine/AST/SelectPlayer.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {

SelectPlayerArgs* SelectPlayer(GameInstance *instance, Program *program,
		StackPlayer *player) {
	return program->EmplaceMethodCallArgs<SelectPlayerArgs>(&instance->Memory, player);
}
//applies change
bool SelectPlayerMethod(GameInstance *instance, Branch *activeBranch, SelectPlayerArgs *args) noexcept {
	activeBranch->Branches().reserve(instance->Players.size());
	for (Player *player : instance->Players) {
		Branch &newBranch = activeBranch->AddBranch(player);
		newBranch.Append<SelectPlayerDelta>(args, player);
		newBranch.Revert();
	}
	return true;
}

bool SelectPlayerDelta::ApplyDelta(SelectPlayerDelta *self) {
	*self->args_->player_ = self->player_;
	return true;
}

void SelectPlayerDelta::RevertDelta(SelectPlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO