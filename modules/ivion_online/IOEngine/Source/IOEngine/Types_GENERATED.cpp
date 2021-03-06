#include <IOEngine/Types_GENERATED.hpp>

namespace IO {
void Initialize_List_ObjectPath(IvionOnline::List_ObjectPath* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_List_Method(IvionOnline::List_Method* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_Boolean(IvionOnline::Boolean* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_List_Boolean(IvionOnline::List_Boolean* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_Integer(IvionOnline::Integer* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_List_Integer(IvionOnline::List_Integer* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_Vec2i(IvionOnline::Vec2i* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_List_Vec2i(IvionOnline::List_Vec2i* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_Terrain(IvionOnline::Terrain* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_List_Terrain(IvionOnline::List_Terrain* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_Color(IvionOnline::Color* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_List_Color(IvionOnline::List_Color* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_Player(IvionOnline::Player* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	Initialize_Integer(obj->mutable_health(), obj->abspath(), "Health");
	Initialize_Integer(obj->mutable_actions(), obj->abspath(), "Actions");
	Initialize_Integer(obj->mutable_power(), obj->abspath(), "Power");
	Initialize_Integer(obj->mutable_initiative(), obj->abspath(), "Initiative");
	Initialize_Integer(obj->mutable_mitigate(), obj->abspath(), "Mitigate");
	Initialize_Integer(obj->mutable_slow(), obj->abspath(), "Slow");
	Initialize_Integer(obj->mutable_silence(), obj->abspath(), "Silence");
	Initialize_Integer(obj->mutable_disarm(), obj->abspath(), "Disarm");
	Initialize_Vec2i(obj->mutable_position(), obj->abspath(), "Position");
	Initialize_List_ObjectPath(obj->mutable_hand(), obj->abspath(), "Hand");
	Initialize_List_ObjectPath(obj->mutable_deck(), obj->abspath(), "Deck");
	Initialize_List_ObjectPath(obj->mutable_discard(), obj->abspath(), "Discard");
	Initialize_List_ObjectPath(obj->mutable_feats(), obj->abspath(), "Feats");
	Initialize_Integer(obj->mutable_maxhealth(), obj->abspath(), "MaxHealth");
	Initialize_Integer(obj->mutable_maxactions(), obj->abspath(), "MaxActions");
	Initialize_Integer(obj->mutable_maxpower(), obj->abspath(), "MaxPower");
	Initialize_Integer(obj->mutable_maxslow(), obj->abspath(), "MaxSlow");
	Initialize_Integer(obj->mutable_maxsilence(), obj->abspath(), "MaxSilence");
	Initialize_Integer(obj->mutable_maxdisarm(), obj->abspath(), "MaxDisarm");
	Initialize_Integer(obj->mutable_maxmitigate(), obj->abspath(), "MaxMitigate");
}
void Initialize_List_Player(IvionOnline::List_Player* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_Card(IvionOnline::Card* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_List_Card(IvionOnline::List_Card* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_CardData(IvionOnline::CardData* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	Initialize_Integer(obj->mutable_actioncost(), obj->abspath(), "ActionCost");
	Initialize_Integer(obj->mutable_powercost(), obj->abspath(), "PowerCost");
	Initialize_Integer(obj->mutable_range(), obj->abspath(), "Range");
	Initialize_Boolean(obj->mutable_affectedbyslow(), obj->abspath(), "AffectedBySlow");
	Initialize_Boolean(obj->mutable_affectedbysilence(), obj->abspath(), "AffectedBySilence");
	Initialize_Boolean(obj->mutable_affectedbydisarm(), obj->abspath(), "AffectedByDisarm");
	Initialize_List_Method(obj->mutable_omnipresenteffect(), obj->abspath(), "OmniPresentEffect");
	Initialize_List_Method(obj->mutable_passiveeffect(), obj->abspath(), "PassiveEffect");
	Initialize_List_Method(obj->mutable_feateffect(), obj->abspath(), "FeatEffect");
	Initialize_List_Method(obj->mutable_playeffect(), obj->abspath(), "PlayEffect");
	Initialize_List_Method(obj->mutable_resolveeffect(), obj->abspath(), "ResolveEffect");
}
void Initialize_List_CardData(IvionOnline::List_CardData* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_Tile(IvionOnline::Tile* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	Initialize_Vec2i(obj->mutable_position(), obj->abspath(), "Position");
	Initialize_Terrain(obj->mutable_terrain(), obj->abspath(), "Terrain");
}
void Initialize_List_Tile(IvionOnline::List_Tile* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}
void Initialize_GameState(IvionOnline::GameState* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
	Initialize_List_Player(obj->mutable_players(), obj->abspath(), "Players");
	Initialize_List_Card(obj->mutable_cards(), obj->abspath(), "Cards");
	Initialize_List_CardData(obj->mutable_carddata(), obj->abspath(), "CardData");
	Initialize_List_Tile(obj->mutable_tiles(), obj->abspath(), "Tiles");
	Initialize_List_ObjectPath(obj->mutable_field(), obj->abspath(), "Field");
	Initialize_Integer(obj->mutable_turnnumber(), obj->abspath(), "TurnNumber");
}
void Initialize_List_GameState(IvionOnline::List_GameState* obj, const IvionOnline::ObjectPath& root, const std::string& name){
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root);
	obj->mutable_abspath()->add_path(name);
}

} // namespace IO