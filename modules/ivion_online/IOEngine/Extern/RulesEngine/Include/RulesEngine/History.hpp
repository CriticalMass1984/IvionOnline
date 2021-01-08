#pragma once

#include <RulesEngine/Delta.hpp>

#include <memory>
#include <vector>

namespace RE {
class History {
	typedef void (*DestructorFunc)(void *obj);
	typedef void (*MoveFunc)(void *dst, void *src);

	struct Object {
		size_t offset_;
		DestructorFunc destuctor_;
		MoveFunc move_;

		Object(size_t offset,
				DestructorFunc destuctor,
				MoveFunc move) :
				offset_(offset), destuctor_(destuctor), move_(move) {}

		Object(Object &&) noexcept = default;
		Object(const Object &) = delete;
	};
	std::unique_ptr<unsigned char[]> memory_{ nullptr };
	size_t memorySize_{ 0 }, memoryCapacity_{ 0 };
	std::vector<Object> deltas_;
	bool atHead_{true};

public:
	History() = default;
	History(History &&) noexcept = default;
	History(const History &) = delete;

	template <typename T, typename ... ArgsT>
	T* AddDelta(ArgsT ... args) {
		static_assert(std::is_base_of<Delta, T>::value, "must inherit from delta");
		if (memorySize_ + sizeof(T) >= memoryCapacity_) {
			memoryCapacity_ = (memoryCapacity_ + sizeof(T)) * 2;
			std::unique_ptr<unsigned char[]> newMemory_(std::make_unique<unsigned char[]>(memoryCapacity_));
			for (const Object &obj : deltas_) {
				obj.move_(newMemory_.get() + obj.offset_, memory_.get() + obj.offset_);
			}
			newMemory_.swap(memory_);
		}
		static auto destroy = [](void* obj)
		{
			static_cast<T*>(obj)->~T();
		};
		static auto move = [](void* dst, void* src)
		{
			new(dst) T(std::move(*static_cast<T*>(src)));
			static_cast<T*>(src)->~T();
		};
		T* ptr = new(static_cast<void*>(memory_.get() + memorySize_)) T(std::forward<ArgsT>(args)...);
		deltas_.emplace_back(memorySize_, destroy, move);
		memorySize_ += sizeof(T);
		return ptr;
	}

	void Apply() {
		if(!atHead_)
		{
			atHead_ = true;
			for (auto it = deltas_.begin(), end = deltas_.end(); it != end; ++it) {
				static_cast<Delta*>((void*)(memory_.get() + it->offset_))->Apply();
			}
		}
	}

	void Revert() {
		if(atHead_)
		{
			atHead_ = false;
			for (auto it = deltas_.rbegin(), end = deltas_.rend(); it != end; ++it) {
				static_cast<Delta*>((void*)(memory_.get() + it->offset_))->Revert();
			}
		}
	}
};
} // namespace RE