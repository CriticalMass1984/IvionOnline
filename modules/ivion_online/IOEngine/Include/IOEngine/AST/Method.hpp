#pragma once

namespace IO {
namespace Engine {
class Branch;
class GameInstance;
class Program;
class Player;
class Card;
class Tile;
class Posable;

namespace AST {
typedef bool (*Method)(GameInstance *instance, Branch *activeBranch, void *self);
} // namespace AST
} // namespace Engine
} // namespace IO