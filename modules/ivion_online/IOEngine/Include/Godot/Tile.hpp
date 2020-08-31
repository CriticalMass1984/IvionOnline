#pragma once

#include <scene/main/node.h>
#include <Godot/IvionEntity.hpp>
#include <IOEngine/Tile.hpp>
#include <IOEngine/GameInstance.hpp>

namespace godot {
class Tile : public IvionEntity {
	GDCLASS(Tile, IvionEntity);
	IO::Engine::Tile* engineTile_;
public:
	// engine callbacks
	void LeftClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	void RightClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	void Init() override;
	void Update(float deltaTime) override;
	void Delete() override;

	//engine api
	void InitEngine(IO::Engine::GameInstance *instance, Vector2i pos);

protected:
	static void _bind_methods();

	static Map<String, Ref<Material>> TileMaterialCache_;

	//LoadedTestTileImage.png
	static Ref<Material> GetTileMaterial(const String &image);
};
} // namespace godot