#include <IOEngine/AST/SelectCard.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool SelectCard(GameInstance *instance, Branch *activeBranch, const SelectCardArgs *args) noexcept {
	// activeBranch->Branches().reserve(instance->ca);
	// for (Card *player : instance->Cards) {
	// 	Branch &newBranch = activeBranch->AddBranch(player);
	// 	newBranch.Append<SelectCardDelta>(player);
	// 	newBranch.Append<CardVar::SetDelta>(args->player_->Set(player));
	// 	newBranch.Revert();
	// }
	return true;
}

bool SelectCardDelta::Apply(SelectCardDelta *self) {
	return true;
}

void SelectCardDelta::Revert(SelectCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO