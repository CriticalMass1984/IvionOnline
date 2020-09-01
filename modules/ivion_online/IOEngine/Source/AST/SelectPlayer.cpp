#include <IOEngine/AST/SelectPlayer.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool SelectPlayer(GameInstance *instance, Branch *activeBranch, const SelectPlayerArgs *args) noexcept {
	activeBranch->Branches().reserve(instance->Players.size());
	for (Player *player : instance->Players) {
		Branch &newBranch = activeBranch->AddBranch(player);
		newBranch.Append<SelectPlayerDelta>(player);
		newBranch.Append<PlayerVar::SetDelta>(args->player_->Set(player));
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