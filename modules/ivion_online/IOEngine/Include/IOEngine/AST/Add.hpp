#pragma once

#include <IOEngine/AST/Method.hpp>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			struct AddArgs
			{
				Method const method_{AddMethod};
				int *const target_;
				int *const left_;
				int *const right_;

				AddArgs(int *target,
						int *left,
						int *right)
					: target_(target), left_(left), right_(right)
				{
				}
			};

			//applies change
			static bool Add(const void *self) noexcept
			{
				const AddArgs *args = static_cast<const AddArgs *>(self);
				*args->target_ = *args->left_ + *args->right_;
			}

		} // namespace AST
	}	  // namespace Engine
} // namespace IO