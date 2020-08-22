#include <IOEngine/Branch.hpp>

namespace IO
{
	namespace Engine
	{

		bool Branch::SetLevel(int targetLevel) noexcept
		{
			assert(targetLevel >= -1);
			assert(targetLevel <= deltaOffsets_.size());

			if (targetLevel == level_)
			{
				return true;
			}
			else if (targetLevel < level_)
			{
				for (; level_ > targetLevel; level_--)
				{
					Var::Delta *delta = reinterpret_cast<Var::Delta *>(memory_.data() + deltaOffsets_[level_]);
					delta->Revert();
				}
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

	} // namespace Engine
} // namespace IO