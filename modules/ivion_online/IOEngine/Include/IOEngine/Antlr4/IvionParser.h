
// Generated from IvionGrammar/Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, A = 16, Is = 17, To = 18, Take = 19, Of = 20, The = 21, 
    Heal = 22, Disarm = 23, Silence = 24, Slow = 25, Discard = 26, Draw = 27, 
    Deal = 28, Move = 29, Travel = 30, Target = 31, Gain = 32, Action = 33, 
    Power = 34, Initiative = 35, SecondWind = 36, May = 37, Play = 38, Reveal = 39, 
    Damage = 40, Player = 41, Enemy = 42, Another = 43, CardController = 44, 
    PreviousPlayer = 45, Range = 46, Away = 47, Controller = 48, Its = 49, 
    Use = 50, UpTo = 51, Have = 52, Health = 53, For = 54, Less = 55, Tile = 56, 
    Empty = 57, Heroic = 58, That = 59, Put = 60, Meta = 61, Counter = 62, 
    Destroy = 63, Resource = 64, Unless = 65, Pays = 66, Attach = 67, Top = 68, 
    Bottom = 69, Deck = 70, On = 71, Hand = 72, From = 73, Until = 74, Number = 75, 
    In = 76, Turn = 77, Start = 78, End = 79, At = 80, This = 81, Then = 82, 
    If = 83, Do = 84, Resolved = 85, Used = 86, Non = 87, Ability = 88, 
    Attack = 89, Already = 90, Instead = 91, One = 92, Two = 93, Three = 94, 
    Four = 95, Five = 96, Six = 97, Card = 98, Integer = 99, Newline = 100, 
    Whitespace = 101, BlockComment = 102, RulesComment = 103, LineComment = 104, 
    TextSymbolComment = 105, BracketComment = 106
  };

  enum {
    RuleFilterPlayer = 0, RuleTargetPlayer = 1, RuleSelectPlayer = 2, RuleCardController = 3, 
    RulePreviousPlayer = 4, RulePlayer = 5, RuleDamagePlayer = 6, RuleControl = 7, 
    RuleControlPlayer = 8, RuleMovePlayer = 9, RuleTravelPlayer = 10, RuleGainResource = 11, 
    RuleDrawCards = 12, RuleUseSecondWind = 13, RulePlayACard = 14, RuleHeal = 15, 
    RuleRangeSource = 16, RuleRevealFromHand = 17, RuleEffectPlayer = 18, 
    RuleTargetTile = 19, RuleSelectTile = 20, RuleTile = 21, RuleTargetCard = 22, 
    RuleSelectCard = 23, RulePreviousCard = 24, RuleTopOfStack = 25, RuleBottomOfDeck = 26, 
    RuleTopOfDeck = 27, RuleHand = 28, RuleCard = 29, RuleAttachCard = 30, 
    RuleMetaCounterCard = 31, RuleCounterCard = 32, RuleDestroyCard = 33, 
    RuleCardGainsTrait = 34, RulePutCard = 35, RuleCardEffect = 36, RuleTurnTrigger = 37, 
    RuleTriggerConditions = 38, RuleTriggerEffect = 39, RuleBreach = 40, 
    RuleAdvantage = 41, RuleResolved = 42, RuleUsedSecondWind = 43, RuleIfMadeChoice = 44, 
    RuleReplacementCondition = 45, RuleReplacementEffect = 46, RuleEffect = 47, 
    RuleChoose = 48, RuleText = 49, RuleTheNumberOfCardsInHand = 50, RuleIntegerLiteral = 51, 
    RuleIntegerWord = 52, RuleInteger = 53
  };

  IvionParser(antlr4::TokenStream *input);
  ~IvionParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FilterPlayerContext;
  class TargetPlayerContext;
  class SelectPlayerContext;
  class CardControllerContext;
  class PreviousPlayerContext;
  class PlayerContext;
  class DamagePlayerContext;
  class ControlContext;
  class ControlPlayerContext;
  class MovePlayerContext;
  class TravelPlayerContext;
  class GainResourceContext;
  class DrawCardsContext;
  class UseSecondWindContext;
  class PlayACardContext;
  class HealContext;
  class RangeSourceContext;
  class RevealFromHandContext;
  class EffectPlayerContext;
  class TargetTileContext;
  class SelectTileContext;
  class TileContext;
  class TargetCardContext;
  class SelectCardContext;
  class PreviousCardContext;
  class TopOfStackContext;
  class BottomOfDeckContext;
  class TopOfDeckContext;
  class HandContext;
  class CardContext;
  class AttachCardContext;
  class MetaCounterCardContext;
  class CounterCardContext;
  class DestroyCardContext;
  class CardGainsTraitContext;
  class PutCardContext;
  class CardEffectContext;
  class TurnTriggerContext;
  class TriggerConditionsContext;
  class TriggerEffectContext;
  class BreachContext;
  class AdvantageContext;
  class ResolvedContext;
  class UsedSecondWindContext;
  class IfMadeChoiceContext;
  class ReplacementConditionContext;
  class ReplacementEffectContext;
  class EffectContext;
  class ChooseContext;
  class TextContext;
  class TheNumberOfCardsInHandContext;
  class IntegerLiteralContext;
  class IntegerWordContext;
  class IntegerContext; 

  class  FilterPlayerContext : public antlr4::ParserRuleContext {
  public:
    FilterPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Player();
    antlr4::tree::TerminalNode* Player(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Enemy();
    antlr4::tree::TerminalNode* Enemy(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FilterPlayerContext* filterPlayer();

  class  TargetPlayerContext : public antlr4::ParserRuleContext {
  public:
    TargetPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    FilterPlayerContext *filterPlayer();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *UpTo();
    IntegerContext *integer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetPlayerContext* targetPlayer();

  class  SelectPlayerContext : public antlr4::ParserRuleContext {
  public:
    SelectPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    FilterPlayerContext *filterPlayer();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *Its();
    antlr4::tree::TerminalNode *Controller();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectPlayerContext* selectPlayer();

  class  CardControllerContext : public antlr4::ParserRuleContext {
  public:
    CardControllerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CardController();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardControllerContext* cardController();

  class  PreviousPlayerContext : public antlr4::ParserRuleContext {
  public:
    PreviousPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PreviousPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreviousPlayerContext* previousPlayer();

  class  PlayerContext : public antlr4::ParserRuleContext {
  public:
    PlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardControllerContext *cardController();
    SelectPlayerContext *selectPlayer();
    PreviousPlayerContext *previousPlayer();
    TargetPlayerContext *targetPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayerContext* player();

  class  DamagePlayerContext : public antlr4::ParserRuleContext {
  public:
    DamagePlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Deal();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Damage();
    std::vector<antlr4::tree::TerminalNode *> To();
    antlr4::tree::TerminalNode* To(size_t i);
    PlayerContext *player();
    antlr4::tree::TerminalNode *Take();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DamagePlayerContext* damagePlayer();

  class  ControlContext : public antlr4::ParserRuleContext {
  public:
    ControlContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Slow();
    antlr4::tree::TerminalNode *Silence();
    antlr4::tree::TerminalNode *Disarm();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlContext* control();

  class  ControlPlayerContext : public antlr4::ParserRuleContext {
  public:
    ControlPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ControlContext *control();
    IntegerContext *integer();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Is();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ControlPlayerContext* controlPlayer();

  class  MovePlayerContext : public antlr4::ParserRuleContext {
  public:
    MovePlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Move();
    antlr4::tree::TerminalNode *To();
    TileContext *tile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MovePlayerContext* movePlayer();

  class  TravelPlayerContext : public antlr4::ParserRuleContext {
  public:
    TravelPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Travel();
    antlr4::tree::TerminalNode *To();
    TileContext *tile();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Tile();
    PlayerContext *player();
    antlr4::tree::TerminalNode *UpTo();
    antlr4::tree::TerminalNode *Away();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TravelPlayerContext* travelPlayer();

  class  GainResourceContext : public antlr4::ParserRuleContext {
  public:
    GainResourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Gain();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Power();
    antlr4::tree::TerminalNode *Action();
    antlr4::tree::TerminalNode *Initiative();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainResourceContext* gainResource();

  class  DrawCardsContext : public antlr4::ParserRuleContext {
  public:
    DrawCardsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Draw();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Card();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DrawCardsContext* drawCards();

  class  UseSecondWindContext : public antlr4::ParserRuleContext {
  public:
    UseSecondWindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Use();
    antlr4::tree::TerminalNode *SecondWind();
    antlr4::tree::TerminalNode *CardController();
    antlr4::tree::TerminalNode *PreviousPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseSecondWindContext* useSecondWind();

  class  PlayACardContext : public antlr4::ParserRuleContext {
  public:
    PlayACardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerContext *player();
    antlr4::tree::TerminalNode *Play();
    std::vector<IntegerContext *> integer();
    IntegerContext* integer(size_t i);
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *May();
    antlr4::tree::TerminalNode *For();
    antlr4::tree::TerminalNode *Less();
    antlr4::tree::TerminalNode *Resource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PlayACardContext* playACard();

  class  HealContext : public antlr4::ParserRuleContext {
  public:
    HealContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Heal();
    PlayerContext *player();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Health();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HealContext* heal();

  class  RangeSourceContext : public antlr4::ParserRuleContext {
  public:
    RangeSourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *CardController();
    std::vector<antlr4::tree::TerminalNode *> Card();
    antlr4::tree::TerminalNode* Card(size_t i);
    antlr4::tree::TerminalNode *Travel();
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Range();
    antlr4::tree::TerminalNode *From();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RangeSourceContext* rangeSource();

  class  RevealFromHandContext : public antlr4::ParserRuleContext {
  public:
    RevealFromHandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerContext *player();
    antlr4::tree::TerminalNode *Reveal();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *From();
    antlr4::tree::TerminalNode *PreviousPlayer();
    antlr4::tree::TerminalNode *Hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RevealFromHandContext* revealFromHand();

  class  EffectPlayerContext : public antlr4::ParserRuleContext {
  public:
    EffectPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DamagePlayerContext *damagePlayer();
    ControlPlayerContext *controlPlayer();
    MovePlayerContext *movePlayer();
    TravelPlayerContext *travelPlayer();
    GainResourceContext *gainResource();
    DrawCardsContext *drawCards();
    UseSecondWindContext *useSecondWind();
    PlayACardContext *playACard();
    HealContext *heal();
    RangeSourceContext *rangeSource();
    RevealFromHandContext *revealFromHand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EffectPlayerContext* effectPlayer();

  class  TargetTileContext : public antlr4::ParserRuleContext {
  public:
    TargetTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Tile();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *UpTo();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Empty();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetTileContext* targetTile();

  class  SelectTileContext : public antlr4::ParserRuleContext {
  public:
    SelectTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Tile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectTileContext* selectTile();

  class  TileContext : public antlr4::ParserRuleContext {
  public:
    TileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectTileContext *selectTile();
    TargetTileContext *targetTile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TileContext* tile();

  class  TargetCardContext : public antlr4::ParserRuleContext {
  public:
    TargetCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *UpTo();
    IntegerContext *integer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetCardContext* targetCard();

  class  SelectCardContext : public antlr4::ParserRuleContext {
  public:
    SelectCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectCardContext* selectCard();

  class  PreviousCardContext : public antlr4::ParserRuleContext {
  public:
    PreviousCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *That();
    antlr4::tree::TerminalNode *Card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreviousCardContext* previousCard();

  class  TopOfStackContext : public antlr4::ParserRuleContext {
  public:
    TopOfStackContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Top();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *The();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TopOfStackContext* topOfStack();

  class  BottomOfDeckContext : public antlr4::ParserRuleContext {
  public:
    BottomOfDeckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> The();
    antlr4::tree::TerminalNode* The(size_t i);
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *On();
    antlr4::tree::TerminalNode *Bottom();
    antlr4::tree::TerminalNode *Of();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Deck();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BottomOfDeckContext* bottomOfDeck();

  class  TopOfDeckContext : public antlr4::ParserRuleContext {
  public:
    TopOfDeckContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> The();
    antlr4::tree::TerminalNode* The(size_t i);
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *On();
    antlr4::tree::TerminalNode *Top();
    antlr4::tree::TerminalNode *Of();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Deck();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TopOfDeckContext* topOfDeck();

  class  HandContext : public antlr4::ParserRuleContext {
  public:
    HandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlayerContext *player();
    antlr4::tree::TerminalNode *Hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HandContext* hand();

  class  CardContext : public antlr4::ParserRuleContext {
  public:
    CardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetCardContext *targetCard();
    SelectCardContext *selectCard();
    TopOfStackContext *topOfStack();
    BottomOfDeckContext *bottomOfDeck();
    TopOfDeckContext *topOfDeck();
    antlr4::tree::TerminalNode *From();
    HandContext *hand();
    PreviousCardContext *previousCard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardContext* card();

  class  AttachCardContext : public antlr4::ParserRuleContext {
  public:
    AttachCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Attach();
    antlr4::tree::TerminalNode *To();
    PlayerContext *player();
    TileContext *tile();
    antlr4::tree::TerminalNode *Until();
    antlr4::tree::TerminalNode *End();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Turn();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttachCardContext* attachCard();

  class  MetaCounterCardContext : public antlr4::ParserRuleContext {
  public:
    MetaCounterCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Meta();
    antlr4::tree::TerminalNode *Counter();
    CardContext *card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MetaCounterCardContext* metaCounterCard();

  class  CounterCardContext : public antlr4::ParserRuleContext {
  public:
    CounterCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Counter();
    CardContext *card();
    antlr4::tree::TerminalNode *Unless();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Pays();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Resource();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CounterCardContext* counterCard();

  class  DestroyCardContext : public antlr4::ParserRuleContext {
  public:
    DestroyCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Destroy();
    CardContext *card();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DestroyCardContext* destroyCard();

  class  CardGainsTraitContext : public antlr4::ParserRuleContext {
  public:
    CardGainsTraitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CardContext *card();
    antlr4::tree::TerminalNode *Gain();
    antlr4::tree::TerminalNode *Heroic();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardGainsTraitContext* cardGainsTrait();

  class  PutCardContext : public antlr4::ParserRuleContext {
  public:
    PutCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Put();
    CardContext *card();
    antlr4::tree::TerminalNode *On();
    BottomOfDeckContext *bottomOfDeck();
    TopOfDeckContext *topOfDeck();
    HandContext *hand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PutCardContext* putCard();

  class  CardEffectContext : public antlr4::ParserRuleContext {
  public:
    CardEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetaCounterCardContext *metaCounterCard();
    CounterCardContext *counterCard();
    DestroyCardContext *destroyCard();
    AttachCardContext *attachCard();
    PutCardContext *putCard();
    CardGainsTraitContext *cardGainsTrait();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardEffectContext* cardEffect();

  class  TurnTriggerContext : public antlr4::ParserRuleContext {
  public:
    TurnTriggerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *At();
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Of();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *Start();
    antlr4::tree::TerminalNode *End();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurnTriggerContext* turnTrigger();

  class  TriggerConditionsContext : public antlr4::ParserRuleContext {
  public:
    TriggerConditionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TurnTriggerContext *turnTrigger();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerConditionsContext* triggerConditions();

  class  TriggerEffectContext : public antlr4::ParserRuleContext {
  public:
    TriggerEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TriggerConditionsContext *triggerConditions();
    EffectContext *effect();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriggerEffectContext* triggerEffect();

  class  BreachContext : public antlr4::ParserRuleContext {
  public:
    BreachContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreachContext* breach();

  class  AdvantageContext : public antlr4::ParserRuleContext {
  public:
    AdvantageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdvantageContext* advantage();

  class  ResolvedContext : public antlr4::ParserRuleContext {
  public:
    ResolvedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Resolved();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *This();
    antlr4::tree::TerminalNode *Turn();
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *Another();
    antlr4::tree::TerminalNode *Ability();
    antlr4::tree::TerminalNode *Attack();
    antlr4::tree::TerminalNode *Non();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResolvedContext* resolved();

  class  UsedSecondWindContext : public antlr4::ParserRuleContext {
  public:
    UsedSecondWindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Already();
    antlr4::tree::TerminalNode *Used();
    antlr4::tree::TerminalNode *SecondWind();
    antlr4::tree::TerminalNode *CardController();
    antlr4::tree::TerminalNode *PreviousPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsedSecondWindContext* usedSecondWind();

  class  IfMadeChoiceContext : public antlr4::ParserRuleContext {
  public:
    IfMadeChoiceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    antlr4::tree::TerminalNode *Do();
    antlr4::tree::TerminalNode *CardController();
    antlr4::tree::TerminalNode *PreviousPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfMadeChoiceContext* ifMadeChoice();

  class  ReplacementConditionContext : public antlr4::ParserRuleContext {
  public:
    ReplacementConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResolvedContext *resolved();
    BreachContext *breach();
    AdvantageContext *advantage();
    UsedSecondWindContext *usedSecondWind();
    IfMadeChoiceContext *ifMadeChoice();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplacementConditionContext* replacementCondition();

  class  ReplacementEffectContext : public antlr4::ParserRuleContext {
  public:
    ReplacementEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReplacementConditionContext *replacementCondition();
    EffectContext *effect();
    antlr4::tree::TerminalNode *Instead();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReplacementEffectContext* replacementEffect();

  class  EffectContext : public antlr4::ParserRuleContext {
  public:
    EffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EffectPlayerContext *effectPlayer();
    CardEffectContext *cardEffect();
    antlr4::tree::TerminalNode *Then();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EffectContext* effect();

  class  ChooseContext : public antlr4::ParserRuleContext {
  public:
    ChooseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    std::vector<EffectContext *> effect();
    EffectContext* effect(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChooseContext* choose();

  class  TextContext : public antlr4::ParserRuleContext {
  public:
    TextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<ChooseContext *> choose();
    ChooseContext* choose(size_t i);
    std::vector<ReplacementEffectContext *> replacementEffect();
    ReplacementEffectContext* replacementEffect(size_t i);
    std::vector<TriggerEffectContext *> triggerEffect();
    TriggerEffectContext* triggerEffect(size_t i);
    std::vector<EffectContext *> effect();
    EffectContext* effect(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextContext* text();

  class  TheNumberOfCardsInHandContext : public antlr4::ParserRuleContext {
  public:
    TheNumberOfCardsInHandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();
    antlr4::tree::TerminalNode *Number();
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *Card();
    antlr4::tree::TerminalNode *In();
    PlayerContext *player();
    antlr4::tree::TerminalNode *Hand();
    antlr4::tree::TerminalNode *Reveal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TheNumberOfCardsInHandContext* theNumberOfCardsInHand();

  class  IntegerLiteralContext : public antlr4::ParserRuleContext {
  public:
    IntegerLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Integer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerLiteralContext* integerLiteral();

  class  IntegerWordContext : public antlr4::ParserRuleContext {
  public:
    IntegerWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    antlr4::tree::TerminalNode *One();
    antlr4::tree::TerminalNode *Two();
    antlr4::tree::TerminalNode *Three();
    antlr4::tree::TerminalNode *Four();
    antlr4::tree::TerminalNode *Five();
    antlr4::tree::TerminalNode *Six();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerWordContext* integerWord();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerLiteralContext *integerLiteral();
    IntegerWordContext *integerWord();
    TheNumberOfCardsInHandContext *theNumberOfCardsInHand();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerContext* integer();


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

