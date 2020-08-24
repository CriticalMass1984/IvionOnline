#pragma once

#include <array>
#include <cassert>

#include <IOEngine/Branch.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <IOEngine/ObjectPool.hpp>
#include <IOEngine/Vars/Var.hpp>

namespace IO {
namespace Engine {
class Player;
class Team;
class Card;
class GameInstance {
public:
	struct CardDef {
		unsigned int playerIndex_;
		std::string name_;
		std::string playText_;
	};
	struct PlayerDef {
		std::string name_;
	};

	struct TeamDef {
	};
	GameInstance(const std::vector<PlayerDef> &players, const std::vector<TeamDef> &teams, const std::vector<CardDef> &cards) :
			Memory(), //this needs to be constructed first!
			Players(MakePlayers(players)),
			Teams(MakeTeams(teams)),
			Decks(MakeDecks(cards)),
			ActiveTeam{ Teams[0] },
			ActivePlayer{ Players[0] },
			ActiveCard{ Decks[0][0] } {
	}

	MemoryPool Memory;
	ObjectPool CardEffects;

	std::vector<Player *> Players;
	std::vector<Team *> Teams;
	std::vector<std::vector<Card *>> Decks;

	Var::Var<Team *> ActiveTeam;
	Var::Var<Player *> ActivePlayer;
	Var::Var<Card *> ActiveCard;

	static GameInstance *Active;

private:
	std::vector<Player *> MakePlayers(const std::vector<PlayerDef> &players);
	std::vector<Team *> MakeTeams(const std::vector<TeamDef> &teams);
	std::vector<std::vector<Card *>> MakeDecks(const std::vector<CardDef> &cards);
};

} // namespace Engine
} // namespace IO