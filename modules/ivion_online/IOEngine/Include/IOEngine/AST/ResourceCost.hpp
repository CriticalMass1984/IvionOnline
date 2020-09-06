#pragma once

#include <IOEngine/AST/Method.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct ResourceCostArgs;

bool ResourceCostMethod(GameInstance *instance, Branch *activeBranch, ResourceCostArgs *args) noexcept;

struct ResourceCostArgs {
	Method const method_{ (Method)ResourceCostMethod };
	StackPlayer const *const player_;
	const int *const actions_;
	const int *const power_;

	ResourceCostArgs(StackPlayer *player, int *actions, int *power) :
			player_(player), actions_(actions), power_(power) {
	}
};

ResourceCostArgs* ResourceCost(GameInstance *instance, Program *program,
		StackPlayer *player, int *actions, int *power);

struct ResourceCostDelta : public Var::Delta {
	const ResourceCostArgs *const args_;
	Player *const player_;
	int const actions_;
	int const power_;

	static bool ApplyDelta(ResourceCostDelta *self);

	static void RevertDelta(ResourceCostDelta *self);
	inline ResourceCostDelta(ResourceCostArgs *args) noexcept :
			Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta),
			args_(args),
			player_(*args->player_),
			actions_(args->actions_ ? *args->actions_ : 0),
			power_(args->power_ ? *args->power_ : 0) {
	}

	~ResourceCostDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO