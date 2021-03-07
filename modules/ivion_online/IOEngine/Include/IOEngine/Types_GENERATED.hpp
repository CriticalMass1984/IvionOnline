#pragma once
#include <GRPC/GameState.pb.h>

namespace IO {
IvionOnline::List_ObjectPath* Initialize(IvionOnline::List_ObjectPath* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Method* Initialize(IvionOnline::List_Method* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Boolean* Initialize(IvionOnline::Boolean* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Boolean* Initialize(IvionOnline::List_Boolean* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Integer* Initialize(IvionOnline::Integer* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Integer* Initialize(IvionOnline::List_Integer* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Vec2i* Initialize(IvionOnline::Vec2i* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Vec2i* Initialize(IvionOnline::List_Vec2i* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Terrain* Initialize(IvionOnline::Terrain* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Terrain* Initialize(IvionOnline::List_Terrain* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Color* Initialize(IvionOnline::Color* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Color* Initialize(IvionOnline::List_Color* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::GetList* Initialize(IvionOnline::GetList* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::FilterDistance* Initialize(IvionOnline::FilterDistance* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::SelectMultiple* Initialize(IvionOnline::SelectMultiple* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::SelectExactlyOne* Initialize(IvionOnline::SelectExactlyOne* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::AssertControlOrHeroic* Initialize(IvionOnline::AssertControlOrHeroic* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::AssertControllerHasPriority* Initialize(IvionOnline::AssertControllerHasPriority* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::AssertStackEmptyOrInstant* Initialize(IvionOnline::AssertStackEmptyOrInstant* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::ReduceCost* Initialize(IvionOnline::ReduceCost* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::PayCost* Initialize(IvionOnline::PayCost* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::PlayGainResources* Initialize(IvionOnline::PlayGainResources* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::RefundCost* Initialize(IvionOnline::RefundCost* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::GainActions* Initialize(IvionOnline::GainActions* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::GainPower* Initialize(IvionOnline::GainPower* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Move* Initialize(IvionOnline::Move* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Travel* Initialize(IvionOnline::Travel* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Damage* Initialize(IvionOnline::Damage* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Boolean_Constant* Initialize(IvionOnline::Boolean_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Integer_Constant* Initialize(IvionOnline::Integer_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Vec2i_Constant* Initialize(IvionOnline::Vec2i_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Terrain_Constant* Initialize(IvionOnline::Terrain_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Color_Constant* Initialize(IvionOnline::Color_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::ObjectPath_Constant* Initialize(IvionOnline::ObjectPath_Constant* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Player* Initialize(IvionOnline::Player* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Player* Initialize(IvionOnline::List_Player* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Card* Initialize(IvionOnline::Card* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Card* Initialize(IvionOnline::List_Card* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::CardData* Initialize(IvionOnline::CardData* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_CardData* Initialize(IvionOnline::List_CardData* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::Tile* Initialize(IvionOnline::Tile* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_Tile* Initialize(IvionOnline::List_Tile* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::GameState* Initialize(IvionOnline::GameState* obj, const IvionOnline::ObjectPath& root, const std::string& name);
IvionOnline::List_GameState* Initialize(IvionOnline::List_GameState* obj, const IvionOnline::ObjectPath& root, const std::string& name);

} // namespace IO