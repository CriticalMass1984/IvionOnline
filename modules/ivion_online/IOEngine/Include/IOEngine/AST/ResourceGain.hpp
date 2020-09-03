#pragma once

#include <IOEngine/AST/Method.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct ResourceGainArgs;

bool ResourceGainMethod(GameInstance *instance, Branch *activeBranch, ResourceGainArgs *args) noexcept;

struct ResourceGainArgs {
	Method const method_{ (Method)ResourceGainMethod };
	StackPlayer const *const player_;
	const int *const actions_;
	const int *const power_;

	ResourceGainArgs(StackPlayer *player, int *actions, int *power) :
			player_(player), actions_(actions), power_(power) {
	}
};

void ResourceGain(GameInstance *instance, Program *program,
		StackPlayer *player, int *actions, int *power);

struct ResourceGainDelta : public Var::Delta {
	const ResourceGainArgs *const args_;
	Player *const player_;
	int const actions_;
	int const power_;

	static bool Apply(ResourceGainDelta *self);

	static void Revert(ResourceGainDelta *self);
	inline ResourceGainDelta(ResourceGainArgs *args) noexcept :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			player_(*args->player_),
			actions_(args->actions_ ? *args->actions_ : 0),
			power_(args->power_ ? *args->power_ : 0) {
	}

	~ResourceGainDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO