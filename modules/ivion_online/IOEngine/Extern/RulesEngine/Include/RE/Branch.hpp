#pragma once

#include <RE/Delta.hpp>
#include <cassert>
#include <limits>
#include <type_traits>
#include <vector>

namespace re {
class Branch {
	std::vector<unsigned char> memory_;
	std::vector<int> deltaOffsets_;
	int level_{ 0 };
	bool isGood_{ true };

	// branching futures
	std::vector<Branch> branches_;

public:
	Branch() noexcept = default;
	Branch(Branch &&) noexcept = default;
	Branch &operator=(Branch &&) noexcept = default;
	Branch(const Branch &) noexcept = delete;
	Branch &operator=(const Branch &) noexcept = delete;
	~Branch() noexcept = default;

	inline void MarkBad() {
		isGood_ = false;
	}

	template <typename T, typename... args_t>
	void Append(args_t... args) noexcept {
		static_assert(std::is_trivially_copyable<T>::value, "type must be trivially copyable!");
		static_assert(std::is_trivially_destructible<T>::value, "type must be trivially destructible!");
		static_assert(std::is_base_of<Delta, T>::value, "type must inherit from Delta!");
		assert(isGood_);
		assert(deltaOffsets_.size() == (unsigned int)level_);
		assert(memory_.size() + sizeof(T) < std::numeric_limits<int>::max());

		const std::size_t offset = memory_.size();
		memory_.resize(offset + sizeof(T));
		Delta *delta = reinterpret_cast<Delta *>(new (memory_.data() + offset) T(std::forward<args_t>(args)...));
		deltaOffsets_.push_back((int)offset);
		delta->Apply();
		level_++;
	}

	inline bool IsGood() const noexcept { return isGood_; }

	void SetLevel(int level) noexcept;
	inline void Apply() noexcept { SetLevel((int)deltaOffsets_.size()); }
	inline void Revert() noexcept { SetLevel(0); }
};
} // namespace re