#include <RE/Branch.hpp>
#include <RE/Structures/Array.hpp>
#include <cstdio>

int main(int argc, char **argv) {
	re::Branch branch;
	typedef re::Array<int> IntArray;
	IntArray intDict;
	branch.Append<IntArray::ArrayDelta>(intDict.Insert(0, 1));
	assert(branch.IsGood());

	//
	int * value;
	value = intDict.Get(0);
	assert(value);
	assert(*value == 1);

	//
	branch.Append<IntArray::ArrayDelta>(intDict.Insert(0, 2));
	assert(branch.IsGood());
	value = intDict.Get(0);
	assert(value);
	assert(*value == 2);
	value = intDict.Get(1);
	assert(value);
	assert(*value == 1);

	//
	branch.Append<IntArray::ArrayDelta>(intDict.Set(1, 5));
	assert(branch.IsGood());
	value = intDict.Get(1);
	assert(value);
	assert(*value == 5);

	branch.Revert();
	value = intDict.Get(1);
	assert(!value);

	branch.Apply();
	value = intDict.Get(-1);
	assert(value);
	assert(*value == 5);
}