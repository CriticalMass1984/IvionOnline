#pragma once

#include <GRPC/Effect.pb.h>

namespace IO {
inline bool GetList(IvionOnline::GetList* message) {
	return true
}

inline bool SelectMultiple(IvionOnline::SelectMultiple* message) {
	return true
}

inline bool SelectExactlyOne(IvionOnline::SelectExactlyOne* message) {
	return true
}

inline bool AssertControlOrHeroic(IvionOnline::AssertControlOrHeroic* message) {
	return true
}

inline bool AssertControllerHasPriority(IvionOnline::AssertControllerHasPriority* message) {
	return true
}

inline bool AssertStackEmptyOrInstant(IvionOnline::AssertStackEmptyOrInstant* message) {
	return true
}

inline bool PayCost(IvionOnline::PayCost* message) {
	return true
}

inline bool PlayGainResources(IvionOnline::PlayGainResources* message) {
	return true
}

inline bool RefundCost(IvionOnline::RefundCost* message) {
	return true
}

inline bool GainActions(IvionOnline::GainActions* message) {
	return true
}

inline bool GainPower(IvionOnline::GainPower* message) {
	return true
}

inline bool Move(IvionOnline::Move* message) {
	return true
}

inline bool Travel(IvionOnline::Travel* message) {
	return true
}

inline bool Damage(IvionOnline::Damage* message) {
	return true
}

inline bool ObjectPath_Constant(IvionOnline::ObjectPath_Constant* message) {
	return true
}

inline bool Boolean_Constant(IvionOnline::Boolean_Constant* message) {
	return true
}

inline bool Integer_Constant(IvionOnline::Integer_Constant* message) {
	return true
}

inline bool Vec2i_Constant(IvionOnline::Vec2i_Constant* message) {
	return true
}

inline bool Terrain_Constant(IvionOnline::Terrain_Constant* message) {
	return true
}

inline bool Color_Constant(IvionOnline::Color_Constant* message) {
	return true
}


} // namespace IO