#pragma once

#include <scene/main/node.h>
#include <Godot/Card.hpp>
#include <Godot/Pawn.hpp>
#include <IOEngine/Player.hpp>

namespace godot {
class BattleInstance;

class Player : public Node {
	GDCLASS(Player, Node);
	Node3D *deck_{ nullptr };
	Pawn *pawn_{ nullptr };
	IO::Engine::Player *enginePlayer_{ nullptr };
	Vector<Card *> deckCards_;

public:
	void _notification(int p_what);

	//engine api
	void InitEngine(BattleInstance *root, IO::Engine::GameInstance *instance, int index);
	void LoadPawn(BattleInstance *root, Pawn::Model, Vector2i start);
	void LoadDeck(BattleInstance *root, IO::Engine::GameInstance *instance, const std::string &deckName);

protected:
	static void _bind_methods();
};
} // namespace godot