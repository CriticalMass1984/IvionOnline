#pragma once

#include <array>
#include <cassert>

#include <IOEngine/Branch.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/Team.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>
#include <IOEngine/Vars/Var.hpp>

namespace IO
{
	namespace Engine
	{
		class GameInstance
		{
		public:
			GameInstance(std::vector<Player> &&players, std::vector<Team> &&teams)
				: Players(std::forward<std::vector<Player> &&>(players)),
				  Teams(std::forward<std::vector<Team> &&>(teams)),
				  ActiveTeam{&Teams[0]},
				  ActivePlayer{&Players[0]},
				  ActiveCard{&Players[0].Deck[0]}
			{
			}

			std::vector<Player> Players;
			std::vector<Team> Teams;

			Var::Var<Team *> ActiveTeam;
			Var::Var<Player *> ActivePlayer;
			Var::Var<Card *> ActiveCard;

			static GameInstance *Active;
		};

	} // namespace Engine
} // namespace IO