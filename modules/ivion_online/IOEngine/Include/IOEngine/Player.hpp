#pragma once

#include <cassert>
#include <IOEngine/Vec2.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/Vars/Var.hpp>

namespace IO
{
	namespace Engine
	{
		class Player
		{
		public:
			const int Index;
			Var::Var<int> Health{40};
			Var::Var<int> MaxHealth{40};
			Var::Var<Vec2> Position;

			Player(int idx);
			~Player() = default;
		};
		typedef Var::Var<Player *> PlayerVar;

	} // namespace Engine
} // namespace IO