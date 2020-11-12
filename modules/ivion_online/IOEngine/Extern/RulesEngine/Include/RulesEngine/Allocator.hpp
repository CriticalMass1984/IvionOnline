#pragma once

#include <type_traits>
#include <vector>

namespace RE {
class Allocator {
	typedef void (*DestructorMethod)(void *obj);

	struct Object {
		void *ptr_;
		DestructorMethod destructor_;

		Object(void *ptr, DestructorMethod destructor) noexcept :
				ptr_(ptr), destructor_(destructor) {}

		Object(const Object &) = delete;
		Object(Object &&O) noexcept :
				ptr_(O.ptr_), destructor_(O.destructor_) {
			O.ptr_ = nullptr;
		}
		~Object() {
			if (ptr_) {
				destructor_(ptr_);
				ptr_ = nullptr;
			}
		}
	};

	std::vector<Object> allocations_;

public:
	template <typename T, typename... argsT>
	T *New(argsT... args) {
        static auto Destructor = [](void* obj)
        {
            delete static_cast<T*>(obj);
        };
		T *ptr = new T(std::forward<argsT>(args)...);
		allocations_.emplace_back(ptr, Destructor);
	}
};
} // namespace RE