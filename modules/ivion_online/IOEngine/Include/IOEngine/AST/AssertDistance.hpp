#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO {
namespace Engine {
namespace AST {

struct AssertDistanceArgs;

bool AssertDistance(GameInstance *instance, Branch *activeBranch, const AssertDistanceArgs *args) noexcept;

struct AssertDistanceArgs {
	enum class ComparisonType {
		LESS_THAN,
		LESS_THAN_EQUAL,
		GREATER_THAN,
		GREATER_THAN_EQUAL,
		EQUAL,
		NOT_EQUAL,
	};
	Method const method_{ (Method)AssertDistance };
	Posable **const left_;
	Posable **const right_;
	int *const distance_;
	ComparisonType *const comparisonType_;

	inline AssertDistanceArgs(Posable **left, Posable **right, int *distance, ComparisonType *comparisonType) :
			left_(left), right_(right), distance_(distance), comparisonType_(comparisonType) {
	}
};

// doesn't actually do anything, but makes life easier for triggers
struct AssertDistanceDelta : public Var::Delta {
	const bool result_;
	Posable *const left_;
	Posable *const right_;
	int const distance_;
	AssertDistanceArgs::ComparisonType const comparisonType_;

	static bool Apply(AssertDistanceDelta *self);

	static void Revert(AssertDistanceDelta *self);
	inline AssertDistanceDelta(bool result, Posable *left, Posable *right, int distance, AssertDistanceArgs::ComparisonType comparisonType) :
			Delta((Delta::ApplyFunc)Apply, (Delta::RevertFunc)Revert), result_(result), left_(left), right_(right), distance_(distance), comparisonType_(comparisonType) {
	}

	~AssertDistanceDelta() noexcept = default;
};

} // namespace AST
} // namespace Engine
} // namespace IO