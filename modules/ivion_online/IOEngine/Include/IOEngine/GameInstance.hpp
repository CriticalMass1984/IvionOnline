#pragma once

#include <array>
#include <cassert>

#include <IOEngine/Branch.hpp>
#include <IOEngine/CardLibrary.hpp>
#include <IOEngine/Map.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <IOEngine/ObjectPool.hpp>
#include <IOEngine/Tile.hpp>
#include <IOEngine/Vars/Dictionary.hpp>
#include <IOEngine/Vars/Var.hpp>

namespace IO {
namespace Engine {
class Player;
class Team;
class Card;
class Program;

class GameInstance {
public:
	struct PlayerDef {
		std::string displayName_;
		std::string deckName_;
		int index_;
		int teamIndex_;
		Vec2 start_;
	};

	GameInstance(const std::vector<PlayerDef> &players);

	//starts the game
	void Start();

	//how the game state evolves
	Branch RootBranch;
	std::vector<int> Choices;
	std::vector<Branch *> BranchStack;

	bool MakeChoice(int branchIndex);
	void RevertChoice();
	void CancelChoices();
	bool AcceptChoices();

	// void ResolveBranch(Branch& branch);
	inline const CardLibrary &Library() const { return cardLibrary_; }

	ObjectPool Objects;
	MemoryPool Memory;

	Map Map;
	Program *const MoveAction{ nullptr };
	Program *const BasicAttack{ nullptr };
	std::vector<Player *> Players;
	// std::vector<std::vector<Card *>> Decks;

	Var::Var<Player *> ActivePlayer;
	Var::Var<Card *> ActiveCard;

private:
	std::vector<Player *> MakePlayers(const std::vector<PlayerDef> &players);
	CardLibrary cardLibrary_;
};

} // namespace Engine
} // namespace IO