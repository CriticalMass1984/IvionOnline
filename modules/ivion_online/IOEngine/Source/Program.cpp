#include <IOEngine/Program.hpp>

#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Posable.hpp>

#include <IOEngine/AST/AST.hpp>

#include <IOEngine/Antlr4/IvionBaseVisitor.h>
#include <IOEngine/Antlr4/IvionLexer.h>
#include <IOEngine/Antlr4/IvionParser.h>
#include <antlr4-runtime.h>
#include <sstream>

namespace IO {
namespace Engine {
bool Program::ExecuteRecursive(GameInstance *instance, Branch *activeBranch, std::vector<AST::Method *>::iterator it, const std::vector<AST::Method *>::iterator &end) {
	for (;;) {
		AST::Method *methodArgs = *it;
		AST::Method method = **it;
		if (!method(instance, activeBranch, methodArgs)) {
			return false;
		}

		++it;

		if (it == end) {
			return true;
		}

		if (!activeBranch->Branches().empty()) {
			bool anyGood = false;
			//for each branch, execute the remining methods
			for (Branch &branch : activeBranch->Branches()) {
				branch.Apply();
				anyGood |= ExecuteRecursive(instance, &branch, it, end);
				branch.Revert();
			}
			if (!anyGood) {
				activeBranch->MarkBad();
			}
			return anyGood;
		}
	}
}

bool Program::Execute(GameInstance *instance, Branch *activeBranch) {
	if (methods_.empty()) {
		return true;
	}
	return ExecuteRecursive(instance, activeBranch, methods_.begin(), methods_.end());
}

void Program::Print() {
	for (AST::Method *method : methods_) {
		if (*method == (AST::Method)AST::TargetPlayer) {
			printf("Damage Player\n");
		} else if (*method == (AST::Method)AST::SelectPlayer) {
			printf("Select Player\n");
		} else if (*method == (AST::Method)AST::TargetPlayer) {
			printf("Target Player\n");
		} else {
			printf("Unknown\n");
		}
	}
}

class IvionCompiler : public IvionVisitor {
	std::vector<StackPlayer *> referencedOtherPlayers_;
	std::vector<StackPosable *> referencedPosables_;
	GameInstance *const instance_;
	Program *const program_;
	const bool isCard_;

public:
	IvionCompiler(GameInstance *instance, Program *program, bool isCard) :
			instance_(instance), program_(program), isCard_(isCard) {
	}

	void addRangeCheckIfCard(StackPosable *target) {
		if (isCard_) {
			StackCard *card = program_->EmplaceStackVar<StackCard>(nullptr);
			AST::AssertInRange(instance_, program_, card, target);
		}
	}
	void addRangeCheckIfCard(StackPlayer *target) { addRangeCheckIfCard((StackPosable *)target); }
	void addRangeCheckIfCard(StackCard *target) { addRangeCheckIfCard((StackPosable *)target); }
	void addRangeCheckIfCard(StackTile *target) { addRangeCheckIfCard((StackPosable *)target); }

	/////////////////////////////////////////////////////////
	//player resoltuion
	virtual antlrcpp::Any visitTargetPlayer(IvionParser::TargetPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");

		//allocate the player reference stack variable
		StackPlayer *player = program_->EmplaceStackVar<StackPlayer>(nullptr);
		referencedOtherPlayers_.push_back(player);

		//insert the method call
		AST::TargetPlayer(instance_, program_, player);

		addRangeCheckIfCard(player);

		return player;
	}

	virtual antlrcpp::Any visitSelectPlayer(IvionParser::SelectPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");

		//allocate the player reference stack variable
		StackPlayer *player = program_->EmplaceStackVar<StackPlayer>(nullptr);
		referencedOtherPlayers_.push_back(player);

		//insert the method call
		AST::SelectPlayer(instance_, program_, player);

		// return players;
		return player;
	}

	virtual antlrcpp::Any visitCardController(IvionParser::CardControllerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		//allocate the player reference stack variable
		StackCard *card = program_->EmplaceStackVar<StackCard>(nullptr);
		AST::SelectActiveCard(instance_, program_, card);

		StackPlayer *player = program_->EmplaceStackVar<StackPlayer>(nullptr);
		AST::SelectCardController(instance_, program_, player, card);

		return player;
	}

	virtual antlrcpp::Any visitPreviousPlayer(IvionParser::PreviousPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		assert(referencedOtherPlayers_.size() > 0);
		return referencedOtherPlayers_.back();
	}

	virtual antlrcpp::Any visitPlayer(IvionParser::PlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		StackPlayer *player = visitChildren(ctx);
		referencedPosables_.push_back(reinterpret_cast<Posable **>(player));
		return player;
	}

	// resolve player effects
	virtual antlrcpp::Any visitDamagePlayer(IvionParser::DamagePlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");

		IvionParser::IntegerContext *intCtx = ctx->getRuleContext<IvionParser::IntegerContext>(0);
		int *damage = visitInteger(intCtx);

		IvionParser::PlayerContext *playerValue = ctx->getRuleContext<IvionParser::PlayerContext>(0);
		StackPlayer *player = visitPlayer(playerValue);

		//insert the method call
		AST::DamagePlayer(instance_, program_, player, damage);

		// for (antlr4::tree::ParseTree *child : ctx->children)
		// {
		//     fprintf(stderr, "Child: %s\n", child->getText().c_str());
		// }
		return 0;
	}

