#include <IOEngine/Antlr4/IvionBaseVisitor.h>
#include <IOEngine/Antlr4/IvionLexer.h>
#include <IOEngine/Antlr4/IvionParser.h>
#include <antlr4-runtime.h>

#include <IOEngine/AST/AST.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Program.hpp>

namespace ivion = IO::Engine;
namespace Var = IO::Engine::Var;

int main(int argc, char **argv) {
	std::vector<ivion::GameInstance::PlayerDef> players;
	players.emplace_back(ivion::GameInstance::PlayerDef{
			.displayName_ = "Player1",
			.deckName_ = "DeskList.txt",
			.index_ = 0,
			.teamIndex_ = 0,
	});
	players.emplace_back(ivion::GameInstance::PlayerDef{
			.displayName_ = "Player2",
			.deckName_ = "DeskList.txt",
			.index_ = 0,
			.teamIndex_ = 0,
	});

	ivion::GameInstance game_instance(players);

	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		printf("Can't open: %s\n", argv[1]);
		return -1;
	}
	file.seekg(std::ios_base::end);
	std::string fullText;
	fullText.reserve(file.tellg());
	file.seekg(std::ios_base::beg);
	file.read(const_cast<char *>(fullText.data()), fullText.size());

	ivion::Program program;
	ivion::Program::Compile(&game_instance, &program, true, fullText);

	ivion::Branch branch;
	program.Execute(&game_instance, &branch);
	branch.Print(&game_instance);
}