#include <IOEngine/GameInstance.hpp>

#include <IOEngine/BasicActions.hpp>
#include <IOEngine/Mutation_GENERATED.hpp>
#include <IOEngine/Types_GENERATED.hpp>
#include <IOEngine/Util.hpp>

#include <cassert>
namespace IO {

void GameInstance::Init(const IvionOnline::GameInfo &info) {
	Initialize(&gamestate_, IvionOnline::ObjectPath(), "/");

	for (const auto &playerInfo : info.players()) {
		IvionOnline::Player *player = Initialize(gamestate_.mutable_players()->add_element(), gamestate_.mutable_players()->abspath(), playerInfo.uid());
		player->mutable_position()->set_x(playerInfo.startingposition().x());
		player->mutable_position()->set_y(playerInfo.startingposition().y());

		player->mutable_rangesources()->add_element()->CopyFrom(player->abspath());

		// add to team
		assert(playerInfo.teamindex() < 4);
		while (playerInfo.teamindex() >= gamestate_.teams().element_size()) {
			constexpr int kBufferSize = 128;
			char teamName[kBufferSize];
			snprintf(teamName, kBufferSize, "Team #%d", gamestate_.teams().element_size());
			Initialize(gamestate_.mutable_teams()->add_element(), gamestate_.mutable_teams()->abspath(), teamName);
		}
		gamestate_.mutable_teams()->mutable_element()->Mutable(playerInfo.teamindex())->mutable_players()->add_element()->CopyFrom(player->abspath());

		// load basic action cards
		AddMoveAction(this, player);

		// load deck
		for (const auto &cardInfo : playerInfo.deck().cards()) {
			// TOTO : separate server and client knowledge of card -> card data mapping
			constexpr int kBufferSize = 128;
			char cardName[kBufferSize];
			for (int i = 0; i < cardInfo.card_count(); ++i) {
				snprintf(cardName, kBufferSize, "'%s' #%d", cardInfo.card_uid().c_str(), i);

				// init the card data
				auto *cardData = gamestate_.mutable_carddata()->add_element();
				// cardData->CopyFrom(the card loaded fromt he library);
				Initialize(cardData, gamestate_.carddata().abspath(), cardName);

				// init the card
				auto *card = Initialize(gamestate_.mutable_cards()->add_element(), gamestate_.cards().abspath(), cardName);

				// TODO : for release version, we need to hide the mapping from card to card data on clients
				card->mutable_cardstats()->CopyFrom(cardData->abspath());

				player->mutable_deck()->add_element()->CopyFrom(card->abspath());
			}
		}
	}

	// create tiles
	constexpr int kBufferSize = 128;
	char tileName[kBufferSize];
	for (int y = 0; y < info.mapsize().y(); ++y) {
		for (int x = 0; x < info.mapsize().x(); ++x) {
			snprintf(tileName, kBufferSize, "(x: %d, y: %d)", x, y);
			auto *tile = Initialize(this->gamestate_.mutable_tiles()->add_element(), gamestate_.tiles().abspath(), tileName);
			tile->mutable_terrain()->set_value(IvionOnline::Terrain_Terrain_Type_TERRAIN_TYPE_NONE);
			tile->mutable_position()->set_x(x);
			tile->mutable_position()->set_y(y);
		}
	}
}

void GameInstance::ApplyHistory(IvionOnline::History *history) {
	assert(history->is_good());
	for (IvionOnline::Mutation &mutation : *history->mutable_mutations()) {
		ApplyMutation(&mutation);
	}
}
void GameInstance::RevertHistory(IvionOnline::History *history) {
	for (auto it = history->mutable_mutations()->rbegin(), end = history->mutable_mutations()->rend(); it != end; ++it) {
		RevertMutation(&*it);
	}
}
void GameInstance::Step() {
	currentHistory_->Clear();
	this->RootHistory.Clear();
	currentHistory_ = &RootHistory;

	assert(this->gamestate_.teams().element_size() > 0);
	int teamIdx = this->gamestate_.turnnumber().value() % this->gamestate_.teams().element_size();
	for (IvionOnline::ObjectPath &playerPath : *gamestate_.mutable_teams()->mutable_element()->Mutable(teamIdx)->mutable_players()->mutable_element()) {
		fprintf(stderr, "ObjectPath: %s\n", PrintObjectPath(playerPath).c_str());
		auto *player = ResolvePath<IvionOnline::Player>(this, &playerPath);
		// basic actions
		for (auto &actionPath : *player->mutable_basicactions()->mutable_element()) {
			auto *card = ResolvePath<IvionOnline::Card>(this, &actionPath);
			auto *cardData = ResolvePath<IvionOnline::CardData>(this, card->mutable_cardstats());
			// cardData->playeffect().PrintDebugString();
			assert(ObjectIsValid(card));
			assert(ObjectIsValid(cardData));

			HistoryBranch branch(this);
			this->currentCard_ = cardData;
			ExecuteMethods(
					this,
					cardData->mutable_playeffect()->mutable_element()->begin(),
					cardData->mutable_playeffect()->mutable_element()->end());
			this->currentCard_ = nullptr;
		}
	}
}

bool GameInstance::MakeChoice(int choice) {
	assert(currentHistory_);
	if (choice < 0) {
		return false;
	}
	if (choice >= currentHistory_->branches_size()) {
		return false;
	}
	currentHistory_ = currentHistory_->mutable_branches()->Mutable(choice);
	ApplyHistory(currentHistory_);
	return true;
}

} // namespace IO