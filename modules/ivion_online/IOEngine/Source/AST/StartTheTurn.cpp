#include <IOEngine/AST/StartTheTurn.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
namespace AST {
void StartTheTurn(GameInstance *instance, Program *program, StackPlayer *player) {
	program->EmplaceMethodCallArgs<StartTheTurnArgs>(&instance->Memory, player);
}

//applies change
bool StartTheTurnMethod(GameInstance *instance, Branch *activeBranch, StartTheTurnArgs *args) noexcept {
	int turnNumber = instance->TurnNumber.Get() + 1;
	Player *player = instance->Players[turnNumber % instance->Players.size()];
	activeBranch->Append<StartTheTurnDelta>(args, player, turnNumber);
	activeBranch->Append<IntVar::SetDelta>(instance->TurnNumber.Set(turnNumber));
	activeBranch->Append<PlayerVar::SetDelta>(instance->ActivePlayer.Set(player));
	return true;
}

bool StartTheTurnDelta::Apply(StartTheTurnDelta *self) {
	*self->args_->player_ = self->player_;
	return true;
}

void StartTheTurnDelta::Revert(StartTheTurnDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO