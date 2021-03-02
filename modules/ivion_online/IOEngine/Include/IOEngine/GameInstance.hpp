#pragma once

#include <memory>
#include <type_traits>
#include <unordered_map>
#include <vector>

#include <IOEngine/Vec2i.hpp>

#include <GRPC/Effects.pb.h>
#include <GRPC/GameState.pb.h>
#include <GRPC/Types.pb.h>

class GameInstance {
	GameState::GameInstance instance_;

public:
	GameInstance();

	const google::protobuf::Message *ResolvePath(
			const GameState::Card *card,
			const Types::Path *path);

	Vec2i GetVec2i(const GameState::Card *card, const google::protobuf::Message *message);
	int GetInteger(const GameState::Card *card, const google::protobuf::Message *message);

	// generates the paths
	void GenerateBranchingPaths();

	void MakeChoice();
};