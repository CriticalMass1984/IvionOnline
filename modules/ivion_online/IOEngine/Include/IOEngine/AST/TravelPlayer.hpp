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

TravelPlayerArgs* TravelPlayer(GameInstance *instance, Program *program,
		StackPlayer *player, StackTile *tile);

struct TravelPlayerDelta : public Var::Delta {
	TravelPlayerArgs *const args_;

	static bool ApplyDelta(TravelPlayerDelta *self);

	static void RevertDelta(TravelPlayerDelta *self);

	inline TravelPlayerDelta(TravelPlayerArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args) {
	}

	~TravelPlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO