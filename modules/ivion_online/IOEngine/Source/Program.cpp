#include <IOEngine/Program.hpp>

#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Posable.hpp>

#include <IOEngine/AST/AST.hpp>

#include <IOEngine/Antlr4/IvionBaseVisitor.h>
#include <IOEngine/Antlr4/IvionLexer.h>
#include <IOEngine/Antlr4/IvionParser.h>
#include <antlr4-runtime.h>
#include <sstream>
#include <string>

namespace IO {
namespace Engine {
bool Program::ExecuteRecursive(GameInstance *instance, Branch *activeBranch, std::vector<AST::Method *>::iterator it, const std::vector<AST::Method *>::iterator &end) {
	for (;;) {
		AST::Method *methodArgs = *it;
		AST::Method method = **it;
		if (!method(instance, activeBranch, methodArgs)) {
			activeBranch->MarkBad();
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
public:
	enum class EffectType {
		NONE,
		ACTIVE,
		PASSIVE
	};

private:
	std::vector<StackPlayer *> referencedOtherPlayers_;
	std::vector<StackPosable *> referencedPosables_;
	GameInstance *const instance_;
	Program *const play_;
	Program *const resolve_;
	bool isCard_;
	EffectType effectType_;

	void addRangeCheckIfCard(StackPosable *target) {
		if (isCard_) {
			StackCard *card = play_->EmplaceStackVar<StackCard>(&instance_->Memory, nullptr);
			AST::SelectActiveCard(instance_, play_, card);
			AST::AssertInRange(instance_, play_, card, target);

			if (resolve_ != play_) {
				AST::AssertInRange(instance_, resolve_, card, target);
			}
		}
	}
	void addRangeCheckIfCard(StackPlayer *target) { addRangeCheckIfCard((StackPosable *)(target)); }
	void addRangeCheckIfCard(StackCard *target) { addRangeCheckIfCard((StackPosable *)target); }
	void addRangeCheckIfCard(StackTile *target) { addRangeCheckIfCard((StackPosable *)target); }

	StackPlayer *activePlayerCache_{ nullptr };
	StackCard *activeCardCache_{ nullptr };

public:
	StackPlayer *GetActivePlayer() {
		if (activePlayerCache_) {
			return activePlayerCache_;
		}
		StackPlayer *player = play_->EmplaceStackVar<StackPlayer>(&instance_->Memory, nullptr);
		AST::SelectActivePlayer(instance_, play_, player);
		activePlayerCache_ = player;

		return activePlayerCache_;
	}

	StackCard *GetActiveCard() {
		if (activeCardCache_) {
			return activeCardCache_;
		}
		StackCard *card = play_->EmplaceStackVar<StackCard>(&instance_->Memory, nullptr);
		AST::SelectActiveCard(instance_, play_, card);

		return activeCardCache_;
	}

	IvionCompiler(GameInstance *instance, Program *play, Program *resolve, bool isCard) :
			instance_(instance), play_(play), resolve_(resolve), isCard_(isCard) {
	}

	/////////////////////////////////////////////////////////
	//player resoltuion
	virtual antlrcpp::Any visitTargetPlayer(IvionParser::TargetPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");

		//allocate the player reference stack variable
		StackPlayer *player = play_->EmplaceStackVar<StackPlayer>(&instance_->Memory, nullptr);
		referencedOtherPlayers_.push_back(player);

		//insert the method call
		AST::TargetPlayer(instance_, play_, player);

		addRangeCheckIfCard(player);

		return player;
	}

	virtual antlrcpp::Any visitSelectPlayer(IvionParser::SelectPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");

		//allocate the player reference stack variable
		StackPlayer *player = play_->EmplaceStackVar<StackPlayer>(&instance_->Memory, nullptr);
		referencedOtherPlayers_.push_back(player);

		//insert the method call
		AST::SelectPlayer(instance_, play_, player);

		// return players;
		return player;
	}

	virtual antlrcpp::Any visitCardController(IvionParser::CardControllerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		return GetActivePlayer();
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
		AST::DamagePlayer(instance_, resolve_, player, damage);

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
			player = GetActivePlayer();
		}

		StackTile *tile{ nullptr };
		if (tileContext) {
			tile = visitTile(tileContext);
		} else {
			// select a tile
			tile = resolve_->EmplaceStackVar<StackTile>(&instance_->Memory, nullptr);
			AST::SelectTile(instance_, resolve_, tile);

			// assert tile is within range of starting point
			int *distance = visitInteger(intCtx);
			AST::AssertDistanceArgs::ComparisonType *comp =
					resolve_->EmplaceStackVar<AST::AssertDistanceArgs::ComparisonType>(
							&instance_->Memory,
							AST::AssertDistanceArgs::ComparisonType::LESS_THAN_EQUAL);

			AST::AssertDistance(instance_, resolve_, (Posable **)player, (Posable **)tile, distance, comp);
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
		AST::AssertInstantCheck(instance_, play_, nullptr);
		int *actions = play_->EmplaceStackVar<int>(&instance_->Memory, -1);
		int *power = play_->EmplaceStackVar<int>(&instance_->Memory, 0);
		AST::ResourceCost(instance_, play_, player, actions, power);
		AST::MovePlayer(instance_, resolve_, player, tile);
		return 0;
	}

	virtual antlrcpp::Any visitTravelPlayer(IvionParser::TravelPlayerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		auto [tile, player] = findTile(
				ctx->getRuleContext<IvionParser::PlayerContext>(0),
				ctx->getRuleContext<IvionParser::TileContext>(0),
				ctx->getRuleContext<IvionParser::IntegerContext>(0));

		//insert the method call
		AST::TravelPlayer(instance_, resolve_, player, tile);
		return 0;
	}

	virtual antlrcpp::Any visitGainActions(IvionParser::GainActionsContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		IvionParser::PlayerContext *playerContext = ctx->getRuleContext<IvionParser::PlayerContext>(0);
		StackPlayer *player{ nullptr };
		if (playerContext) {
			player = visitPlayer(playerContext);
		} else {
			player = GetActivePlayer();
		}
		int *actions = visitInteger(ctx->getRuleContext<IvionParser::IntegerContext>(0));

		AST::ResourceGain(instance_, resolve_, player, actions, nullptr);
		return 0;
	}

	virtual antlrcpp::Any visitGainPower(IvionParser::GainPowerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		IvionParser::PlayerContext *playerContext = ctx->getRuleContext<IvionParser::PlayerContext>(0);
		StackPlayer *player{ nullptr };
		if (playerContext) {
			player = visitPlayer(playerContext);
		} else {
			player = GetActivePlayer();
		}
		int *power = visitInteger(ctx->getRuleContext<IvionParser::IntegerContext>(0));

		AST::ResourceGain(instance_, resolve_, player, nullptr, power);
		return 0;
	}

	virtual antlrcpp::Any visitDrawCards(IvionParser::DrawCardsContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		IvionParser::PlayerContext *playerContext = ctx->getRuleContext<IvionParser::PlayerContext>(0);
		StackPlayer *player{ nullptr };
		if (playerContext) {
			player = visitPlayer(playerContext);
		} else {
			player = GetActivePlayer();
		}
		int *number = visitInteger(ctx->getRuleContext<IvionParser::IntegerContext>(0));
		AST::PlayerDrawCard(instance_, resolve_, player, number);
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
		StackTile *tile = play_->EmplaceStackVar<StackTile>(&instance_->Memory, nullptr);

		//insert the method call
		AST::TargetTile(instance_, play_, tile);
		addRangeCheckIfCard(tile);

		// return tiles;
		return tile;
	}

	virtual antlrcpp::Any visitSelectTile(IvionParser::SelectTileContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		//allocate the tile reference stack variable
		StackTile *tile = play_->EmplaceStackVar<StackTile>(&instance_->Memory, nullptr);

		//insert the method call
		AST::SelectTile(instance_, play_, tile);

		// return tiles;
		return tile;
	}

	virtual antlrcpp::Any visitTile(IvionParser::TileContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		StackTile *tile = visitChildren(ctx);
		referencedPosables_.push_back(reinterpret_cast<Posable **>(tile));
		return tile;
	}

	virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		//allocate the card reference stack variable
		StackCard *card = play_->EmplaceStackVar<StackCard>(&instance_->Memory, nullptr);

		//insert the method call
		AST::SelectCard(instance_, play_, card);
		addRangeCheckIfCard(card);

		// return cards;
		return card;
	}

	virtual antlrcpp::Any visitSelectCard(IvionParser::SelectCardContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		//allocate the card reference stack variable
		StackCard *card = play_->EmplaceStackVar<StackCard>(&instance_->Memory, nullptr);

		//insert the method call
		AST::SelectCard(instance_, play_, card);

		// return cards;
		return card;
	}

	virtual antlrcpp::Any visitCard(IvionParser::CardContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		StackCard *card = visitChildren(ctx);
		referencedPosables_.push_back(reinterpret_cast<Posable **>(card));
		return card;
	}

	// miscellaneous effects
	virtual antlrcpp::Any visitEndTheTurn(IvionParser::EndTheTurnContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		AST::EndTheTurn(instance_, resolve_, GetActivePlayer());
		return visitChildren(ctx);
	}

	// miscellaneous effects
	virtual antlrcpp::Any visitStartTheTurn(IvionParser::StartTheTurnContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		AST::StartTheTurn(instance_, resolve_);
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMiscEffect(IvionParser::MiscEffectContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		return visitChildren(ctx);
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
		assert(ctx);
		assert(ctx->children.size() == 1);

		int value = std::atoi(ctx->children[0]->getText().c_str());

		return play_->EmplaceStackVar<int>(&instance_->Memory, value);
	}

	virtual antlrcpp::Any visitInteger(IvionParser::IntegerContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIntegerWord(IvionParser::IntegerWordContext *ctx) override {
		fprintf(stdout, "%s '%s'\n", __FUNCTION__, ctx ? ctx->getText().c_str() : "nullptr");
		assert(ctx);
		std::stringstream stream;

		for (char c : ctx->getText()) {
			c = tolower(c);
			stream << c;
		}

		std::string result = stream.str();

		if (result == "one" || result == "a") {
			return play_->EmplaceStackVar<int>(&instance_->Memory, 1);
		} else if (result == "two") {
			return play_->EmplaceStackVar<int>(&instance_->Memory, 2);
		} else if (result == "three") {
			return play_->EmplaceStackVar<int>(&instance_->Memory, 3);
		} else if (result == "four") {
			return play_->EmplaceStackVar<int>(&instance_->Memory, 4);
		} else if (result == "five") {
			return play_->EmplaceStackVar<int>(&instance_->Memory, 5);
		} else if (result == "six") {
			return play_->EmplaceStackVar<int>(&instance_->Memory, 6);
		}
		fprintf(stderr, "Unknown word: '%s'\n", result.c_str());
		assert(false);
	}
};

void Program::CompileAction(GameInstance *instance, Program *action, const std::string &text) {
	assert(instance);
	assert(action);
	assert(!text.empty());
	std::stringstream textStream(text);
	antlr4::ANTLRInputStream antlrStream(textStream);
	IvionLexer lexer(&antlrStream);
	antlr4::CommonTokenStream tokens(&lexer);
	IvionParser parser(&tokens);
	IvionCompiler compiler(instance, action, action, false);
	antlrcpp::Any result = compiler.visitText(parser.text());
}
void Program::CompileCard(GameInstance *instance, Card *card, const CardDef *cardDef) {
	assert(instance);
	assert(card);
	assert(cardDef);
	std::stringstream textStream(cardDef->active_mechanics_);
	antlr4::ANTLRInputStream antlrStream(textStream);
	IvionLexer lexer(&antlrStream);
	antlr4::CommonTokenStream tokens(&lexer);
	IvionParser parser(&tokens);
	IvionCompiler compiler(instance, card->PlayEffect, card->ResolveEffect, true);

	int *actions = card->PlayEffect->EmplaceStackVar<int>(&instance->Memory, cardDef->actions_);
	int *power = card->PlayEffect->EmplaceStackVar<int>(&instance->Memory, cardDef->power_);
	StackPlayer *player = compiler.GetActivePlayer();

	AST::ResourceCost(instance, card->PlayEffect, player,
			actions,
			power);

	AST::ResourceGain(instance, card->ResolveEffect, player,
			actions,
			power);

	// all cards need to check instant speed
	AST::AssertInstantCheck(instance, card->PlayEffect, card);

	antlrcpp::Any result = compiler.visitText(parser.text());
}

} // namespace Engine
} // namespace IO
