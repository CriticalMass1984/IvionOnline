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
	void MarkAsOption(int index) override;
	void UnmarkAsOption() override;
	void SelectAsChoice() override;

	//godot callbacks
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