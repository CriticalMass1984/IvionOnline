#pragma once

#include <IOEngine/Types.hpp>

namespace IO {
class Entity {
public:
	enum class EntityType {
		NONE,
		PLAYER,
		CARD,
        TILE
	};
	EntityType Type() const noexcept { return type_; }

	virtual const Vec2i &GetPosition() const noexcept = 0;

protected:
	inline Entity(EntityType type) :
			type_(type) {}

private:
	EntityType type_;
};
} // namespace IO