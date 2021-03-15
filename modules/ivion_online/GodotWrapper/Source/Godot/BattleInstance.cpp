#include <Godot/BattleInstance.hpp>

#include <Godot/Card.hpp>
#include <Godot/IvionEntity.hpp>
#include <Godot/Pawn.hpp>
#include <Godot/Tile.hpp>

#include <scene/resources/packed_scene.h>
#include <cassert>

namespace godot {

BattleInstance::BattleInstance() {
	
}

void BattleInstance::_bind_methods() {
	// ClassDB::bind_method(D_METHOD("static_get_card_material", "choice"), &BattleInstance::SelectChoice);
	// ClassDB::register_property("EngineToWorldScale", &BattleInstance::EngineToWorldScale, 10.0);
}

void GenerateRandomGame(IvionOnline::GameInfo *info, int numPlayers) {
	info->mutable_mapsize()->set_x(4);
	info->mutable_mapsize()->set_y(4);

	ERR_FAIL_COND(numPlayers <= 4);

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
			if(Engine::get_singleton()->is_editor_hint()){
				fprintf(stdout, "IS EDITOR\n");
			}else{
				fprintf(stdout, "IS NOT EDITOR\n");
				IvionOnline::GameInfo info;
				GenerateRandomGame(&info, 2);
				Initialize(info);
			}
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
	gameInfo_.CopyFrom(gameInfo_);
	gameInstance_ = std::make_unique<IO::GameInstance>();
	gameInstance_->Init(gameInfo_);

	fprintf(stderr, "Loading Tiles\n");
	Node3D *const UL = Object::cast_to<Node3D>(this->get_node_or_null(NodePath("Tiles/UpperLeft")));
	ERR_FAIL_NULL(UL);
	Node3D *const LR = Object::cast_to<Node3D>(this->get_node_or_null(NodePath("Tiles/LowerRight")));
	ERR_FAIL_NULL(LR);
	Node *const tiles = this->get_node_or_null(NodePath("Tiles"));

	const real_t width = (LR->get_transform().origin.x - UL->get_transform().origin.x) / 3;
	const real_t height = (LR->get_transform().origin.z - UL->get_transform().origin.z) / 3;

	for (int i = 0; i < gameInstance_->gamestate_.tiles().element_size(); ++i) {
		auto *tile = gameInstance_->gamestate_.mutable_tiles()->mutable_element()->Mutable(i);
		// create pawn
		auto *tileEntity = Tile::New();
		tiles->add_child(tileEntity);

		entityMap_.insert(tile, tileEntity);

		Transform transform = UL->get_transform();
		transform.translate(width * tile->position().x(), 0, height * tile->position().y());

		TileLocations.push_back(transform);

		tileEntity->Move(this, tile->position());
	}

	// Node *const pawnNode = this->get_node_or_null(NodePath("Pawns"));
	// ERR_FAIL_NULL(pawnNode);

	for (int playerIdx = 0; playerIdx < gameInstance_->gamestate_.players().element_size(); ++playerIdx) {
		auto *player = gameInstance_->gamestate_.mutable_players()->mutable_element()->Mutable(playerIdx);
		// create pawn
		auto *pawn = Pawn::New(Pawn::Model(playerIdx));
		// pawnNode->add_child(pawn);

		entityMap_.insert(player, pawn);

		pawn->Move(this,  player->position());

		// Node *const pawnNode = this->get_node_or_null(NodePath("Decks"));
		// ERR_FAIL_NULL(pawnNode);

		// Node *const deckNode = this->get_node_or_null(NodePath("Decks"));
		// ERR_FAIL_NULL(pawnNode);

		for (int cardIdx = 0; cardIdx < player->deck().element_size(); ++cardIdx) {
			IvionOnline::Card *card = IO::ResolvePath<IvionOnline::Card>(gameInstance_.get(), player->mutable_deck()->mutable_element()->Mutable(cardIdx));

			// create pawn
			auto *cardEntity = Card::New();


			entityMap_.insert(card, cardEntity);
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