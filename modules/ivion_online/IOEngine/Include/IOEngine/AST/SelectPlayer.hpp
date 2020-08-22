#pragma once

#include <IOEngine/Player.hpp>
#include <IOEngine/AST/Method.hpp>
#include <cassert>

static IO::Engine::Player *p{nullptr};

namespace IO
{
	namespace Engine
	{

		namespace AST
		{
			struct SelectPlayerArgs;

			static bool SelectPlayer(const SelectPlayerArgs *self) noexcept;

			struct SelectPlayerArgs
			{
				Method const method_{(Method)SelectPlayer};
				Engine::PlayerVar *const player_;

				SelectPlayerArgs(PlayerVar *player)
					: player_(player)
				{
				}
			};

			

		} // namespace AST
	}	  // namespace Engine
} // namespace IO