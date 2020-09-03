
// Generated from IvionGrammar/Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "IvionParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by IvionParser.
 */
class  IvionVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by IvionParser.
   */
    virtual antlrcpp::Any visitTargetPlayer(IvionParser::TargetPlayerContext *context) = 0;

    virtual antlrcpp::Any visitSelectPlayer(IvionParser::SelectPlayerContext *context) = 0;

    virtual antlrcpp::Any visitCardController(IvionParser::CardControllerContext *context) = 0;

    virtual antlrcpp::Any visitPreviousPlayer(IvionParser::PreviousPlayerContext *context) = 0;

    virtual antlrcpp::Any visitPlayer(IvionParser::PlayerContext *context) = 0;

    virtual antlrcpp::Any visitDamagePlayer(IvionParser::DamagePlayerContext *context) = 0;

    virtual antlrcpp::Any visitControl(IvionParser::ControlContext *context) = 0;

    virtual antlrcpp::Any visitControlPlayer(IvionParser::ControlPlayerContext *context) = 0;

    virtual antlrcpp::Any visitMovePlayer(IvionParser::MovePlayerContext *context) = 0;

    virtual antlrcpp::Any visitTravelPlayer(IvionParser::TravelPlayerContext *context) = 0;

    virtual antlrcpp::Any visitGainActions(IvionParser::GainActionsContext *context) = 0;

    virtual antlrcpp::Any visitGainPower(IvionParser::GainPowerContext *context) = 0;

    virtual antlrcpp::Any visitDrawCards(IvionParser::DrawCardsContext *context) = 0;

    virtual antlrcpp::Any visitEffectPlayer(IvionParser::EffectPlayerContext *context) = 0;

    virtual antlrcpp::Any visitTargetTile(IvionParser::TargetTileContext *context) = 0;

    virtual antlrcpp::Any visitSelectTile(IvionParser::SelectTileContext *context) = 0;

    virtual antlrcpp::Any visitTile(IvionParser::TileContext *context) = 0;

    virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *context) = 0;

    virtual antlrcpp::Any visitSelectCard(IvionParser::SelectCardContext *context) = 0;

    virtual antlrcpp::Any visitCard(IvionParser::CardContext *context) = 0;

    virtual antlrcpp::Any visitLine(IvionParser::LineContext *context) = 0;

    virtual antlrcpp::Any visitParagraph(IvionParser::ParagraphContext *context) = 0;

    virtual antlrcpp::Any visitText(IvionParser::TextContext *context) = 0;

    virtual antlrcpp::Any visitInteger(IvionParser::IntegerContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(IvionParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerWord(IvionParser::IntegerWordContext *context) = 0;


};

