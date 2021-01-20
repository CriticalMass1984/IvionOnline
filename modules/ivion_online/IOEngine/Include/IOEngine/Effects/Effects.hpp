#pragma once

#include <array>
#include <cstdint>
#include <unordered_set>
#include <variant>
#include <vector>

#include <IOEngine/Types.hpp>

namespace IO {

// basic types

/*
template<enum EnumType>
struct Enumeration {
private:
	static std::array<std::unordered_set<Enumeration>, EnumType::__COUNT__> sets_;
	EnumType value_{0};
public:
	Enumeration() noexcept {
		sets_[(int)value_].insert(this);
	}
	Enumeration(Enumeration&& O) : value_(O.value_)
	{
		sets_[(int)value_].insert(this);
	}
	Enumeration(const Enumeration& O) : value_(O.value_)
	{
		sets_[(int)value_].insert(this);
	}
	operator EnumType() const noexcept {return value_;}

	void Set(EnumType v) noexcept {
		sets_[(int)value_].remove(this);
		value_ = v;
		sets_[(int)value_].insert(this);
	}

	~Enumeration() noexcept {
		sets_[(int)value_].remove(this);
	}
};
*/

// type mutations
struct Vec2iMutation {
	Vec2iIndex Index;
	Vec2i Delta;
};

struct IntegerMutation {
	IntegerIndex Index;
	Integer Delta;
};

enum class ControlType {
	SLOW,
	SILENCE,
	DISARM
};

enum class ResourceType {
	ACTIONS,
	POWER,
	INITIATIVE,
	MITIGATE
};

enum class TerrainType {
	NONE,
	DIFFICULT,
	ENCHANTED
};

// Misc
struct Success{};
struct Failure{};

struct GameStart {};
struct TurnStart {
	int16_t TurnNumber;
};
struct TurnEnd {};

// the following player is making the choices
struct Controller {
	PlayerIndex Player;
};
struct ActiveCard {
	CardIndex Card;
};

// basic actions
struct MoveAction {}; // moving with initiative or resources
struct DrawAction {}; // drawing a card with initiative
struct PlayAction {}; // playing a card, followed by Card_Play


//
struct Target {}; // next reference is a target effect

struct Player_Reference {
	PlayerIndex Player;
};

struct Card_Reference {
	CardIndex Card;
};

struct Tile_Reference {
	TileIndex Tile;
};

// how many previous elements are references in the same slice
struct ReferenceCount {
	int8_t Count;
};

// effects
struct Amount { // next effects are scaled by this amount
	int8_t Amount;
};

struct Position { // next effects are scaled by this amount
	Vec2i Position;
};

struct Player_SpendResource {};
struct Player_GainResource {};
struct Player_RefundResource {};

struct Player_Damage {};

struct Player_Move {};

struct Player_Travel {};

struct Player_Control {
	ControlType Type;
};

struct Player_RemoveControl {
	ControlType Type;
};

struct Player_SecondWind {};
struct Player_Heal {};
struct Player_Scry {};

struct Card_Heroic {};
struct Card_Frenzy {};
struct Card_Advantage {};
struct Card_Hardcast {};

struct Card_Destroy {};
struct Card_Attach {};
struct Card_Counter {};
struct Card_Play {}; // play a card
struct Card_Resolve {};
struct Card_TriggerDurationEffects {};
struct Card_PlayUltimate {};
struct Card_Discard {};
struct Card_Reveal {};
struct Card_Draw {};

struct Terrain_Destroy {};
struct Terrain_Create {
	TerrainType Type;
};

typedef std::variant<
		std::monostate,
		Vec2iMutation,
		IntegerMutation,
		Success,
		Failure,
		GameStart,
		TurnStart,
		TurnEnd,
		Controller,
		ActiveCard,
		MoveAction,
		DrawAction,
		PlayAction,
		Target,
		Player_Reference,
		Card_Reference,
		Tile_Reference,
		ReferenceCount,
		Amount,
		Player_SpendResource,
		Player_GainResource,
		Player_RefundResource,
		Player_Damage,
		Player_Move,
		Player_Travel,
		Player_Control,
		Player_RemoveControl,
		Player_SecondWind,
		Player_Heal,
		Player_Scry,
		Card_Heroic,
		Card_Frenzy,
		Card_Advantage,
		Card_Hardcast,
		Card_Destroy,
		Card_Attach,
		Card_Counter,
		Card_Play,
		Card_Resolve,
		Card_TriggerDurationEffects,
		Card_PlayUltimate,
		Card_Discard,
		Card_Reveal,
		Card_Draw,
		Terrain_Destroy,
		Terrain_Create>
		Effect;

template <typename VariantType, typename T, std::size_t index = 0>
constexpr std::size_t variant_index() {
	if constexpr (index == std::variant_size_v<VariantType>) {
		return index;
	} else if constexpr (std::is_same_v<std::variant_alternative_t<index, VariantType>, T>) {
		return index;
	} else {
		return variant_index<VariantType, T, index + 1>();
	}
}

} // namespace IO