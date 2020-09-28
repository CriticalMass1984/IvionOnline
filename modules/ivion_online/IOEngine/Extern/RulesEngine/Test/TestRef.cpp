#include <RE/Types/Object.hpp>
#include <RE/Types/Var.hpp>
#include <cstdio>

int main(int argc, char **argv) {
	re::types::Var<int> intRef(0);
	assert(*intRef == 0);
    intRef.Set(5).Apply();
	assert(*intRef == 5);
}