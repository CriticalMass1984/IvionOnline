#include <IOEngine/Effect_GENERATED.hpp>
#include <IOEngine/Mutation_GENERATED.hpp>
#include <IOEngine/Util.hpp>

#include <cassert>

namespace IO {

bool __GetList(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::List_ObjectPath *Result, IvionOnline::ObjectPath *Source) {
	Result->clear_element();
	switch (Source->object_type()) {
		case IvionOnline::ObjectType::TYPE_PLAYER: {
			auto *obj = ResolvePath<IvionOnline::Player>(instance, Source);
			assert(obj);
			Append(instance, Result, obj);
		} break;
		case IvionOnline::ObjectType::TYPE_LIST_PLAYER: {
			auto *list = ResolvePath<IvionOnline::List_Player>(instance, Source);
			assert(list);
			for (auto &element : *list->mutable_element()) {
				Append(instance, Result, &element);
			}
		} break;
		case IvionOnline::ObjectType::TYPE_CARD: {
			auto *obj = ResolvePath<IvionOnline::Card>(instance, Source);
			assert(obj);
			Append(instance, Result, obj);
		} break;
		case IvionOnline::ObjectType::TYPE_LIST_CARD: {
			auto *list = ResolvePath<IvionOnline::List_Card>(instance, Source);
			assert(list);
			for (auto &element : *list->mutable_element()) {
				Append(instance, Result, &element);
			}
		} break;
		case IvionOnline::ObjectType::TYPE_TILE: {
			auto *obj = ResolvePath<IvionOnline::Tile>(instance, Source);
			assert(obj);
			Append(instance, Result, obj);
		} break;
		case IvionOnline::ObjectType::TYPE_LIST_TILE: {
			auto *list = ResolvePath<IvionOnline::List_Tile>(instance, Source);
			assert(list);
			for (auto &element : *list->mutable_element()) {
				Append(instance, Result, &element);
			}
		} break;
		default:
			fprintf(stderr, "Error: %s:%d - __GetList: type not supported: %d : '%s'\n", __FILE__, __LINE__, Source->object_type(), PrintObjectPath(*Source).c_str());
			throw std::runtime_error("Bad Type");
			return false;
	}
	return ExecuteMethods(instance, begin, end);
}
bool __FilterDistance(GameInstance* instance, MethodIter begin, const MethodIter& end, IvionOnline::List_ObjectPath* Targets, IvionOnline::List_ObjectPath* RangeSources, IvionOnline::Integer* MaxDistance)
{
	assert(Targets);
	assert(RangeSources);
	assert(MaxDistance);
	const int maxDistance = MaxDistance->value();
	auto isInRange = [&](IvionOnline::ObjectPath* object){
		const Vec2i tgtPos = GetPosition(instance, object);
		for(auto& src : *RangeSources->mutable_element())
		{
			const Vec2i srcPos = GetPosition(instance, &src);
			if(tgtPos.Distance(srcPos) <= maxDistance)
			{
				return true;
			}
		}
		return false;
	};
	auto* elements = Targets->mutable_element();
	for(auto it = elements->begin(), end = elements->end(); it != end;)
	{
		if(isInRange(&*it))
		{
			++it;
		}else{
			it = elements->erase(it);
		}
	}
	return ExecuteMethods(instance, begin, end);
}
template <typename Lambda>
bool MakeChoice(std::vector<int> &choices, int start, int end, const int Number, const bool upTo, Lambda &lambda) {
	bool anyGoodBranch = false;
	if (upTo || choices.size() == Number) {
		if (lambda(choices)) {
			anyGoodBranch = true;
		}
	}
	if (choices.size() < Number) {
		for (int i = start; i < end; ++i) {
			choices.emplace_back(i);
			if (MakeChoice(choices, i + 1, end, Number, upTo, lambda)) {
				anyGoodBranch = true;
			}
			choices.pop_back();
		}
	}
	return anyGoodBranch;
};
bool __SelectMultiple(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::List_ObjectPath *Result, IvionOnline::List_ObjectPath *Source, IvionOnline::Integer *Number, IvionOnline::Boolean *UpTo) {
	auto makeSelection = [&](const std::vector<int> &choices) -> bool {
		HistoryBranch branch(instance);

		for (int i : choices) {
			Append(instance, Result, &Source->element().Get(i));
		}

		//
		if (ExecuteMethods(instance, begin, end)) {
			instance->currentHistory_->set_is_good(true);
			return true;
		} else {
			instance->currentHistory_->set_is_good(false);
			return false;
		}
	};

	std::vector<int> choices;
	return MakeChoice(choices, 0, Source->element_size(), Number->value(), UpTo->value(), makeSelection);
}
bool __SelectExactlyOne(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::ObjectPath *Result, IvionOnline::List_ObjectPath *Source) {
	bool anyGoodBranch = false;
	for (const IvionOnline::ObjectPath &object : Source->element()) {
		HistoryBranch branch(instance);

		Set(instance, Result, &object);

		if (ExecuteMethods(instance, begin, end)) {
			instance->currentHistory_->set_is_good(true);
			anyGoodBranch = true;
		} else {
			instance->currentHistory_->set_is_good(false);
		}
	}
	return anyGoodBranch;
}
bool __AssertControlOrHeroic(GameInstance *instance, MethodIter begin, const MethodIter &end) {
	// TODO
	return ExecuteMethods(instance, begin, end);
}
bool __AssertControllerHasPriority(GameInstance *instance, MethodIter begin, const MethodIter &end) {
	// TODO
	return ExecuteMethods(instance, begin, end);
}
bool __AssertStackEmptyOrInstant(GameInstance *instance, MethodIter begin, const MethodIter &end) {
	// TODO
	return ExecuteMethods(instance, begin, end);
}
bool __ReduceCost(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Card *Card, IvionOnline::Integer *ActionCostReduction, IvionOnline::Integer *PowerCostReduction, IvionOnline::Integer *CostReduction, IvionOnline::Boolean *Free) {
	auto *cardStats = ResolvePath<IvionOnline::CardData>(instance, Card->mutable_cardstats());

	if (Free->value()) {
		Set(instance, cardStats->mutable_actioncost(), 0);
		Set(instance, cardStats->mutable_powercost(), 0);
		return ExecuteMethods(instance, begin, end);
	}

	const int actionRed = ActionCostReduction->value();
	const int powerRed = PowerCostReduction->value();
	const int genRed = CostReduction->value();

	// cost cant be reduced
	if (cardStats->actioncost().value() >= 0 && actionRed > 0) {
		return false;
	}

	// cost cant be reduced
	if (cardStats->powercost().value() >= 0 && powerRed > 0) {
		return false;
	}

	const int baseActionCost = cardStats->actioncost().value() < 0 ? std::max(-cardStats->actioncost().value() - actionRed, 1) : 0;
	const int basePowerCost = cardStats->powercost().value() < 0 ? std::max(-cardStats->powercost().value() - powerRed, 1) : 0;

	// single path
	{
		int actionCost = baseActionCost;
		int powerCost = basePowerCost;
		if (genRed == 0) {
			Set(instance, cardStats->mutable_actioncost(), actionCost);
			Set(instance, cardStats->mutable_powercost(), powerCost);
			return ExecuteMethods(instance, begin, end);
		}
		if (baseActionCost <= 1) {
			powerCost -= genRed;
			Set(instance, cardStats->mutable_actioncost(), actionCost);
			Set(instance, cardStats->mutable_powercost(), powerCost);
			return ExecuteMethods(instance, begin, end);
		}
		if (basePowerCost <= 1) {
			actionCost -= genRed;
			Set(instance, cardStats->mutable_actioncost(), actionCost);
			Set(instance, cardStats->mutable_powercost(), powerCost);
			return ExecuteMethods(instance, begin, end);
		}
	}

	bool anyGoodBranch = false;
	for (int actionCost = baseActionCost; baseActionCost - actionCost <= genRed; --actionCost) {
		for (int powerCost = basePowerCost; basePowerCost - powerCost <= genRed; --powerCost) {
			// total reduction can't exceed the genRed
			if ((baseActionCost - actionCost) + (basePowerCost - powerCost) > genRed) {
				continue;
			}
			HistoryBranch branch(instance);


			Set(instance, cardStats->mutable_actioncost(), actionCost);
			Set(instance, cardStats->mutable_powercost(), powerCost);

			if (ExecuteMethods(instance, begin, end)) {
				instance->currentHistory_->set_is_good(true);
				anyGoodBranch = true;
			} else {
				instance->currentHistory_->set_is_good(false);
			}
		}
	}
	return anyGoodBranch;
}
bool __PayCost(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Card *Card) {
	// costs are negative values
	const auto *cardStats = ResolvePath<IvionOnline::CardData>(instance, Card->mutable_cardstats());
	const int actionCost = cardStats->actioncost().value() < 0 ? -cardStats->actioncost().value() : 0;
	const int powerCost = cardStats->powercost().value() < 0 ? -cardStats->powercost().value() : 0;

	if (Player->actions().value() < actionCost || Player->power().value() < powerCost) {
		return false;
	}

	Set(instance, Player->mutable_actions(), Player->actions().value() - actionCost);
	Set(instance, Player->mutable_power(), Player->power().value() - powerCost);

	return ExecuteMethods(instance, begin, end);
}
bool __PlayGainResources(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Card *Card) {
	// costs are negative values
	const auto *cardStats = ResolvePath<IvionOnline::CardData>(instance, Card->mutable_cardstats());
	const int actionGain = cardStats->actioncost().value() > 0 ? cardStats->actioncost().value() : 0;
	const int powerGain = cardStats->powercost().value() > 0 ? cardStats->powercost().value() : 0;

	Set(instance, Player->mutable_actions(), std::min(Player->actions().value() + actionGain, Player->maxactions().value()));
	Set(instance, Player->mutable_power(), std::min(Player->power().value() + powerGain, Player->maxpower().value()));

	return ExecuteMethods(instance, begin, end);
}
bool __RefundCost(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Card *Card) {
	const auto *cardStats = ResolvePath<IvionOnline::CardData>(instance, Card->mutable_cardstats());
	const int actionCost = cardStats->actioncost().value() < 0 ? -cardStats->actioncost().value() : 0;
	const int powerCost = cardStats->powercost().value() < 0 ? -cardStats->powercost().value() : 0;

	Set(instance, Player->mutable_actions(), std::min(Player->actions().value() + actionCost, Player->maxactions().value()));
	Set(instance, Player->mutable_power(), std::min(Player->power().value() + powerCost, Player->maxpower().value()));

	return ExecuteMethods(instance, begin, end);
}
bool __GainActions(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Integer *Value) {
	Set(instance, Player->mutable_actions(), std::min(Player->actions().value() + Value->value(), Player->maxactions().value()));
	return ExecuteMethods(instance, begin, end);
}
bool __GainPower(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Integer *Value) {
	Set(instance, Player->mutable_power(), std::min(Player->power().value() + Value->value(), Player->maxpower().value()));
	return ExecuteMethods(instance, begin, end);
}
bool __Move(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Tile *Destination) {
	Set(instance, Player->mutable_position(), Destination->mutable_position());
	return ExecuteMethods(instance, begin, end);
}
bool __Travel(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Tile *Destination) {
	Set(instance, Player->mutable_position(), Destination->mutable_position());
	return ExecuteMethods(instance, begin, end);
}
bool __Damage(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Player *Player, IvionOnline::Integer *Amount) {
	Set(instance, Player->mutable_health(), Player->health().value() - Amount->value());
	return ExecuteMethods(instance, begin, end);
}
bool __Boolean_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Boolean *Result) {
	return ExecuteMethods(instance, begin, end);
}
bool __Integer_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Integer *Result) {
	return ExecuteMethods(instance, begin, end);
}
bool __Vec2i_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Vec2i *Result) {
	return ExecuteMethods(instance, begin, end);
}
bool __Terrain_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Terrain *Result) {
	return ExecuteMethods(instance, begin, end);
}
bool __Color_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::Color *Result) {
	return ExecuteMethods(instance, begin, end);
}
bool __ObjectPath_Constant(GameInstance *instance, MethodIter begin, const MethodIter &end, IvionOnline::ObjectPath *Result) {
	return ExecuteMethods(instance, begin, end);
}

} // namespace IO