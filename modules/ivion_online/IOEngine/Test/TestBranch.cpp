#include <IOEngine/Branch.hpp>
#include <IOEngine/Vars/Var.hpp>
#include <cstdio>

namespace ivion = IO::Engine;

int main(int argc, char **argv)
{
    ivion::Var::Var<int> testVar(1);
    ivion::Branch branch;

    printf("Value: %d\n", testVar.Get());
    testVar.Set(&branch, 10);
    printf("Post Set Value: %d\n", testVar.Get());
    branch.Revert();
    printf("Post Revert Value: %d\n", testVar.Get());
    branch.Apply();
    printf("Post Apply Value: %d\n", testVar.Get());
}