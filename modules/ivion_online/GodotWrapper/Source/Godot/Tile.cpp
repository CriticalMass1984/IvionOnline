#include <Godot/Tile.hpp>

#include <scene/3d/mesh_instance_3d.h>
#include <scene/resources/packed_scene.h>

#include <IOEngine/GameInstance.hpp>

namespace godot {
Tile* Tile::New() {
	Ref<PackedScene> scene = ResourceLoader::load("res://Tile.tscn", "PackedScene");
	ERR_FAIL_NULL_V(scene->instance(), nullptr);
	return Object::cast_to<Tile>(scene->instance());
}

//engine api
void Tile::MarkAsOption(int index) {
}
void Tile::UnmarkAsOption() {
}
void Tile::SelectAsChoice() {
}

//godot callbacks
void Tile::Init() {
	fprintf(stderr, "Tile::Init()\n");

	// Node *child = get_node_or_null(NodePath("Plane"));
	// ERR_FAIL_NULL(child);

	// MeshInstance3D *mesh = Object::cast_to<MeshInstance3D>(child);
	// ERR_FAIL_NULL(mesh);

	// Ref<Material> material = GetTileMaterial("CardImages/Calbria/Boards/HnH Back.png");
	// ERR_FAIL_NULL(material);
	// mesh->set_material_override(material);
}
void Tile::Update(float deltaTime) {
}
void Tile::Delete() {
}

void Tile::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("static_get_Tile_material", "path"), &Tile::StaticGetTileMaterial);
}

Map<String, Ref<Material>> Tile::TileMaterialCache_;

Ref<Material> Tile::GetTileMaterial(const String &imageName) {
	fprintf(stderr, "Tile::GetTileMaterial()\n");
	// /home/zack/Documents/IvionOnline/Godot/editor/import/editor_import_collada.cpp

	//look for a cached image
	Map<String, Ref<Material>>::Element *element = Tile::TileMaterialCache_.find(imageName);
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
	Tile::TileMaterialCache_[imageName] = material;
	fprintf(stderr, "Done\n");
	return material;
}

} // namespace godot