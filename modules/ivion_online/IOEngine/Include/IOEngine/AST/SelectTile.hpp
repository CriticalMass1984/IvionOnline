#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Tile.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct SelectTileArgs;

bool SelectTile(GameInstance *instance, Branch *activeBranch, const SelectTileArgs *self) noexcept;

struct SelectTileArgs {
	Method const method_{ (Method)SelectTile };
	Engine::TileVar *const tile_;

	SelectTileArgs(TileVar *tile) :
			tile_(tile) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct SelectTileDelta : public Var::Delta {
	Tile *const tile_;

	static bool Apply(SelectTileDelta *self);

	static void Revert(SelectTileDelta *self);

	inline SelectTileDelta(Tile *tile) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), tile_(tile) {
	}

	~SelectTileDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO