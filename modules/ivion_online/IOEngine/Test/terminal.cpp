#include <GRPC/GameInfo.pb.h>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Vec2i.hpp>

#include <cassert>
#include <cstdio>
#include <fstream>
#include <optional>
#include <random>

//https://stackoverflow.com/questions/49221417/pyrun-file-with-recursive-functions-in-python-c-api

#include <google/protobuf/util/json_util.h>

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

void GenerateRandomGame(IvionOnline::GameInfo *info, int numPlayers) {
	info->mutable_mapsize()->set_x(4);
	info->mutable_mapsize()->set_y(4);

	assert(numPlayers <= 4);

	const int start_x[] = { 0, 3, 2, 0 };
	const int start_y[] = { 0, 3, 0, 2 };

	for (int i = 0; i < numPlayers; ++i) {
		auto *newPlayer = info->mutable_players()->Add();
		newPlayer->mutable_startingposition()->set_x(start_x[i]);
		newPlayer->mutable_startingposition()->set_y(start_y[i]);
		newPlayer->mutable_deck();
		newPlayer->set_uid("UID_RandomAgent_" + std::to_string(i));
		newPlayer->set_displayname("RandomAgent_" + std::to_string(i));
	}
}

int main(int argc, char **argv) {
	IvionOnline::GameInfo info;
	GenerateRandomGame(&info, 2);

	IO::GameInstance instance;
	instance.Init(info);

	std::ofstream debugFile("gamestate.txt");
	debugFile << instance.gamestate_.DebugString();
	// printf("GameState Size: %ld\n", instance.gamestate_.ByteSizeLong());

	std::default_random_engine generator;
	while(true)
	{
		instance.Step();
		while(instance.currentHistory_->branches_size() > 0)
		{
			instance.currentHistory_->PrintDebugString();
			const int optionsCount = instance.currentHistory_->branches_size();
			std::uniform_int_distribution<int> distribution(0, optionsCount);
			int choice = distribution(generator);
			instance.MakeChoice(choice);
		}
	}

	// return 0;
	/////////////////////

	// Effects::CardEffect effects;
	// auto Get = effects.add_effects()->mutable_get();
	// Get->mutable_result()->mutable_tiles()->mutable_tiles();
	// *Get->mutable_source()->mutable_fullpath() = "/Tiles";
	// Get->set_name("Tiles");

	// auto Distance = effects.add_effects()->mutable_constant();
	// Distance->mutable_result()->mutable_integer()->mutable_value()->set_value(1);
	// Distance->set_name("Distance");

	// auto Number = effects.add_effects()->mutable_constant();
	// Number->mutable_result()->mutable_integer()->mutable_value()->set_value(1);
	// Number->set_name("Number");

	// auto Filter = effects.add_effects()->mutable_filter_distance();
	// Filter->mutable_source()->set_fullpath("./PlayEffects/Tiles");
	// Filter->mutable_from()->set_fullpath("./Controller");
	// Filter->mutable_distance()->set_fullpath("./PlayEffects/Distance");

	// auto Select = effects.add_effects()->mutable_select();
	// Select->mutable_source()->set_fullpath("./PlayEffects/Tiles");
	// Select->mutable_number()->set_fullpath("./PlayEffects/Number");
	// Select->set_upto(false);
	// Select->set_targets(false);

	// auto Move = effects.add_effects()->mutable_move();
	// Move->mutable_destination()->set_fullpath("./PlayEffects/Tiles");
	// Move->mutable_player()->set_fullpath("./Controller");

	// std::string result;
	// google::protobuf::util::MessageToJsonString(effects, &result);

	// printf("\n\n%s\n\n", result.c_str());
	return 0;
}