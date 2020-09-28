#include <RE/AST/Load.hpp>
#include <RE/Branch.hpp>
#include <RE/Types/Object.hpp>

namespace re {
namespace ast {

bool LoadInteger::ApplyMethod(types::Object *root, Branch *branch, LoadInteger *self) {
	IntegerPtr val = root->GetInteger(self->key_);
	if (val == nullptr) {
		return false;
	}

	*self->retVal_ = val->Value();
	return true;
}

bool LoadIntegerRelative::ApplyMethod(types::Object *root, Branch *branch, LoadIntegerRelative *self) {
	assert(self->object_->retVal_);
	assert(!self->object_->retVal_);
	IntegerPtr val = (*self->object_->retVal_)->GetInteger(self->key_);
	if (val == nullptr) {
		return false;
	}
	*self->retVal_ = val->Value();
	return true;
}

bool LoadObjectPtr::ApplyMethod(types::Object *root, Branch *branch, LoadObjectPtr *self) {
	ObjectPtr val = root->GetObject(self->key_);
	if (val == nullptr) {
		return false;
	}
	*self->retVal_ = val;
	return true;
}

bool LoadObjectPtrRelative::ApplyMethod(types::Object *root, Branch *branch, LoadObjectPtrRelative *self) {
	assert(self->object_->retVal_);
	assert(!self->object_->retVal_);
	ObjectPtr val = (*self->object_->retVal_)->GetObject(self->key_);
	if (val == nullptr) {
		return false;
	}
	*self->retVal_ = val;
	return true;
}

} // namespace ast
} // namespace re