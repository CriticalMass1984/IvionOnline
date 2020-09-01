#include <IOEngine/AST/MovePlayer.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Tile.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool MovePlayer(GameInstance *instance, Branch *activeBranch, const MovePlayerArgs *args) noexcept {
	activeBranch->Append<MovePlayerDelta>(*args->player_, *args->dest_);
	activeBranch->Append<PlayerVar::SetDelta>((*args->player_)->Position.Set(*args->dest_));
	return true;
}

bool MovePlayerDelta::Apply(MovePlayerDelta *self) {
	return true;
}

void MovePlayerDelta::Revert(MovePlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO