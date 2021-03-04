#pragma once

#include <GRPC/GameState.pb.h>
#include <IOEngine/GameInstance.hpp>

namespace IO {
bool __GetList(GameInstance* instance, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath>* Result, IvionOnline::ObjectPath* Source);
bool __SelectMultiple(GameInstance* instance, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath>* Source, IvionOnline::Integer* Number, IvionOnline::Boolean* UpTo);
bool __SelectExactlyOne(GameInstance* instance, google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath>* Source);
bool __AssertControlOrHeroic(GameInstance* instance);
bool __AssertControllerHasPriority(GameInstance* instance);
bool __AssertStackEmptyOrInstant(GameInstance* instance);
bool __PayCost(GameInstance* instance, IvionOnline::Player* Player, IvionOnline::Card* Card, IvionOnline::Integer* ActionCostReduction, IvionOnline::Integer* PowerCostReduction, IvionOnline::Integer* CostReduction, IvionOnline::Boolean* Free);
bool __PlayGainResources(GameInstance* instance, IvionOnline::Player* Player, IvionOnline::Card* Card);
bool __RefundCost(GameInstance* instance, IvionOnline::Player* Player, IvionOnline::Card* Card);
bool __GainActions(GameInstance* instance, IvionOnline::Player* Player, IvionOnline::Integer* Value);
bool __GainPower(GameInstance* instance, IvionOnline::Player* Player, IvionOnline::Integer* Value);
bool __Move(GameInstance* instance, IvionOnline::Player* Player, IvionOnline::Tile* Destination);
bool __Travel(GameInstance* instance, IvionOnline::Player* Player, IvionOnline::Tile* Destination);
bool __Damage(GameInstance* instance, IvionOnline::Player* Player, IvionOnline::Integer* Amount);
bool __ObjectPath_Constant(GameInstance* instance, IvionOnline::ObjectPath* Result);
bool __Boolean_Constant(GameInstance* instance, IvionOnline::Boolean* Result);
bool __Integer_Constant(GameInstance* instance, IvionOnline::Integer* Result);
bool __Vec2i_Constant(GameInstance* instance, IvionOnline::Vec2i* Result);
bool __Terrain_Constant(GameInstance* instance, IvionOnline::Terrain* Result);
bool __Color_Constant(GameInstance* instance, IvionOnline::Color* Result);


inline bool GetList(
		GameInstance* instance, IvionOnline::GetList* message) {
	return __GetList(
		instance,
		message->mutable_result()->mutable_element(),
		message->mutable_source());
}


inline bool SelectMultiple(
		GameInstance* instance, IvionOnline::SelectMultiple* message) {
	return __SelectMultiple(
		instance,
		dynamic_cast<IvionOnline::List_ObjectPath*>(instance->ResolvePath(message->mutable_source()))->mutable_element(),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_number())),
		dynamic_cast<IvionOnline::Boolean*>(instance->ResolvePath(message->mutable_upto())));
}


inline bool SelectExactlyOne(
		GameInstance* instance, IvionOnline::SelectExactlyOne* message) {
	return __SelectExactlyOne(
		instance,
		dynamic_cast<IvionOnline::List_ObjectPath*>(instance->ResolvePath(message->mutable_source()))->mutable_element());
}


inline bool AssertControlOrHeroic(
		GameInstance* instance, IvionOnline::AssertControlOrHeroic* message) {
	return __AssertControlOrHeroic(
		instance);
}


inline bool AssertControllerHasPriority(
		GameInstance* instance, IvionOnline::AssertControllerHasPriority* message) {
	return __AssertControllerHasPriority(
		instance);
}


inline bool AssertStackEmptyOrInstant(
		GameInstance* instance, IvionOnline::AssertStackEmptyOrInstant* message) {
	return __AssertStackEmptyOrInstant(
		instance);
}


inline bool PayCost(
		GameInstance* instance, IvionOnline::PayCost* message) {
	return __PayCost(
		instance,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Card*>(instance->ResolvePath(message->mutable_card())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_actioncostreduction())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_powercostreduction())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_costreduction())),
		dynamic_cast<IvionOnline::Boolean*>(instance->ResolvePath(message->mutable_free())));
}


inline bool PlayGainResources(
		GameInstance* instance, IvionOnline::PlayGainResources* message) {
	return __PlayGainResources(
		instance,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Card*>(instance->ResolvePath(message->mutable_card())));
}


inline bool RefundCost(
		GameInstance* instance, IvionOnline::RefundCost* message) {
	return __RefundCost(
		instance,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Card*>(instance->ResolvePath(message->mutable_card())));
}


