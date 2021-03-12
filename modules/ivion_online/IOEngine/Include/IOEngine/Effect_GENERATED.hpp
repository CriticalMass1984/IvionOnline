#pragma once

#include <GRPC/GameState.pb.h>
#include <IOEngine/Util.hpp>

namespace IO {

using MethodIter = google::protobuf::internal::RepeatedPtrIterator<IvionOnline::Method>;
using StringIter = google::protobuf::internal::RepeatedPtrIterator<std::__cxx11::string>;
class GameInstance;

google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::ObjectPath *obj);
template<typename T>
inline T* ResolvePath(GameInstance* instance, IvionOnline::ObjectPath *path) { 
    google::protobuf::Message* objPtr = ResolvePath(instance, path);
    assert(objPtr);
    auto* typedPtr = dynamic_cast<T*>(objPtr);
	while(typedPtr == nullptr)
	{
		objPtr->PrintDebugString();
		path = dynamic_cast<IvionOnline::ObjectPath*>(objPtr);
		assert(path);
		objPtr = ResolvePath(instance, path);
		typedPtr = dynamic_cast<T*>(objPtr);
	}
	

    assert(typedPtr);
    return typedPtr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::ObjectPath *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_ObjectPath *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Boolean *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Integer *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Vec2i *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Terrain *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Color *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Player *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Team *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Card *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::CardData *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Tile *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::GameState *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Boolean *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Integer *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Vec2i *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Terrain *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Color *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Player *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Team *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Card *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_CardData *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Tile *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_GameState *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::GetList *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::FilterDistance *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::SelectMultiple *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::SelectExactlyOne *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::AssertControlOrHeroic *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::AssertControllerHasPriority *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::AssertStackEmptyOrInstant *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::ReduceCost *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::PayCost *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::PlayGainResources *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::RefundCost *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::GainActions *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::GainPower *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Move *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Travel *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Damage *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Boolean_Constant *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Integer_Constant *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Vec2i_Constant *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Terrain_Constant *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Color_Constant *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::ObjectPath_Constant *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Method *obj, const StringIter& fieldName, const StringIter& end);
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Method *obj, const StringIter& fieldName, const StringIter& end);
bool __GetList(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::List_ObjectPath* Result, IvionOnline::ObjectPath* Source);
bool __FilterDistance(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::List_ObjectPath* Targets, IvionOnline::List_ObjectPath* RangeSources, IvionOnline::Integer* MaxDistance);
bool __SelectMultiple(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::List_ObjectPath* Result, IvionOnline::List_ObjectPath* Source, IvionOnline::Integer* Number, IvionOnline::Boolean* UpTo);
bool __SelectExactlyOne(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::ObjectPath* Result, IvionOnline::List_ObjectPath* Source);
bool __AssertControlOrHeroic(GameInstance* instance, MethodIter begin, const MethodIter& end);
bool __AssertControllerHasPriority(GameInstance* instance, MethodIter begin, const MethodIter& end);
bool __AssertStackEmptyOrInstant(GameInstance* instance, MethodIter begin, const MethodIter& end);
bool __ReduceCost(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Card* Card, IvionOnline::Integer* ActionCostReduction, IvionOnline::Integer* PowerCostReduction, IvionOnline::Integer* CostReduction, IvionOnline::Boolean* Free);
bool __PayCost(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Player* Player, IvionOnline::Card* Card);
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
	auto* _result = message->mutable_result();
	assert(_result);
	auto* _source = message->mutable_source();
	assert(_source);
	return __GetList(
		instance, begin, end,
		_result,
		_source);
}


inline bool FilterDistance(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::FilterDistance* message) {
	auto* _targets = ResolvePath<IvionOnline::List_ObjectPath>(instance, message->mutable_targets());
	assert(_targets);
	auto* _rangesources = ResolvePath<IvionOnline::List_ObjectPath>(instance, message->mutable_rangesources());
	assert(_rangesources);
	auto* _maxdistance = ResolvePath<IvionOnline::Integer>(instance, message->mutable_maxdistance());
	assert(_maxdistance);
	return __FilterDistance(
		instance, begin, end,
		_targets,
		_rangesources,
		_maxdistance);
}


