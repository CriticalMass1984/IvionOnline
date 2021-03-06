#include <IOEngine/BasicActions.hpp>

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
        
        // auto* card->mutable_playeffect()->add_element()->mutable_getlist()->mutable_source();
        auto* selectOne = SetPathData(card->mutable_playeffect()->add_element()->mutable_selectexactlyone(), card, "SelectOne");
        selectOne->mut

        auto* move = SetPathData(card->mutable_playeffect()->add_element()->mutable_move(), card, "Move");
        move->mutable_destination()->CopyFrom(selectOne->result().abspath());
        move->mutable_player()->CopyFrom(player->abspath());
    }
}