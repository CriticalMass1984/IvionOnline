#pragma once

#include <cstdint>
#include <cmath>

namespace IO {
// forward declare
class Player;
class Tile;
class Card;

typedef int Integer;

struct Vec2i {
	int8_t x, y;

	inline Vec2i(int x_ = 0, int y_ = 0) :
			x(x_), y(y_) {}

	Tile &GetTile() const noexcept;

	inline Integer Distance(const Vec2i &B) const noexcept { return std::abs(x - B.x) + std::abs(y - B.y); }
};


struct PlayerIndex {
	int8_t Index;

	Player *operator->() const noexcept;
	Player &operator*() const noexcept;

	bool operator==(const PlayerIndex &B) const noexcept { return Index == B.Index; }
	bool operator!=(const PlayerIndex &B) const noexcept { return Index != B.Index; }

	PlayerIndex(int8_t idx = -1) :
			Index(idx) {}
	PlayerIndex(const PlayerIndex &) = default;
	PlayerIndex(PlayerIndex &&) = default;
	~PlayerIndex() = default;
};

struct TileIndex {
	int8_t Index;

	Tile *operator->() const noexcept;
	Tile &operator*() const noexcept;

	bool operator==(const TileIndex &B) const noexcept { return Index == B.Index; }
	bool operator!=(const TileIndex &B) const noexcept { return Index != B.Index; }

	TileIndex(int8_t idx = -1) :
			Index(idx) {}
	TileIndex(const TileIndex &) = default;
	TileIndex(TileIndex &&) = default;
	~TileIndex() = default;
};

struct CardIndex {
	int16_t Index;

	Card *operator->() const noexcept;
	Card &operator*() const noexcept;

	bool operator==(const CardIndex &B) const noexcept { return Index == B.Index; }
	bool operator!=(const CardIndex &B) const noexcept { return Index != B.Index; }

	CardIndex(int16_t idx = -1) :
			Index(idx) {}
	CardIndex(const CardIndex &) = default;
	CardIndex(CardIndex &&) = default;
	~CardIndex() = default;
};

struct IntegerIndex {
	int16_t Index;

	Integer *operator->() const noexcept;
	Integer &operator*() const noexcept;

	bool operator==(const IntegerIndex &B) const noexcept { return Index == B.Index; }
	bool operator!=(const IntegerIndex &B) const noexcept { return Index != B.Index; }

	IntegerIndex(int16_t idx = -1) :
			Index(idx) {}
	IntegerIndex(const IntegerIndex &) = default;
	IntegerIndex(IntegerIndex &&) = default;
	~IntegerIndex() = default;
};

struct Vec2iIndex {
	int8_t Index;

	Vec2i *operator->() const noexcept;
	Vec2i &operator*() const noexcept;

	bool operator==(const Vec2iIndex &B) const noexcept { return Index == B.Index; }
	bool operator!=(const Vec2iIndex &B) const noexcept { return Index != B.Index; }

	Vec2iIndex(int8_t idx = -1) :
			Index(idx) {}
	Vec2iIndex(const Vec2iIndex &) = default;
	Vec2iIndex(Vec2iIndex &&) = default;
	~Vec2iIndex() = default;
};

typedef int8_t TeamIndex; // actually uses bitwise for multiple team support

} // namespace IO