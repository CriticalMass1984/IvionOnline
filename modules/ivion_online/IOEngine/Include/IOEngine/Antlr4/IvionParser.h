
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
    Equal = 49, Number = 50, Revealed = 51, Their = 52, Hand = 53, Plus = 54, 
    Mitigate = 55, For = 56, Total = 57, Counter = 58, Its = 59, Spend = 60, 
    Resource = 61, Targeting = 62, Maximum = 63, Size = 64, Increased = 65, 
    With = 66, Cost = 67, Or = 68, Less = 69, Controlled = 70, Uncontrolled = 71, 
    Non = 72, Attack = 73, Ability = 74, If = 75, Is = 76, Replaces = 77, 
    Countered = 78, Effect = 79, Attach = 80, Empty = 81, Until = 82, End = 83, 
    Turn = 84, Than = 85, Start = 86, Gain = 87, Additional = 88, Gains = 89, 
    Lose = 90, Use = 91, Second = 92, Third = 93, Wind = 94, Return = 95, 
    Owners = 96, Discard = 97, May = 98, Put = 99, Bottom = 100, Deck = 101, 
    Into = 102, Trigger = 103, Duration = 104, Effects = 105, As = 106, 
    Though = 107, Had = 108, Just = 109, Ended = 110, Play = 111, Free = 112, 
    Frenzy = 113, Cursed = 114, Dagger = 115, This = 116, Doesnt = 117, 
    Count = 118, Towards = 119, Limit = 120, Per = 121, Runic = 122, Slaughter = 123, 
    Have = 124, Discards = 125, Heroic = 126, Heal = 127, HP = 128, Stun = 129, 
    Removed = 130, Way = 131, Reveals = 132, Reveal = 133, Draw = 134, Then = 135, 
    Except = 136, Also = 137, Range = 138, Remove = 139, Hardcast = 140, 
    Seek = 141, Make = 142, Difficult = 143, At = 144, Least = 145, Are = 146, 
    Token = 147, Look = 148, Top = 149, Any = 150, On = 151, And = 152, 
    Rest = 153, Much = 154, Order = 155, Has = 156, Even = 157, No = 158, 
    Used = 159, Reset = 160, Only = 161, Named = 162, Resolve = 163, Taken = 164, 
    Cant = 165, Be = 166, Targeted = 167, Enemies = 168, After = 169, First = 170, 
    During = 171, Enters = 172, Ally = 173, Resolves = 174, Time = 175, 
    Receive = 176, Sent = 177, Would = 178, Instead = 179, Do = 180, Dont = 181, 
    Resolved = 182, Played = 183, While = 184, Leave = 185, Didnt = 186, 
    Take = 187, Reduced = 188, Not = 189, Reduce = 190, Below = 191, Fails = 192, 
    Other = 193, Once = 194, Twice = 195, Game = 196, CARD_NAME = 197, Integer = 198, 
    One = 199, Two = 200, Three = 201, C = 202, P = 203, D = 204, O = 205, 
    POWER = 206, ACTION = 207, INITIATIVE = 208, Choose = 209, Same = 210, 
    Mode = 211, It = 212, Breach = 213, Advantage = 214, Whitespace = 215
  };

  enum {
    RulePlayerType = 0, RulePlayerPreFix = 1, RulePlayerPostFix = 2, RulePlayerFilter = 3, 
    RuleCurrentPlayer = 4, RulePreviousPlayer = 5, RulePlayerRef = 6, RuleTargetPlayer = 7, 
    RulePreviousCardsController = 8, RuleSinglePlayer = 9, RuleMultiPlayer = 10, 
    RuleAllOtherPlayers = 11, RuleAllPlayers = 12, RulePlayer = 13, RuleHypotheticalPlayer = 14, 
    RuleCardPrefix = 15, RuleCardPostfix = 16, RuleCardFilter = 17, RuleCardName = 18, 
    RuleBottomCard = 19, RulePreviousCard = 20, RuleTargetCard = 21, RuleSingleCard = 22, 
    RuleAllCards = 23, RuleMultiCard = 24, RuleCard = 25, RuleHypotheticalCard = 26, 
    RuleTilePreFix = 27, RuleTilePostFix = 28, RuleTileFilter = 29, RuleTargetTile = 30, 
    RulePreviousTile = 31, RuleTheNearestTile = 32, RulePlayersTile = 33, 
    RuleCardsTile = 34, RuleSingleTile = 35, RuleMultiTile = 36, RuleAllTiles = 37, 
    RuleTile = 38, RuleHypotheticalTile = 39, RuleEntity = 40, RuleHypotheticalEntity = 41, 
    RuleDisarmPlayer = 42, RuleSilencePlayer = 43, RuleSlowPlayer = 44, 
    RuleControlPlayer = 45, RuleAwayFlag = 46, RuleUpToFlag = 47, RuleTravelDistance = 48, 
    RuleTravelPlayer = 49, RuleDestroyCard = 50, RuleDealDamage = 51, RuleCounterCard = 52, 
    RuleAttachCard = 53, RuleGainPower = 54, RuleGainAction = 55, RuleGainInitiative = 56, 
    RuleGainMitigate = 57, RuleLoseMitigate = 58, RuleUseSecondWind = 59, 
    RuleReturnCard = 60, RulePutBottomCardOfDeckIntoHand = 61, RuleTriggerDurationEffects = 62, 
    RulePlayCard = 63, RuleDiscardCards = 64, RuleGainsHeroic = 65, RuleHealPlayer = 66, 
    RuleStunPlayer = 67, RuleRevealCards = 68, RuleDrawCards = 69, RuleRemoveControl = 70, 
    RuleHardcastEffect = 71, RuleSeekEffect = 72, RuleMakeTerrain = 73, 
    RuleRemoveTerrain = 74, RuleSpendResources = 75, RuleScryEffect = 76, 
    RuleOverrideFrenzy = 77, RuleIncreaseCardDuration = 78, RuleResetUseOfCard = 79, 
    RuleHeroic = 80, RuleOnlyPlayCertainCards = 81, RuleCostReduction = 82, 
    RuleRangeSet = 83, RuleCantPlayCards = 84, RulePlayerCantBeTargeted = 85, 
    RuleIncreasedHandSize = 86, RuleIncreasedMaxHP = 87, RuleReplacesSecondWind = 88, 
    RuleNoInitiative = 89, RuleDrawRange = 90, RuleGainRange = 91, RuleLimitTargets = 92, 
    RulePassiveEffect = 93, RuleDurationEffect = 94, RuleStartOfPlayerTurn = 95, 
    RuleEndOfPlayerTurnTrigger = 96, RuleStartOfPlayerNextTurn = 97, RuleEndOfTurnTrigger = 98, 
    RuleTurnTrigger = 99, RuleGameStartTrigger = 100, RuleEffectPostfix = 101, 
    RuleAfterEffectTrigger = 102, RuleTriggerEffect = 103, RuleIfWouldRecieveControl = 104, 
    RuleIfWouldTakeDamage = 105, RuleIfWouldHeal = 106, RuleReplacementTriggerEffect = 107, 
    RuleIfPlayerMakesChoice = 108, RuleIfPreviousActionInvalid = 109, RuleIfResolvedCard = 110, 
    RuleIfUsedSecondWind = 111, RuleIfNear = 112, RuleIfControlled = 113, 
    RuleIfPlayed = 114, RuleIfTileHadTerrain = 115, RuleIfCardRevealed = 116, 
    RuleIfPlayerHasMitigate = 117, RuleIfPlayerDidntLeaveTile = 118, RuleIfCardCostReduced = 119, 
    RuleIfPlayerHasMoreHP = 120, RuleIfPlayerHasNoActions = 121, RuleIfPlayerInTerrain = 122, 
    RuleCounterCardCondition = 123, RuleStunPlayerCondition = 124, RuleRevealCardsCondition = 125, 
    RuleCondition = 126, RuleCardCantBeTargeted = 127, RuleWhileEffect = 128, 
    RulePrimaryCostReduction = 129, RuleOnlyPlayIf = 130, RuleOncePerGameLimit = 131, 
    RuleTriggerLimit = 132, RuleTriggerTurnLimit = 133, RuleOmniPresentEffect = 134, 
    RuleOne = 135, RuleTwo = 136, RuleThree = 137, RuleNumber = 138, RulePlayerPowerValue = 139, 
    RulePlayerControlAmountValue = 140, RulePlayerHandSize = 141, RulePlayerMitigate = 142, 
    RuleLiteralValue = 143, RuleGameStateValue = 144, RuleChooseSameMultipleTimes = 145, 
    RuleEffectList = 146, RuleChooseEffect = 147, RuleSingleEffect = 148, 
    RuleRepeatedEffect = 149, RuleConditionalEffect = 150, RuleAlternativeEffect = 151, 
    RuleEffect = 152, RuleEffectEnd = 153, RuleAnyEffect = 154, RuleBreachEffect = 155, 
    RuleAdvantageEffect = 156, RuleFrenzyEffect = 157, RuleLine = 158, RuleText = 159
  };

  IvionParser(antlr4::TokenStream *input);
  ~IvionParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class PlayerTypeContext;
  class PlayerPreFixContext;
  class PlayerPostFixContext;
  class PlayerFilterContext;
  class CurrentPlayerContext;
  class PreviousPlayerContext;
  class PlayerRefContext;
  class TargetPlayerContext;
  class PreviousCardsControllerContext;
  class SinglePlayerContext;
  class MultiPlayerContext;
  class AllOtherPlayersContext;
  class AllPlayersContext;
  class PlayerContext;
  class HypotheticalPlayerContext;
  class CardPrefixContext;
  class CardPostfixContext;
  class CardFilterContext;
  class CardNameContext;
  class BottomCardContext;
  class PreviousCardContext;
  class TargetCardContext;
  class SingleCardContext;
  class AllCardsContext;
  class MultiCardContext;
  class CardContext;
  class HypotheticalCardContext;
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
  class PlayCardContext;
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
  class AfterEffectTriggerContext;
  class TriggerEffectContext;
  class IfWouldRecieveControlContext;
  class IfWouldTakeDamageContext;
  class IfWouldHealContext;
  class ReplacementTriggerEffectContext;
  class IfPlayerMakesChoiceContext;
  class IfPreviousActionInvalidContext;
  class IfResolvedCardContext;
  class IfUsedSecondWindContext;
  class IfNearContext;
  class IfControlledContext;
  class IfPlayedContext;
  class IfTileHadTerrainContext;
  class IfCardRevealedContext;
  class IfPlayerHasMitigateContext;
  class IfPlayerDidntLeaveTileContext;
  class IfCardCostReducedContext;
  class IfPlayerHasMoreHPContext;
  class IfPlayerHasNoActionsContext;
  class IfPlayerInTerrainContext;
  class CounterCardConditionContext;
  class StunPlayerConditionContext;
  class RevealCardsConditionContext;
  class ConditionContext;
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
  class LiteralValueContext;
  class GameStateValueContext;
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
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *CARD_NAME();
    TileContext *tile();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Away();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerPostFixContext* playerPostFix();

  class  PlayerFilterContext : public antlr4::ParserRuleContext {
  public:
    PlayerFilterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerTypeContext *playerType();
    std::vector<PlayerPreFixContext *> playerPreFix();
    PlayerPreFixContext* playerPreFix(size_t i);
    std::vector<PlayerPostFixContext *> playerPostFix();
    PlayerPostFixContext* playerPostFix(size_t i);


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

  class  PlayerRefContext : public antlr4::ParserRuleContext {
  public:
    PlayerRefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreviousPlayerContext *previousPlayer();
    CurrentPlayerContext *currentPlayer();


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

  class  SinglePlayerContext : public antlr4::ParserRuleContext {
  public:
    SinglePlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetPlayerContext *targetPlayer();
    PlayerRefContext *playerRef();
    PreviousCardsControllerContext *previousCardsController();


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

  class  CardPrefixContext : public antlr4::ParserRuleContext {
  public:
    CardPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Attached();
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *Non();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *First();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Third();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardPrefixContext* cardPrefix();

  class  CardPostfixContext : public antlr4::ParserRuleContext {
  public:
    CardPostfixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *Near();
    HypotheticalPlayerContext *hypotheticalPlayer();
    HypotheticalTileContext *hypotheticalTile();
    antlr4::tree::TerminalNode *Targeting();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Cost();
    antlr4::tree::TerminalNode *Of();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Attached();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Controlled();
    antlr4::tree::TerminalNode *By();
    antlr4::tree::TerminalNode *Hardcast();
    antlr4::tree::TerminalNode *Frenzy();


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

  class  SingleCardContext : public antlr4::ParserRuleContext {
  public:
    SingleCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardNameContext *cardName();
    TargetCardContext *targetCard();
    BottomCardContext *bottomCard();
    PreviousCardContext *previousCard();


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

  class  TilePreFixContext : public antlr4::ParserRuleContext {
  public:
    TilePreFixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Empty();
    antlr4::tree::TerminalNode *Non();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TilePreFixContext* tilePreFix();

  class  TilePostFixContext : public antlr4::ParserRuleContext {
  public:
    TilePostFixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *Near();
    HypotheticalPlayerContext *hypotheticalPlayer();
    CardContext *card();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Away();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Had();


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
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *Is();


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
    std::vector<LiteralValueContext *> literalValue();
    LiteralValueContext* literalValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Damage();
    antlr4::tree::TerminalNode* Damage(size_t i);
    std::vector<antlr4::tree::TerminalNode *> To();
    antlr4::tree::TerminalNode* To(size_t i);
    PlayerContext *player();
    antlr4::tree::TerminalNode *Equal();
    GameStateValueContext *gameStateValue();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Their();
    antlr4::tree::TerminalNode *Hand();


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
    PlayerContext *player();
    antlr4::tree::TerminalNode *Gain();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Additional();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainPowerContext* gainPower();

  class  GainActionContext : public antlr4::ParserRuleContext {
  public:
    GainActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerContext *player();
    antlr4::tree::TerminalNode *Gain();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Additional();


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
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Attached();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Its();
    antlr4::tree::TerminalNode *Owners();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *With();
    std::vector<antlr4::tree::TerminalNode *> A();
    antlr4::tree::TerminalNode* A(size_t i);
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Cost();
    antlr4::tree::TerminalNode *Of();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *From();
    std::vector<antlr4::tree::TerminalNode *> Your();
    antlr4::tree::TerminalNode* Your(size_t i);
    antlr4::tree::TerminalNode *Discard();
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *It();
    antlr4::tree::TerminalNode *More();


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

  class  PlayCardContext : public antlr4::ParserRuleContext {
  public:
    PlayCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *For();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Free();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Non();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Discard();
    antlr4::tree::TerminalNode *Targeting();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Ability();
    PlayerContext *player();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Frenzy();
    std::vector<antlr4::tree::TerminalNode *> Cursed();
    antlr4::tree::TerminalNode* Cursed(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Dagger();
    antlr4::tree::TerminalNode* Dagger(size_t i);
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Doesnt();
    antlr4::tree::TerminalNode *Count();
    antlr4::tree::TerminalNode *Towards();
    antlr4::tree::TerminalNode *Limit();
    antlr4::tree::TerminalNode *Per();
    antlr4::tree::TerminalNode *Turn();
    std::vector<antlr4::tree::TerminalNode *> Runic();
    antlr4::tree::TerminalNode* Runic(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Slaughter();
    antlr4::tree::TerminalNode* Slaughter(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayCardContext* playCard();

  class  DiscardCardsContext : public antlr4::ParserRuleContext {
  public:
    DiscardCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Discard();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Of();
    std::vector<PlayerContext *> player();
    PlayerContext* player(size_t i);
    antlr4::tree::TerminalNode *Choice();
    antlr4::tree::TerminalNode *Discards();
    antlr4::tree::TerminalNode *Target();


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
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Of();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Their();
    antlr4::tree::TerminalNode *Hand();


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
    antlr4::tree::TerminalNode *Reveals();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Their();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *Reveal();
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
    std::vector<antlr4::tree::TerminalNode *> Has();
    antlr4::tree::TerminalNode* Has(size_t i);
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
    antlr4::tree::TerminalNode *Resolve();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Has();
    antlr4::tree::TerminalNode *Controlled();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *Uncontrolled();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Discard();
    antlr4::tree::TerminalNode *Taken();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Damage();


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
    antlr4::tree::TerminalNode *CARD_NAME();
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

  class  AfterEffectTriggerContext : public antlr4::ParserRuleContext {
  public:
    AfterEffectTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *Resolve();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Resolves();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *First();
    antlr4::tree::TerminalNode *Draw();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Make();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *In();
    HypotheticalTileContext *hypotheticalTile();
    antlr4::tree::TerminalNode *Enters();
    std::vector<antlr4::tree::TerminalNode *> Or();
    antlr4::tree::TerminalNode* Or(size_t i);
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Removed();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Way();
    antlr4::tree::TerminalNode *Attach();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Stun();
    antlr4::tree::TerminalNode *Sent();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Discard();
    antlr4::tree::TerminalNode *Wind();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Played();
    antlr4::tree::TerminalNode *Fails();
    antlr4::tree::TerminalNode *Slow();
    antlr4::tree::TerminalNode *Receive();
    antlr4::tree::TerminalNode *Control();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AfterEffectTriggerContext* afterEffectTrigger();

  class  TriggerEffectContext : public antlr4::ParserRuleContext {
  public:
    TriggerEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    TurnTriggerContext *turnTrigger();
    antlr4::tree::TerminalNode *C();
    EffectContext *effect();
    antlr4::tree::TerminalNode *After();
    AfterEffectTriggerContext *afterEffectTrigger();
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

  class  IfPlayerMakesChoiceContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerMakesChoiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Do();
    antlr4::tree::TerminalNode *Dont();
    antlr4::tree::TerminalNode *You();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerMakesChoiceContext* ifPlayerMakesChoice();

  class  IfPreviousActionInvalidContext : public antlr4::ParserRuleContext {
  public:
    IfPreviousActionInvalidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Cant();
    antlr4::tree::TerminalNode *You();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPreviousActionInvalidContext* ifPreviousActionInvalid();

  class  IfResolvedCardContext : public antlr4::ParserRuleContext {
  public:
    IfResolvedCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Resolved();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Has();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Attack();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfResolvedCardContext* ifResolvedCard();

  class  IfUsedSecondWindContext : public antlr4::ParserRuleContext {
  public:
    IfUsedSecondWindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Used();
    PlayerRefContext *playerRef();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Wind();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Has();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfUsedSecondWindContext* ifUsedSecondWind();

  class  IfNearContext : public antlr4::ParserRuleContext {
  public:
    IfNearContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Terrain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfNearContext* ifNear();

  class  IfControlledContext : public antlr4::ParserRuleContext {
  public:
    IfControlledContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *Controlled();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfControlledContext* ifControlled();

  class  IfPlayedContext : public antlr4::ParserRuleContext {
  public:
    IfPlayedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Played();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Has();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayedContext* ifPlayed();

  class  IfTileHadTerrainContext : public antlr4::ParserRuleContext {
  public:
    IfTileHadTerrainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
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
    antlr4::tree::TerminalNode *If();
    PlayerContext *player();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    LiteralValueContext *literalValue();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Has();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfCardRevealedContext* ifCardRevealed();

  class  IfPlayerHasMitigateContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerHasMitigateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Mitigate();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Has();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasMitigateContext* ifPlayerHasMitigate();

  class  IfPlayerDidntLeaveTileContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerDidntLeaveTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    PlayerContext *player();
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
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Its();
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
    antlr4::tree::TerminalNode *If();
    std::vector<HypotheticalPlayerContext *> hypotheticalPlayer();
    HypotheticalPlayerContext* hypotheticalPlayer(size_t i);
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *HP();
    antlr4::tree::TerminalNode *Than();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Has();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasMoreHPContext* ifPlayerHasMoreHP();

  class  IfPlayerHasNoActionsContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerHasNoActionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *No();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Has();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasNoActionsContext* ifPlayerHasNoActions();

  class  IfPlayerInTerrainContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerInTerrainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalPlayerContext *hypotheticalPlayer();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Terrain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerInTerrainContext* ifPlayerInTerrain();

  class  CounterCardConditionContext : public antlr4::ParserRuleContext {
  public:
    CounterCardConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
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
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Removed();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Way();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StunPlayerConditionContext* stunPlayerCondition();

  class  RevealCardsConditionContext : public antlr4::ParserRuleContext {
  public:
    RevealCardsConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    HypotheticalCardContext *hypotheticalCard();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Way();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevealCardsConditionContext* revealCardsCondition();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfPlayerMakesChoiceContext *ifPlayerMakesChoice();
    IfPreviousActionInvalidContext *ifPreviousActionInvalid();
    IfResolvedCardContext *ifResolvedCard();
    IfUsedSecondWindContext *ifUsedSecondWind();
    IfNearContext *ifNear();
    IfControlledContext *ifControlled();
    IfPlayedContext *ifPlayed();
    IfTileHadTerrainContext *ifTileHadTerrain();
    IfCardRevealedContext *ifCardRevealed();
    IfPlayerHasMitigateContext *ifPlayerHasMitigate();
    IfPlayerDidntLeaveTileContext *ifPlayerDidntLeaveTile();
    IfCardCostReducedContext *ifCardCostReduced();
    IfPlayerHasMoreHPContext *ifPlayerHasMoreHP();
    IfPlayerHasNoActionsContext *ifPlayerHasNoActions();
    IfPlayerInTerrainContext *ifPlayerInTerrain();
    RevealCardsConditionContext *revealCardsCondition();
    StunPlayerConditionContext *stunPlayerCondition();
    CounterCardConditionContext *counterCardCondition();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

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
    antlr4::tree::TerminalNode *Revealed();
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
    antlr4::tree::TerminalNode *Revealed();
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
    antlr4::tree::TerminalNode *Played();
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GameStateValueContext* gameStateValue();

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

