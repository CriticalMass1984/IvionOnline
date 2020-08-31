#pragma once

#include <IOEngine/Card.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <IOEngine/Vec2.hpp>
#include <cassert>

namespace godot {
class Player;
}
namespace IO {
namespace Engine {
class Player {
public:
	const int Index;
	const int TeamIndex;
	
	Var::Var<int> Health{ 40 };
	Var::Var<int> MaxHealth{ 40 };
	Var::Var<Vec2> Position;

	Player(int idx, int teamIdx);
	~Player() = default;
};
typedef Var::Var<Player *> PlayerVar;

} // namespace Engine
} // namespace IO