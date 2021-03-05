#pragma once

#include <GRPC/GameState.pb.h>
#include <IOEngine/GameInstance.hpp>

namespace IO {
using MethodIter = google::protobuf::internal::RepeatedPtrIterator<IvionOnline::Method>;
bool __GetList(GameInstance* instance, MethodIter begin, const MethodIter& end, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath>* Result, IvionOnline::ObjectPath* Source);
bool __SelectMultiple(GameInstance* instance, MethodIter begin, const MethodIter& end, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath>* Result, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath>* Source, IvionOnline::Integer* Number, IvionOnline::Boolean* UpTo);
bool __SelectExactlyOne(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::ObjectPath* Result, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath>* Source);
bool __AssertControlOrHeroic(GameInstance* instance, MethodIter begin, const MethodIter& end);
bool __AssertControllerHasPriority(GameInstance* instance, MethodIter begin, const MethodIter& end);
bool __AssertStackEmptyOrInstant(GameInstance* instance, MethodIter begin, const MethodIter& end);
bool __PayCost(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Card* Card, IvionOnline::Integer* ActionCostReduction, IvionOnline::Integer* PowerCostReduction, IvionOnline::Integer* CostReduction, IvionOnline::Boolean* Free);
bool __PlayGainResources(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Card* Card);
bool __RefundCost(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Card* Card);
bool __GainActions(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Integer* Value);
bool __GainPower(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Integer* Value);
bool __Move(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Tile* Destination);
bool __Travel(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Tile* Destination);
bool __Damage(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Integer* Amount);
bool __Boolean_Constant(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Boolean* Result);
bool __Integer_Constant(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Integer* Result);
bool __Vec2i_Constant(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Vec2i* Result);
bool __Terrain_Constant(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Terrain* Result);
bool __Color_Constant(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Color* Result);
bool __ObjectPath_Constant(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::ObjectPath* Result);


inline bool GetList(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::GetList* message) {
	return __GetList(
		instance, begin, end,
		message->mutable_result()->mutable_element(),
		message->mutable_source());
}


inline bool SelectMultiple(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::SelectMultiple* message) {
	return __SelectMultiple(
		instance, begin, end,
		message->mutable_result()->mutable_element(),
		dynamic_cast<IvionOnline::List_ObjectPath*>(instance->ResolvePath(message->mutable_source()))->mutable_element(),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_number())),
		dynamic_cast<IvionOnline::Boolean*>(instance->ResolvePath(message->mutable_upto())));
}


inline bool SelectExactlyOne(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::SelectExactlyOne* message) {
	return __SelectExactlyOne(
		instance, begin, end,
		message->mutable_result(),
		dynamic_cast<IvionOnline::List_ObjectPath*>(instance->ResolvePath(message->mutable_source()))->mutable_element());
}


inline bool AssertControlOrHeroic(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::AssertControlOrHeroic* message) {
	return __AssertControlOrHeroic(
		instance, begin, end);
}


inline bool AssertControllerHasPriority(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::AssertControllerHasPriority* message) {
	return __AssertControllerHasPriority(
		instance, begin, end);
}


inline bool AssertStackEmptyOrInstant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::AssertStackEmptyOrInstant* message) {
	return __AssertStackEmptyOrInstant(
		instance, begin, end);
}


inline bool PayCost(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::PayCost* message) {
	return __PayCost(
		instance, begin, end,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Card*>(instance->ResolvePath(message->mutable_card())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_actioncostreduction())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_powercostreduction())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_costreduction())),
		dynamic_cast<IvionOnline::Boolean*>(instance->ResolvePath(message->mutable_free())));
}


inline bool PlayGainResources(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::PlayGainResources* message) {
	return __PlayGainResources(
		instance, begin, end,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Card*>(instance->ResolvePath(message->mutable_card())));
}


inline bool RefundCost(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::RefundCost* message) {
	return __RefundCost(
		instance, begin, end,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Card*>(instance->ResolvePath(message->mutable_card())));
}


inline bool GainActions(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::GainActions* message) {
	return __GainActions(
		instance, begin, end,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_value())));
}


inline bool GainPower(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::GainPower* message) {
	return __GainPower(
		instance, begin, end,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_value())));
}


inline bool Move(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Move* message) {
	return __Move(
		instance, begin, end,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Tile*>(instance->ResolvePath(message->mutable_destination())));
}


inline bool Travel(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Travel* message) {
	return __Travel(
		instance, begin, end,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Tile*>(instance->ResolvePath(message->mutable_destination())));
}


inline bool Damage(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Damage* message) {
	return __Damage(
		instance, begin, end,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_amount())));
}


inline bool Boolean_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Boolean_Constant* message) {
	return __Boolean_Constant(
		instance, begin, end,
		message->mutable_result());
}


inline bool Integer_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Integer_Constant* message) {
	return __Integer_Constant(
		instance, begin, end,
		message->mutable_result());
}


inline bool Vec2i_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Vec2i_Constant* message) {
	return __Vec2i_Constant(
		instance, begin, end,
		message->mutable_result());
}


inline bool Terrain_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Terrain_Constant* message) {
	return __Terrain_Constant(
		instance, begin, end,
		message->mutable_result());
}


inline bool Color_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Color_Constant* message) {
	return __Color_Constant(
		instance, begin, end,
		message->mutable_result());
}


inline bool ObjectPath_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::ObjectPath_Constant* message) {
	return __ObjectPath_Constant(
		instance, begin, end,
		message->mutable_result());
}


inline bool ExecuteMethods(GameInstance* instance, MethodIter begin, const MethodIter& end){
	if(begin == end) {
		return true;
	}
	if(begin->has_getlist()){
		return GetList(instance, begin + 1, end, begin->mutable_getlist());
	} else if(begin->has_selectmultiple()){
		return SelectMultiple(instance, begin + 1, end, begin->mutable_selectmultiple());
	} else if(begin->has_selectexactlyone()){
		return SelectExactlyOne(instance, begin + 1, end, begin->mutable_selectexactlyone());
	} else if(begin->has_assertcontrolorheroic()){
		return AssertControlOrHeroic(instance, begin + 1, end, begin->mutable_assertcontrolorheroic());
	} else if(begin->has_assertcontrollerhaspriority()){
		return AssertControllerHasPriority(instance, begin + 1, end, begin->mutable_assertcontrollerhaspriority());
	} else if(begin->has_assertstackemptyorinstant()){
		return AssertStackEmptyOrInstant(instance, begin + 1, end, begin->mutable_assertstackemptyorinstant());
	} else if(begin->has_paycost()){
		return PayCost(instance, begin + 1, end, begin->mutable_paycost());
	} else if(begin->has_playgainresources()){
		return PlayGainResources(instance, begin + 1, end, begin->mutable_playgainresources());
	} else if(begin->has_refundcost()){
		return RefundCost(instance, begin + 1, end, begin->mutable_refundcost());
	} else if(begin->has_gainactions()){
		return GainActions(instance, begin + 1, end, begin->mutable_gainactions());
	} else if(begin->has_gainpower()){
		return GainPower(instance, begin + 1, end, begin->mutable_gainpower());
	} else if(begin->has_move()){
		return Move(instance, begin + 1, end, begin->mutable_move());
	} else if(begin->has_travel()){
		return Travel(instance, begin + 1, end, begin->mutable_travel());
	} else if(begin->has_damage()){
		return Damage(instance, begin + 1, end, begin->mutable_damage());
	} else if(begin->has_boolean_constant()){
		return Boolean_Constant(instance, begin + 1, end, begin->mutable_boolean_constant());
	} else if(begin->has_integer_constant()){
		return Integer_Constant(instance, begin + 1, end, begin->mutable_integer_constant());
	} else if(begin->has_vec2i_constant()){
		return Vec2i_Constant(instance, begin + 1, end, begin->mutable_vec2i_constant());
	} else if(begin->has_terrain_constant()){
		return Terrain_Constant(instance, begin + 1, end, begin->mutable_terrain_constant());
	} else if(begin->has_color_constant()){
		return Color_Constant(instance, begin + 1, end, begin->mutable_color_constant());
	} else if(begin->has_objectpath_constant()){
		return ObjectPath_Constant(instance, begin + 1, end, begin->mutable_objectpath_constant());
	}
	return false;
}

} // namespace IO