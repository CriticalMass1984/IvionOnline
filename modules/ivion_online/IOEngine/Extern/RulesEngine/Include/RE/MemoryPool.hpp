#pragma once

#include <limits>
#include <memory>
#include <type_traits>
#include <vector>

namespace re {
class MemoryPool {
	//pool
	static constexpr int kPoolSize = 2048;
	struct Pool {
		unsigned char memory_[kPoolSize];

		Pool() = default;
		Pool(Pool &&) = delete;
		Pool(const Pool &) = delete;
		~Pool() = default;
	};
	int current_pool_size_{ 0 };
	std::vector<Pool *> pools_;

	Pool *NewPool() {
		pools_.emplace_back(new Pool());
		return pools_.back();
	};
	Pool *current_pool_{ NewPool() };

	static_assert(kPoolSize < std::numeric_limits<decltype(current_pool_size_)>::max(), "The pool size is too big!");

	//objects
	typedef void (*Destructor)(void *obj);

	struct Object {
		void *obj_{ nullptr };
		Destructor destructor_{ nullptr };
		inline Object(void *obj, Destructor destructor) :
				obj_(obj), destructor_(destructor) {}
		Object(const Object &) = delete;
		Object(Object &&);
		~Object();
	};
	std::vector<Object> objects_;

	// fragments
	// struct Fragment {
	// 	void *memory_;
	// 	int size_;
	// 	inline Fragment(void *m, int s) noexcept :
	// 			memory_(m), size_(s) {}

	// 	Fragment(Fragment &&) noexcept = default;
	// 	Fragment(const Fragment &) = delete;
	// 	~Fragment() noexcept = default;
	// };
	// std::vector<Fragment> fragments_;
	// void InsertFragment(void *memory, int size);
	// decltype(fragments_)::iterator GetFragment(int size);

	//
	template <typename T, typename... args_t>
	T *EmplaceData(args_t... args) {

		void *objPtr = current_pool_->memory_ + current_pool_size_;
		current_pool_size_ += sizeof(T);

		// check if we ran out of space and need a new pool
		if (current_pool_size_ > kPoolSize) {
			current_pool_ = NewPool();
			current_pool_size_ = sizeof(T);
			objPtr = current_pool_->memory_;
		}

		//return the object ptr
		return new (objPtr) T(std::forward<args_t>(args)...);
	}

public:
	MemoryPool() = default;

	template <typename T, typename... args_t>
	T *Emplace(args_t... args) {
		static_assert(sizeof(T) < kPoolSize, "The pool needs to be bigger");
		T *objPtr = EmplaceData<T, args_t...>(std::forward<args_t>(args)...);

		if (!std::is_trivially_destructible<T>::value) {
			static Destructor typeDestructor = (Destructor)[](void *obj) {
				reinterpret_cast<T *>(obj)->~T();
			};

			objects_.emplace_back(objPtr, typeDestructor);
		}

		//return the object reference
		return objPtr;
	}
	// void Append(MemoryPool *pool);

	~MemoryPool();
};
} // namespace re