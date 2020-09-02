#pragma once

#include <cmath>
#include <string>

namespace IO {
namespace Engine {
class Vec2 {
public:
	int X{ -1 }, Y{ -1 };

	constexpr Vec2() noexcept = default;
	constexpr Vec2(int x, int y) noexcept :
			X(x), Y(y) {}

	constexpr Vec2(const Vec2 &) noexcept = default;
	Vec2 &operator=(const Vec2 &) noexcept = default;

	constexpr Vec2(Vec2 &&) noexcept = default;
	Vec2 &operator=(Vec2 &&) noexcept = default;

	~Vec2() noexcept = default;

	template <typename T>
	inline Vec2 operator*(T s) const noexcept {
		return Vec2(this->X * s, this->Y * s);
	}

	//non-euclidean space
	inline double Len() const noexcept {
		return std::abs(X) + std::abs(Y);
	}
	inline std::string Str() const noexcept {
		char buffer[64];
		snprintf(buffer, 64, "Vec2(x: %d, y: %d)", X, Y);
		return std::string(buffer);
	}
};
static inline Vec2 operator-(const Vec2 &l, const Vec2 &r) {
	return Vec2(l.X - r.X, l.Y - r.Y);
}
static inline Vec2 operator+(const Vec2 &l, const Vec2 &r) {
	return Vec2(l.X + r.X, l.Y + r.Y);
}
} // namespace Engine
} // namespace IO