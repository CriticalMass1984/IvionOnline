#pragma once

#include <scene/main/node.h>
#include <IOEngine/GameInstance.hpp>

namespace godot {
class IvionEntity;

class BattleInstance : public Node {
	GDCLASS(BattleInstance, Node);
public:
	IvionOnline::GameInfo gameInfo_;
	std::unique_ptr<IO::GameInstance> gameInstance_;
	Vector<Transform> TileLocations;

	//ivion entities
	Map<void*, godot::IvionEntity*> entityMap_;
	Vector<godot::IvionEntity*> options_;

	BattleInstance();
	~BattleInstance() = default;

	void _notification(int p_what);
	
	void Initialize(const IvionOnline::GameInfo& gameInfo);

	//engine api
	void SelectChoice(int choice);

protected:
	Map<Node *, int> BranchIndexByNode;
	static void _bind_methods();
};
} // namespace godot