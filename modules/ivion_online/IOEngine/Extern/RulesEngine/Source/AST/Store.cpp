#include <RE/AST/Store.hpp>
#include <RE/Branch.hpp>
#include <RE/Types/Object.hpp>

namespace re {
namespace ast {

bool StoreInteger::ApplyMethod(types::Object *root, Branch *branch, StoreInteger *self) {
	IntegerPtr var = (*self->object_->retVal_)->GetInteger(self->key_);
	if (var == nullptr) {
		return false;
	}
	
	branch->Append<types::Integer::SetDelta>(var->Set(*self->value_->retVal_));
	return true;
}

// bool StoreObjectPtr::ApplyMethod(types::Object *root, Branch *branch, StoreObjectPtr *self) {
// 	auto [state, key, keyLen] = getVarerenceObject(root, **self->object_->retVal_, self->key_);
// 	if (state == nullptr) {
// 		return false;
// 	}
// 	ObjectPtr *value = state->ObjectMembers.Get(key, keyLen);
// 	if (value == nullptr) {
// 		return false;
// 	}
// 	return branch->Append<ObjectVar::SetDelta>(self->retVal_->Set(*value));
// }

} // namespace ast
} // namespace re