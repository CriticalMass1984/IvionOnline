#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Tile.hpp>
#include <cassert>

namespace IO {
namespace Engine {

namespace AST {
struct TargetTileArgs;

bool TargetTileMethod(GameInstance *instance, Branch *activeBranch, TargetTileArgs *self) noexcept;

struct TargetTileArgs {
	Method const method_{ (Method)TargetTileMethod };
	StackTile *const tile_;

	TargetTileArgs(StackTile *tile) :
			tile_(tile) {
	}
};

void TargetTile(GameInstance *instance, Program *program,
		StackTile *tile);

struct TargetTileDelta : public Var::Delta {
	TargetTileArgs *const args_;
	Tile *const tile_;

	static bool Apply(TargetTileDelta *self);

	static void Revert(TargetTileDelta *self);

	inline TargetTileDelta(TargetTileArgs *args, Tile *tile) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			tile_(tile) {
	}

	~TargetTileDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO