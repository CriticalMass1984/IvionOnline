#include <IOEngine/AST/AssertInstantCheck.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
namespace AST {

void AssertInstantCheck(GameInstance *instance, Program *program,
		Card *card) {
	program->EmplaceMethodCallArgs<AssertInstantCheckArgs>(&instance->Memory, card);
}
//applies change
bool AssertInstantCheckMethod(GameInstance *instance, Branch *activeBranch, AssertInstantCheckArgs *args) noexcept {
	// to play a card, it must be your turn, and the stack must be empty
	// unless it's an instant
	bool result = instance->Stack.Empty();

	//allows for actions to use this method too
	if (args->card_) {
		result |= args->card_->Instant.Get();
	}

	activeBranch->Append<AssertInstantCheckDelta>(args, result);
	return result;
}

bool AssertInstantCheckDelta::Apply(AssertInstantCheckDelta *self) {
	return self->result_;
}

void AssertInstantCheckDelta::Revert(AssertInstantCheckDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO