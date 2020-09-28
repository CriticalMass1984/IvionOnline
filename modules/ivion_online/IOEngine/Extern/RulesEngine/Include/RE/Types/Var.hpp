#pragma once

#include <RE/Delta.hpp>
#include <cassert>

namespace re {
namespace types {
template <typename Type>
class Var {
	Type value_;

public:
	class SetDelta : public Delta {
		Var *ref_{ nullptr };
		Type newValue_{ 0 };
		Type oldValue_{ 0 };

		static void ApplyMethod(SetDelta *self) {
			assert(self);
			assert(self->ref_);
			self->ref_->value_ = self->newValue_;
		}

		static void RevertMethod(SetDelta *self) {
			assert(self);
			assert(self->ref_);
			self->ref_->value_ = self->oldValue_;
		}

	public:
		inline SetDelta(Var *ptr, Type newValue) noexcept :
				Delta((Delta::ApplyMethod)ApplyMethod, (Delta::RevertMethod)RevertMethod), ref_(ptr), newValue_(newValue), oldValue_(ref_->value_) {
		}
	};

	Var(Type val) noexcept :
			value_(val) {}
	Var() noexcept = default;

	inline Type operator*() const noexcept { return value_; }
	inline SetDelta Set(Type value) noexcept { return SetDelta(this, value); }
};

} // namespace types
} // namespace re