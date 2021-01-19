#include <IOEngine/Player.hpp>

#include <IOEngine/GameState.hpp>

namespace IO {
Player::Player(PlayerIndex i, TeamIndex team) noexcept
		:
		Entity(EntityType::PLAYER),
		selfIndex_(i),
		team_(team),
		Health(GameState::State->NewInteger(40)),
		Position(GameState::State->NewVec2i(0, 0)),
		Slow(GameState::State->NewInteger(0)),
		Silence(GameState::State->NewInteger(0)),
		Disarm(GameState::State->NewInteger(0))

{
}

} // namespace IO