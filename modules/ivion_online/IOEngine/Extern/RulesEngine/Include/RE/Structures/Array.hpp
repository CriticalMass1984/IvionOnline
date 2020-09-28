#pragma once

#include <RE/Delta.hpp>
#include <cassert>
#include <string>
#include <vector>

namespace re {
template <typename T>
class Array {
	std::vector<T> elements_;

public:
	static_assert(std::is_trivially_destructible<T>::value, "Dictionaries can only hold trivially destructible types");
	static_assert(std::is_trivially_copyable<T>::value, "Dictionaries can only hold trivially copyable types");

	class ArrayDelta : public Delta {
	public:
		enum class Operation {
			NONE,
			INSERT,
			ASSIGN,
			REMOVE
		};

	private:
		Array *set_{ nullptr };
		int pos_;
		T newValue_;
		T oldValue_;
		Operation operation_;

		static void ApplyMethod(ArrayDelta *self) {
			assert(self);
			assert(self->set_);
			switch (self->operation_) {
				case Operation::NONE:
					assert(false);
					break;
				case Operation::INSERT:
					if(self->pos_ == self->set_->elements_.size())
					{
						self->set_->elements_.emplace_back(self->newValue_);
						break;
					}
					self->set_->elements_.emplace(self->set_->elements_.begin() + self->pos_, self->newValue_);
					break;
				case Operation::ASSIGN:
					self->set_->elements_[self->pos_] = self->newValue_;
					break;
				case Operation::REMOVE:
					self->set_->elements_.erase(self->set_->elements_.begin() + self->pos_);
					break;
				default:
					assert(false);
					break;
			}
		}

		static void RevertMethod(ArrayDelta *self) {
			assert(self);
			assert(self->set_);
			switch (self->operation_) {
				case Operation::NONE:
					assert(false);
					break;
				case Operation::INSERT:
					self->set_->elements_.erase(self->set_->elements_.begin() + self->pos_);
					break;
				case Operation::ASSIGN:
					self->set_->elements_[self->pos_] = self->oldValue_;
					break;
				case Operation::REMOVE:
					if(self->pos_ == self->set_->elements_.size())
					{
						self->set_->elements_.emplace_back(self->newValue_);
						break;
					}
					self->set_->elements_.emplace(self->set_->elements_.begin() + self->pos_, self->oldValue_);
					break;
				default:
					assert(false);
					break;
			}
		}

	public:
		ArrayDelta(Array *dict,
				int pos,
				T newValue,
				T oldValue,
				Operation operation) :
				Delta((Delta::ApplyMethod)ApplyMethod, (Delta::RevertMethod)RevertMethod),
				set_(dict),
				pos_(pos),
				newValue_(newValue),
				oldValue_(oldValue),
				operation_(operation) {}
	};

	Array() = default;
	Array(const std::initializer_list<T> &init) :
			elements_(init){};
	Array(const std::vector<T> &init) :
			elements_(init){};
	Array(Array &&) noexcept = default;
	Array(const Array &) = delete;
	~Array() = default;
	
	ArrayDelta Set(int key, T value) {
		return ArrayDelta(this, key, value, elements_[key], ArrayDelta::Operation::ASSIGN);
	}
	ArrayDelta Insert(int pos, T value) {
		return ArrayDelta(this, pos, value, T(), ArrayDelta::Operation::INSERT);
	}
	ArrayDelta Remove(int pos) {
		return ArrayDelta(this, pos, T(), elements_[pos], ArrayDelta::Operation::REMOVE);
	}

	T* Get(int pos) noexcept
	{
		if(pos < 0)
		{
			pos += elements_.size();
		}
		if(pos < 0 || pos >= elements_.size())
		{
			return nullptr;
		}
		return &elements_.at(pos);
	}
};
} // namespace re