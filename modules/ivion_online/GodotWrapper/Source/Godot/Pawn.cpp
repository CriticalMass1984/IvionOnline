#include <Godot/Pawn.hpp>

#include <scene/3d/mesh_instance_3d.h>
#include <scene/main/node.h>
#include <scene/main/window.h>
#include <scene/resources/packed_scene.h>

#include <IOEngine/GameInstance.hpp>
#include <cassert>

namespace godot {

void Pawn::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("static_get_card_material", "path"), &Card::StaticGetCardMaterial);
}

//engine api
bool Pawn::MarkAsOption(int index) {
	return this->IvionEntity::MarkAsOption(index);
}
bool Pawn::UnmarkAsOption() {
	return this->IvionEntity::UnmarkAsOption();
}
bool Pawn::SelectAsChoice() {
	return this->IvionEntity::SelectAsChoice();
}
//godot callbacks
void Pawn::LeftClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {}
void Pawn::RightClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {}
void Pawn::MouseEnter() {}
void Pawn::MouseLeave() {}
void Pawn::Init() {}
void Pawn::Update(float deltaTime) {}
void Pawn::Delete() {}

Pawn* Pawn::New(Pawn::Model m) {
	fprintf(stderr, "Player::LoadPawn\n");

	fprintf(stderr, "Loading pawn scene\n");
	Ref<PackedScene> scene = ResourceLoader::load("res://Pawn.tscn", "PackedScene");
	assert(scene->instance());
	auto* pawn = Object::cast_to<Pawn>(scene->instance());
	fprintf(stderr, "class: %s\n", String(scene->instance()->get_class_name()).utf8().get_data());
	assert(pawn);
	pawn->SetModel(m);

	// pawn_->set_transform(root->GetTile(start)->get_transform());
	return pawn;
}
void Pawn::SetModel(Model m) {
	fprintf(stderr, "Pawn::SetModel\n");
	Node *child = get_node_or_null(NodePath("Model"));
	ERR_FAIL_NULL(child);

	MeshInstance3D *meshInstance = Object::cast_to<MeshInstance3D>(child);
	assert(meshInstance);

	char meshName[64];
	snprintf(meshName, 64, "res://CardImages/Calbria/Miniatures/%s.obj", GetModelName(m));
	fprintf(stderr, "Loading '%s'\n", meshName);
	Ref<Mesh> newMesh = ResourceLoader::load(meshName, "Mesh");

	meshInstance->set_mesh(newMesh);
}

} // namespace godot