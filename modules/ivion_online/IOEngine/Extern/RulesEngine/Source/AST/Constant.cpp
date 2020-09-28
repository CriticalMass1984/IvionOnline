#include <RE/AST/Constant.hpp>
#include <RE/Branch.hpp>

namespace re {
namespace ast {
bool ConstantInt::ApplyMethod(types::Object *root, Branch* branch, ConstantInt *self) {
	*self->retVal_ = self->constValue;
	return true;
}

} // namespace ast
} // namespace re