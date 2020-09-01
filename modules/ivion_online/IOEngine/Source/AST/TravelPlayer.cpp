#include <IOEngine/AST/TravelPlayer.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Tile.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool TravelPlayer(GameInstance *instance, Branch *activeBranch, const TravelPlayerArgs *args) noexcept {
	activeBranch->Append<TravelPlayerDelta>(*args->player_, *args->dest_);
	activeBranch->Append<PlayerVar::SetDelta>((*args->player_)->Position.Set(*args->dest_));
	return true;
}

bool TravelPlayerDelta::Apply(TravelPlayerDelta *self) {
	return true;
}

void TravelPlayerDelta::Revert(TravelPlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO