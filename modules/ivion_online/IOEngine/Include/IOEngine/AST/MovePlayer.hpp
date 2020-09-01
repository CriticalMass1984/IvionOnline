#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct MovePlayerArgs;

bool MovePlayer(GameInstance *instance, Branch *activeBranch, const MovePlayerArgs *args) noexcept;

struct MovePlayerArgs {
	Method const method_{ (Method)MovePlayer };
	Player **const player_;
	Tile **const dest_;

	MovePlayerArgs(Player **player, Tile **dest) :
			player_(player), dest_(dest) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct MovePlayerDelta : public Var::Delta {
	Player *const player_;
	Tile *const dest_;

	static bool Apply(MovePlayerDelta *self);

	static void Revert(MovePlayerDelta *self);
	inline MovePlayerDelta(Player *player, Tile *dest) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), player_(player), dest_(dest) {
	}

	~MovePlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO