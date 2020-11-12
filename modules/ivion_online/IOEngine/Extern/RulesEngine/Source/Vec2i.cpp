#include <RulesEngine/Vec2i.hpp>

#include <cassert>

namespace RE {
void Vec2i::Mutation::Apply() const noexcept {
	object_->x_ += deltaX_;
	object_->y_ += deltaY_;
}

void Vec2i::Mutation::Revert() const noexcept {
	object_->x_ -= deltaX_;
	object_->y_ -= deltaY_;
}

void Vec2i::set(int x, int y, Context *context) {
	context->history_->AddDelta<Mutation>(
							 this,
							 x,
							 y)
			->Apply();
};

} // namespace RE