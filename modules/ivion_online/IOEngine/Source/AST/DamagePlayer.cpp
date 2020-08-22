#include <IOEngine/AST/DamagePlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			//applies change
			bool DamagePlayer(Branch* activeBranch, const DamagePlayerArgs *args) noexcept
			{
				(*args->player_)->Health.Set(activeBranch, *(*args->player_)->Health - *args->value_);
				return true;
			}

		} // namespace AST
	}	  // namespace Engine
} // namespace IO