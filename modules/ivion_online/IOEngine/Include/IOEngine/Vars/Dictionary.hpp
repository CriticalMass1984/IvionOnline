#pragma once

#include <limits>
#include <string>
#include <type_traits>
#include <unordered_map>

namespace IO {
namespace Engine {
namespace Var {
template <typename T>
class Dictionary {
	static_assert(std::is_trivially_destructible<T>::value, "Vars must be plain old data");
	static_assert(std::is_trivially_copyable<T>::value, "Vars must be plain old data");
	std::unordered_map<std::string, T> elements_;

public:
	struct InsertDelta : public Delta {
	private:
		Dictionary<T> *dict_;
		std::string key_;
		T new_;

	public:
		static bool Apply(InsertDelta *self) {
			self->dict_->elements_.emplace(std::make_pair(self->key_, self->new_));
			return true;
		}

		static void Revert(InsertDelta *self) {
			self->dict_->elements_.erase(self->key_);
		}

		constexpr InsertDelta(Dictionary<T> *dict, T _new) noexcept :
				Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), dict_(dict), new_(_new) {
		}

		inline const Dictionary<T> *Target() const noexcept { return dict_; }
		inline const T New() const noexcept { return new_; }

		~InsertDelta() noexcept = default;
	};

	struct SetDelta : public Delta {
	private:
		Dictionary<T> *dict_;
		std::string key_;
		T new_;
		T old_;

	public:
		static bool Apply(SetDelta *self) {
			self->dict_->elements_[self->key_] = self->new_;
			return true;
		}

		static void Revert(SetDelta *self) {
			self->dict_->elements_[self->key_] = self->old_;
		}

		constexpr SetDelta(Dictionary<T> *dict, T _new, T _old) noexcept :
				Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), dict_(dict), new_(_new), old_(_old) {
		}

		inline const Dictionary<T> *Target() const noexcept { return dict_; }
		inline const T New() const noexcept { return new_; }
		inline const T Old() const noexcept { return old_; }

		~SetDelta() noexcept = default;
	};

	struct RemoveDelta : public Delta {
	private:
		Dictionary<T> *dict_;
		T old_;

	public:
		static bool Apply(RemoveDelta *self) {
			self->dict_->elements_.erase(self->key_);
			return true;
		}

		static void Revert(RemoveDelta *self) {
			self->dict_->elements_.emplace(std::make_pair(self->key_, self->old_));
		}

		constexpr RemoveDelta(Dictionary<T> *dict, T _old) noexcept :
				Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), dict_(dict), old_(_old) {
		}

		inline const Dictionary<T> *Target() const noexcept { return dict_; }
		inline const T Old() const noexcept { return old_; }

		~RemoveDelta() noexcept = default;
	};

	Dictionary() noexcept = default;
	Dictionary(const std::unordered_map<std::string, T> &value) noexcept :
			value_(value) {
	}

	Dictionary(Var &&) noexcept = default;
	Dictionary(const Var &) noexcept = default;

	InsertDelta Insert(const std::string &key, T value) {
		return InsertDelta(this, key, value);
	}
	SetDelta Set(const std::string &key, T vaue) {
		return SetDelta(this, key, value, elements_.at(key));
	}
	RemoveDelta Remove(const std::string &key) {
		return RemoveDelta(this, key, elements_.at(key));
	}
};
} // namespace Var
} // namespace Engine
} // namespace IO