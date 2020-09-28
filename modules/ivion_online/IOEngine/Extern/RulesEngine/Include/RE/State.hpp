#pragma once

#include <RE/Types/Integer.hpp>
#include <RE/Types/String.hpp>
#include <RE/Types/Object.hpp>
#include <RE/Structures/Dictionary.hpp>

#include <cassert>
#include <limits>
#include <type_traits>
#include <vector>

namespace re {
class State {
public:
	State() noexcept = default;
	State(State &&) noexcept = default;
	State &operator=(State &&) noexcept = default;
	State(const State &) noexcept = delete;
	State &operator=(const State &) noexcept = delete;
	~State() noexcept = default;

	Dictionary<ObjectPtr> Objects;
	ObjectPtr ActiveObject{nullptr};
};
} // namespace re