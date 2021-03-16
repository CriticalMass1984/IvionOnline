#include <Godot/BattleInstance.hpp>

#include <Godot/Card.hpp>
#include <Godot/IvionEntity.hpp>
#include <Godot/Pawn.hpp>
#include <Godot/Tile.hpp>

#include <scene/3d/mesh_instance_3d.h>
#include <scene/resources/packed_scene.h>
#include <cassert>

namespace godot {

Map<String, Ref<StandardMaterial3D>> BattleInstance::MaterialCache;
std::mutex BattleInstance::MaterialCacheLock;

Ref<StandardMaterial3D> BattleInstance::GetMaterial(const String &imageName) {
	// /home/zack/Documents/IvionOnline/Godot/editor/import/editor_import_collada.cpp
	std::lock_guard<std::mutex> lock(BattleInstance::MaterialCacheLock);

	//look for a cached image
	Map<String, Ref<StandardMaterial3D>>::Element *element = BattleInstance::MaterialCache.find(imageName);
	if (element != nullptr) {
		return element->value();
	}

	//load a new image
	Ref<Image> image = memnew(Image);
	Error error = image->load(imageName);
	if (error) {
		fprintf(stderr, "Could not load image\n");
		return nullptr;
	}

	Ref<ImageTexture> imageTexture = memnew(ImageTexture);
	imageTexture->create_from_image(image);

	Ref<StandardMaterial3D> material = memnew(StandardMaterial3D);
	material->set_texture(StandardMaterial3D::TEXTURE_ALBEDO, imageTexture);
	material->set_albedo(Color(1, 1, 1, 1));

	float shininess = 0.75;
	float roughness = (shininess - 1.0) / 510;
	material->set_roughness(roughness);

	bool double_sided = false;
	if (double_sided) {
		material->set_cull_mode(StandardMaterial3D::CULL_DISABLED);
	}
	bool unshaded = true;
	if (unshaded) {
		material->set_shading_mode(StandardMaterial3D::SHADING_MODE_UNSHADED);
	}

	BattleInstance::MaterialCache[imageName] = material;
	return material;
}

BattleInstance::BattleInstance() {
}

void BattleInstance::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("static_get_card_material", "choice"), &BattleInstance::SelectChoice);
	// ClassDB::register_property("EngineToWorldScale", &BattleInstance::EngineToWorldScale, 10.0);
}

void GenerateRandomGame(IvionOnline::GameInfo *info, int numPlayers) {
	info->mutable_mapsize()->set_x(4);
	info->mutable_mapsize()->set_y(4);

	ERR_FAIL_COND(numPlayers > 4);

	const int start_x[] = { 0, 3, 2, 0 };
	const int start_y[] = { 0, 3, 0, 2 };

	for (int i = 0; i < numPlayers; ++i) {
		auto *newPlayer = info->mutable_players()->Add();
		newPlayer->mutable_startingposition()->set_x(start_x[i]);
		newPlayer->mutable_startingposition()->set_y(start_y[i]);
		newPlayer->mutable_deck();
		newPlayer->set_uid("UID_RandomAgent_" + std::to_string(i));
		newPlayer->set_displayname("RandomAgent_" + std::to_string(i));
		newPlayer->set_teamindex(i);
	}
}

void BattleInstance::_notification(int p_what) {
	switch (p_what) {
		case NOTIFICATION_READY: {
			if (Engine::get_singleton()->is_editor_hint()) {
				fprintf(stdout, "IS EDITOR\n");
			} else {
				fprintf(stdout, "IS NOT EDITOR\n");
			}
			IvionOnline::GameInfo info;
			GenerateRandomGame(&info, 2);
			Initialize(info);
		} break;
		case NOTIFICATION_PROCESS: {
		} break;
		case NOTIFICATION_PREDELETE: {
		} break;
		default:
			break;
	}
}
void BattleInstance::Initialize(const IvionOnline::GameInfo &gameInfo) {
	gameInfo_.CopyFrom(gameInfo);
	gameInstance_ = std::make_unique<IO::GameInstance>();
	gameInstance_->Init(gameInfo_);

	Node *const hands = this->get_node_or_null(NodePath("Hands"));
	ERR_FAIL_NULL(hands);
	for (int i = 0; i < hands->get_child_count(); ++i) {
		Node3D *hand = Object::cast_to<Node3D>(hands->get_child(i));
		if (hand) {
			HandLocations.append(hand);
		}
	}

	fprintf(stderr, "Loading Tiles\n");
	Node *const board = this->get_node_or_null(NodePath("Board"));
	ERR_FAIL_NULL(board);

	const float halfWidth = gameInfo.mapsize().x() / 2;
	const float halfHeight = gameInfo.mapsize().y() / 2;

	{
		MeshInstance3D *mesh = Object::cast_to<MeshInstance3D>(board);
		ERR_FAIL_NULL(mesh);

		mesh->set_scale(Vector3(gameInfo.mapsize().x(), 1, gameInfo.mapsize().y()));

		auto material = GetMaterial("CardImages/Calbria/Boards/Hound and the Hare Board.png");
		ERR_FAIL_NULL(material);
		mesh->set_material_override(material);
	}

	fprintf(stdout, "NumTiles: %d\n", gameInstance_->gamestate_.tiles().element_size());
	for (int i = 0; i < gameInstance_->gamestate_.tiles().element_size(); ++i) {
		auto *tile = gameInstance_->gamestate_.mutable_tiles()->mutable_element()->Mutable(i);
		// create pawn
		auto *tileEntity = Tile::New();
		tileEntity->set_translation(Vector3(tile->position().x() - halfWidth, 0, tile->position().y() - halfHeight));
		tileEntity->set_scale(Vector3(0.5, 0.5, 0.5));
		board->add_child(tileEntity);

		entityMap_.insert(tile, tileEntity);

		TileLocations.push_back(tileEntity->get_transform());
	}

	// Node *const pawnNode = this->get_node_or_null(NodePath("Pawns"));
	// ERR_FAIL_NULL(pawnNode);

	for (int playerIdx = 0; playerIdx < gameInstance_->gamestate_.players().element_size(); ++playerIdx) {
		auto *player = gameInstance_->gamestate_.mutable_players()->mutable_element()->Mutable(playerIdx);
		if (player == nullptr) {
			fprintf(stderr, "Player %d is null!\n", playerIdx);
			continue;
		}
		if (playerIdx >= HandLocations.size()) {
			fprintf(stderr, "Not Enough Hands! %d/%d\n", playerIdx, HandLocations.size());
			continue;
		}
		Node3D *hand = HandLocations.get(playerIdx);
		// create pawn
		auto *pawn = Pawn::New(Pawn::Model(playerIdx));
		if (pawn == nullptr) {
			fprintf(stderr, "Pawn %d is null!\n", playerIdx);
			continue;
		}
		board->add_child(pawn);

		entityMap_.insert(player, pawn);

		pawn->Move(this, player->position());

		for (int cardIdx = 0; cardIdx < player->deck().element_size(); ++cardIdx) {
			IvionOnline::Card *card = IO::ResolvePath<IvionOnline::Card>(gameInstance_.get(), player->mutable_deck()->mutable_element()->Mutable(cardIdx));
			if (card == nullptr) {
				fprintf(stderr, "Player %d Card %d is null!\n", playerIdx, cardIdx);
				continue;
			}

			if (IO::ObjectPathIsValid(*card->mutable_cardstats())) {
				IvionOnline::CardData *cardData = IO::ResolvePath<IvionOnline::CardData>(gameInstance_.get(), card->mutable_cardstats());
				if (cardData == nullptr) {
					fprintf(stderr, "Player %d CardData %d is null!\n", playerIdx, cardIdx);
					continue;
				}
				// create pawn
				auto *cardEntity = Card::New();
				if (cardEntity == nullptr) {
					fprintf(stderr, "Player %d CardEntity %d is null!\n", playerIdx, cardIdx);
					continue;
				}
				entityMap_.insert(card, cardEntity);
				hand->add_child(cardEntity);
				cardEntity->set_translation(Vector3(hand->get_child_count(), 0, 0));
			}
		}
	}

	gameInstance_->Step();
}

void BattleInstance::SelectChoice(int choice) {
	if (gameInstance_->MakeChoice(choice)) {
		for (int i = 0; i < options_.size(); ++i) {
			options_[i]->UnmarkAsOption();
		}
		options_.clear();
		for (int i = 0; i < gameInstance_->currentHistory_->branches_size(); ++i) {
			auto *branch = gameInstance_->currentHistory_->mutable_branches()->Mutable(i);
			for (IvionOnline::Mutation &mutation : *branch->mutable_mutations()) {
				if (mutation.has_objectpath_set_mutation()) {
					IvionOnline::ObjectPath_Set_Mutation *setMut = mutation.mutable_objectpath_set_mutation();
					if (int pathSize = setMut->path().path_size(); pathSize > 1 && strncmp(setMut->path().path().Get(pathSize - 1).c_str(), "Select", 6) == 0) {
						google::protobuf::Message *entity = IO::ResolvePath(gameInstance_.get(), setMut->mutable_newvalue());
						auto *element = entityMap_.find(entity);
						if (element) {
							element->get()->MarkAsOption(i);
							options_.push_back(element->get());
							break;
						} else {
							fprintf(stderr, "Could not find element in map!\n");
						}
					}
				}
			}
		}
	}

	ERR_FAIL_NULL(gameInstance_->currentHistory_);
	if (gameInstance_->currentHistory_->branches_size() == 0) {
		gameInstance_->Step();
	}
}

} // namespace godot