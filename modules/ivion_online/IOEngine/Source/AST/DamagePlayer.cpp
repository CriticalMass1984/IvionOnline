#include <IOEngine/AST/DamagePlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
DamagePlayerArgs* DamagePlayer(GameInstance *instance, Program *program,
		StackPlayer *player, int *value) {
	return program->EmplaceMethodCallArgs<DamagePlayerArgs>(&instance->Memory, player, value);
}

//applies change
bool DamagePlayerMethod(GameInstance *instance, Branch *activeBranch, DamagePlayerArgs *args) noexcept {
	activeBranch->Append<DamagePlayerDelta>(args);
	Player *player = *args->player_;
	int damage = *args->value_;
	activeBranch->Append<IntVar::SetDelta>(player->Health.Set(player->Health.Get() - damage));
	return true;
}

bool DamagePlayerDelta::ApplyDelta(DamagePlayerDelta *self) {
	return true;
}

void DamagePlayerDelta::RevertDelta(DamagePlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO