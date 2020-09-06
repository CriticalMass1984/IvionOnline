#include <IOEngine/AST/TargetTile.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {
TargetTileArgs* TargetTile(GameInstance *instance, Program *program, StackTile *tile) {
	return program->EmplaceMethodCallArgs<TargetTileArgs>(&instance->Memory, tile);
}

//applies change
bool TargetTileMethod(GameInstance *instance, Branch *activeBranch, TargetTileArgs *args) noexcept {
	activeBranch->Branches().reserve(sizeof(instance->Map) / sizeof(Tile));
	for (Tile &tile : instance->Map) {
		Branch &newBranch = activeBranch->AddBranch(&tile);
		newBranch.Append<TargetTileDelta>(args, &tile);
		newBranch.Revert();
	}
	return true;
}

bool TargetTileDelta::ApplyDelta(TargetTileDelta *self) {
	*self->args_->tile_ = self->tile_;
	return true;
}

void TargetTileDelta::RevertDelta(TargetTileDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO