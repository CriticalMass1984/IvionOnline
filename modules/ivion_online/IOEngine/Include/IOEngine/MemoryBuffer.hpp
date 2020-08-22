#pragma once

#include <limits>
#include <type_traits>
#include <vector>
#include <cassert>

namespace IO
{
	namespace Engine
	{

		/*
    Allows you to append semi-arbitrary objects to contiguous memory
*/
		class MemoryBuffer
		{
			std::vector<unsigned char> memory_;

		public:
			MemoryBuffer()
			{
			}
			~MemoryBuffer() = default;

			template <typename T>
			T *GetObject(std::size_t offset) noexcept
			{
				assert(offset <= memory_.size() - sizeof(T));
				return reinterpret_cast<T *>(memory_.data() + offset);
			}

			template <typename T, typename... args_t>
			std::size_t EmplaceObject(args_t... args) noexcept
			{
				static_assert(std::is_trivially_destructible<T>::value, "can only emplace trivially destructible objects");
				static_assert(std::is_trivially_copyable<T>::value, "can only emplace trivially copyable objects");
				static_assert(std::is_nothrow_constructible<T>::value, "can only emplace noexcept constructable objects");

				const std::size_t offset = memory_.size();
				memory_.resize(offset + sizeof(T));

				//return the object reference
				new (memory_.data() + offset) T(std::forward<args_t>(args)...);
				return offset;
			}
		};

	} // namespace Engine
} // namespace IO