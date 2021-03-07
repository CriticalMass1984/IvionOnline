#include <IOEngine/BasicActions.hpp>

#include <IOEngine/Types_GENERATED.hpp>
#include <IOEngine/Util.hpp>

namespace IO {
    void BuildMoveAction(IvionOnline::CardData* card, IvionOnline::Player* player) {
        assert(card->abspath().path_size() > 0);
        card->Clear();
        card->mutable_controller()->CopyFrom(player->abspath());
        card->mutable_owner()->CopyFrom(player->abspath());
        card->mutable_powercost()->set_value(0);
        card->mutable_actioncost()->set_value(1);
        card->mutable_range()->set_value(1);
        card->mutable_affectedbyslow()->set_value(true);
        
        auto* const play = card->mutable_playeffect();

        auto* maxDistance = Initialize(play->add_element()->mutable_integer_constant(), play->abspath(), "MaxDistance");
        maxDistance->mutable_result()->set_value(1);

        auto* getList = Initialize(play->add_element()->mutable_getlist(), play->abspath(), "Tiles");
        FillObjectPath(getList->mutable_source(), "/Tiles");

        auto* distanceFilter = Initialize(play->add_element()->mutable_filterdistance(), play->abspath(), "DistanceFilter");
        distanceFilter->mutable_maxdistance()->CopyFrom(maxDistance->result().abspath());
        FillObjectPath(distanceFilter->mutable_rangesources(), "./Controller/RangeSources");
        distanceFilter->mutable_targets()->CopyFrom(getList->result().abspath());

        auto* selectOne = Initialize(card->mutable_playeffect()->add_element()->mutable_selectexactlyone(), play->abspath(), "SelectOne");
        selectOne->mutable_source()->CopyFrom(getList->result().abspath());

        auto* move = Initialize(play->add_element()->mutable_move(), play->abspath(), "Move");
        move->mutable_destination()->CopyFrom(selectOne->result());
        move->mutable_player()->CopyFrom(player->abspath());
    }
}