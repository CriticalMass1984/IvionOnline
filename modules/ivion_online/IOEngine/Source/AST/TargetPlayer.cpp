#include <IOEngine/AST/TargetPlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool TargetPlayer(GameInstance *instance, Branch *activeBranch, const TargetPlayerArgs *args) noexcept {
	activeBranch->Branches().reserve(instance->Players.size());
	for (Player *player : instance->Players) {
		Branch &newBranch = activeBranch->AddBranch(player);
		newBranch.Append<TargetPlayerDelta>(player);
		newBranch.Append<PlayerVar::SetDelta>(args->player_->Set(player));
		newBranch.Revert();
	}
	return true;
}

bool TargetPlayerDelta::Apply(TargetPlayerDelta *self) {
	return true;
}

void TargetPlayerDelta::Revert(TargetPlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO