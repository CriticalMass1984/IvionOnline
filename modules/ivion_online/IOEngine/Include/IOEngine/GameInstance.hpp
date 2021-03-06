#pragma once

#include <memory>
#include <type_traits>
#include <unordered_map>
#include <vector>


#include <GRPC/GameState.pb.h>
#include <IOEngine/Vec2i.hpp>

namespace IO {

class GameInstance {
public:
	IvionOnline::GameState gamestate_;
	Vec2i MapSize;

	GameInstance();

	google::protobuf::Message *ResolvePath(IvionOnline::ObjectPath *path);
	template<typename T>
	inline T* GameInstance::ResolvePath(IvionOnline::ObjectPath *path) { return dynamic_cast<T*>(ResolvePath(path)); }

	// the generate code contains the source for this
	void ApplyMutation(IvionOnline::Mutation *mutation);
	void RevertMutation(IvionOnline::Mutation *mutation);

	void ApplyHistory(IvionOnline::History *history);
	void RevertHistory(IvionOnline::History *history);

	IvionOnline::History RootHistory;
	IvionOnline::History *currentHistory_{ &RootHistory };
	IvionOnline::Card *currentCard_{ nullptr };

	// generates the paths
	void GenerateBranchingPaths();

	void MakeChoice();
};

} // namespace IO