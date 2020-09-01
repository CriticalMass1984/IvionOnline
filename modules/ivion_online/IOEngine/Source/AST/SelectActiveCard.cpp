#include <IOEngine/AST/SelectActiveCard.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool SelectActiveCard(GameInstance *instance, Branch *activeBranch, const SelectActiveCardArgs *args) noexcept {
	Card *card = instance->ActiveCard.Get();
	activeBranch->Append<SelectActiveCardDelta>(card);
	activeBranch->Append<CardVar::SetDelta>(args->card_->Set(card));
	return true;
}

bool SelectActiveCardDelta::Apply(SelectActiveCardDelta *self) {
	return true;
}

void SelectActiveCardDelta::Revert(SelectActiveCardDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO