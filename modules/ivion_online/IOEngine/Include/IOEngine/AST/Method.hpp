#pragma once

namespace IO
{
	namespace Engine
	{
		class Branch;
		class GameInstance;

		namespace AST
		{
			typedef bool (*Method)(GameInstance* instance, Branch* activeBranch, const void *self);
		} // namespace AST
	}	  // namespace Engine
} // namespace IO