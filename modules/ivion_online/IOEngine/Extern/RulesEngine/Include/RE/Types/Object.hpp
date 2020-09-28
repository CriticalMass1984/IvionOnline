#pragma once

#include <RE/Delta.hpp>
#include <RE/Structures/Dictionary.hpp>
#include <RE/Types/Integer.hpp>
#include <RE/Types/Var.hpp>
#include <cassert>

namespace re {
namespace types {
class Object {
public:
	Object(
			const std::unordered_map<std::size_t, IntegerPtr> &intMembers,
			const std::unordered_map<std::size_t, Object*> &objMembers);

	re::Dictionary<IntegerPtr> IntegerMembers;
	re::Dictionary<Object*> ObjectMembers;

	Object* GetObject(const std::string& key);
	IntegerPtr GetInteger(const std::string& key);
};
} // namespace types
typedef types::Object* ObjectPtr;
typedef types::Var<ObjectPtr> ObjectVar;
} // namespace re