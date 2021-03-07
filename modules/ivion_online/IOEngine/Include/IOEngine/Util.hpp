#pragma once

#include <GRPC/GameState.pb.h>
#include <IOEngine/Util.hpp>
#include <IOEngine/Vec2i.hpp>
#include <string>
#include <sstream>

namespace IO {
class GameInstance;
std::vector<std::string> Split(const std::string &path);
void FillObjectPath(IvionOnline::ObjectPath *obj, const std::string &path);

template<typename T>
std::string PrintObjectPath(const T &obj)
{
	std::stringstream stream;
	for(const auto& p : obj.abspath().path())
	{
		stream << p;
	}
	return stream.str();
}

template<typename T>
T* SetPathData(T *obj, IvionOnline::ObjectPath *root, const std::string &name)
{
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(*root);
	obj->mutable_abspath()->add_path(name);
	return obj;
}

template<typename T, typename R>
T* SetPathData(T *obj, R *root, const std::string &name)
{
	obj->set_name(name);
	obj->mutable_abspath()->CopyFrom(root->abspath());
	obj->mutable_abspath()->add_path(name);
	return obj;
}

bool AreEqual(const IvionOnline::ObjectPath *A, const IvionOnline::ObjectPath *B);

int GetElementIndex(google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath> *haystack, const IvionOnline::ObjectPath *needle);

template <typename T>
int GetElementIndex(google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath> *haystack, const T *needle) {
	// google::protobuf::internal::RepeatedPtrIterator<T>
	for (auto it = haystack->begin(), end = haystack->end(); it != end; ++it) {
		if (AreEqual(&*it, &needle->abspath())) {
			return it - haystack->begin();
		}
	}
	return -1;
}

template <typename T>
int GetElementIndex(google::protobuf::RepeatedPtrField<T> *haystack, const T *needle) {
	// google::protobuf::internal::RepeatedPtrIterator<T>
	for (auto it = haystack->begin(), end = haystack->end(); it != end; ++it) {
		if (AreEqual(&it->abspath(), &needle->abspath())) {
			return it - haystack->begin();
		}
	}
	return -1;
}
bool ObjectPathIsValid(const IvionOnline::ObjectPath &objectPath);
Vec2i GetPosition(GameInstance *instance, IvionOnline::ObjectPath *objectPath);

struct HistoryBranch {
	GameInstance* instance_;
	IvionOnline::History* previousCurrentPath_;
	HistoryBranch(GameInstance* instance);
	~HistoryBranch();
};

} // namespace IO