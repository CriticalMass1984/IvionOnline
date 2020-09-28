#pragma once

#include <RE/Delta.hpp>
#include <RE/Types/Var.hpp>
#include <cassert>

namespace re {
namespace types {

class Integer {
	int value_{ 0 };

public:
	class SetDelta : public Delta {
		Integer *integer_{ nullptr };
		int newValue_{ 0 };
		int oldValue_{ 0 };

		static void ApplyMethod(SetDelta *self) {
			assert(self);
			assert(self->integer_);
			self->integer_->value_ = self->newValue_;
		}

		static void RevertMethod(SetDelta *self) {
			assert(self);
			assert(self->integer_);
			self->integer_->value_ = self->oldValue_;
		}

	public:
		inline SetDelta(Integer *integer, int newValue) noexcept :
				Delta((Delta::ApplyMethod)ApplyMethod, (Delta::RevertMethod)RevertMethod), integer_(integer), newValue_(newValue), oldValue_(integer_->value_) {
		}
	};
	Integer(int def = 0) :
			value_() {}
	inline int Value() const noexcept { return value_; }
	inline SetDelta Set(int value) noexcept { return SetDelta(this, value); }
	inline SetDelta Set(Integer value) noexcept { return SetDelta(this, value.value_); }
};
} // namespace types
typedef types::Integer *IntegerPtr;
typedef types::Var<IntegerPtr> IntegerVar;
} // namespace re