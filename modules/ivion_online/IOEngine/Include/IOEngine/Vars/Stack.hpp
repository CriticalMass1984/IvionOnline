#pragma once

#include <limits>
#include <string>
#include <type_traits>
#include <stack>

namespace IO {
namespace Engine {
namespace Var {
template <typename T>
class Stack {
	static_assert(std::is_trivially_destructible<T>::value, "Vars must be plain old data");
	static_assert(std::is_trivially_copyable<T>::value, "Vars must be plain old data");
	std::stack<T> elements_;

public:
	struct PushDelta : public Delta {
	private:
		Stack<T> *stack_;
		T new_;

	public:
		static bool ApplyDelta(PushDelta *self) {
			self->stack_->elements_.emplace(self->new_);
			return true;
		}

		static void RevertDelta(PushDelta *self) {
			self->stack_->elements_.pop();
		}

		constexpr PushDelta(Stack<T> *set, T _new) noexcept :
				Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta), stack_(set), new_(_new) {
		}

		inline const Stack<T> *Target() const noexcept { return stack_; }
		inline const T New() const noexcept { return new_; }

		~PushDelta() noexcept = default;
	};

	struct PopDelta : public Delta {
	private:
		Stack<T> *stack_;
		T old_;

	public:
		static bool ApplyDelta(PopDelta *self) {
			self->stack_->elements_.pop();
			return true;
		}

		static void RevertDelta(PopDelta *self) {
			self->stack_->elements_.emplace(self->old_);
		}

		constexpr PopDelta(Stack<T> *set) noexcept :
				Delta((Delta::ApplyFunc)ApplyDelta, (Delta::RevertFunc)RevertDelta), stack_(set), old_(set->elements_.top()) {
		}

		inline const Stack<T> *Target() const noexcept { return stack_; }
		inline const T Old() const noexcept { return old_; }

		~PopDelta() noexcept = default;
	};

	Stack() = default;

	Stack(Stack &&) = default;
	Stack(const Stack &) = default;

	PushDelta Push(T value) {
		return PushDelta(this, value);
	}
	PopDelta Pop() {
		return PopDelta(this);
	}
	inline bool Empty() const noexcept {
		return elements_.empty();
	}

	inline T &Top() noexcept { return elements_.top(); }
	inline std::stack<T> &GetElements() noexcept { return elements_; }
};
} // namespace Var
} // namespace Engine
} // namespace IO