#pragma once

#include <IOEngine/Branch.hpp>
#include <IOEngine/Vars/Delta.hpp>
#include <limits>
#include <type_traits>

namespace IO {
namespace Engine {
namespace Var {
template <typename T>
class Var {
	static_assert(std::is_trivially_destructible<T>::value, "Vars must be plain old data");
	static_assert(std::is_trivially_copyable<T>::value, "Vars must be plain old data");
	T value_;

public:
	struct SetDelta : public Delta {
	private:
		Var<T> *var_;
		T new_;
		T old_;

	public:
		static bool Apply(SetDelta *self) {
			self->var_->value_ = self->new_;
			return true;
		}

		static void Revert(SetDelta *self) {
			self->var_->value_ = self->old_;
		}

		constexpr SetDelta(Var<T> *var, T _new, T _old) noexcept :
				Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), var_(var), new_(_new), old_(_old) {
		}

		inline const Var<T> *Target() const noexcept { return var_; }
		inline const T New() const noexcept { return new_; }
		inline const T Old() const noexcept { return old_; }

		~SetDelta() noexcept = default;
	};

	Var() noexcept = default;
	Var(T value) noexcept :
			value_(value) {
	}

	Var(Var &&) noexcept = default;
	Var(const Var &) noexcept = default;

	T operator->() noexcept {
		return value_;
	}

	const typename std::add_lvalue_reference<T>::type operator*() const noexcept {
		return value_;
	}

	typename std::add_lvalue_reference<T>::type operator*() noexcept {
		return value_;
	}

	typename std::add_lvalue_reference<T>::type Get() noexcept {
		return value_;
	}

	void Set(Branch *branch, T value) noexcept {
		branch->Append<SetDelta>(this, value, this->value_);
		assert(this->value_ == value);
	}

	~Var() noexcept = default;
};
} // namespace Var

//common vars
typedef Var::Var<int> IntVar;
} // namespace Engine
} // namespace IO