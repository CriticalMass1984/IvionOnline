#pragma once

#include <IOEngine/Tile.hpp>
#include <vector>

namespace IO {
namespace Engine {
class Map {
	const int height_, width_;
	std::vector<Tile> tiles_;

public:
	Map(int height, int width) :
			height_(height), width_(width) {
		tiles_.reserve(height_ * width_);
		for (int y = 0; y < height_; ++y) {
			for (int x = 0; x < width_; ++x) {
				tiles_.emplace_back(x, y);
			}
		}
	}
	Map(const Map &) noexcept = delete;
	Map &operator=(const Map &) noexcept = delete;

	Map(Map &&) noexcept = default;
	Map &operator=(Map &&) noexcept = default;

	~Map() = default;

	inline auto begin() -> decltype(tiles_.begin()) { return tiles_.begin(); }
	inline auto end() -> decltype(tiles_.end()) { return tiles_.end(); }

	inline Tile *GetTile(int X, int Y) {
		if (X < 0 || X >= width_ || Y < 0 || Y >= height_) {
			return nullptr;
		}
		return &tiles_[Y * width_ + X];
	}
	inline Tile *GetTile(Vec2 pos) {
		return GetTile(pos.X, pos.Y);
	}
	inline int Height() { return height_; }
	inline int Width() { return width_; }
};
} // namespace Engine
} // namespace IO