#include <IOEngine/Effects/Executor.hpp>

#include <IOEngine/Card.hpp>
#include <IOEngine/GameState.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Tile.hpp>
#include <algorithm>
#include <cassert>

namespace IO {
Executor::Slice<PlayerIndex> Executor::LastSelectedPlayer() noexcept {
	const int size = lastSelectedPlayer_.back().Index;
	const int index = lastSelectedPlayer_.size() - 1 - size;
	return Slice<PlayerIndex>(lastSelectedPlayer_, index, size);
}
Executor::Slice<CardIndex> Executor::LastSelectedCard() noexcept {
	const int size = lastSelectedCard_.back().Index;
	const int index = lastSelectedCard_.size() - 1 - size;
	return Slice<CardIndex>(lastSelectedCard_, index, size);
}
Executor::Slice<TileIndex> Executor::LastSelectedTile() noexcept {
	const int size = lastSelectedTile_.back().Index;
	const int index = lastSelectedTile_.size() - 1 - size;
	return Slice<TileIndex>(lastSelectedTile_, index, size);
}

void Executor::UpdateLeafPaths(std::vector<std::tuple<Path *, std::vector<Path>>> &newLeaves) {
	assert(newLeaves.size() == leafPaths_.size());
	const int oldLeaveCount = (int)newLeaves.size();
	std::vector<Path *> leaves;
	for (int i = 0; i < oldLeaveCount; ++i) {
		assert(leafPaths_[i] == std::get<0>(newLeaves[i]));
		leafPaths_[i]->Branches.insert(
				leafPaths_[i]->Branches.end(),
				std::make_move_iterator(std::get<1>(newLeaves[i]).begin()),
				std::make_move_iterator(std::get<1>(newLeaves[i]).end()));
		for(Path& path : leafPaths_[i]->Branches)
		{
			leaves.push_back(&path);
		}
	}
	leafPaths_.swap(leaves);
}

void Executor::Revert(const Effect &effect) noexcept {
	assert(effects_.back() == effect);
	switch (effect.index()) {
		case variant_index<Effect, std::monostate>():
			break;
		case variant_index<Effect, Vec2iMutation>(): {
			*std::get<Vec2iMutation>(effect).Index -= std::get<Vec2iMutation>(effect).Delta;
		} break;
		case variant_index<Effect, IntegerMutation>(): {
			*std::get<IntegerMutation>(effect).Index -= std::get<IntegerMutation>(effect).Delta;
		} break;
		case variant_index<Effect, Success>(): {
		} break;
		case variant_index<Effect, Failure>(): {
		} break;
		case variant_index<Effect, GameStart>(): {
		} break;
		case variant_index<Effect, TurnStart>(): {
		} break;
		case variant_index<Effect, TurnEnd>(): {
		} break;
		case variant_index<Effect, Controller>(): {
			assert(activePlayer_.back() == std::get<Controller>(effect).Player);
			activePlayer_.pop_back();
		} break;
		case variant_index<Effect, ::IO::ActiveCard>(): {
			assert(activeCard_.back() == std::get<::IO::ActiveCard>(effect).Card);
			activeCard_.pop_back();
		} break;
		case variant_index<Effect, MoveAction>(): {
		} break;
		case variant_index<Effect, DrawAction>(): {
		} break;
		case variant_index<Effect, PlayAction>(): {
		} break;
		case variant_index<Effect, Target>(): {
		} break;
		case variant_index<Effect, Player_Reference>(): {
			assert(lastSelectedPlayer_.back() == std::get<Player_Reference>(effect).Player);
			lastSelectedPlayer_.pop_back();
		} break;
		case variant_index<Effect, Card_Reference>(): {
			assert(lastSelectedCard_.back() == std::get<Card_Reference>(effect).Card);
			lastSelectedCard_.pop_back();
		} break;
		case variant_index<Effect, Tile_Reference>(): {
			assert(lastSelectedTile_.back() == std::get<Tile_Reference>(effect).Tile);
			lastSelectedTile_.pop_back();
		} break;
		case variant_index<Effect, ReferenceCount>(): {
			// figure out which type of Reference count this is by looking at the previous effect
			switch (effects_[effects_.size() - 2].index()) {
				case variant_index<Effect, Player_Reference>(): {
					assert(lastSelectedPlayer_.back().Index == std::get<ReferenceCount>(effect).Count);
					lastSelectedPlayer_.pop_back();
				} break;
				case variant_index<Effect, Card_Reference>(): {
					assert(lastSelectedCard_.back().Index == std::get<ReferenceCount>(effect).Count);
					lastSelectedCard_.pop_back();
				} break;
				case variant_index<Effect, Tile_Reference>(): {
					assert(lastSelectedTile_.back().Index == std::get<ReferenceCount>(effect).Count);
					lastSelectedTile_.pop_back();
				} break;
				default:
					assert(false);
					break;
			}
		} break;
		case variant_index<Effect, Amount>(): {
			assert(amounts_.back() == std::get<Amount>(effect).Amount);
			amounts_.pop_back();
		} break;
		case variant_index<Effect, Position>(): {
			assert(positions_.back() == std::get<Position>(effect).Position);
			positions_.pop_back();
		} break;
		case variant_index<Effect, Player_SpendResource>(): {
		} break;
		case variant_index<Effect, Player_GainResource>(): {
		} break;
		case variant_index<Effect, Player_RefundResource>(): {
		} break;
		case variant_index<Effect, Player_Damage>(): {
		} break;
		case variant_index<Effect, Player_Move>(): {
		} break;
		case variant_index<Effect, Player_Travel>(): {
		} break;
		case variant_index<Effect, Player_Control>(): {
		} break;
		case variant_index<Effect, Player_RemoveControl>(): {
		} break;
		case variant_index<Effect, Player_SecondWind>(): {
		} break;
		case variant_index<Effect, Player_Heal>(): {
		} break;
		case variant_index<Effect, Player_Scry>(): {
		} break;
		case variant_index<Effect, Card_Heroic>(): {
		} break;
		case variant_index<Effect, Card_Frenzy>(): {
		} break;
		case variant_index<Effect, Card_Advantage>(): {
		} break;
		case variant_index<Effect, Card_Hardcast>(): {
		} break;
		case variant_index<Effect, Card_Destroy>(): {
		} break;
		case variant_index<Effect, Card_Attach>(): {
		} break;
		case variant_index<Effect, Card_Counter>(): {
		} break;
		case variant_index<Effect, Card_Play>(): {
		} break;
		case variant_index<Effect, Card_Resolve>(): {
		} break;
		case variant_index<Effect, Card_TriggerDurationEffects>(): {
		} break;
		case variant_index<Effect, Card_PlayUltimate>(): {
		} break;
		case variant_index<Effect, Card_Discard>(): {
		} break;
		case variant_index<Effect, Card_Reveal>(): {
		} break;
		case variant_index<Effect, Card_Draw>(): {
		} break;
		case variant_index<Effect, Terrain_Destroy>(): {
		} break;
		case variant_index<Effect, Terrain_Create>(): {
		} break;
		default:
			assert(false);
			break;
	}
	effects_.pop_back();
}
bool Executor::Execute(const Effect &effect) noexcept {
	switch (effect.index()) {
		case variant_index<Effect, std::monostate>():
			return false;
		case variant_index<Effect, Vec2iMutation>(): {
			*std::get<Vec2iMutation>(effect).Index += std::get<Vec2iMutation>(effect).Delta;
		} break;
		case variant_index<Effect, IntegerMutation>(): {
			*std::get<IntegerMutation>(effect).Index += std::get<IntegerMutation>(effect).Delta;
		} break;
		case variant_index<Effect, Success>(): {
		} break;
		case variant_index<Effect, Failure>(): {
		} break;
		case variant_index<Effect, GameStart>(): {
		} break;
		case variant_index<Effect, TurnStart>(): {
		} break;
		case variant_index<Effect, TurnEnd>(): {
		} break;
		case variant_index<Effect, Controller>(): {
			activePlayer_.push_back(std::get<Controller>(effect).Player);
		} break;
		case variant_index<Effect, ::IO::ActiveCard>(): {
			activeCard_.push_back(std::get<::IO::ActiveCard>(effect).Card);
		} break;
		case variant_index<Effect, MoveAction>(): {
		} break;
		case variant_index<Effect, DrawAction>(): {
		} break;
		case variant_index<Effect, PlayAction>(): {
		} break;
		case variant_index<Effect, Target>(): {
		} break;
		case variant_index<Effect, Player_Reference>(): {
			lastSelectedPlayer_.push_back(std::get<Player_Reference>(effect).Player);
		} break;
		case variant_index<Effect, Card_Reference>(): {
			lastSelectedCard_.push_back(std::get<Card_Reference>(effect).Card);
		} break;
		case variant_index<Effect, Tile_Reference>(): {
			lastSelectedTile_.push_back(std::get<Tile_Reference>(effect).Tile);
		} break;
		case variant_index<Effect, ReferenceCount>(): {
			// figure out which type of Reference count this is by looking at the previous effect
			switch (effects_[effects_.size() - 1].index()) {
				case variant_index<Effect, Player_Reference>(): {
					lastSelectedPlayer_.emplace_back(std::get<ReferenceCount>(effect).Count);
				} break;
				case variant_index<Effect, Card_Reference>(): {
					lastSelectedCard_.emplace_back(std::get<ReferenceCount>(effect).Count);
				} break;
				case variant_index<Effect, Tile_Reference>(): {
					lastSelectedTile_.emplace_back(std::get<ReferenceCount>(effect).Count);
				} break;
				default:
					assert(false);
					break;
			}
		} break;
		case variant_index<Effect, Amount>(): {
			amounts_.push_back(std::get<Amount>(effect).Amount);
		} break;
		case variant_index<Effect, Position>(): {
			positions_.push_back(std::get<Position>(effect).Position);
		} break;
		case variant_index<Effect, Player_SpendResource>(): {
		} break;
		case variant_index<Effect, Player_GainResource>(): {
		} break;
		case variant_index<Effect, Player_RefundResource>(): {
		} break;
		case variant_index<Effect, Player_Damage>(): {
		} break;
		case variant_index<Effect, Player_Move>(): {
		} break;
		case variant_index<Effect, Player_Travel>(): {
		} break;
		case variant_index<Effect, Player_Control>(): {
		} break;
		case variant_index<Effect, Player_RemoveControl>(): {
		} break;
		case variant_index<Effect, Player_SecondWind>(): {
		} break;
		case variant_index<Effect, Player_Heal>(): {
		} break;
		case variant_index<Effect, Player_Scry>(): {
		} break;
		case variant_index<Effect, Card_Heroic>(): {
		} break;
		case variant_index<Effect, Card_Frenzy>(): {
		} break;
		case variant_index<Effect, Card_Advantage>(): {
		} break;
		case variant_index<Effect, Card_Hardcast>(): {
		} break;
		case variant_index<Effect, Card_Destroy>(): {
		} break;
		case variant_index<Effect, Card_Attach>(): {
		} break;
		case variant_index<Effect, Card_Counter>(): {
		} break;
		case variant_index<Effect, Card_Play>(): {
		} break;
		case variant_index<Effect, Card_Resolve>(): {
		} break;
		case variant_index<Effect, Card_TriggerDurationEffects>(): {
		} break;
		case variant_index<Effect, Card_PlayUltimate>(): {
		} break;
		case variant_index<Effect, Card_Discard>(): {
		} break;
		case variant_index<Effect, Card_Reveal>(): {
		} break;
		case variant_index<Effect, Card_Draw>(): {
		} break;
		case variant_index<Effect, Terrain_Destroy>(): {
		} break;
		case variant_index<Effect, Terrain_Create>(): {
		} break;
		default:
			assert(false);
			break;
	}
	effects_.emplace_back(effect);
	CurrentPath->Effects.emplace_back(effect);
	return true;
}

//
void Executor::Revert(const Path &path) noexcept {
	assert(path.IsGood());

	for (auto it = path.Effects.rbegin(), end = path.Effects.rend(); it != end; ++it) {
		Revert(*it);
	}
}
void Executor::Execute(const Path &path) noexcept {
	assert(path.IsGood());

	for (auto it = path.Effects.begin(), end = path.Effects.end(); it != end; ++it) {
		Execute(*it);
	}
}
} // namespace IO