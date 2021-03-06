#include <IOEngine/GameInstance.hpp>

#include <cassert>
namespace IO {

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
		// fprintf(stderr, "Expected Field Name: %s\n", fieldName->c_str());
		const auto *descriptor = message->GetDescriptor();
		const auto *fieldDesc = descriptor->FindFieldByName(*fieldName);

		// printf("Found Field Match: %s\n", fieldDesc->name().c_str());
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

void GameInstance::ApplyHistory(IvionOnline::History *history) {
	assert(history->is_good());
	for (IvionOnline::Mutation &mutation : *history->mutable_mutations()) {
		ApplyMutation(&mutation);
	}
}
void GameInstance::RevertHistory(IvionOnline::History *history) {
	assert(history->is_good());
	for (auto it = history->mutable_mutations()->rbegin(), end = history->mutable_mutations()->rend(); it != end; ++it) {
		RevertMutation(&*it);
	}
}
} // namespace IO