#pragma once

#include <cassert>
#include <IOEngine/Vars/Var.hpp>
#include <IOEngine/Program.hpp>

namespace IO
{
	namespace Engine
	{
		class Player;

		class Card
		{
		private:
		public:
			Program Effect;

			enum class Zone
			{
				NONE,
				FEAT,
				DECK,
				HAND,
				STACK,
				FIELD,
				DISCARD,
			};

			Var::Var<Zone> Zone;
			Var::Var<bool> IsRevealed{false};
			Var::Var<Player *> Controller{nullptr};

			Card(Player *owner) noexcept;

			Card(const Card &) noexcept = delete;
			Card(Card &&) noexcept = default;
		};
		typedef Var::Var<Card *> CardVar;

	} // namespace Engine
} // namespace IO