#include <IOEngine/AST/TargetPlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			//applies change
			bool TargetPlayer(Branch* activeBranch, const TargetPlayerArgs *args) noexcept
			{
				SelectPlayerArgs selectArgs(args->player_);
				return SelectPlayer(activeBranch, &selectArgs);
			}
		} // namespace AST
	}	  // namespace Engine
} // namespace IO