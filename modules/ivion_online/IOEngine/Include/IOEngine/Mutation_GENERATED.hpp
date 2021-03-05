#pragma once

#include <GRPC/GameState.pb.h>
#include <IOEngine/Vec2i.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO {

void Apply_Boolean_Set_Mutation(GameInstance* instance,  IvionOnline::Boolean_Set_Mutation* mutation);
void Apply_List_Boolean_Insert_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Insert_Mutation* mutation);
void Apply_List_Boolean_Remove_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Remove_Mutation* mutation);
void Revert_Boolean_Set_Mutation(GameInstance* instance, IvionOnline::Boolean_Set_Mutation* mutation);
void Revert_List_Boolean_Insert_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Insert_Mutation* mutation);
void Revert_List_Boolean_Remove_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Remove_Mutation* mutation);

void Apply_Integer_Set_Mutation(GameInstance* instance,  IvionOnline::Integer_Set_Mutation* mutation);
void Apply_List_Integer_Insert_Mutation(GameInstance* instance, IvionOnline::List_Integer_Insert_Mutation* mutation);
void Apply_List_Integer_Remove_Mutation(GameInstance* instance, IvionOnline::List_Integer_Remove_Mutation* mutation);
void Revert_Integer_Set_Mutation(GameInstance* instance, IvionOnline::Integer_Set_Mutation* mutation);
void Revert_List_Integer_Insert_Mutation(GameInstance* instance, IvionOnline::List_Integer_Insert_Mutation* mutation);
void Revert_List_Integer_Remove_Mutation(GameInstance* instance, IvionOnline::List_Integer_Remove_Mutation* mutation);

void Apply_Vec2i_Set_Mutation(GameInstance* instance,  IvionOnline::Vec2i_Set_Mutation* mutation);
void Apply_List_Vec2i_Insert_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Insert_Mutation* mutation);
void Apply_List_Vec2i_Remove_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Remove_Mutation* mutation);
void Revert_Vec2i_Set_Mutation(GameInstance* instance, IvionOnline::Vec2i_Set_Mutation* mutation);
void Revert_List_Vec2i_Insert_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Insert_Mutation* mutation);
void Revert_List_Vec2i_Remove_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Remove_Mutation* mutation);

void Apply_Terrain_Set_Mutation(GameInstance* instance,  IvionOnline::Terrain_Set_Mutation* mutation);
void Apply_List_Terrain_Insert_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Insert_Mutation* mutation);
void Apply_List_Terrain_Remove_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Remove_Mutation* mutation);
void Revert_Terrain_Set_Mutation(GameInstance* instance, IvionOnline::Terrain_Set_Mutation* mutation);
void Revert_List_Terrain_Insert_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Insert_Mutation* mutation);
void Revert_List_Terrain_Remove_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Remove_Mutation* mutation);

void Apply_Color_Set_Mutation(GameInstance* instance,  IvionOnline::Color_Set_Mutation* mutation);
void Apply_List_Color_Insert_Mutation(GameInstance* instance, IvionOnline::List_Color_Insert_Mutation* mutation);
void Apply_List_Color_Remove_Mutation(GameInstance* instance, IvionOnline::List_Color_Remove_Mutation* mutation);
void Revert_Color_Set_Mutation(GameInstance* instance, IvionOnline::Color_Set_Mutation* mutation);
void Revert_List_Color_Insert_Mutation(GameInstance* instance, IvionOnline::List_Color_Insert_Mutation* mutation);
void Revert_List_Color_Remove_Mutation(GameInstance* instance, IvionOnline::List_Color_Remove_Mutation* mutation);

void Apply_ObjectPath_Set_Mutation(GameInstance* instance,  IvionOnline::ObjectPath_Set_Mutation* mutation);
void Apply_List_ObjectPath_Insert_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Insert_Mutation* mutation);
void Apply_List_ObjectPath_Remove_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Remove_Mutation* mutation);
void Revert_ObjectPath_Set_Mutation(GameInstance* instance, IvionOnline::ObjectPath_Set_Mutation* mutation);
void Revert_List_ObjectPath_Insert_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Insert_Mutation* mutation);
void Revert_List_ObjectPath_Remove_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Remove_Mutation* mutation);

void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Boolean* target);
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Boolean* value);
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Boolean* value);
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Integer* target);
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Integer* value);
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Integer* value);
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Vec2i* target);
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Vec2i* value);
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Vec2i* value);
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Terrain* target);
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Terrain* value);
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Terrain* value);
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Color* target);
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Color* value);
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Color* value);
void Set(GameInstance* instance, IvionOnline::Integer* object, int value);
void Set(GameInstance* instance, IvionOnline::Integer* object, bool value);
void Set(GameInstance* instance, IvionOnline::Vec2i* object, const Vec2i& value);
void Set(GameInstance* instance, IvionOnline::Terrain* object, IvionOnline::Terrain::Terrain_Type value);
void Set(GameInstance* instance, IvionOnline::Boolean* object, IvionOnline::Boolean* value);
void Append(GameInstance* instance, IvionOnline::List_Boolean* object, IvionOnline::Boolean* value);
void Remove(GameInstance* instance, IvionOnline::List_Boolean* object, IvionOnline::Boolean* value);
void Set(GameInstance* instance, IvionOnline::Integer* object, IvionOnline::Integer* value);
void Append(GameInstance* instance, IvionOnline::List_Integer* object, IvionOnline::Integer* value);
void Remove(GameInstance* instance, IvionOnline::List_Integer* object, IvionOnline::Integer* value);
void Set(GameInstance* instance, IvionOnline::Vec2i* object, IvionOnline::Vec2i* value);
void Append(GameInstance* instance, IvionOnline::List_Vec2i* object, IvionOnline::Vec2i* value);
void Remove(GameInstance* instance, IvionOnline::List_Vec2i* object, IvionOnline::Vec2i* value);
void Set(GameInstance* instance, IvionOnline::Terrain* object, IvionOnline::Terrain* value);
void Append(GameInstance* instance, IvionOnline::List_Terrain* object, IvionOnline::Terrain* value);
void Remove(GameInstance* instance, IvionOnline::List_Terrain* object, IvionOnline::Terrain* value);
void Set(GameInstance* instance, IvionOnline::Color* object, IvionOnline::Color* value);
void Append(GameInstance* instance, IvionOnline::List_Color* object, IvionOnline::Color* value);
void Remove(GameInstance* instance, IvionOnline::List_Color* object, IvionOnline::Color* value);

} // namespace IO