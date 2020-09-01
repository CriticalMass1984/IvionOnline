#pragma once
#include <scene/3d/node_3d.h>
#include <scene/main/node.h>
#include <Godot/IvionEntity.hpp>

namespace IO {
namespace Engine {
class GameInstance;
}
} // namespace IO

namespace godot {
class Card : public IvionEntity {
	GDCLASS(Card, IvionEntity);

public:
	void LoadCard(IO::Engine::GameInstance *instance, const std::string &archetype, const std::string &name);

	//engine api
	bool MarkAsOption(int index) override;
	bool UnmarkAsOption() override;
	bool SelectAsChoice() override;

	// godot callbacks
	void LeftClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	void RightClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	void MouseEnter() override;
	void MouseLeave() override;
	void Init() override;
	void Update(float deltaTime) override;
	void Delete() override;

protected:
	static void _bind_methods();

	static Map<String, Ref<Material>> cardMaterialCache_;

	//LoadedTestCardImage.png
	static Ref<Material> GetCardMaterial(const String &image);
};
} // namespace godot