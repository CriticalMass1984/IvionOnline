#pragma once

#include <memory>
#include <type_traits>
#include <unordered_map>
#include <vector>


#include <GRPC/GameState.pb.h>
#include <GRPC/GameInfo.pb.h>
#include <IOEngine/Vec2i.hpp>

namespace IO {

class GameInstance {
public:
	IvionOnline::GameState gamestate_;
	Vec2i MapSize;

	GameInstance() = default;
	~GameInstance() = default;
	GameInstance(const GameInstance&) = delete;
	GameInstance(GameInstance&&) = delete;

	void Init(const IvionOnline::GameInfo& info);

	google::protobuf::Message *ResolvePath(IvionOnline::ObjectPath *path);
	template<typename T>
	inline T* ResolvePath(IvionOnline::ObjectPath *path) { return dynamic_cast<T*>(ResolvePath(path)); }

	// the generate code contains the source for this
	void ApplyMutation(IvionOnline::Mutation *mutation);
	void RevertMutation(IvionOnline::Mutation *mutation);

	void ApplyHistory(IvionOnline::History *history);
	void RevertHistory(IvionOnline::History *history);

	IvionOnline::History RootHistory;
	IvionOnline::History *currentHistory_{ &RootHistory };
	IvionOnline::Card *currentCard_{ nullptr };

	// generates the paths
	void Step();
	
	bool MakeChoice(int choice);
};

} // namespace IO