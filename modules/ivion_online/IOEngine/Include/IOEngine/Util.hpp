#pragma once

#include <GRPC/GameState.pb.h>
#include <string>

namespace IO {

void FillObjectPath(IvionOnline::ObjectPath *obj, const std::string &path);

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

template <typename T>
int GetElementIndex(google::protobuf::RepeatedPtrField<IvionOnline::ObjectPath> *haystack, T *needle) {
	// google::protobuf::internal::RepeatedPtrIterator<T>
	for (auto it = haystack->begin(), end = haystack->end(); it != end; ++it) {
		if(AreEqual(&*it, &needle->abspath())
        {
			return it - haystack->begin();
        }
	}
	return -1;
}

template <typename T>
int GetElementIndex(google::protobuf::RepeatedPtrField<T> *haystack, T *needle) {
	// google::protobuf::internal::RepeatedPtrIterator<T>
	for (auto it = haystack->begin(), end = haystack->end(); it != end; ++it) {
		if(AreEqual(&it->abspath(), &needle->abspath())
        {
			return it - haystack->begin();
        }
	}
	return -1;
}

} // namespace IO