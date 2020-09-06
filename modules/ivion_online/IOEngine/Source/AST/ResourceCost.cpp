#include <IOEngine/AST/ResourceCost.hpp>

#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
namespace AST {
ResourceCostArgs* ResourceCost(GameInstance *instance, Program *program,
		StackPlayer *player, int *actions, int *power) {
	return program->EmplaceMethodCallArgs<ResourceCostArgs>(&instance->Memory, player, actions, power);
}

//applies change
bool ResourceCostMethod(GameInstance *instance, Branch *activeBranch, ResourceCostArgs *args) noexcept {
	assert(args->power_ || args->actions_);
	activeBranch->Append<ResourceCostDelta>(args);
	if (args->actions_ && *args->actions_ < 0) {
		activeBranch->Append<IntVar::SetDelta>((*args->player_)->Actions.Set((*args->player_)->Actions.Get() + *args->actions_));
		if ((*args->player_)->Actions.Get() < 0) {
			return false;
		}
	}

	if (args->power_ && *args->power_ < 0) {
		activeBranch->Append<IntVar::SetDelta>((*args->player_)->Power.Set((*args->player_)->Power.Get() + *args->power_));
		if ((*args->player_)->Power.Get() < 0) {
			return false;
		}
	}
	return true;
}

bool ResourceCostDelta::ApplyDelta(ResourceCostDelta *self) {
	return true;
}

void ResourceCostDelta::RevertDelta(ResourceCostDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO