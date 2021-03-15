#pragma once
#include <scene/3d/node_3d.h>
#include <scene/main/node.h>
#include <Godot/IvionEntity.hpp>

namespace godot {
class BattleInstance;

class Card : public IvionEntity {
	GDCLASS(Card, IvionEntity);

public:
	static Card* New();
	void LoadImage(const std::string& image);

	//engine api
	bool MarkAsOption(int index) override;
	bool UnmarkAsOption() override;
	bool SelectAsChoice() override;

	// godot callbacks
	void Init() override;
	void Update(float deltaTime) override;
	void Delete() override;

private:
	static void _bind_methods();
	Ref<StandardMaterial3D> material_;

	static Map<String, Ref<StandardMaterial3D>> cardMaterialCache_;

	//LoadedTestCardImage.png
	static Ref<StandardMaterial3D> GetCardMaterial(const String &image);
};
} // namespace godot