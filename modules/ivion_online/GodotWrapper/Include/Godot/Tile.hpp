#pragma once

#include <scene/main/node.h>
#include <Godot/IvionEntity.hpp>
#include <IOEngine/GameInstance.hpp>

namespace godot {
class Tile : public IvionEntity {
	GDCLASS(Tile, IvionEntity);

public:
	static Tile* New();

	//engine api
	bool MarkAsOption(int index) override;
	bool UnmarkAsOption() override;
	bool SelectAsChoice() override;

	//godot callbacks
	void LeftClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	void RightClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	void MouseEnter() override;
	void MouseLeave() override;
	void Init() override;
	void Update(float deltaTime) override;
	void Delete() override;

private:
	static void _bind_methods();

	static Map<String, Ref<Material>> TileMaterialCache_;

	//LoadedTestTileImage.png
	static Ref<Material> GetTileMaterial(const String &image);
};
} // namespace godot