	virtual antlrcpp::Any visitControl(IvionParser::ControlContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitControlPlayer(IvionParser::ControlPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		return visitChildren(ctx);
	}

	std::tuple<StackTile *, StackPlayer *> findTile(IvionParser::PlayerContext *playerContext, IvionParser::TileContext *tileContext, IvionParser::IntegerContext *intCtx) {
		assert((bool)tileContext ^ (bool)intCtx);
		StackPlayer *player{ nullptr };
		if (playerContext) {
			player = visitPlayer(playerContext);
		} else {
			player = visitCardController(nullptr);
		}

		StackTile *tile{ nullptr };
		if (tileContext) {
			tile = visitTile(tileContext);
		} else {
			// select a tile
			tile = program_->EmplaceStackVar<StackTile>(nullptr);
			AST::SelectTile(instance_, program_, tile);

			// assert tile is within range of starting point
			int *distance = visitInteger(intCtx);
			AST::AssertDistanceArgs::ComparisonType *comp =
					program_->EmplaceStackVar<AST::AssertDistanceArgs::ComparisonType>(
							&instance_->Memory,
							AST::AssertDistanceArgs::ComparisonType::LESS_THAN_EQUAL);

			AST::AssertDistance(instance_, program_, (Posable **)player, (Posable **)tile, distance, comp);
		}
		return std::make_tuple(tile, player);
	}

	virtual antlrcpp::Any visitMovePlayer(IvionParser::MovePlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		auto [tile, player] = findTile(
				ctx->getRuleContext<IvionParser::PlayerContext>(0),
				ctx->getRuleContext<IvionParser::TileContext>(0),
				ctx->getRuleContext<IvionParser::IntegerContext>(0));

		//insert the method call
		AST::MovePlayer(instance_, program_, player, tile);
		return 0;
	}

	virtual antlrcpp::Any visitTravelPlayer(IvionParser::TravelPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		auto [tile, player] = findTile(
				ctx->getRuleContext<IvionParser::PlayerContext>(0),
				ctx->getRuleContext<IvionParser::TileContext>(0),
				ctx->getRuleContext<IvionParser::IntegerContext>(0));

		//insert the method call
		AST::TravelPlayer(instance_, program_, player, tile);
		return 0;
	}

	virtual antlrcpp::Any visitEffectPlayer(IvionParser::EffectPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		return visitChildren(ctx);
	}

	// tile resolution
	virtual antlrcpp::Any visitTargetTile(IvionParser::TargetTileContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		//allocate the tile reference stack variable
		StackTile *tile = program_->EmplaceStackVar<StackTile>(nullptr);

		//insert the method call
		AST::TargetTile(instance_, program_, tile);
		addRangeCheckIfCard(tile);

		// return tiles;
		return tile;
	}

	virtual antlrcpp::Any visitSelectTile(IvionParser::SelectTileContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		//allocate the tile reference stack variable
		StackTile *tile = program_->EmplaceStackVar<StackTile>(nullptr);

		//insert the method call
		AST::SelectTile(instance_, program_, tile);

		// return tiles;
		return tile;
	}

	virtual antlrcpp::Any visitTile(IvionParser::TileContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		Tile *tile = visitChildren(ctx);
		referencedPosables_.push_back(reinterpret_cast<Posable **>(tile));
		return tile;
	}

	virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		//allocate the card reference stack variable
		StackCard *card = program_->EmplaceStackVar<StackCard>(nullptr);

		//insert the method call
		AST::SelectCard(instance_, program_, card);
		addRangeCheckIfCard(card);

		// return cards;
		return card;
	}

	virtual antlrcpp::Any visitSelectCard(IvionParser::SelectCardContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		//allocate the card reference stack variable
		StackCard *card = program_->EmplaceStackVar<StackCard>(nullptr);

		//insert the method call
		AST::SelectCard(instance_, program_, card);

		// return cards;
		return card;
	}

	virtual antlrcpp::Any visitCard(IvionParser::CardContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		StackCard *card = visitChildren(ctx);
		referencedPosables_.push_back(reinterpret_cast<Posable **>(card));
		return card;
	}

	// text parsing
	virtual antlrcpp::Any visitLine(IvionParser::LineContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitParagraph(IvionParser::ParagraphContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitText(IvionParser::TextContext *ctx) override {
		return visitChildren(ctx);
	}

	// integer parsing
	virtual antlrcpp::Any visitIntegerLiteral(IvionParser::IntegerLiteralContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		assert(ctx->children.size() == 1);

		int value = std::atoi(ctx->children[0]->getText().c_str());

		return program_->EmplaceStackVar<int>(&instance_->Memory, value);
	}

	virtual antlrcpp::Any visitInteger(IvionParser::IntegerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIntegerWord(IvionParser::IntegerWordContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		std::string result;
		std::transform(ctx->getText().begin(), ctx->getText().end(), std::back_inserter(result), ::tolower);

		if (result == "one") {
			return program_->EmplaceStackVar<int>(&instance_->Memory, 1);
		} else if (result == "two") {
			return program_->EmplaceStackVar<int>(&instance_->Memory, 2);
		} else if (result == "three") {
			return program_->EmplaceStackVar<int>(&instance_->Memory, 3);
		} else if (result == "four") {
			return program_->EmplaceStackVar<int>(&instance_->Memory, 4);
		} else if (result == "five") {
			return program_->EmplaceStackVar<int>(&instance_->Memory, 5);
		} else if (result == "six") {
			return program_->EmplaceStackVar<int>(&instance_->Memory, 6);
		}
		assert(false);
	}
};

void Program::Compile(IO::Engine::GameInstance *instance, IO::Engine::Program *program, bool isCard, const std::string &text) {
	std::stringstream textStream(text);
	antlr4::ANTLRInputStream antlrStream(textStream);
	IvionLexer lexer(&antlrStream);
	antlr4::CommonTokenStream tokens(&lexer);
	IvionParser parser(&tokens);
	IvionCompiler compiler(instance, program, isCard);
	antlrcpp::Any result = compiler.visitText(parser.text());
}
} // namespace Engine
} // namespace IO
