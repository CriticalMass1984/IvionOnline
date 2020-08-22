#pragma once

#include <IOEngine/AST/Method.hpp>
#include <cassert>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			struct BlockEndArgs
			{
				Method const method_{BlockEnd};

				BlockEndArgs() = default;
			};

			//applies change
			static bool BlockEnd(const void *self) noexcept
			{
				//doesn't actually do anything, it acts as a flag
			}

		} // namespace AST
	}	  // namespace Engine
} // namespace IO