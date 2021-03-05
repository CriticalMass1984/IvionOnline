#include <IOEngine/Util.hpp>

#include <cassert>

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

} // namespace IO