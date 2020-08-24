#include <IOEngine/Branch.hpp>

#include <IOEngine/Vars/Var.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>

#include <cstdio>
#include <sstream>

namespace IO
{
	namespace Engine
	{

		bool Branch::SetLevel(int targetLevel) noexcept
		{
			assert(targetLevel >= 0);
			assert(targetLevel <= (int)deltaOffsets_.size());

			if (targetLevel == level_)
			{
				return true;
			}
			else if (targetLevel < level_)
			{
				level_--;
				for (; level_ >= targetLevel; level_--)
				{
					Var::Delta *delta = reinterpret_cast<Var::Delta *>(memory_.data() + deltaOffsets_[level_]);
					delta->Revert();
				}
				level_++;
				return true;
			}
			else
			{
				for (; level_ < targetLevel; level_++)
				{
					Var::Delta *delta = reinterpret_cast<Var::Delta *>(memory_.data() + deltaOffsets_[level_]);
					if (!delta->Apply())
					{
						isGood_ = false;
						return false;
					}
				}
				return true;
			}
		}

		Branch &Branch::AddBranch() noexcept
		{
			branches_.emplace_back();
			return branches_.back();
		}

		Branch &Branch::AddBranch(Branch &&branch) noexcept
		{
			branches_.emplace_back(std::forward<Branch &&>(branch));
			return branches_.back();
		}

		void PrintIntVar(const std::string& prefix, const IntVar::SetDelta* setDelta)
		{
			for(const Player* player : GameInstance::Active->Players)
			{
				if (&player->Health == setDelta->Target())
				{
					fprintf(stderr, "%splayer[%d].Health[%p](%d) = %d\n", prefix.c_str(), player->Index, setDelta->Target(), setDelta->Old(), setDelta->New());
					return;
				}
				if (&player->MaxHealth == setDelta->Target())
				{
					fprintf(stderr, "%splayer[%d].MaxHealth[%p](%d) = %d\n", prefix.c_str(), player->Index, setDelta->Target(), setDelta->Old(), setDelta->New());
					return;
				}
			}
			fprintf(stderr, "%sint[%p](%d) = %d\n", prefix.c_str(), setDelta->Target(), setDelta->Old(), setDelta->New());
		}

		void PrintPlayerVar(const std::string& prefix, const PlayerVar::SetDelta* setDelta)
		{
			for(const Player* player : GameInstance::Active->Players)
			{
				if(setDelta->New() == player)
				{
					fprintf(stderr, "%sPlayerVar[%p] = Player %d\n", prefix.c_str(), setDelta, setDelta->New()->Index);
					return;
				}
			}
			fprintf(stderr, "%sPlayerVar[%p](%p) = %p\n", prefix.c_str(), setDelta->Target(), setDelta->Old(), setDelta->New());
		}

		void Branch::Print(const std::string& prefix)
		{
			for(int deltaOffset : deltaOffsets_)
			{
				const Var::Delta *delta = reinterpret_cast<Var::Delta *>(memory_.data() + deltaOffset);
				if(delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)IntVar::SetDelta::Apply)
				{
					PrintIntVar(prefix, reinterpret_cast<const IntVar::SetDelta *>(delta));
				}
				if(delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)PlayerVar::SetDelta::Apply)
				{
					PrintPlayerVar(prefix, reinterpret_cast<const PlayerVar::SetDelta *>(delta));
				}
			}

			std::string nestedPrefix = prefix + "\t";
			int branchIdx = 0;
			for(Branch& branch : branches_)
			{
				printf("%sBranch[%d]\n", nestedPrefix.c_str(), branchIdx++);
				branch.Print(nestedPrefix);
			}
		}

	} // namespace Engine
} // namespace IO