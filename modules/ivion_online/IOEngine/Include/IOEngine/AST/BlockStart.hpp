#pragma once

#include <IOEngine/AST/Method.hpp>
#include <cassert>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			struct BlockStartArgs
			{
				Method const method_{BlockStart};

				BlockStartArgs() = default;
			};

			//applies change
			static bool BlockStart(const void *self) noexcept
			{
				//doesn't actually do anything, it acts as a flag
			}

		} // namespace AST
	}	  // namespace Engine
} // namespace IO