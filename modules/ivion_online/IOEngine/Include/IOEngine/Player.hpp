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
			Var::Var<int> Health;
			Var::Var<int> MaxHealth;
			Var::Var<Vec2> Position;
			std::vector<Card> Deck;

			Player(int idx);
		};
		typedef Var::Var<Player *> PlayerVar;

	} // namespace Engine
} // namespace IO