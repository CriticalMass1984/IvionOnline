#include <IOEngine/BasicActions.hpp>

#include <IOEngine/Effect_GENERATED.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Types_GENERATED.hpp>
#include <IOEngine/Util.hpp>

namespace IO {
void AddMoveAction(GameInstance *instance, IvionOnline::Player *player) {
	constexpr int kBufferSize = 128;
	char Name[kBufferSize];
	{
		int len = snprintf(Name, kBufferSize, "Move_%d", instance->gamestate_.carddata().element_size());
		assert(len < kBufferSize);
	}

	auto *cardData = Initialize(instance->gamestate_.mutable_carddata()->add_element(), instance->gamestate_.mutable_carddata()->abspath(), Name);
	auto *card = Initialize(instance->gamestate_.mutable_cards()->add_element(), instance->gamestate_.mutable_cards()->abspath(), Name);

	// add action
	card->mutable_cardstats()->CopyFrom(cardData->abspath());
	player->mutable_basicactions()->add_element()->CopyFrom(card->abspath());

	// configure action
	cardData->mutable_controller()->CopyFrom(player->abspath());
	cardData->mutable_owner()->CopyFrom(player->abspath());
	cardData->mutable_powercost()->set_value(0);
	cardData->mutable_actioncost()->set_value(1);
	cardData->mutable_range()->set_value(1);
	cardData->mutable_affectedbyslow()->set_value(true);
	cardData->set_basicaction(true);

	auto *const play = cardData->mutable_playeffect();
	assert(ObjectIsValid(play));

	auto *getList = Initialize(play->add_element()->mutable_getlist(), play->abspath(), "Tiles");
	CopyObjectPathNoMutation(getList->mutable_source(), instance->gamestate_.tiles().abspath());
	assert(ObjectIsValid(getList));
	assert(ObjectIsValid(&getList->result()));

	auto *maxDistance = Initialize(play->add_element()->mutable_integer_constant(), play->abspath(), "MaxDistance");
	maxDistance->mutable_result()->set_value(1);
	assert(ObjectIsValid(maxDistance));
	assert(ObjectIsValid(&maxDistance->result()));

	auto *distanceFilter = Initialize(play->add_element()->mutable_filterdistance(), play->abspath(), "DistanceFilter");
	CopyObjectPathNoMutation(distanceFilter->mutable_maxdistance(), maxDistance->result().abspath());
	FillObjectPath(distanceFilter->mutable_rangesources(), "./Controller/RangeSources", IvionOnline::ObjectType::TYPE_OBJECTPATH);
	CopyObjectPathNoMutation(distanceFilter->mutable_targets(), getList->result().abspath());
	assert(ObjectIsValid(distanceFilter));

	auto *selectOne = Initialize(play->add_element()->mutable_selectexactlyone(), play->abspath(), "SelectOne");
	CopyObjectPathNoMutation(selectOne->mutable_source(), getList->result().abspath());
	assert(ObjectIsValid(selectOne));

	auto *move = Initialize(play->add_element()->mutable_move(), play->abspath(), "Move");
	CopyObjectPathNoMutation(move->mutable_destination(), selectOne->result().abspath());
	CopyObjectPathNoMutation(move->mutable_player(), player->abspath());
	assert(ObjectIsValid(move));

	assert(ObjectIsValid(card));
	assert(ObjectIsValid(cardData));
}
} // namespace IO