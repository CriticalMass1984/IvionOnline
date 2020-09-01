#include <IOEngine/AST/AssertInRange.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
namespace Engine {
namespace AST {

bool assertDistance(const Posable *l, const Posable *r, int distance, AssertInRangeArgs::ComparisonType comp) {
	if (distance < 0) {
		return true;
	}
	switch (comp) {
		case AssertInRangeArgs::ComparisonType::LESS_THAN:
			return l->GetDistance(r) < distance;
		case AssertInRangeArgs::ComparisonType::LESS_THAN_EQUAL:
			return l->GetDistance(r) <= distance;
		case AssertInRangeArgs::ComparisonType::GREATER_THAN:
			return l->GetDistance(r) > distance;
		case AssertInRangeArgs::ComparisonType::GREATER_THAN_EQUAL:
			return l->GetDistance(r) >= distance;
		case AssertInRangeArgs::ComparisonType::EQUAL:
			return l->GetDistance(r) == distance;
		case AssertInRangeArgs::ComparisonType::NOT_EQUAL:
			return l->GetDistance(r) != distance;
		default:
			assert(false);
	}
}
//applies change
bool AssertInRange(GameInstance *instance, Branch *activeBranch, const AssertInRangeArgs *args) noexcept {
	bool result = assertDistance(*args->left_, *args->right_, *args->distance_, *args->comparisonType_);
	activeBranch->Append<AssertInRangeDelta>(result, *args->left_, *args->right_, *args->distance_, *args->comparisonType_);
	return result;
}

bool AssertInRangeDelta::Apply(AssertInRangeDelta *self) {
	return assertDistance(self->left_, self->right_, self->distance_, self->comparisonType_);
}

void AssertInRangeDelta::Revert(AssertInRangeDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO