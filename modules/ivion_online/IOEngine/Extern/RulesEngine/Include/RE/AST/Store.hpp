#pragma once

#include <RE/AST/RetVal.hpp>

namespace re {
namespace ast {

class StoreInteger : public Op {
public:
	const std::string key_;
	ObjectPtrRetVal *object_;
	IntRetVal *value_;

	static bool ApplyMethod(types::Object *root, Branch *branch, StoreInteger *self);

	inline StoreInteger(
			const std::string &key,
			ObjectPtrRetVal *object,
			IntRetVal *value) :
			Op((Op::ApplyMethod)ApplyMethod),
			key_(key),
			object_(object),
			value_(value) {}
};

// class StoreObjectPtr : public Op {
// public:
// 	const std::string key_;
// 	ObjectPtrRetVal *object_;

// 	static bool ApplyMethod(types::Object *root, Branch *branch, StoreObjectPtr *self);

// 	inline StoreObjectPtr(
// 			ObjectVar *result,
// 			const std::string &key,
// 			ObjectPtrRetVal *object) :
// 			Op((Op::ApplyMethod)ApplyMethod),
// 			key_(key),
// 			object_(object) {}
// };
} // namespace ast
} // namespace re