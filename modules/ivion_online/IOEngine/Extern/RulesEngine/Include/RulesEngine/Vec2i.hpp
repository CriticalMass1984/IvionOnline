#pragma once

#include <RulesEngine/Context.hpp>

namespace RE {
class Vec2i {
	int x_, y_;

public:
	inline Vec2i(int x = 0, int y = 0) :
			x_(x), y_(y) {}

	class Mutation : public RE::Delta {
	public:
		Vec2i *const object_;
		const int deltaX_, deltaY_;

		Mutation(Vec2i *v,
				int newX, int newY) :
				object_(v), deltaX_(newX - v->x_), deltaY_(newY - v->y_) {}

		void Apply() const noexcept;

		void Revert() const noexcept;

		Mutation(Mutation &&m) noexcept = default;
		Mutation(const Mutation &m) noexcept = delete;
	};

	void set(int x, int y, Context *);

	inline int x() const noexcept { return x_; }
	inline int y() const noexcept { return y_; }
};
} // namespace RE