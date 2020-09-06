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

Branch &Branch::AddBranch(Entity *choice) noexcept {
	assert(branches_.size() < std::numeric_limits<int>::max());
	choice->choiceIndex_ = (int)branches_.size();
	branches_.emplace_back(choice);
	return branches_.back();
}

Branch &Branch::AddBranch(Branch &&branch) noexcept {
	branches_.emplace_back(std::forward<Branch &&>(branch));
	assert(branches_.back().choice_);
	branches_.back().choice_->choiceIndex_ = branches_.size() - 1;
	return branches_.back();
}

void PrintIntVar(GameInstance *instance, const std::string &prefix, const IntVar::SetDelta *setDelta) {
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

void PrintTileVar(GameInstance *instance, const std::string &prefix, const TileVar::SetDelta *setDelta) {
	for (const Player *player : instance->Players) {
		if (&player->Position == setDelta->Target()) {
			fprintf(stderr, "%splayer[%d].Position[%p](%s) = %s\n", prefix.c_str(), player->Index,
					setDelta->Target(),
					setDelta->Old()->GetPosition().Str().c_str(),
					setDelta->New()->GetPosition().Str().c_str());
			return;
		}
	}
	fprintf(stderr, "%sTile[%p](%s) = %s\n", prefix.c_str(), setDelta->Target(),
			setDelta->Old()->GetPosition().Str().c_str(),
			setDelta->New()->GetPosition().Str().c_str());
}

void PrintPlayerVar(GameInstance *instance, const std::string &prefix, const PlayerVar::SetDelta *setDelta) {
	for (const Player *player : instance->Players) {
		if (setDelta->New() == player) {
			fprintf(stderr, "%sPlayerVar[%p] = Player %d\n", prefix.c_str(), setDelta, setDelta->New()->Index);
			return;
		}
	}
	fprintf(stderr, "%sPlayerVar[%p](%p) = %p\n", prefix.c_str(), setDelta->Target(), setDelta->Old(), setDelta->New());
}
void PrintEntity(const Entity *entity, const std::string &prefix) {
	if (entity == nullptr) {
		printf("%sEntity(nullptr)\n", prefix.c_str());
		return;
	}
	if (const Player *player = dynamic_cast<const Player *>(entity); player) {
		printf("%sPlayer(%s)\n", prefix.c_str(), player->Name().c_str());
	} else if (const Card *card = dynamic_cast<const Card *>(entity); card) {
		printf("%sCard(%s)\n", prefix.c_str(), card->Name().c_str());
	} else if (const Program *program = dynamic_cast<const Program *>(entity); program) {
		printf("%sProgram(%s)\n", prefix.c_str(), program->Name().c_str());
	} else if (const Tile *tile = dynamic_cast<const Tile *>(entity); tile) {
		printf("%sTile(%s)\n", prefix.c_str(), tile->GetPosition().Str().c_str());
	}
	printf("%sEntity(Unknown)\n", prefix.c_str());
}

void Branch::Print(GameInstance *instance, bool recursive, const std::string &prefix) const {
	printf("%sBranch[%d](%s)\n", prefix.c_str(), choice_ ? choice_->choiceIndex_ : -1, isGood_ ? "good" : "bad");
	PrintEntity(choice_, prefix);
	for (int deltaOffset : deltaOffsets_) {
		const Var::Delta *delta = reinterpret_cast<const Var::Delta *>(memory_.data() + deltaOffset);
		if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)IntVar::SetDelta::ApplyDelta) {
			PrintIntVar(instance, prefix, reinterpret_cast<const IntVar::SetDelta *>(delta));
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)TileVar::SetDelta::ApplyDelta) {
			PrintTileVar(instance, prefix, reinterpret_cast<const TileVar::SetDelta *>(delta));
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)PlayerVar::SetDelta::ApplyDelta) {
			PrintPlayerVar(instance, prefix, reinterpret_cast<const PlayerVar::SetDelta *>(delta));
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::DamagePlayerDelta::ApplyDelta) {
			const AST::DamagePlayerDelta *funcDelta = reinterpret_cast<const AST::DamagePlayerDelta *>(delta);
			fprintf(stderr, "%sDeal %d damage to player[%d]\n", prefix.c_str(), funcDelta->value_, funcDelta->player_->Index);
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::SelectPlayerDelta::ApplyDelta) {
			const AST::SelectPlayerDelta *funcDelta = reinterpret_cast<const AST::SelectPlayerDelta *>(delta);
			fprintf(stderr, "%sSelecting player[%d]\n", prefix.c_str(), funcDelta->player_->Index);
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::TargetPlayerDelta::ApplyDelta) {
			const AST::TargetPlayerDelta *funcDelta = reinterpret_cast<const AST::TargetPlayerDelta *>(delta);
			fprintf(stderr, "%sTargetting player[%d]\n", prefix.c_str(), funcDelta->player_->Index);
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::SelectTileDelta::ApplyDelta) {
			const AST::SelectTileDelta *funcDelta = reinterpret_cast<const AST::SelectTileDelta *>(delta);
			fprintf(stderr, "%sSelecting Tile[%s]\n", prefix.c_str(), funcDelta->tile_->GetPosition().Str().c_str());
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::TargetTileDelta::ApplyDelta) {
			const AST::TargetTileDelta *funcDelta = reinterpret_cast<const AST::TargetTileDelta *>(delta);
			fprintf(stderr, "%sTargetting Tile[%s]\n", prefix.c_str(), funcDelta->tile_->GetPosition().Str().c_str());
		} else if (delta->apply_ == (IO::Engine::Var::Delta::ApplyFunc)AST::AssertDistanceDelta::ApplyDelta) {
			const AST::AssertDistanceDelta *funcDelta = reinterpret_cast<const AST::AssertDistanceDelta *>(delta);
			fprintf(stderr, "%sAssertDistance(%s)\n", prefix.c_str(), funcDelta->result_ ? "true" : "false");
		}
	}

	if (recursive) {
		std::string nestedPrefix = prefix + "\t";
		for (const Branch &branch : branches_) {
			branch.Print(instance, true, nestedPrefix);
		}
	}
}

} // namespace Engine
} // namespace IO