#include <Util.hpp>

std::string FixName(const std::string &originalName) {
	std::stringstream result;
	const std::string trimmed = trim_copy(originalName);
	bool lastSpecial = false;
	for (const char *data = trimmed.data(); *data != 0; ++data) {
		switch (*data) {
			case '\'':
			case ',':
			case ' ':
				if (!lastSpecial) {
					lastSpecial = true;
					result << '_';
				}
				break;
			default:
				lastSpecial = false;
				result << *data;
				break;
		}
	}
	return result.str();
}

std::string FixFilePath(const std::string &originalName) {
	std::string trimmed = trim_copy(originalName);
	for (char *data = const_cast<char *>(trimmed.data()); *data != 0; ++data) {
		switch (*data) {
			case '\'':
				*data = '_';
				break;
			case '\\':
				*data = '/';
				break;
			default:
				break;
		}
	}
	return trimmed;
}