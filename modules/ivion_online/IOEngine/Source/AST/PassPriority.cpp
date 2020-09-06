#include <IOEngine/AST/PassPriority.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
namespace AST {
PassPriorityArgs* PassPriority(GameInstance *instance, Program *program) {
	return program->EmplaceMethodCallArgs<PassPriorityArgs>(&instance->Memory);
}

//applies change
bool PassPriorityMethod(GameInstance *instance, Branch *activeBranch, PassPriorityArgs *args) noexcept {
	int nextPlayerIdx = (instance->ActivePlayer->Index + 1) % instance->Players.size();
	Player *nextPlayer = instance->Players[nextPlayerIdx];
	activeBranch->Append<PassPriorityDelta>(args, nextPlayer);
	activeBranch->Append<PlayerVar::SetDelta>(instance->ActivePlayer.Set(nextPlayer));
	return true;
}

bool PassPriorityDelta::ApplyDelta(PassPriorityDelta *self) {
	return true;
}

void PassPriorityDelta::RevertDelta(PassPriorityDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO