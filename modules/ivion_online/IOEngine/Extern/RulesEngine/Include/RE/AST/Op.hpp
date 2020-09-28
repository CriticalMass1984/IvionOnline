#pragma once

#include <RE/Types/Var.hpp>
#include <RE/Types/Object.hpp>

namespace re {
class Branch;

namespace ast {
// an operation
struct Op {
public:
	typedef bool (*ApplyMethod)(types::Object *, Branch *, Op *self);

	inline bool Matches(Op *R) { return this->apply_ == R->apply_; }

	inline bool Apply(types::Object *root, Branch *branch) { return apply_(root, branch, this); }

protected:
	Op(ApplyMethod apply) noexcept :
			apply_(apply) {}

private:
	const ApplyMethod apply_{ nullptr };
};
} // namespace ast
} // namespace re