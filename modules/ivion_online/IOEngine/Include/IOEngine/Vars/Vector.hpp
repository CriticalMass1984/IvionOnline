#pragma once

#include <limits>
#include <string>
#include <type_traits>
#include <vector>

namespace IO {
namespace Engine {
namespace Var {
template <typename T>
class Vector {
	static_assert(std::is_trivially_destructible<T>::value, "Vars must be plain old data");
	static_assert(std::is_trivially_copyable<T>::value, "Vars must be plain old data");
	std::vector<T> elements_;

public:
	struct SetDelta : public Delta {
	private:
		Vector<T> *vec_;
		int pos_;
		T new_;
		T old_;

	public:
		static bool Apply(SetDelta *self) {
			if (self->pos_ == self->vec_->elements_.size()) {
				self->vec_->elements_.emplace_back(self->new_);
			} else {
				self->vec_->elements_[self->pos_] = self->new_;
			}
			return true;
		}

		static void Revert(SetDelta *self) {
			if (self->pos_ == self->vec_->elements_.size() - 1) {
				self
			} else {
				self->vec_->elements_[self->pos_] = self->old_;
			}
		}

		constexpr SetDelta(Vector<T> *dict, int pos, T _new, T _old) noexcept :
				Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), vec_(dict), pos_(pos), new_(_new), old_(_old) {
		}

		inline const Vector<T> *Target() const noexcept { return vec_; }
		inline const T New() const noexcept { return new_; }
		inline const T Old() const noexcept { return old_; }

		~SetDelta() noexcept = default;
	};

	struct RemoveDelta : public Delta {
	private:
		Vector<T> *vec_;
		int pos_;
		T old_;

	public:
		static bool Apply(RemoveDelta *self) {
			self->vec_->elements_.erase(self->pos_);
			return true;
		}

		static void Revert(RemoveDelta *self) {
			self->vec_->elements_.emplace(std::make_pair(self->pos_, self->old_));
		}

		constexpr RemoveDelta(Vector<T> *dict, int pos, T _old) noexcept :
				Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), vec_(dict), pos_(pos), old_(_old) {
		}

		inline const Vector<T> *Target() const noexcept { return vec_; }
		inline const T Old() const noexcept { return old_; }

		~RemoveDelta() noexcept = default;
	};

	Vector() = default;
	Vector(const std::unordered_map<std::string, T> &value) :
			elements_(value) {
	}

	Vector(Vector &&) noexcept = default;
	Vector(const Vector &) = default;

	inline auto begin() -> decltype(elements_.begin()) { return elements_.begin(); }
	inline auto end() -> decltype(elements_.end()) { return elements_.end(); }

	InsertDelta Append(int pos, T value) {
		return InsertDelta(this, (int)elements_.size(), value);
	}
	InsertDelta Insert(int pos, T value) {
		return InsertDelta(this, pos, value);
	}
	SetDelta Set(int pos, T value) {
		return SetDelta(this, pos, value, elements_.at(pos));
	}
	RemoveDelta Remove(int pos) {
		return RemoveDelta(this, pos, elements_.at(pos));
	}
};
} // namespace Var
} // namespace Engine
} // namespace IO