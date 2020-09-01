#pragma once

#include <scene/main/node.h>
#include <Godot/IvionEntity.hpp>
#include <IOEngine/GameInstance.hpp>

namespace godot {
class Player;
class Tile;

class BattleInstance : public Node {
	GDCLASS(BattleInstance, Node);
	std::unique_ptr<IO::Engine::GameInstance> gameInstance_;
public:
	std::vector<Player*> players_;
	Tile* tiles_[4][4];

	BattleInstance();
	~BattleInstance() = default;
	
	void _notification(int p_what);

	//engine api
	void SelectChoice(IvionEntity* choice);
	void PresentChoices(const Vector<IvionEntity*>& choices);

protected:
	Map<Node*, int> BranchIndexByNode;
	static void _bind_methods();
};
} // namespace godot