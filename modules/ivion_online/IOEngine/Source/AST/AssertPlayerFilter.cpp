#include <IOEngine/AST/AssertPlayerFilter.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {

bool assertDistance(const Player *active, const Player *target, AssertPlayerFilterArgs::Filter filter) {
	switch (filter) {
		case AssertPlayerFilterArgs::Filter::NONE:
			return true;
		case AssertPlayerFilterArgs::Filter::PLAYER:
			return true;
		case AssertPlayerFilterArgs::Filter::ENEMY:
			return active->TeamIndex != target->TeamIndex;
		default:
			assert(false);
	}
}
void AssertPlayerFilter(GameInstance *instance, Program *program,
		StackPlayer *activePlayer, StackPlayer *const targetPlayer, AssertPlayerFilterArgs::Filter *filter) {
	program->EmplaceMethodCallArgs<AssertPlayerFilterArgs>(&instance->Memory, activePlayer, targetPlayer, filter);
}
//applies change
bool AssertPlayerFilterMethod(GameInstance *instance, Branch *activeBranch, AssertPlayerFilterArgs *args) noexcept {
	bool result = assertDistance(*args->activePlayer_, *args->targetPlayer_, *args->filter_);
	activeBranch->Append<AssertPlayerFilterDelta>(args, result);
	return result;
}

bool AssertPlayerFilterDelta::Apply(AssertPlayerFilterDelta *self) {
	return self->result_;
}

void AssertPlayerFilterDelta::Revert(AssertPlayerFilterDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO