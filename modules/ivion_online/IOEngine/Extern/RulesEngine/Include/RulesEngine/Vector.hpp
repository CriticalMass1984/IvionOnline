#pragma once

#include <vector>

#include <RulesEngine/Allocator.hpp>
#include <RulesEngine/Context.hpp>

namespace RE {
class Vector {
	std::vector<void *> elements_;

	friend Allocator;
	Vector(std::vector<void *> init = {}) :
			elements_(init) {}

public:
	class Mutation : public RE::Delta {
	public:
		Vector *const vector_{ nullptr };
		const int index_;
		void *const newValue_{ nullptr };
		void *const oldValue_{ nullptr };

		Mutation(Vector *vector,
				int index,
				void *newValue,
				void *oldValue) :
				vector_(vector), index_(index), newValue_(newValue), oldValue_(oldValue) {}

		void Apply() const noexcept;

		void Revert() const noexcept;

		Mutation(Mutation &&m) noexcept = default;
		Mutation(const Mutation &m) noexcept = delete;
	};

	auto begin() -> decltype(elements_.begin()) { return elements_.begin(); }
	auto end() -> decltype(elements_.end()) { return elements_.end(); }

	void *get(int index) const noexcept {
		while (index < 0) {
			index += elements_.size();
		}
		return elements_.at(index);
	}

	void emplace_back(void *element, Context *context);

	void *pop_back(Context *context);

	void set(int index, void *element, Context *context);

	void insert(int index, void *element, Context *context);
};
} // namespace RE