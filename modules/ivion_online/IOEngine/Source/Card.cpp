#include <IOEngine/Card.hpp>

#include <IOEngine/CardLibrary.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
Card::Card(GameInstance *instance, Player *owner, const CardDef *def) noexcept :
		def_(def),
		PlayEffect(def_->active_mechanics_.empty() ? nullptr : instance->Objects.EmplaceObject<Program>(def_->name_)),
		ResolveEffect(def_->active_mechanics_.empty() ? nullptr : instance->Objects.EmplaceObject<Program>(def_->name_)),
		PassiveEffect(def_->passive_mechanics_.empty() ? nullptr : instance->Objects.EmplaceObject<Program>(def_->name_)),
		Controller(owner),
		Actions(def_->actions_),
		Power(def_->power_),
		Range(def->range_)

{
	Program::CompileCard(instance, this, def_);
}

Vec2 Card::GetPosition() const {
	if (AttachedTarget.Get()) {
		return AttachedTarget.Get()->GetPosition();
	}
	return Controller.Get()->GetPosition();
}
} // namespace Engine
} // namespace IO