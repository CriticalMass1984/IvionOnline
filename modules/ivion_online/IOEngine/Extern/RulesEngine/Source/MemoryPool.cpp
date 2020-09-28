#include <RE/MemoryPool.hpp>
#include <cassert>

namespace re {
MemoryPool::Object::Object(Object &&o) :
		obj_(o.obj_), destructor_(o.destructor_) {
	o.obj_ = nullptr;
	o.destructor_ = nullptr;
}
MemoryPool::Object::~Object() {
	if (obj_ && destructor_) {
		destructor_(obj_);
	}
}
// void MemoryPool::Append(MemoryPool *r) {
// 	assert(r);

// 	// take ownership of all the pools
// 	std::move(r->pools_.begin(), r->pools_.end(), std::back_inserter(pools_));
// 	r->pools_.clear();

// 	assert(r->current_pool_);
// 	if (r->current_pool_size_ + this->current_pool_size_ <= kPoolSize) {
// 	}
// }
// void MemoryPool::InsertFragment(void *memory, int size) {
// 	const void* memory_end = memory + size;
// 	for (auto it = fragments_.begin(), end = fragments_.end(); it != end; ++it) {
// 		if (it->memory_ + it->size_ == memory) {
// 			it->size_ += size;
// 			return;
// 		}
// 		if (memory_end == it->memory_) {
// 			it->size_ += size;
// 			it->memory_ = memory;
// 			return;
// 		}

// 		if (it->memory_ < memory) {
// 			// fragments_.emplace(it.base(), memory, size);
// 			return;
// 		}
// 	}
// 	fragments_.emplace_back(memory, size);
// }
// decltype(MemoryPool::fragments_)::iterator MemoryPool::GetFragment(int size) {
// 	const auto end = fragments_.end();
// 	for (auto it = fragments_.begin(); it != end; ++it) {
// 		if (it->size_ > size) {
// 			return it;
// 		}
// 	}
// 	return end;
// }
MemoryPool::~MemoryPool() {
	for (Pool *pool : pools_) {
		delete pool;
	}
}
} // namespace re