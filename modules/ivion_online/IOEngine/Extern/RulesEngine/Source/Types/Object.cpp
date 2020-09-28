#include <RE/Types/Object.hpp>

namespace re {
namespace types {
Object::Object(
		const std::unordered_map<std::size_t, Integer*>& intMembers,
		const std::unordered_map<std::size_t, Object*>& objMembers) :
		IntegerMembers(intMembers), ObjectMembers(objMembers) {
}

std::tuple<types::Object *, const char *, std::size_t> getBaseObject(types::Object *base, const std::string &key) {
	assert(!key.empty());
	assert(key.back() != '/');

	std::size_t start = 0;
	std::size_t end = key.find_first_of('/', start);
	while (end != std::string::npos) {
		std::size_t len = end - start;
		if (len > 0) {
			ObjectPtr* ptr = base->ObjectMembers.Get(key.c_str() + start, len);
			if (ptr == nullptr) {
				return std::make_tuple(nullptr, nullptr, 0);
			}
			base = *ptr;
		}

		start = end + 1;
		end = key.find_first_of('/', start);
	}
	return std::make_tuple(base, key.c_str() + start, key.size() - start);
}

ObjectPtr Object::GetObject(const std::string& _key)
{
	auto [base, key, keyLen] = getBaseObject(this, _key);
	if (base == nullptr) {
		return nullptr;
	}
	ObjectPtr *value = base->ObjectMembers.Get(key, keyLen);
	if (value == nullptr) {
		return nullptr;
	}
	return *value;
}
IntegerPtr Object::GetInteger(const std::string& _key)
{
	auto [base, key, keyLen] = getBaseObject(this, _key);
	if (base == nullptr) {
		return nullptr;
	}
	IntegerPtr *value = base->IntegerMembers.Get(key, keyLen);
	if (value == nullptr) {
		return nullptr;
	}
	return *value;
}

} // namespace types
} // namespace re