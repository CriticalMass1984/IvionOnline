#pragma once

#include <limits>
#include <string>
#include <type_traits>
#include <unordered_set>

namespace IO {
namespace Engine {
namespace Var {
template <typename T>
class Set {
	static_assert(std::is_trivially_destructible<T>::value, "Vars must be plain old data");
	static_assert(std::is_trivially_copyable<T>::value, "Vars must be plain old data");
	std::unordered_set<T> elements_;

public:
	struct InsertDelta : public Delta {
	private:
		Set<T> *set_;
		T new_;

	public:
		static bool Apply(InsertDelta *self) {
			return self->set_->elements_.emplace(self->new_).second;
		}

		static void Revert(InsertDelta *self) {
			self->set_->elements_.erase(self->new_);
		}

		constexpr InsertDelta(Set<T> *set, T _new) noexcept :
				Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), set_(set), new_(_new) {
		}

		inline const Set<T> *Target() const noexcept { return set_; }
		inline const T New() const noexcept { return new_; }

		~InsertDelta() noexcept = default;
	};

	struct RemoveDelta : public Delta {
	private:
		Set<T> *set_;
		T old_;

	public:
		static bool Apply(RemoveDelta *self) {
			self->set_->elements_.erase(self->old_);
			return true;
		}

		static void Revert(RemoveDelta *self) {
			self->set_->elements_.emplace(self->old_);
		}

		constexpr RemoveDelta(Set<T> *set, T _old) noexcept :
				Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), set_(set), old_(_old) {
		}

		inline const Set<T> *Target() const noexcept { return set_; }
		inline const T Old() const noexcept { return old_; }

		~RemoveDelta() noexcept = default;
	};

	Set() = default;
	Set(const std::unordered_set<T> &value) :
			elements_(value) {
	}

	Set(Set &&) noexcept = default;
	Set(const Set &) = default;

	inline auto begin() -> decltype(elements_.begin()) { return elements_.begin(); }
	inline auto end() -> decltype(elements_.end()) { return elements_.end(); }

	InsertDelta Insert(T value) {
		return InsertDelta(this, value);
	}
	RemoveDelta Remove(T value) {
		return RemoveDelta(this, value);
	}
	inline bool Empty() const noexcept {
		return elements_.empty();
	}

	std::unordered_set<T> &GetElements() noexcept { return elements_; }
};
} // namespace Var
} // namespace Engine
} // namespace IO