#include <IOEngine/GameInstance.hpp>

#include <IOEngine/Card.hpp>
#include <IOEngine/MemoryPool.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>
#include <IOEngine/Team.hpp>

namespace IO {
namespace Engine {
std::vector<Player *> GameInstance::MakePlayers(const std::vector<PlayerDef> &players) {
	//be careful of construction order
	assert(Map.Height() > 0);
	assert(Map.Width() > 0);
	std::vector<Player *> newPlayers;
	newPlayers.reserve(players.size());
	for (unsigned int i = 0; i < players.size(); ++i) {
		assert(players[i].index_ == (int)i);
		newPlayers.emplace_back(this->Objects.EmplaceObject<Player>(
				this,
				players[i].displayName_,
				i, players[i].teamIndex_,
				Map.GetTile(players[i].start_)));
	}
	return newPlayers;
}

GameInstance::GameInstance(const std::vector<PlayerDef> &players) :
		Objects(),
		Memory(),
		Map(4, 4),
		MoveAction(Objects.EmplaceObject<Program>("Move Action")),
		BasicAttack(Objects.EmplaceObject<Program>("Basic Attack")),
		Players(MakePlayers(players)),
		ActivePlayer{ Players[0] },
		ActiveCard{ nullptr }

{
	cardLibrary_.LoadCards("WinterstormCardList.txt");
	Program::Compile(this, MoveAction, false, "move 1 tile.");
	Program::Compile(this, BasicAttack, false, "deal 5 damage to target player.");

	BranchStack.push_back(&RootBranch);
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
		nextBranch.MarkBad();
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
		//make sure branch is applied
		BranchStack.back()->Apply();

		//reset
		this->RootBranch = std::move(Branch());
		BranchStack.clear();
		BranchStack.emplace_back(&RootBranch);

		//take everything the current player can do, and append it to the root branch
		Player *player = this->ActivePlayer.Get();
		assert(player);
		bool anyGood = false;
		for (Program *program : { player->MoveAction.Get(), player->BasicAttack.Get() }) {
			assert(program);
			Branch &branch = this->RootBranch.AddBranch(program);
			anyGood |= program->Execute(this, &branch);
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