#include <Godot/Pawn.hpp>

#include <scene/3d/mesh_instance_3d.h>

#include <IOEngine/GameInstance.hpp>

namespace godot {

void Pawn::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("static_get_card_material", "path"), &Card::StaticGetCardMaterial);
}

//engine
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