inline bool SelectMultiple(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::SelectMultiple* message) {
	auto* _result = message->mutable_result();
	assert(_result);
	auto* _source = ResolvePath<IvionOnline::List_ObjectPath>(instance, message->mutable_source());
	assert(_source);
	auto* _number = ResolvePath<IvionOnline::Integer>(instance, message->mutable_number());
	assert(_number);
	auto* _upto = ResolvePath<IvionOnline::Boolean>(instance, message->mutable_upto());
	assert(_upto);
	return __SelectMultiple(
		instance, begin, end,
		_result,
		_source,
		_number,
		_upto);
}


inline bool SelectExactlyOne(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::SelectExactlyOne* message) {
	auto* _result = message->mutable_result();
	assert(_result);
	auto* _source = ResolvePath<IvionOnline::List_ObjectPath>(instance, message->mutable_source());
	assert(_source);
	return __SelectExactlyOne(
		instance, begin, end,
		_result,
		_source);
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


inline bool ReduceCost(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::ReduceCost* message) {
	auto* _card = ResolvePath<IvionOnline::Card>(instance, message->mutable_card());
	assert(_card);
	auto* _actioncostreduction = ResolvePath<IvionOnline::Integer>(instance, message->mutable_actioncostreduction());
	assert(_actioncostreduction);
	auto* _powercostreduction = ResolvePath<IvionOnline::Integer>(instance, message->mutable_powercostreduction());
	assert(_powercostreduction);
	auto* _costreduction = ResolvePath<IvionOnline::Integer>(instance, message->mutable_costreduction());
	assert(_costreduction);
	auto* _free = ResolvePath<IvionOnline::Boolean>(instance, message->mutable_free());
	assert(_free);
	return __ReduceCost(
		instance, begin, end,
		_card,
		_actioncostreduction,
		_powercostreduction,
		_costreduction,
		_free);
}


inline bool PayCost(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::PayCost* message) {
	auto* _player = ResolvePath<IvionOnline::Player>(instance, message->mutable_player());
	assert(_player);
	auto* _card = ResolvePath<IvionOnline::Card>(instance, message->mutable_card());
	assert(_card);
	return __PayCost(
		instance, begin, end,
		_player,
		_card);
}


inline bool PlayGainResources(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::PlayGainResources* message) {
	auto* _player = ResolvePath<IvionOnline::Player>(instance, message->mutable_player());
	assert(_player);
	auto* _card = ResolvePath<IvionOnline::Card>(instance, message->mutable_card());
	assert(_card);
	return __PlayGainResources(
		instance, begin, end,
		_player,
		_card);
}


inline bool RefundCost(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::RefundCost* message) {
	auto* _player = ResolvePath<IvionOnline::Player>(instance, message->mutable_player());
	assert(_player);
	auto* _card = ResolvePath<IvionOnline::Card>(instance, message->mutable_card());
	assert(_card);
	return __RefundCost(
		instance, begin, end,
		_player,
		_card);
}


inline bool GainActions(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::GainActions* message) {
	auto* _player = ResolvePath<IvionOnline::Player>(instance, message->mutable_player());
	assert(_player);
	auto* _value = ResolvePath<IvionOnline::Integer>(instance, message->mutable_value());
	assert(_value);
	return __GainActions(
		instance, begin, end,
		_player,
		_value);
}


inline bool GainPower(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::GainPower* message) {
	auto* _player = ResolvePath<IvionOnline::Player>(instance, message->mutable_player());
	assert(_player);
	auto* _value = ResolvePath<IvionOnline::Integer>(instance, message->mutable_value());
	assert(_value);
	return __GainPower(
		instance, begin, end,
		_player,
		_value);
}


inline bool Move(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Move* message) {
	auto* _player = ResolvePath<IvionOnline::Player>(instance, message->mutable_player());
	assert(_player);
	auto* _destination = ResolvePath<IvionOnline::Tile>(instance, message->mutable_destination());
	assert(_destination);
	return __Move(
		instance, begin, end,
		_player,
		_destination);
}


inline bool Travel(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Travel* message) {
	auto* _player = ResolvePath<IvionOnline::Player>(instance, message->mutable_player());
	assert(_player);
	auto* _destination = ResolvePath<IvionOnline::Tile>(instance, message->mutable_destination());
	assert(_destination);
	return __Travel(
		instance, begin, end,
		_player,
		_destination);
}


inline bool Damage(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Damage* message) {
	auto* _player = ResolvePath<IvionOnline::Player>(instance, message->mutable_player());
	assert(_player);
	auto* _amount = ResolvePath<IvionOnline::Integer>(instance, message->mutable_amount());
	assert(_amount);
	return __Damage(
		instance, begin, end,
		_player,
		_amount);
}


inline bool Boolean_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Boolean_Constant* message) {
	auto* _result = message->mutable_result();
	assert(_result);
	return __Boolean_Constant(
		instance, begin, end,
		_result);
}


