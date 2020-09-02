#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Tile.hpp>

namespace IO {
namespace Engine {

Player::Player(GameInstance *instance, const std::string &name, int idx, int teamIdx, Tile *start) :
		name_(name),
		Index(idx),
		TeamIndex(teamIdx),
		Position(start),
		MoveAction(instance->MoveAction) {
}

Vec2 Player::GetPosition() const {
	assert(Position.Get());
	return Position.Get()->GetPosition();
}
} // namespace Engine
} // namespace IO
