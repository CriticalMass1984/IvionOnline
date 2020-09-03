#pragma once

#include <array>
#include <limits>
#include <memory>
#include <type_traits>
#include <vector>

namespace IO {
namespace Engine {

/*
			Allows you to append semi-arbitrary objects to contiguous memory
		*/
class ObjectPool {
	typedef void (*Destructor)(void *obj);
	static constexpr int kPoolSize = 1024 * 4;
	struct Pool {
		std::array<unsigned char, kPoolSize> data_;
		struct Object {
			Destructor destructor_;
			int offset_;
		};
		std::vector<Object> objects_;
	};
	std::vector<std::shared_ptr<Pool>> pools_;

	Pool *current_pool_{ nullptr };
	int current_pool_size_{ 0 };

	Pool *NewPool() {
		pools_.emplace_back();
		return pools_.back().get();
	}

public:
	ObjectPool() :
			current_pool_(NewPool()), current_pool_size_(0) {
	}
	ObjectPool(ObjectPool &&) noexcept = default;
	ObjectPool(const ObjectPool &) = delete;
	~ObjectPool() {
		for (std::shared_ptr<Pool> &pool : pools_) {
			for (Pool::Object &object : pool->objects_) {
				object.destructor_(pool->data_.data() + object.offset_);
			}
		}
	}

	template <typename T, typename... args_t>
	T *EmplaceObject(args_t... args) {
		static_assert(sizeof(T) < kPoolSize, "The pool needs to be bigger");
		static Destructor typeDestructor = (Destructor)[](void *obj) {
			reinterpret_cast<T *>(obj)->~T();
		};

		void *objPtr = current_pool_->data_.data() + current_pool_size_;
		current_pool_size_ += sizeof(T);

		// check if we ran out of space and need a new pool
		if (current_pool_size_ > kPoolSize) {
			current_pool_ = NewPool();
			current_pool_size_ = 0;
			objPtr = current_pool_->data_.data();
		}

		current_pool_->objects_.push_back(Pool::Object{
				.destructor_ = typeDestructor,
				.offset_ = (int)((unsigned char *)objPtr - current_pool_->data_.data()),
		});

		//return the object reference
		return new (objPtr) T(std::forward<args_t>(args)...);
	}

	// this method exists to support drawing cards
	void *GetRandomPointer() {
		// get random pool
		const size_t poolIdx = rand() % pools_.size();
		std::shared_ptr<Pool> &pool = pools_[poolIdx];

		// get a random pointer within the pool
		const int randOffset = rand() % kPoolSize;
		return pool->data_.data() + randOffset;
	}
};

} // namespace Engine
} // namespace IO