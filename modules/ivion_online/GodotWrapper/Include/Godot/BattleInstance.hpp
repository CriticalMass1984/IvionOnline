#pragma once

#include <scene/main/node.h>
#include <scene/3d/node_3d.h>
#include <IOEngine/GameInstance.hpp>
#include <mutex>

namespace godot {
class IvionEntity;

class BattleInstance : public Node {
	GDCLASS(BattleInstance, Node);
public:
	IvionOnline::GameInfo gameInfo_;
	std::unique_ptr<IO::GameInstance> gameInstance_;
	Vector<Transform> TileLocations;
	Vector<Node3D*> HandLocations;

	//ivion entities
	Map<void*, godot::IvionEntity*> entityMap_;
	Vector<godot::IvionEntity*> options_;

	BattleInstance();
	~BattleInstance() = default;

	void _notification(int p_what);
	
	void Initialize(const IvionOnline::GameInfo& gameInfo);

	//engine api
	void SelectChoice(int choice);
	static Ref<StandardMaterial3D> GetMaterial(const String &imageName);

protected:
	Map<Node *, int> BranchIndexByNode;
	static void _bind_methods();
	
	static Map<String, Ref<StandardMaterial3D>> MaterialCache;
	static std::mutex MaterialCacheLock;
};
} // namespace godot