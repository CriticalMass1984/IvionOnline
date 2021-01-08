#pragma once

#include <unordered_map>

#include <RulesEngine/Allocator.hpp>
#include <RulesEngine/Context.hpp>

namespace RE {
class Dict {
	std::unordered_map<std::string, void *> elements_;

	friend Allocator;
	Dict(std::unordered_map<std::string, void *> init = {}) :
			elements_(init) {}

public:
	class Mutation : public RE::Delta {
	public:
		Dict *const object_{ nullptr };
		const std::string key_;
		void *const newValue_{ nullptr };
		void *const oldValue_{ nullptr };

		Mutation(Dict *object,
				const std::string &key,
				void *newValue,
				void *oldValue) :
				object_(object), key_(key), newValue_(newValue), oldValue_(oldValue) {}

		void Apply() const noexcept;

		void Revert() const noexcept;

		Mutation(Mutation &&m) = default;
		Mutation(const Mutation &m) = delete;
	};

	auto begin() -> decltype(elements_.begin()) { return elements_.begin(); }
	auto end() -> decltype(elements_.end()) { return elements_.end(); }

	void *get(const std::string &key) const noexcept {
		auto it = elements_.find(key);
		if (it == elements_.end()) {
			return nullptr;
		}
		return it->second;
	}

	void set(const std::string &key, void *element, Context *context);

	void insert(const std::string &key, void *element, Context *context);
};
} // namespace RE