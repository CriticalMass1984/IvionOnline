#include <Godot/HostController.hpp>

namespace godot {
void HostController::_bind_methods() {
}

void HostController::_notification(int p_what) {
	switch (p_what) {
		case NOTIFICATION_READY: {
			Node *child;

			child = get_node_or_null(NodePath("Camera/MainPanel/HP_Label"));
			ERR_FAIL_NULL_MSG(child, "HP_Label was null!");
			hpLabel_ = Object::cast_to<RichTextLabel>(child);
			ERR_FAIL_NULL_MSG(hpLabel_, "HP_Label was not RichTextLabel!");

			child = get_node_or_null(NodePath("Camera/MainPanel/Actions_Label"));
			ERR_FAIL_NULL_MSG(child, "Actions_Label was null!");
			actionsLabel_ = Object::cast_to<RichTextLabel>(child);
			ERR_FAIL_NULL_MSG(actionsLabel_, "Actions_Label was not RichTextLabel!");

			child = get_node_or_null(NodePath("Camera/MainPanel/Power_Label"));
			ERR_FAIL_NULL_MSG(child, "Power_Label was null!");
			powerLabel_ = Object::cast_to<RichTextLabel>(child);
			ERR_FAIL_NULL_MSG(powerLabel_, "Power_Label was not RichTextLabel!");
		} break;
		case NOTIFICATION_PROCESS:
			// float delta = get_process_delta_time();
			break;
		case NOTIFICATION_PREDELETE:
			break;
		default:
			break;
	}
}

// void HostController::SetHealth(int value)
// {
//     ERR_FAIL_NULL_MSG(hpLabel, "hpLabel was null!");
//     char buffer[32];
//     snprintf(buffer, 32, "Health: %d", value);
//     hpLabel->set_text(buffer);
// }
// void HostController::SetActions(int value)
// {
//     ERR_FAIL_NULL_MSG(actionsLabel, "actionsLabel was null!");
//     char buffer[32];
//     snprintf(buffer, 32, "Actions: %d", value);
//     actionsLabel->set_text(buffer);
// }
// void HostController::SetPower(int value)
// {
//     ERR_FAIL_NULL_MSG(powerLabel, "powerLabel was null!");
//     char buffer[32];
//     snprintf(buffer, 32, "Power: %d", value);
//     powerLabel->set_text(buffer);
// }
} // namespace godot