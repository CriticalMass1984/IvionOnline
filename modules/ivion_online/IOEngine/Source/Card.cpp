#include <IOEngine/Card.hpp>

#include <IOEngine/GameState.hpp>

namespace IO {
Card::Card(CardIndex i) noexcept
		:
		Entity(Entity::EntityType::CARD), selfIndex_(i) {
}

const Vec2i& Card::GetPosition() const noexcept {
	if(AttachedTile != -1)
	{
		return AttachedTile->GetPosition();
	}
	if(AttachedPlayer != -1)
	{
		return AttachedPlayer->GetPosition();
	}
	return Controller->GetPosition();
}

} // namespace IO