#pragma once

#include <Godot/Player.hpp>

#include <scene/gui/rich_text_label.h>

namespace godot {
class HostController : public Node {
	GDCLASS(HostController, Node);
	Player* player_;
public:
    void _notification(int p_what);


	RichTextLabel* hpLabel_;
	RichTextLabel* actionsLabel_;
	RichTextLabel* powerLabel_;
protected:
	static void _bind_methods();
};
} // namespace godot