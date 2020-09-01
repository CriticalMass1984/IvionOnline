#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Tile.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct TargetTileArgs;

bool TargetTile(GameInstance *instance, Branch *activeBranch, const TargetTileArgs *self) noexcept;

struct TargetTileArgs {
	Method const method_{ (Method)TargetTile };
	Engine::TileVar *const tile_;

	TargetTileArgs(TileVar *tile) :
			tile_(tile) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct TargetTileDelta : public Var::Delta {
	Tile *const tile_;

	static bool Apply(TargetTileDelta *self);

	static void Revert(TargetTileDelta *self);

	inline TargetTileDelta(Tile *tile) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), tile_(tile) {
	}

	~TargetTileDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO