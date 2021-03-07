#include <IOEngine/GameInstance.hpp>

#include <IOEngine/BasicActions.hpp>
#include <IOEngine/Effect_GENERATED.hpp>
#include <IOEngine/Mutation_GENERATED.hpp>
#include <IOEngine/Types_GENERATED.hpp>
#include <IOEngine/Util.hpp>

#include <cassert>
namespace IO {

std::optional<int> TryParse(const std::string &str) {
	int value = 0;
	for (char c : str) {
		int v = 0;
		switch (c) {
			case '0':
				v = 0;
				break;
			case '1':
				v = 1;
				break;
			case '2':
				v = 2;
				break;
			case '3':
				v = 3;
				break;
			case '4':
				v = 4;
				break;
			case '5':
				v = 5;
				break;
			case '6':
				v = 6;
				break;
			case '7':
				v = 7;
				break;
			case '8':
				v = 8;
				break;
			case '9':
				v = 9;
				break;
			default:
				return {};
		}
		value = value * 10 + v;
	}
	return value;
}

google::protobuf::Message *GameInstance::ResolvePath(IvionOnline::ObjectPath *path) {
	//
	auto GetRepeatedItemByName = [](
										 const google::protobuf::Message &message,
										 const google::protobuf::FieldDescriptor *fieldDesc,
										 const google::protobuf::Reflection *field,
										 const std::string &name) -> int {
		const int size = field->FieldSize(message, fieldDesc);
		for (int idx = 0; idx < size; ++idx) {
			const auto &innerMessage = field->GetRepeatedMessage(message, fieldDesc, idx);

			// message has a Name field
			const auto *nameFieldDesc = innerMessage.GetDescriptor()->FindFieldByName("Name");
			if (nameFieldDesc && nameFieldDesc->type() == google::protobuf::FieldDescriptor::Type::TYPE_STRING) {
				if (innerMessage.GetReflection()->GetString(innerMessage, nameFieldDesc) == name) {
					return idx;
				}
			}
		}
		return -1;
	};

	assert(path);
	if (path->path().empty()) {
		return nullptr;
	}

	//
	google::protobuf::Message *message = &this->gamestate_;

	// this will clear the full path
	auto fieldName = path->path().begin();
	if (*fieldName == ".") {
		assert(this->currentCard_);
		message = this->currentCard_;
		++fieldName;
	}
	for (auto end = path->path().end(); fieldName != end; ++fieldName) {
		fprintf(stderr, "Expected Field Name: %s\n", fieldName->c_str());
		const auto *descriptor = message->GetDescriptor();
		assert(descriptor);
		const auto *fieldDesc = descriptor->FindFieldByName(*fieldName);
		assert(fieldDesc);

		printf("Found Field Match: %s\n", fieldDesc->name().c_str());
		descriptor = fieldDesc->message_type();
		if (fieldDesc->is_repeated()) {
			const std::string &indexName = *(++fieldName);
			// index given by
			if (auto optIndex = TryParse(indexName); optIndex.has_value()) {
				const int idx = optIndex.value();
				message = message->GetReflection()->MutableRepeatedMessage(message, fieldDesc, idx);
			} else {
				const int idx = GetRepeatedItemByName(*message, fieldDesc, message->GetReflection(), indexName);
				message = message->GetReflection()->MutableRepeatedMessage(message, fieldDesc, idx);
			}
		} else {
			message = message->GetReflection()->MutableMessage(message, fieldDesc);
		}
	}
	return message;
}

void GameInstance::Init(const IvionOnline::GameInfo &info) {
	Initialize(&gamestate_, IvionOnline::ObjectPath(), "/");

	for (const auto &playerInfo : info.players()) {
		IvionOnline::Player *player = Initialize(gamestate_.mutable_players()->add_element(), gamestate_.mutable_players()->abspath(), playerInfo.uid());
		player->mutable_position()->set_x(playerInfo.startingposition().x());
		player->mutable_position()->set_y(playerInfo.startingposition().y());

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
		auto *player = ResolvePath<IvionOnline::Player>(&playerPath);
		// basic actions
		for (auto &actionPath : *player->mutable_basicactions()->mutable_element()) {
			auto *card = ResolvePath<IvionOnline::Card>(&actionPath);
			auto *cardData = ResolvePath<IvionOnline::CardData>(card->mutable_cardstats());

			HistoryBranch branch(this);

			ExecuteMethods(
					this,
					cardData->mutable_playeffect()->mutable_element()->begin(),
					cardData->mutable_playeffect()->mutable_element()->end());
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