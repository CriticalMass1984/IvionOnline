#include <IOEngine/AST/TargetPlayer.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool TargetPlayer(Branch *activeBranch, const TargetPlayerArgs *args) noexcept {
	activeBranch->Branches().reserve(GameInstance::Active->Players.size());
	for (Player *player : GameInstance::Active->Players) {
		Branch &newBranch = activeBranch->AddBranch();
		newBranch.Append<TargetPlayerDelta>(player);
		args->player_->Set(&newBranch, player);
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