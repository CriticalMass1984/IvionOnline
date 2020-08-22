#pragma once

namespace IO
{
	namespace Engine
	{
		namespace Var
		{
			class Delta
			{
			public:
				typedef bool (*ApplyFunc)(void *self);
				typedef void (*RevertFunc)(void *self);

				inline bool Apply() noexcept { return apply_(this); }
				inline void Revert() noexcept { revert_(this); }

				constexpr Delta(ApplyFunc apply, RevertFunc revert) noexcept : apply_(apply), revert_(revert) {}

			private:
				ApplyFunc apply_;
				RevertFunc revert_;
			};
		} // namespace Var
	}	  // namespace Engine
} // namespace IO