#include <IOEngine/Branch.hpp>

#include <cstdio>

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

		void Branch::Print()
		{

		}

	} // namespace Engine
} // namespace IO