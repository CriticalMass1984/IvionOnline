#include <Godot/IvionEntity.hpp>

namespace godot {
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
bool IvionEntity::MarkAsOption(int index) {
	if (choiceIndex_ == -1) {
		choiceIndex_ = index;
		return true;
	}
	return false;
}
bool IvionEntity::UnmarkAsOption() {
	if (choiceIndex_ == -1) {
		return false;
	}
	choiceIndex_ = -1;
	return true;
}
bool IvionEntity::SelectAsChoice() {
	if (choiceIndex_ == -1) {
		return false;
	}
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
} // namespace godot