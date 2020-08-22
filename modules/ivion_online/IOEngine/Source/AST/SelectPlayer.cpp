#include <IOEngine/AST/SelectPlayer.hpp>
#include <IOEngine/GameInstance.hpp>

namespace IO
{
	namespace Engine
	{
		namespace AST
		{
			//applies change
			bool SelectPlayer(Branch* activeBranch, const SelectPlayerArgs *args) noexcept
			{
				activeBranch->Branches().reserve(GameInstance::Active->Players.size());
				for(Player& player : GameInstance::Active->Players)
				{
					Branch& newBranch = activeBranch->AddBranch();
					args->player_->Set(&newBranch, &player);
					newBranch.Revert();
				}
				return true;
			}

		} // namespace AST
	}	  // namespace Engine
} // namespace IO