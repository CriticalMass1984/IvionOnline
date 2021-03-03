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
	//
	google::protobuf::Message *message = this->instance_.mutable_gamestate();

	//
	if (path->field_indecies_size() > 0) {
		auto it = path->field_indecies().begin();
		// if (*it == -1) {
		// 	assert(card);
		// 	message = card;
		// 	++it;
		// }
		for (auto end = path->field_indecies().end(); it != end; ++it) {
			const auto *descriptor = message->GetDescriptor();
			assert(*it <= descriptor->field_count());
			const auto *fieldDesc = descriptor->field(*it);
			descriptor = fieldDesc->message_type();
			if (fieldDesc->is_repeated()) {
				const int idx = *(++it);
				message = const_cast<google::protobuf::Message *>(
						&message->GetReflection()->GetRepeatedMessage(*message, fieldDesc, idx));
			} else {
				message = message->GetReflection()->MutableMessage(message, fieldDesc);
			}
		}
	} else {
		if (path->full_path().empty()) {
			return nullptr;
		}
		const auto pathParts = Split(path->full_path());

		// this will clear the full path
		path->mutable_field_indecies()->Clear();
		auto fieldName = pathParts.begin();
		// if (pathParts.front() == ".") {
		// 	assert(card);
		// 	message = card;
		// 	++fieldName;
		// }
		for (auto end = pathParts.end(); fieldName != end; ++fieldName) {
			fprintf(stderr, "Expected Field Name: %s\n", fieldName->c_str());
			const auto *descriptor = message->GetDescriptor();
			const auto *fieldDesc = descriptor->FindFieldByName(*fieldName);

			printf("Found Field Match: %s\n", fieldDesc->name().c_str());
			descriptor = fieldDesc->message_type();
			path->add_field_indecies(fieldDesc->index());
			if (fieldDesc->is_repeated()) {
				const std::string &indexName = *(++fieldName);
				// index given by
				if (auto optIndex = TryParse(indexName); optIndex.has_value()) {
					const int idx = optIndex.value();
					message = message->GetReflection()->MutableRepeatedMessage(message, fieldDesc, idx);
					path->add_field_indecies(idx);
				} else {
					const int idx = GetRepeatedItemByName(*message, fieldDesc, message->GetReflection(), indexName);
					message = message->GetReflection()->MutableRepeatedMessage(message, fieldDesc, idx);
					path->add_field_indecies(idx);
				}
			} else {
				message = message->GetReflection()->MutableMessage(message, fieldDesc);
			}
		}
	}
	return message;
}
