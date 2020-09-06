#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {
struct SelectActivePlayerArgs;

bool SelectActivePlayerMethod(GameInstance *instance, Branch *activeBranch, SelectActivePlayerArgs *self) noexcept;

struct SelectActivePlayerArgs {
	Method const method_{ (Method)SelectActivePlayerMethod };
	StackPlayer *const player_;

	SelectActivePlayerArgs(StackPlayer *player) :
			player_(player) {
	}
};

SelectActivePlayerArgs* SelectActivePlayer(GameInstance *instance, Program *program, StackPlayer *player);

struct SelectActivePlayerDelta : public Var::Delta {
	SelectActivePlayerArgs *const args_;
	Player *const player_;

	static bool ApplyDelta(SelectActivePlayerDelta *self);

	static void RevertDelta(SelectActivePlayerDelta *self);

	inline SelectActivePlayerDelta(SelectActivePlayerArgs *args, Player *player) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			player_(player) {
	}
	~SelectActivePlayerDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO