#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Vars/Var.hpp>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			struct SubtractArgs
			{
				Method const method_{(Method)SubtractMethod};
				Var::Var<int> *const target_;
				int **const left_;
				int **const right_;

				SubtractArgs(Var::Var<int> *target,
							 int **left,
							 int **right)
					: target_(target), left_(left), right_(right)
				{
				}
			};

#include <IOEngine/GameInstance.hpp>

			//applies change
			static bool Subtract(const SubtractArgs *args) noexcept
			{
				(*args->target_).Set(GameInstance::Active->ActiveBranch, **args->left_ - **args->right_);
				return true;
			}

		} // namespace AST
	}	  // namespace Engine
} // namespace IO