#pragma once

#include <IOEngine/AST/Method.hpp>
#include <IOEngine/AST/SelectPlayer.hpp>
#include <IOEngine/Player.hpp>
#include <cassert>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			struct TargetPlayerArgs;

			static bool TargetPlayer(const TargetPlayerArgs *self) noexcept;

			struct TargetPlayerArgs
			{
				Method const method_{(Method)TargetPlayer};
				PlayerVar *const player_;

				TargetPlayerArgs(PlayerVar *player)
					: player_(player)
				{
				}
			};

		} // namespace AST
	}	  // namespace Engine
} // namespace IO