inline bool GainActions(
		GameInstance* instance, IvionOnline::GainActions* message) {
	return __GainActions(
		instance,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_value())));
}


inline bool GainPower(
		GameInstance* instance, IvionOnline::GainPower* message) {
	return __GainPower(
		instance,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_value())));
}


inline bool Move(
		GameInstance* instance, IvionOnline::Move* message) {
	return __Move(
		instance,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Tile*>(instance->ResolvePath(message->mutable_destination())));
}


inline bool Travel(
		GameInstance* instance, IvionOnline::Travel* message) {
	return __Travel(
		instance,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Tile*>(instance->ResolvePath(message->mutable_destination())));
}


inline bool Damage(
		GameInstance* instance, IvionOnline::Damage* message) {
	return __Damage(
		instance,
		dynamic_cast<IvionOnline::Player*>(instance->ResolvePath(message->mutable_player())),
		dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(message->mutable_amount())));
}


inline bool ObjectPath_Constant(
		GameInstance* instance, IvionOnline::ObjectPath_Constant* message) {
	return __ObjectPath_Constant(
		instance,
		message->mutable_result());
}


inline bool Boolean_Constant(
		GameInstance* instance, IvionOnline::Boolean_Constant* message) {
	return __Boolean_Constant(
		instance,
		message->mutable_result());
}


inline bool Integer_Constant(
		GameInstance* instance, IvionOnline::Integer_Constant* message) {
	return __Integer_Constant(
		instance,
		message->mutable_result());
}


inline bool Vec2i_Constant(
		GameInstance* instance, IvionOnline::Vec2i_Constant* message) {
	return __Vec2i_Constant(
		instance,
		message->mutable_result());
}


inline bool Terrain_Constant(
		GameInstance* instance, IvionOnline::Terrain_Constant* message) {
	return __Terrain_Constant(
		instance,
		message->mutable_result());
}


inline bool Color_Constant(
		GameInstance* instance, IvionOnline::Color_Constant* message) {
	return __Color_Constant(
		instance,
		message->mutable_result());
}


inline bool ApplyMethod(GameInstance* instance, IvionOnline::Method* effect){
	if(effect->has_getlist()){
		return GetList(instance, effect->mutable_getlist());
	} else if(effect->has_selectmultiple()){
		return SelectMultiple(instance, effect->mutable_selectmultiple());
	} else if(effect->has_selectexactlyone()){
		return SelectExactlyOne(instance, effect->mutable_selectexactlyone());
	} else if(effect->has_assertcontrolorheroic()){
		return AssertControlOrHeroic(instance, effect->mutable_assertcontrolorheroic());
	} else if(effect->has_assertcontrollerhaspriority()){
		return AssertControllerHasPriority(instance, effect->mutable_assertcontrollerhaspriority());
	} else if(effect->has_assertstackemptyorinstant()){
		return AssertStackEmptyOrInstant(instance, effect->mutable_assertstackemptyorinstant());
	} else if(effect->has_paycost()){
		return PayCost(instance, effect->mutable_paycost());
	} else if(effect->has_playgainresources()){
		return PlayGainResources(instance, effect->mutable_playgainresources());
	} else if(effect->has_refundcost()){
		return RefundCost(instance, effect->mutable_refundcost());
	} else if(effect->has_gainactions()){
		return GainActions(instance, effect->mutable_gainactions());
	} else if(effect->has_gainpower()){
		return GainPower(instance, effect->mutable_gainpower());
	} else if(effect->has_move()){
		return Move(instance, effect->mutable_move());
	} else if(effect->has_travel()){
		return Travel(instance, effect->mutable_travel());
	} else if(effect->has_damage()){
		return Damage(instance, effect->mutable_damage());
	} else if(effect->has_objectpath_constant()){
		return ObjectPath_Constant(instance, effect->mutable_objectpath_constant());
	} else if(effect->has_boolean_constant()){
		return Boolean_Constant(instance, effect->mutable_boolean_constant());
	} else if(effect->has_integer_constant()){
		return Integer_Constant(instance, effect->mutable_integer_constant());
	} else if(effect->has_vec2i_constant()){
		return Vec2i_Constant(instance, effect->mutable_vec2i_constant());
	} else if(effect->has_terrain_constant()){
		return Terrain_Constant(instance, effect->mutable_terrain_constant());
	} else if(effect->has_color_constant()){
		return Color_Constant(instance, effect->mutable_color_constant());
	}
	return false;
}

} // namespace IO