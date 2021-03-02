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

const google::protobuf::Message *GameInstance::ResolvePath(
		const GameState::Card *card,
		const Types::Path *path) {
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
	const google::protobuf::Message *message = &this->instance_.gamestate();

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
				message = &message->GetReflection()->GetRepeatedMessage(*message, fieldDesc, idx);
			} else {
				message = &message->GetReflection()->GetMessage(*message, fieldDesc);
			}
		}
	} else {
		if (path->fullpath().empty()) {
			return nullptr;
		}
		const auto pathParts = Split(path->fullpath());

		// this will clear the full path
		const_cast<Types::Path *>(path)->mutable_fields()->clear_indecies();
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
			const_cast<Types::Path *>(path)->mutable_fields()->add_indecies(fieldDesc->index());
			if (fieldDesc->is_repeated()) {
				const std::string &indexName = *(++fieldName);
				// index given by
				if (auto optIndex = TryParse(indexName); optIndex.has_value()) {
					const int idx = optIndex.value();
					message = &message->GetReflection()->GetRepeatedMessage(*message, fieldDesc, idx);
					const_cast<Types::Path *>(path)->mutable_fields()->add_indecies(idx);
				} else {
					const int idx = GetRepeatedItemByName(*message, fieldDesc, message->GetReflection(), indexName);
					message = &message->GetReflection()->GetRepeatedMessage(*message, fieldDesc, idx);
					const_cast<Types::Path *>(path)->mutable_fields()->add_indecies(idx);
				}
			} else {
				message = &message->GetReflection()->GetMessage(*message, fieldDesc);
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
	} else {
		assert(typeName == "Integer");
		const Types::Integer *vec = dynamic_cast<const Types::Integer *>(message);
		assert(vec != nullptr);
		return int(vec->value());
	}
}
