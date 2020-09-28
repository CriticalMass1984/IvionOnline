#pragma once

#include <RE/AST/Op.hpp>
#include <RE/Types/Integer.hpp>
#include <RE/Types/Object.hpp>
#include <RE/Types/String.hpp>

namespace re {
namespace ast {

// for operations that return an integer
class IntRetVal : public Op {
public:
	int *retVal_;

	inline IntRetVal(int *result, Op::ApplyMethod Apply) :
			Op(Apply), retVal_(result) {}
};

// // for operations that return a pointer to an integer (and store the value in a reference)
// class IntegerPtrRetVal : public Op {
// public:
// 	IntegerVar* retVal_;

// 	inline IntegerPtrRetVal(IntegerVar* result, Op::ApplyMethod Apply) :
// 			Op(Apply), retVal_(result) {}
// };

// for operations that return a pointer to an object (and store the value in a reference)
class ObjectPtrRetVal : public Op {
public:
	ObjectPtr *retVal_;

	inline ObjectPtrRetVal(ObjectPtr *result, Op::ApplyMethod Apply) :
			Op(Apply), retVal_(result) {}
};

} // namespace ast
} // namespace re