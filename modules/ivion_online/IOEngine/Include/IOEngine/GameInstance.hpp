#pragma once

#include <array>
#include <cassert>

#include <IOEngine/Branch.hpp>
#include <IOEngine/CardLibrary.hpp>
#include <IOEngine/Tile.hpp>
#include <IOEngine/ObjectPool.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <IOEngine/Vars/Var.hpp>

namespace godot {
class Player;
}

namespace IO {
namespace Engine {
class Player;
class Team;
class Card;

class GameInstance {
public:
	struct PlayerDef {
		std::string displayName_;
		std::string deckName_;
		int index_;
		int teamIndex_;
	};

	GameInstance(const std::vector<PlayerDef> &players) :
			Players(MakePlayers(players)),
			ActivePlayer{ nullptr },
			ActiveCard{ nullptr }

	{
		cardLibrary_.LoadCards("WinterstormCardList.txt");
	}

	void Update();
	void MakeChoice(int branchIndex);

	// void ResolveBranch(Branch& branch);
	inline const CardLibrary &Library() const { return cardLibrary_; }

	ObjectPool CardEffects;
	MemoryPool Memory;

	Tile Map[4][4];
	
	std::vector<Player *> Players;
	std::vector<std::vector<Card *>> Decks;

	Var::Var<Player *> ActivePlayer;
	Var::Var<Card *> ActiveCard;
private:
	std::vector<Player *> MakePlayers(const std::vector<PlayerDef> &players);
	CardLibrary cardLibrary_;
};

} // namespace Engine
} // namespace IO