#include <IOEngine/GameInstance.hpp>

#include <IOEngine/Card.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Team.hpp>
#include <IOEngine/MemoryPool.hpp>


namespace IO {
namespace Engine {
std::vector<Player *> GameInstance::MakePlayers(const std::vector<PlayerDef> &players) {
	std::vector<Player *> newPlayers;
	newPlayers.reserve(players.size());
	for (unsigned int i = 0; i < players.size(); ++i) {
		assert(players[i].index_ == (int)i);
		newPlayers.emplace_back(this->Memory.EmplaceObject<Player>(i, players[i].teamIndex_));
	}
	return newPlayers;
}

} // namespace Engine
} // namespace IO