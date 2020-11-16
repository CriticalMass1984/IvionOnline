
// Generated from Ivion.antlr4 by ANTLR 4.8

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
    virtual antlrcpp::Any visitFilterPlayer(IvionParser::FilterPlayerContext *context) = 0;

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

    virtual antlrcpp::Any visitGainResource(IvionParser::GainResourceContext *context) = 0;

    virtual antlrcpp::Any visitDrawCards(IvionParser::DrawCardsContext *context) = 0;

    virtual antlrcpp::Any visitUseSecondWind(IvionParser::UseSecondWindContext *context) = 0;

    virtual antlrcpp::Any visitPlayACard(IvionParser::PlayACardContext *context) = 0;

    virtual antlrcpp::Any visitHeal(IvionParser::HealContext *context) = 0;

    virtual antlrcpp::Any visitRangeSource(IvionParser::RangeSourceContext *context) = 0;

    virtual antlrcpp::Any visitRevealFromHand(IvionParser::RevealFromHandContext *context) = 0;

    virtual antlrcpp::Any visitEffectPlayer(IvionParser::EffectPlayerContext *context) = 0;

    virtual antlrcpp::Any visitTargetTile(IvionParser::TargetTileContext *context) = 0;

    virtual antlrcpp::Any visitSelectTile(IvionParser::SelectTileContext *context) = 0;

    virtual antlrcpp::Any visitTile(IvionParser::TileContext *context) = 0;

    virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *context) = 0;

    virtual antlrcpp::Any visitSelectCard(IvionParser::SelectCardContext *context) = 0;

    virtual antlrcpp::Any visitPreviousCard(IvionParser::PreviousCardContext *context) = 0;

    virtual antlrcpp::Any visitTopOfStack(IvionParser::TopOfStackContext *context) = 0;

    virtual antlrcpp::Any visitBottomOfDeck(IvionParser::BottomOfDeckContext *context) = 0;

    virtual antlrcpp::Any visitTopOfDeck(IvionParser::TopOfDeckContext *context) = 0;

    virtual antlrcpp::Any visitHand(IvionParser::HandContext *context) = 0;

    virtual antlrcpp::Any visitCard(IvionParser::CardContext *context) = 0;

    virtual antlrcpp::Any visitAttachCard(IvionParser::AttachCardContext *context) = 0;

    virtual antlrcpp::Any visitMetaCounterCard(IvionParser::MetaCounterCardContext *context) = 0;

    virtual antlrcpp::Any visitCounterCard(IvionParser::CounterCardContext *context) = 0;

    virtual antlrcpp::Any visitDestroyCard(IvionParser::DestroyCardContext *context) = 0;

    virtual antlrcpp::Any visitCardGainsTrait(IvionParser::CardGainsTraitContext *context) = 0;

    virtual antlrcpp::Any visitPutCard(IvionParser::PutCardContext *context) = 0;

    virtual antlrcpp::Any visitCardEffect(IvionParser::CardEffectContext *context) = 0;

    virtual antlrcpp::Any visitTurnTrigger(IvionParser::TurnTriggerContext *context) = 0;

    virtual antlrcpp::Any visitTriggerConditions(IvionParser::TriggerConditionsContext *context) = 0;

    virtual antlrcpp::Any visitTriggerEffect(IvionParser::TriggerEffectContext *context) = 0;

    virtual antlrcpp::Any visitBreach(IvionParser::BreachContext *context) = 0;

    virtual antlrcpp::Any visitAdvantage(IvionParser::AdvantageContext *context) = 0;

    virtual antlrcpp::Any visitResolved(IvionParser::ResolvedContext *context) = 0;

    virtual antlrcpp::Any visitUsedSecondWind(IvionParser::UsedSecondWindContext *context) = 0;

    virtual antlrcpp::Any visitIfMadeChoice(IvionParser::IfMadeChoiceContext *context) = 0;

    virtual antlrcpp::Any visitReplacementCondition(IvionParser::ReplacementConditionContext *context) = 0;

    virtual antlrcpp::Any visitReplacementEffect(IvionParser::ReplacementEffectContext *context) = 0;

    virtual antlrcpp::Any visitEffect(IvionParser::EffectContext *context) = 0;

    virtual antlrcpp::Any visitChoose(IvionParser::ChooseContext *context) = 0;

    virtual antlrcpp::Any visitText(IvionParser::TextContext *context) = 0;

    virtual antlrcpp::Any visitTheNumberOfCardsInHand(IvionParser::TheNumberOfCardsInHandContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(IvionParser::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerWord(IvionParser::IntegerWordContext *context) = 0;

    virtual antlrcpp::Any visitInteger(IvionParser::IntegerContext *context) = 0;


};

