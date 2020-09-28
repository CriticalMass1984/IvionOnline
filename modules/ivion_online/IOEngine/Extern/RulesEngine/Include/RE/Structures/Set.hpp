#pragma once

#include <RE/Delta.hpp>
#include <string>
#include <unordered_set>
#include <cassert>

namespace re {
template <typename T>
class Set {
	std::unordered_set<T> elements_;

public:
	static_assert(std::is_trivially_destructible<T>::value, "Dictionaries can only hold trivially destructible types");
	static_assert(std::is_trivially_copyable<T>::value, "Dictionaries can only hold trivially copyable types");

	class SetDelta : public Delta {
	public:
		enum class Operation {
			NONE,
			INSERT,
			REMOVE
		};

	private:
		Set *set_{ nullptr };
		std::size_t key_;
		T newValue_;
		T oldValue_;
		Operation operation_;

		static void ApplyMethod(SetDelta *self) {
			assert(self);
			assert(self->set_);
			switch (self->operation_) {
				case Operation::NONE:
					assert(false);
					break;
				case Operation::INSERT:
					self->set_->elements_.emplace(self->key_, self->newValue_);
					break;
				case Operation::ASSIGN:
					self->set_->elements_[self->key_] = self->newValue_;
					break;
				case Operation::REMOVE:
					return self->set_->elements_.erase(self->key_) == 1;
				default:
					assert(false);
					break;
			}
		}

		static void RevertMethod(SetDelta *self) {
			assert(self);
			assert(self->set_);
			switch (self->operation_) {
				case Operation::NONE:
					assert(false);
                    break;
				case Operation::INSERT:
					self->set_->elements_.erase(self->key_);
					break;
				case Operation::ASSIGN:
					self->set_->elements_[self->key_] = self->oldValue_;
					break;
				case Operation::REMOVE:
					self->set_->elements_.emplace(self->key_, self->oldValue_);
					break;
				default:
					assert(false);
                    break;
			}
		}

	public:
		SetDelta(Set* dict,
		std::size_t key,
		T newValue,
		T oldValue,
		Operation operation)
        : Delta((Delta::ApplyMethod)ApplyMethod, (Delta::RevertMethod)RevertMethod),
        set_(dict), key_(key), newValue_(newValue), oldValue_(oldValue), operation_(operation) {}
	};

    Set() = default;
    Set(const std::unordered_set<std::size_t, T>& init) : elements_(init) {};
    Set(Set&&) noexcept = default;
    Set(const Set&) = delete;
    ~Set() = default;

	SetDelta Insert(std::size_t key, T value) {
		return SetDelta(this, key, value, T(), SetDelta::Operation::INSERT);
	}
	SetDelta Insert(const std::string &key, T value) {
		return Insert(KeyHasher(key), value);
	}
	SetDelta Remove(std::size_t key) {
		return SetDelta(this, key, T(), elements_[key], SetDelta::Operation::REMOVE);
	}
	SetDelta Remove(const std::string &key) {
		return Remove(KeyHasher(key));
	}
};
} // namespace re