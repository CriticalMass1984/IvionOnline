#include <IOEngine/GameState.hpp>

namespace IO {

// one global instance
std::unique_ptr<GameState> GameState::State(new GameState());

void GameState::Init(uint numPlayers, uint numCards) {
	// reset and reinit
	assert(MapHeight * MapWidth < std::numeric_limits<decltype(TileIndex::Index)>::max());
	Tiles.clear();
	for (int y = 0; y < MapHeight; ++y) {
		for (int x = 0; x < MapWidth; ++x) {
			Tiles.emplace_back(x, y);
		}
	}

	// reset and reinit
	assert(numPlayers <= 8);
	assert(numPlayers > 0);
	Players.clear();
	for(int i = 0; i < numPlayers; ++i)
	{
		Players.emplace_back(i, 1 << i);
	}

	// reset and reinit
	assert(numCards > 0);
	Cards.clear();
	for(int i = 0; i < numCards; ++i)
	{
		Cards.emplace_back(i);
	}
}
} // namespace IO