#include <Godot/Card.hpp>

#include <scene/3d/mesh_instance_3d.h>

#include <IOEngine/GameInstance.hpp>

namespace godot {
//engine api
bool Card::MarkAsOption(int index) {
	return this->IvionEntity::MarkAsOption(index);
}
bool Card::UnmarkAsOption() {
	return this->IvionEntity::UnmarkAsOption();
}
bool Card::SelectAsChoice() {
	return this->IvionEntity::SelectAsChoice();
}

//godot callbacks
void Card::LeftClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {}
void Card::RightClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {}
void Card::MouseEnter() {}
void Card::MouseLeave() {}
void Card::Init() {}
void Card::Update(float deltaTime) {}
void Card::Delete() {}

void Card::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("static_get_card_material", "path"), &Card::StaticGetCardMaterial);
}

//engine
void Card::LoadCard(IO::Engine::GameInstance *instance, const std::string &archetype, const std::string &name) {
	const IO::Engine::CardLibrary &library = instance->Library();
	const IO::Engine::CardDef *cardDef = library.GetCard(archetype, name);
	assert(cardDef);

	Node *child = get_node_or_null(NodePath("Plane"));
	assert(child);

	MeshInstance3D *mesh = Object::cast_to<MeshInstance3D>(child);
	assert(mesh);

	char imageBuffer[128];
	int count = snprintf(imageBuffer, 128, "CardImages/%s", cardDef->image_.c_str());
	assert(count < 128);

	Ref<Material> material = GetCardMaterial(imageBuffer);
	mesh->set_material_override(material);
}

Map<String, Ref<Material>> Card::cardMaterialCache_;

Ref<Material> Card::GetCardMaterial(const String &imageName) {
	// /home/zack/Documents/IvionOnline/Godot/editor/import/editor_import_collada.cpp

	//look for a cached image
	Map<String, Ref<Material>>::Element *element = Card::cardMaterialCache_.find(imageName);
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