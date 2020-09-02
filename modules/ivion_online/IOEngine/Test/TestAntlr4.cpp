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
			.start_ = ivion::Vec2(0, 0),
	});
	players.emplace_back(ivion::GameInstance::PlayerDef{
			.displayName_ = "Player2",
			.deckName_ = "DeskList.txt",
			.index_ = 1,
			.teamIndex_ = 1,
			.start_ = ivion::Vec2(3, 3),
	});

	ivion::GameInstance game_instance(players);

	printf("Opening: %s\n", argv[1]);
	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		printf("Can't open: %s\n", argv[1]);
		return -1;
	}
	file.seekg(0, std::ios_base::end);
	std::string fullText;
	fullText.resize(file.tellg());
	file.seekg(std::ios_base::beg);
	file.read(const_cast<char *>(fullText.data()), fullText.size());
	printf("File Size: %lu\n", fullText.size());

	ivion::Program program;
	ivion::Card card(&program, game_instance.Players[0]);
	ivion::Branch branch;
	branch.Append<ivion::PlayerVar::SetDelta>(game_instance.ActivePlayer.Set(game_instance.Players[0]));
	branch.Append<ivion::CardVar::SetDelta>(game_instance.ActiveCard.Set(&card));
	ivion::Program::Compile(&game_instance, &program, true, fullText);

	program.Execute(&game_instance, &branch);
	fprintf(stderr, "Printing\n");
	branch.Print(&game_instance);
	fprintf(stderr, "DONE\n");
}