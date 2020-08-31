#pragma once

#include <scene/3d/physics_body_3d.h>

namespace godot {
class IvionEntity : public CollisionObject3D {
	GDCLASS(IvionEntity, CollisionObject3D);
	int choiceIndex_{ -1 };

public:
	void _notification(int p_what);

	//godot api
	void _input_event(Node *p_camera, const Ref<InputEvent> &p_input_event, const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) override;
	virtual void _mouse_enter() override{};
	virtual void _mouse_exit() override{};

	// engine api
	//returns true if the marking was successful (it wasn't marked before)
	virtual bool MarkAsOption(int index);

	//returns true if the marking was successful (it was marked before)
	virtual bool UnmarkAsOption();

	//returns true if successful (branch index was valid, is marked as a choice). Also unmarks
	virtual bool SelectAsChoice();

	// godot callbacks
	virtual void LeftClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {}
	virtual void RightClick(const Vector3 &p_pos, const Vector3 &p_normal, int p_shape) {}
	virtual void MouseEnter() {}
	virtual void MouseLeave() {}
	virtual void Init() {}
	virtual void Update(float deltaTime) {}
	virtual void Delete() {}

	IvionEntity() = default;
	virtual ~IvionEntity() = default;

protected:
	static void _bind_methods();
};
} // namespace godot