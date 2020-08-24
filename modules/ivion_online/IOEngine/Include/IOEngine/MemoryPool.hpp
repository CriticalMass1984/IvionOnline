#pragma once

#include <limits>
#include <memory>
#include <array>
#include <type_traits>
#include <vector>

namespace IO
{
	namespace Engine
	{

		/*
			Allows you to append semi-arbitrary objects to contiguous memory
		*/
		class MemoryPool
		{
			static constexpr int kPoolSize = 1024 * 4;
			typedef std::array<unsigned char, kPoolSize> Pool;
			std::vector<std::unique_ptr<Pool>> pools_;

			Pool *current_pool_{nullptr};
			int current_pool_size_{0};

			Pool *NewPool()
			{
				pools_.emplace_back(std::make_unique<Pool>());
				return pools_.back().get();
				// if (!it.second)
				// {
				// 	fprintf(stderr, "Failed to emplace pool #%lu\n", pools_.size());
				// 	std::exit(-1);
				// }
				// return it.first->get();
			}

		public:
			MemoryPool() : current_pool_(NewPool()), current_pool_size_(0)
			{
			}
			MemoryPool(MemoryPool&&) noexcept = default;
			MemoryPool(const MemoryPool&) = delete;
			~MemoryPool() = default;

			template <typename T, typename... args_t>
			T *EmplaceObject(args_t... args)
			{
				static_assert(std::is_trivially_destructible<T>::value, "can only emplace trivially destructible objects");
				static_assert(sizeof(T) < kPoolSize, "The pool needs to be bigger");

				void *objPtr = current_pool_->data() + current_pool_size_;
				current_pool_size_ += sizeof(T);

				// check if we ran out of space and need a new pool
				if (current_pool_size_ > kPoolSize)
				{
					current_pool_ = NewPool();
					current_pool_size_ = 0;
					objPtr = current_pool_->data();
				}

				//return the object reference
				return new (objPtr) T(std::forward<args_t>(args)...);
			}
		};

	} // namespace Engine
} // namespace IO