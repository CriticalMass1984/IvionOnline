#pragma once
#include <GRPC/GameState.pb.h>

namespace IO {
void Initialize_List_ObjectPath(IvionOnline::List_ObjectPath* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Method(IvionOnline::List_Method* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_Boolean(IvionOnline::Boolean* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Boolean(IvionOnline::List_Boolean* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_Integer(IvionOnline::Integer* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Integer(IvionOnline::List_Integer* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_Vec2i(IvionOnline::Vec2i* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Vec2i(IvionOnline::List_Vec2i* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_Terrain(IvionOnline::Terrain* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Terrain(IvionOnline::List_Terrain* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_Color(IvionOnline::Color* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Color(IvionOnline::List_Color* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_Player(IvionOnline::Player* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Player(IvionOnline::List_Player* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_Card(IvionOnline::Card* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Card(IvionOnline::List_Card* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_CardData(IvionOnline::CardData* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_CardData(IvionOnline::List_CardData* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_Tile(IvionOnline::Tile* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_Tile(IvionOnline::List_Tile* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_GameState(IvionOnline::GameState* obj, const IvionOnline::ObjectPath& root, const std::string& name);
void Initialize_List_GameState(IvionOnline::List_GameState* obj, const IvionOnline::ObjectPath& root, const std::string& name);

} // namespace IO