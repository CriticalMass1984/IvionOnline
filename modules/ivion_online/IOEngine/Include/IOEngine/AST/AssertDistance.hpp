#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct AssertDistanceArgs;

bool AssertDistanceMethod(GameInstance *instance, Branch *activeBranch, AssertDistanceArgs *args) noexcept;

struct AssertDistanceArgs {
	enum class ComparisonType {
		LESS_THAN,
		LESS_THAN_EQUAL,
		GREATER_THAN,
		GREATER_THAN_EQUAL,
		EQUAL,
		NOT_EQUAL,
	};
	Method const method_{ (Method)AssertDistanceMethod };
	StackPosable *const left_;
	StackPosable *const right_;
	int *const distance_;
	ComparisonType *const comparisonType_;

	inline AssertDistanceArgs(StackPosable *left, StackPosable *right, int *distance, ComparisonType *comparisonType) :
			left_(left), right_(right), distance_(distance), comparisonType_(comparisonType) {
	}
};

void AssertDistance(GameInstance *instance, Program *program,
		StackPosable *left, StackPosable *right, int *distance, AssertDistanceArgs::ComparisonType *comparisonType);

// doesn't actually do anything, but makes life easier for triggers
struct AssertDistanceDelta : public Var::Delta {
	AssertDistanceArgs *const args_;
	const bool result_;
	Posable *const left_;
	Posable *const right_;
	int const distance_;
	AssertDistanceArgs::ComparisonType const comparisonType_;

	static bool Apply(AssertDistanceDelta *self);

	static void Revert(AssertDistanceDelta *self);
	inline AssertDistanceDelta(AssertDistanceArgs *args, bool result) :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert),
			args_(args),
			result_(result),
			left_(*args->left_),
			right_(*args->right_),
			distance_(*args->distance_),
			comparisonType_(*args->comparisonType_) {
	}

	~AssertDistanceDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO