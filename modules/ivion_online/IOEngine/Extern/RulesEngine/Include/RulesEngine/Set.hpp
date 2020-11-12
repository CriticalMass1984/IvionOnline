#pragma once

#include <unordered_set>

#include <RulesEngine/Allocator.hpp>
#include <RulesEngine/Context.hpp>

namespace RE {
class Set {
	std::unordered_set<void *> elements_;

	friend Allocator;
	Set(const decltype(elements_)& init = {}) :
			elements_(init) {}

public:
	class Mutation : public RE::Delta {
	public:
		Set *const object_{ nullptr };
		void *const value_{ nullptr };
		const bool insert_;

		Mutation(Set * object,
				void* value,
				bool insert) :
				object_(object), value_(value), insert_(insert) {}

		void Apply() const noexcept;

		void Revert() const noexcept;

		Mutation(Mutation &&m) noexcept = default;
		Mutation(const Mutation &m) noexcept = delete;
	};

	auto begin() -> decltype(elements_.begin()) { return elements_.begin(); }
	auto end() -> decltype(elements_.end()) { return elements_.end(); }

	void insert(void *element, Context *context);
	void remove(void *element, Context *context);

};
} // namespace RE