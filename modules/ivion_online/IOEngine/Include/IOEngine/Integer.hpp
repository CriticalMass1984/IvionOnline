#pragma once

#include <cmath>

namespace IO
{
	namespace Engine
	{
		class Integer
		{
		public:
			int Value{0};

			constexpr Integer() noexcept = default;
			constexpr Integer(int v) noexcept : Value(v) {}

			Integer(const Integer &) noexcept = default;
			Integer &operator=(const Integer &) noexcept = default;

			Integer(Integer &&) noexcept = default;
			Integer &operator=(Integer &&) noexcept = default;

			~Integer() noexcept = default;

			inline Integer &&operator+(Integer &B) const noexcept
			{
				return Integer(this->Value + B.Value);
			}

			inline Integer &operator+=(Integer &B) noexcept
			{
				this->Value += B.Value;
				return *this;
			}

			inline Integer &&operator-(Integer &B) const noexcept
			{
				return Integer(this->Value - B.Value);
			}

			inline Integer &operator-=(Integer &B) noexcept
			{
				this->Value -= B.Value;
				return *this;
			}

			template <typename T>
			inline Integer &&operator*(T s) const noexcept
			{
				return Integer(this->Value * s);
			}

			template <typename T>
			inline Integer &&operator/(T s) const noexcept
			{
				return Integer(this->Value / s);
			}
		};
	} // namespace Engine
} // namespace IO