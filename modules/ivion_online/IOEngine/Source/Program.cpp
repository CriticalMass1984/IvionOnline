#include <IOEngine/Program.hpp>

#include <IOEngine/AST/AST.hpp>

namespace IO
{
    namespace Engine
    {

        void Program::ExecuteRecursive(Branch* activeBranch, std::vector<AST::Method *>::iterator &it, const std::vector<AST::Method *>::iterator &end)
        {
            for (;;)
            {
                AST::Method *methodArgs = *it;
                AST::Method method = **it;
                method(activeBranch, methodArgs);

                ++it;
                if (it == end)
                {
                    return;
                }

                if (!activeBranch->Branches().empty())
                {
                    //for each branch, execute the remining methods
                    for (Branch &branch : activeBranch->Branches())
                    {
                        branch.Apply();
                        ExecuteRecursive(&branch, it, end);
                        branch.Revert();
                    }
                    return;
                }
            }
        }

        Branch Program::Execute()
        {
            Branch branch;
            auto it = methods_.begin();
            ExecuteRecursive(&branch, it, methods_.end());
            return branch;
        }

        void Program::Print()
        {
            for (AST::Method *method : methods_)
            {
                if (*method == (AST::Method)AST::TargetPlayer)
                {
                    printf("Damage Player\n");
                }
                else if (*method == (AST::Method)AST::SelectPlayer)
                {
                    printf("Select Player\n");
                }
                else if (*method == (AST::Method)AST::TargetPlayer)
                {
                    printf("Target Player\n");
                }
                else
                {
                    printf("Unknown\n");
                }
            }
        }

    } // namespace Engine
} // namespace IO