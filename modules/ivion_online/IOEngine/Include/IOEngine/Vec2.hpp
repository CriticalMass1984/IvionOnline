#pragma once

#include <cmath>

namespace IO
{
	namespace Engine
	{
		class Vec2
		{
		public:
			int X{-1}, Y{-1};

			constexpr Vec2() noexcept = default;
			constexpr Vec2(int x, int y) noexcept : X(x), Y(y) {}

			constexpr Vec2(const Vec2 &) noexcept = default;
			Vec2 &operator=(const Vec2 &) noexcept = default;

			constexpr Vec2(Vec2 &&) noexcept = default;
			Vec2 &operator=(Vec2 &&) noexcept = default;

			~Vec2() noexcept = default;

			inline Vec2 operator+(Vec2 &B) const noexcept
			{
				return Vec2(this->X + B.X, this->Y + B.Y);
			}

			inline Vec2 operator-(Vec2 &B) const noexcept
			{
				return Vec2(this->X - B.X, this->Y - B.Y);
			}

			template <typename T>
			inline Vec2 operator*(T s) const noexcept
			{
				return Vec2(this->X * s, this->Y * s);
			}

			inline double SqrLen() const noexcept
			{
				return std::pow(this->X, 2) + std::pow(this->Y, 2);
			}

			inline double Len() const noexcept
			{
				return std::sqrt(SqrLen());
			}
		};
	} // namespace Engine
} // namespace IO