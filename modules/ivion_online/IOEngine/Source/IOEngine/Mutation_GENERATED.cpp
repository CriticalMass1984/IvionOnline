#include <IOEngine/Mutation_GENERATED.hpp>
#include <IOEngine/Util.hpp>

namespace IO {

void Apply_Boolean_Set_Mutation(GameInstance* instance,  IvionOnline::Boolean_Set_Mutation* mutation){
    IvionOnline::Boolean* object = dynamic_cast<IvionOnline::Boolean*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->newvalue());
}
void Apply_List_Boolean_Insert_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Insert_Mutation* mutation){
    IvionOnline::List_Boolean *list = dynamic_cast<IvionOnline::List_Boolean *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_ObjectPath_Set_Mutation(GameInstance* instance,  IvionOnline::ObjectPath_Set_Mutation* mutation){
    IvionOnline::ObjectPath* object = dynamic_cast<IvionOnline::ObjectPath*>(instance->ResolvePath(mutation->mutable_path()));
    assert(object);
    object->CopyFrom(mutation->newvalue());
}
void Apply_List_ObjectPath_Insert_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Insert_Mutation* mutation){
    IvionOnline::List_ObjectPath *list = dynamic_cast<IvionOnline::List_ObjectPath *>(instance->ResolvePath(mutation->mutable_path()));
	const int size = list->element_size();
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
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
	assert(0 < mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Boolean* target) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(target->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Boolean* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Boolean* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(value->abspath());
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_ObjectPath_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Integer* target) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(target->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Integer* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Integer* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(value->abspath());
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_ObjectPath_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Vec2i* target) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(target->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Vec2i* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Vec2i* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(value->abspath());
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_ObjectPath_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Terrain* target) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(target->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Terrain* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Terrain* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(value->abspath());
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_ObjectPath_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Color* target) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(target->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Color* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, IvionOnline::Color* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(value->abspath());
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_ObjectPath_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Integer* object, int value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_integer_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*object);
	mutation->mutable_newvalue()->set_value(value);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Integer_Set_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Integer* object, bool value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_boolean_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*object);
	mutation->mutable_newvalue()->set_value(value);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Boolean_Set_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Vec2i* object, const Vec2i& value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_vec2i_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*object);
	mutation->mutable_newvalue()->set_x(value.x);
	mutation->mutable_newvalue()->set_y(value.y);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Vec2i_Set_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Terrain* object, IvionOnline::Terrain::Terrain_Type value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_terrain_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*object);
	mutation->mutable_newvalue()->set_value(value);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Terrain_Set_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Boolean* object, IvionOnline::Boolean* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_boolean_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Boolean_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Boolean* object, IvionOnline::Boolean* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_boolean_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_newvalue()->mutable_abspath()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->mutable_abspath()->add_path(value->name());
	mutation->set_index(object->element_size());
	Apply_List_Boolean_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Boolean* object, IvionOnline::Boolean* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_boolean_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(*value);
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_Boolean_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Integer* object, IvionOnline::Integer* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_integer_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Integer_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Integer* object, IvionOnline::Integer* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_integer_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_newvalue()->mutable_abspath()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->mutable_abspath()->add_path(value->name());
	mutation->set_index(object->element_size());
	Apply_List_Integer_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Integer* object, IvionOnline::Integer* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_integer_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(*value);
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_Integer_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Vec2i* object, IvionOnline::Vec2i* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_vec2i_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Vec2i_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Vec2i* object, IvionOnline::Vec2i* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_vec2i_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_newvalue()->mutable_abspath()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->mutable_abspath()->add_path(value->name());
	mutation->set_index(object->element_size());
	Apply_List_Vec2i_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Vec2i* object, IvionOnline::Vec2i* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_vec2i_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(*value);
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_Vec2i_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Terrain* object, IvionOnline::Terrain* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_terrain_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Terrain_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Terrain* object, IvionOnline::Terrain* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_terrain_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_newvalue()->mutable_abspath()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->mutable_abspath()->add_path(value->name());
	mutation->set_index(object->element_size());
	Apply_List_Terrain_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Terrain* object, IvionOnline::Terrain* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_terrain_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(*value);
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_Terrain_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Color* object, IvionOnline::Color* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_color_set_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_Color_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Color* object, IvionOnline::Color* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_color_insert_mutation();
	mutation->mutable_newvalue()->CopyFrom(*value);
	mutation->mutable_newvalue()->mutable_abspath()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->mutable_abspath()->add_path(value->name());
	mutation->set_index(object->element_size());
	Apply_List_Color_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Color* object, IvionOnline::Color* value) {
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_color_remove_mutation();
	mutation->mutable_oldvalue()->CopyFrom(*value);
	mutation->set_index(GetElementIndex(object->mutable_element(), value));
	Apply_List_Color_Remove_Mutation(instance, mutation);
}

} // namespace IO