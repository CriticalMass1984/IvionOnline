#include <IOEngine/GameInstance.hpp>

#include <IOEngine/Card.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Team.hpp>


namespace IO {
namespace Engine {
GameInstance *GameInstance::Active{ nullptr };

std::vector<Player *> GameInstance::MakePlayers(const std::vector<PlayerDef> &players) {
	std::vector<Player *> newPlayers;
	newPlayers.reserve(players.size());
	for (unsigned int i = 0; i < players.size(); ++i) {
		newPlayers.emplace_back(Memory.EmplaceObject<Player>(i));
	}
	return newPlayers;
}
std::vector<Team *> GameInstance::MakeTeams(const std::vector<TeamDef> &teams) {
	std::vector<Team *> newTeams;
	newTeams.reserve(teams.size());
	for (unsigned int i = 0; i < teams.size(); ++i) {
		newTeams.emplace_back(Memory.EmplaceObject<Team>());
	}
	return newTeams;
}
std::vector<std::vector<Card *>> GameInstance::MakeDecks(const std::vector<CardDef> &cards) {
	std::vector<std::vector<Card *>> newDecks;
	newDecks.resize(Players.size(), {});
	for (std::vector<Card *> &newDeck : newDecks) {
		newDeck.reserve(50);
	}
	for (unsigned int i = 0; i < cards.size(); ++i) {
		const CardDef &card = cards[i];
		assert(card.playerIndex_ < Players.size());
		std::vector<Card *> &newDeck = newDecks[card.playerIndex_];

		//create card effect
		Program *effect = CardEffects.EmplaceObject<Program>();

		//
		newDeck.emplace_back(Memory.EmplaceObject<Card>(effect, Players[card.playerIndex_]));
	}
	return newDecks;
}
} // namespace Engine
} // namespace IO