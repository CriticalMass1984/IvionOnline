#include <IOEngine/Types.hpp>

#include <IOEngine/GameState.hpp>

namespace IO {
Tile &Vec2i::GetTile() const noexcept {
	return GameState::State->GetTile(x, y);
}

Vec2i *Vec2iIndex::operator->() const noexcept {
	return &GameState::State->Vec2is[Index];
}
Vec2i &Vec2iIndex::operator*() const noexcept {
	return GameState::State->Vec2is[Index];
}
Integer *IntegerIndex::operator->() const noexcept {
	return &GameState::State->Integers[Index];
}
Integer &IntegerIndex::operator*() const noexcept {
	return GameState::State->Integers[Index];
}
Player *PlayerIndex::operator->() const noexcept {
	return &GameState::State->Players[Index];
}
Player &PlayerIndex::operator*() const noexcept {
	return GameState::State->Players[Index];
}
Tile *TileIndex::operator->() const noexcept {
	return &GameState::State->Tiles[Index];
}
Tile &TileIndex::operator*() const noexcept {
	return GameState::State->Tiles[Index];
}
Card *CardIndex::operator->() const noexcept {
	return &GameState::State->Cards[Index];
}
Card &CardIndex::operator*() const noexcept {
	return GameState::State->Cards[Index];
}

} // namespace IO