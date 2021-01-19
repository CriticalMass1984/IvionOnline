#pragma once

#include <IOEngine/Card.hpp>
#include <IOEngine/Entity.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Terrain.hpp>
#include <IOEngine/Types.hpp>

#include <RulesEngine/Value.hpp>

namespace IO {
class Tile : public Entity {
	Vec2i pos_;

public:
	IntegerIndex Terrain;

	const Vec2i &Position() const noexcept { return pos_; }

	Tile(int x = 0, int y = 0) :
			Entity(Entity::EntityType::TILE),
			pos_(x, y),
			Terrain((Integer)TerrainType::NONE) {}
	Tile(Tile &&) = default;
	Tile(const Tile &) = default;
	~Tile() = default;

	const Vec2i &GetPosition() const noexcept override;
};

} // namespace IO