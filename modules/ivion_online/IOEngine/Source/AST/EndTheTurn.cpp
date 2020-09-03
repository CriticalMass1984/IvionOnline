#include <IOEngine/AST/EndTheTurn.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
namespace AST {
void EndTheTurn(GameInstance *instance, Program *program,
		StackPlayer *player) {
	program->EmplaceMethodCallArgs<EndTheTurnArgs>(&instance->Memory, player);
}

//applies change
bool EndTheTurnMethod(GameInstance *instance, Branch *activeBranch, EndTheTurnArgs *args) noexcept {
	activeBranch->Append<EndTheTurnDelta>(args);
	activeBranch->Append<PlayerVar::SetDelta>(instance->ActivePlayer.Set(nullptr));
	return true;
}

bool EndTheTurnDelta::Apply(EndTheTurnDelta *self) {
	return true;
}

void EndTheTurnDelta::Revert(EndTheTurnDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO