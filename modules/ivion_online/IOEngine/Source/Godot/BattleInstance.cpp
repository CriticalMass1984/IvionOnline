#include <scene/resources/packed_scene.h>
#include <Godot/BattleInstance.hpp>
#include <Godot/Player.hpp>
#include <Godot/Tile.hpp>

namespace godot {

BattleInstance::BattleInstance() {
}

void BattleInstance::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("static_get_card_material", "choice"), &BattleInstance::SelectChoice);
}
// reset network

void BattleInstance::_notification(int p_what) {
	switch (p_what) {
		case NOTIFICATION_READY: {
			std::vector<IO::Engine::GameInstance::PlayerDef> playerDefs;
			Node *playerList = get_node_or_null(NodePath("Players"));
			assert(playerList);

			const int childCount = playerList->get_child_count();
			for (int i = 0; i < childCount; ++i) {
				Player *player = Object::cast_to<Player>(playerList->get_child(i));
				if (player) {
					playerDefs.emplace_back(IO::Engine::GameInstance::PlayerDef{
							.displayName_ = "PlayerName",
							.deckName_ = "DeckList.txt",
							.index_ = (int)playerDefs.size(),
							.teamIndex_ = (int)playerDefs.size(),
					});
					players_.push_back(player);
				}
			}

			//create game instance
			gameInstance_.reset(new IO::Engine::GameInstance(playerDefs));

			//load tiles
			fprintf(stderr, "Loading Tiles\n");
			Node3D *UL = Object::cast_to<Node3D>(this->get_node_or_null(NodePath("Tiles/UpperLeft")));
			assert(UL);
			Node3D *LR = Object::cast_to<Node3D>(this->get_node_or_null(NodePath("Tiles/LowerRight")));
			assert(LR);
			Node *const tiles = this->get_node_or_null(NodePath("Tiles"));

			real_t width = (LR->get_transform().origin.x - UL->get_transform().origin.x) / 3;
			real_t height = (LR->get_transform().origin.z - UL->get_transform().origin.z) / 3;

			for (int y = 0; y < 4; ++y) {
				for (int x = 0; x < 4; ++x) {
					fprintf(stderr, "Loading Tile[%d][%d]\n", y, x);
					Ref<PackedScene> scene = ResourceLoader::load("res://Tile.tscn", "PackedScene");
					Tile *tile = Object::cast_to<Tile>(scene->instance());
					assert(tile);
					tiles->add_child(tile);
					tiles_[y][x] = tile;
					tile->InitEngine(gameInstance_.get(), Vector2i(x, y));

					Transform transform = UL->get_transform();
					transform.translate(width * x, 0, height * y);

					tile->set_transform(transform);
				}
			}

			// load players
			fprintf(stderr, "Loading Players");
			Vector2i Starts[] = { Vector2i(0, 0), Vector2i(3, 3) };

			for (unsigned int i = 0; i < playerDefs.size(); ++i) {
				fprintf(stderr, "Loading Player[%d] %s\n", i, playerDefs[i].displayName_.c_str());
				Player *player = players_[i];
				fprintf(stderr, "Loading Deck\n");
				player->LoadDeck(this, gameInstance_.get(), playerDefs[i].deckName_);
				fprintf(stderr, "Loading Pawn\n");
				player->LoadPawn(this, Pawn::Model::ARCHMAGE, Starts[i]);
			}
			fprintf(stderr, "Done");
		} break;
		case NOTIFICATION_PROCESS: {
		} break;
		case NOTIFICATION_PREDELETE: {
		} break;
		default:
			break;
	}
}

} // namespace godot