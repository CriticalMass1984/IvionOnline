#include <Godot/Player.hpp>

#include <Godot/BattleInstance.hpp>
#include <Godot/Card.hpp>
#include <Godot/Tile.hpp>
#include <Util.hpp>

#include <scene/main/window.h>
#include <scene/resources/packed_scene.h>

#include <fstream>

namespace godot {

void Player::_bind_methods() {
}
void Player::_notification(int p_what) {
	switch (p_what) {
		case NOTIFICATION_PREDELETE: {
		} break;
		case NOTIFICATION_READY: {
		} break;
		case NOTIFICATION_PROCESS: {
			// float delta = get_process_delta_time();
		} break;
		default:
			break;
	}
}

void Player::LoadPawn(BattleInstance *root, Pawn::Model m, Vector2i start) {
	fprintf(stderr, "Player::LoadPawn\n");

	fprintf(stderr, "Loading pawn scene\n");
	Ref<PackedScene> scene = ResourceLoader::load("res://Pawn.tscn", "PackedScene");
	assert(scene->instance());
	pawn_ = Object::cast_to<Pawn>(scene->instance());
	fprintf(stderr, "class: %s\n", String(scene->instance()->get_class_name()).utf8().get_data());
	assert(pawn_);
	pawn_->SetModel(m);

	Node *const pawnNode = root->get_node_or_null(NodePath("Pawns"));
	assert(pawnNode);
	pawnNode->add_child(pawn_);

	pawn_->set_transform(root->tiles_[start.y][start.x]->get_transform());
}
void Player::InitEngine(BattleInstance *root, IO::Engine::GameInstance *instance, int index) {
	this->enginePlayer_ = instance->Players[index];
}
// engine MULTIPLAYER_API_H
void Player::LoadDeck(BattleInstance *root, IO::Engine::GameInstance *instance, const std::string &deckName) {
	char deckNameBuffer[64];
	snprintf(deckNameBuffer, 64, "Decks/%s", String(this->get_name()).utf8().get_data());

	Node *const deckNode = root->get_node_or_null(NodePath(deckNameBuffer));
	assert(deckNode);
	deck_ = Object::cast_to<Node3D>(deckNode);
	assert(deck_);

	std::ifstream file(deckName);
	if (!file.is_open()) {
		fprintf(stderr, "Can't open deck file: '%s'\n", deckName.c_str());
		return;
	}

	Node *const AllCards = root->get_node_or_null(NodePath("Cards"));
	assert(AllCards);

	std::string line;
	while (std::getline(file, line)) {
		auto start = line.find_first_of(',');
		if (start == std::string::npos) {
			continue;
		}
		auto end = line.find_last_of(',');
		if (start >= end) {
			continue;
		}
		std::string arch = FixName(line.substr(0, start));
		std::string name = FixName(line.substr(start + 1, end - (start + 1)));
		const int count = std::stoi(ltrim_copy(line.substr(end + 1)));
		printf("Loading '%s' '%s' '%d'\n", arch.c_str(), name.c_str(), count);
		for (int i = 0; i < count; ++i) {
			Ref<PackedScene> scene = ResourceLoader::load("res://Card.tscn", "PackedScene");
			if (scene.is_valid()) {
				Card *card = Object::cast_to<Card>(scene->instance());
				assert(card);

				char nameBuffer[64];
				snprintf(nameBuffer, 64, "%s_%s_%s_%d", String(this->get_name()).utf8().get_data(), arch.c_str(), name.c_str(), i);
				card->set_name(nameBuffer);
				printf("Loaded card: %s\n", nameBuffer);
				AllCards->add_child(card);
				deckCards_.append(card);

				card->LoadCard(instance, arch, name);
				Transform transform = deck_->get_transform();
				transform.translate(0, deckCards_.size() * 0.1f, 0);
				card->set_transform(transform);
			}
		}
	}
}

} // namespace godot