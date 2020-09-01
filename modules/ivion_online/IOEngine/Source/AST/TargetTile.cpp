#include <IOEngine/AST/TargetTile.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool TargetTile(GameInstance *instance, Branch *activeBranch, const TargetTileArgs *args) noexcept {
	activeBranch->Branches().reserve(sizeof(instance->Map) / sizeof(Tile));
	for (int y = 0; y < GameInstance::kMapSize; ++y) {
		for (int x = 0; x < GameInstance::kMapSize; ++x) {
			Tile *tile = instance->GetTile(x, y);
			Branch &newBranch = activeBranch->AddBranch(tile);
			newBranch.Append<TargetTileDelta>(tile);
			newBranch.Append<TileVar::SetDelta>(args->tile_->Set(tile));
			newBranch.Revert();
		}
	}
	return true;
}

bool TargetTileDelta::Apply(TargetTileDelta *self) {
	return true;
}

void TargetTileDelta::Revert(TargetTileDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO