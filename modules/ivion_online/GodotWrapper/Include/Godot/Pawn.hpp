#pragma once

#include <Godot/IvionEntity.hpp>

namespace IO {
namespace Engine {
class Player;
class GameInstance;
} // namespace Engine
} // namespace IO

namespace godot {
class Pawn : public IvionEntity {
	GDCLASS(Pawn, IvionEntity);

public:

	enum class Model {
		NONE,
		ARCHMAGE,
		ENCHANTRESS,
		ERRANT,
		ILLUSIONIST,
		INVOKER,
		SAINT
	};
	static constexpr const char *GetModelName(Model m) {
		switch (m) {
			case Model::NONE:
				return "Saint 3";
			case Model::ARCHMAGE:
				return "Archmage";
			case Model::ENCHANTRESS:
				return "Enchantress";
			case Model::ERRANT:
				return "Errant";
			case Model::ILLUSIONIST:
				return "Illusionist";
			case Model::INVOKER:
				return "Invoker";
			case Model::SAINT:
				return "Saint";
			default:
				return "Errant 4";
		}
	}
	static Pawn* New(Pawn::Model m);

	void SetModel(Model);

	//engine api
	bool MarkAsOption(int index) override;
	bool UnmarkAsOption() override;
	bool SelectAsChoice() override;

	// godot callbacks
	void Init() override;
	void Update(float deltaTime) override;
	void Delete() override;

private:
	static void _bind_methods();
};
} // namespace godot