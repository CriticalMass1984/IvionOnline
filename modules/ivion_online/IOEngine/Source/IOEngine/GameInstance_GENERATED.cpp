#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Mutation_GENERATED.hpp>

namespace IO {

void GameInstance::ApplyMutation(IvionOnline::Mutation* mutation){
	if(mutation->has_boolean_set_mutation()){
		Apply_Boolean_Set_Mutation(this, mutation->mutable_boolean_set_mutation());
	} else if(mutation->has_list_boolean_insert_mutation()){
		Apply_List_Boolean_Insert_Mutation(this, mutation->mutable_list_boolean_insert_mutation());
	} else if(mutation->has_list_boolean_remove_mutation()){
		Apply_List_Boolean_Remove_Mutation(this, mutation->mutable_list_boolean_remove_mutation());
	} else if(mutation->has_integer_set_mutation()){
		Apply_Integer_Set_Mutation(this, mutation->mutable_integer_set_mutation());
	} else if(mutation->has_list_integer_insert_mutation()){
		Apply_List_Integer_Insert_Mutation(this, mutation->mutable_list_integer_insert_mutation());
	} else if(mutation->has_list_integer_remove_mutation()){
		Apply_List_Integer_Remove_Mutation(this, mutation->mutable_list_integer_remove_mutation());
	} else if(mutation->has_vec2i_set_mutation()){
		Apply_Vec2i_Set_Mutation(this, mutation->mutable_vec2i_set_mutation());
	} else if(mutation->has_list_vec2i_insert_mutation()){
		Apply_List_Vec2i_Insert_Mutation(this, mutation->mutable_list_vec2i_insert_mutation());
	} else if(mutation->has_list_vec2i_remove_mutation()){
		Apply_List_Vec2i_Remove_Mutation(this, mutation->mutable_list_vec2i_remove_mutation());
	} else if(mutation->has_terrain_set_mutation()){
		Apply_Terrain_Set_Mutation(this, mutation->mutable_terrain_set_mutation());
	} else if(mutation->has_list_terrain_insert_mutation()){
		Apply_List_Terrain_Insert_Mutation(this, mutation->mutable_list_terrain_insert_mutation());
	} else if(mutation->has_list_terrain_remove_mutation()){
		Apply_List_Terrain_Remove_Mutation(this, mutation->mutable_list_terrain_remove_mutation());
	} else if(mutation->has_color_set_mutation()){
		Apply_Color_Set_Mutation(this, mutation->mutable_color_set_mutation());
	} else if(mutation->has_list_color_insert_mutation()){
		Apply_List_Color_Insert_Mutation(this, mutation->mutable_list_color_insert_mutation());
	} else if(mutation->has_list_color_remove_mutation()){
		Apply_List_Color_Remove_Mutation(this, mutation->mutable_list_color_remove_mutation());
	} else if(mutation->has_objectpath_set_mutation()){
		Apply_ObjectPath_Set_Mutation(this, mutation->mutable_objectpath_set_mutation());
	} else if(mutation->has_list_objectpath_insert_mutation()){
		Apply_List_ObjectPath_Insert_Mutation(this, mutation->mutable_list_objectpath_insert_mutation());
	} else if(mutation->has_list_objectpath_remove_mutation()){
		Apply_List_ObjectPath_Remove_Mutation(this, mutation->mutable_list_objectpath_remove_mutation());
	}
}

void GameInstance::RevertMutation(IvionOnline::Mutation* mutation){
	if(mutation->has_boolean_set_mutation()){
		Revert_Boolean_Set_Mutation(this, mutation->mutable_boolean_set_mutation());
	} else if(mutation->has_list_boolean_insert_mutation()){
		Revert_List_Boolean_Insert_Mutation(this, mutation->mutable_list_boolean_insert_mutation());
	} else if(mutation->has_list_boolean_remove_mutation()){
		Revert_List_Boolean_Remove_Mutation(this, mutation->mutable_list_boolean_remove_mutation());
	} else if(mutation->has_integer_set_mutation()){
		Revert_Integer_Set_Mutation(this, mutation->mutable_integer_set_mutation());
	} else if(mutation->has_list_integer_insert_mutation()){
		Revert_List_Integer_Insert_Mutation(this, mutation->mutable_list_integer_insert_mutation());
	} else if(mutation->has_list_integer_remove_mutation()){
		Revert_List_Integer_Remove_Mutation(this, mutation->mutable_list_integer_remove_mutation());
	} else if(mutation->has_vec2i_set_mutation()){
		Revert_Vec2i_Set_Mutation(this, mutation->mutable_vec2i_set_mutation());
	} else if(mutation->has_list_vec2i_insert_mutation()){
		Revert_List_Vec2i_Insert_Mutation(this, mutation->mutable_list_vec2i_insert_mutation());
	} else if(mutation->has_list_vec2i_remove_mutation()){
		Revert_List_Vec2i_Remove_Mutation(this, mutation->mutable_list_vec2i_remove_mutation());
	} else if(mutation->has_terrain_set_mutation()){
		Revert_Terrain_Set_Mutation(this, mutation->mutable_terrain_set_mutation());
	} else if(mutation->has_list_terrain_insert_mutation()){
		Revert_List_Terrain_Insert_Mutation(this, mutation->mutable_list_terrain_insert_mutation());
	} else if(mutation->has_list_terrain_remove_mutation()){
		Revert_List_Terrain_Remove_Mutation(this, mutation->mutable_list_terrain_remove_mutation());
	} else if(mutation->has_color_set_mutation()){
		Revert_Color_Set_Mutation(this, mutation->mutable_color_set_mutation());
	} else if(mutation->has_list_color_insert_mutation()){
		Revert_List_Color_Insert_Mutation(this, mutation->mutable_list_color_insert_mutation());
	} else if(mutation->has_list_color_remove_mutation()){
		Revert_List_Color_Remove_Mutation(this, mutation->mutable_list_color_remove_mutation());
	} else if(mutation->has_objectpath_set_mutation()){
		Revert_ObjectPath_Set_Mutation(this, mutation->mutable_objectpath_set_mutation());
	} else if(mutation->has_list_objectpath_insert_mutation()){
		Revert_List_ObjectPath_Insert_Mutation(this, mutation->mutable_list_objectpath_insert_mutation());
	} else if(mutation->has_list_objectpath_remove_mutation()){
		Revert_List_ObjectPath_Remove_Mutation(this, mutation->mutable_list_objectpath_remove_mutation());
	}
}

} // namespace IO