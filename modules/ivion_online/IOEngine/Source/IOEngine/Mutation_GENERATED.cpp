#include <IOEngine/Mutation_GENERATED.hpp>
#include <IOEngine/Util.hpp>
#include <IOEngine/Types_GENERATED.hpp>

namespace IO {

void Apply_Boolean_Set_Mutation(GameInstance* instance,  IvionOnline::Boolean_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Boolean* object = ResolvePath<IvionOnline::Boolean>(instance, mutation->mutable_path());
    assert(object);
	object->set_value(mutation->newvalue().value());
}
void Apply_List_Boolean_Insert_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Boolean *list = ResolvePath<IvionOnline::List_Boolean>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Boolean_Remove_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Boolean *list = ResolvePath<IvionOnline::List_Boolean>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Boolean_Set_Mutation(GameInstance* instance, IvionOnline::Boolean_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Boolean* object = ResolvePath<IvionOnline::Boolean>(instance, mutation->mutable_path());
    assert(object);
	object->set_value(mutation->oldvalue().value());
}
void Revert_List_Boolean_Insert_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Boolean *list = ResolvePath<IvionOnline::List_Boolean>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Boolean_Remove_Mutation(GameInstance* instance, IvionOnline::List_Boolean_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Boolean *list = ResolvePath<IvionOnline::List_Boolean>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Integer_Set_Mutation(GameInstance* instance,  IvionOnline::Integer_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Integer* object = ResolvePath<IvionOnline::Integer>(instance, mutation->mutable_path());
    assert(object);
	object->set_value(mutation->newvalue().value());
}
void Apply_List_Integer_Insert_Mutation(GameInstance* instance, IvionOnline::List_Integer_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Integer *list = ResolvePath<IvionOnline::List_Integer>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Integer_Remove_Mutation(GameInstance* instance, IvionOnline::List_Integer_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Integer *list = ResolvePath<IvionOnline::List_Integer>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Integer_Set_Mutation(GameInstance* instance, IvionOnline::Integer_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Integer* object = ResolvePath<IvionOnline::Integer>(instance, mutation->mutable_path());
    assert(object);
	object->set_value(mutation->oldvalue().value());
}
void Revert_List_Integer_Insert_Mutation(GameInstance* instance, IvionOnline::List_Integer_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Integer *list = ResolvePath<IvionOnline::List_Integer>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Integer_Remove_Mutation(GameInstance* instance, IvionOnline::List_Integer_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Integer *list = ResolvePath<IvionOnline::List_Integer>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Vec2i_Set_Mutation(GameInstance* instance,  IvionOnline::Vec2i_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Vec2i* object = ResolvePath<IvionOnline::Vec2i>(instance, mutation->mutable_path());
    assert(object);
	object->set_x(mutation->newvalue().x());
	object->set_y(mutation->newvalue().y());
}
void Apply_List_Vec2i_Insert_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Vec2i *list = ResolvePath<IvionOnline::List_Vec2i>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Vec2i_Remove_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Vec2i *list = ResolvePath<IvionOnline::List_Vec2i>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Vec2i_Set_Mutation(GameInstance* instance, IvionOnline::Vec2i_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Vec2i* object = ResolvePath<IvionOnline::Vec2i>(instance, mutation->mutable_path());
    assert(object);
	object->set_x(mutation->oldvalue().x());
	object->set_y(mutation->oldvalue().y());
}
void Revert_List_Vec2i_Insert_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Vec2i *list = ResolvePath<IvionOnline::List_Vec2i>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Vec2i_Remove_Mutation(GameInstance* instance, IvionOnline::List_Vec2i_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Vec2i *list = ResolvePath<IvionOnline::List_Vec2i>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Terrain_Set_Mutation(GameInstance* instance,  IvionOnline::Terrain_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Terrain* object = ResolvePath<IvionOnline::Terrain>(instance, mutation->mutable_path());
    assert(object);
	object->set_value(mutation->newvalue().value());
}
void Apply_List_Terrain_Insert_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Terrain *list = ResolvePath<IvionOnline::List_Terrain>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Terrain_Remove_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Terrain *list = ResolvePath<IvionOnline::List_Terrain>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Terrain_Set_Mutation(GameInstance* instance, IvionOnline::Terrain_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Terrain* object = ResolvePath<IvionOnline::Terrain>(instance, mutation->mutable_path());
    assert(object);
	object->set_value(mutation->oldvalue().value());
}
void Revert_List_Terrain_Insert_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Terrain *list = ResolvePath<IvionOnline::List_Terrain>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Terrain_Remove_Mutation(GameInstance* instance, IvionOnline::List_Terrain_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Terrain *list = ResolvePath<IvionOnline::List_Terrain>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_Color_Set_Mutation(GameInstance* instance,  IvionOnline::Color_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Color* object = ResolvePath<IvionOnline::Color>(instance, mutation->mutable_path());
    assert(object);
	object->set_value(mutation->newvalue().value());
}
void Apply_List_Color_Insert_Mutation(GameInstance* instance, IvionOnline::List_Color_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Color *list = ResolvePath<IvionOnline::List_Color>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_Color_Remove_Mutation(GameInstance* instance, IvionOnline::List_Color_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Color *list = ResolvePath<IvionOnline::List_Color>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_Color_Set_Mutation(GameInstance* instance, IvionOnline::Color_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::Color* object = ResolvePath<IvionOnline::Color>(instance, mutation->mutable_path());
    assert(object);
	object->set_value(mutation->oldvalue().value());
}
void Revert_List_Color_Insert_Mutation(GameInstance* instance, IvionOnline::List_Color_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Color *list = ResolvePath<IvionOnline::List_Color>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_Color_Remove_Mutation(GameInstance* instance, IvionOnline::List_Color_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_Color *list = ResolvePath<IvionOnline::List_Color>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}

void Apply_ObjectPath_Set_Mutation(GameInstance* instance,  IvionOnline::ObjectPath_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::ObjectPath* object = ResolvePath<IvionOnline::ObjectPath>(instance, mutation->mutable_path());
    assert(object);
	CopyObjectPathNoMutation(object, mutation->newvalue());
}
void Apply_List_ObjectPath_Insert_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_ObjectPath *list = ResolvePath<IvionOnline::List_ObjectPath>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->newvalue());
	} else {
		list->add_element()->CopyFrom(mutation->newvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Apply_List_ObjectPath_Remove_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_ObjectPath *list = ResolvePath<IvionOnline::List_ObjectPath>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
    }
}
void Revert_ObjectPath_Set_Mutation(GameInstance* instance, IvionOnline::ObjectPath_Set_Mutation* mutation){
	assert(mutation);
    IvionOnline::ObjectPath* object = ResolvePath<IvionOnline::ObjectPath>(instance, mutation->mutable_path());
    assert(object);
	CopyObjectPathNoMutation(object, mutation->oldvalue());
}
void Revert_List_ObjectPath_Insert_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Insert_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_ObjectPath *list = ResolvePath<IvionOnline::List_ObjectPath>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size() - 1;
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->mutable_element()->RemoveLast();
	} else {
		list->mutable_element()->SwapElements(mutation->index(), size);
		list->mutable_element()->RemoveLast();
	}
}
void Revert_List_ObjectPath_Remove_Mutation(GameInstance* instance, IvionOnline::List_ObjectPath_Remove_Mutation* mutation){
	assert(mutation);
    IvionOnline::List_ObjectPath *list = ResolvePath<IvionOnline::List_ObjectPath>(instance, mutation->mutable_path());
	assert(list);
	const int size = list->element_size();
	assert(0 <= mutation->index());
	assert(mutation->index() <= size);
	if (size == mutation->index()) {
		list->add_element()->CopyFrom(mutation->oldvalue());
	} else {
		list->add_element()->CopyFrom(mutation->oldvalue());
		list->mutable_element()->SwapElements(mutation->index(), size);
	}
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::ObjectPath* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->mutable_path()->CopyFrom(value->path());
	newValue->set_object_type(value->object_type());
	mutation->mutable_oldvalue()->mutable_path()->CopyFrom(object->path());
	mutation->mutable_oldvalue()->set_object_type(object->object_type());
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::ObjectPath* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(value->object_type());
	newValue->mutable_path()->CopyFrom(value->path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_ObjectPath* object, int index) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_remove_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	assert(index >= 0);
	assert(index < object->element_size());
	mutation->mutable_oldvalue()->CopyFrom(object->element().Get(index));
	mutation->set_index(index);
	Apply_List_ObjectPath_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Boolean* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Boolean* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_BOOLEAN);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Integer* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Integer* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_INTEGER);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Vec2i* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Vec2i* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_VEC2I);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Terrain* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Terrain* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_TERRAIN);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Color* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Color* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_COLOR);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Player* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Player* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_PLAYER);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Team* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Team* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_TEAM);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Card* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Card* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_CARD);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::CardData* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::CardData* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_CARDDATA);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::ObjectPath* object, const IvionOnline::Tile* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_objectpath_set_mutation();
	mutation->mutable_path()->CopyFrom(*object);
	mutation->mutable_newvalue()->CopyFrom(value->abspath());
	mutation->mutable_oldvalue()->CopyFrom(*object);
	Apply_ObjectPath_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_ObjectPath* object, const IvionOnline::Tile* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_objectpath_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_object_type(IvionOnline::ObjectType::TYPE_TILE);
	newValue->mutable_path()->CopyFrom(value->abspath().path());
	mutation->set_index(object->element_size());
	Apply_List_ObjectPath_Insert_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Integer* object, int value) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_integer_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_value(value);
	mutation->mutable_oldvalue()->set_value(object->value());
	Apply_Integer_Set_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Boolean* object, bool value) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_boolean_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_value(value);
	mutation->mutable_oldvalue()->set_value(object->value());
	Apply_Boolean_Set_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Vec2i* object, const Vec2i& value) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_vec2i_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_x(value.x);
	mutation->mutable_newvalue()->set_y(value.y);
	mutation->mutable_oldvalue()->set_x(object->x());
	mutation->mutable_oldvalue()->set_y(object->y());
	Apply_Vec2i_Set_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Terrain* object, IvionOnline::Terrain::Terrain_Type value) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_terrain_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_value(value);
	mutation->mutable_oldvalue()->set_value(object->value());
	Apply_Terrain_Set_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Boolean* object, const IvionOnline::Boolean* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_boolean_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_value(value->value());
	mutation->mutable_oldvalue()->set_value(object->value());
	Apply_Boolean_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Boolean* object, const IvionOnline::Boolean* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_boolean_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_value(value->value());
	mutation->set_index(object->element_size());
	Apply_List_Boolean_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Boolean* object, int index) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_boolean_remove_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	assert(index >= 0);
	assert(index < object->element_size());
	mutation->mutable_oldvalue()->CopyFrom(object->element().Get(index));
	mutation->set_index(index);
	Apply_List_Boolean_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Integer* object, const IvionOnline::Integer* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_integer_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_value(value->value());
	mutation->mutable_oldvalue()->set_value(object->value());
	Apply_Integer_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Integer* object, const IvionOnline::Integer* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_integer_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_value(value->value());
	mutation->set_index(object->element_size());
	Apply_List_Integer_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Integer* object, int index) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_integer_remove_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	assert(index >= 0);
	assert(index < object->element_size());
	mutation->mutable_oldvalue()->CopyFrom(object->element().Get(index));
	mutation->set_index(index);
	Apply_List_Integer_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Vec2i* object, const IvionOnline::Vec2i* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_vec2i_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_x(value->x());
	mutation->mutable_oldvalue()->set_x(object->x());
	mutation->mutable_newvalue()->set_y(value->y());
	mutation->mutable_oldvalue()->set_y(object->y());
	Apply_Vec2i_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Vec2i* object, const IvionOnline::Vec2i* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_vec2i_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_x(value->x());
	newValue->set_y(value->y());
	mutation->set_index(object->element_size());
	Apply_List_Vec2i_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Vec2i* object, int index) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_vec2i_remove_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	assert(index >= 0);
	assert(index < object->element_size());
	mutation->mutable_oldvalue()->CopyFrom(object->element().Get(index));
	mutation->set_index(index);
	Apply_List_Vec2i_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Terrain* object, const IvionOnline::Terrain* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_terrain_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_value(value->value());
	mutation->mutable_oldvalue()->set_value(object->value());
	Apply_Terrain_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Terrain* object, const IvionOnline::Terrain* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_terrain_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_value(value->value());
	mutation->set_index(object->element_size());
	Apply_List_Terrain_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Terrain* object, int index) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_terrain_remove_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	assert(index >= 0);
	assert(index < object->element_size());
	mutation->mutable_oldvalue()->CopyFrom(object->element().Get(index));
	mutation->set_index(index);
	Apply_List_Terrain_Remove_Mutation(instance, mutation);
}
void Set(GameInstance* instance, IvionOnline::Color* object, const IvionOnline::Color* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_color_set_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	mutation->mutable_newvalue()->set_value(value->value());
	mutation->mutable_oldvalue()->set_value(object->value());
	Apply_Color_Set_Mutation(instance, mutation);
}
void Append(GameInstance* instance, IvionOnline::List_Color* object, const IvionOnline::Color* value) {
	assert(ObjectIsValid(object));
	assert(ObjectIsValid(value));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_color_insert_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	auto* newValue = Initialize(mutation->mutable_newvalue(), object->abspath(), value->name());
	newValue->set_value(value->value());
	mutation->set_index(object->element_size());
	Apply_List_Color_Insert_Mutation(instance, mutation);
}
void Remove(GameInstance* instance, IvionOnline::List_Color* object, int index) {
	assert(ObjectIsValid(object));
	auto* mutation = instance->currentHistory_->add_mutations()->mutable_list_color_remove_mutation();
	mutation->mutable_path()->CopyFrom(object->abspath());
	assert(index >= 0);
	assert(index < object->element_size());
	mutation->mutable_oldvalue()->CopyFrom(object->element().Get(index));
	mutation->set_index(index);
	Apply_List_Color_Remove_Mutation(instance, mutation);
}

} // namespace IO