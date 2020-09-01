#pragma once

#include <IOEngine/Entity.hpp>
#include <string>

namespace IO {
namespace Engine {
class MiscOption : public Entity {
public:
	std::string humanText_;

	MiscOption() = default;
	MiscOption(const std::string &str) :
			humanText_(str) {}
	virtual ~MiscOption() = default;
};

} // namespace Engine
} // namespace IO