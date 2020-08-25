#include <IOEngine/AST/SelectPlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool SelectPlayer(Branch *activeBranch, const SelectPlayerArgs *args) noexcept {
	activeBranch->Branches().reserve(GameInstance::Active->Players.size());
	for (Player *player : GameInstance::Active->Players) {
		Branch &newBranch = activeBranch->AddBranch();
		newBranch.Append<SelectPlayerDelta>(player);
		args->player_->Set(&newBranch, player);
		newBranch.Revert();
	}
	return true;
}

bool SelectPlayerDelta::Apply(SelectPlayerDelta *self) {
	return true;
}

void SelectPlayerDelta::Revert(SelectPlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO