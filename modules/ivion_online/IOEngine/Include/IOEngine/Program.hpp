#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <IOEngine/GameInstance.hpp>
#include <type_traits>
#include <vector>

namespace IO
{
    namespace Engine
    {
        /*
    holds an execution graph and the stack memory for the functions
*/
        class Program
        {
            std::vector<AST::Method *> methods_;

            void ExecuteRecursive(Branch* activeBranch, std::vector<AST::Method *>::iterator it, const std::vector<AST::Method *>::iterator &end);

        public:
            Program() = default;

            Program(const Program&) = delete;
            Program(Program&&) noexcept = default;
            ~Program() noexcept = default;

            template <typename T, typename... args_t>
            T *EmplaceStackVar(args_t... args)
            {
                return GameInstance::Active->Memory.EmplaceObject<T>(std::forward<args_t>(args)...);
            }

            template <typename T, typename... args_t>
            T *EmplaceMethodCallArgs(args_t... args)
            {
                T *methodArgs = GameInstance::Active->Memory.EmplaceObject<T>(std::forward<args_t>(args)...);
                AST::Method *method = reinterpret_cast<AST::Method *>(methodArgs);
                methods_.push_back(method);
                return methodArgs;
            }

            // computes a (possibly nested) branch of changes to the game state
            Branch Execute();

            void Print();
        };

    } // namespace Engine
} // namespace IO