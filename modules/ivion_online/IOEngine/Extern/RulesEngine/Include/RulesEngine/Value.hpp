#pragma once

#include <RulesEngine/Context.hpp>

namespace RE {
template <typename Type>
class Value {
	static_assert(std::is_integral_v<Type>, "value must be integral");
	Type value_;

public:
	inline Value(Type v = Type(0)) :
			value_(v) {}

	class Mutation : public RE::Delta {
	public:
		Value *const value_;
		const Type new_;
		const Type old_;

		Mutation(Value *v,
				Type newValue, Type oldValue) :
				value_(v), new_(newValue), old_(oldValue) {}

		void Apply() const noexcept {
			value_->value_ = new_;
		}

		void Revert() const noexcept {
			value_->value_ = old_;
		}

		Mutation(Mutation &&m) noexcept = default;
		Mutation(const Mutation &m) noexcept = delete;
	};

	void set(Type v, Context *context) {
		context->history_->AddDelta<Mutation>(
								 this,
								 v,
								 value_)
				->Apply();
	};

	inline Type value() const noexcept { return value_; }
};
} // namespace RE