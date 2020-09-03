#include <IOEngine/Antlr4/IvionBaseVisitor.h>
#include <IOEngine/Antlr4/IvionLexer.h>
#include <IOEngine/Antlr4/IvionParser.h>
#include <antlr4-runtime.h>

#include <IOEngine/AST/AST.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>
#include <iostream>

namespace ivion = IO::Engine;
namespace Var = IO::Engine::Var;

int main(int argc, char **argv) {
	std::vector<ivion::PlayerDef> players;
	players.emplace_back(ivion::PlayerDef{
			.displayName_ = "Player1",
			.deckName_ = "DeskList.txt",
			.index_ = 0,
			.teamIndex_ = 0,
			.start_ = ivion::Vec2(0, 0),
	});
	players.emplace_back(ivion::PlayerDef{
			.displayName_ = "Player2",
			.deckName_ = "DeskList.txt",
			.index_ = 1,
			.teamIndex_ = 1,
			.start_ = ivion::Vec2(3, 3),
	});

	const auto start = std::chrono::high_resolution_clock::now();
	int numActions = 0;
	int numGames = 0;
	for (; numGames < 10000; ++numGames) {
		ivion::GameInstance game_instance(players);

		std::string line;
		std::vector<int> goodChoices;
		for (;;) {
			game_instance.AcceptChoices();
			bool victory = false;
			for (ivion::Player *player : game_instance.Players) {
				if (player->Health.Get() <= 0) {
					printf("Player[%d] Died!\n", player->Index);
					victory = true;
					break;
				}
			}
			if (victory) {
				break;
			}
			for (;; ++numActions) {
				const auto &branches = game_instance.BranchStack.back()->Branches();
				if (branches.empty()) {
					break;
				}
				goodChoices.clear();
				for (const ivion::Branch &branch : branches) {
					if (branch.IsGood()) {
						// branch.Print(&game_instance, false, "\t");
						goodChoices.push_back(branch.GetChoice()->ChoiceIndex());
					}
				}
				int choice = goodChoices[rand() % goodChoices.size()];
				// printf("Choice %d!\n", choice);
				bool choiceWasGood = game_instance.MakeChoice(choice);
				assert(choiceWasGood);
			}
		}
	}
	const auto end = std::chrono::high_resolution_clock::now();
	const auto timeTaken = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
	const auto seconds = std::chrono::duration_cast<std::chrono::seconds>(timeTaken);
	const auto millis = std::chrono::duration_cast<std::chrono::milliseconds>(timeTaken - seconds);

	fprintf(stderr, "DONE\n");
	fprintf(stderr, "Completed %d games over %d actions, %f actions per game, %ld.%03ld time total, %ld ns per game, %ld ns per action\n",
			numGames, numActions, double(numActions) / numGames,
			seconds.count(), millis.count(),
			timeTaken.count() / numGames,
			timeTaken.count() / numActions);
}