#pragma once

#include <RE/Delta.hpp>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <cassert>

namespace re {
template <typename T>
class Dictionary {
	std::unordered_map<std::size_t, T> map_;
	static constexpr std::hash<std::string> KeyHasher{};

public:
	static_assert(std::is_trivially_destructible<T>::value, "Dictionaries can only hold trivially destructible types");
	static_assert(std::is_trivially_copyable<T>::value, "Dictionaries can only hold trivially copyable types");

	class DictDelta : public Delta {
	public:
		enum class Operation {
			NONE,
			INSERT,
			ASSIGN,
			REMOVE
		};

	private:
		Dictionary *dict_{ nullptr };
		std::size_t key_;
		T newValue_;
		T oldValue_;
		Operation operation_;

		static void ApplyMethod(DictDelta *self) {
			assert(self);
			assert(self->dict_);
			switch (self->operation_) {
				case Operation::NONE:
					assert(false);
					break;
				case Operation::INSERT:
					self->dict_->map_.emplace(self->key_, self->newValue_);
					break;
				case Operation::ASSIGN:
					self->dict_->map_[self->key_] = self->newValue_;
					break;
				case Operation::REMOVE:
					self->dict_->map_.erase(self->key_);
					break;
				default:
					assert(false);
					break;
			}
		}

		static void RevertMethod(DictDelta *self) {
			assert(self);
			assert(self->dict_);
			switch (self->operation_) {
				case Operation::NONE:
					assert(false);
                    break;
				case Operation::INSERT:
					self->dict_->map_.erase(self->key_);
					break;
				case Operation::ASSIGN:
					self->dict_->map_[self->key_] = self->oldValue_;
					break;
				case Operation::REMOVE:
					self->dict_->map_.emplace(self->key_, self->oldValue_);
					break;
				default:
					assert(false);
                    break;
			}
		}

	public:
		DictDelta(Dictionary* dict,
		std::size_t key,
		T newValue,
		T oldValue,
		Operation operation)
        : Delta((Delta::ApplyMethod)ApplyMethod, (Delta::RevertMethod)RevertMethod),
        dict_(dict), key_(key), newValue_(newValue), oldValue_(oldValue), operation_(operation) {}
	};

    Dictionary() = default;
    Dictionary(const std::unordered_map<std::size_t, T>& init) : map_(init) {};
    Dictionary(Dictionary&&) noexcept = default;
    Dictionary(const Dictionary&) = delete;
    ~Dictionary() = default;

	DictDelta Set(std::size_t key, T value) {
		return DictDelta(this, key, value, map_[key], DictDelta::Operation::ASSIGN);
	}
	DictDelta Set(const std::string &key, T value) {
		return Set(KeyHasher(key), value);
	}
	DictDelta Insert(std::size_t key, T value) {
		return DictDelta(this, key, value, T(), DictDelta::Operation::INSERT);
	}
	DictDelta Insert(const std::string &key, T value) {
		return Insert(KeyHasher(key), value);
	}
	DictDelta Remove(std::size_t key) {
		return DictDelta(this, key, T(), map_[key], DictDelta::Operation::REMOVE);
	}
	DictDelta Remove(const std::string &key) {
		return Remove(KeyHasher(key));
	}

	inline T* Get(std::size_t key) noexcept
    {
        auto v = map_.find(key);
        if(v != map_.end())
        {
            return &v->second;
        }
        return nullptr;
    }

    inline T* Get(const std::string key) noexcept
    {
        return Get(KeyHasher(key));
    }

	inline T* Get(const char* key, std::size_t keyLen) noexcept
    {
        return Get(KeyHasher(std::string(key, keyLen)));
    }

private:
};
} // namespace re