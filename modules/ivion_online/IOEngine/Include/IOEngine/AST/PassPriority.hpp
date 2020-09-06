#pragma once

#include <IOEngine/AST/Method.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct PassPriorityArgs;

bool PassPriorityMethod(GameInstance *instance, Branch *activeBranch, PassPriorityArgs *args) noexcept;

struct PassPriorityArgs {
	Method const method_{ (Method)PassPriorityMethod };

	PassPriorityArgs() = default;
};

PassPriorityArgs* PassPriority(GameInstance *instance, Program *program);

struct PassPriorityDelta : public Var::Delta {
	const PassPriorityArgs *const args_;
	Player *const player_;

	static bool ApplyDelta(PassPriorityDelta *self);

	static void RevertDelta(PassPriorityDelta *self);
	inline PassPriorityDelta(PassPriorityArgs *args, Player *player) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			player_(player) {
	}

	~PassPriorityDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO