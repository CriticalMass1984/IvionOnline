
// Generated from Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "IvionVisitor.h"


/**
 * This class provides an empty implementation of IvionVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  IvionBaseVisitor : public IvionVisitor {
public:

  virtual antlrcpp::Any visitFilterPlayer(IvionParser::FilterPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTargetPlayer(IvionParser::TargetPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectPlayer(IvionParser::SelectPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCardController(IvionParser::CardControllerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreviousPlayer(IvionParser::PreviousPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlayer(IvionParser::PlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDamagePlayer(IvionParser::DamagePlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControl(IvionParser::ControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlPlayer(IvionParser::ControlPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMovePlayer(IvionParser::MovePlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTravelPlayer(IvionParser::TravelPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGainResource(IvionParser::GainResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrawCards(IvionParser::DrawCardsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseSecondWind(IvionParser::UseSecondWindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlayACard(IvionParser::PlayACardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeal(IvionParser::HealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRangeSource(IvionParser::RangeSourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevealFromHand(IvionParser::RevealFromHandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEffectPlayer(IvionParser::EffectPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTargetTile(IvionParser::TargetTileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectTile(IvionParser::SelectTileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTile(IvionParser::TileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectCard(IvionParser::SelectCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreviousCard(IvionParser::PreviousCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTopOfStack(IvionParser::TopOfStackContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBottomOfDeck(IvionParser::BottomOfDeckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTopOfDeck(IvionParser::TopOfDeckContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHand(IvionParser::HandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCard(IvionParser::CardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttachCard(IvionParser::AttachCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMetaCounterCard(IvionParser::MetaCounterCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCounterCard(IvionParser::CounterCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDestroyCard(IvionParser::DestroyCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCardGainsTrait(IvionParser::CardGainsTraitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPutCard(IvionParser::PutCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCardEffect(IvionParser::CardEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTurnTrigger(IvionParser::TurnTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerConditions(IvionParser::TriggerConditionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerEffect(IvionParser::TriggerEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreach(IvionParser::BreachContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdvantage(IvionParser::AdvantageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResolved(IvionParser::ResolvedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsedSecondWind(IvionParser::UsedSecondWindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfMadeChoice(IvionParser::IfMadeChoiceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplacementCondition(IvionParser::ReplacementConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplacementEffect(IvionParser::ReplacementEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEffect(IvionParser::EffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChoose(IvionParser::ChooseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitText(IvionParser::TextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTheNumberOfCardsInHand(IvionParser::TheNumberOfCardsInHandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(IvionParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerWord(IvionParser::IntegerWordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(IvionParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }


};

