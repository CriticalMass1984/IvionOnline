#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Tile.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct TravelPlayerArgs;

bool TravelPlayer(GameInstance *instance, Branch *activeBranch, const TravelPlayerArgs *args) noexcept;

struct TravelPlayerArgs {
	Method const method_{ (Method)TravelPlayer };
	Player **const player_;
	Tile **const dest_;

	TravelPlayerArgs(Player **player, Tile **dest) :
			player_(player), dest_(dest) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct TravelPlayerDelta : public Var::Delta {
	Player *const player_;
	Tile *const dest_;

	static bool Apply(TravelPlayerDelta *self);

	static void Revert(TravelPlayerDelta *self);
	inline TravelPlayerDelta(Player *player, Tile *dest) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), player_(player), dest_(dest) {
	}

	~TravelPlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO