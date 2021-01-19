#pragma once

#include <IOEngine/Card.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Tile.hpp>

#include <vector>
#include <cassert>
#include <limits>

namespace IO {
class GameState {
	GameState() = default;

public:
	constexpr static int MapWidth = 4;
	constexpr static int MapHeight = 4;
	static std::unique_ptr<GameState> State;

	void Init(uint numPlayers, uint numCards);

	std::vector<Player> Players;
	std::vector<Card> Cards;
	std::vector<Tile> Tiles;

	std::vector<Integer> Integers;
	std::vector<Vec2i> Vec2is;

	inline IntegerIndex NewInteger(Integer v) noexcept {
		assert(Integers.size() < std::numeric_limits<decltype(IntegerIndex::Index)>::max());
		const decltype(IntegerIndex::Index) size = (decltype(IntegerIndex::Index))Integers.size();
		Integers.emplace_back(v);
		return IntegerIndex(size);
	}

	inline Vec2iIndex NewVec2i(int x, int y) noexcept {
		assert(Vec2is.size() < std::numeric_limits<decltype(Vec2iIndex::Index)>::max());
		const decltype(Vec2iIndex::Index) size = (decltype(Vec2iIndex::Index))Vec2is.size();
		Vec2is.emplace_back(x, y);
		return Vec2iIndex(size);
	}

	inline Tile &GetTile(int x, int y) noexcept {
        const int idx = y * MapWidth + x;
        assert(idx < MapWidth * MapHeight);
		return Tiles[idx];
	}

	~GameState() = default;
};
} // namespace IO