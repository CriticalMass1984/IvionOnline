#include <IOEngine/AST/SelectCardController.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool SelectCardController(GameInstance *instance, Branch *activeBranch, const SelectCardControllerArgs *args) noexcept {
	Player *player = (*args->card_)->Controller.Get();
	activeBranch->Append<SelectCardControllerDelta>(player, *args->card_);
	activeBranch->Append<PlayerVar::SetDelta>(args->player_->Set(player));
	return true;
}

bool SelectCardControllerDelta::Apply(SelectCardControllerDelta *self) {
	return true;
}

void SelectCardControllerDelta::Revert(SelectCardControllerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO