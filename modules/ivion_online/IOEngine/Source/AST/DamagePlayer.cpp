#include <IOEngine/AST/DamagePlayer.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool DamagePlayer(Branch *activeBranch, const DamagePlayerArgs *args) noexcept {
	activeBranch->Append<DamagePlayerDelta>(*args->player_, *args->value_);
	(*args->player_)->Health.Set(activeBranch, (*args->player_)->Health.Get() - *args->value_);
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