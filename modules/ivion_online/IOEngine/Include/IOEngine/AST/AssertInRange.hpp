#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct AssertInRangeArgs;

bool AssertInRange(GameInstance *instance, Branch *activeBranch, const AssertInRangeArgs *args) noexcept;

struct AssertInRangeArgs {
	Method const method_{ (Method)AssertInRange };
	Card **const left_;
	Posable **const right_;
	int *const distance_;
	ComparisonType *const comparisonType_;

	inline AssertInRangeArgs(Posable **left, Posable **right, int *distance, ComparisonType *comparisonType) :
			left_(left), right_(right), distance_(distance), comparisonType_(comparisonType) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct AssertInRangeDelta : public Var::Delta {
	const bool result_;
	Posable *const left_;
	Posable *const right_;
	int const distance_;
	AssertInRangeArgs::ComparisonType const comparisonType_;

	static bool Apply(AssertInRangeDelta *self);

	static void Revert(AssertInRangeDelta *self);
	inline AssertInRangeDelta(bool result, Posable *left, Posable *right, int distance, AssertInRangeArgs::ComparisonType comparisonType) :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), result_(result), left_(left), right_(right), distance_(distance), comparisonType_(comparisonType) {
	}

	~AssertInRangeDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO