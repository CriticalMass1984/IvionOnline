#include <IOEngine/Program.hpp>

#include <IOEngine/GameInstance.hpp>
#include <IOEngine/AST/AST.hpp>

namespace IO
{
    namespace Engine
    {

        void Program::ExecuteRecursive(std::vector<AST::Method *>::iterator &it, const std::vector<AST::Method *>::iterator &end)
        {
            for (;;)
            {
                AST::Method *methodArgs = *it;
                AST::Method method = **it;
                method(methodArgs);

                ++it;
                if (it == end)
                {
                    return;
                }

                if (!GameInstance::Active->ActiveBranch->Branches().empty())
                {
                    //save the current active branch so we can restore it later
                    Branch *currentBranch = GameInstance::Active->ActiveBranch;

                    //for each branch, execute the remining methods
                    for (Branch &branch : GameInstance::Active->ActiveBranch->Branches())
                    {
                        branch.Apply();
                        GameInstance::Active->ActiveBranch = &branch;
                        ExecuteRecursive(it, end);
                        branch.Revert();
                    }

                    //restore original branch
                    GameInstance::Active->ActiveBranch = currentBranch;
                    return;
                }
            }
        }

        void Program::Execute()
        {
            auto it = methods_.begin();
            ExecuteRecursive(it, methods_.end());
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