#pragma once

#include <RulesEngine/Context.hpp>

namespace RE {
class Int {
	int value_;

public:
	inline Int(int v = 0) :
			value_(v) {}

	class Mutation : public RE::Delta {
	public:
		Int *const int_;
		const int delta_;

		Mutation(Int *v,
				int newValue, int oldValue) :
				int_(v), delta_(newValue - oldValue) {}

		void Apply() const noexcept;

		void Revert() const noexcept;

		Mutation(Mutation &&m) noexcept = default;
		Mutation(const Mutation &m) noexcept = delete;
	};

	void set(int value, Context *);

	inline int value() const noexcept { return value_; }
};
} // namespace RE