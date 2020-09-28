#pragma once

#include <RE/AST/RetVal.hpp>

namespace re {
namespace ast {

class LoadInteger : public IntRetVal {
public:
	const std::string key_;

	static bool ApplyMethod(types::Object *root, Branch *branch, LoadInteger *self);

	inline LoadInteger(
			int *result,
			const std::string &key) :
			IntRetVal(result, (Op::ApplyMethod)ApplyMethod),
			key_(key) {}

protected:
	inline LoadInteger(
			int *result,
			const std::string &key, Op::ApplyMethod apply) :
			IntRetVal(result, apply),
			key_(key) {}
};

class LoadIntegerRelative : public LoadInteger {
public:
	ObjectPtrRetVal *object_;

	static bool ApplyMethod(types::Object *root, Branch *branch, LoadIntegerRelative *self);

	inline LoadIntegerRelative(
			int *result,
			const std::string &key,
			ObjectPtrRetVal *object) :
			LoadInteger(result, key, (Op::ApplyMethod)ApplyMethod),
			object_(object) {}
};

class LoadObjectPtr : public ObjectPtrRetVal {
public:
	const std::string key_;

	static bool ApplyMethod(types::Object *root, Branch *branch, LoadObjectPtr *self);

	inline LoadObjectPtr(
			ObjectPtr *result,
			const std::string &key) :
			ObjectPtrRetVal(result, (Op::ApplyMethod)ApplyMethod),
			key_(key) {}

protected:
	inline LoadObjectPtr(
			ObjectPtr *result,
			const std::string &key, Op::ApplyMethod apply) :
			ObjectPtrRetVal(result, apply),
			key_(key) {}
};

class LoadObjectPtrRelative : public LoadObjectPtr {
public:
	ObjectPtrRetVal *object_;

	static bool ApplyMethod(types::Object *root, Branch *branch, LoadObjectPtrRelative *self);

	inline LoadObjectPtrRelative(
			ObjectPtr *result,
			const std::string &key,
			ObjectPtrRetVal *object) :
			LoadObjectPtr(result, key, (Op::ApplyMethod)ApplyMethod),
			object_(object) {}
};

// class LoadObjectPtr : public ObjectPtrRetVal {
// public:
// 	const std::string key_;
// 	ObjectPtrRetVal *object_;

// 	static bool ApplyMethod(types::Object *root, Branch *branch, LoadObjectPtr *self);

// 	inline LoadObjectPtr(
// 			ObjectVar *result,
// 			const std::string &key,
// 			ObjectPtrRetVal *object) :
// 			ObjectPtrRetVal(result, (Op::ApplyMethod)ApplyMethod),
// 			key_(key),
// 			object_(object) {}
// };
} // namespace ast
} // namespace re