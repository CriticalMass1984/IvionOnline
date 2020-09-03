#pragma once

#include <array>
#include <cassert>

#include <IOEngine/Branch.hpp>
#include <IOEngine/CardLibrary.hpp>
#include <IOEngine/Map.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <IOEngine/ObjectPool.hpp>
#include <IOEngine/Tile.hpp>
#include <IOEngine/Vars/Set.hpp>
#include <IOEngine/Vars/Var.hpp>

namespace IO {
namespace Engine {
class Player;
class Team;
class Card;
class Program;

struct PlayerDef {
	std::string displayName_;
	std::string deckName_;
	int index_;
	int teamIndex_;
	Vec2 start_;
	std::vector<CardDef> deck_;
};

class GameInstance {
public:
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

	//
	ObjectPool Objects;
	MemoryPool Memory;

	//
	Program *const MoveAction{ nullptr };
	Program *const BasicAttack{ nullptr };
	Program *const EndOfTurn{ nullptr };

	//all ivion entities
	Map Map;
	std::vector<Player *> Players;
	// std::vector<Card *> Cards;

	//
	IntVar TurnNumber{ 0 };
	Var::Var<Player *> ActivePlayer;
	Var::Var<Card *> ActiveCard;

	//zones
	Var::Set<Card *> Stack;
	Var::Set<Card *> Field;

private:
	std::vector<Player *> MakePlayers(const std::vector<PlayerDef> &players);
	CardLibrary cardLibrary_;
};

} // namespace Engine
} // namespace IO