#pragma once
#include <IOEngine/Branch.hpp>


namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			typedef bool (*Method)(Branch* activeBranch, const void *self);
		} // namespace AST
	}	  // namespace Engine
} // namespace IO