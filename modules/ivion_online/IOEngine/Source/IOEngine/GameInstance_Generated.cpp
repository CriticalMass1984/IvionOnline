#include <IOEngine/GameInstance.hpp>

#include <cassert>


namespace IO {
void Apply_ObjectPath_Set_Mutation(GameInstance* instance,  IvionOnline::ObjectPath_Set_Mutation* mutation){
    IvionOnline::ObjectPath* object = dynamic_cast<IvionOnline::ObjectPath*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->newvalue());
}
void Apply_List_ObjectPath_Insert_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Insert_Mutation* mutation){
    IvionOnline::List_ObjectPath *list = dynamic_cast<IvionOnline::List_ObjectPath *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_ObjectPath_Remove_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Remove_Mutation* mutation){
    IvionOnline::List_ObjectPath *list = dynamic_cast<IvionOnline::List_ObjectPath *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_ObjectPath_Set_Mutation(GameInstance* instance, IvionOnline::ObjectPath_Set_Mutation* mutation){
    IvionOnline::ObjectPath* object = dynamic_cast<IvionOnline::ObjectPath*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->oldvalue());
}
void Revert_List_ObjectPath_Insert_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Insert_Mutation* mutation){
    IvionOnline::List_ObjectPath *list = dynamic_cast<IvionOnline::List_ObjectPath *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_ObjectPath_Remove_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Remove_Mutation* mutation){
    IvionOnline::List_ObjectPath *list = dynamic_cast<IvionOnline::List_ObjectPath *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Boolean_Set_Mutation(GameInstance* instance,  IvionOnline::Boolean_Set_Mutation* mutation){
    IvionOnline::Boolean* object = dynamic_cast<IvionOnline::Boolean*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->newvalue());
}
void Apply_List_Boolean_Insert_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Insert_Mutation* mutation){
    IvionOnline::List_Boolean *list = dynamic_cast<IvionOnline::List_Boolean *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Boolean_Remove_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Remove_Mutation* mutation){
    IvionOnline::List_Boolean *list = dynamic_cast<IvionOnline::List_Boolean *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Boolean_Set_Mutation(GameInstance* instance, IvionOnline::Boolean_Set_Mutation* mutation){
    IvionOnline::Boolean* object = dynamic_cast<IvionOnline::Boolean*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->oldvalue());
}
void Revert_List_Boolean_Insert_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Insert_Mutation* mutation){
    IvionOnline::List_Boolean *list = dynamic_cast<IvionOnline::List_Boolean *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Boolean_Remove_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Remove_Mutation* mutation){
    IvionOnline::List_Boolean *list = dynamic_cast<IvionOnline::List_Boolean *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Integer_Set_Mutation(GameInstance* instance,  IvionOnline::Integer_Set_Mutation* mutation){
    IvionOnline::Integer* object = dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->newvalue());
}
void Apply_List_Integer_Insert_Mutation(GameInstance* instance, IvionOnline::List_Integer_Insert_Mutation* mutation){
    IvionOnline::List_Integer *list = dynamic_cast<IvionOnline::List_Integer *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Integer_Remove_Mutation(GameInstance* instance, IvionOnline::List_Integer_Remove_Mutation* mutation){
    IvionOnline::List_Integer *list = dynamic_cast<IvionOnline::List_Integer *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Integer_Set_Mutation(GameInstance* instance, IvionOnline::Integer_Set_Mutation* mutation){
    IvionOnline::Integer* object = dynamic_cast<IvionOnline::Integer*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->oldvalue());
}
void Revert_List_Integer_Insert_Mutation(GameInstance* instance, IvionOnline::List_Integer_Insert_Mutation* mutation){
    IvionOnline::List_Integer *list = dynamic_cast<IvionOnline::List_Integer *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Integer_Remove_Mutation(GameInstance* instance, IvionOnline::List_Integer_Remove_Mutation* mutation){
    IvionOnline::List_Integer *list = dynamic_cast<IvionOnline::List_Integer *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Vec2i_Set_Mutation(GameInstance* instance,  IvionOnline::Vec2i_Set_Mutation* mutation){
    IvionOnline::Vec2i* object = dynamic_cast<IvionOnline::Vec2i*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->newvalue());
}
void Apply_List_Vec2i_Insert_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Insert_Mutation* mutation){
    IvionOnline::List_Vec2i *list = dynamic_cast<IvionOnline::List_Vec2i *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Vec2i_Remove_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Remove_Mutation* mutation){
    IvionOnline::List_Vec2i *list = dynamic_cast<IvionOnline::List_Vec2i *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Vec2i_Set_Mutation(GameInstance* instance, IvionOnline::Vec2i_Set_Mutation* mutation){
    IvionOnline::Vec2i* object = dynamic_cast<IvionOnline::Vec2i*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->oldvalue());
}
void Revert_List_Vec2i_Insert_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Insert_Mutation* mutation){
    IvionOnline::List_Vec2i *list = dynamic_cast<IvionOnline::List_Vec2i *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Vec2i_Remove_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Remove_Mutation* mutation){
    IvionOnline::List_Vec2i *list = dynamic_cast<IvionOnline::List_Vec2i *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Terrain_Set_Mutation(GameInstance* instance,  IvionOnline::Terrain_Set_Mutation* mutation){
    IvionOnline::Terrain* object = dynamic_cast<IvionOnline::Terrain*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->newvalue());
}
void Apply_List_Terrain_Insert_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Insert_Mutation* mutation){
    IvionOnline::List_Terrain *list = dynamic_cast<IvionOnline::List_Terrain *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Terrain_Remove_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Remove_Mutation* mutation){
    IvionOnline::List_Terrain *list = dynamic_cast<IvionOnline::List_Terrain *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Terrain_Set_Mutation(GameInstance* instance, IvionOnline::Terrain_Set_Mutation* mutation){
    IvionOnline::Terrain* object = dynamic_cast<IvionOnline::Terrain*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->oldvalue());
}
void Revert_List_Terrain_Insert_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Insert_Mutation* mutation){
    IvionOnline::List_Terrain *list = dynamic_cast<IvionOnline::List_Terrain *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Terrain_Remove_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Remove_Mutation* mutation){
    IvionOnline::List_Terrain *list = dynamic_cast<IvionOnline::List_Terrain *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Color_Set_Mutation(GameInstance* instance,  IvionOnline::Color_Set_Mutation* mutation){
    IvionOnline::Color* object = dynamic_cast<IvionOnline::Color*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->newvalue());
}
void Apply_List_Color_Insert_Mutation(GameInstance* instance, IvionOnline::List_Color_Insert_Mutation* mutation){
    IvionOnline::List_Color *list = dynamic_cast<IvionOnline::List_Color *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Color_Remove_Mutation(GameInstance* instance, IvionOnline::List_Color_Remove_Mutation* mutation){
    IvionOnline::List_Color *list = dynamic_cast<IvionOnline::List_Color *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Color_Set_Mutation(GameInstance* instance, IvionOnline::Color_Set_Mutation* mutation){
    IvionOnline::Color* object = dynamic_cast<IvionOnline::Color*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->oldvalue());
}
void Revert_List_Color_Insert_Mutation(GameInstance* instance, IvionOnline::List_Color_Insert_Mutation* mutation){
    IvionOnline::List_Color *list = dynamic_cast<IvionOnline::List_Color *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size() - 1;
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Color_Remove_Mutation(GameInstance* instance, IvionOnline::List_Color_Remove_Mutation* mutation){
    IvionOnline::List_Color *list = dynamic_cast<IvionOnline::List_Color *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
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
	}
}

} // namespace IO