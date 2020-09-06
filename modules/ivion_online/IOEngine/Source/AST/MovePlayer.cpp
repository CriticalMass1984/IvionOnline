#include <IOEngine/AST/MovePlayer.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Tile.hpp>

namespace IO {
namespace Engine {
namespace AST {

MovePlayerArgs* MovePlayer(GameInstance *instance, Program *program,
		StackPlayer *player, StackTile *dest) {
	return program->EmplaceMethodCallArgs<AST::MovePlayerArgs>(&instance->Memory, player, dest);
}
//applies change
bool MovePlayerMethod(GameInstance *instance, Branch *activeBranch, MovePlayerArgs *args) noexcept {
	activeBranch->Append<MovePlayerDelta>(args);
	activeBranch->Append<TileVar::SetDelta>((*args->player_)->Position.Set(*args->dest_));
	return true;
}

bool MovePlayerDelta::ApplyDelta(MovePlayerDelta *self) {
	return true;
}

void MovePlayerDelta::RevertDelta(MovePlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO