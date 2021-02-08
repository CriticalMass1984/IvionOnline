
// Generated from IvionParser.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "IvionParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by IvionParser.
 */
class  IvionParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by IvionParser.
   */
    virtual antlrcpp::Any visitGeneralPostInTerrainFilter(IvionParser::GeneralPostInTerrainFilterContext *context) = 0;

    virtual antlrcpp::Any visitGeneralPostNearTerrainFilter(IvionParser::GeneralPostNearTerrainFilterContext *context) = 0;

    virtual antlrcpp::Any visitGeneralPostNearEntityFilter(IvionParser::GeneralPostNearEntityFilterContext *context) = 0;

    virtual antlrcpp::Any visitGeneralPostInEntityFilter(IvionParser::GeneralPostInEntityFilterContext *context) = 0;

    virtual antlrcpp::Any visitGeneralPostPlayerChoiceFilter(IvionParser::GeneralPostPlayerChoiceFilterContext *context) = 0;

    virtual antlrcpp::Any visitGeneralPostAtLeastAwayFilter(IvionParser::GeneralPostAtLeastAwayFilterContext *context) = 0;

    virtual antlrcpp::Any visitGeneralPostAtLeastAwayFromFilter(IvionParser::GeneralPostAtLeastAwayFromFilterContext *context) = 0;

    virtual antlrcpp::Any visitPlayerType(IvionParser::PlayerTypeContext *context) = 0;

    virtual antlrcpp::Any visitAnotherFlag(IvionParser::AnotherFlagContext *context) = 0;

    virtual antlrcpp::Any visitUpToFlag(IvionParser::UpToFlagContext *context) = 0;

    virtual antlrcpp::Any visitUncontrolledFlag(IvionParser::UncontrolledFlagContext *context) = 0;

    virtual antlrcpp::Any visitControlledFlag(IvionParser::ControlledFlagContext *context) = 0;

    virtual antlrcpp::Any visitPlayerPrefix(IvionParser::PlayerPrefixContext *context) = 0;

    virtual antlrcpp::Any visitPlayerPostfix(IvionParser::PlayerPostfixContext *context) = 0;

    virtual antlrcpp::Any visitPlayerFilter(IvionParser::PlayerFilterContext *context) = 0;

    virtual antlrcpp::Any visitCurrentPlayer(IvionParser::CurrentPlayerContext *context) = 0;

    virtual antlrcpp::Any visitPreviousPlayer(IvionParser::PreviousPlayerContext *context) = 0;

    virtual antlrcpp::Any visitPreviousCardsOwner(IvionParser::PreviousCardsOwnerContext *context) = 0;

    virtual antlrcpp::Any visitPreviousCardsController(IvionParser::PreviousCardsControllerContext *context) = 0;

    virtual antlrcpp::Any visitPlayerRef(IvionParser::PlayerRefContext *context) = 0;

    virtual antlrcpp::Any visitSelectPlayer(IvionParser::SelectPlayerContext *context) = 0;

    virtual antlrcpp::Any visitAllPlayers(IvionParser::AllPlayersContext *context) = 0;

    virtual antlrcpp::Any visitPlayer(IvionParser::PlayerContext *context) = 0;

    virtual antlrcpp::Any visitCardPreEnemyFilter(IvionParser::CardPreEnemyFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPreAttachedFilter(IvionParser::CardPreAttachedFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPreAbilityFilter(IvionParser::CardPreAbilityFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPreAttackFilter(IvionParser::CardPreAttackFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPreRevealedFilter(IvionParser::CardPreRevealedFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPreInstanceFilter(IvionParser::CardPreInstanceFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPrefix(IvionParser::CardPrefixContext *context) = 0;

    virtual antlrcpp::Any visitCardPostTargettingFilter(IvionParser::CardPostTargettingFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPostCostFilter(IvionParser::CardPostCostFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPostAttachedToFilter(IvionParser::CardPostAttachedToFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPostControlledByPlayerFilter(IvionParser::CardPostControlledByPlayerFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPostHardcastFilter(IvionParser::CardPostHardcastFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPostFrenzyFilter(IvionParser::CardPostFrenzyFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPostInDiscardFilter(IvionParser::CardPostInDiscardFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPostTurnRefFilter(IvionParser::CardPostTurnRefFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardPostfix(IvionParser::CardPostfixContext *context) = 0;

    virtual antlrcpp::Any visitCardFilter(IvionParser::CardFilterContext *context) = 0;

    virtual antlrcpp::Any visitCardName(IvionParser::CardNameContext *context) = 0;

    virtual antlrcpp::Any visitBottomCard(IvionParser::BottomCardContext *context) = 0;

    virtual antlrcpp::Any visitPreviousCard(IvionParser::PreviousCardContext *context) = 0;

    virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *context) = 0;

    virtual antlrcpp::Any visitSelectCard(IvionParser::SelectCardContext *context) = 0;

    virtual antlrcpp::Any visitSingleCard(IvionParser::SingleCardContext *context) = 0;

    virtual antlrcpp::Any visitAllCards(IvionParser::AllCardsContext *context) = 0;

    virtual antlrcpp::Any visitMultiCard(IvionParser::MultiCardContext *context) = 0;

    virtual antlrcpp::Any visitCard(IvionParser::CardContext *context) = 0;

    virtual antlrcpp::Any visitTilePreEmptyFilter(IvionParser::TilePreEmptyFilterContext *context) = 0;

    virtual antlrcpp::Any visitTilePreFix(IvionParser::TilePreFixContext *context) = 0;

    virtual antlrcpp::Any visitTilePostFix(IvionParser::TilePostFixContext *context) = 0;

    virtual antlrcpp::Any visitTileFilter(IvionParser::TileFilterContext *context) = 0;

    virtual antlrcpp::Any visitTargetTile(IvionParser::TargetTileContext *context) = 0;

    virtual antlrcpp::Any visitPreviousTile(IvionParser::PreviousTileContext *context) = 0;

    virtual antlrcpp::Any visitTheNearestTile(IvionParser::TheNearestTileContext *context) = 0;

    virtual antlrcpp::Any visitPlayersTile(IvionParser::PlayersTileContext *context) = 0;

    virtual antlrcpp::Any visitCardsTile(IvionParser::CardsTileContext *context) = 0;

    virtual antlrcpp::Any visitSingleTile(IvionParser::SingleTileContext *context) = 0;

    virtual antlrcpp::Any visitMultiTile(IvionParser::MultiTileContext *context) = 0;

    virtual antlrcpp::Any visitAllTiles(IvionParser::AllTilesContext *context) = 0;

    virtual antlrcpp::Any visitTile(IvionParser::TileContext *context) = 0;

    virtual antlrcpp::Any visitEntity(IvionParser::EntityContext *context) = 0;

    virtual antlrcpp::Any visitHypotheticalEntity(IvionParser::HypotheticalEntityContext *context) = 0;

    virtual antlrcpp::Any visitDisarmPlayer(IvionParser::DisarmPlayerContext *context) = 0;

    virtual antlrcpp::Any visitSilencePlayer(IvionParser::SilencePlayerContext *context) = 0;

    virtual antlrcpp::Any visitSlowPlayer(IvionParser::SlowPlayerContext *context) = 0;

    virtual antlrcpp::Any visitControlPlayer(IvionParser::ControlPlayerContext *context) = 0;

    virtual antlrcpp::Any visitAwayFlag(IvionParser::AwayFlagContext *context) = 0;

    virtual antlrcpp::Any visitTravelDistance(IvionParser::TravelDistanceContext *context) = 0;

    virtual antlrcpp::Any visitTravelPlayer(IvionParser::TravelPlayerContext *context) = 0;

    virtual antlrcpp::Any visitDestroyCard(IvionParser::DestroyCardContext *context) = 0;

    virtual antlrcpp::Any visitDealDamage(IvionParser::DealDamageContext *context) = 0;

    virtual antlrcpp::Any visitCounterCard(IvionParser::CounterCardContext *context) = 0;

    virtual antlrcpp::Any visitAttachCard(IvionParser::AttachCardContext *context) = 0;

    virtual antlrcpp::Any visitGainPower(IvionParser::GainPowerContext *context) = 0;

    virtual antlrcpp::Any visitGainAction(IvionParser::GainActionContext *context) = 0;

    virtual antlrcpp::Any visitGainInitiative(IvionParser::GainInitiativeContext *context) = 0;

    virtual antlrcpp::Any visitGainMitigate(IvionParser::GainMitigateContext *context) = 0;

    virtual antlrcpp::Any visitLoseMitigate(IvionParser::LoseMitigateContext *context) = 0;

    virtual antlrcpp::Any visitUseSecondWind(IvionParser::UseSecondWindContext *context) = 0;

    virtual antlrcpp::Any visitReturnCard(IvionParser::ReturnCardContext *context) = 0;

    virtual antlrcpp::Any visitPutBottomCardOfDeckIntoHand(IvionParser::PutBottomCardOfDeckIntoHandContext *context) = 0;

    virtual antlrcpp::Any visitTriggerDurationEffects(IvionParser::TriggerDurationEffectsContext *context) = 0;

    virtual antlrcpp::Any visitForLessResources(IvionParser::ForLessResourcesContext *context) = 0;

    virtual antlrcpp::Any visitFreeFlag(IvionParser::FreeFlagContext *context) = 0;

    virtual antlrcpp::Any visitPlayCard(IvionParser::PlayCardContext *context) = 0;

    virtual antlrcpp::Any visitPlayUltimate(IvionParser::PlayUltimateContext *context) = 0;

    virtual antlrcpp::Any visitDiscardCards(IvionParser::DiscardCardsContext *context) = 0;

    virtual antlrcpp::Any visitGainsHeroic(IvionParser::GainsHeroicContext *context) = 0;

    virtual antlrcpp::Any visitHealPlayer(IvionParser::HealPlayerContext *context) = 0;

    virtual antlrcpp::Any visitStunPlayer(IvionParser::StunPlayerContext *context) = 0;

    virtual antlrcpp::Any visitRevealCards(IvionParser::RevealCardsContext *context) = 0;

    virtual antlrcpp::Any visitDrawCards(IvionParser::DrawCardsContext *context) = 0;

    virtual antlrcpp::Any visitRemoveControl(IvionParser::RemoveControlContext *context) = 0;

    virtual antlrcpp::Any visitHardcastEffect(IvionParser::HardcastEffectContext *context) = 0;

    virtual antlrcpp::Any visitSeekEffect(IvionParser::SeekEffectContext *context) = 0;

    virtual antlrcpp::Any visitMakeTerrain(IvionParser::MakeTerrainContext *context) = 0;

    virtual antlrcpp::Any visitRemoveTerrain(IvionParser::RemoveTerrainContext *context) = 0;

    virtual antlrcpp::Any visitSpendResources(IvionParser::SpendResourcesContext *context) = 0;

    virtual antlrcpp::Any visitScryEffect(IvionParser::ScryEffectContext *context) = 0;

    virtual antlrcpp::Any visitOverrideFrenzy(IvionParser::OverrideFrenzyContext *context) = 0;

    virtual antlrcpp::Any visitIncreaseCardDuration(IvionParser::IncreaseCardDurationContext *context) = 0;

    virtual antlrcpp::Any visitResetUseOfCard(IvionParser::ResetUseOfCardContext *context) = 0;

    virtual antlrcpp::Any visitHeroic(IvionParser::HeroicContext *context) = 0;

    virtual antlrcpp::Any visitOnlyPlayCertainCards(IvionParser::OnlyPlayCertainCardsContext *context) = 0;

    virtual antlrcpp::Any visitCostReduction(IvionParser::CostReductionContext *context) = 0;

    virtual antlrcpp::Any visitRangeSet(IvionParser::RangeSetContext *context) = 0;

    virtual antlrcpp::Any visitCantPlayCards(IvionParser::CantPlayCardsContext *context) = 0;

    virtual antlrcpp::Any visitPlayerCantBeTargeted(IvionParser::PlayerCantBeTargetedContext *context) = 0;

    virtual antlrcpp::Any visitIncreasedHandSize(IvionParser::IncreasedHandSizeContext *context) = 0;

    virtual antlrcpp::Any visitIncreasedMaxHP(IvionParser::IncreasedMaxHPContext *context) = 0;

    virtual antlrcpp::Any visitReplacesSecondWind(IvionParser::ReplacesSecondWindContext *context) = 0;

    virtual antlrcpp::Any visitNoInitiative(IvionParser::NoInitiativeContext *context) = 0;

    virtual antlrcpp::Any visitDrawRange(IvionParser::DrawRangeContext *context) = 0;

    virtual antlrcpp::Any visitGainRange(IvionParser::GainRangeContext *context) = 0;

    virtual antlrcpp::Any visitLimitTargets(IvionParser::LimitTargetsContext *context) = 0;

    virtual antlrcpp::Any visitPassiveEffect(IvionParser::PassiveEffectContext *context) = 0;

    virtual antlrcpp::Any visitDurationEffect(IvionParser::DurationEffectContext *context) = 0;

    virtual antlrcpp::Any visitStartOfPlayerTurn(IvionParser::StartOfPlayerTurnContext *context) = 0;

    virtual antlrcpp::Any visitEndOfPlayerTurnTrigger(IvionParser::EndOfPlayerTurnTriggerContext *context) = 0;

    virtual antlrcpp::Any visitStartOfPlayerNextTurn(IvionParser::StartOfPlayerNextTurnContext *context) = 0;

    virtual antlrcpp::Any visitEndOfTurnTrigger(IvionParser::EndOfTurnTriggerContext *context) = 0;

    virtual antlrcpp::Any visitTurnTrigger(IvionParser::TurnTriggerContext *context) = 0;

    virtual antlrcpp::Any visitGameStartTrigger(IvionParser::GameStartTriggerContext *context) = 0;

    virtual antlrcpp::Any visitEffectPostfix(IvionParser::EffectPostfixContext *context) = 0;

    virtual antlrcpp::Any visitIfPlayerMakesChoice(IvionParser::IfPlayerMakesChoiceContext *context) = 0;

    virtual antlrcpp::Any visitIfPreviousActionInvalid(IvionParser::IfPreviousActionInvalidContext *context) = 0;

    virtual antlrcpp::Any visitIfResolvedCard(IvionParser::IfResolvedCardContext *context) = 0;

    virtual antlrcpp::Any visitIfPlayedCard(IvionParser::IfPlayedCardContext *context) = 0;

    virtual antlrcpp::Any visitIfUsedSecondWind(IvionParser::IfUsedSecondWindContext *context) = 0;

    virtual antlrcpp::Any visitIfNear(IvionParser::IfNearContext *context) = 0;

    virtual antlrcpp::Any visitIfControlled(IvionParser::IfControlledContext *context) = 0;

    virtual antlrcpp::Any visitIfTileHadTerrain(IvionParser::IfTileHadTerrainContext *context) = 0;

    virtual antlrcpp::Any visitIfCardRevealed(IvionParser::IfCardRevealedContext *context) = 0;

    virtual antlrcpp::Any visitIfPlayerHasMitigate(IvionParser::IfPlayerHasMitigateContext *context) = 0;

    virtual antlrcpp::Any visitIfPlayerDidntLeaveTile(IvionParser::IfPlayerDidntLeaveTileContext *context) = 0;

    virtual antlrcpp::Any visitIfCardCostReduced(IvionParser::IfCardCostReducedContext *context) = 0;

    virtual antlrcpp::Any visitIfPlayerHasMoreHP(IvionParser::IfPlayerHasMoreHPContext *context) = 0;

    virtual antlrcpp::Any visitIfPlayerHasNoActions(IvionParser::IfPlayerHasNoActionsContext *context) = 0;

    virtual antlrcpp::Any visitIfInTerrain(IvionParser::IfInTerrainContext *context) = 0;

    virtual antlrcpp::Any visitCounterCardCondition(IvionParser::CounterCardConditionContext *context) = 0;

    virtual antlrcpp::Any visitStunPlayerCondition(IvionParser::StunPlayerConditionContext *context) = 0;

    virtual antlrcpp::Any visitRevealCardsCondition(IvionParser::RevealCardsConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerControlledCondition(IvionParser::PlayerControlledConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerUncontrolledCondition(IvionParser::PlayerUncontrolledConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerHasCardsInDiscardCondition(IvionParser::PlayerHasCardsInDiscardConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerHasTakenDamageCondition(IvionParser::PlayerHasTakenDamageConditionContext *context) = 0;

    virtual antlrcpp::Any visitCardResolvedCondition(IvionParser::CardResolvedConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerDrewCardCondition(IvionParser::PlayerDrewCardConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerMadeTerrainCondition(IvionParser::PlayerMadeTerrainConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerEntersSpaceCondition(IvionParser::PlayerEntersSpaceConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerAttachesCardCondition(IvionParser::PlayerAttachesCardConditionContext *context) = 0;

    virtual antlrcpp::Any visitCardIsRevealedCondition(IvionParser::CardIsRevealedConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerStunsPlayerCondition(IvionParser::PlayerStunsPlayerConditionContext *context) = 0;

    virtual antlrcpp::Any visitCardSentToDiscardCondition(IvionParser::CardSentToDiscardConditionContext *context) = 0;

    virtual antlrcpp::Any visitCardFailsToResolveCondition(IvionParser::CardFailsToResolveConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerSlowsPlayerCondition(IvionParser::PlayerSlowsPlayerConditionContext *context) = 0;

    virtual antlrcpp::Any visitPlayerRecivesControlCondition(IvionParser::PlayerRecivesControlConditionContext *context) = 0;

    virtual antlrcpp::Any visitCondition(IvionParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitTriggerEffect(IvionParser::TriggerEffectContext *context) = 0;

    virtual antlrcpp::Any visitIfWouldRecieveControl(IvionParser::IfWouldRecieveControlContext *context) = 0;

    virtual antlrcpp::Any visitIfWouldTakeDamage(IvionParser::IfWouldTakeDamageContext *context) = 0;

    virtual antlrcpp::Any visitIfWouldHeal(IvionParser::IfWouldHealContext *context) = 0;

    virtual antlrcpp::Any visitReplacementTriggerEffect(IvionParser::ReplacementTriggerEffectContext *context) = 0;

    virtual antlrcpp::Any visitCardCantBeTargeted(IvionParser::CardCantBeTargetedContext *context) = 0;

    virtual antlrcpp::Any visitWhileEffect(IvionParser::WhileEffectContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryCostReduction(IvionParser::PrimaryCostReductionContext *context) = 0;

    virtual antlrcpp::Any visitOnlyPlayIf(IvionParser::OnlyPlayIfContext *context) = 0;

    virtual antlrcpp::Any visitOncePerGameLimit(IvionParser::OncePerGameLimitContext *context) = 0;

    virtual antlrcpp::Any visitTriggerLimit(IvionParser::TriggerLimitContext *context) = 0;

    virtual antlrcpp::Any visitTriggerTurnLimit(IvionParser::TriggerTurnLimitContext *context) = 0;

    virtual antlrcpp::Any visitOmniPresentEffect(IvionParser::OmniPresentEffectContext *context) = 0;

    virtual antlrcpp::Any visitOne(IvionParser::OneContext *context) = 0;

    virtual antlrcpp::Any visitTwo(IvionParser::TwoContext *context) = 0;

    virtual antlrcpp::Any visitThree(IvionParser::ThreeContext *context) = 0;

    virtual antlrcpp::Any visitNumber(IvionParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitPlayerPowerValue(IvionParser::PlayerPowerValueContext *context) = 0;

    virtual antlrcpp::Any visitPlayerControlAmountValue(IvionParser::PlayerControlAmountValueContext *context) = 0;

    virtual antlrcpp::Any visitPlayerHandSize(IvionParser::PlayerHandSizeContext *context) = 0;

    virtual antlrcpp::Any visitPlayerMitigate(IvionParser::PlayerMitigateContext *context) = 0;

    virtual antlrcpp::Any visitPlayerCardsInHand(IvionParser::PlayerCardsInHandContext *context) = 0;

    virtual antlrcpp::Any visitLiteralValue(IvionParser::LiteralValueContext *context) = 0;

    virtual antlrcpp::Any visitGameStateValue(IvionParser::GameStateValueContext *context) = 0;

    virtual antlrcpp::Any visitValue(IvionParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitChooseSameMultipleTimes(IvionParser::ChooseSameMultipleTimesContext *context) = 0;

    virtual antlrcpp::Any visitEffectList(IvionParser::EffectListContext *context) = 0;

    virtual antlrcpp::Any visitChooseEffect(IvionParser::ChooseEffectContext *context) = 0;

    virtual antlrcpp::Any visitSingleEffect(IvionParser::SingleEffectContext *context) = 0;

    virtual antlrcpp::Any visitRepeatedEffect(IvionParser::RepeatedEffectContext *context) = 0;

    virtual antlrcpp::Any visitConditionalEffect(IvionParser::ConditionalEffectContext *context) = 0;

    virtual antlrcpp::Any visitAlternativeEffect(IvionParser::AlternativeEffectContext *context) = 0;

    virtual antlrcpp::Any visitEffect(IvionParser::EffectContext *context) = 0;

    virtual antlrcpp::Any visitEffectEnd(IvionParser::EffectEndContext *context) = 0;

    virtual antlrcpp::Any visitAnyEffect(IvionParser::AnyEffectContext *context) = 0;

    virtual antlrcpp::Any visitBreachEffect(IvionParser::BreachEffectContext *context) = 0;

    virtual antlrcpp::Any visitAdvantageEffect(IvionParser::AdvantageEffectContext *context) = 0;

    virtual antlrcpp::Any visitFrenzyEffect(IvionParser::FrenzyEffectContext *context) = 0;

    virtual antlrcpp::Any visitLine(IvionParser::LineContext *context) = 0;

    virtual antlrcpp::Any visitText(IvionParser::TextContext *context) = 0;


};

