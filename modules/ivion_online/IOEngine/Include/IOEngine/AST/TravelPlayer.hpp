#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Tile.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct TravelPlayerArgs;

bool TravelPlayerMethod(GameInstance *instance, Branch *activeBranch, TravelPlayerArgs *args) noexcept;

struct TravelPlayerArgs {
	Method const method_{ (Method)TravelPlayerMethod };
	StackPlayer *const player_;
	StackTile *const dest_;

	TravelPlayerArgs(StackPlayer *player, StackTile *dest) :
			player_(player), dest_(dest) {
	}
};

void TravelPlayer(GameInstance *instance, Program *program,
		StackPlayer *player, StackTile *tile);

// doesn't actually do anything, but makes life easier for triggers
struct TravelPlayerDelta : public Var::Delta {
	TravelPlayerArgs *const args_;

	static bool Apply(TravelPlayerDelta *self);

	static void Revert(TravelPlayerDelta *self);

	inline TravelPlayerDelta(TravelPlayerArgs *args) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args) {
	}

	~TravelPlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO