#include <IOEngine/Util.hpp>

#include <cassert>
#include <IOEngine/GameInstance.hpp>

namespace IO {

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

void FillObjectPath(IvionOnline::ObjectPath *obj, const std::string &path) {
	obj->clear_path();
	for (const std::string &part : Split(path)) {
		obj->add_path(part);
	}
}
bool ObjectPathIsValid(const IvionOnline::ObjectPath &objectPath)
{
	return objectPath.path_size() > 0;
}

Vec2i GetPosition(GameInstance* instance, IvionOnline::ObjectPath* objectPath)
{
	switch (objectPath->object_type()) {
		case IvionOnline::ObjectType::TYPE_PLAYER: {
			auto *obj = instance->ResolvePath<IvionOnline::Player>(objectPath);
			assert(obj);
			return Vec2i(obj->position());
		} break;
		case IvionOnline::ObjectType::TYPE_CARD: {
			auto *obj = instance->ResolvePath<IvionOnline::Card>(objectPath);
			assert(obj);
			auto *stats = instance->ResolvePath<IvionOnline::CardData>(obj->mutable_cardstats());
			if(ObjectPathIsValid(stats->attached()))
			{
				return GetPosition(instance, stats->mutable_attached());
			}else{
				return GetPosition(instance, stats->mutable_controller());
			}
		} break;
		case IvionOnline::ObjectType::TYPE_TILE: {
			auto *obj = instance->ResolvePath<IvionOnline::Tile>(objectPath);
			assert(obj);
			return Vec2i(obj->position());
		} break;
		default:
			fprintf(stderr, "Error: %s:%d - GetPosition: type not supported: %d\n", __FILE__, __LINE__, objectPath->object_type());
			throw std::runtime_error("GetPosition: Bad object type");
	}
}
HistoryBranch::HistoryBranch(GameInstance* instance): instance_(instance), previousCurrentPath_(instance->currentHistory_)
{
	instance->currentHistory_ = instance->currentHistory_->add_branches();
}
HistoryBranch::~HistoryBranch()
{
	instance_->currentHistory_ = previousCurrentPath_;
}

} // namespace IO