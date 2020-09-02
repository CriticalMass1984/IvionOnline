#pragma once

namespace IO {
namespace Engine {
class Entity {
	friend class Branch;
	int choiceIndex_{ -1 };

public:
	Entity() noexcept = default;
	virtual ~Entity() = default;

	int ChoiceIndex() const noexcept { return choiceIndex_; }
};

} // namespace Engine
} // namespace IO