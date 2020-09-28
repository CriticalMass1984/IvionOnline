#include <RE/AST/MathOp.hpp>
#include <RE/Branch.hpp>

namespace re {
namespace ast {
bool MathOp::ApplyMethod(types::Object *root, Branch* branch, MathOp *self) {
	assert(self->retVal_);
	switch (self->operation_) {
		case Operation::NONE:
			return false;
		case Operation::ADD:
			*self->retVal_ = *self->l_->retVal_ + *self->r_->retVal_;
			return true;
        case Operation::SUBTRACT:
			*self->retVal_ = *self->l_->retVal_ + *self->r_->retVal_;
			return true;
		default:
			return false;
	}
}

} // namespace ast
} // namespace re