inline bool Integer_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Integer_Constant* message) {
	auto* _result = message->mutable_result();
	assert(_result);
	return __Integer_Constant(
		instance, begin, end,
		_result);
}


inline bool Vec2i_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Vec2i_Constant* message) {
	auto* _result = message->mutable_result();
	assert(_result);
	return __Vec2i_Constant(
		instance, begin, end,
		_result);
}


inline bool Terrain_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Terrain_Constant* message) {
	auto* _result = message->mutable_result();
	assert(_result);
	return __Terrain_Constant(
		instance, begin, end,
		_result);
}


inline bool Color_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::Color_Constant* message) {
	auto* _result = message->mutable_result();
	assert(_result);
	return __Color_Constant(
		instance, begin, end,
		_result);
}


inline bool ObjectPath_Constant(
		GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::ObjectPath_Constant* message) {
	auto* _result = message->mutable_result();
	assert(_result);
	return __ObjectPath_Constant(
		instance, begin, end,
		_result);
}


inline bool GetListIsValid(const IvionOnline::GetList& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		if(!ObjectIsValid(&message.source())){return false;};
		return true;
}

inline bool FilterDistanceIsValid(const IvionOnline::FilterDistance& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.targets())){return false;};
		if(!ObjectIsValid(&message.rangesources())){return false;};
		if(!ObjectIsValid(&message.maxdistance())){return false;};
		return true;
}

inline bool SelectMultipleIsValid(const IvionOnline::SelectMultiple& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		if(!ObjectIsValid(&message.source())){return false;};
		if(!ObjectIsValid(&message.number())){return false;};
		if(!ObjectIsValid(&message.upto())){return false;};
		return true;
}

inline bool SelectExactlyOneIsValid(const IvionOnline::SelectExactlyOne& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		if(!ObjectIsValid(&message.source())){return false;};
		return true;
}

inline bool AssertControlOrHeroicIsValid(const IvionOnline::AssertControlOrHeroic& message) {
		if(!ObjectIsValid(&message)){return false;};
		return true;
}

inline bool AssertControllerHasPriorityIsValid(const IvionOnline::AssertControllerHasPriority& message) {
		if(!ObjectIsValid(&message)){return false;};
		return true;
}

inline bool AssertStackEmptyOrInstantIsValid(const IvionOnline::AssertStackEmptyOrInstant& message) {
		if(!ObjectIsValid(&message)){return false;};
		return true;
}

inline bool ReduceCostIsValid(const IvionOnline::ReduceCost& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.card())){return false;};
		if(!ObjectIsValid(&message.actioncostreduction())){return false;};
		if(!ObjectIsValid(&message.powercostreduction())){return false;};
		if(!ObjectIsValid(&message.costreduction())){return false;};
		if(!ObjectIsValid(&message.free())){return false;};
		return true;
}

inline bool PayCostIsValid(const IvionOnline::PayCost& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.player())){return false;};
		if(!ObjectIsValid(&message.card())){return false;};
		return true;
}

inline bool PlayGainResourcesIsValid(const IvionOnline::PlayGainResources& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.player())){return false;};
		if(!ObjectIsValid(&message.card())){return false;};
		return true;
}

inline bool RefundCostIsValid(const IvionOnline::RefundCost& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.player())){return false;};
		if(!ObjectIsValid(&message.card())){return false;};
		return true;
}

inline bool GainActionsIsValid(const IvionOnline::GainActions& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.player())){return false;};
		if(!ObjectIsValid(&message.value())){return false;};
		return true;
}

inline bool GainPowerIsValid(const IvionOnline::GainPower& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.player())){return false;};
		if(!ObjectIsValid(&message.value())){return false;};
		return true;
}

