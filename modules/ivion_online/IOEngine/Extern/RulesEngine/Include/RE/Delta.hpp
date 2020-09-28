#pragma once

namespace re {
class Delta {
public:
	typedef void (*ApplyMethod)(Delta *self);
	typedef void (*RevertMethod)(Delta *self);

	inline void Apply() { apply_(this); }
	inline void Revert() { revert_(this); }

protected:
	Delta(ApplyMethod apply, RevertMethod revert) noexcept :
			apply_(apply), revert_(revert) {}

private:
	const ApplyMethod apply_{ nullptr };
	const RevertMethod revert_{ nullptr };
};

} // namespace re