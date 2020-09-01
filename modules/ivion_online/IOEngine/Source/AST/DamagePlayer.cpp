#include <IOEngine/AST/DamagePlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
void DamagePlayer(GameInstance *instance, Program *program,
		StackPlayer *player, int *value) {
	program->EmplaceMethodCallArgs<DamagePlayerArgs>(&instance->Memory, player, value);
}

//applies change
bool DamagePlayer(GameInstance *instance, Branch *activeBranch, const DamagePlayerArgs *args) noexcept {
	Player *player = *args->player_;
	int damage = *args->value_;
	activeBranch->Append<DamagePlayerDelta>(args, player, damage);
	activeBranch->Append<IntVar::SetDelta>(player->Health.Set(player->Health.Get() - damage));
	return true;
}

bool DamagePlayerDelta::Apply(DamagePlayerDelta *self) {
	return true;
}

void DamagePlayerDelta::Revert(DamagePlayerDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO