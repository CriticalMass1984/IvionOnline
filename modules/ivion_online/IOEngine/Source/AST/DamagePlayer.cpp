#include <IOEngine/AST/DamagePlayer.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool DamagePlayer(GameInstance* instance, Branch *activeBranch, const DamagePlayerArgs *args) noexcept {
	activeBranch->Append<DamagePlayerDelta>(*args->player_, *args->value_);
	activeBranch->Append<IntVar::SetDelta>((*args->player_)->Health.Set((*args->player_)->Health.Get() - *args->value_));
	
	return true;
}

bool DamagePlayerDelta::Apply(DamagePlayerDelta *self) {
	return true;
}

void DamagePlayerDelta::Revert(DamagePlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO