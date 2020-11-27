
// Generated from IvionParser.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "IvionParserVisitor.h"


/**
 * This class provides an empty implementation of IvionParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  IvionParserBaseVisitor : public IvionParserVisitor {
public:

  virtual antlrcpp::Any visitDisarmPlayer(IvionParser::DisarmPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSilencePlayer(IvionParser::SilencePlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSlowPlayer(IvionParser::SlowPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlPlayer(IvionParser::ControlPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTravelPlayer(IvionParser::TravelPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDestroyCard(IvionParser::DestroyCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDealDamage(IvionParser::DealDamageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCounterCard(IvionParser::CounterCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCounterCardCondition(IvionParser::CounterCardConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSpendResources(IvionParser::SpendResourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAttachCard(IvionParser::AttachCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGainPower(IvionParser::GainPowerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGainAction(IvionParser::GainActionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGainInitiative(IvionParser::GainInitiativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGainMitigate(IvionParser::GainMitigateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLoseMitigate(IvionParser::LoseMitigateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseSecondWind(IvionParser::UseSecondWindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnCard(IvionParser::ReturnCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPutBottomCardOfDeckIntoHand(IvionParser::PutBottomCardOfDeckIntoHandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerDurationEffects(IvionParser::TriggerDurationEffectsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlayCard(IvionParser::PlayCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiscardCards(IvionParser::DiscardCardsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGainsHeroic(IvionParser::GainsHeroicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHealPlayer(IvionParser::HealPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStunPlayer(IvionParser::StunPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStunPlayerCondition(IvionParser::StunPlayerConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevealCards(IvionParser::RevealCardsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRevealCardsCondition(IvionParser::RevealCardsConditionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrawCards(IvionParser::DrawCardsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRemoveControl(IvionParser::RemoveControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHardcastEffect(IvionParser::HardcastEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSeekEffect(IvionParser::SeekEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMakeTerrain(IvionParser::MakeTerrainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRemoveTerrain(IvionParser::RemoveTerrainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPayResources(IvionParser::PayResourcesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitScryEffect(IvionParser::ScryEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOverrideFrenzy(IvionParser::OverrideFrenzyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncreaseCardDuration(IvionParser::IncreaseCardDurationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitResetUseOfCard(IvionParser::ResetUseOfCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeroic(IvionParser::HeroicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnlyPlayCertainCards(IvionParser::OnlyPlayCertainCardsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCostReduction(IvionParser::CostReductionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRangeSet(IvionParser::RangeSetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCantPlayCards(IvionParser::CantPlayCardsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlayerCantBeTargeted(IvionParser::PlayerCantBeTargetedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncreasedHandSize(IvionParser::IncreasedHandSizeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIncreasedMaxHP(IvionParser::IncreasedMaxHPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplacesSecondWind(IvionParser::ReplacesSecondWindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNoInitiative(IvionParser::NoInitiativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDrawRange(IvionParser::DrawRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGainRange(IvionParser::GainRangeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLimitTargets(IvionParser::LimitTargetsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPassiveEffect(IvionParser::PassiveEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDurationEffect(IvionParser::DurationEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTurnTrigger(IvionParser::TurnTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGameStartTrigger(IvionParser::GameStartTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAfterEffectTrigger(IvionParser::AfterEffectTriggerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAfterControlled(IvionParser::AfterControlledContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerEffect(IvionParser::TriggerEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfWouldRecieveControl(IvionParser::IfWouldRecieveControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfWouldTakeDamage(IvionParser::IfWouldTakeDamageContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfWouldHeal(IvionParser::IfWouldHealContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReplacementTriggerEffect(IvionParser::ReplacementTriggerEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfPlayerMakesChoice(IvionParser::IfPlayerMakesChoiceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfPreviousActionInvalid(IvionParser::IfPreviousActionInvalidContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfResolvedCard(IvionParser::IfResolvedCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfUsedSecondWind(IvionParser::IfUsedSecondWindContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfNear(IvionParser::IfNearContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfControlled(IvionParser::IfControlledContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfPlayed(IvionParser::IfPlayedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfTileHadTerrain(IvionParser::IfTileHadTerrainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfCardRevealed(IvionParser::IfCardRevealedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfPlayerHasMitigate(IvionParser::IfPlayerHasMitigateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfPlayerDidntLeaveTile(IvionParser::IfPlayerDidntLeaveTileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfCardCostReduced(IvionParser::IfCardCostReducedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfPlayerHasMoreHP(IvionParser::IfPlayerHasMoreHPContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfPlayerHasNoActions(IvionParser::IfPlayerHasNoActionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfPlayerInTerrain(IvionParser::IfPlayerInTerrainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionEffect(IvionParser::ConditionEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCardCantBeTargeted(IvionParser::CardCantBeTargetedContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileEffect(IvionParser::WhileEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimaryCostReduction(IvionParser::PrimaryCostReductionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOnlyPlayIf(IvionParser::OnlyPlayIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOncePerGameLimit(IvionParser::OncePerGameLimitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerLimit(IvionParser::TriggerLimitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriggerTurnLimit(IvionParser::TriggerTurnLimitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOmniPresentEffect(IvionParser::OmniPresentEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOne(IvionParser::OneContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTwo(IvionParser::TwoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitThree(IvionParser::ThreeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(IvionParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(IvionParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChooseSameMultipleTimes(IvionParser::ChooseSameMultipleTimesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEffectList(IvionParser::EffectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChooseEffect(IvionParser::ChooseEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSingleEffect(IvionParser::SingleEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalEffect(IvionParser::ConditionalEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAlternativeEffect(IvionParser::AlternativeEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOptionalEffect(IvionParser::OptionalEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultiEffect(IvionParser::MultiEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEffect(IvionParser::EffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnyEffect(IvionParser::AnyEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreachEffect(IvionParser::BreachEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdvantageEffect(IvionParser::AdvantageEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFrenzyEffect(IvionParser::FrenzyEffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine(IvionParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitText(IvionParser::TextContext *ctx) override {
    return visitChildren(ctx);
  }


};

