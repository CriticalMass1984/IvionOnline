#include <IOEngine/GameInstance.hpp>

#include <IOEngine/Card.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>
#include <IOEngine/Team.hpp>

namespace IO {
namespace Engine {
std::vector<Player *> GameInstance::MakePlayers(const std::vector<PlayerDef> &players) {
	std::vector<Player *> newPlayers;
	newPlayers.reserve(players.size());
	for (unsigned int i = 0; i < players.size(); ++i) {
		assert(players[i].index_ == (int)i);
		newPlayers.emplace_back(this->Objects.EmplaceObject<Player>(i, players[i].teamIndex_));
	}
	return newPlayers;
}

GameInstance::GameInstance(const std::vector<PlayerDef> &players) :
		Players(MakePlayers(players)),
		ActivePlayer{ nullptr },
		ActiveCard{ nullptr },
		Map(4, 4)

{
	cardLibrary_.LoadCards("WinterstormCardList.txt");
}

bool GameInstance::MakeChoice(int branchIndex) {
	if (BranchStack.empty()) {
		return false;
	}
	if (branchIndex < 0 || branchIndex > BranchStack.back()->Branches().size()) {
		return false;
	}
	Branch &nextBranch = BranchStack.back()->Branches()[branchIndex];
	if (!nextBranch.IsGood()) {
		return false;
	}
	if (!nextBranch.Apply()) {
		nextBranch.Revert();
		return false;
	}
	Choices.push_back(branchIndex);
	BranchStack.emplace_back(&nextBranch);
	return true;
}
void GameInstance::RevertChoice() {
	if (BranchStack.empty()) {
		return;
	}
	BranchStack.back()->Revert();
	BranchStack.pop_back();
	Choices.pop_back();
}
void GameInstance::CancelChoices() {
	//drop everything after the root branch
	while (BranchStack.size() > 1) {
		RevertChoice();
	}
}
bool GameInstance::AcceptChoices() {
	if (BranchStack.empty() || BranchStack.back()->Branches().empty()) {
		//reset this branch
		BranchStack.clear();
		this->RootBranch = std::move(Branch());

		//take everything the current player can do, and append it to the root branch
		assert(this->ActivePlayer.Get());
		bool anyGood = false;
		for (std::pair<const std::string, Program *> &program : this->ActivePlayer->Actionables) {
			Branch &branch = this->RootBranch.AddBranch(program.second);
			anyGood |= program.second->Execute(this, &branch);
		}
		if (!anyGood) {
			this->RootBranch.MarkBad();
		}
		return anyGood;
	} else {
		return false;
	}
}

} // namespace Engine
} // namespace IO