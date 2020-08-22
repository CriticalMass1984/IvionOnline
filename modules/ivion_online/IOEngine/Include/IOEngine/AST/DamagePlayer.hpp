#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{

			struct DamagePlayerArgs;
			
			bool DamagePlayer(Branch* activeBranch, const DamagePlayerArgs *args) noexcept;

			struct DamagePlayerArgs
			{
				Method const method_{(Method)DamagePlayer};
				Player **const player_;
				int *const value_;

				DamagePlayerArgs(Player **player, int *value)
					: player_(player), value_(value)
				{
				}
			};

			//applies change

		} // namespace AST
	}	  // namespace Engine
} // namespace IO