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
	int dist = l->GetDistance(r);
	switch (comp) {
		case AssertDistanceArgs::ComparisonType::LESS_THAN:
			return dist < distance;
		case AssertDistanceArgs::ComparisonType::LESS_THAN_EQUAL:
			return dist <= distance;
		case AssertDistanceArgs::ComparisonType::GREATER_THAN:
			return dist > distance;
		case AssertDistanceArgs::ComparisonType::GREATER_THAN_EQUAL:
			return dist >= distance;
		case AssertDistanceArgs::ComparisonType::EQUAL:
			return dist == distance;
		case AssertDistanceArgs::ComparisonType::NOT_EQUAL:
			return dist != distance;
		default:
			assert(false);
	}
}
AssertDistanceArgs* AssertDistance(GameInstance *instance, Program *program,
		StackPosable *left, StackPosable *right, int *distance, AssertDistanceArgs::ComparisonType *comparisonType) {
	return program->EmplaceMethodCallArgs<AssertDistanceArgs>(&instance->Memory, left, right, distance, comparisonType);
}
//applies change
bool AssertDistanceMethod(GameInstance *instance, Branch *activeBranch, AssertDistanceArgs *args) noexcept {
	bool result = assertDistance(*args->left_, *args->right_, *args->distance_, *args->comparisonType_);
	activeBranch->Append<AssertDistanceDelta>(args, result);
	return result;
}

bool AssertDistanceDelta::ApplyDelta(AssertDistanceDelta *self) {
	return self->result_;
}

void AssertDistanceDelta::RevertDelta(AssertDistanceDelta *self) {
}

} // namespace AST
} // namespace Engine
} // namespace IO