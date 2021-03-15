#pragma once

#include <scene/gui/rich_text_label.h>
#include <scene/main/node.h>
#include <Godot/IvionEntity.hpp>

namespace godot {
class MiscOption : public IvionEntity {
	GDCLASS(MiscOption, IvionEntity);
	RichTextLabel *hpLabel_;

public:
	void SetText(String text);

	//engine api
	bool MarkAsOption(int index) override;
	bool UnmarkAsOption() override;
	bool SelectAsChoice() override;

	//godot callbacks
	void InitEngine(IO::Engine::GameInstance *instance, Vector2i pos);
	void LeftClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	void RightClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	void MouseEnter() override;
	void MouseLeave() override;
	void Init() override;
	void Update(float deltaTime) override;
	void Delete() override;

protected:
	static void _bind_methods();

	static Map<String, Ref<Material>> TileMaterialCache_;

	//LoadedTestTileImage.png
	static Ref<Material> GetTileMaterial(const String &image);
};
} // namespace godot