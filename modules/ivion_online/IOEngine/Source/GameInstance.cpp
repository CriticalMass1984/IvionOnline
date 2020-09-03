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

		newPlayers.emplace_back(
				this->Objects.EmplaceObject<Player>(
						this,
						players[i]));
	}
	return newPlayers;
}

GameInstance::GameInstance(const std::vector<PlayerDef> &players) :
		Objects(),
		Memory(),
		Map(4, 4),
		MoveAction(Objects.EmplaceObject<Program>("Move Action")),
		BasicAttack(Objects.EmplaceObject<Program>("Basic Attack")),
		EndOfTurn(Objects.EmplaceObject<Program>("End Of Turn")),
		Players(MakePlayers(players)),
		ActivePlayer{ nullptr },
		ActiveCard{ nullptr }

{
	cardLibrary_.LoadCards("WinterstormCardList.txt");
	Program::CompileAction(this, MoveAction, "move 1 tile.");
	Program::CompileAction(this, BasicAttack, "deal 5 damage to target player.");
	Program::CompileAction(this, EndOfTurn, "end the turn. start the turn. gain 3 actions. draw a card.");

	BranchStack.push_back(&RootBranch);
	EndOfTurn->Execute(this, BranchStack.back());
	this->AcceptChoices();
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
		for (Program *program : { player->MoveAction.Get(), player->BasicAttack.Get(), EndOfTurn }) {
			assert(program);
			Branch &branch = this->RootBranch.AddBranch(program);
			anyGood |= program->Execute(this, &branch);
		}
		for (Card *card : player->Hand) {
			assert(card);
			assert(card->PlayEffect);
			assert(card->ResolveEffect);
			Branch &branch = this->RootBranch.AddBranch(card);
			anyGood |= card->PlayEffect->Execute(this, &branch);
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