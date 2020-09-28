#pragma once

#include <RE/AST/RetVal.hpp>

namespace re {
namespace ast {
class ConstantInt : public IntRetVal {
public:
	int constValue;

	static bool ApplyMethod(types::Object *root, Branch *branch, ConstantInt *self);

	inline ConstantInt(int value,
			int *result) :
			IntRetVal(result, (Op::ApplyMethod)ApplyMethod),
            constValue(value) {}
};
} // namespace ast
} // namespace re