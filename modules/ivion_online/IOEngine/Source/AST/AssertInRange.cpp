#include <IOEngine/AST/AssertInRange.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
namespace AST {

void AssertInRange(GameInstance *instance, Program *program,
		StackCard *card, StackPosable *target) {
	program->EmplaceMethodCallArgs<AssertInRangeArgs>(&instance->Memory, card, target);
}
//applies change
bool AssertInRangeMethod(GameInstance *instance, Branch *activeBranch, AssertInRangeArgs *args) noexcept {
	int range = (*args->card_)->Range.Get();
	int distance = (*args->card_)->GetDistance(*args->target_);
	bool result = distance <= range;
	activeBranch->Append<AssertInRangeDelta>(args, result);
	return result;
}

bool AssertInRangeDelta::Apply(AssertInRangeDelta *self) {
	return self->result_;
}

void AssertInRangeDelta::Revert(AssertInRangeDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO