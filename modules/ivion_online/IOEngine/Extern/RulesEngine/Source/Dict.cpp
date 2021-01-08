#include <RulesEngine/Dict.hpp>

#include <cassert>

namespace RE {
void Dict::Mutation::Apply() const noexcept {
	if (newValue_ == nullptr) {
		// remove
		object_->elements_.erase(key_);
	} else if (oldValue_ == nullptr) {
		// insert
		object_->elements_.emplace(key_, newValue_);
	} else {
		// set
		object_->elements_[key_] = newValue_;
	}
}

void Dict::Mutation::Revert() const noexcept {
	if (newValue_ == nullptr) {
		// remove
		object_->elements_.emplace(key_, newValue_);
	} else if (oldValue_ == nullptr) {
		// insert
		object_->elements_.erase(key_);
	} else {
		// set
		object_->elements_[key_] = oldValue_;
	}
}

void Dict::set(const std::string& key, void *element, Context *context) {
	void* old = get(key);

	context->history_->AddDelta<Mutation>(
							 this,
							 key,
							 element,
							 old)
			->Apply();
};
void Dict::insert(const std::string& key, void *element, Context *context) {
	context->history_->AddDelta<Mutation>(
							 this,
							 key,
							 element,
							 nullptr)
			->Apply();
}

} // namespace RE