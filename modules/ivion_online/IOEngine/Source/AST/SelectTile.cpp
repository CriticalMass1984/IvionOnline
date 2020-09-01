#include <IOEngine/AST/SelectTile.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool SelectTile(GameInstance *instance, Branch *activeBranch, const SelectTileArgs *args) noexcept {
	activeBranch->Branches().reserve(sizeof(instance->Map) / sizeof(Tile));
	for (int y = 0; y < GameInstance::kMapSize; ++y) {
		for (int x = 0; x < GameInstance::kMapSize; ++x) {
			Tile *tile = instance->GetTile(x, y);
			Branch &newBranch = activeBranch->AddBranch(tile);
			newBranch.Append<SelectTileDelta>(tile);
			newBranch.Append<TileVar::SetDelta>(args->tile_->Set(tile));
			newBranch.Revert();
		}
	}
	return true;
}

bool SelectTileDelta::Apply(SelectTileDelta *self) {
	return true;
}

void SelectTileDelta::Revert(SelectTileDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO