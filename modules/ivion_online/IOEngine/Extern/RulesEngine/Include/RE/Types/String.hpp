#pragma once

#include <RE/Delta.hpp>
#include <cassert>

namespace re {
namespace types {
class String {
	const char *value_{ nullptr };
	int length_{ 0 };

public:
	String() noexcept = default;
	inline String(const char *value, int len) noexcept :
			value_(value), length_(len) {}
	~String() noexcept = default;

	class SetDelta : public Delta {
		String *string_{ nullptr };
		const char *newValue_{ nullptr };
		int newLength_{ 0 };
		const char *oldValue_{ nullptr };
		int oldLength_{ 0 };

		static void ApplyMethod(SetDelta *self) {
			assert(self);
			assert(self->string_);
			self->string_->value_ = self->newValue_;
		}

		static void RevertMethod(SetDelta *self) {
			assert(self);
			assert(self->string_);
			self->string_->value_ = self->oldValue_;
		}

	public:
		inline SetDelta(String *string, const char *newValue, int len) noexcept :
				Delta((Delta::ApplyMethod)ApplyMethod, (Delta::RevertMethod)RevertMethod),
				string_(string),
				newValue_(newValue),
				newLength_(len),
				oldValue_(string_->value_),
				oldLength_(string_->length_) {
		}
	};

	inline const char *Value() const noexcept { return value_; }
	inline int Length() const noexcept { return length_; }
	inline SetDelta Set(const char *newValue, int len) noexcept { return SetDelta(this, newValue, len); }
};
} // namespace types
typedef types::String *StringPtr;
} // namespace re