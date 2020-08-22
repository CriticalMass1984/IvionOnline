#include <IOEngine/AST/DamagePlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			//applies change
			bool DamagePlayer(const DamagePlayerArgs *args) noexcept
			{
				(*args->player_)->Health.Set(GameInstance::Active->ActiveBranch, *(*args->player_)->Health - *args->value_);
				return true;
			}

		} // namespace AST
	}	  // namespace Engine
} // namespace IO