#include <IOEngine/AST/SelectPlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			//applies change
			bool SelectPlayer(const SelectPlayerArgs *args) noexcept
			{
				// (*args->player_)->Health.Set(GameInstance::Active->ActiveBranch, *(*args->player_)->Health - *args->value_);
			}

		} // namespace AST
	}	  // namespace Engine
} // namespace IO