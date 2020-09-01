#include <IOEngine/AST/TravelPlayer.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Tile.hpp>

namespace IO {
namespace Engine {
namespace AST {

void TravelPlayer(GameInstance *instance, Program *program, StackPlayer *player, StackTile *tile) {
	program->EmplaceMethodCallArgs<TravelPlayerArgs>(&instance->Memory, player, tile);
}

//applies change
bool TravelPlayerMethod(GameInstance *instance, Branch *activeBranch, TravelPlayerArgs *args) noexcept {
	activeBranch->Append<TravelPlayerDelta>(args);
	activeBranch->Append<TileVar::SetDelta>((*args->player_)->Position.Set(*args->dest_));
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