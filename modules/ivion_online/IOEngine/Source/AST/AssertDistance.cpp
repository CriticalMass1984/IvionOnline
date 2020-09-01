#include <IOEngine/AST/AssertDistance.hpp>
#include <IOEngine/Branch.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Program.hpp>

namespace IO {
namespace Engine {
namespace AST {

bool assertDistance(const Posable *l, const Posable *r, int distance, AssertDistanceArgs::ComparisonType comp) {
	if (distance < 0) {
		return true;
	}
	switch (comp) {
		case AssertDistanceArgs::ComparisonType::LESS_THAN:
			return l->GetDistance(r) < distance;
		case AssertDistanceArgs::ComparisonType::LESS_THAN_EQUAL:
			return l->GetDistance(r) <= distance;
		case AssertDistanceArgs::ComparisonType::GREATER_THAN:
			return l->GetDistance(r) > distance;
		case AssertDistanceArgs::ComparisonType::GREATER_THAN_EQUAL:
			return l->GetDistance(r) >= distance;
		case AssertDistanceArgs::ComparisonType::EQUAL:
			return l->GetDistance(r) == distance;
		case AssertDistanceArgs::ComparisonType::NOT_EQUAL:
			return l->GetDistance(r) != distance;
		default:
			assert(false);
	}
}
void AssertDistance(GameInstance *instance, Program *program,
		StackPosable *left, StackPosable *right, int *distance, AssertDistanceArgs::ComparisonType *comparisonType) {
	program->EmplaceMethodCallArgs<AssertDistanceArgs>(&instance->Memory, left, right, distance, comparisonType);
}
//applies change
bool AssertDistanceMethod(GameInstance *instance, Branch *activeBranch, const AssertDistanceArgs *args) noexcept {
	bool result = assertDistance(*args->left_, *args->right_, *args->distance_, *args->comparisonType_);
	activeBranch->Append<AssertDistanceDelta>(args, result);
	return result;
}

bool AssertDistanceDelta::Apply(AssertDistanceDelta *self) {
	return self->result_;
}

void AssertDistanceDelta::Revert(AssertDistanceDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO