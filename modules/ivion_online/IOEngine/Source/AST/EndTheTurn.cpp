#include <IOEngine/AST/EndTheTurn.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
namespace AST {
EndTheTurnArgs* EndTheTurn(GameInstance *instance, Program *program,
		StackPlayer *player) {
	return program->EmplaceMethodCallArgs<EndTheTurnArgs>(&instance->Memory, player);
}

//applies change
bool EndTheTurnMethod(GameInstance *instance, Branch *activeBranch, EndTheTurnArgs *args) noexcept {
	activeBranch->Append<EndTheTurnDelta>(args);
	activeBranch->Append<PlayerVar::SetDelta>(instance->ActivePlayer.Set(nullptr));
	return true;
}

bool EndTheTurnDelta::ApplyDelta(EndTheTurnDelta *self) {
	return true;
}

void EndTheTurnDelta::RevertDelta(EndTheTurnDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO