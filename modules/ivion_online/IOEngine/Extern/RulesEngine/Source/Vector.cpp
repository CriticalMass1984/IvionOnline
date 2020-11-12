#include <RulesEngine/Vector.hpp>

#include <cassert>

namespace RE {
void Vector::Mutation::Apply() const noexcept {
	assert(index_ >= 0 && index_ <= vector_->elements_.size());
	if (newValue_ == nullptr) {
		// remove
		vector_->elements_.erase(vector_->elements_.begin() + index_);
	} else if (oldValue_ == nullptr) {
		// insert
		if (index_ == vector_->elements_.size()) {
			vector_->elements_.emplace_back(newValue_);
		} else {
			vector_->elements_.emplace(vector_->elements_.begin() + index_, newValue_);
		}
	} else {
		// set
		vector_->elements_[index_] = newValue_;
	}
}

void Vector::Mutation::Revert() const noexcept {
	if (newValue_ == nullptr) {
		// remove
		if (index_ == vector_->elements_.size()) {
			vector_->elements_.emplace_back(oldValue_);
		} else {
			vector_->elements_.emplace(vector_->elements_.begin() + index_, oldValue_);
		}
	} else if (oldValue_ == nullptr) {
		// insert
		vector_->elements_.erase(vector_->elements_.begin() + index_);
	} else {
		// set
		vector_->elements_[index_] = oldValue_;
	}
}

void Vector::emplace_back(void *element, Context *context) {
	context->history_->AddDelta<Mutation>(
							 this,
							 (decltype(Mutation::index_))this->elements_.size(),
							 element,
							 nullptr)
			->Apply();
};

void *Vector::pop_back(Context *context) {
	decltype(Mutation::index_) index = (decltype(Mutation::index_))this->elements_.size() - 1;
	void *obj = elements_.at(index);

	context->history_->AddDelta<Mutation>(
							 this,
							 index,
							 nullptr,
							 obj)
			->Apply();
	return obj;
}

void Vector::set(int index, void *element, Context *context) {
	while(index < 0)
    {
        index += elements_.size();
    }
    assert(index >= 0 && index < elements_.size());
	context->history_->AddDelta<Mutation>(
							 this,
							 (decltype(Mutation::index_))index,
							 element,
							 elements_.at(index))
			->Apply();
};
void Vector::insert(int index, void *element, Context *context) {
    while(index < 0)
    {
        index += elements_.size();
    }
	assert(index >= 0 && index <= elements_.size());
	context->history_->AddDelta<Mutation>(
							 this,
							 (decltype(Mutation::index_))index,
							 element,
							 nullptr)
			->Apply();
}

} // namespace RE