#include <IOEngine/AST/SelectTile.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Program.hpp>
#include <IOEngine/Tile.hpp>

namespace IO {
namespace Engine {
namespace AST {
void SelectTile(GameInstance *instance, Program *program,
		StackTile *tile) {
	program->EmplaceMethodCallArgs<SelectTileArgs>(&instance->Memory, tile);
}

//applies change
bool SelectTile(GameInstance *instance, Branch *activeBranch, const SelectTileArgs *args) noexcept {
	activeBranch->Branches().reserve(sizeof(instance->Map) / sizeof(Tile));
	for (int y = 0; y < GameInstance::kMapSize; ++y) {
		for (int x = 0; x < GameInstance::kMapSize; ++x) {
			Tile *tile = instance->GetTile(x, y);
			assert(tile);
			Branch &newBranch = activeBranch->AddBranch(tile);
			newBranch.Append<SelectTileDelta>(args, tile);
			newBranch.Revert();
		}
	}
	return true;
}

bool SelectTileDelta::Apply(SelectTileDelta *self) {
	*self->args_->tile_ = self->tile_;
	return true;
}

void SelectTileDelta::Revert(SelectTileDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO