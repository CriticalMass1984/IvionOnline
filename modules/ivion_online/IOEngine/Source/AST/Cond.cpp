#include <IOEngine/AST/Cond.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {
//applies change
bool Cond(GameInstance *instance, Branch *activeBranch, const CondArgs *args) noexcept {
	activeBranch->Append<CondDelta>(*args->condition_, args->ifTrue_, args->ifFalse_);
	if (*args->condition_) {
		args->ifTrue_->Execute(instance);
	} else {
		args->ifFalse_->Execute(instance);
	}
	return true;
}

bool CondDelta::Apply(CondDelta *self) {
	return true;
}

void CondDelta::Revert(CondDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO