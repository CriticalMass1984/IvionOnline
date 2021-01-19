
// Generated from IvionParser.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionParser : public antlr4::Parser {
public:
  enum {
    Disarm = 1, Target = 2, Enemy = 3, In = 4, Terrain = 5, Them = 6, Silence = 7, 
    That = 8, Tile = 9, Yourself = 10, Slow = 11, The = 12, Controller = 13, 
    Apply = 14, More = 15, Instances = 16, Of = 17, A = 18, Control = 19, 
    Type = 20, Your = 21, Choice = 22, To = 23, Instance = 24, Each = 25, 
    Near = 26, Increase = 27, Value = 28, Already = 29, Affecting = 30, 
    By = 31, Travel = 32, Another = 33, Player = 34, Away = 35, From = 36, 
    You = 37, Up = 38, Nearest = 39, Next = 40, Unless = 41, They = 42, 
    Destroy = 43, Card = 44, Attached = 45, All = 46, Deal = 47, Damage = 48, 
    Equal = 49, Number = 50, Their = 51, Hand = 52, Plus = 53, Mitigate = 54, 
    For = 55, Total = 56, Counter = 57, Its = 58, Spend = 59, Resource = 60, 
    Targeting = 61, Maximum = 62, Size = 63, Increased = 64, With = 65, 
    Cost = 66, Or = 67, Less = 68, Controlled = 69, Uncontrolled = 70, Non = 71, 
    Attack = 72, Ability = 73, If = 74, Is = 75, Replaces = 76, Countered = 77, 
    Effect = 78, Attach = 79, Empty = 80, Until = 81, End = 82, Turn = 83, 
    Than = 84, Start = 85, Gain = 86, Additional = 87, Gains = 88, Lose = 89, 
    Use = 90, Second = 91, Third = 92, Wind = 93, Return = 94, Owner = 95, 
    Discard = 96, May = 97, Put = 98, Bottom = 99, Deck = 100, Into = 101, 
    Trigger = 102, Duration = 103, Effects = 104, As = 105, Though = 106, 
    Had = 107, Just = 108, Ended = 109, Even = 110, Play = 111, Free = 112, 
    Frenzy = 113, Cursed = 114, Dagger = 115, This = 116, Doesnt = 117, 
    Count = 118, Towards = 119, Limit = 120, Per = 121, Runic = 122, Slaughter = 123, 
    Have = 124, Heroic = 125, Heal = 126, HP = 127, Stun = 128, Removed = 129, 
    Way = 130, Reveal = 131, Draw = 132, Then = 133, Except = 134, Also = 135, 
    Range = 136, Remove = 137, Hardcast = 138, Seek = 139, Make = 140, Difficult = 141, 
    Ultimate = 142, At = 143, Least = 144, Token = 145, Look = 146, Top = 147, 
    Any = 148, On = 149, And = 150, Rest = 151, Much = 152, Order = 153, 
    No = 154, Used = 155, Reset = 156, Only = 157, Named = 158, Resolve = 159, 
    Taken = 160, Cant = 161, Be = 162, Targeted = 163, Enemies = 164, After = 165, 
    First = 166, During = 167, Enters = 168, Ally = 169, Time = 170, Receive = 171, 
    Sent = 172, Would = 173, Instead = 174, Do = 175, Dont = 176, While = 177, 
    Leave = 178, Didnt = 179, Take = 180, Reduced = 181, Not = 182, Reduce = 183, 
    Below = 184, Fails = 185, Other = 186, Once = 187, Twice = 188, Game = 189, 
    CARD_NAME = 190, Integer = 191, One = 192, Two = 193, Three = 194, C = 195, 
    P = 196, D = 197, O = 198, POWER = 199, ACTION = 200, INITIATIVE = 201, 
    Choose = 202, Same = 203, Mode = 204, It = 205, Breach = 206, Advantage = 207, 
    Whitespace = 208
  };

  enum {
    RuleGeneralPostInTerrainFilter = 0, RuleGeneralPostNearTerrainFilter = 1, 
    RuleGeneralPostNearPlayerFilter = 2, RuleGeneralPostNearTileFilter = 3, 
    RuleGeneralPostInTileFilter = 4, RuleGeneralPostNearCardFilter = 5, 
    RuleGeneralPostInCardFilter = 6, RuleGeneralPostPlayerChoiceFilter = 7, 
    RuleGeneralPostAtLeastAwayFilter = 8, RuleGeneralPostAtLeastAwayFromPlayerFilter = 9, 
    RulePlayerType = 10, RulePlayerPreFix = 11, RulePlayerPostFix = 12, 
    RulePlayerFilter = 13, RuleCurrentPlayer = 14, RulePreviousPlayer = 15, 
    RulePreviousCardsOwner = 16, RulePreviousCardsController = 17, RulePlayerRef = 18, 
    RuleTargetPlayer = 19, RuleSinglePlayer = 20, RuleMultiPlayer = 21, 
    RuleAllOtherPlayers = 22, RuleAllPlayers = 23, RulePlayer = 24, RuleHypotheticalPlayer = 25, 
    RuleCardPreEnemyFilter = 26, RuleCardPreAttachedFilter = 27, RuleCardPreAbilityFilter = 28, 
    RuleCardPreAttackFilter = 29, RuleCardPreRevealedFilter = 30, RuleCardPreAnotherFilter = 31, 
    RuleCardPreInstanceFilter = 32, RuleCardPrefix = 33, RuleCardPostTargettingFilter = 34, 
    RuleCardPostCostFilter = 35, RuleCardPostAttachedToPlayerFilter = 36, 
    RuleCardPostAttachedToTileFilter = 37, RuleCardPostControlledByPlayerFilter = 38, 
    RuleCardPostHardcastFilter = 39, RuleCardPostFrenzyFilter = 40, RuleCardPostInDiscardFilter = 41, 
    RuleCardPostTurnRefFilter = 42, RuleCardPostfix = 43, RuleCardFilter = 44, 
    RuleCardName = 45, RuleBottomCard = 46, RulePreviousCard = 47, RuleTargetCard = 48, 
    RuleSelectCard = 49, RuleSingleCard = 50, RuleAllCards = 51, RuleMultiCard = 52, 
    RuleCard = 53, RuleHypotheticalCard = 54, RuleTilePreEmptyFilter = 55, 
    RuleTilePreFix = 56, RuleTilePostFix = 57, RuleTileFilter = 58, RuleTargetTile = 59, 
    RulePreviousTile = 60, RuleTheNearestTile = 61, RulePlayersTile = 62, 
    RuleCardsTile = 63, RuleSingleTile = 64, RuleMultiTile = 65, RuleAllTiles = 66, 
    RuleTile = 67, RuleHypotheticalTile = 68, RuleEntity = 69, RuleHypotheticalEntity = 70, 
    RuleDisarmPlayer = 71, RuleSilencePlayer = 72, RuleSlowPlayer = 73, 
    RuleControlPlayer = 74, RuleAwayFlag = 75, RuleUpToFlag = 76, RuleTravelDistance = 77, 
    RuleTravelPlayer = 78, RuleDestroyCard = 79, RuleDealDamage = 80, RuleCounterCard = 81, 
    RuleAttachCard = 82, RuleGainPower = 83, RuleGainAction = 84, RuleGainInitiative = 85, 
    RuleGainMitigate = 86, RuleLoseMitigate = 87, RuleUseSecondWind = 88, 
    RuleReturnCard = 89, RulePutBottomCardOfDeckIntoHand = 90, RuleTriggerDurationEffects = 91, 
    RuleForLessResources = 92, RuleFreeFlag = 93, RulePlayCard = 94, RulePlayUltimate = 95, 
    RuleDiscardCards = 96, RuleGainsHeroic = 97, RuleHealPlayer = 98, RuleStunPlayer = 99, 
    RuleRevealCards = 100, RuleDrawCards = 101, RuleRemoveControl = 102, 
    RuleHardcastEffect = 103, RuleSeekEffect = 104, RuleMakeTerrain = 105, 
    RuleRemoveTerrain = 106, RuleSpendResources = 107, RuleScryEffect = 108, 
    RuleOverrideFrenzy = 109, RuleIncreaseCardDuration = 110, RuleResetUseOfCard = 111, 
    RuleHeroic = 112, RuleOnlyPlayCertainCards = 113, RuleCostReduction = 114, 
    RuleRangeSet = 115, RuleCantPlayCards = 116, RulePlayerCantBeTargeted = 117, 
    RuleIncreasedHandSize = 118, RuleIncreasedMaxHP = 119, RuleReplacesSecondWind = 120, 
    RuleNoInitiative = 121, RuleDrawRange = 122, RuleGainRange = 123, RuleLimitTargets = 124, 
    RulePassiveEffect = 125, RuleDurationEffect = 126, RuleStartOfPlayerTurn = 127, 
    RuleEndOfPlayerTurnTrigger = 128, RuleStartOfPlayerNextTurn = 129, RuleEndOfTurnTrigger = 130, 
    RuleTurnTrigger = 131, RuleGameStartTrigger = 132, RuleEffectPostfix = 133, 
    RuleIfPlayerMakesChoice = 134, RuleIfPreviousActionInvalid = 135, RuleIfResolvedCard = 136, 
    RuleIfPlayedCard = 137, RuleIfUsedSecondWind = 138, RuleIfNear = 139, 
    RuleIfControlled = 140, RuleIfTileHadTerrain = 141, RuleIfCardRevealed = 142, 
    RuleIfPlayerHasMitigate = 143, RuleIfPlayerDidntLeaveTile = 144, RuleIfCardCostReduced = 145, 
    RuleIfPlayerHasMoreHP = 146, RuleIfPlayerHasNoActions = 147, RuleIfInTerrain = 148, 
    RuleCounterCardCondition = 149, RuleStunPlayerCondition = 150, RuleRevealCardsCondition = 151, 
    RulePlayerControlledCondition = 152, RulePlayerUncontrolledCondition = 153, 
    RulePlayerHasCardsInDiscardCondition = 154, RulePlayerHasTakenDamageCondition = 155, 
    RuleCardResolvedCondition = 156, RulePlayerDrewCardCondition = 157, 
    RulePlayerMadeTerrainCondition = 158, RulePlayerEntersSpaceCondition = 159, 
    RulePlayerAttachesCardCondition = 160, RuleCardIsRevealedCondition = 161, 
    RulePlayerStunsPlayerCondition = 162, RuleCardSentToDiscardCondition = 163, 
    RuleCardFailsToResolveCondition = 164, RulePlayerSlowsPlayerCondition = 165, 
    RulePlayerRecivesControlCondition = 166, RuleCondition = 167, RuleTriggerEffect = 168, 
    RuleIfWouldRecieveControl = 169, RuleIfWouldTakeDamage = 170, RuleIfWouldHeal = 171, 
    RuleReplacementTriggerEffect = 172, RuleCardCantBeTargeted = 173, RuleWhileEffect = 174, 
    RulePrimaryCostReduction = 175, RuleOnlyPlayIf = 176, RuleOncePerGameLimit = 177, 
    RuleTriggerLimit = 178, RuleTriggerTurnLimit = 179, RuleOmniPresentEffect = 180, 
    RuleOne = 181, RuleTwo = 182, RuleThree = 183, RuleNumber = 184, RulePlayerPowerValue = 185, 
    RulePlayerControlAmountValue = 186, RulePlayerHandSize = 187, RulePlayerMitigate = 188, 
    RulePlayerCardsInHand = 189, RuleLiteralValue = 190, RuleGameStateValue = 191, 
    RuleValue = 192, RuleChooseSameMultipleTimes = 193, RuleEffectList = 194, 
    RuleChooseEffect = 195, RuleSingleEffect = 196, RuleRepeatedEffect = 197, 
    RuleConditionalEffect = 198, RuleAlternativeEffect = 199, RuleEffect = 200, 
    RuleEffectEnd = 201, RuleAnyEffect = 202, RuleBreachEffect = 203, RuleAdvantageEffect = 204, 
    RuleFrenzyEffect = 205, RuleLine = 206, RuleText = 207
  };

  IvionParser(antlr4::TokenStream *input);
  ~IvionParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class GeneralPostInTerrainFilterContext;
  class GeneralPostNearTerrainFilterContext;
  class GeneralPostNearPlayerFilterContext;
  class GeneralPostNearTileFilterContext;
  class GeneralPostInTileFilterContext;
  class GeneralPostNearCardFilterContext;
  class GeneralPostInCardFilterContext;
  class GeneralPostPlayerChoiceFilterContext;
  class GeneralPostAtLeastAwayFilterContext;
  class GeneralPostAtLeastAwayFromPlayerFilterContext;
  class PlayerTypeContext;
  class PlayerPreFixContext;
  class PlayerPostFixContext;
  class PlayerFilterContext;
  class CurrentPlayerContext;
  class PreviousPlayerContext;
  class PreviousCardsOwnerContext;
  class PreviousCardsControllerContext;
  class PlayerRefContext;
  class TargetPlayerContext;
  class SinglePlayerContext;
  class MultiPlayerContext;
  class AllOtherPlayersContext;
  class AllPlayersContext;
  class PlayerContext;
  class HypotheticalPlayerContext;
  class CardPreEnemyFilterContext;
  class CardPreAttachedFilterContext;
  class CardPreAbilityFilterContext;
  class CardPreAttackFilterContext;
  class CardPreRevealedFilterContext;
  class CardPreAnotherFilterContext;
  class CardPreInstanceFilterContext;
  class CardPrefixContext;
  class CardPostTargettingFilterContext;
  class CardPostCostFilterContext;
  class CardPostAttachedToPlayerFilterContext;
  class CardPostAttachedToTileFilterContext;
  class CardPostControlledByPlayerFilterContext;
  class CardPostHardcastFilterContext;
  class CardPostFrenzyFilterContext;
  class CardPostInDiscardFilterContext;
  class CardPostTurnRefFilterContext;
  class CardPostfixContext;
  class CardFilterContext;
  class CardNameContext;
  class BottomCardContext;
  class PreviousCardContext;
  class TargetCardContext;
  class SelectCardContext;
  class SingleCardContext;
  class AllCardsContext;
  class MultiCardContext;
  class CardContext;
  class HypotheticalCardContext;
  class TilePreEmptyFilterContext;
  class TilePreFixContext;
  class TilePostFixContext;
  class TileFilterContext;
  class TargetTileContext;
  class PreviousTileContext;
  class TheNearestTileContext;
  class PlayersTileContext;
  class CardsTileContext;
  class SingleTileContext;
  class MultiTileContext;
  class AllTilesContext;
  class TileContext;
  class HypotheticalTileContext;
  class EntityContext;
  class HypotheticalEntityContext;
  class DisarmPlayerContext;
  class SilencePlayerContext;
  class SlowPlayerContext;
  class ControlPlayerContext;
  class AwayFlagContext;
  class UpToFlagContext;
  class TravelDistanceContext;
  class TravelPlayerContext;
  class DestroyCardContext;
  class DealDamageContext;
  class CounterCardContext;
  class AttachCardContext;
  class GainPowerContext;
  class GainActionContext;
  class GainInitiativeContext;
  class GainMitigateContext;
  class LoseMitigateContext;
  class UseSecondWindContext;
  class ReturnCardContext;
  class PutBottomCardOfDeckIntoHandContext;
  class TriggerDurationEffectsContext;
  class ForLessResourcesContext;
  class FreeFlagContext;
  class PlayCardContext;
  class PlayUltimateContext;
  class DiscardCardsContext;
  class GainsHeroicContext;
  class HealPlayerContext;
  class StunPlayerContext;
  class RevealCardsContext;
  class DrawCardsContext;
  class RemoveControlContext;
  class HardcastEffectContext;
  class SeekEffectContext;
  class MakeTerrainContext;
  class RemoveTerrainContext;
  class SpendResourcesContext;
  class ScryEffectContext;
  class OverrideFrenzyContext;
  class IncreaseCardDurationContext;
  class ResetUseOfCardContext;
  class HeroicContext;
  class OnlyPlayCertainCardsContext;
  class CostReductionContext;
  class RangeSetContext;
  class CantPlayCardsContext;
  class PlayerCantBeTargetedContext;
  class IncreasedHandSizeContext;
  class IncreasedMaxHPContext;
  class ReplacesSecondWindContext;
  class NoInitiativeContext;
  class DrawRangeContext;
  class GainRangeContext;
  class LimitTargetsContext;
  class PassiveEffectContext;
  class DurationEffectContext;
  class StartOfPlayerTurnContext;
  class EndOfPlayerTurnTriggerContext;
  class StartOfPlayerNextTurnContext;
  class EndOfTurnTriggerContext;
  class TurnTriggerContext;
  class GameStartTriggerContext;
  class EffectPostfixContext;
  class IfPlayerMakesChoiceContext;
  class IfPreviousActionInvalidContext;
  class IfResolvedCardContext;
  class IfPlayedCardContext;
  class IfUsedSecondWindContext;
  class IfNearContext;
  class IfControlledContext;
  class IfTileHadTerrainContext;
  class IfCardRevealedContext;
  class IfPlayerHasMitigateContext;
  class IfPlayerDidntLeaveTileContext;
  class IfCardCostReducedContext;
  class IfPlayerHasMoreHPContext;
  class IfPlayerHasNoActionsContext;
  class IfInTerrainContext;
  class CounterCardConditionContext;
  class StunPlayerConditionContext;
  class RevealCardsConditionContext;
  class PlayerControlledConditionContext;
  class PlayerUncontrolledConditionContext;
  class PlayerHasCardsInDiscardConditionContext;
  class PlayerHasTakenDamageConditionContext;
  class CardResolvedConditionContext;
  class PlayerDrewCardConditionContext;
  class PlayerMadeTerrainConditionContext;
  class PlayerEntersSpaceConditionContext;
  class PlayerAttachesCardConditionContext;
  class CardIsRevealedConditionContext;
  class PlayerStunsPlayerConditionContext;
  class CardSentToDiscardConditionContext;
  class CardFailsToResolveConditionContext;
  class PlayerSlowsPlayerConditionContext;
  class PlayerRecivesControlConditionContext;
  class ConditionContext;
  class TriggerEffectContext;
  class IfWouldRecieveControlContext;
  class IfWouldTakeDamageContext;
  class IfWouldHealContext;
  class ReplacementTriggerEffectContext;
  class CardCantBeTargetedContext;
  class WhileEffectContext;
  class PrimaryCostReductionContext;
  class OnlyPlayIfContext;
  class OncePerGameLimitContext;
  class TriggerLimitContext;
  class TriggerTurnLimitContext;
  class OmniPresentEffectContext;
  class OneContext;
  class TwoContext;
  class ThreeContext;
  class NumberContext;
  class PlayerPowerValueContext;
  class PlayerControlAmountValueContext;
  class PlayerHandSizeContext;
  class PlayerMitigateContext;
  class PlayerCardsInHandContext;
  class LiteralValueContext;
  class GameStateValueContext;
  class ValueContext;
  class ChooseSameMultipleTimesContext;
  class EffectListContext;
  class ChooseEffectContext;
  class SingleEffectContext;
  class RepeatedEffectContext;
  class ConditionalEffectContext;
  class AlternativeEffectContext;
  class EffectContext;
  class EffectEndContext;
  class AnyEffectContext;
  class BreachEffectContext;
  class AdvantageEffectContext;
  class FrenzyEffectContext;
  class LineContext;
  class TextContext; 

  class  GeneralPostInTerrainFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostInTerrainFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Had();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostInTerrainFilterContext* generalPostInTerrainFilter();

  class  GeneralPostNearTerrainFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostNearTerrainFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *Terrain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostNearTerrainFilterContext* generalPostNearTerrainFilter();

  class  GeneralPostNearPlayerFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostNearPlayerFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Near();
    HypotheticalPlayerContext *hypotheticalPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostNearPlayerFilterContext* generalPostNearPlayerFilter();

  class  GeneralPostNearTileFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostNearTileFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Near();
    HypotheticalTileContext *hypotheticalTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostNearTileFilterContext* generalPostNearTileFilter();

  class  GeneralPostInTileFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostInTileFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *In();
    HypotheticalTileContext *hypotheticalTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostInTileFilterContext* generalPostInTileFilter();

  class  GeneralPostNearCardFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostNearCardFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Near();
    HypotheticalCardContext *hypotheticalCard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostNearCardFilterContext* generalPostNearCardFilter();

  class  GeneralPostInCardFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostInCardFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Near();
    HypotheticalCardContext *hypotheticalCard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostInCardFilterContext* generalPostInCardFilter();

  class  GeneralPostPlayerChoiceFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostPlayerChoiceFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Of();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Choice();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostPlayerChoiceFilterContext* generalPostPlayerChoiceFilter();

  class  GeneralPostAtLeastAwayFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostAtLeastAwayFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Away();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostAtLeastAwayFilterContext* generalPostAtLeastAwayFilter();

  class  GeneralPostAtLeastAwayFromPlayerFilterContext : public antlr4::ParserRuleContext {
  public:
    GeneralPostAtLeastAwayFromPlayerFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Away();
    antlr4::tree::TerminalNode *From();
    HypotheticalPlayerContext *hypotheticalPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GeneralPostAtLeastAwayFromPlayerFilterContext* generalPostAtLeastAwayFromPlayerFilter();

  class  PlayerTypeContext : public antlr4::ParserRuleContext {
  public:
    PlayerTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Ally();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerTypeContext* playerType();

  class  PlayerPreFixContext : public antlr4::ParserRuleContext {
  public:
    PlayerPreFixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerTypeContext *playerType();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *Controlled();
    antlr4::tree::TerminalNode *Uncontrolled();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerPreFixContext* playerPreFix();

  class  PlayerPostFixContext : public antlr4::ParserRuleContext {
  public:
    PlayerPostFixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerPreFixContext *playerPreFix();
    PlayerPostFixContext *playerPostFix();
    GeneralPostInTerrainFilterContext *generalPostInTerrainFilter();
    GeneralPostNearTerrainFilterContext *generalPostNearTerrainFilter();
    GeneralPostNearPlayerFilterContext *generalPostNearPlayerFilter();
    GeneralPostNearTileFilterContext *generalPostNearTileFilter();
    GeneralPostInTileFilterContext *generalPostInTileFilter();
    GeneralPostNearCardFilterContext *generalPostNearCardFilter();
    GeneralPostInCardFilterContext *generalPostInCardFilter();
    GeneralPostPlayerChoiceFilterContext *generalPostPlayerChoiceFilter();
    GeneralPostAtLeastAwayFilterContext *generalPostAtLeastAwayFilter();
    GeneralPostAtLeastAwayFromPlayerFilterContext *generalPostAtLeastAwayFromPlayerFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerPostFixContext* playerPostFix();
  PlayerPostFixContext* playerPostFix(int precedence);
  class  PlayerFilterContext : public antlr4::ParserRuleContext {
  public:
    PlayerFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerPostFixContext *playerPostFix();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerFilterContext* playerFilter();

  class  CurrentPlayerContext : public antlr4::ParserRuleContext {
  public:
    CurrentPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Yourself();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Your();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CurrentPlayerContext* currentPlayer();

  class  PreviousPlayerContext : public antlr4::ParserRuleContext {
  public:
    PreviousPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *That();
    PlayerTypeContext *playerType();
    antlr4::tree::TerminalNode *Their();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreviousPlayerContext* previousPlayer();

  class  PreviousCardsOwnerContext : public antlr4::ParserRuleContext {
  public:
    PreviousCardsOwnerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Its();
    antlr4::tree::TerminalNode *Owner();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreviousCardsOwnerContext* previousCardsOwner();

  class  PreviousCardsControllerContext : public antlr4::ParserRuleContext {
  public:
    PreviousCardsControllerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreviousCardContext *previousCard();
    antlr4::tree::TerminalNode *Controller();
    antlr4::tree::TerminalNode *Its();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreviousCardsControllerContext* previousCardsController();

  class  PlayerRefContext : public antlr4::ParserRuleContext {
  public:
    PlayerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreviousPlayerContext *previousPlayer();
    CurrentPlayerContext *currentPlayer();
    PreviousCardsOwnerContext *previousCardsOwner();
    PreviousCardsControllerContext *previousCardsController();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerRefContext* playerRef();

  class  TargetPlayerContext : public antlr4::ParserRuleContext {
  public:
    TargetPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    PlayerFilterContext *playerFilter();
    antlr4::tree::TerminalNode *Another();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetPlayerContext* targetPlayer();

  class  SinglePlayerContext : public antlr4::ParserRuleContext {
  public:
    SinglePlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetPlayerContext *targetPlayer();
    PlayerRefContext *playerRef();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SinglePlayerContext* singlePlayer();

  class  MultiPlayerContext : public antlr4::ParserRuleContext {
  public:
    IvionParser::UpToFlagContext *UpToFlag = nullptr;;
    MultiPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralValueContext *literalValue();
    TargetPlayerContext *targetPlayer();
    UpToFlagContext *upToFlag();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiPlayerContext* multiPlayer();

  class  AllOtherPlayersContext : public antlr4::ParserRuleContext {
  public:
    AllOtherPlayersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Other();
    PlayerFilterContext *playerFilter();
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Each();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllOtherPlayersContext* allOtherPlayers();

  class  AllPlayersContext : public antlr4::ParserRuleContext {
  public:
    AllPlayersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerFilterContext *playerFilter();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Any();
    antlr4::tree::TerminalNode *Yourself();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *Player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllPlayersContext* allPlayers();

  class  PlayerContext : public antlr4::ParserRuleContext {
  public:
    PlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SinglePlayerContext *singlePlayer();
    MultiPlayerContext *multiPlayer();
    AllPlayersContext *allPlayers();
    AllOtherPlayersContext *allOtherPlayers();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerContext* player();

  class  HypotheticalPlayerContext : public antlr4::ParserRuleContext {
  public:
    HypotheticalPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerFilterContext *playerFilter();
    antlr4::tree::TerminalNode *A();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HypotheticalPlayerContext* hypotheticalPlayer();

  class  CardPreEnemyFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPreEnemyFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enemy();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPreEnemyFilterContext* cardPreEnemyFilter();

  class  CardPreAttachedFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPreAttachedFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Attached();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPreAttachedFilterContext* cardPreAttachedFilter();

  class  CardPreAbilityFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPreAbilityFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *Non();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPreAbilityFilterContext* cardPreAbilityFilter();

  class  CardPreAttackFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPreAttackFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Non();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPreAttackFilterContext* cardPreAttackFilter();

  class  CardPreRevealedFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPreRevealedFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Reveal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPreRevealedFilterContext* cardPreRevealedFilter();

  class  CardPreAnotherFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPreAnotherFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Another();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPreAnotherFilterContext* cardPreAnotherFilter();

  class  CardPreInstanceFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPreInstanceFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *First();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Third();
    antlr4::tree::TerminalNode *The();
    PlayerRefContext *playerRef();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPreInstanceFilterContext* cardPreInstanceFilter();

  class  CardPrefixContext : public antlr4::ParserRuleContext {
  public:
    CardPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardPreEnemyFilterContext *cardPreEnemyFilter();
    CardPreAttachedFilterContext *cardPreAttachedFilter();
    CardPreAbilityFilterContext *cardPreAbilityFilter();
    CardPreAttackFilterContext *cardPreAttackFilter();
    CardPreRevealedFilterContext *cardPreRevealedFilter();
    CardPreAnotherFilterContext *cardPreAnotherFilter();
    CardPreInstanceFilterContext *cardPreInstanceFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPrefixContext* cardPrefix();

  class  CardPostTargettingFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostTargettingFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Targeting();
    HypotheticalPlayerContext *hypotheticalPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostTargettingFilterContext* cardPostTargettingFilter();

  class  CardPostCostFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostCostFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Cost();
    antlr4::tree::TerminalNode *Of();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *More();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostCostFilterContext* cardPostCostFilter();

  class  CardPostAttachedToPlayerFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostAttachedToPlayerFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Attached();
    antlr4::tree::TerminalNode *To();
    HypotheticalPlayerContext *hypotheticalPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostAttachedToPlayerFilterContext* cardPostAttachedToPlayerFilter();

  class  CardPostAttachedToTileFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostAttachedToTileFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Attached();
    antlr4::tree::TerminalNode *To();
    HypotheticalTileContext *hypotheticalTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostAttachedToTileFilterContext* cardPostAttachedToTileFilter();

  class  CardPostControlledByPlayerFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostControlledByPlayerFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Controlled();
    antlr4::tree::TerminalNode *By();
    HypotheticalPlayerContext *hypotheticalPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostControlledByPlayerFilterContext* cardPostControlledByPlayerFilter();

  class  CardPostHardcastFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostHardcastFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Hardcast();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostHardcastFilterContext* cardPostHardcastFilter();

  class  CardPostFrenzyFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostFrenzyFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Frenzy();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostFrenzyFilterContext* cardPostFrenzyFilter();

  class  CardPostInDiscardFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostInDiscardFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Discard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostInDiscardFilterContext* cardPostInDiscardFilter();

  class  CardPostTurnRefFilterContext : public antlr4::ParserRuleContext {
  public:
    CardPostTurnRefFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *During();
    PlayerRefContext *playerRef();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostTurnRefFilterContext* cardPostTurnRefFilter();

  class  CardPostfixContext : public antlr4::ParserRuleContext {
  public:
    CardPostfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardPostTargettingFilterContext *cardPostTargettingFilter();
    CardPostCostFilterContext *cardPostCostFilter();
    CardPostAttachedToPlayerFilterContext *cardPostAttachedToPlayerFilter();
    CardPostAttachedToTileFilterContext *cardPostAttachedToTileFilter();
    CardPostControlledByPlayerFilterContext *cardPostControlledByPlayerFilter();
    CardPostHardcastFilterContext *cardPostHardcastFilter();
    CardPostFrenzyFilterContext *cardPostFrenzyFilter();
    CardPostInDiscardFilterContext *cardPostInDiscardFilter();
    CardPostTurnRefFilterContext *cardPostTurnRefFilter();
    GeneralPostInTerrainFilterContext *generalPostInTerrainFilter();
    GeneralPostNearTerrainFilterContext *generalPostNearTerrainFilter();
    GeneralPostNearPlayerFilterContext *generalPostNearPlayerFilter();
    GeneralPostNearTileFilterContext *generalPostNearTileFilter();
    GeneralPostInTileFilterContext *generalPostInTileFilter();
    GeneralPostNearCardFilterContext *generalPostNearCardFilter();
    GeneralPostInCardFilterContext *generalPostInCardFilter();
    GeneralPostPlayerChoiceFilterContext *generalPostPlayerChoiceFilter();
    GeneralPostAtLeastAwayFilterContext *generalPostAtLeastAwayFilter();
    GeneralPostAtLeastAwayFromPlayerFilterContext *generalPostAtLeastAwayFromPlayerFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPostfixContext* cardPostfix();

  class  CardFilterContext : public antlr4::ParserRuleContext {
  public:
    CardFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Card();
    std::vector<CardPrefixContext *> cardPrefix();
    CardPrefixContext* cardPrefix(size_t i);
    std::vector<CardPostfixContext *> cardPostfix();
    CardPostfixContext* cardPostfix(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardFilterContext* cardFilter();

  class  CardNameContext : public antlr4::ParserRuleContext {
  public:
    CardNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARD_NAME();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardNameContext* cardName();

  class  BottomCardContext : public antlr4::ParserRuleContext {
  public:
    BottomCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Bottom();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Of();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Deck();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BottomCardContext* bottomCard();

  class  PreviousCardContext : public antlr4::ParserRuleContext {
  public:
    PreviousCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Its();
    antlr4::tree::TerminalNode *It();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Discard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreviousCardContext* previousCard();

  class  TargetCardContext : public antlr4::ParserRuleContext {
  public:
    TargetCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    CardFilterContext *cardFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetCardContext* targetCard();

  class  SelectCardContext : public antlr4::ParserRuleContext {
  public:
    SelectCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    CardFilterContext *cardFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectCardContext* selectCard();

  class  SingleCardContext : public antlr4::ParserRuleContext {
  public:
    SingleCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardNameContext *cardName();
    TargetCardContext *targetCard();
    BottomCardContext *bottomCard();
    PreviousCardContext *previousCard();
    SelectCardContext *selectCard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleCardContext* singleCard();

  class  AllCardsContext : public antlr4::ParserRuleContext {
  public:
    AllCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *All();
    CardFilterContext *cardFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllCardsContext* allCards();

  class  MultiCardContext : public antlr4::ParserRuleContext {
  public:
    IvionParser::UpToFlagContext *UpToFlag = nullptr;;
    MultiCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralValueContext *literalValue();
    TargetCardContext *targetCard();
    UpToFlagContext *upToFlag();
    CardFilterContext *cardFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiCardContext* multiCard();

  class  CardContext : public antlr4::ParserRuleContext {
  public:
    CardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleCardContext *singleCard();
    AllCardsContext *allCards();
    MultiCardContext *multiCard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardContext* card();

  class  HypotheticalCardContext : public antlr4::ParserRuleContext {
  public:
    HypotheticalCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardFilterContext *cardFilter();
    antlr4::tree::TerminalNode *A();
    CardContext *card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HypotheticalCardContext* hypotheticalCard();

  class  TilePreEmptyFilterContext : public antlr4::ParserRuleContext {
  public:
    TilePreEmptyFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Empty();
    antlr4::tree::TerminalNode *Non();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TilePreEmptyFilterContext* tilePreEmptyFilter();

  class  TilePreFixContext : public antlr4::ParserRuleContext {
  public:
    TilePreFixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TilePreEmptyFilterContext *tilePreEmptyFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TilePreFixContext* tilePreFix();

  class  TilePostFixContext : public antlr4::ParserRuleContext {
  public:
    TilePostFixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GeneralPostInTerrainFilterContext *generalPostInTerrainFilter();
    GeneralPostNearTerrainFilterContext *generalPostNearTerrainFilter();
    GeneralPostNearPlayerFilterContext *generalPostNearPlayerFilter();
    GeneralPostNearTileFilterContext *generalPostNearTileFilter();
    GeneralPostInTileFilterContext *generalPostInTileFilter();
    GeneralPostNearCardFilterContext *generalPostNearCardFilter();
    GeneralPostInCardFilterContext *generalPostInCardFilter();
    GeneralPostPlayerChoiceFilterContext *generalPostPlayerChoiceFilter();
    GeneralPostAtLeastAwayFilterContext *generalPostAtLeastAwayFilter();
    GeneralPostAtLeastAwayFromPlayerFilterContext *generalPostAtLeastAwayFromPlayerFilter();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TilePostFixContext* tilePostFix();

  class  TileFilterContext : public antlr4::ParserRuleContext {
  public:
    TileFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Tile();
    std::vector<TilePreFixContext *> tilePreFix();
    TilePreFixContext* tilePreFix(size_t i);
    std::vector<TilePostFixContext *> tilePostFix();
    TilePostFixContext* tilePostFix(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TileFilterContext* tileFilter();

  class  TargetTileContext : public antlr4::ParserRuleContext {
  public:
    TargetTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    TileFilterContext *tileFilter();
    antlr4::tree::TerminalNode *Another();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetTileContext* targetTile();

  class  PreviousTileContext : public antlr4::ParserRuleContext {
  public:
    PreviousTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *The();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreviousTileContext* previousTile();

  class  TheNearestTileContext : public antlr4::ParserRuleContext {
  public:
    TheNearestTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Nearest();
    TileFilterContext *tileFilter();
    antlr4::tree::TerminalNode *Next();
    antlr4::tree::TerminalNode *To();
    HypotheticalPlayerContext *hypotheticalPlayer();
    HypotheticalCardContext *hypotheticalCard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheNearestTileContext* theNearestTile();

  class  PlayersTileContext : public antlr4::ParserRuleContext {
  public:
    PlayersTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Tile();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *In();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayersTileContext* playersTile();

  class  CardsTileContext : public antlr4::ParserRuleContext {
  public:
    CardsTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Tile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardsTileContext* cardsTile();

  class  SingleTileContext : public antlr4::ParserRuleContext {
  public:
    SingleTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetTileContext *targetTile();
    PreviousTileContext *previousTile();
    TheNearestTileContext *theNearestTile();
    PlayersTileContext *playersTile();
    CardsTileContext *cardsTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTileContext* singleTile();

  class  MultiTileContext : public antlr4::ParserRuleContext {
  public:
    IvionParser::UpToFlagContext *UpToFlag = nullptr;;
    MultiTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralValueContext *literalValue();
    TargetTileContext *targetTile();
    UpToFlagContext *upToFlag();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiTileContext* multiTile();

  class  AllTilesContext : public antlr4::ParserRuleContext {
  public:
    AllTilesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TileFilterContext *tileFilter();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *All();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AllTilesContext* allTiles();

  class  TileContext : public antlr4::ParserRuleContext {
  public:
    TileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleTileContext *singleTile();
    AllTilesContext *allTiles();
    MultiTileContext *multiTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TileContext* tile();

  class  HypotheticalTileContext : public antlr4::ParserRuleContext {
  public:
    HypotheticalTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TileFilterContext *tileFilter();
    antlr4::tree::TerminalNode *A();
    TileContext *tile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HypotheticalTileContext* hypotheticalTile();

  class  EntityContext : public antlr4::ParserRuleContext {
  public:
    EntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardContext *card();
    PlayerContext *player();
    TileContext *tile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EntityContext* entity();

  class  HypotheticalEntityContext : public antlr4::ParserRuleContext {
  public:
    HypotheticalEntityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    HypotheticalPlayerContext *hypotheticalPlayer();
    HypotheticalTileContext *hypotheticalTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HypotheticalEntityContext* hypotheticalEntity();

  class  DisarmPlayerContext : public antlr4::ParserRuleContext {
  public:
    DisarmPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Disarm();
    LiteralValueContext *literalValue();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DisarmPlayerContext* disarmPlayer();

  class  SilencePlayerContext : public antlr4::ParserRuleContext {
  public:
    SilencePlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Silence();
    LiteralValueContext *literalValue();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SilencePlayerContext* silencePlayer();

  class  SlowPlayerContext : public antlr4::ParserRuleContext {
  public:
    SlowPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Slow();
    LiteralValueContext *literalValue();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SlowPlayerContext* slowPlayer();

  class  ControlPlayerContext : public antlr4::ParserRuleContext {
  public:
    ControlPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Apply();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Instances();
    std::vector<antlr4::tree::TerminalNode *> Of();
    antlr4::tree::TerminalNode* Of(size_t i);
    std::vector<antlr4::tree::TerminalNode *> A();
    antlr4::tree::TerminalNode* A(size_t i);
    antlr4::tree::TerminalNode *Control();
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Choice();
    antlr4::tree::TerminalNode *To();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Instance();
    antlr4::tree::TerminalNode *Increase();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Value();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Affecting();
    antlr4::tree::TerminalNode *By();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlPlayerContext* controlPlayer();

  class  AwayFlagContext : public antlr4::ParserRuleContext {
  public:
    AwayFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Away();
    antlr4::tree::TerminalNode *From();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AwayFlagContext* awayFlag();

  class  UpToFlagContext : public antlr4::ParserRuleContext {
  public:
    UpToFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Up();
    antlr4::tree::TerminalNode *To();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UpToFlagContext* upToFlag();

  class  TravelDistanceContext : public antlr4::ParserRuleContext {
  public:
    IvionParser::PlayerContext *TargetPlayer = nullptr;;
    IvionParser::UpToFlagContext *UpToFlag = nullptr;;
    IvionParser::AwayFlagContext *Awayflag = nullptr;;
    TravelDistanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Travel();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Another();
    PlayerContext *player();
    UpToFlagContext *upToFlag();
    AwayFlagContext *awayFlag();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TravelDistanceContext* travelDistance();

  class  TravelPlayerContext : public antlr4::ParserRuleContext {
  public:
    IvionParser::PlayerContext *TargetPlayer = nullptr;;
    IvionParser::TileContext *TargetTile = nullptr;;
    IvionParser::CardContext *TargetCard = nullptr;;
    TravelPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Travel();
    antlr4::tree::TerminalNode *To();
    TileContext *tile();
    CardContext *card();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TravelPlayerContext* travelPlayer();

  class  DestroyCardContext : public antlr4::ParserRuleContext {
  public:
    DestroyCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Destroy();
    CardContext *card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DestroyCardContext* destroyCard();

  class  DealDamageContext : public antlr4::ParserRuleContext {
  public:
    DealDamageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Deal();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Damage();
    antlr4::tree::TerminalNode* Damage(size_t i);
    std::vector<antlr4::tree::TerminalNode *> To();
    antlr4::tree::TerminalNode* To(size_t i);
    PlayerContext *player();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *More();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DealDamageContext* dealDamage();

  class  CounterCardContext : public antlr4::ParserRuleContext {
  public:
    CounterCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Counter();
    CardContext *card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CounterCardContext* counterCard();

  class  AttachCardContext : public antlr4::ParserRuleContext {
  public:
    AttachCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Attach();
    antlr4::tree::TerminalNode *To();
    EntityContext *entity();
    antlr4::tree::TerminalNode *Until();
    TurnTriggerContext *turnTrigger();
    antlr4::tree::TerminalNode *CARD_NAME();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttachCardContext* attachCard();

  class  GainPowerContext : public antlr4::ParserRuleContext {
  public:
    GainPowerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Gain();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Additional();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainPowerContext* gainPower();

  class  GainActionContext : public antlr4::ParserRuleContext {
  public:
    GainActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Gain();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Additional();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainActionContext* gainAction();

  class  GainInitiativeContext : public antlr4::ParserRuleContext {
  public:
    GainInitiativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Gain();
    std::vector<antlr4::tree::TerminalNode *> INITIATIVE();
    antlr4::tree::TerminalNode* INITIATIVE(size_t i);
    PlayerContext *player();
    antlr4::tree::TerminalNode *Another();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainInitiativeContext* gainInitiative();

  class  GainMitigateContext : public antlr4::ParserRuleContext {
  public:
    GainMitigateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerContext *player();
    antlr4::tree::TerminalNode *Gains();
    antlr4::tree::TerminalNode *Mitigate();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Gain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainMitigateContext* gainMitigate();

  class  LoseMitigateContext : public antlr4::ParserRuleContext {
  public:
    LoseMitigateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Lose();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Mitigate();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LoseMitigateContext* loseMitigate();

  class  UseSecondWindContext : public antlr4::ParserRuleContext {
  public:
    UseSecondWindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Use();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Wind();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseSecondWindContext* useSecondWind();

  class  ReturnCardContext : public antlr4::ParserRuleContext {
  public:
    ReturnCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Return();
    CardContext *card();
    antlr4::tree::TerminalNode *To();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnCardContext* returnCard();

  class  PutBottomCardOfDeckIntoHandContext : public antlr4::ParserRuleContext {
  public:
    PutBottomCardOfDeckIntoHandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Put();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Into();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PutBottomCardOfDeckIntoHandContext* putBottomCardOfDeckIntoHand();

  class  TriggerDurationEffectsContext : public antlr4::ParserRuleContext {
  public:
    TriggerDurationEffectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Trigger();
    std::vector<antlr4::tree::TerminalNode *> Your();
    antlr4::tree::TerminalNode* Your(size_t i);
    antlr4::tree::TerminalNode *Duration();
    antlr4::tree::TerminalNode *Effects();
    antlr4::tree::TerminalNode *As();
    antlr4::tree::TerminalNode *Though();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Had();
    antlr4::tree::TerminalNode *Just();
    antlr4::tree::TerminalNode *Ended();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerDurationEffectsContext* triggerDurationEffects();

  class  ForLessResourcesContext : public antlr4::ParserRuleContext {
  public:
    ForLessResourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Resource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForLessResourcesContext* forLessResources();

  class  FreeFlagContext : public antlr4::ParserRuleContext {
  public:
    FreeFlagContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Free();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FreeFlagContext* freeFlag();

  class  PlayCardContext : public antlr4::ParserRuleContext {
  public:
    PlayCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Play();
    CardContext *card();
    FreeFlagContext *freeFlag();
    ForLessResourcesContext *forLessResources();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayCardContext* playCard();

  class  PlayUltimateContext : public antlr4::ParserRuleContext {
  public:
    PlayUltimateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Play();
    std::vector<antlr4::tree::TerminalNode *> Ultimate();
    antlr4::tree::TerminalNode* Ultimate(size_t i);
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Doesnt();
    antlr4::tree::TerminalNode *Count();
    antlr4::tree::TerminalNode *Towards();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Limit();
    antlr4::tree::TerminalNode *Per();
    antlr4::tree::TerminalNode *Turn();
    std::vector<CardPostfixContext *> cardPostfix();
    CardPostfixContext* cardPostfix(size_t i);
    FreeFlagContext *freeFlag();
    ForLessResourcesContext *forLessResources();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayUltimateContext* playUltimate();

  class  DiscardCardsContext : public antlr4::ParserRuleContext {
  public:
    DiscardCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Discard();
    LiteralValueContext *literalValue();
    CardContext *card();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DiscardCardsContext* discardCards();

  class  GainsHeroicContext : public antlr4::ParserRuleContext {
  public:
    GainsHeroicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Gains();
    antlr4::tree::TerminalNode *Heroic();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainsHeroicContext* gainsHeroic();

  class  HealPlayerContext : public antlr4::ParserRuleContext {
  public:
    HealPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Heal();
    PlayerContext *player();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *HP();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *To();
    ValueContext *value();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HealPlayerContext* healPlayer();

  class  StunPlayerContext : public antlr4::ParserRuleContext {
  public:
    StunPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Stun();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StunPlayerContext* stunPlayer();

  class  RevealCardsContext : public antlr4::ParserRuleContext {
  public:
    RevealCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerContext *player();
    antlr4::tree::TerminalNode *Reveal();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Their();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Your();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevealCardsContext* revealCards();

  class  DrawCardsContext : public antlr4::ParserRuleContext {
  public:
    DrawCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Draw();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Card();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Additional();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DrawCardsContext* drawCards();

  class  RemoveControlContext : public antlr4::ParserRuleContext {
  public:
    RemoveControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Remove();
    antlr4::tree::TerminalNode *Up();
    antlr4::tree::TerminalNode *To();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Instances();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Control();
    antlr4::tree::TerminalNode *From();
    PlayerContext *player();
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Affecting();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Instance();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RemoveControlContext* removeControl();

  class  HardcastEffectContext : public antlr4::ParserRuleContext {
  public:
    HardcastEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Hardcast();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HardcastEffectContext* hardcastEffect();

  class  SeekEffectContext : public antlr4::ParserRuleContext {
  public:
    SeekEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Seek();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SeekEffectContext* seekEffect();

  class  MakeTerrainContext : public antlr4::ParserRuleContext {
  public:
    MakeTerrainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Make();
    TileContext *tile();
    antlr4::tree::TerminalNode *Difficult();
    antlr4::tree::TerminalNode *Terrain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MakeTerrainContext* makeTerrain();

  class  RemoveTerrainContext : public antlr4::ParserRuleContext {
  public:
    RemoveTerrainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Remove();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *Token();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RemoveTerrainContext* removeTerrain();

  class  SpendResourcesContext : public antlr4::ParserRuleContext {
  public:
    SpendResourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Spend();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Resource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpendResourcesContext* spendResources();

  class  ScryEffectContext : public antlr4::ParserRuleContext {
  public:
    ScryEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Look();
    antlr4::tree::TerminalNode *At();
    std::vector<antlr4::tree::TerminalNode *> The();
    antlr4::tree::TerminalNode* The(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Top();
    antlr4::tree::TerminalNode* Top(size_t i);
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Deck();
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *Put();
    std::vector<antlr4::tree::TerminalNode *> Any();
    antlr4::tree::TerminalNode* Any(size_t i);
    antlr4::tree::TerminalNode *Number();
    std::vector<antlr4::tree::TerminalNode *> On();
    antlr4::tree::TerminalNode* On(size_t i);
    antlr4::tree::TerminalNode *Bottom();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Rest();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Order();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ScryEffectContext* scryEffect();

  class  OverrideFrenzyContext : public antlr4::ParserRuleContext {
  public:
    OverrideFrenzyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Card();
    std::vector<antlr4::tree::TerminalNode *> Have();
    antlr4::tree::TerminalNode* Have(size_t i);
    antlr4::tree::TerminalNode *Frenzy();
    antlr4::tree::TerminalNode *Even();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *No();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *Used();
    antlr4::tree::TerminalNode *Their();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Wind();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OverrideFrenzyContext* overrideFrenzy();

  class  IncreaseCardDurationContext : public antlr4::ParserRuleContext {
  public:
    IncreaseCardDurationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Increase();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Duration();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Control();
    antlr4::tree::TerminalNode *By();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncreaseCardDurationContext* increaseCardDuration();

  class  ResetUseOfCardContext : public antlr4::ParserRuleContext {
  public:
    ResetUseOfCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Reset();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Use();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *CARD_NAME();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResetUseOfCardContext* resetUseOfCard();

  class  HeroicContext : public antlr4::ParserRuleContext {
  public:
    HeroicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Heroic();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeroicContext* heroic();

  class  OnlyPlayCertainCardsContext : public antlr4::ParserRuleContext {
  public:
    OnlyPlayCertainCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Only();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Named();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnlyPlayCertainCardsContext* onlyPlayCertainCards();

  class  CostReductionContext : public antlr4::ParserRuleContext {
  public:
    CostReductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Cost();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *During();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CostReductionContext* costReduction();

  class  RangeSetContext : public antlr4::ParserRuleContext {
  public:
    RangeSetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Range();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Is();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeSetContext* rangeSet();

  class  CantPlayCardsContext : public antlr4::ParserRuleContext {
  public:
    CantPlayCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Cant();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CantPlayCardsContext* cantPlayCards();

  class  PlayerCantBeTargetedContext : public antlr4::ParserRuleContext {
  public:
    PlayerCantBeTargetedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Cant();
    antlr4::tree::TerminalNode *Be();
    antlr4::tree::TerminalNode *Targeted();
    antlr4::tree::TerminalNode *By();
    antlr4::tree::TerminalNode *Enemies();
    antlr4::tree::TerminalNode *Card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerCantBeTargetedContext* playerCantBeTargeted();

  class  IncreasedHandSizeContext : public antlr4::ParserRuleContext {
  public:
    IncreasedHandSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Maximum();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *Size();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Increased();
    antlr4::tree::TerminalNode *By();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncreasedHandSizeContext* increasedHandSize();

  class  IncreasedMaxHPContext : public antlr4::ParserRuleContext {
  public:
    IncreasedMaxHPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Maximum();
    antlr4::tree::TerminalNode *HP();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Increased();
    antlr4::tree::TerminalNode *By();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IncreasedMaxHPContext* increasedMaxHP();

  class  ReplacesSecondWindContext : public antlr4::ParserRuleContext {
  public:
    ReplacesSecondWindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Replaces();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Wind();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplacesSecondWindContext* replacesSecondWind();

  class  NoInitiativeContext : public antlr4::ParserRuleContext {
  public:
    NoInitiativeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Dont();
    antlr4::tree::TerminalNode *Gain();
    antlr4::tree::TerminalNode *INITIATIVE();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Start();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NoInitiativeContext* noInitiative();

  class  DrawRangeContext : public antlr4::ParserRuleContext {
  public:
    DrawRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Of();
    HypotheticalPlayerContext *hypotheticalPlayer();
    std::vector<antlr4::tree::TerminalNode *> Card();
    antlr4::tree::TerminalNode* Card(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);
    antlr4::tree::TerminalNode *Except();
    antlr4::tree::TerminalNode *Travel();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Also();
    antlr4::tree::TerminalNode *Draw();
    antlr4::tree::TerminalNode *Range();
    antlr4::tree::TerminalNode *From();
    HypotheticalCardContext *hypotheticalCard();
    HypotheticalTileContext *hypotheticalTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DrawRangeContext* drawRange();

  class  GainRangeContext : public antlr4::ParserRuleContext {
  public:
    GainRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Of();
    HypotheticalPlayerContext *hypotheticalPlayer();
    std::vector<antlr4::tree::TerminalNode *> Card();
    antlr4::tree::TerminalNode* Card(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);
    antlr4::tree::TerminalNode *Except();
    antlr4::tree::TerminalNode *Travel();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Gain();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Range();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainRangeContext* gainRange();

  class  LimitTargetsContext : public antlr4::ParserRuleContext {
  public:
    LimitTargetsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Only();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Other();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitTargetsContext* limitTargets();

  class  PassiveEffectContext : public antlr4::ParserRuleContext {
  public:
    PassiveEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerCantBeTargetedContext *playerCantBeTargeted();
    CantPlayCardsContext *cantPlayCards();
    RangeSetContext *rangeSet();
    CostReductionContext *costReduction();
    OnlyPlayCertainCardsContext *onlyPlayCertainCards();
    IncreasedHandSizeContext *increasedHandSize();
    IncreasedMaxHPContext *increasedMaxHP();
    ReplacesSecondWindContext *replacesSecondWind();
    NoInitiativeContext *noInitiative();
    DrawRangeContext *drawRange();
    GainRangeContext *gainRange();
    LimitTargetsContext *limitTargets();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PassiveEffectContext* passiveEffect();

  class  DurationEffectContext : public antlr4::ParserRuleContext {
  public:
    DurationEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Duration();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DurationEffectContext* durationEffect();

  class  StartOfPlayerTurnContext : public antlr4::ParserRuleContext {
  public:
    StartOfPlayerTurnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Start();
    antlr4::tree::TerminalNode *Of();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartOfPlayerTurnContext* startOfPlayerTurn();

  class  EndOfPlayerTurnTriggerContext : public antlr4::ParserRuleContext {
  public:
    EndOfPlayerTurnTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *End();
    antlr4::tree::TerminalNode *Of();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndOfPlayerTurnTriggerContext* endOfPlayerTurnTrigger();

  class  StartOfPlayerNextTurnContext : public antlr4::ParserRuleContext {
  public:
    StartOfPlayerNextTurnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Start();
    antlr4::tree::TerminalNode *Of();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Next();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartOfPlayerNextTurnContext* startOfPlayerNextTurn();

  class  EndOfTurnTriggerContext : public antlr4::ParserRuleContext {
  public:
    EndOfTurnTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> The();
    antlr4::tree::TerminalNode* The(size_t i);
    antlr4::tree::TerminalNode *End();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndOfTurnTriggerContext* endOfTurnTrigger();

  class  TurnTriggerContext : public antlr4::ParserRuleContext {
  public:
    TurnTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartOfPlayerTurnContext *startOfPlayerTurn();
    EndOfPlayerTurnTriggerContext *endOfPlayerTurnTrigger();
    StartOfPlayerNextTurnContext *startOfPlayerNextTurn();
    EndOfTurnTriggerContext *endOfTurnTrigger();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnTriggerContext* turnTrigger();

  class  GameStartTriggerContext : public antlr4::ParserRuleContext {
  public:
    GameStartTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    std::vector<antlr4::tree::TerminalNode *> The();
    antlr4::tree::TerminalNode* The(size_t i);
    antlr4::tree::TerminalNode *Start();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Game();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GameStartTriggerContext* gameStartTrigger();

  class  EffectPostfixContext : public antlr4::ParserRuleContext {
  public:
    EffectPostfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *First();
    antlr4::tree::TerminalNode *Time();
    antlr4::tree::TerminalNode *During();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Each();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EffectPostfixContext* effectPostfix();

  class  IfPlayerMakesChoiceContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerMakesChoiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Do();
    antlr4::tree::TerminalNode *Dont();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerMakesChoiceContext* ifPlayerMakesChoice();

  class  IfPreviousActionInvalidContext : public antlr4::ParserRuleContext {
  public:
    IfPreviousActionInvalidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Cant();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPreviousActionInvalidContext* ifPreviousActionInvalid();

  class  IfResolvedCardContext : public antlr4::ParserRuleContext {
  public:
    IfResolvedCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Resolve();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Have();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfResolvedCardContext* ifResolvedCard();

  class  IfPlayedCardContext : public antlr4::ParserRuleContext {
  public:
    IfPlayedCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Play();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Have();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayedCardContext* ifPlayedCard();

  class  IfUsedSecondWindContext : public antlr4::ParserRuleContext {
  public:
    IfUsedSecondWindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Used();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Wind();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Already();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfUsedSecondWindContext* ifUsedSecondWind();

  class  IfNearContext : public antlr4::ParserRuleContext {
  public:
    IfNearContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalEntityContext *hypotheticalEntity();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *Terrain();
    HypotheticalTileContext *hypotheticalTile();
    HypotheticalCardContext *hypotheticalCard();
    HypotheticalPlayerContext *hypotheticalPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfNearContext* ifNear();

  class  IfControlledContext : public antlr4::ParserRuleContext {
  public:
    IfControlledContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Controlled();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfControlledContext* ifControlled();

  class  IfTileHadTerrainContext : public antlr4::ParserRuleContext {
  public:
    IfTileHadTerrainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreviousTileContext *previousTile();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Had();
    antlr4::tree::TerminalNode *Terrain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfTileHadTerrainContext* ifTileHadTerrain();

  class  IfCardRevealedContext : public antlr4::ParserRuleContext {
  public:
    IfCardRevealedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Reveal();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *In();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfCardRevealedContext* ifCardRevealed();

  class  IfPlayerHasMitigateContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerHasMitigateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Mitigate();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Gains();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasMitigateContext* ifPlayerHasMitigate();

  class  IfPlayerDidntLeaveTileContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerDidntLeaveTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Didnt();
    antlr4::tree::TerminalNode *Leave();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerDidntLeaveTileContext* ifPlayerDidntLeaveTile();

  class  IfCardCostReducedContext : public antlr4::ParserRuleContext {
  public:
    IfCardCostReducedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Cost();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Reduced();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfCardCostReducedContext* ifCardCostReduced();

  class  IfPlayerHasMoreHPContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerHasMoreHPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *HP();
    antlr4::tree::TerminalNode *Than();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasMoreHPContext* ifPlayerHasMoreHP();

  class  IfPlayerHasNoActionsContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerHasNoActionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *No();
    antlr4::tree::TerminalNode *Resource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasNoActionsContext* ifPlayerHasNoActions();

  class  IfInTerrainContext : public antlr4::ParserRuleContext {
  public:
    IfInTerrainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalEntityContext *hypotheticalEntity();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Terrain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfInTerrainContext* ifInTerrain();

  class  CounterCardConditionContext : public antlr4::ParserRuleContext {
  public:
    CounterCardConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Countered();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CounterCardConditionContext* counterCardCondition();

  class  StunPlayerConditionContext : public antlr4::ParserRuleContext {
  public:
    StunPlayerConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Removed();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Way();
    antlr4::tree::TerminalNode *In();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StunPlayerConditionContext* stunPlayerCondition();

  class  RevealCardsConditionContext : public antlr4::ParserRuleContext {
  public:
    RevealCardsConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Reveal();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Way();
    antlr4::tree::TerminalNode *In();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevealCardsConditionContext* revealCardsCondition();

  class  PlayerControlledConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerControlledConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Controlled();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerControlledConditionContext* playerControlledCondition();

  class  PlayerUncontrolledConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerUncontrolledConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Uncontrolled();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerUncontrolledConditionContext* playerUncontrolledCondition();

  class  PlayerHasCardsInDiscardConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerHasCardsInDiscardConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *In();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Discard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerHasCardsInDiscardConditionContext* playerHasCardsInDiscardCondition();

  class  PlayerHasTakenDamageConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerHasTakenDamageConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Taken();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Damage();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerHasTakenDamageConditionContext* playerHasTakenDamageCondition();

  class  CardResolvedConditionContext : public antlr4::ParserRuleContext {
  public:
    CardResolvedConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Resolve();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardResolvedConditionContext* cardResolvedCondition();

  class  PlayerDrewCardConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerDrewCardConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Draw();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerDrewCardConditionContext* playerDrewCardCondition();

  class  PlayerMadeTerrainConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerMadeTerrainConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Make();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *In();
    HypotheticalTileContext *hypotheticalTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerMadeTerrainConditionContext* playerMadeTerrainCondition();

  class  PlayerEntersSpaceConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerEntersSpaceConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *Enters();
    HypotheticalCardContext *hypotheticalCard();
    HypotheticalTileContext *hypotheticalTile();
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerEntersSpaceConditionContext* playerEntersSpaceCondition();

  class  PlayerAttachesCardConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerAttachesCardConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *Attach();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *To();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerAttachesCardConditionContext* playerAttachesCardCondition();

  class  CardIsRevealedConditionContext : public antlr4::ParserRuleContext {
  public:
    CardIsRevealedConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Reveal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardIsRevealedConditionContext* cardIsRevealedCondition();

  class  PlayerStunsPlayerConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerStunsPlayerConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *Stun();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerStunsPlayerConditionContext* playerStunsPlayerCondition();

  class  CardSentToDiscardConditionContext : public antlr4::ParserRuleContext {
  public:
    CardSentToDiscardConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Sent();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Discard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardSentToDiscardConditionContext* cardSentToDiscardCondition();

  class  CardFailsToResolveConditionContext : public antlr4::ParserRuleContext {
  public:
    CardFailsToResolveConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalCardContext *hypotheticalCard();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Fails();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Resolve();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardFailsToResolveConditionContext* cardFailsToResolveCondition();

  class  PlayerSlowsPlayerConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerSlowsPlayerConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *Slow();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerSlowsPlayerConditionContext* playerSlowsPlayerCondition();

  class  PlayerRecivesControlConditionContext : public antlr4::ParserRuleContext {
  public:
    PlayerRecivesControlConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Receive();
    antlr4::tree::TerminalNode *Control();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerRecivesControlConditionContext* playerRecivesControlCondition();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerControlledConditionContext *playerControlledCondition();
    PlayerUncontrolledConditionContext *playerUncontrolledCondition();
    PlayerHasCardsInDiscardConditionContext *playerHasCardsInDiscardCondition();
    PlayerHasTakenDamageConditionContext *playerHasTakenDamageCondition();
    CardResolvedConditionContext *cardResolvedCondition();
    PlayerDrewCardConditionContext *playerDrewCardCondition();
    PlayerMadeTerrainConditionContext *playerMadeTerrainCondition();
    PlayerEntersSpaceConditionContext *playerEntersSpaceCondition();
    PlayerAttachesCardConditionContext *playerAttachesCardCondition();
    CardIsRevealedConditionContext *cardIsRevealedCondition();
    PlayerStunsPlayerConditionContext *playerStunsPlayerCondition();
    CardSentToDiscardConditionContext *cardSentToDiscardCondition();
    CardFailsToResolveConditionContext *cardFailsToResolveCondition();
    PlayerSlowsPlayerConditionContext *playerSlowsPlayerCondition();
    PlayerRecivesControlConditionContext *playerRecivesControlCondition();
    StunPlayerConditionContext *stunPlayerCondition();
    IfPlayerMakesChoiceContext *ifPlayerMakesChoice();
    IfPreviousActionInvalidContext *ifPreviousActionInvalid();
    IfResolvedCardContext *ifResolvedCard();
    IfUsedSecondWindContext *ifUsedSecondWind();
    IfNearContext *ifNear();
    IfControlledContext *ifControlled();
    IfPlayedCardContext *ifPlayedCard();
    IfTileHadTerrainContext *ifTileHadTerrain();
    IfCardRevealedContext *ifCardRevealed();
    IfPlayerHasMitigateContext *ifPlayerHasMitigate();
    IfPlayerDidntLeaveTileContext *ifPlayerDidntLeaveTile();
    IfCardCostReducedContext *ifCardCostReduced();
    IfPlayerHasMoreHPContext *ifPlayerHasMoreHP();
    IfPlayerHasNoActionsContext *ifPlayerHasNoActions();
    IfInTerrainContext *ifInTerrain();
    CounterCardConditionContext *counterCardCondition();
    RevealCardsConditionContext *revealCardsCondition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  TriggerEffectContext : public antlr4::ParserRuleContext {
  public:
    TriggerEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    TurnTriggerContext *turnTrigger();
    antlr4::tree::TerminalNode *C();
    EffectContext *effect();
    antlr4::tree::TerminalNode *After();
    ConditionContext *condition();
    EffectPostfixContext *effectPostfix();
    DurationEffectContext *durationEffect();
    antlr4::tree::TerminalNode *D();
    GameStartTriggerContext *gameStartTrigger();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerEffectContext* triggerEffect();

  class  IfWouldRecieveControlContext : public antlr4::ParserRuleContext {
  public:
    IfWouldRecieveControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Would();
    std::vector<antlr4::tree::TerminalNode *> Receive();
    antlr4::tree::TerminalNode* Receive(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Control();
    antlr4::tree::TerminalNode* Control(size_t i);
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *Instead();
    PlayerContext *player();
    antlr4::tree::TerminalNode *The();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfWouldRecieveControlContext* ifWouldRecieveControl();

  class  IfWouldTakeDamageContext : public antlr4::ParserRuleContext {
  public:
    IfWouldTakeDamageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Would();
    std::vector<antlr4::tree::TerminalNode *> Take();
    antlr4::tree::TerminalNode* Take(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Damage();
    antlr4::tree::TerminalNode* Damage(size_t i);
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *First();
    antlr4::tree::TerminalNode *Time();
    antlr4::tree::TerminalNode *During();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *Instead();
    std::vector<LiteralValueContext *> literalValue();
    LiteralValueContext* literalValue(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Reduce();
    antlr4::tree::TerminalNode *Taken();
    antlr4::tree::TerminalNode *Below();
    PlayerRefContext *playerRef();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfWouldTakeDamageContext* ifWouldTakeDamage();

  class  IfWouldHealContext : public antlr4::ParserRuleContext {
  public:
    IfWouldHealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *Would();
    antlr4::tree::TerminalNode *Heal();
    antlr4::tree::TerminalNode *HP();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *Instead();
    antlr4::tree::TerminalNode *Deal();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Much();
    antlr4::tree::TerminalNode *Damage();
    antlr4::tree::TerminalNode *To();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfWouldHealContext* ifWouldHeal();

  class  ReplacementTriggerEffectContext : public antlr4::ParserRuleContext {
  public:
    ReplacementTriggerEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfWouldRecieveControlContext *ifWouldRecieveControl();
    IfWouldTakeDamageContext *ifWouldTakeDamage();
    IfWouldHealContext *ifWouldHeal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplacementTriggerEffectContext* replacementTriggerEffect();

  class  CardCantBeTargetedContext : public antlr4::ParserRuleContext {
  public:
    CardCantBeTargetedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Cant();
    antlr4::tree::TerminalNode *Be();
    antlr4::tree::TerminalNode *Targeted();
    antlr4::tree::TerminalNode *By();
    antlr4::tree::TerminalNode *Card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardCantBeTargetedContext* cardCantBeTargeted();

  class  WhileEffectContext : public antlr4::ParserRuleContext {
  public:
    WhileEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *While();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Reveal();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *C();
    PassiveEffectContext *passiveEffect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileEffectContext* whileEffect();

  class  PrimaryCostReductionContext : public antlr4::ParserRuleContext {
  public:
    PrimaryCostReductionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Cost();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Other();
    antlr4::tree::TerminalNode *Reveal();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryCostReductionContext* primaryCostReduction();

  class  OnlyPlayIfContext : public antlr4::ParserRuleContext {
  public:
    OnlyPlayIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Only();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OnlyPlayIfContext* onlyPlayIf();

  class  OncePerGameLimitContext : public antlr4::ParserRuleContext {
  public:
    OncePerGameLimitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Be();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Once();
    antlr4::tree::TerminalNode *Per();
    antlr4::tree::TerminalNode *Game();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OncePerGameLimitContext* oncePerGameLimit();

  class  TriggerLimitContext : public antlr4::ParserRuleContext {
  public:
    TriggerLimitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Only();
    antlr4::tree::TerminalNode *Trigger();
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerLimitContext* triggerLimit();

  class  TriggerTurnLimitContext : public antlr4::ParserRuleContext {
  public:
    TriggerTurnLimitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Trigger();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Per();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerTurnLimitContext* triggerTurnLimit();

  class  OmniPresentEffectContext : public antlr4::ParserRuleContext {
  public:
    OmniPresentEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardCantBeTargetedContext *cardCantBeTargeted();
    WhileEffectContext *whileEffect();
    PrimaryCostReductionContext *primaryCostReduction();
    OnlyPlayIfContext *onlyPlayIf();
    OncePerGameLimitContext *oncePerGameLimit();
    TriggerLimitContext *triggerLimit();
    TriggerTurnLimitContext *triggerTurnLimit();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OmniPresentEffectContext* omniPresentEffect();

  class  OneContext : public antlr4::ParserRuleContext {
  public:
    OneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Once();
    antlr4::tree::TerminalNode *One();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OneContext* one();

  class  TwoContext : public antlr4::ParserRuleContext {
  public:
    TwoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Two();
    antlr4::tree::TerminalNode *Twice();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TwoContext* two();

  class  ThreeContext : public antlr4::ParserRuleContext {
  public:
    ThreeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Three();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThreeContext* three();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  PlayerPowerValueContext : public antlr4::ParserRuleContext {
  public:
    PlayerPowerValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerContext *player();
    antlr4::tree::TerminalNode *POWER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerPowerValueContext* playerPowerValue();

  class  PlayerControlAmountValueContext : public antlr4::ParserRuleContext {
  public:
    PlayerControlAmountValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Total();
    antlr4::tree::TerminalNode *Value();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Control();
    antlr4::tree::TerminalNode *Affecting();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerControlAmountValueContext* playerControlAmountValue();

  class  PlayerHandSizeContext : public antlr4::ParserRuleContext {
  public:
    PlayerHandSizeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Of();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Their();
    antlr4::tree::TerminalNode *Hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerHandSizeContext* playerHandSize();

  class  PlayerMitigateContext : public antlr4::ParserRuleContext {
  public:
    PlayerMitigateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerContext *player();
    antlr4::tree::TerminalNode *Mitigate();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerMitigateContext* playerMitigate();

  class  PlayerCardsInHandContext : public antlr4::ParserRuleContext {
  public:
    PlayerCardsInHandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Each();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *In();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *Damage();
    antlr4::tree::TerminalNode *Slow();
    antlr4::tree::TerminalNode *Silence();
    antlr4::tree::TerminalNode *Disarm();
    antlr4::tree::TerminalNode *More();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerCardsInHandContext* playerCardsInHand();

  class  LiteralValueContext : public antlr4::ParserRuleContext {
  public:
    LiteralValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OneContext *one();
    TwoContext *two();
    ThreeContext *three();
    NumberContext *number();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralValueContext* literalValue();

  class  GameStateValueContext : public antlr4::ParserRuleContext {
  public:
    GameStateValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerPowerValueContext *playerPowerValue();
    PlayerControlAmountValueContext *playerControlAmountValue();
    PlayerHandSizeContext *playerHandSize();
    PlayerMitigateContext *playerMitigate();
    PlayerCardsInHandContext *playerCardsInHand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GameStateValueContext* gameStateValue();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GameStateValueContext *gameStateValue();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  ChooseSameMultipleTimesContext : public antlr4::ParserRuleContext {
  public:
    ChooseSameMultipleTimesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Choose();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Same();
    antlr4::tree::TerminalNode *Mode();
    LiteralValueContext *literalValue();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChooseSameMultipleTimesContext* chooseSameMultipleTimes();

  class  EffectListContext : public antlr4::ParserRuleContext {
  public:
    EffectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *D();
    EffectContext *effect();
    EffectListContext *effectList();
    antlr4::tree::TerminalNode *P();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EffectListContext* effectList();
  EffectListContext* effectList(int precedence);
  class  ChooseEffectContext : public antlr4::ParserRuleContext {
  public:
    ChooseEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Choose();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Each();
    PlayerFilterContext *playerFilter();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *It();
    antlr4::tree::TerminalNode *O();
    EffectListContext *effectList();
    antlr4::tree::TerminalNode *P();
    ChooseSameMultipleTimesContext *chooseSameMultipleTimes();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChooseEffectContext* chooseEffect();

  class  SingleEffectContext : public antlr4::ParserRuleContext {
  public:
    SingleEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChooseEffectContext *chooseEffect();
    DisarmPlayerContext *disarmPlayer();
    SilencePlayerContext *silencePlayer();
    SlowPlayerContext *slowPlayer();
    ControlPlayerContext *controlPlayer();
    TravelPlayerContext *travelPlayer();
    TravelDistanceContext *travelDistance();
    DestroyCardContext *destroyCard();
    DealDamageContext *dealDamage();
    CounterCardContext *counterCard();
    AttachCardContext *attachCard();
    GainPowerContext *gainPower();
    GainActionContext *gainAction();
    GainInitiativeContext *gainInitiative();
    GainMitigateContext *gainMitigate();
    LoseMitigateContext *loseMitigate();
    UseSecondWindContext *useSecondWind();
    ReturnCardContext *returnCard();
    PutBottomCardOfDeckIntoHandContext *putBottomCardOfDeckIntoHand();
    TriggerDurationEffectsContext *triggerDurationEffects();
    PlayCardContext *playCard();
    PlayUltimateContext *playUltimate();
    DiscardCardsContext *discardCards();
    GainsHeroicContext *gainsHeroic();
    HealPlayerContext *healPlayer();
    StunPlayerContext *stunPlayer();
    RevealCardsContext *revealCards();
    DrawCardsContext *drawCards();
    RemoveControlContext *removeControl();
    HardcastEffectContext *hardcastEffect();
    SeekEffectContext *seekEffect();
    MakeTerrainContext *makeTerrain();
    RemoveTerrainContext *removeTerrain();
    SpendResourcesContext *spendResources();
    ScryEffectContext *scryEffect();
    OverrideFrenzyContext *overrideFrenzy();
    IncreaseCardDurationContext *increaseCardDuration();
    ResetUseOfCardContext *resetUseOfCard();
    HeroicContext *heroic();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleEffectContext* singleEffect();

  class  RepeatedEffectContext : public antlr4::ParserRuleContext {
  public:
    RepeatedEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleEffectContext *singleEffect();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Instance();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Control();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Receive();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatedEffectContext* repeatedEffect();

  class  ConditionalEffectContext : public antlr4::ParserRuleContext {
  public:
    ConditionalEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *C();
    EffectContext *effect();
    RepeatedEffectContext *repeatedEffect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalEffectContext* conditionalEffect();

  class  AlternativeEffectContext : public antlr4::ParserRuleContext {
  public:
    AlternativeEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *Instead();
    EffectContext *effect();
    ConditionalEffectContext *conditionalEffect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlternativeEffectContext* alternativeEffect();

  class  EffectContext : public antlr4::ParserRuleContext {
  public:
    EffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Have();
    std::vector<AlternativeEffectContext *> alternativeEffect();
    AlternativeEffectContext* alternativeEffect(size_t i);
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Unless();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EffectContext* effect();

  class  EffectEndContext : public antlr4::ParserRuleContext {
  public:
    EffectEndContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *Then();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *And();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EffectEndContext* effectEnd();

  class  AnyEffectContext : public antlr4::ParserRuleContext {
  public:
    AnyEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EffectContext *effect();
    PassiveEffectContext *passiveEffect();
    ReplacementTriggerEffectContext *replacementTriggerEffect();
    TriggerEffectContext *triggerEffect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnyEffectContext* anyEffect();

  class  BreachEffectContext : public antlr4::ParserRuleContext {
  public:
    BreachEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Breach();
    antlr4::tree::TerminalNode *D();
    std::vector<AnyEffectContext *> anyEffect();
    AnyEffectContext* anyEffect(size_t i);
    std::vector<EffectEndContext *> effectEnd();
    EffectEndContext* effectEnd(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreachEffectContext* breachEffect();

  class  AdvantageEffectContext : public antlr4::ParserRuleContext {
  public:
    AdvantageEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Advantage();
    antlr4::tree::TerminalNode *D();
    std::vector<AnyEffectContext *> anyEffect();
    AnyEffectContext* anyEffect(size_t i);
    std::vector<EffectEndContext *> effectEnd();
    EffectEndContext* effectEnd(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdvantageEffectContext* advantageEffect();

  class  FrenzyEffectContext : public antlr4::ParserRuleContext {
  public:
    FrenzyEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Frenzy();
    antlr4::tree::TerminalNode *D();
    std::vector<AnyEffectContext *> anyEffect();
    AnyEffectContext* anyEffect(size_t i);
    std::vector<EffectEndContext *> effectEnd();
    EffectEndContext* effectEnd(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrenzyEffectContext* frenzyEffect();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OmniPresentEffectContext *omniPresentEffect();
    antlr4::tree::TerminalNode *P();
    BreachEffectContext *breachEffect();
    AdvantageEffectContext *advantageEffect();
    FrenzyEffectContext *frenzyEffect();
    AnyEffectContext *anyEffect();
    EffectEndContext *effectEnd();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  TextContext : public antlr4::ParserRuleContext {
  public:
    TextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextContext* text();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool playerPostFixSempred(PlayerPostFixContext *_localctx, size_t predicateIndex);
  bool effectListSempred(EffectListContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

