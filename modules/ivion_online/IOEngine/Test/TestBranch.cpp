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

    testVar.Set(&branch, 20);
    testVar.Set(&branch, 30);
    testVar.Set(&branch, 40);

    printf("Post Set Value: %d\n", testVar.Get());
    branch.Revert();
    printf("Post Revert Value: %d\n", testVar.Get());

    branch.Apply();
    printf("Post Apply Value: %d\n", testVar.Get());
    assert(testVar.Get() == 40);

    branch.SetLevel(2);
    printf("Post SetLevel Value: %d\n", testVar.Get());
    assert(testVar.Get() == 20);

    branch.SetLevel(0);
    printf("Post SetLevel Value: %d\n", testVar.Get());
    assert(testVar.Get() == 1);

    branch.SetLevel(3);
    printf("Post SetLevel Value: %d\n", testVar.Get());
    assert(testVar.Get() == 30);

    branch.SetLevel(1);
    printf("Post SetLevel Value: %d\n", testVar.Get());
    assert(testVar.Get() == 10);

    branch.Revert();
    printf("Post Apply Value: %d\n", testVar.Get());
    assert(testVar.Get() == 1);

    branch.SetLevel(2);
    printf("Post SetLevel Value: %d\n", testVar.Get());
    assert(testVar.Get() == 20);

    branch.Apply();
    printf("Post Apply Value: %d\n", testVar.Get());
    assert(testVar.Get() == 40);
}