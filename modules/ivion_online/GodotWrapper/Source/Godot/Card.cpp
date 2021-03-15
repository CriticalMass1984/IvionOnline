#include <Godot/Card.hpp>

#include <scene/3d/mesh_instance_3d.h>
#include <scene/resources/packed_scene.h>

#include <IOEngine/GameInstance.hpp>
#include <cassert>

namespace godot {
//engine api
void Card::MarkAsOption(int index) {
	material_->set_albedo(Color(1.2, 1.2, 1.2, 1));
	return this->IvionEntity::MarkAsOption(index);
}
void Card::UnmarkAsOption() {
	material_->set_albedo(Color(1, 1, 1, 1));
	return this->IvionEntity::UnmarkAsOption();
}
void Card::SelectAsChoice() {
}

//godot callbacks
void Card::Init() {
	if(Engine::get_singleton()->is_editor_hint()){
		LoadImage("DEFAULT.png");
	}
}
void Card::Update(float deltaTime) {}
void Card::Delete() {}

void Card::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("static_get_card_material", "path"), &Card::StaticGetCardMaterial);
}

//engine
Card* Card::New() {
	Ref<PackedScene> scene = ResourceLoader::load("res://Card.tscn", "PackedScene");
	ERR_FAIL_NULL_V(scene->instance(), nullptr);
	return Object::cast_to<Card>(scene->instance());
}
void Card::LoadImage(const std::string& image)
{
	Node *child = get_node_or_null(NodePath("Front"));
	ERR_FAIL_NULL(child);

	MeshInstance3D *mesh = Object::cast_to<MeshInstance3D>(child);
	ERR_FAIL_NULL(mesh);

	char imageBuffer[128];
	int count = snprintf(imageBuffer, 128, "CardImages/%s", image.c_str());
	ERR_FAIL_COND(count < 128);

	material_ = GetCardMaterial(imageBuffer);
	mesh->set_material_override(material_);
}

Map<String, Ref<StandardMaterial3D>> Card::cardMaterialCache_;

Ref<StandardMaterial3D> Card::GetCardMaterial(const String &imageName) {
	// /home/zack/Documents/IvionOnline/Godot/editor/import/editor_import_collada.cpp

	//look for a cached image
	Map<String, Ref<StandardMaterial3D>>::Element *element = Card::cardMaterialCache_.find(imageName);
	if (element != nullptr) {
		return element->value();
	}

	//load a new image
	Ref<Image> image = memnew(Image);
	Error error = image->load(imageName);
	if (error) {
		fprintf(stderr, "Could not load image\n");
		return nullptr;
	}

	Ref<ImageTexture> imageTexture = memnew(ImageTexture);
	imageTexture->create_from_image(image);

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

	Card::cardMaterialCache_[imageName] = material;
	return material;
}

} // namespace godot