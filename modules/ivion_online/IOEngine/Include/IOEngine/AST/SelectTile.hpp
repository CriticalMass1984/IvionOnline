#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Tile.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectTileArgs;

bool SelectTileMethod(GameInstance *instance, Branch *activeBranch, SelectTileArgs *self) noexcept;

struct SelectTileArgs {
	Method const method_{ (Method)SelectTileMethod };
	StackTile *const tile_;

	SelectTileArgs(StackTile *tile) :
			tile_(tile) {
	}
};

SelectTileArgs* SelectTile(GameInstance *instance, Program *program,
		StackTile *tile);

struct SelectTileDelta : public Var::Delta {
	SelectTileArgs *const args_;
	Tile *const tile_;

	static bool ApplyDelta(SelectTileDelta *self);

	static void RevertDelta(SelectTileDelta *self);

	inline SelectTileDelta(SelectTileArgs *args, Tile *tile) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			tile_(tile) {
	}

	~SelectTileDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO