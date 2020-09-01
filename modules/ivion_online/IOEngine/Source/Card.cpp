#include <IOEngine/Card.hpp>

#include <IOEngine/Player.hpp>

namespace IO {
namespace Engine {
Card::Card(Program *effect, Player *player) noexcept :
		Effect(effect), Controller(player) {
}
Vec2 Card::GetPosition() const {
	if (AttachedTarget.Get()) {
		return AttachedTarget.Get()->GetPosition();
	}
	return Controller.Get()->GetPosition();
}
} // namespace Engine
} // namespace IO