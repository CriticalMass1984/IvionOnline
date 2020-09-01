#pragma once

#include <IOEngine/Entity.hpp>
#include <IOEngine/Posable.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <IOEngine/Vec2.hpp>
#include <cassert>

namespace IO {
namespace Engine {
class Tile : public Entity, public Posable {
private:
	const Vec2 Position;

public:
	Tile() = default;
	Tile(Vec2 pos) :
			Position(pos) {}
	Tile(int x, int y) :
			Position(x, y) {}

	Vec2 GetPosition() const override {
		return Position;
	}
};
typedef Var::Var<Tile *> TileVar;
typedef Tile *StackTile;
} // namespace Engine
} // namespace IO