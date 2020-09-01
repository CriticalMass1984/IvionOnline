#pragma once

namespace IO {
namespace Engine {
class Entity {
	friend class Branch;
	int choiceIndex_{ -1 };

public:
	Entity() noexcept = default;
	virtual ~Entity() = default;
};

} // namespace Engine
} // namespace IO