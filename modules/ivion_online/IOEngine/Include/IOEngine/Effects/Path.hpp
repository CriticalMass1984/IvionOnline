#pragma once

#include <array>
#include <cstdint>
#include <unordered_set>
#include <variant>
#include <vector>

#include <IOEngine/Effects/Effects.hpp>

namespace IO {
class Path {
	bool hasGoodBranch() const noexcept {
		if(Branches.empty())
		{
			return true;
		}
		for (const Path &path : Branches) {
			if (path.IsGood()) {
				return true;
			}
		}
		return false;
	}

public:
	Path() = default;
	Path(Path &&) noexcept = default;
	Path(const Path &) = default;
	~Path() = default;

	// it's possible for a path to be neither good nor bad
	bool IsGood() const noexcept { return Effects.back().index() == variant_index<Effect, Success>() && hasGoodBranch(); }
	bool IsBad() const noexcept { return Effects.back().index() == variant_index<Effect, Failure>() || !hasGoodBranch(); }

	std::vector<Path> Branches;
	std::vector<Effect> Effects;
};
} // namespace IO