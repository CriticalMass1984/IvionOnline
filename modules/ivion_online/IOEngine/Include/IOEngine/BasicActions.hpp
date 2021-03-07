#pragma once

#include <GRPC/GameState.pb.h>

namespace IO {
class GameInstance;
void AddMoveAction(GameInstance *instance, IvionOnline::Player *player);

}