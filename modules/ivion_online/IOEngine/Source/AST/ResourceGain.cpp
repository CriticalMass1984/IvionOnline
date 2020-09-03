#include <IOEngine/AST/ResourceGain.hpp>

#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
namespace AST {
void ResourceGain(GameInstance *instance, Program *program,
		StackPlayer *player, int *actions, int *power) {
	program->EmplaceMethodCallArgs<ResourceGainArgs>(&instance->Memory, player, actions, power);
}

//applies change
bool ResourceGainMethod(GameInstance *instance, Branch *activeBranch, ResourceGainArgs *args) noexcept {
	assert(args->power_ || args->actions_);
	activeBranch->Append<ResourceGainDelta>(args);
	if (args->actions_ && *args->actions_ > 0) {
		activeBranch->Append<IntVar::SetDelta>((*args->player_)->Actions.Set((*args->player_)->Actions.Get() + *args->actions_));
	}
	if (args->power_ && *args->power_ > 0) {
		activeBranch->Append<IntVar::SetDelta>((*args->player_)->Power.Set((*args->player_)->Power.Get() + *args->power_));
	}
	return true;
}

bool ResourceGainDelta::Apply(ResourceGainDelta *self) {
	return true;
}

void ResourceGainDelta::Revert(ResourceGainDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO