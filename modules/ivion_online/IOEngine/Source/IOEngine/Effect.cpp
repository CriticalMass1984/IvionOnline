#include <IOEngine/Effect_GENERATED.hpp>
#include <IOEngine/Mutation_GENERATED.hpp>

#include <cassert>

namespace IO {

bool __GetList(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::List_ObjectPath *Result, IvionOnline::ObjectPath *Source) {
	Result->Clear();
	switch (Source->object_type()) {
		case IvionOnline::ObjectType::TYPE_LIST_PLAYER: {
			auto *list = dynamic_cast<IvionOnline::List_Player *>(instance->ResolvePath(Source));
			assert(list);
			for (auto &element : *list->mutable_element()) {
				Append(instance, Result, &element);
			}
		} break;
		case IvionOnline::ObjectType::TYPE_LIST_CARD: {
			auto *list = dynamic_cast<IvionOnline::List_Card *>(instance->ResolvePath(Source));
			assert(list);
			for (auto &element : *list->mutable_element()) {
				Append(instance, Result, &element);
			}
		} break;
		case IvionOnline::ObjectType::TYPE_LIST_TILE: {
			auto *list = dynamic_cast<IvionOnline::List_Tile *>(instance->ResolvePath(Source));
			assert(list);
			for (auto &element : *list->mutable_element()) {
				Append(instance, Result, &element);
			}
		} break;
		default:
			fprintf(stderr, "Error: %s:%d - __GetList: type not supported: %d\n", __FILE__, __LINE__, Source->object_type());
			return false;
	}
	return ExecuteMethods(instance, begin, end);
}
template <typename Lambda>
void MakeChoice(std::vector<int> &choices, int start, int end, const int Number, const bool upTo, Lambda &lambda) {
	if (upTo || choices.size() == Number) {
		lambda(choices);
	}
	if (choices.size() < Number) {
		for (int i = start; i < end; ++i) {
			choices.emplace_back(i);
			MakeChoice(choices, i + 1, end, Number, upTo);
			choices.pop_back();
		}
	}
};
bool __SelectMultiple(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::List_ObjectPath *Result, IvionOnline::List_ObjectPath *Source, IvionOnline::Integer *Number, IvionOnline::Boolean *UpTo) {
	bool anyGoodBranch = false;

	auto makeSelection = [&](const std::vector<int> &choices) {
		auto currentHistory = instance->currentHistory_;
		instance->currentHistory_ = currentHistory->add_branches();

		for (int i : choices) {
            Append(instance, Result, &Source->element().Get(i));
		}

		//
		if (ExecuteMethods(instance, begin, end)) {
			anyGoodBranch = true;
			instance->currentHistory_->set_is_good(true);
		} else {
			instance->currentHistory_->set_is_good(false);
		}

		//
		instance->currentHistory_ = currentHistory;
	};
}
bool __SelectExactlyOne(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::ObjectPath *Result, IvionOnline::List_ObjectPath *Source) {}
bool __AssertControlOrHeroic(GameInstance *instance, MethodIter begin, const MethodIter &end) {}
bool __AssertControllerHasPriority(GameInstance *instance, MethodIter begin, const MethodIter &end) {}
bool __AssertStackEmptyOrInstant(GameInstance *instance, MethodIter begin, const MethodIter &end) {}
bool __PayCost(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Card *Card, IvionOnline::Integer *ActionCostReduction, IvionOnline::Integer *PowerCostReduction, IvionOnline::Integer *CostReduction, IvionOnline::Boolean *Free) {}
bool __PlayGainResources(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Card *Card) {}
bool __RefundCost(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Card *Card) {}
bool __GainActions(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Integer *Value) {}
bool __GainPower(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Integer *Value) {}
bool __Move(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Tile *Destination) {}
bool __Travel(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Tile *Destination) {}
bool __Damage(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Integer *Amount) {}
bool __Boolean_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Boolean *Result) {}
bool __Integer_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Integer *Result) {}
bool __Vec2i_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Vec2i *Result) {}
bool __Terrain_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Terrain *Result) {}
bool __Color_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Color *Result) {}
bool __ObjectPath_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::ObjectPath *Result) {}

} // namespace IO