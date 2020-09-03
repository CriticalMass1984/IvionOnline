#include <IOEngine/Antlr4/IvionBaseVisitor.h>
#include <IOEngine/Antlr4/IvionLexer.h>
#include <IOEngine/Antlr4/IvionParser.h>
#include <antlr4-runtime.h>

#include <IOEngine/AST/AST.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>
#include <Util.hpp>
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

	ivion::GameInstance game_instance(players);

	std::string line;
	for (;;) {
		game_instance.AcceptChoices();
		for (;;) {
			const auto &branches = game_instance.BranchStack.back()->Branches();
			if (branches.empty()) {
				printf("Final choice made, accepting changes!\n");
				break;
			}
			int choice = -1;
			int numGoodChoices = 0;
			for (const ivion::Branch &branch : branches) {
				if (branch.IsGood()) {
					printf("CHOICE %d\n", branch.GetChoice()->ChoiceIndex());
					branch.Print(&game_instance, false, "\t");
					++numGoodChoices;
					choice = branch.GetChoice()->ChoiceIndex();
				}
			}
			if (numGoodChoices == 1) {
				printf("Auto accepting only choice!\n");
				game_instance.MakeChoice(choice);
				continue;
			}
			std::getline(std::cin, line);
			while (line.empty()) {
				std::getline(std::cin, line);
			}
			try {
				choice = std::stoi(line);
				if (!game_instance.MakeChoice(choice)) {
					printf("Bad choice\n");
					if (choice >= 0 && choice < branches.size()) {
						printf("\n\n\n");
						branches[choice].Print(&game_instance, true, "\t");
						printf("\n\n\n");
					} else {
						printf("Choice(%d) out of range!\n", choice);
					}
					continue;
				}
				printf("##############################################################################################\n");
			} catch (...) {
			}
		}
	}

	fprintf(stderr, "DONE\n");
}