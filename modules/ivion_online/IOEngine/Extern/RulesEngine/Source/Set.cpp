#include <RulesEngine/Set.hpp>

#include <cassert>

namespace RE {
void Set::Mutation::Apply() const noexcept {
	if (insert_) {
		object_->elements_.emplace(value_);
	} else {
		object_->elements_.erase(value_);
	}
}

void Set::Mutation::Revert() const noexcept {
	if (insert_) {
		object_->elements_.erase(value_);
	} else {
		object_->elements_.emplace(value_);
	}
}

void Set::insert(void *element, Context *context) {
	context->history_->AddDelta<Mutation>(
							 this,
							 element, true)
			->Apply();
};
void Set::remove(void *element, Context *context) {
	context->history_->AddDelta<Mutation>(
							 this,
							 element,
							 false)
			->Apply();
}

} // namespace RE