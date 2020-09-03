#include <IOEngine/Card.hpp>

#include <IOEngine/CardLibrary.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
Card::Card(GameInstance *instance, Player *owner, const std::string &archetype, const std::string &name) noexcept :
		def_(instance->Library().GetCard(archetype, name)),
		PlayEffect(def_ ? def_->active_mechanics_.empty() ? nullptr : instance->Objects.EmplaceObject<Program>(def_->name_) : nullptr),
		ResolveEffect(def_ ? def_->active_mechanics_.empty() ? nullptr : instance->Objects.EmplaceObject<Program>(def_->name_) : nullptr),
		PassiveEffect(def_ ? def_->passive_mechanics_.empty() ? nullptr : instance->Objects.EmplaceObject<Program>(def_->name_) : nullptr),
		Controller(owner),
		Actions(def_ ? def_->actions_ : 13),
		Power(def_ ? def_->power_ : 13)

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