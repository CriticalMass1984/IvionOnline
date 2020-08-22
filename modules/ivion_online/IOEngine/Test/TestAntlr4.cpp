#include <antlr4-runtime.h>
#include <IOEngine/Antlr4/IvionParser.h>
#include <IOEngine/Antlr4/IvionLexer.h>
#include <IOEngine/Antlr4/IvionBaseVisitor.h>

#include <IOEngine/Player.hpp>
#include <IOEngine/Card.hpp>
#include <IOEngine/GameInstance.hpp>
#include <IOEngine/Program.hpp>
#include <IOEngine/AST/AST.hpp>

namespace ivion = IO::Engine;
namespace Var = IO::Engine::Var;

/**
 * This class provides an empty implementation of IvionVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class IvionExecutor : public IvionVisitor
{
    std::vector<ivion::PlayerVar *> referencedOtherPlayers_;

public:
    virtual antlrcpp::Any visitTargetPlayer(IvionParser::TargetPlayerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);

        //allocate the player reference stack variable
        ivion::PlayerVar *player = ivion::GameInstance::Active->ActiveCard->Effect.EmplaceStackVar<ivion::PlayerVar>(nullptr);
        referencedOtherPlayers_.push_back(player);

        //insert the method call
        ivion::GameInstance::Active->ActiveCard->Effect.EmplaceMethodCallArgs<ivion::AST::TargetPlayerArgs>(player);

        return static_cast<ivion::Player **>(&player->Get());
    }

    virtual antlrcpp::Any visitSelectPlayer(IvionParser::SelectPlayerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);

        //allocate the player reference stack variable
        ivion::PlayerVar *player = ivion::GameInstance::Active->ActiveCard->Effect.EmplaceStackVar<ivion::PlayerVar>(nullptr);
        referencedOtherPlayers_.push_back(player);

        //insert the method call
        ivion::GameInstance::Active->ActiveCard->Effect.EmplaceMethodCallArgs<ivion::AST::SelectPlayerArgs>(player);

        // return players;
        return static_cast<ivion::Player **>(&player->Get());
    }

    virtual antlrcpp::Any visitCardController(IvionParser::CardControllerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return static_cast<ivion::Player **>(&ivion::GameInstance::Active->ActiveCard->Controller.Get());
    }

    virtual antlrcpp::Any visitPreviousPlayer(IvionParser::PreviousPlayerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        assert(referencedOtherPlayers_.size() > 0);
        return static_cast<ivion::Player **>(&referencedOtherPlayers_.back()->Get());
    }

    virtual antlrcpp::Any visitPlayer(IvionParser::PlayerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDamagePlayer(IvionParser::DamagePlayerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);

        IvionParser::IntegerContext *intCtx = ctx->getRuleContext<IvionParser::IntegerContext>(0);
        int *damage = visitInteger(intCtx);

        IvionParser::PlayerContext *playerValue = ctx->getRuleContext<IvionParser::PlayerContext>(0);
        ivion::Player **player = visitPlayer(playerValue);

        //insert the method call
        ivion::GameInstance::Active->ActiveCard->Effect.EmplaceMethodCallArgs<ivion::AST::DamagePlayerArgs>(player, damage);

        // for (antlr4::tree::ParseTree *child : ctx->children)
        // {
        //     fprintf(stderr, "Child: %s\n", child->getText().c_str());
        // }
        return 0;
    }

    virtual antlrcpp::Any visitControl(IvionParser::ControlContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitControlPlayer(IvionParser::ControlPlayerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitMovePlayer(IvionParser::MovePlayerContext *ctx) override
    {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitEffectPlayer(IvionParser::EffectPlayerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitTargetTile(IvionParser::TargetTileContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitSelectTile(IvionParser::SelectTileContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitTile(IvionParser::TileContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitCard(IvionParser::CardContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitLine(IvionParser::LineContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitParagraph(IvionParser::ParagraphContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitText(IvionParser::TextContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitIntegerLiteral(IvionParser::IntegerLiteralContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        assert(ctx->children.size() == 1);

        int value = std::atoi(ctx->children[0]->getText().c_str());

        return ivion::GameInstance::Active->ActiveCard->Effect.EmplaceStackVar<int>(value);
    }

    virtual antlrcpp::Any visitInteger(IvionParser::IntegerContext *ctx) override
    {
        fprintf(stdout, "%s\n", __FUNCTION__);
        return visitChildren(ctx);
    }
};

int main(int argc, char **argv)
{
    std::vector<ivion::Player> players;
    players.emplace_back(1);
    players.emplace_back(2);
    std::vector<ivion::Team> teams;
    teams.emplace_back();

    ivion::GameInstance game_instance(std::move(players), std::move(teams));
    ivion::GameInstance::Active = &game_instance;

    std::ifstream file(argv[1]);
    antlr4::ANTLRInputStream antlrStream(file);
    IvionLexer lexer(&antlrStream);
    antlr4::CommonTokenStream tokens(&lexer);
    IvionParser parser(&tokens);
    IvionExecutor executor;
    // fprintf(stdout, "\n%s\n", parser.text()->toStringTree(true).c_str());
    antlrcpp::Any result = executor.visitText(parser.text());

    ivion::GameInstance::Active->ActiveCard->Effect.Print();
}