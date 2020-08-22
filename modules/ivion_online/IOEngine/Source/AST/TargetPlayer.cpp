#include <IOEngine/AST/TargetPlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			//applies change
			bool TargetPlayer(const TargetPlayerArgs *args) noexcept
			{
				SelectPlayerArgs selectArgs(args->player_);
				return SelectPlayer(&selectArgs);
			}
		} // namespace AST
	}	  // namespace Engine
} // namespace IO