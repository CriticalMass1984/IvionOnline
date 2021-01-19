#pragma once

#include <vector>

#include <IOEngine/Entity.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Tile.hpp>
#include <IOEngine/Zone.hpp>

#include <IOEngine/Types.hpp>

namespace IO {
class Card : public Entity {
	CardIndex selfIndex_;

public:
	Card(CardIndex i) noexcept;

	PlayerIndex Owner;

	Zone Zone;
	PlayerIndex Controller;

	PlayerIndex AttachedPlayer{ -1 };
	TileIndex AttachedTile{ -1 };

	const Vec2i &GetPosition() const noexcept override;
	CardIndex Index() const noexcept { return selfIndex_; }
};
} // namespace IO