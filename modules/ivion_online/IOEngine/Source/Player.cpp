#include <IOEngine/Card.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Tile.hpp>

namespace IO {
namespace Engine {

Player::Player(int idx, int teamIdx) :
		Index(idx), TeamIndex(teamIdx) {
}

Vec2 Player::GetPosition() const {
	assert(Position.Get());
	return Position.Get()->GetPosition();
}
} // namespace Engine
} // namespace IO