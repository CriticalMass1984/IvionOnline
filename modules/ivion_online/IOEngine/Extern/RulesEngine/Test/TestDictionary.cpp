#include <RE/Branch.hpp>
#include <RE/Structures/Dictionary.hpp>
#include <cstdio>

int main(int argc, char **argv) {
	re::Branch branch;
	typedef re::Dictionary<int> IntDict;
	IntDict intDict;
	branch.Append<IntDict::DictDelta>(intDict.Insert("1", 1));
	assert(branch.IsGood());

	//
	int * value;
	value = intDict.Get("1");
	assert(value);
	assert(*value == 1);

	//
	branch.Append<IntDict::DictDelta>(intDict.Insert("2", 2));
	assert(branch.IsGood());
	value = intDict.Get("2");
	assert(value);
	assert(*value == 2);

	//
	branch.Append<IntDict::DictDelta>(intDict.Set("1", 5));
	assert(branch.IsGood());
	value = intDict.Get("1");
	assert(value);
	assert(*value == 5);

	branch.Revert();
	value = intDict.Get("1");
	assert(!value);

	branch.Apply();
	value = intDict.Get("1");
	assert(value);
	assert(*value == 5);
}