#pragma once

#include <memory>
#include <type_traits>
#include <unordered_map>
#include <vector>

#include <GRPC/Class.pb.h>
#include <GRPC/Effect.pb.h>
#include <GRPC/Mutation.pb.h>
#include <GRPC/Type.pb.h>

namespace IO {

class GameInstance {
	// IvionOnline::GameState instance_;

public:
	GameInstance();

	google::protobuf::Message *ResolvePath(IvionOnline::ObjectPath *path);

	void ApplyMutation(IvionOnline::Mutation *mutation);
	void RevertMutation(IvionOnline::Mutation *mutation);

	// generates the paths
	void GenerateBranchingPaths();

	void MakeChoice();
};

} // namespace IO