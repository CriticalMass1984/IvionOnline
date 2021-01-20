#pragma once

#include <IOEngine/Effects/Path.hpp>
#include <IOEngine/Types.hpp>

namespace IO {
class Executor {
public:
	template <typename IndexType>
	class Slice {
		std::vector<IndexType> &vector_;
		int index_, size_;

	public:
		Slice(std::vector<IndexType> &vector, int index, int size) :
				vector_(vector), index_(index), size_(size) {}
		Slice(Slice &&) noexcept = default;
		Slice(const Slice &) noexcept = default;
		~Slice() noexcept = default;

		decltype(vector_.begin()) begin() noexcept { return vector_.begin() + index_; }
		decltype(vector_.begin()) begin() const noexcept { return vector_.begin() + index_; }
		decltype(vector_.end()) end() noexcept { return vector_.begin() + index_ + size_; }
		decltype(vector_.end()) end() const noexcept { return vector_.begin() + index_ + size_; }
	};
	Integer LastAmount() const noexcept { return amounts_.back(); }
	Vec2i LastPosition() const noexcept { return positions_.back(); }

	// whom is making choices
	PlayerIndex ActivePlayer() const noexcept { return activePlayer_.back(); }

	// which card is being played / resolving / having their trigger occur
	CardIndex ActiveCard() const noexcept { return activeCard_.back(); }

	Slice<PlayerIndex> LastSelectedPlayer() noexcept;
	Slice<CardIndex> LastSelectedCard() noexcept;
	Slice<TileIndex> LastSelectedTile() noexcept;

	Path Root;

	const std::vector<Path *> LeafPaths() const noexcept { return leafPaths_; }

	void UpdateLeafPaths(std::vector<std::tuple<Path*, std::vector<Path>>>& newLeaves);

	Executor() = default;
	void Revert(const Effect &effect) noexcept;
	bool Execute(const Effect &effect) noexcept;
	void Revert(const Path &path) noexcept;
	void Execute(const Path &path) noexcept;

private:
	std::vector<Effect> effects_;
	std::vector<Path *> leafPaths_{ &Root };

	std::vector<PlayerIndex> activePlayer_;
	std::vector<CardIndex> activeCard_;

	// the final index in each section is actually the previous number of entries in a slice
	std::vector<PlayerIndex> lastSelectedPlayer_;
	std::vector<CardIndex> lastSelectedCard_;
	std::vector<TileIndex> lastSelectedTile_;

	std::vector<Integer> amounts_;
	std::vector<Vec2i> positions_;
};
} // namespace IO