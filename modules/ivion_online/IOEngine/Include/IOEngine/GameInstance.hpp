#pragma once

#include <memory>
#include <type_traits>
#include <unordered_map>
#include <vector>

#include <GRPC/GameState.pb.h>

namespace IO {

class GameInstance {
	// IvionOnline::GameState instance_;

public:
	GameInstance();

	google::protobuf::Message *ResolvePath(IvionOnline::ObjectPath *path);

	// the generate code contains the source for this
	void ApplyMutation(IvionOnline::Mutation *mutation);
	void RevertMutation(IvionOnline::Mutation *mutation);

	// generates the paths
	void GenerateBranchingPaths();

	void MakeChoice();
};

} // namespace IO