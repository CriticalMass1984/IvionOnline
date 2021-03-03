#include <IOEngine/Executor.hpp>

#include <IOEngine/GameInstance.hpp>
#include <cassert>

void Get(GameInstance *instance, Effects::Get *effect) {
	if (effect->mutable_source()->has_integer()) {
		effect->mutable_source()->integer();
	} else if (effect->mutable_source()->has_vec2i()) {
		effect->mutable_source()->vec2i();
	} else if (effect->mutable_source()->has_player()) {
		effect->mutable_source()->player();
	} else if (effect->mutable_source()->has_card()) {
		effect->mutable_source()->card();
	} else if (effect->mutable_source()->has_tile()) {
		effect->mutable_source()->tile();
	}
}
void Constant(GameInstance *instance, Effects::Constant *effect) {
}
void Filter_Distance(GameInstance *instance, Effects::Filter_Distance *effect) {
}
void Select(GameInstance *instance, Effects::Select *effect) {
}
void Move(GameInstance *instance, Effects::Move *effect) {
}
void PassPriority(GameInstance *instance, Effects::PassPriority *effect) {
}
void PassTurn(GameInstance *instance, Effects::PassTurn *effect) {
}

void Apply(GameInstance *instance, Effects::CardEffect *effects) {
	for (auto &effect : *effects->mutable_effects()) {
		if (effect.has_get()) {
			Get(instance, effect.mutable_get());
		} else if (effect.has_constant()) {
			Constant(instance, effect.mutable_constant());
		} else if (effect.has_filter_distance()) {
			Filter_Distance(instance, effect.mutable_filter_distance());
		} else if (effect.has_select()) {
			Select(instance, effect.mutable_select());
		} else if (effect.has_move()) {
			Move(instance, effect.mutable_move());
		} else if (effect.has_passpriority()) {
			PassPriority(instance, effect.mutable_passpriority());
		} else if (effect.has_passturn()) {
			PassTurn(instance, effect.mutable_passturn());
		}
	}
}