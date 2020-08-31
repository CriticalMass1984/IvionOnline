#include <IOEngine/Branch.hpp>

#include <IOEngine/AST/AST.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Vars/Var.hpp>

#include <cstdio>
#include <sstream>

namespace IO {
namespace Engine {

bool Branch::SetLevel(int targetLevel) noexcept {
	assert(targetLevel >= 0);
	assert(targetLevel <= (int)deltaOffsets_.size());

	if (targetLevel == level_) {
		return true;
	} else if (targetLevel < level_) {
		level_--;
		for (; level_ >= targetLevel; level_--) {
			Var::Delta *delta = reinterpret_cast<Var::Delta *>(memory_.data() + deltaOffsets_[level_]);
			delta->Revert();
		}
		level_++;
		return true;
	} else {
		for (; level_ < targetLevel; level_++) {
			Var::Delta *delta = reinterpret_cast<Var::Delta *>(memory_.data() + deltaOffsets_[level_]);
			if (!delta->Apply()) {
				isGood_ = false;
				return false;
			}
		}
		return true;
	}
}

Branch &Branch::AddBranch() noexcept {
	branches_.emplace_back();
	return branches_.back();
}

Branch &Branch::AddBranch(Branch &&branch) noexcept {
	branches_.emplace_back(std::forward<Branch &&>(branch));
	return branches_.back();
}

void PrintIntVar(GameInstance* instance, const std::string &prefix, const IntVar::SetDelta *setDelta) {
	for (const Player *player : instance->Players) {
		if (&player->Health == setDelta->Target()) {
			fprintf(stderr, "%splayer[%d].Health[%p](%d) = %d\n", prefix.c_str(), player->Index, setDelta->Target(), setDelta->Old(), setDelta->New());
			return;
		}
		if (&player->MaxHealth == setDelta->Target()) {
			fprintf(stderr, "%splayer[%d].MaxHealth[%p](%d) = %d\n", prefix.c_str(), player->Index, setDelta->Target(), setDelta->Old(), setDelta->New());
			return;
		}
	}
	fprintf(stderr, "%sint[%p](%d) = %d\n", prefix.c_str(), setDelta->Target(), setDelta->Old(), setDelta->New());
}

void PrintPlayerVar(GameInstance* instance, const std::string &prefix, const PlayerVar::SetDelta *setDelta) {
	for (const Player *player : instance->Players) {
		if (setDelta->New() == player) {
			fprintf(stderr, "%sPlayerVar[%p] = Player %d\n", prefix.c_str(), setDelta, setDelta->New()->Index);
			return;
		}
	}
	fprintf(stderr, "%sPlayerVar[%p](%p) = %p\n", prefix.c_str(), setDelta->Target(), setDelta->Old(), setDelta->New());
}

void Branch::Print(GameInstance* instance, const std::string &prefix) {
	for (int deltaOffset : deltaOffsets_) {
		const Var::Delta *delta = reinterpret_cast<Var::Delta *>(memory_.data() + deltaOffset);
		if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)IntVar::SetDelta::Apply) {
			PrintIntVar(instance, prefix, reinterpret_cast<const IntVar::SetDelta *>(delta));
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)PlayerVar::SetDelta::Apply) {
			PrintPlayerVar(instance, prefix, reinterpret_cast<const PlayerVar::SetDelta *>(delta));
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::DamagePlayerDelta::Apply) {
			const AST::DamagePlayerDelta *funcDelta = reinterpret_cast<const AST::DamagePlayerDelta *>(delta);
			fprintf(stderr, "%sDeal %d damage to player[%d]\n", prefix.c_str(), funcDelta->value_, funcDelta->player_->Index);
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::SelectPlayerDelta::Apply) {
			const AST::SelectPlayerDelta *funcDelta = reinterpret_cast<const AST::SelectPlayerDelta *>(delta);
			fprintf(stderr, "%sSelecting player[%d]\n", prefix.c_str(), funcDelta->player_->Index);
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::TargetPlayerDelta::Apply) {
			const AST::TargetPlayerDelta *funcDelta = reinterpret_cast<const AST::TargetPlayerDelta *>(delta);
			fprintf(stderr, "%sTargetting player[%d]\n", prefix.c_str(), funcDelta->player_->Index);
		}
	}

	std::string nestedPrefix = prefix + "\t";
	int branchIdx = 0;
	for (Branch &branch : branches_) {
		printf("%sBranch[%d]\n", nestedPrefix.c_str(), branchIdx++);
		branch.Print(instance, nestedPrefix);
	}
}

} // namespace Engine
} // namespace IO