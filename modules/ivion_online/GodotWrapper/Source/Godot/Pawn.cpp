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
void Pawn::MarkAsOption(int index) {
}
void Pawn::UnmarkAsOption() {
}
void Pawn::SelectAsChoice() {
}
//godot callbacks
void Pawn::Init() {}
void Pawn::Update(float deltaTime) {}
void Pawn::Delete() {}

Pawn* Pawn::New(Pawn::Model m) {
	fprintf(stderr, "Player::LoadPawn\n");

	fprintf(stderr, "Loading pawn scene\n");
	Ref<PackedScene> scene = ResourceLoader::load("res://Pawn.tscn", "PackedScene");
	ERR_FAIL_NULL_V(scene->instance(), nullptr);
	auto* pawn = Object::cast_to<Pawn>(scene->instance());
	fprintf(stderr, "class: %s\n", String(scene->instance()->get_class_name()).utf8().get_data());
	ERR_FAIL_NULL_V(pawn, nullptr);
	pawn->SetModel(m);

	// pawn_->set_transform(root->GetPawn(start)->get_transform());
	return pawn;
}
void Pawn::SetModel(Model m) {
	fprintf(stderr, "Pawn::SetModel\n");
	Node *child = get_node_or_null(NodePath("Model"));
	ERR_FAIL_NULL(child);

	MeshInstance3D *meshInstance = Object::cast_to<MeshInstance3D>(child);
	ERR_FAIL_NULL(meshInstance);

	char meshName[64];
	snprintf(meshName, 64, "res://CardImages/Calbria/Miniatures/%s.obj", GetModelName(m));
	fprintf(stderr, "Loading '%s'\n", meshName);
	Ref<Mesh> newMesh = ResourceLoader::load(meshName, "Mesh");

	meshInstance->set_mesh(newMesh);

	// set material
	material_ = GetPawnMaterial("CardImages/ModelDefault.png");
	ERR_FAIL_NULL(material_);
	meshInstance->set_material_override(material_);
}


Map<String, Ref<StandardMaterial3D>> Pawn::PawnMaterialCache_;

Ref<StandardMaterial3D> Pawn::GetPawnMaterial(const String &imageName) {
	fprintf(stderr, "Pawn::GetPawnMaterial()\n");
	// /home/zack/Documents/IvionOnline/Godot/editor/import/editor_import_collada.cpp

	//look for a cached image
	Map<String, Ref<StandardMaterial3D>>::Element *element = Pawn::PawnMaterialCache_.find(imageName);
	if (element != nullptr) {
		fprintf(stderr, "Existing material\n");
		return element->value();
	}

	//load a new image
	fprintf(stderr, "Loading %s\n", imageName.utf8().get_data());
	Ref<Image> image = memnew(Image);
	Error error = image->load(imageName);
	if (error) {
		fprintf(stderr, "Could not load image\n");
		return nullptr;
	}

	fprintf(stderr, "Creating texture From Image\n");
	Ref<ImageTexture> imageTexture = memnew(ImageTexture);
	imageTexture->create_from_image(image);

	fprintf(stderr, "Creating material From texture\n");
	Ref<StandardMaterial3D> material = memnew(StandardMaterial3D);
	material->set_texture(StandardMaterial3D::TEXTURE_ALBEDO, imageTexture);
	material->set_albedo(Color(1, 1, 1, 1));

	float shininess = 0.75;
	float roughness = (shininess - 1.0) / 510;
	material->set_roughness(roughness);

	bool double_sided = false;
	if (double_sided) {
		material->set_cull_mode(StandardMaterial3D::CULL_DISABLED);
	}
	bool unshaded = true;
	if (unshaded) {
		material->set_shading_mode(StandardMaterial3D::SHADING_MODE_UNSHADED);
	}

	fprintf(stderr, "Caching material\n");
	Pawn::PawnMaterialCache_[imageName] = material;
	fprintf(stderr, "Done\n");
	return material;
}

} // namespace godot