#include <GRPC/GameInfo.pb.h>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Vec2i.hpp>

#include <cassert>
#include <cstdio>
#include <fstream>
#include <optional>

//https://stackoverflow.com/questions/49221417/pyrun-file-with-recursive-functions-in-python-c-api

#include <google/protobuf/util/json_util.h>


void ApplyMutation(GameState::GameState *state, const GameState::Mutation &mutation) {
}

template <class T>
bool LoadFromJsonFile(const std::string &filename, T *message) {
	std::ifstream file(filename);
	if (!file.is_open()) {
		fprintf(stderr, "Could not open file! %s\n", filename.c_str());
		return false;
	}
	file.seekg(0, std::ios_base::end);
	const size_t fileSize = file.tellg();
	file.seekg(0, std::ios_base::beg);
	std::string fileContents;
	fileContents.resize(fileSize);
	file.read(const_cast<char *>(fileContents.data()), fileSize);

	return google::protobuf::util::JsonStringToMessage(fileContents, message).ok();
}

void GenerateRandomGame(NetworkIO::GameInfo *info, int numPlayers) {
	info->mutable_mapsize()->set_x(4);
	info->mutable_mapsize()->set_y(4);

	assert(numPlayers <= 4);

	const int start_x[] = { 0, 3, 2, 0 };
	const int start_y[] = { 0, 3, 0, 2 };

	Effects::CardEffect MoveEffect;

	for (int i = 0; i < numPlayers; ++i) {
		auto *newPlayer = info->mutable_players()->Add();
		newPlayer->mutable_startingposition()->set_x(start_x[i]);
		newPlayer->mutable_startingposition()->set_y(start_y[i]);
		newPlayer->mutable_deck();
		newPlayer->mutable_randomagent();
		newPlayer->set_uid("UID_RandomAgent_" + std::to_string(i));
		newPlayer->set_username("RandomAgent_" + std::to_string(i));
	}
}

void InitializeGame(const NetworkIO::GameInfo &info, GameState::GameInstance *instance) {
	// reset instance
	instance->mutable_history()->Clear();
	instance->mutable_gamestate()->Clear();

	// create players
	for (const auto &player : info.players()) {
		const int playerIndex = instance->gamestate().players_size();
		auto *playerInstance = instance->mutable_gamestate()->add_players();

		// meta info
		playerInstance->set_name(player.username());
		playerInstance->set_uid(player.uid());

		// setup stats
		playerInstance->mutable_health()->set_value(40);
		playerInstance->mutable_actions()->set_value(0);
		playerInstance->mutable_power()->set_value(0);
		playerInstance->mutable_slow()->set_value(0);
		playerInstance->mutable_silence()->set_value(0);
		playerInstance->mutable_disarm()->set_value(0);
		playerInstance->mutable_initiative()->set_value(0);

		// setup max stats
		playerInstance->mutable_maxhealth()->set_value(40);
		playerInstance->mutable_maxactions()->set_value(5);
		playerInstance->mutable_maxpower()->set_value(5);
		playerInstance->mutable_maxslow()->set_value(5);
		playerInstance->mutable_maxsilence()->set_value(5);
		playerInstance->mutable_maxdisarm()->set_value(5);
		playerInstance->mutable_maxinitiative()->set_value(5);

		//
		playerInstance->mutable_field();
		playerInstance->mutable_hand();
		playerInstance->mutable_deck();
		playerInstance->mutable_discard();
		playerInstance->mutable_feats();

		constexpr int kBufferSize = 128;
		char playerPath[kBufferSize];
		// create path to player
		if (snprintf(playerPath, kBufferSize, "/Players/%d", playerIndex) < kBufferSize) {
		} else {
			throw std::runtime_error("Player Path is too long!");
		}

		// create cards
		for (const NetworkIO::CardInfo &cardInfo : player.deck()) {
			// load card stats from card server
			for (int cardNum = 0; cardNum < cardInfo.count(); ++cardNum) {
				const int cardIdx = instance->gamestate().cards_size();
				auto *card = instance->mutable_gamestate()->add_cards();
				char buffer[kBufferSize];

				// create card name
				if (snprintf(buffer, kBufferSize, "%s###%d", cardInfo.metadata().basename().c_str(), cardNum) < kBufferSize) {
					card->set_name(buffer);
				} else {
					throw std::runtime_error("Card Name is too long!");
				}

				card->mutable_owner()->mutable_objectpath()->set_fullpath(playerPath);
				card->mutable_controller()->CopyFrom(card->owner());
				card->mutable_metadata()->CopyFrom(cardInfo.metadata());

				// create path to card
				if (snprintf(buffer, kBufferSize, "/Cards/%d", cardIdx) < kBufferSize) {
					card->set_name(buffer);
				} else {
					throw std::runtime_error("Card Path is too long!");
				}

				playerInstance->add_deck()->mutable_objectpath()->set_fullpath(buffer);
			}
		}
	}
}


int main(int argc, char **argv) {
	// GameInstance instance;

	

	// return 0;
	/////////////////////

	Effects::CardEffect effects;
	auto Get = effects.add_effects()->mutable_get();
	Get->mutable_result()->mutable_tiles()->mutable_tiles();
	*Get->mutable_source()->mutable_fullpath() = "/Tiles";
	Get->set_name("Tiles");

	auto Distance = effects.add_effects()->mutable_constant();
	Distance->mutable_result()->mutable_integer()->mutable_value()->set_value(1);
	Distance->set_name("Distance");

	auto Number = effects.add_effects()->mutable_constant();
	Number->mutable_result()->mutable_integer()->mutable_value()->set_value(1);
	Number->set_name("Number");

	auto Filter = effects.add_effects()->mutable_filter_distance();
	Filter->mutable_source()->set_fullpath("./PlayEffects/Tiles");
	Filter->mutable_from()->set_fullpath("./Controller");
	Filter->mutable_distance()->set_fullpath("./PlayEffects/Distance");

	auto Select = effects.add_effects()->mutable_select();
	Select->mutable_source()->set_fullpath("./PlayEffects/Tiles");
	Select->mutable_number()->set_fullpath("./PlayEffects/Number");
	Select->set_upto(false);
	Select->set_targets(false);

	auto Move = effects.add_effects()->mutable_move();
	Move->mutable_destination()->set_fullpath("./PlayEffects/Tiles");
	Move->mutable_player()->set_fullpath("./Controller");

	std::string result;
	google::protobuf::util::MessageToJsonString(effects, &result);

	printf("\n\n%s\n\n", result.c_str());
	return 0;
}