inline bool MoveIsValid(const IvionOnline::Move& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.player())){return false;};
		if(!ObjectIsValid(&message.destination())){return false;};
		return true;
}

inline bool TravelIsValid(const IvionOnline::Travel& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.player())){return false;};
		if(!ObjectIsValid(&message.destination())){return false;};
		return true;
}

inline bool DamageIsValid(const IvionOnline::Damage& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.player())){return false;};
		if(!ObjectIsValid(&message.amount())){return false;};
		return true;
}

inline bool Boolean_ConstantIsValid(const IvionOnline::Boolean_Constant& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		return true;
}

inline bool Integer_ConstantIsValid(const IvionOnline::Integer_Constant& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		return true;
}

inline bool Vec2i_ConstantIsValid(const IvionOnline::Vec2i_Constant& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		return true;
}

inline bool Terrain_ConstantIsValid(const IvionOnline::Terrain_Constant& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		return true;
}

inline bool Color_ConstantIsValid(const IvionOnline::Color_Constant& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		return true;
}

inline bool ObjectPath_ConstantIsValid(const IvionOnline::ObjectPath_Constant& message) {
		if(!ObjectIsValid(&message)){return false;};
		if(!ObjectIsValid(&message.result())){return false;};
		return true;
}

inline bool MethodIsValid(const IvionOnline::Method& method){
	if(method.has_getlist()){
		return GetListIsValid(method.getlist());
	} else if(method.has_filterdistance()){
		return FilterDistanceIsValid(method.filterdistance());
	} else if(method.has_selectmultiple()){
		return SelectMultipleIsValid(method.selectmultiple());
	} else if(method.has_selectexactlyone()){
		return SelectExactlyOneIsValid(method.selectexactlyone());
	} else if(method.has_assertcontrolorheroic()){
		return AssertControlOrHeroicIsValid(method.assertcontrolorheroic());
	} else if(method.has_assertcontrollerhaspriority()){
		return AssertControllerHasPriorityIsValid(method.assertcontrollerhaspriority());
	} else if(method.has_assertstackemptyorinstant()){
		return AssertStackEmptyOrInstantIsValid(method.assertstackemptyorinstant());
	} else if(method.has_reducecost()){
		return ReduceCostIsValid(method.reducecost());
	} else if(method.has_paycost()){
		return PayCostIsValid(method.paycost());
	} else if(method.has_playgainresources()){
		return PlayGainResourcesIsValid(method.playgainresources());
	} else if(method.has_refundcost()){
		return RefundCostIsValid(method.refundcost());
	} else if(method.has_gainactions()){
		return GainActionsIsValid(method.gainactions());
	} else if(method.has_gainpower()){
		return GainPowerIsValid(method.gainpower());
	} else if(method.has_move()){
		return MoveIsValid(method.move());
	} else if(method.has_travel()){
		return TravelIsValid(method.travel());
	} else if(method.has_damage()){
		return DamageIsValid(method.damage());
	} else if(method.has_boolean_constant()){
		return Boolean_ConstantIsValid(method.boolean_constant());
	} else if(method.has_integer_constant()){
		return Integer_ConstantIsValid(method.integer_constant());
	} else if(method.has_vec2i_constant()){
		return Vec2i_ConstantIsValid(method.vec2i_constant());
	} else if(method.has_terrain_constant()){
		return Terrain_ConstantIsValid(method.terrain_constant());
	} else if(method.has_color_constant()){
		return Color_ConstantIsValid(method.color_constant());
	} else if(method.has_objectpath_constant()){
		return ObjectPath_ConstantIsValid(method.objectpath_constant());
	}
	return false;
}

inline bool ExecuteMethods(GameInstance* instance, MethodIter begin, const MethodIter& end){
	assert(instance);
	if(begin == end) {
		return true;
	}
	assert(MethodIsValid(*begin));
	if(begin->has_getlist()){
		return GetList(instance, begin + 1, end, begin->mutable_getlist());
	} else if(begin->has_filterdistance()){
		return FilterDistance(instance, begin + 1, end, begin->mutable_filterdistance());
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
	} else if(begin->has_reducecost()){
		return ReduceCost(instance, begin + 1, end, begin->mutable_reducecost());
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