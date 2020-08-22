#pragma once

#include <limits>
#include <type_traits>
#include <vector>
#include <cassert>
#include <IOEngine/Vars/Delta.hpp>

namespace IO
{
	namespace Engine
	{
		class Branch
		{
			std::vector<unsigned char> memory_;
			std::vector<int> deltaOffsets_;
			int level_{0};
			bool isGood_{true};

			// branching futures
			std::vector<Branch> branches_;

		public:
			Branch() noexcept = default;
			Branch(Branch &&) noexcept = default;
			~Branch() noexcept = default;

			template <typename T, typename... args_t>
			bool Append(args_t... args) noexcept
			{
				static_assert(std::is_trivially_copyable<T>::value, "type must be trivially copyable!");
				static_assert(std::is_trivially_destructible<T>::value, "type must be trivially destructible!");
				static_assert(std::is_base_of<Var::Delta, T>::value, "type must inherit from Delta!");
				assert(isGood_);
				assert(deltaOffsets_.size() == level_);
				assert(memory_.size() + sizeof(T) < std::numeric_limits<int>::max());

				const std::size_t offset = memory_.size();
				memory_.resize(offset + sizeof(T));
				Var::Delta *delta = reinterpret_cast<Var::Delta *>(new (memory_.data() + offset) T(std::forward<args_t>(args)...));
				deltaOffsets_.push_back((int)offset);

				if (!delta->Apply())
				{
					isGood_ = false;
					return false;
				}
				level_++;
				return true;
			}

			inline bool IsGood() const noexcept { return isGood_; }

			bool SetLevel(int level) noexcept;
			inline bool Apply() noexcept { return SetLevel((int)deltaOffsets_.size()); }
			inline void Revert() noexcept { SetLevel(-1); }

			Branch &AddBranch() noexcept;
			Branch &AddBranch(Branch &&branch) noexcept;
			inline std::vector<Branch> &Branches() noexcept { return branches_; }

			void Print()
			{
						}
		};

	} // namespace Engine
} // namespace IO