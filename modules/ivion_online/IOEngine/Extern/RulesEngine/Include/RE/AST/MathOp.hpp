#pragma once

#include <RE/AST/RetVal.hpp>

namespace re {
namespace ast {
class MathOp : public IntRetVal {
public:
	enum class Operation {
		NONE,
		ADD,
		SUBTRACT
	};
	const Operation operation_;
	const IntRetVal *const l_;
	const IntRetVal *const r_;

	static bool ApplyMethod(types::Object *root, Branch *branch, MathOp *self);

	inline MathOp(Operation operation,
			int *result,
			const IntRetVal *l,
			const IntRetVal *r) :
			IntRetVal(result, (Op::ApplyMethod)ApplyMethod),
            operation_(operation), l_(l), r_(r) {}
};
} // namespace ast
} // namespace re