
// Generated from IvionParser.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionParser : public antlr4::Parser {
public:
  enum {
    Disarm = 1, Target = 2, Enemy = 3, In = 4, Terrain = 5, Them = 6, Silence = 7, 
    That = 8, Tile = 9, Yourself = 10, Slow = 11, The = 12, Controller = 13, 
    Apply = 14, More = 15, Instances = 16, Of = 17, A = 18, Control = 19, 
    Type = 20, Your = 21, Choice = 22, To = 23, An = 24, Instance = 25, 
    Each = 26, Near = 27, Increase = 28, Value = 29, Already = 30, Affecting = 31, 
    By = 32, Travel = 33, Another = 34, Player = 35, Away = 36, From = 37, 
    You = 38, Up = 39, Nearest = 40, Next = 41, Unless = 42, They = 43, 
    Destroy = 44, Card = 45, Attached = 46, All = 47, Deal = 48, Damage = 49, 
    Equal = 50, Number = 51, Revealed = 52, Their = 53, Hand = 54, Plus = 55, 
    Mitigate = 56, For = 57, Total = 58, Counter = 59, Its = 60, Spends = 61, 
    Spend = 62, Resource = 63, Targeting = 64, Maximum = 65, Size = 66, 
    Increased = 67, With = 68, Cost = 69, Or = 70, Less = 71, Controlled = 72, 
    Non = 73, Attack = 74, Ability = 75, If = 76, Is = 77, Replaces = 78, 
    Countered = 79, Effect = 80, Attach = 81, Empty = 82, Until = 83, End = 84, 
    Turn = 85, Than = 86, Start = 87, Gain = 88, Additional = 89, Gains = 90, 
    Lose = 91, Use = 92, Second = 93, Wind = 94, Return = 95, Owners = 96, 
    Discard = 97, May = 98, Put = 99, Bottom = 100, Deck = 101, Into = 102, 
    Trigger = 103, Duration = 104, Effects = 105, As = 106, Though = 107, 
    Had = 108, Just = 109, Ended = 110, Play = 111, Free = 112, Frenzy = 113, 
    Cursed = 114, Dagger = 115, This = 116, Doesnt = 117, Count = 118, Towards = 119, 
    Limit = 120, Per = 121, Runic = 122, Slaughter = 123, Have = 124, Discards = 125, 
    Heroic = 126, Heal = 127, HP = 128, Stun = 129, Removed = 130, Way = 131, 
    Reveals = 132, Reveal = 133, Draw = 134, Draws = 135, Then = 136, Except = 137, 
    Also = 138, Range = 139, Remove = 140, Hardcast = 141, Seek = 142, Make = 143, 
    Difficult = 144, At = 145, Least = 146, Are = 147, Token = 148, Look = 149, 
    Top = 150, Any = 151, On = 152, And = 153, Rest = 154, Much = 155, Order = 156, 
    Has = 157, Even = 158, No = 159, Used = 160, Reset = 161, Only = 162, 
    Named = 163, Youve = 164, Resolve = 165, Youre = 166, Wary = 167, Taken = 168, 
    Cant = 169, Be = 170, Targeted = 171, Enemies = 172, After = 173, First = 174, 
    During = 175, Enters = 176, Ally = 177, Resolves = 178, Time = 179, 
    Receive = 180, Sent = 181, Would = 182, Instead = 183, Do = 184, Dont = 185, 
    Resolved = 186, Played = 187, While = 188, Leave = 189, Didnt = 190, 
    Take = 191, Was = 192, Reduced = 193, Not = 194, Reduce = 195, Below = 196, 
    Fails = 197, Other = 198, Once = 199, Twice = 200, Game = 201, CARD_NAME = 202, 
    Integer = 203, One = 204, Two = 205, Three = 206, C = 207, P = 208, 
    D = 209, O = 210, POWER = 211, ACTION = 212, INITIATIVE = 213, Choose = 214, 
    Same = 215, Mode = 216, It = 217, Breach = 218, Advantage = 219, Whitespace = 220
  };

  enum {
    RuleDisarmPlayer = 0, RuleSilencePlayer = 1, RuleSlowPlayer = 2, RuleControlPlayer = 3, 
    RuleTravelPlayer = 4, RuleDestroyCard = 5, RuleDealDamage = 6, RuleCounterCard = 7, 
    RuleCounterCardCondition = 8, RuleSpendResources = 9, RuleAttachCard = 10, 
    RuleGainPower = 11, RuleGainAction = 12, RuleGainInitiative = 13, RuleGainMitigate = 14, 
    RuleLoseMitigate = 15, RuleUseSecondWind = 16, RuleReturnCard = 17, 
    RulePutBottomCardOfDeckIntoHand = 18, RuleTriggerDurationEffects = 19, 
    RulePlayCard = 20, RuleDiscardCards = 21, RuleGainsHeroic = 22, RuleHealPlayer = 23, 
    RuleStunPlayer = 24, RuleStunPlayerCondition = 25, RuleRevealCards = 26, 
    RuleRevealCardsCondition = 27, RuleDrawCards = 28, RuleRemoveControl = 29, 
    RuleHardcastEffect = 30, RuleSeekEffect = 31, RuleMakeTerrain = 32, 
    RuleRemoveTerrain = 33, RulePayResources = 34, RuleScryEffect = 35, 
    RuleOverrideFrenzy = 36, RuleIncreaseCardDuration = 37, RuleResetUseOfCard = 38, 
    RuleHeroic = 39, RuleOnlyPlayCertainCards = 40, RuleCostReduction = 41, 
    RuleRangeSet = 42, RuleCantPlayCards = 43, RulePlayerCantBeTargeted = 44, 
    RuleIncreasedHandSize = 45, RuleIncreasedMaxHP = 46, RuleReplacesSecondWind = 47, 
    RuleNoInitiative = 48, RuleDrawRange = 49, RuleGainRange = 50, RuleLimitTargets = 51, 
    RulePassiveEffect = 52, RuleDurationEffect = 53, RuleTurnTrigger = 54, 
    RuleGameStartTrigger = 55, RuleAfterEffectTrigger = 56, RuleAfterControlled = 57, 
    RuleTriggerEffect = 58, RuleIfWouldRecieveControl = 59, RuleIfWouldTakeDamage = 60, 
    RuleIfWouldHeal = 61, RuleReplacementTriggerEffect = 62, RuleIfPlayerMakesChoice = 63, 
    RuleIfPreviousActionInvalid = 64, RuleIfResolvedCard = 65, RuleIfUsedSecondWind = 66, 
    RuleIfNear = 67, RuleIfControlled = 68, RuleIfPlayed = 69, RuleIfTileHadTerrain = 70, 
    RuleIfCardRevealed = 71, RuleIfPlayerHasMitigate = 72, RuleIfPlayerDidntLeaveTile = 73, 
    RuleIfCardCostReduced = 74, RuleIfPlayerHasMoreHP = 75, RuleIfPlayerHasNoActions = 76, 
    RuleIfPlayerInTerrain = 77, RuleConditionEffect = 78, RuleCardCantBeTargeted = 79, 
    RuleWhileEffect = 80, RulePrimaryCostReduction = 81, RuleOnlyPlayIf = 82, 
    RuleOncePerGameLimit = 83, RuleTriggerLimit = 84, RuleTriggerTurnLimit = 85, 
    RuleOmniPresentEffect = 86, RuleOne = 87, RuleTwo = 88, RuleThree = 89, 
    RuleNumber = 90, RuleValue = 91, RuleChooseSameMultipleTimes = 92, RuleEffectList = 93, 
    RuleChooseEffect = 94, RuleSingleEffect = 95, RuleConditionalEffect = 96, 
    RuleAlternativeEffect = 97, RuleOptionalEffect = 98, RuleMultiEffect = 99, 
    RuleEffect = 100, RuleAnyEffect = 101, RuleBreachEffect = 102, RuleAdvantageEffect = 103, 
    RuleFrenzyEffect = 104, RuleLine = 105, RuleText = 106
  };

  IvionParser(antlr4::TokenStream *input);
  ~IvionParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class DisarmPlayerContext;
  class SilencePlayerContext;
  class SlowPlayerContext;
  class ControlPlayerContext;
  class TravelPlayerContext;
  class DestroyCardContext;
  class DealDamageContext;
  class CounterCardContext;
  class CounterCardConditionContext;
  class SpendResourcesContext;
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
  class StunPlayerConditionContext;
  class RevealCardsContext;
  class RevealCardsConditionContext;
  class DrawCardsContext;
  class RemoveControlContext;
  class HardcastEffectContext;
  class SeekEffectContext;
  class MakeTerrainContext;
  class RemoveTerrainContext;
  class PayResourcesContext;
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
  class TurnTriggerContext;
  class GameStartTriggerContext;
  class AfterEffectTriggerContext;
  class AfterControlledContext;
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
  class ConditionEffectContext;
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
  class ValueContext;
  class ChooseSameMultipleTimesContext;
  class EffectListContext;
  class ChooseEffectContext;
  class SingleEffectContext;
  class ConditionalEffectContext;
  class AlternativeEffectContext;
  class OptionalEffectContext;
  class MultiEffectContext;
  class EffectContext;
  class AnyEffectContext;
  class BreachEffectContext;
  class AdvantageEffectContext;
  class FrenzyEffectContext;
  class LineContext;
  class TextContext; 

  class  DisarmPlayerContext : public antlr4::ParserRuleContext {
  public:
    DisarmPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Disarm();
    ValueContext *value();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *Them();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DisarmPlayerContext* disarmPlayer();

  class  SilencePlayerContext : public antlr4::ParserRuleContext {
  public:
    SilencePlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Silence();
    ValueContext *value();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Yourself();
    antlr4::tree::TerminalNode *Them();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SilencePlayerContext* silencePlayer();

  class  SlowPlayerContext : public antlr4::ParserRuleContext {
  public:
    SlowPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Slow();
    ValueContext *value();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Controller();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SlowPlayerContext* slowPlayer();

  class  ControlPlayerContext : public antlr4::ParserRuleContext {
  public:
    ControlPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Apply();
    ValueContext *value();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *Instances();
    std::vector<antlr4::tree::TerminalNode *> Of();
    antlr4::tree::TerminalNode* Of(size_t i);
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Control();
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Choice();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *An();
    antlr4::tree::TerminalNode *Instance();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Increase();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Value();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Affecting();
    antlr4::tree::TerminalNode *By();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlPlayerContext* controlPlayer();

  class  TravelPlayerContext : public antlr4::ParserRuleContext {
  public:
    TravelPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Travel();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Player();
    ValueContext *value();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Away();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Up();
    std::vector<antlr4::tree::TerminalNode *> To();
    antlr4::tree::TerminalNode* To(size_t i);
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Nearest();
    antlr4::tree::TerminalNode *Next();
    antlr4::tree::TerminalNode *Unless();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Spend();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Other();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TravelPlayerContext* travelPlayer();

  class  DestroyCardContext : public antlr4::ParserRuleContext {
  public:
    DestroyCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Destroy();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Attached();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Up();
    ValueContext *value();


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
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *Terrain();
    std::vector<antlr4::tree::TerminalNode *> Them();
    antlr4::tree::TerminalNode* Them(size_t i);
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Their();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *Plus();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Mitigate();
    antlr4::tree::TerminalNode *Yourself();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *POWER();
    antlr4::tree::TerminalNode *Total();
    antlr4::tree::TerminalNode *Value();
    antlr4::tree::TerminalNode *Control();
    antlr4::tree::TerminalNode *Affecting();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DealDamageContext* dealDamage();

  class  CounterCardContext : public antlr4::ParserRuleContext {
  public:
    CounterCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Counter();
    antlr4::tree::TerminalNode *Up();
    antlr4::tree::TerminalNode *To();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Unless();
    antlr4::tree::TerminalNode *Its();
    antlr4::tree::TerminalNode *Controller();
    antlr4::tree::TerminalNode *Spends();
    std::vector<antlr4::tree::TerminalNode *> Resource();
    antlr4::tree::TerminalNode* Resource(size_t i);
    antlr4::tree::TerminalNode *Targeting();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Cost();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Controlled();
    antlr4::tree::TerminalNode *By();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Spend();
    antlr4::tree::TerminalNode *Non();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Ability();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CounterCardContext* counterCard();

  class  CounterCardConditionContext : public antlr4::ParserRuleContext {
  public:
    CounterCardConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CounterCardContext *counterCard();
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Countered();
    antlr4::tree::TerminalNode *C();
    EffectContext *effect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CounterCardConditionContext* counterCardCondition();

  class  SpendResourcesContext : public antlr4::ParserRuleContext {
  public:
    SpendResourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Spend();
    ValueContext *value();
    antlr4::tree::TerminalNode *Resource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SpendResourcesContext* spendResources();

  class  AttachCardContext : public antlr4::ParserRuleContext {
  public:
    AttachCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Attach();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Yourself();
    antlr4::tree::TerminalNode *Empty();
    std::vector<antlr4::tree::TerminalNode *> Tile();
    antlr4::tree::TerminalNode* Tile(size_t i);
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    ValueContext *value();
    antlr4::tree::TerminalNode *Away();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *Until();
    antlr4::tree::TerminalNode *End();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Turn();
    std::vector<antlr4::tree::TerminalNode *> The();
    antlr4::tree::TerminalNode* The(size_t i);
    antlr4::tree::TerminalNode *Start();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Next();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Them();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttachCardContext* attachCard();

  class  GainPowerContext : public antlr4::ParserRuleContext {
  public:
    GainPowerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Gain();
    ValueContext *value();
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
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Gain();
    ValueContext *value();
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
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Another();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainInitiativeContext* gainInitiative();

  class  GainMitigateContext : public antlr4::ParserRuleContext {
  public:
    GainMitigateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *Gains();
    antlr4::tree::TerminalNode *Mitigate();
    ValueContext *value();
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
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Cost();
    antlr4::tree::TerminalNode *Of();
    ValueContext *value();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *From();
    std::vector<antlr4::tree::TerminalNode *> Your();
    antlr4::tree::TerminalNode* Your(size_t i);
    antlr4::tree::TerminalNode *Discard();
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *An();
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
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Bottom();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Of();
    std::vector<antlr4::tree::TerminalNode *> Your();
    antlr4::tree::TerminalNode* Your(size_t i);
    antlr4::tree::TerminalNode *Deck();
    antlr4::tree::TerminalNode *Into();
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
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *For();
    ValueContext *value();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Free();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Non();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Discard();
    antlr4::tree::TerminalNode *Targeting();
    std::vector<antlr4::tree::TerminalNode *> An();
    antlr4::tree::TerminalNode* An(size_t i);
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *Them();
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
    ValueContext *value();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Choice();
    std::vector<antlr4::tree::TerminalNode *> Target();
    antlr4::tree::TerminalNode* Target(size_t i);
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Discards();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *Their();


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
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Player();
    ValueContext *value();
    antlr4::tree::TerminalNode *HP();
    antlr4::tree::TerminalNode *Yourself();
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *Equal();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Card();
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
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *Yourself();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StunPlayerContext* stunPlayer();

  class  StunPlayerConditionContext : public antlr4::ParserRuleContext {
  public:
    StunPlayerConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StunPlayerContext *stunPlayer();
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Removed();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Way();
    antlr4::tree::TerminalNode *C();
    EffectContext *effect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StunPlayerConditionContext* stunPlayerCondition();

  class  RevealCardsContext : public antlr4::ParserRuleContext {
  public:
    RevealCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *Reveals();
    ValueContext *value();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Their();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Reveal();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Your();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevealCardsContext* revealCards();

  class  RevealCardsConditionContext : public antlr4::ParserRuleContext {
  public:
    RevealCardsConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RevealCardsContext *revealCards();
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Non();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Way();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevealCardsConditionContext* revealCardsCondition();

  class  DrawCardsContext : public antlr4::ParserRuleContext {
  public:
    DrawCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Draw();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *Draws();
    ValueContext *value();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *An();
    antlr4::tree::TerminalNode *Additional();
    antlr4::tree::TerminalNode *Each();


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
    ValueContext *value();
    antlr4::tree::TerminalNode *Instances();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Control();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *Yourself();
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Affecting();
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *An();
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
    antlr4::tree::TerminalNode *That();
    std::vector<antlr4::tree::TerminalNode *> Tile();
    antlr4::tree::TerminalNode* Tile(size_t i);
    antlr4::tree::TerminalNode *Difficult();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    ValueContext *value();
    antlr4::tree::TerminalNode *Away();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Up();
    antlr4::tree::TerminalNode *To();


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

  class  PayResourcesContext : public antlr4::ParserRuleContext {
  public:
    PayResourcesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Spend();
    ValueContext *value();
    antlr4::tree::TerminalNode *Resource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PayResourcesContext* payResources();

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
    ValueContext *value();
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
    ValueContext *value();


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
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Only();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Named();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Resolve();
    antlr4::tree::TerminalNode *An();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Youve();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Controlled();
    antlr4::tree::TerminalNode *Youre();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *Terrain();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    ValueContext *value();
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
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Cost();
    ValueContext *value();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Second();
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
    ValueContext *value();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeSetContext* rangeSet();

  class  CantPlayCardsContext : public antlr4::ParserRuleContext {
  public:
    CantPlayCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *You();
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
    antlr4::tree::TerminalNode *You();
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
    ValueContext *value();


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
    ValueContext *value();


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
    antlr4::tree::TerminalNode *You();
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
    antlr4::tree::TerminalNode *Your();
    std::vector<antlr4::tree::TerminalNode *> Card();
    antlr4::tree::TerminalNode* Card(size_t i);
    std::vector<antlr4::tree::TerminalNode *> C();
    antlr4::tree::TerminalNode* C(size_t i);
    antlr4::tree::TerminalNode *Except();
    antlr4::tree::TerminalNode *Travel();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *A();
    std::vector<antlr4::tree::TerminalNode *> Tile();
    antlr4::tree::TerminalNode* Tile(size_t i);
    antlr4::tree::TerminalNode *Also();
    antlr4::tree::TerminalNode *Draw();
    antlr4::tree::TerminalNode *Range();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Terrain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DrawRangeContext* drawRange();

  class  GainRangeContext : public antlr4::ParserRuleContext {
  public:
    GainRangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *All();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Your();
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
    ValueContext *value();
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
    antlr4::tree::TerminalNode *Player();
    ConditionEffectContext *conditionEffect();


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

  class  TurnTriggerContext : public antlr4::ParserRuleContext {
  public:
    TurnTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Start();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *End();
    antlr4::tree::TerminalNode *Their();


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

  class  AfterEffectTriggerContext : public antlr4::ParserRuleContext {
  public:
    AfterEffectTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *After();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Resolve();
    antlr4::tree::TerminalNode *An();
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Targeting();
    antlr4::tree::TerminalNode *Them();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Draw();
    antlr4::tree::TerminalNode *A();
    std::vector<antlr4::tree::TerminalNode *> Your();
    antlr4::tree::TerminalNode* Your(size_t i);
    antlr4::tree::TerminalNode *First();
    antlr4::tree::TerminalNode *During();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Make();
    std::vector<antlr4::tree::TerminalNode *> Terrain();
    antlr4::tree::TerminalNode* Terrain(size_t i);
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Had();
    antlr4::tree::TerminalNode *Enemy();
    antlr4::tree::TerminalNode *Enters();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *With();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Ally();
    antlr4::tree::TerminalNode *Resolves();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Time();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Any();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *Play();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Resource();
    antlr4::tree::TerminalNode *Is();
    antlr4::tree::TerminalNode *Removed();
    antlr4::tree::TerminalNode *Way();
    antlr4::tree::TerminalNode *Attach();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *To();
    std::vector<antlr4::tree::TerminalNode *> Their();
    antlr4::tree::TerminalNode* Their(size_t i);
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Stun();
    antlr4::tree::TerminalNode *Sent();
    antlr4::tree::TerminalNode *Discard();
    antlr4::tree::TerminalNode *Wind();
    antlr4::tree::TerminalNode *Hardcast();
    antlr4::tree::TerminalNode *Played();
    antlr4::tree::TerminalNode *Fails();
    antlr4::tree::TerminalNode *Slow();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AfterEffectTriggerContext* afterEffectTrigger();

  class  AfterControlledContext : public antlr4::ParserRuleContext {
  public:
    AfterControlledContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *After();
    std::vector<antlr4::tree::TerminalNode *> They();
    antlr4::tree::TerminalNode* They(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Receive();
    antlr4::tree::TerminalNode* Receive(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Control();
    antlr4::tree::TerminalNode* Control(size_t i);
    antlr4::tree::TerminalNode *C();
    EffectContext *effect();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Instance();
    antlr4::tree::TerminalNode *Of();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AfterControlledContext* afterControlled();

  class  TriggerEffectContext : public antlr4::ParserRuleContext {
  public:
    TriggerEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TurnTriggerContext *turnTrigger();
    antlr4::tree::TerminalNode *C();
    EffectContext *effect();
    AfterEffectTriggerContext *afterEffectTrigger();
    DurationEffectContext *durationEffect();
    antlr4::tree::TerminalNode *D();
    AfterControlledContext *afterControlled();
    GameStartTriggerContext *gameStartTrigger();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerEffectContext* triggerEffect();

  class  IfWouldRecieveControlContext : public antlr4::ParserRuleContext {
  public:
    IfWouldRecieveControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Would();
    std::vector<antlr4::tree::TerminalNode *> Receive();
    antlr4::tree::TerminalNode* Receive(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Control();
    antlr4::tree::TerminalNode* Control(size_t i);
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *Instead();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *The();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfWouldRecieveControlContext* ifWouldRecieveControl();

  class  IfWouldTakeDamageContext : public antlr4::ParserRuleContext {
  public:
    IfWouldTakeDamageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *You();
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
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *P();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *Not();
    antlr4::tree::TerminalNode *Reduce();
    antlr4::tree::TerminalNode *Taken();
    antlr4::tree::TerminalNode *Below();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfWouldTakeDamageContext* ifWouldTakeDamage();

  class  IfWouldHealContext : public antlr4::ParserRuleContext {
  public:
    IfWouldHealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Would();
    antlr4::tree::TerminalNode *Heal();
    antlr4::tree::TerminalNode *Yourself();
    antlr4::tree::TerminalNode *Or();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *Player();
    antlr4::tree::TerminalNode *HP();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *Instead();
    antlr4::tree::TerminalNode *Deal();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Much();
    antlr4::tree::TerminalNode *Damage();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Enemy();


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
    antlr4::tree::TerminalNode *Resolved();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Youve();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *An();
    antlr4::tree::TerminalNode *Attack();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfResolvedCardContext* ifResolvedCard();

  class  IfUsedSecondWindContext : public antlr4::ParserRuleContext {
  public:
    IfUsedSecondWindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Used();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Second();
    antlr4::tree::TerminalNode *Wind();
    antlr4::tree::TerminalNode *Youve();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Have();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfUsedSecondWindContext* ifUsedSecondWind();

  class  IfNearContext : public antlr4::ParserRuleContext {
  public:
    IfNearContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *Near();
    antlr4::tree::TerminalNode *CARD_NAME();
    antlr4::tree::TerminalNode *Youre();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfNearContext* ifNear();

  class  IfControlledContext : public antlr4::ParserRuleContext {
  public:
    IfControlledContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *They();
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
    antlr4::tree::TerminalNode *Played();
    antlr4::tree::TerminalNode *An();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Youve();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Have();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayedContext* ifPlayed();

  class  IfTileHadTerrainContext : public antlr4::ParserRuleContext {
  public:
    IfTileHadTerrainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Tile();
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
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *Least();
    ValueContext *value();
    antlr4::tree::TerminalNode *Revealed();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Your();
    antlr4::tree::TerminalNode *Hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfCardRevealedContext* ifCardRevealed();

  class  IfPlayerHasMitigateContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerHasMitigateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *Mitigate();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasMitigateContext* ifPlayerHasMitigate();

  class  IfPlayerDidntLeaveTileContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerDidntLeaveTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *You();
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
    antlr4::tree::TerminalNode *Was();
    antlr4::tree::TerminalNode *Reduced();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfCardCostReducedContext* ifCardCostReduced();

  class  IfPlayerHasMoreHPContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerHasMoreHPContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *More();
    antlr4::tree::TerminalNode *HP();
    antlr4::tree::TerminalNode *Than();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Enemy();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasMoreHPContext* ifPlayerHasMoreHP();

  class  IfPlayerHasNoActionsContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerHasNoActionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *Have();
    antlr4::tree::TerminalNode *No();
    antlr4::tree::TerminalNode *Resource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerHasNoActionsContext* ifPlayerHasNoActions();

  class  IfPlayerInTerrainContext : public antlr4::ParserRuleContext {
  public:
    IfPlayerInTerrainContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *They();
    antlr4::tree::TerminalNode *Are();
    antlr4::tree::TerminalNode *In();
    antlr4::tree::TerminalNode *Terrain();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfPlayerInTerrainContext* ifPlayerInTerrain();

  class  ConditionEffectContext : public antlr4::ParserRuleContext {
  public:
    ConditionEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionEffectContext* conditionEffect();

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
    ValueContext *value();
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
    ConditionEffectContext *conditionEffect();


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
    ConditionEffectContext *conditionEffect();


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
    ValueContext *value();
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

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OneContext *one();
    TwoContext *two();
    ThreeContext *three();
    NumberContext *number();


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
    ValueContext *value();


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
    ValueContext *value();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Each();
    antlr4::tree::TerminalNode *Enemy();
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
    DestroyCardContext *destroyCard();
    DealDamageContext *dealDamage();
    CounterCardConditionContext *counterCardCondition();
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
    StunPlayerConditionContext *stunPlayerCondition();
    RevealCardsConditionContext *revealCardsCondition();
    DrawCardsContext *drawCards();
    RemoveControlContext *removeControl();
    HardcastEffectContext *hardcastEffect();
    SeekEffectContext *seekEffect();
    MakeTerrainContext *makeTerrain();
    RemoveTerrainContext *removeTerrain();
    PayResourcesContext *payResources();
    ScryEffectContext *scryEffect();
    OverrideFrenzyContext *overrideFrenzy();
    IncreaseCardDurationContext *increaseCardDuration();
    ResetUseOfCardContext *resetUseOfCard();
    HeroicContext *heroic();
    SpendResourcesContext *spendResources();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleEffectContext* singleEffect();

  class  ConditionalEffectContext : public antlr4::ParserRuleContext {
  public:
    ConditionalEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionEffectContext *conditionEffect();
    antlr4::tree::TerminalNode *C();
    EffectContext *effect();
    SingleEffectContext *singleEffect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalEffectContext* conditionalEffect();

  class  AlternativeEffectContext : public antlr4::ParserRuleContext {
  public:
    AlternativeEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionEffectContext *conditionEffect();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *Instead();
    EffectContext *effect();
    ConditionalEffectContext *conditionalEffect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AlternativeEffectContext* alternativeEffect();

  class  OptionalEffectContext : public antlr4::ParserRuleContext {
  public:
    OptionalEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *You();
    antlr4::tree::TerminalNode *May();
    AlternativeEffectContext *alternativeEffect();
    OptionalEffectContext *optionalEffect();
    antlr4::tree::TerminalNode *To();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptionalEffectContext* optionalEffect();
  OptionalEffectContext* optionalEffect(int precedence);
  class  MultiEffectContext : public antlr4::ParserRuleContext {
  public:
    MultiEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OptionalEffectContext *optionalEffect();
    MultiEffectContext *multiEffect();
    antlr4::tree::TerminalNode *Then();
    antlr4::tree::TerminalNode *C();
    antlr4::tree::TerminalNode *And();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiEffectContext* multiEffect();
  MultiEffectContext* multiEffect(int precedence);
  class  EffectContext : public antlr4::ParserRuleContext {
  public:
    EffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Then();
    antlr4::tree::TerminalNode *C();
    MultiEffectContext *multiEffect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EffectContext* effect();

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
    std::vector<antlr4::tree::TerminalNode *> P();
    antlr4::tree::TerminalNode* P(size_t i);


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
    std::vector<antlr4::tree::TerminalNode *> P();
    antlr4::tree::TerminalNode* P(size_t i);


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
    std::vector<antlr4::tree::TerminalNode *> P();
    antlr4::tree::TerminalNode* P(size_t i);


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
  bool optionalEffectSempred(OptionalEffectContext *_localctx, size_t predicateIndex);
  bool multiEffectSempred(MultiEffectContext *_localctx, size_t predicateIndex);

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

