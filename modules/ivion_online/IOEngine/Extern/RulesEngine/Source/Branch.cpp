#include <RE/Branch.hpp>

namespace re {

void Branch::SetLevel(int targetLevel) noexcept {
	assert(targetLevel >= 0);
	assert(targetLevel <= (int)deltaOffsets_.size());

	if (targetLevel < level_) {
		level_--;
		for (; level_ >= targetLevel; level_--) {
			Delta *delta = reinterpret_cast<Delta *>(memory_.data() + deltaOffsets_[level_]);
			delta->Revert();
		}
		level_++;
	} else if (targetLevel > level_) {
		for (; level_ < targetLevel; level_++) {
			Delta *delta = reinterpret_cast<Delta *>(memory_.data() + deltaOffsets_[level_]);
			delta->Apply();
		}
	}
}
} // namespace IO