#include <Godot/BattleInstance.hpp>
#include <Godot/IvionEntity.hpp>

namespace godot {
void IvionEntity::Move(BattleInstance *instance, const IvionOnline::Vec2i &pos) {
	const int tileIdx = pos.x() + pos.y() * instance->gameInfo_.mapsize().x();
	assert(tileIdx >= 0);
	assert(tileIdx < instance->TileLocations.size());
	this->set_transform(instance->TileLocations[tileIdx]);
}

void IvionEntity::_bind_methods() {
}

void IvionEntity::_notification(int p_what) {
	switch (p_what) {
		case NOTIFICATION_PREDELETE: {
			this->Delete();
		} break;
		case NOTIFICATION_READY: {
			this->set_ray_pickable(true);
			this->Init();
		} break;
		case NOTIFICATION_PROCESS: {
			float delta = get_process_delta_time();
			this->Update(delta);
		} break;
		default:
			break;
	}
}

//engine api
bool IvionEntity::__MarkAsOption(int index) {
	if (choiceIndex_ == -1) {
		choiceIndex_ = index;
		MarkAsOption(index);
		return true;
	}
	return false;
}

//returns true if the marking was successful (it was marked before)
bool IvionEntity::__UnmarkAsOption() {
	if (choiceIndex_ == -1) {
		return false;
	}
	UnmarkAsOption();
	choiceIndex_ = -1;
	return true;
}

//returns true if successful (branch index was valid, is marked as a choice). Also unmarks
bool IvionEntity::__SelectAsChoice() {
	if (choiceIndex_ == -1) {
		return false;
	}
	SelectAsChoice();
	choiceIndex_ = -1;
	return true;
}

//godot api
void IvionEntity::_input_event(Node *p_camera, const Ref<InputEvent> &p_input_event, const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {
	if (auto mouseEvent = Object::cast_to<InputEventMouseButton>(p_input_event.ptr()); mouseEvent) {
		if (mouseEvent->is_pressed()) {
			switch (mouseEvent->get_button_index()) {
				case BUTTON_LEFT:
					this->LeftClick(p_pos, p_normal, p_shape);
					break;
				case BUTTON_RIGHT:
					this->RightClick(p_pos, p_normal, p_shape);
					break;
				case BUTTON_MIDDLE:
				default:
					break;
			}
		}
	}
}

void IvionEntity::LeftClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {
	BattleInstance *const instance = Object::cast_to<BattleInstance>(this->get_node_or_null(NodePath("/Root/BattleInstance")));
	ERR_FAIL_NULL_MSG(instance, "BattleInstance Is NUll");
	if (choiceIndex_ >= 0) {
		instance->SelectChoice(choiceIndex_);
	}
}
void IvionEntity::RightClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {
}
} // namespace godot