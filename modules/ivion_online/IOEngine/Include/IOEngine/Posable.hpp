#pragma once

#include <IOEngine/Vars/Var.hpp>
#include <IOEngine/Vec2.hpp>

namespace IO {
namespace Engine {
class Posable {
public:
	virtual Vec2 GetPosition() const = 0;
	int GetDistance(const Posable *p) const {
		return (this->GetPosition() - p->GetPosition()).Len();
	}

	Posable() noexcept = default;
	virtual ~Posable() = default;
};
typedef Posable *StackPosable;
typedef Var::Var<Posable *> PosableVar;
} // namespace Engine
} // namespace IO