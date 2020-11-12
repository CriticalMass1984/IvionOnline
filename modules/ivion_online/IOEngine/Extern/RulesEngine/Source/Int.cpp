#include <RulesEngine/Int.hpp>

#include <cassert>

namespace RE {
void Int::Mutation::Apply() const noexcept {
	int_->value_ += delta_;
}

void Int::Mutation::Revert() const noexcept {
	int_->value_ -= delta_;
}

void Int::set(int v, Context *context) {
	context->history_->AddDelta<Mutation>(
							 this,
							 v,
							 value_)
			->Apply();
};

} // namespace RE