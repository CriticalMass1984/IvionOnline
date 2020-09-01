#include <IOEngine/AST/TargetPlayer.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {

void TargetPlayer(GameInstance *instance, Program *program,
		StackPlayer *player);
{
	program->EmplaceMethodCallArgs<TargetPlayerArgs>(&instance->Memory, player);
}
//applies change
bool TargetPlayerMethod(GameInstance *instance, Branch *activeBranch, TargetPlayerArgs *args) noexcept {
	activeBranch->Branches().reserve(instance->Players.size());
	for (Player *player : instance->Players) {
		Branch &newBranch = activeBranch->AddBranch(player);
		newBranch.Append<TargetPlayerDelta>(args, player);
		newBranch.Revert();
	}
	return true;
}

bool TargetPlayerDelta::Apply(TargetPlayerDelta *self) {
	*self->args_->player_ = self->player_;
	return true;
}

void TargetPlayerDelta::Revert(TargetPlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO