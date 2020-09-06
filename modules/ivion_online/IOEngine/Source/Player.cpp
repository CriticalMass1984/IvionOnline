#include <IOEngine/Player.hpp>

#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Tile.hpp>
#include <Util.hpp>
#include <fstream>

namespace IO {
namespace Engine {

Player::Player(GameInstance *instance, const PlayerDef &def) :
		name_(def.displayName_),
		Index(def.index_),
		TeamIndex(def.teamIndex_),
		Position(instance->Map.GetTile(def.start_)),
		Feats(),
		Hand(),
		Discard(),
		Deck(),
		MoveAction(instance->MoveAction),
		BasicAttack(instance->BasicAttack)

{
	std::ifstream file(def.deckName_);
	if (!file.is_open()) {
		fprintf(stderr, "Can't open deck file: '%s'\n", def.deckName_.c_str());
		return;
	}
	const IO::Engine::CardLibrary &library = instance->Library();

	std::string line;
	while (std::getline(file, line)) {
		auto start = line.find_first_of(',');
		if (start == std::string::npos) {
			continue;
		}
		auto end = line.find_last_of(',');
		if (start >= end) {
			continue;
		}
		std::string arch = FixName(line.substr(0, start));
		std::string name = FixName(line.substr(start + 1, end - (start + 1)));
		const int count = std::stoi(ltrim_copy(line.substr(end + 1)));
		printf("Loading '%s' '%s' '%d'\n", arch.c_str(), name.c_str(), count);

		const IO::Engine::CardDef *cardDef = library.GetCard(arch, name);
		if (cardDef == nullptr) {
			fprintf(stderr, "Card not found!\n");
			continue;
		}
		for (int i = 0; i < count; ++i) {
			Card *card = instance->Objects.EmplaceObject<IO::Engine::Card>(instance, this, cardDef);
			if (card->IsFeat()) {
				if (card->Definition()->maxHP_ > 0) {
					this->MaxHealth.Set(card->Definition()->maxHP_).Apply();
				}
				Feats.Insert(card).Apply();
			} else {
				Deck.Insert(card).Apply();
			}
		}
	}
}

Vec2 Player::GetPosition() const {
	assert(Position.Get());
	return Position.Get()->GetPosition();
}
} // namespace Engine
} // namespace IO
