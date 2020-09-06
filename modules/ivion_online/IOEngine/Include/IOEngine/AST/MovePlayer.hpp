#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct MovePlayerArgs;

bool MovePlayerMethod(GameInstance *instance, Branch *activeBranch, MovePlayerArgs *args) noexcept;

struct MovePlayerArgs {
	Method const method_{ (Method)MovePlayerMethod };
	StackPlayer *const player_;
	StackTile *const dest_;

	MovePlayerArgs(StackPlayer *player, StackTile *dest) :
			player_(player), dest_(dest) {
	}
};

MovePlayerArgs* MovePlayer(GameInstance *instance, Program *program,
		StackPlayer *player, StackTile *dest);

struct MovePlayerDelta : public Var::Delta {
	MovePlayerArgs *const args_;

	static bool ApplyDelta(MovePlayerDelta *self);

	static void RevertDelta(MovePlayerDelta *self);
	inline MovePlayerDelta(MovePlayerArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args) {
	}

	~MovePlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO