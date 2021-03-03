#include <IOEngine/GameInstance.hpp>

#include <cassert>

GameInstance::GameInstance() {}
std::vector<std::string> Split(const std::string &path) {
	std::vector<std::string> parts;
	size_t start = 0;
	size_t end = path.find('/', start);
	if (end != std::string::npos && end > start) {
		parts.emplace_back(path.substr(start, end - start));
		start = end + 1;
		end = path.find('/', start);
	}
	while (end != std::string::npos) {
		if (end > start) {
			parts.emplace_back(path.substr(start, end - start));
		}
		start = end + 1;
		end = path.find('/', start);
	}
	end = path.size();
	if (end > start) {
		parts.emplace_back(path.substr(start, end - start));
	}
	return parts;
}

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

google::protobuf::Message *GameInstance::ResolvePath(
		GameState::Card *card,
		Types::Path *path) {
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
	//
	google::protobuf::Message *message = this->instance_.mutable_gamestate();

	//
	if (path->has_fields()) {
		if (path->fields().indecies().empty()) {
			return nullptr;
		}
		auto it = path->fields().indecies().begin();
		if (*it == -1) {
			assert(card);
			message = card;
			++it;
		}
		for (auto end = path->fields().indecies().end(); it != end; ++it) {
			const auto *descriptor = message->GetDescriptor();
			assert(*it <= descriptor->field_count());
			const auto *fieldDesc = descriptor->field(*it);
			descriptor = fieldDesc->message_type();
			if (fieldDesc->is_repeated()) {
				const int idx = *(++it);
				message = const_cast<google::protobuf::Message *>(
						&message->GetReflection()->GetRepeatedMessage(*message, fieldDesc, idx));
			} else {
				message = const_cast<google::protobuf::Message *>(
						&message->GetReflection()->GetMessage(*message, fieldDesc));
			}
		}
	} else {
		if (path->fullpath().empty()) {
			return nullptr;
		}
		const auto pathParts = Split(path->fullpath());

		// this will clear the full path
		path->mutable_fields()->clear_indecies();
		auto fieldName = pathParts.begin();
		if (pathParts.front() == ".") {
			assert(card);
			message = card;
			++fieldName;
		}
		for (auto end = pathParts.end(); fieldName != end; ++fieldName) {
			fprintf(stderr, "Expected Field Name: %s\n", fieldName->c_str());
			const auto *descriptor = message->GetDescriptor();
			const auto *fieldDesc = descriptor->FindFieldByName(*fieldName);

			printf("Found Field Match: %s\n", fieldDesc->name().c_str());
			descriptor = fieldDesc->message_type();
			path->mutable_fields()->add_indecies(fieldDesc->index());
			if (fieldDesc->is_repeated()) {
				const std::string &indexName = *(++fieldName);
				// index given by
				if (auto optIndex = TryParse(indexName); optIndex.has_value()) {
					const int idx = optIndex.value();
					message = const_cast<google::protobuf::Message *>(
							&message->GetReflection()->GetRepeatedMessage(*message, fieldDesc, idx));
					path->mutable_fields()->add_indecies(idx);
				} else {
					const int idx = GetRepeatedItemByName(*message, fieldDesc, message->GetReflection(), indexName);
					message = const_cast<google::protobuf::Message *>(
							&message->GetReflection()->GetRepeatedMessage(*message, fieldDesc, idx));
					path->mutable_fields()->add_indecies(idx);
				}
			} else {
				message = const_cast<google::protobuf::Message *>(
						&message->GetReflection()->GetMessage(*message, fieldDesc));
			}
		}
	}
	return message;
}

Vec2i GameInstance::GetVec2i(const GameState::Card *card, const google::protobuf::Message *message) {
	const std::string &typeName = message->GetDescriptor()->name();
	if (typeName == "Vec2iValue") {
		const Types::Vec2iValue *vec = dynamic_cast<const Types::Vec2iValue *>(message);
		assert(vec != nullptr);
		if (vec->has_value()) {
			return Vec2i(vec->value());
		} else {
			return GetVec2i(card, &vec->ref());
		}
	} else if (typeName == "Vec2iRef") {
		const Types::Vec2iRef *vec = dynamic_cast<const Types::Vec2iRef *>(message);
		assert(vec != nullptr);
		return GetVec2i(card, ResolvePath(card, &vec->objectpath()));
	} else if (typeName == "EntityRef") {
		const Types::EntityRef *vec = dynamic_cast<const Types::EntityRef *>(message);
		assert(vec != nullptr);
		return GetVec2i(card, ResolvePath(card, &vec->integer().objectpath()));
	} else if (typeName == "EntityValue") {
		const Types::EntityValue *vec = dynamic_cast<const Types::EntityValue *>(message);
		assert(vec != nullptr);
		if (vec->has_vec2i()) {
			return GetVec2i(card,
					ResolvePath(card, &vec->vec2i().objectpath()));
		} else {
			return Vec2i(vec->vec2ivalue());
		}
	} else {
		assert(typeName == "Vec2i");
		const Types::Vec2i *vec = dynamic_cast<const Types::Vec2i *>(message);
		assert(vec != nullptr);
		return Vec2i(*vec);
	}
}

int GameInstance::GetInteger(const GameState::Card *card, const google::protobuf::Message *message) {
	const std::string &typeName = message->GetDescriptor()->name();
	if (typeName == "IntegerValue") {
		const Types::IntegerValue *vec = dynamic_cast<const Types::IntegerValue *>(message);
		assert(vec != nullptr);
		if (vec->has_value()) {
			return int(vec->value().value());
		} else {
			return GetInteger(card, &vec->ref());
		}
	} else if (typeName == "IntegerRef") {
		const Types::IntegerRef *vec = dynamic_cast<const Types::IntegerRef *>(message);
		assert(vec != nullptr);
		return GetInteger(card, ResolvePath(card, &vec->objectpath()));
	} else if (typeName == "EntityRef") {
		const Types::EntityRef *vec = dynamic_cast<const Types::EntityRef *>(message);
		assert(vec != nullptr);
		return GetInteger(card, ResolvePath(card, &vec->integer().objectpath()));
	} else if (typeName == "EntityValue") {
		const Types::EntityValue *vec = dynamic_cast<const Types::EntityValue *>(message);
		assert(vec != nullptr);
		if (vec->has_integer()) {
			return GetInteger(card,
					ResolvePath(card, &vec->integer().objectpath()));
		} else {
			return int(vec->intvalue());
		}
	} else {
		assert(typeName == "Integer");
		const Types::Integer *vec = dynamic_cast<const Types::Integer *>(message);
		assert(vec != nullptr);
		return int(vec->value());
	}
}

void ApplySetMutation(GameInstance &instance, GameState::SetMutation *setMut) {
	auto *obj = instance.ResolvePath(nullptr, setMut->mutable_object());

	if (setMut->newvalue().has_integer()) {
		// everything should be ints
		Types::Integer *integer = dynamic_cast<Types::Integer *>(obj);
		assert(integer);

		int newValue = instance.GetInteger(nullptr, setMut->mutable_newvalue());
		integer->set_value(newValue);
	} else if (setMut->newvalue().has_vec2i()) {
		// everything should be vec2i
		Types::Vec2i *vec = dynamic_cast<Types::Vec2i *>(obj);
		assert(vec);

		Vec2i newValue = instance.GetVec2i(nullptr, setMut->mutable_newvalue());
		newValue.Fill(vec);
	}
}

void RevertSetMutation(GameInstance &instance, GameState::SetMutation *setMut) {
	auto *obj = instance.ResolvePath(nullptr, setMut->mutable_object());

	if (setMut->oldvalue().has_integer()) {
		// everything should be ints
		Types::Integer *integer = dynamic_cast<Types::Integer *>(obj);
		assert(integer);

		int newValue = instance.GetInteger(nullptr, setMut->mutable_oldvalue());
		integer->set_value(newValue);
	} else if (setMut->oldvalue().has_vec2i()) {
		// everything should be vec2i
		Types::Vec2i *vec = dynamic_cast<Types::Vec2i *>(obj);
		assert(vec);

		Vec2i newValue = instance.GetVec2i(nullptr, setMut->mutable_oldvalue());
		newValue.Fill(vec);
	}
}

void ApplyInsertMutation(GameInstance &instance, GameState::InsertMutation *insMut) {
    auto *obj = instance.ResolvePath(nullptr, insMut->mutable_object());
    assert(!insMut->newvalue().has_integer());
    assert(!insMut->newvalue().has_vec2i());
    if(insMut->newvalue().has_player()) {
        auto* players = dynamic_cast<google::protobuf::RepeatedField<Types::PlayerRef>*>(obj);
        players->Add()->CopyFrom(insMut->newvalue().tile());
        const int lastIdx = players->size() - 1;
        if(lastIdx != insMut->index())
        {
            players->SwapElements(lastIdx, insMut->index());
        }
    }else if(insMut->newvalue().has_card()) {
        auto* cards = dynamic_cast<google::protobuf::RepeatedField<Types::CardRef>* >(obj);
        cards->Add()->CopyFrom(insMut->newvalue().tile());
        const int lastIdx = cards->size() - 1;
        if(lastIdx != insMut->index())
        {
            cards->SwapElements(lastIdx, insMut->index());
        }
    }else if(insMut->newvalue().has_tile()) {
        auto* tiles = dynamic_cast<google::protobuf::RepeatedField<Types::TileRef>* >(obj);
        tiles->Add()->CopyFrom(insMut->newvalue().tile());
        const int lastIdx = tiles->size() - 1;
        if(lastIdx != insMut->index())
        {
            tiles->SwapElements(lastIdx, insMut->index());
        }
    }
}

void ApplyRemoveMutation(GameInstance &instance, GameState::RemoveMutation *remMut) {
    auto *obj = instance.ResolvePath(nullptr, remMut->mutable_object());
    assert(!remMut->oldvalue().has_integer());
    assert(!remMut->oldvalue().has_vec2i());

    if(remMut->oldvalue().has_player()) {
        auto* players = dynamic_cast<google::protobuf::RepeatedField<Types::PlayerRef>*>(obj);
        players->SwapElements(remMut->index(), players->size() - 1);
        players->RemoveLast();
    }else if(remMut->oldvalue().has_card()) {
        auto* cards = dynamic_cast<google::protobuf::RepeatedField<Types::CardRef>* >(obj);
        cards->SwapElements(remMut->index(), cards->size() - 1);
        cards->RemoveLast();
    }else if(remMut->oldvalue().has_tile()) {
        auto* tiles = dynamic_cast<google::protobuf::RepeatedField<Types::TileRef>* >(obj);
        tiles->SwapElements(remMut->index(), tiles->size() - 1);
        tiles->RemoveLast();
    }
}

void RevertRemoveMutation(GameInstance &instance, GameState::RemoveMutation *remMut) {
    GameState::InsertMutation insert;
    insert.mutable_object()->CopyFrom(remMut->object());
    insert.mutable_newvalue()->CopyFrom(remMut->oldvalue());
    insert.set_index(remMut->index());
    ApplyInsertMutation(instance, &insert);
}

void RevertInsertMutation(GameInstance &instance, GameState::InsertMutation *remMut) {
    GameState::RemoveMutation remove;
    remove.mutable_object()->CopyFrom(remMut->object());
    remove.mutable_oldvalue()->CopyFrom(remMut->newvalue());
    remove.set_index(remMut->index());
    ApplyRemoveMutation(instance, &remove);
}

void GameInstance::ApplyMutation(GameState::Mutation *mutation) {
	if (mutation->has_set()) {
        ApplySetMutation(*this, mutation->mutable_set());
	}else if (mutation->has_insert()) {
        ApplyInsertMutation(*this, mutation->mutable_insert());
	}else if (mutation->has_remove()) {
        ApplyRemoveMutation(*this, mutation->mutable_remove());
	}
}

void GameInstance::RevertMutation(GameState::Mutation *mutation) {
	if (mutation->has_set()) {
        RevertSetMutation(*this, mutation->mutable_set());
	}else if (mutation->has_insert()) {
        RevertInsertMutation(*this, mutation->mutable_insert());
	}else if (mutation->has_remove()) {
        RevertRemoveMutation(*this, mutation->mutable_remove());
	}
}
