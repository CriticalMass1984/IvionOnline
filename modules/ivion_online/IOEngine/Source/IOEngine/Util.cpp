#include <IOEngine/Util.hpp>

#include <cassert>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Effect_GENERATED.hpp>
#include <IOEngine/Types_GENERATED.hpp>

namespace IO {

std::vector<std::string> Split(const std::string &path) {
	std::vector<std::string> parts;
	size_t start = path.front() == '/' ? 1 : 0;
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
std::string PrintObjectPath(const IvionOnline::ObjectPath &obj)
{
	std::stringstream stream;
	for(const auto& p : obj.path())
	{
		stream << '/' << p;
	}
	return stream.str();
}
void FillObjectPath(IvionOnline::ObjectPath *obj, const std::string &path, IvionOnline::ObjectType type) {
	obj->clear_path();
	for (const std::string &part : Split(path)) {
		obj->add_path(part);
	}
	obj->set_object_type(type);
}
bool ObjectPathIsValid(const IvionOnline::ObjectPath &objectPath)
{
	return objectPath.path_size() > 0;
}
void CopyObjectPathNoMutation(IvionOnline::ObjectPath* path, const IvionOnline::ObjectPath& src)
{
	path->mutable_path()->CopyFrom(src.path());
	path->set_object_type(src.object_type());
}
bool AreEqual(const IvionOnline::ObjectPath *A, const IvionOnline::ObjectPath *B) {
	const size_t ALen = A->path_size();
	if (ALen != B->path_size()) {
		return false;
	}
	for (size_t i = 0; i < ALen; ++i) {
		if (A->path().Get(i) != B->path().Get(i)) {
			return false;
		}
	}
	return true;
}
int GetElementIndex(google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath> *haystack, const IvionOnline::ObjectPath *needle) {
	// google::protobuf::internal::RepeatedPtrIterator<T>
	for (auto it = haystack->begin(), end = haystack->end(); it != end; ++it) {
		if (AreEqual(&*it, needle)) {
			return it - haystack->begin();
		}
	}
	return -1;
}
Vec2i GetPosition(GameInstance* instance, IvionOnline::ObjectPath* objectPath)
{
	switch (objectPath->object_type()) {
		case IvionOnline::ObjectType::TYPE_PLAYER: {
			auto *obj = ResolvePath<IvionOnline::Player>(instance, objectPath);
			assert(obj);
			return Vec2i(obj->position());
		} break;
		case IvionOnline::ObjectType::TYPE_CARD: {
			auto *obj = ResolvePath<IvionOnline::Card>(instance, objectPath);
			assert(obj);
			auto *stats = ResolvePath<IvionOnline::CardData>(instance, obj->mutable_cardstats());
			if(ObjectPathIsValid(stats->attached()))
			{
				return GetPosition(instance, stats->mutable_attached());
			}else{
				return GetPosition(instance, stats->mutable_controller());
			}
		} break;
		case IvionOnline::ObjectType::TYPE_TILE: {
			auto *obj = ResolvePath<IvionOnline::Tile>(instance, objectPath);
			assert(obj);
			return Vec2i(obj->position());
		} break;
		default:
			fprintf(stderr, "Error: %s:%d - GetPosition: type not supported: %d\n", __FILE__, __LINE__, objectPath->object_type());
			throw std::runtime_error("GetPosition: Bad object type");
	}
}

std::optional<int> TryParse(const std::string &str) noexcept {
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

HistoryBranch::HistoryBranch(GameInstance* instance): instance_(instance), previousCurrentPath_(instance->currentHistory_)
{
	instance->currentHistory_ = instance->currentHistory_->add_branches();
}
HistoryBranch::~HistoryBranch()
{
	instance_->RevertHistory(instance_->currentHistory_);
	instance_->currentHistory_ = previousCurrentPath_;
}

} // namespace IO