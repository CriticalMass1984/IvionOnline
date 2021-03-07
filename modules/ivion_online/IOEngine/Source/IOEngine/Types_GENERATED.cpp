#include <IOEngine/Types_GENERATED.hpp>

namespace IO {
IvionOnline::List_ObjectPath* Initialize(IvionOnline::List_ObjectPath* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_OBJECTPATH);
	return obj;
}
IvionOnline::List_Method* Initialize(IvionOnline::List_Method* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_METHOD);
	return obj;
}
IvionOnline::Boolean* Initialize(IvionOnline::Boolean* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_BOOLEAN);
	return obj;
}
IvionOnline::List_Boolean* Initialize(IvionOnline::List_Boolean* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_BOOLEAN);
	return obj;
}
IvionOnline::Integer* Initialize(IvionOnline::Integer* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_INTEGER);
	return obj;
}
IvionOnline::List_Integer* Initialize(IvionOnline::List_Integer* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_INTEGER);
	return obj;
}
IvionOnline::Vec2i* Initialize(IvionOnline::Vec2i* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_VEC2I);
	return obj;
}
IvionOnline::List_Vec2i* Initialize(IvionOnline::List_Vec2i* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_VEC2I);
	return obj;
}
IvionOnline::Terrain* Initialize(IvionOnline::Terrain* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_TERRAIN);
	return obj;
}
IvionOnline::List_Terrain* Initialize(IvionOnline::List_Terrain* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_TERRAIN);
	return obj;
}
IvionOnline::Color* Initialize(IvionOnline::Color* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_COLOR);
	return obj;
}
IvionOnline::List_Color* Initialize(IvionOnline::List_Color* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_COLOR);
	return obj;
}
IvionOnline::GetList* Initialize(IvionOnline::GetList* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_GETLIST);
	Initialize(obj->mutable_result(), obj->abspath(), "Result");
	return obj;
}
IvionOnline::FilterDistance* Initialize(IvionOnline::FilterDistance* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_FILTERDISTANCE);
	return obj;
}
IvionOnline::SelectMultiple* Initialize(IvionOnline::SelectMultiple* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_SELECTMULTIPLE);
	Initialize(obj->mutable_result(), obj->abspath(), "Result");
	return obj;
}
IvionOnline::SelectExactlyOne* Initialize(IvionOnline::SelectExactlyOne* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_SELECTEXACTLYONE);
	return obj;
}
IvionOnline::AssertControlOrHeroic* Initialize(IvionOnline::AssertControlOrHeroic* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_ASSERTCONTROLORHEROIC);
	return obj;
}
IvionOnline::AssertControllerHasPriority* Initialize(IvionOnline::AssertControllerHasPriority* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_ASSERTCONTROLLERHASPRIORITY);
	return obj;
}
IvionOnline::AssertStackEmptyOrInstant* Initialize(IvionOnline::AssertStackEmptyOrInstant* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_ASSERTSTACKEMPTYORINSTANT);
	return obj;
}
IvionOnline::ReduceCost* Initialize(IvionOnline::ReduceCost* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_REDUCECOST);
	return obj;
}
IvionOnline::PayCost* Initialize(IvionOnline::PayCost* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_PAYCOST);
	return obj;
}
IvionOnline::PlayGainResources* Initialize(IvionOnline::PlayGainResources* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_PLAYGAINRESOURCES);
	return obj;
}
IvionOnline::RefundCost* Initialize(IvionOnline::RefundCost* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_REFUNDCOST);
	return obj;
}
IvionOnline::GainActions* Initialize(IvionOnline::GainActions* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_GAINACTIONS);
	return obj;
}
IvionOnline::GainPower* Initialize(IvionOnline::GainPower* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_GAINPOWER);
	return obj;
}
IvionOnline::Move* Initialize(IvionOnline::Move* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_MOVE);
	return obj;
}
IvionOnline::Travel* Initialize(IvionOnline::Travel* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_TRAVEL);
	return obj;
}
IvionOnline::Damage* Initialize(IvionOnline::Damage* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_DAMAGE);
	return obj;
}
IvionOnline::Boolean_Constant* Initialize(IvionOnline::Boolean_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_BOOLEAN_CONSTANT);
	Initialize(obj->mutable_result(), obj->abspath(), "Result");
	return obj;
}
IvionOnline::Integer_Constant* Initialize(IvionOnline::Integer_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_INTEGER_CONSTANT);
	Initialize(obj->mutable_result(), obj->abspath(), "Result");
	return obj;
}
IvionOnline::Vec2i_Constant* Initialize(IvionOnline::Vec2i_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_VEC2I_CONSTANT);
	Initialize(obj->mutable_result(), obj->abspath(), "Result");
	return obj;
}
IvionOnline::Terrain_Constant* Initialize(IvionOnline::Terrain_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_TERRAIN_CONSTANT);
	Initialize(obj->mutable_result(), obj->abspath(), "Result");
	return obj;
}
IvionOnline::Color_Constant* Initialize(IvionOnline::Color_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_COLOR_CONSTANT);
	Initialize(obj->mutable_result(), obj->abspath(), "Result");
	return obj;
}
IvionOnline::ObjectPath_Constant* Initialize(IvionOnline::ObjectPath_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_OBJECTPATH_CONSTANT);
	return obj;
}
IvionOnline::Player* Initialize(IvionOnline::Player* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_PLAYER);
	Initialize(obj->mutable_health(), obj->abspath(), "Health");
	Initialize(obj->mutable_actions(), obj->abspath(), "Actions");
	Initialize(obj->mutable_power(), obj->abspath(), "Power");
	Initialize(obj->mutable_initiative(), obj->abspath(), "Initiative");
	Initialize(obj->mutable_mitigate(), obj->abspath(), "Mitigate");
	Initialize(obj->mutable_slow(), obj->abspath(), "Slow");
	Initialize(obj->mutable_silence(), obj->abspath(), "Silence");
	Initialize(obj->mutable_disarm(), obj->abspath(), "Disarm");
	Initialize(obj->mutable_position(), obj->abspath(), "Position");
	Initialize(obj->mutable_hand(), obj->abspath(), "Hand");
	Initialize(obj->mutable_deck(), obj->abspath(), "Deck");
	Initialize(obj->mutable_discard(), obj->abspath(), "Discard");
	Initialize(obj->mutable_feats(), obj->abspath(), "Feats");
	Initialize(obj->mutable_rangesources(), obj->abspath(), "RangeSources");
	Initialize(obj->mutable_maxhealth(), obj->abspath(), "MaxHealth");
	Initialize(obj->mutable_maxactions(), obj->abspath(), "MaxActions");
	Initialize(obj->mutable_maxpower(), obj->abspath(), "MaxPower");
	Initialize(obj->mutable_maxslow(), obj->abspath(), "MaxSlow");
	Initialize(obj->mutable_maxsilence(), obj->abspath(), "MaxSilence");
	Initialize(obj->mutable_maxdisarm(), obj->abspath(), "MaxDisarm");
	Initialize(obj->mutable_maxmitigate(), obj->abspath(), "MaxMitigate");
	return obj;
}
IvionOnline::List_Player* Initialize(IvionOnline::List_Player* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_PLAYER);
	return obj;
}
IvionOnline::Card* Initialize(IvionOnline::Card* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_CARD);
	return obj;
}
IvionOnline::List_Card* Initialize(IvionOnline::List_Card* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_CARD);
	return obj;
}
IvionOnline::CardData* Initialize(IvionOnline::CardData* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_CARDDATA);
	Initialize(obj->mutable_actioncost(), obj->abspath(), "ActionCost");
	Initialize(obj->mutable_powercost(), obj->abspath(), "PowerCost");
	Initialize(obj->mutable_range(), obj->abspath(), "Range");
	Initialize(obj->mutable_affectedbyslow(), obj->abspath(), "AffectedBySlow");
	Initialize(obj->mutable_affectedbysilence(), obj->abspath(), "AffectedBySilence");
	Initialize(obj->mutable_affectedbydisarm(), obj->abspath(), "AffectedByDisarm");
	Initialize(obj->mutable_omnipresenteffect(), obj->abspath(), "OmniPresentEffect");
	Initialize(obj->mutable_passiveeffect(), obj->abspath(), "PassiveEffect");
	Initialize(obj->mutable_feateffect(), obj->abspath(), "FeatEffect");
	Initialize(obj->mutable_playeffect(), obj->abspath(), "PlayEffect");
	Initialize(obj->mutable_resolveeffect(), obj->abspath(), "ResolveEffect");
	return obj;
}
IvionOnline::List_CardData* Initialize(IvionOnline::List_CardData* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_CARDDATA);
	return obj;
}
IvionOnline::Tile* Initialize(IvionOnline::Tile* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_TILE);
	Initialize(obj->mutable_position(), obj->abspath(), "Position");
	Initialize(obj->mutable_terrain(), obj->abspath(), "Terrain");
	return obj;
}
IvionOnline::List_Tile* Initialize(IvionOnline::List_Tile* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_TILE);
	return obj;
}
IvionOnline::GameState* Initialize(IvionOnline::GameState* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_GAMESTATE);
	Initialize(obj->mutable_players(), obj->abspath(), "Players");
	Initialize(obj->mutable_cards(), obj->abspath(), "Cards");
	Initialize(obj->mutable_carddata(), obj->abspath(), "CardData");
	Initialize(obj->mutable_tiles(), obj->abspath(), "Tiles");
	Initialize(obj->mutable_field(), obj->abspath(), "Field");
	Initialize(obj->mutable_turnnumber(), obj->abspath(), "TurnNumber");
	return obj;
}
IvionOnline::List_GameState* Initialize(IvionOnline::List_GameState* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	obj->mutable_abspath()->set_object_type(IvionOnline::ObjectType::TYPE_GAMESTATE);
	return obj;
}

} // namespace IO