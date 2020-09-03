#pragma once

#include <IOEngine/Entity.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <IOEngine/Vec2.hpp>

namespace IO {
namespace Engine {
class Posable : public Entity {
public:
	virtual Vec2 GetPosition() const = 0;
	int GetDistance(const Posable *p) const {
		Vec2 l = this->GetPosition();
		Vec2 r = p->GetPosition();
		Vec2 diff = l - r;
		return (l - r).Len();
	}

	Posable() noexcept = default;
	virtual ~Posable() = default;
};
typedef Posable *StackPosable;
typedef Var::Var<Posable *> PosableVar;
} // namespace Engine
} // namespace IO