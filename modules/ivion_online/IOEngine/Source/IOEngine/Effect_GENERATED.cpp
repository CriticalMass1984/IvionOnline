#include <IOEngine/Effect_GENERATED.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {
 
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::ObjectPath *obj) {
    return ResolvePath(instance, &instance->gamestate_, obj->mutable_path()->begin(), obj->mutable_path()->end());
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::ObjectPath *obj, const StringIter& fieldName, const StringIter& end) {
	google::protobuf::Message* innerObject = ResolvePath(instance, obj);
	const auto *innerDesc = innerObject->GetDescriptor();
	const auto *nameFieldDesc = innerDesc->FindFieldByName("Name");
	if (nameFieldDesc && nameFieldDesc->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING) {
		const auto& nextField = fieldName + 1;
		const std::string &innerFieldName = innerObject->GetReflection()->GetString(*innerObject, nameFieldDesc);
		if (*fieldName == innerFieldName) {
			switch(obj->object_type()){
				case IvionOnline::ObjectType::TYPE_PLAYER:{
					auto* trueElement = dynamic_cast<IvionOnline::Player*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_LIST_PLAYER:{
					auto* trueElement = dynamic_cast<IvionOnline::List_Player*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_TEAM:{
					auto* trueElement = dynamic_cast<IvionOnline::Team*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_LIST_TEAM:{
					auto* trueElement = dynamic_cast<IvionOnline::List_Team*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_CARD:{
					auto* trueElement = dynamic_cast<IvionOnline::Card*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_LIST_CARD:{
					auto* trueElement = dynamic_cast<IvionOnline::List_Card*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_CARDDATA:{
					auto* trueElement = dynamic_cast<IvionOnline::CardData*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_LIST_CARDDATA:{
					auto* trueElement = dynamic_cast<IvionOnline::List_CardData*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_TILE:{
					auto* trueElement = dynamic_cast<IvionOnline::Tile*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_LIST_TILE:{
					auto* trueElement = dynamic_cast<IvionOnline::List_Tile*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_GAMESTATE:{
					auto* trueElement = dynamic_cast<IvionOnline::GameState*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				case IvionOnline::ObjectType::TYPE_LIST_GAMESTATE:{
					auto* trueElement = dynamic_cast<IvionOnline::List_GameState*>(innerObject);
					assert(trueElement);
					return ResolvePath(instance, trueElement, nextField, end);
				} break;
				default:
					return nullptr;
			}
		}
	}
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_ObjectPath *obj, const StringIter& fieldName, const StringIter& end) {
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_element(idx);}
		return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			auto* innerObject = ResolvePath(instance, &element, fieldName, end);
			if(innerObject){
				return innerObject;
			}
			return nullptr;
		}
	}
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Boolean *obj, const StringIter& fieldName, const StringIter& end) {
	assert(fieldName == end);
	return obj;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Integer *obj, const StringIter& fieldName, const StringIter& end) {
	assert(fieldName == end);
	return obj;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Vec2i *obj, const StringIter& fieldName, const StringIter& end) {
	assert(fieldName == end);
	return obj;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Terrain *obj, const StringIter& fieldName, const StringIter& end) {
	assert(fieldName == end);
	return obj;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Color *obj, const StringIter& fieldName, const StringIter& end) {
	assert(fieldName == end);
	return obj;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Player *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Health") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_health();}
		return ResolvePath(instance, obj->mutable_health(), nextField, end);
	}
	if(*fieldName == "Actions") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_actions();}
		return ResolvePath(instance, obj->mutable_actions(), nextField, end);
	}
	if(*fieldName == "Power") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_power();}
		return ResolvePath(instance, obj->mutable_power(), nextField, end);
	}
	if(*fieldName == "Initiative") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_initiative();}
		return ResolvePath(instance, obj->mutable_initiative(), nextField, end);
	}
	if(*fieldName == "Mitigate") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_mitigate();}
		return ResolvePath(instance, obj->mutable_mitigate(), nextField, end);
	}
	if(*fieldName == "Slow") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_slow();}
		return ResolvePath(instance, obj->mutable_slow(), nextField, end);
	}
	if(*fieldName == "Silence") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_silence();}
		return ResolvePath(instance, obj->mutable_silence(), nextField, end);
	}
	if(*fieldName == "Disarm") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_disarm();}
		return ResolvePath(instance, obj->mutable_disarm(), nextField, end);
	}
	if(*fieldName == "Position") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_position();}
		return ResolvePath(instance, obj->mutable_position(), nextField, end);
	}
	if(*fieldName == "BasicActions") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_basicactions();}
		return ResolvePath(instance, obj->mutable_basicactions(), nextField, end);
	}
	if(*fieldName == "Hand") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_hand();}
		return ResolvePath(instance, obj->mutable_hand(), nextField, end);
	}
	if(*fieldName == "Deck") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_deck();}
		return ResolvePath(instance, obj->mutable_deck(), nextField, end);
	}
	if(*fieldName == "Discard") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_discard();}
		return ResolvePath(instance, obj->mutable_discard(), nextField, end);
	}
	if(*fieldName == "Feats") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_feats();}
		return ResolvePath(instance, obj->mutable_feats(), nextField, end);
	}
	if(*fieldName == "RangeSources") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_rangesources();}
		return ResolvePath(instance, obj->mutable_rangesources(), nextField, end);
	}
	if(*fieldName == "MaxHealth") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_maxhealth();}
		return ResolvePath(instance, obj->mutable_maxhealth(), nextField, end);
	}
	if(*fieldName == "MaxActions") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_maxactions();}
		return ResolvePath(instance, obj->mutable_maxactions(), nextField, end);
	}
	if(*fieldName == "MaxPower") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_maxpower();}
		return ResolvePath(instance, obj->mutable_maxpower(), nextField, end);
	}
	if(*fieldName == "MaxSlow") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_maxslow();}
		return ResolvePath(instance, obj->mutable_maxslow(), nextField, end);
	}
	if(*fieldName == "MaxSilence") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_maxsilence();}
		return ResolvePath(instance, obj->mutable_maxsilence(), nextField, end);
	}
	if(*fieldName == "MaxDisarm") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_maxdisarm();}
		return ResolvePath(instance, obj->mutable_maxdisarm(), nextField, end);
	}
	if(*fieldName == "MaxMitigate") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_maxmitigate();}
		return ResolvePath(instance, obj->mutable_maxmitigate(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Team *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Players") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_players();}
		return ResolvePath(instance, obj->mutable_players(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Card *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "CardStats") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_cardstats();}
		return ResolvePath(instance, obj->mutable_cardstats(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::CardData *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Owner") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_owner();}
		return ResolvePath(instance, obj->mutable_owner(), nextField, end);
	}
	if(*fieldName == "Controller") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_controller();}
		return ResolvePath(instance, obj->mutable_controller(), nextField, end);
	}
	if(*fieldName == "ActionCost") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_actioncost();}
		return ResolvePath(instance, obj->mutable_actioncost(), nextField, end);
	}
	if(*fieldName == "PowerCost") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_powercost();}
		return ResolvePath(instance, obj->mutable_powercost(), nextField, end);
	}
	if(*fieldName == "Range") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_range();}
		return ResolvePath(instance, obj->mutable_range(), nextField, end);
	}
	if(*fieldName == "AffectedBySlow") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_affectedbyslow();}
		return ResolvePath(instance, obj->mutable_affectedbyslow(), nextField, end);
	}
	if(*fieldName == "AffectedBySilence") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_affectedbysilence();}
		return ResolvePath(instance, obj->mutable_affectedbysilence(), nextField, end);
	}
	if(*fieldName == "AffectedByDisarm") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_affectedbydisarm();}
		return ResolvePath(instance, obj->mutable_affectedbydisarm(), nextField, end);
	}
	if(*fieldName == "Attached") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_attached();}
		return ResolvePath(instance, obj->mutable_attached(), nextField, end);
	}
	if(*fieldName == "OmniPresentEffect") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_omnipresenteffect();}
		return ResolvePath(instance, obj->mutable_omnipresenteffect(), nextField, end);
	}
	if(*fieldName == "PassiveEffect") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_passiveeffect();}
		return ResolvePath(instance, obj->mutable_passiveeffect(), nextField, end);
	}
	if(*fieldName == "FeatEffect") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_feateffect();}
		return ResolvePath(instance, obj->mutable_feateffect(), nextField, end);
	}
	if(*fieldName == "PlayEffect") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_playeffect();}
		return ResolvePath(instance, obj->mutable_playeffect(), nextField, end);
	}
	if(*fieldName == "ResolveEffect") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_resolveeffect();}
		return ResolvePath(instance, obj->mutable_resolveeffect(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Tile *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Position") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_position();}
		return ResolvePath(instance, obj->mutable_position(), nextField, end);
	}
	if(*fieldName == "Terrain") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_terrain();}
		return ResolvePath(instance, obj->mutable_terrain(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::GameState *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Players") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_players();}
		return ResolvePath(instance, obj->mutable_players(), nextField, end);
	}
	if(*fieldName == "Cards") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_cards();}
		return ResolvePath(instance, obj->mutable_cards(), nextField, end);
	}
	if(*fieldName == "CardData") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_carddata();}
		return ResolvePath(instance, obj->mutable_carddata(), nextField, end);
	}
	if(*fieldName == "Teams") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_teams();}
		return ResolvePath(instance, obj->mutable_teams(), nextField, end);
	}
	if(*fieldName == "Tiles") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_tiles();}
		return ResolvePath(instance, obj->mutable_tiles(), nextField, end);
	}
	if(*fieldName == "Field") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_field();}
		return ResolvePath(instance, obj->mutable_field(), nextField, end);
	}
	if(*fieldName == "TurnNumber") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_turnnumber();}
		return ResolvePath(instance, obj->mutable_turnnumber(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Boolean *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Integer *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Vec2i *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Terrain *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Color *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Player *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Team *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Card *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_CardData *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Tile *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_GameState *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.name() == *fieldName){
				if(nextField == end){return &element;}
				return ResolvePath(instance, &element, nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::GetList *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	if(*fieldName == "Source") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_source();}
		return ResolvePath(instance, obj->mutable_source(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::FilterDistance *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Targets") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_targets();}
		return ResolvePath(instance, obj->mutable_targets(), nextField, end);
	}
	if(*fieldName == "RangeSources") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_rangesources();}
		return ResolvePath(instance, obj->mutable_rangesources(), nextField, end);
	}
	if(*fieldName == "MaxDistance") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_maxdistance();}
		return ResolvePath(instance, obj->mutable_maxdistance(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::SelectMultiple *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	if(*fieldName == "Source") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_source();}
		return ResolvePath(instance, obj->mutable_source(), nextField, end);
	}
	if(*fieldName == "Number") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_number();}
		return ResolvePath(instance, obj->mutable_number(), nextField, end);
	}
	if(*fieldName == "UpTo") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_upto();}
		return ResolvePath(instance, obj->mutable_upto(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::SelectExactlyOne *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	if(*fieldName == "Source") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_source();}
		return ResolvePath(instance, obj->mutable_source(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::AssertControlOrHeroic *obj, const StringIter& fieldName, const StringIter& end) {
	if(fieldName == end){return obj;}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::AssertControllerHasPriority *obj, const StringIter& fieldName, const StringIter& end) {
	if(fieldName == end){return obj;}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::AssertStackEmptyOrInstant *obj, const StringIter& fieldName, const StringIter& end) {
	if(fieldName == end){return obj;}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::ReduceCost *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Card") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_card();}
		return ResolvePath(instance, obj->mutable_card(), nextField, end);
	}
	if(*fieldName == "ActionCostReduction") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_actioncostreduction();}
		return ResolvePath(instance, obj->mutable_actioncostreduction(), nextField, end);
	}
	if(*fieldName == "PowerCostReduction") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_powercostreduction();}
		return ResolvePath(instance, obj->mutable_powercostreduction(), nextField, end);
	}
	if(*fieldName == "CostReduction") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_costreduction();}
		return ResolvePath(instance, obj->mutable_costreduction(), nextField, end);
	}
	if(*fieldName == "Free") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_free();}
		return ResolvePath(instance, obj->mutable_free(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::PayCost *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Player") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_player();}
		return ResolvePath(instance, obj->mutable_player(), nextField, end);
	}
	if(*fieldName == "Card") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_card();}
		return ResolvePath(instance, obj->mutable_card(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::PlayGainResources *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Player") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_player();}
		return ResolvePath(instance, obj->mutable_player(), nextField, end);
	}
	if(*fieldName == "Card") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_card();}
		return ResolvePath(instance, obj->mutable_card(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::RefundCost *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Player") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_player();}
		return ResolvePath(instance, obj->mutable_player(), nextField, end);
	}
	if(*fieldName == "Card") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_card();}
		return ResolvePath(instance, obj->mutable_card(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::GainActions *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Player") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_player();}
		return ResolvePath(instance, obj->mutable_player(), nextField, end);
	}
	if(*fieldName == "Value") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_value();}
		return ResolvePath(instance, obj->mutable_value(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::GainPower *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Player") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_player();}
		return ResolvePath(instance, obj->mutable_player(), nextField, end);
	}
	if(*fieldName == "Value") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_value();}
		return ResolvePath(instance, obj->mutable_value(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Move *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Player") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_player();}
		return ResolvePath(instance, obj->mutable_player(), nextField, end);
	}
	if(*fieldName == "Destination") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_destination();}
		return ResolvePath(instance, obj->mutable_destination(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Travel *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Player") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_player();}
		return ResolvePath(instance, obj->mutable_player(), nextField, end);
	}
	if(*fieldName == "Destination") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_destination();}
		return ResolvePath(instance, obj->mutable_destination(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Damage *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Player") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_player();}
		return ResolvePath(instance, obj->mutable_player(), nextField, end);
	}
	if(*fieldName == "Amount") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_amount();}
		return ResolvePath(instance, obj->mutable_amount(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Boolean_Constant *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Integer_Constant *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Vec2i_Constant *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Terrain_Constant *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Color_Constant *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::ObjectPath_Constant *obj, const StringIter& fieldName, const StringIter& end) {
	if(*fieldName == "Result") {
		const auto& nextField = fieldName + 1;
		if(nextField == end){return obj->mutable_result();}
		return ResolvePath(instance, obj->mutable_result(), nextField, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::Method *obj, const StringIter& fieldName, const StringIter& end) {
	if(obj->has_getlist()){
		return ResolvePath(instance, obj->mutable_getlist(), fieldName, end);
	}
	if(obj->has_filterdistance()){
		return ResolvePath(instance, obj->mutable_filterdistance(), fieldName, end);
	}
	if(obj->has_selectmultiple()){
		return ResolvePath(instance, obj->mutable_selectmultiple(), fieldName, end);
	}
	if(obj->has_selectexactlyone()){
		return ResolvePath(instance, obj->mutable_selectexactlyone(), fieldName, end);
	}
	if(obj->has_assertcontrolorheroic()){
		return ResolvePath(instance, obj->mutable_assertcontrolorheroic(), fieldName, end);
	}
	if(obj->has_assertcontrollerhaspriority()){
		return ResolvePath(instance, obj->mutable_assertcontrollerhaspriority(), fieldName, end);
	}
	if(obj->has_assertstackemptyorinstant()){
		return ResolvePath(instance, obj->mutable_assertstackemptyorinstant(), fieldName, end);
	}
	if(obj->has_reducecost()){
		return ResolvePath(instance, obj->mutable_reducecost(), fieldName, end);
	}
	if(obj->has_paycost()){
		return ResolvePath(instance, obj->mutable_paycost(), fieldName, end);
	}
	if(obj->has_playgainresources()){
		return ResolvePath(instance, obj->mutable_playgainresources(), fieldName, end);
	}
	if(obj->has_refundcost()){
		return ResolvePath(instance, obj->mutable_refundcost(), fieldName, end);
	}
	if(obj->has_gainactions()){
		return ResolvePath(instance, obj->mutable_gainactions(), fieldName, end);
	}
	if(obj->has_gainpower()){
		return ResolvePath(instance, obj->mutable_gainpower(), fieldName, end);
	}
	if(obj->has_move()){
		return ResolvePath(instance, obj->mutable_move(), fieldName, end);
	}
	if(obj->has_travel()){
		return ResolvePath(instance, obj->mutable_travel(), fieldName, end);
	}
	if(obj->has_damage()){
		return ResolvePath(instance, obj->mutable_damage(), fieldName, end);
	}
	if(obj->has_boolean_constant()){
		return ResolvePath(instance, obj->mutable_boolean_constant(), fieldName, end);
	}
	if(obj->has_integer_constant()){
		return ResolvePath(instance, obj->mutable_integer_constant(), fieldName, end);
	}
	if(obj->has_vec2i_constant()){
		return ResolvePath(instance, obj->mutable_vec2i_constant(), fieldName, end);
	}
	if(obj->has_terrain_constant()){
		return ResolvePath(instance, obj->mutable_terrain_constant(), fieldName, end);
	}
	if(obj->has_color_constant()){
		return ResolvePath(instance, obj->mutable_color_constant(), fieldName, end);
	}
	if(obj->has_objectpath_constant()){
		return ResolvePath(instance, obj->mutable_objectpath_constant(), fieldName, end);
	}
	assert(false);
	return nullptr;
}
google::protobuf::Message *ResolvePath(GameInstance* instance, IvionOnline::List_Method *obj, const StringIter& fieldName, const StringIter& end) {
	const auto& nextField = fieldName + 1;
	if (auto optIndex = TryParse(*fieldName); optIndex.has_value()) {
		const int idx = optIndex.value();
		if(nextField == end){return obj->mutable_element(idx);}
				return ResolvePath(instance, obj->mutable_element(idx), nextField, end);
	} else {
		for(auto& element : *obj->mutable_element()){
			if(element.has_getlist() && element.getlist().name() == *fieldName){
				return ResolvePath(instance, element.mutable_getlist(), nextField, end);
			}
			if(element.has_filterdistance() && element.filterdistance().name() == *fieldName){
				return ResolvePath(instance, element.mutable_filterdistance(), nextField, end);
			}
			if(element.has_selectmultiple() && element.selectmultiple().name() == *fieldName){
				return ResolvePath(instance, element.mutable_selectmultiple(), nextField, end);
			}
			if(element.has_selectexactlyone() && element.selectexactlyone().name() == *fieldName){
				return ResolvePath(instance, element.mutable_selectexactlyone(), nextField, end);
			}
			if(element.has_assertcontrolorheroic() && element.assertcontrolorheroic().name() == *fieldName){
				return ResolvePath(instance, element.mutable_assertcontrolorheroic(), nextField, end);
			}
			if(element.has_assertcontrollerhaspriority() && element.assertcontrollerhaspriority().name() == *fieldName){
				return ResolvePath(instance, element.mutable_assertcontrollerhaspriority(), nextField, end);
			}
			if(element.has_assertstackemptyorinstant() && element.assertstackemptyorinstant().name() == *fieldName){
				return ResolvePath(instance, element.mutable_assertstackemptyorinstant(), nextField, end);
			}
			if(element.has_reducecost() && element.reducecost().name() == *fieldName){
				return ResolvePath(instance, element.mutable_reducecost(), nextField, end);
			}
			if(element.has_paycost() && element.paycost().name() == *fieldName){
				return ResolvePath(instance, element.mutable_paycost(), nextField, end);
			}
			if(element.has_playgainresources() && element.playgainresources().name() == *fieldName){
				return ResolvePath(instance, element.mutable_playgainresources(), nextField, end);
			}
			if(element.has_refundcost() && element.refundcost().name() == *fieldName){
				return ResolvePath(instance, element.mutable_refundcost(), nextField, end);
			}
			if(element.has_gainactions() && element.gainactions().name() == *fieldName){
				return ResolvePath(instance, element.mutable_gainactions(), nextField, end);
			}
			if(element.has_gainpower() && element.gainpower().name() == *fieldName){
				return ResolvePath(instance, element.mutable_gainpower(), nextField, end);
			}
			if(element.has_move() && element.move().name() == *fieldName){
				return ResolvePath(instance, element.mutable_move(), nextField, end);
			}
			if(element.has_travel() && element.travel().name() == *fieldName){
				return ResolvePath(instance, element.mutable_travel(), nextField, end);
			}
			if(element.has_damage() && element.damage().name() == *fieldName){
				return ResolvePath(instance, element.mutable_damage(), nextField, end);
			}
			if(element.has_boolean_constant() && element.boolean_constant().name() == *fieldName){
				return ResolvePath(instance, element.mutable_boolean_constant(), nextField, end);
			}
			if(element.has_integer_constant() && element.integer_constant().name() == *fieldName){
				return ResolvePath(instance, element.mutable_integer_constant(), nextField, end);
			}
			if(element.has_vec2i_constant() && element.vec2i_constant().name() == *fieldName){
				return ResolvePath(instance, element.mutable_vec2i_constant(), nextField, end);
			}
			if(element.has_terrain_constant() && element.terrain_constant().name() == *fieldName){
				return ResolvePath(instance, element.mutable_terrain_constant(), nextField, end);
			}
			if(element.has_color_constant() && element.color_constant().name() == *fieldName){
				return ResolvePath(instance, element.mutable_color_constant(), nextField, end);
			}
			if(element.has_objectpath_constant() && element.objectpath_constant().name() == *fieldName){
				return ResolvePath(instance, element.mutable_objectpath_constant(), nextField, end);
			}
		}
	}
	assert(false);
	return nullptr;
}

} // namespace IO