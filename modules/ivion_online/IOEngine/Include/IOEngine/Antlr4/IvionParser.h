
// Generated from IvionGrammar/Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, Disarm = 17, Silence = 18, Slow = 19, Discard = 20, 
    Draw = 21, Move = 22, Travel = 23, Target = 24, Player = 25, Enemy = 26, 
    Deal = 27, Tile = 28, Meta = 29, Counter = 30, One = 31, Two = 32, Three = 33, 
    Four = 34, Five = 35, Six = 36, Card = 37, A = 38, Is = 39, To = 40, 
    Take = 41, Of = 42, The = 43, Integer = 44, Newline = 45, Whitespace = 46, 
    BlockComment = 47, LineComment = 48, TextSymbolComment = 49, BracketComment = 50
  };

  enum {
    RuleFilterPlayer = 0, RuleTargetPlayer = 1, RuleSelectPlayer = 2, RuleCardController = 3, 
    RulePreviousPlayer = 4, RulePlayer = 5, RuleDamagePlayer = 6, RuleControl = 7, 
    RuleControlPlayer = 8, RuleMovePlayer = 9, RuleTravelPlayer = 10, RuleGainActions = 11, 
    RuleGainPower = 12, RuleDrawCards = 13, RuleEffectPlayer = 14, RuleTargetTile = 15, 
    RuleSelectTile = 16, RuleTile = 17, RuleTargetCard = 18, RuleSelectCard = 19, 
    RuleTopCardPtr = 20, RuleCard = 21, RuleMetaCounterCard = 22, RuleCounterCard = 23, 
    RuleCardEffect = 24, RuleEndTheTurn = 25, RuleStartTheTurn = 26, RulePassPriority = 27, 
    RuleMiscEffect = 28, RuleLine = 29, RuleParagraph = 30, RuleText = 31, 
    RuleInteger = 32, RuleIntegerLiteral = 33, RuleIntegerWord = 34
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
  class GainActionsContext;
  class GainPowerContext;
  class DrawCardsContext;
  class EffectPlayerContext;
  class TargetTileContext;
  class SelectTileContext;
  class TileContext;
  class TargetCardContext;
  class SelectCardContext;
  class TopCardPtrContext;
  class CardContext;
  class MetaCounterCardContext;
  class CounterCardContext;
  class CardEffectContext;
  class EndTheTurnContext;
  class StartTheTurnContext;
  class PassPriorityContext;
  class MiscEffectContext;
  class LineContext;
  class ParagraphContext;
  class TextContext;
  class IntegerContext;
  class IntegerLiteralContext;
  class IntegerWordContext; 

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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetPlayerContext* targetPlayer();

  class  SelectPlayerContext : public antlr4::ParserRuleContext {
  public:
    SelectPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *A();
    FilterPlayerContext *filterPlayer();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectPlayerContext* selectPlayer();

  class  CardControllerContext : public antlr4::ParserRuleContext {
  public:
    CardControllerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardControllerContext* cardController();

  class  PreviousPlayerContext : public antlr4::ParserRuleContext {
  public:
    PreviousPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


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
    antlr4::tree::TerminalNode *To();
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
    TileContext *tile();
    PlayerContext *player();
    antlr4::tree::TerminalNode *To();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Tile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MovePlayerContext* movePlayer();

  class  TravelPlayerContext : public antlr4::ParserRuleContext {
  public:
    TravelPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Travel();
    TileContext *tile();
    PlayerContext *player();
    antlr4::tree::TerminalNode *To();
    IntegerContext *integer();
    antlr4::tree::TerminalNode *Tile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TravelPlayerContext* travelPlayer();

  class  GainActionsContext : public antlr4::ParserRuleContext {
  public:
    GainActionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainActionsContext* gainActions();

  class  GainPowerContext : public antlr4::ParserRuleContext {
  public:
    GainPowerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerContext *integer();
    PlayerContext *player();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GainPowerContext* gainPower();

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

  class  EffectPlayerContext : public antlr4::ParserRuleContext {
  public:
    EffectPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DamagePlayerContext *damagePlayer();
    ControlPlayerContext *controlPlayer();
    MovePlayerContext *movePlayer();
    TravelPlayerContext *travelPlayer();
    GainActionsContext *gainActions();
    GainPowerContext *gainPower();
    DrawCardsContext *drawCards();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EffectPlayerContext* effectPlayer();

  class  TargetTileContext : public antlr4::ParserRuleContext {
  public:
    TargetTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Target();
    antlr4::tree::TerminalNode *Tile();


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

  class  TopCardPtrContext : public antlr4::ParserRuleContext {
  public:
    TopCardPtrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Of();
    antlr4::tree::TerminalNode *The();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TopCardPtrContext* topCardPtr();

  class  CardContext : public antlr4::ParserRuleContext {
  public:
    CardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetCardContext *targetCard();
    SelectCardContext *selectCard();
    TopCardPtrContext *topCardPtr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardContext* card();

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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CounterCardContext* counterCard();

  class  CardEffectContext : public antlr4::ParserRuleContext {
  public:
    CardEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MetaCounterCardContext *metaCounterCard();
    CounterCardContext *counterCard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardEffectContext* cardEffect();

  class  EndTheTurnContext : public antlr4::ParserRuleContext {
  public:
    EndTheTurnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndTheTurnContext* endTheTurn();

  class  StartTheTurnContext : public antlr4::ParserRuleContext {
  public:
    StartTheTurnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *The();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartTheTurnContext* startTheTurn();

  class  PassPriorityContext : public antlr4::ParserRuleContext {
  public:
    PassPriorityContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PassPriorityContext* passPriority();

  class  MiscEffectContext : public antlr4::ParserRuleContext {
  public:
    MiscEffectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StartTheTurnContext *startTheTurn();
    EndTheTurnContext *endTheTurn();
    PassPriorityContext *passPriority();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MiscEffectContext* miscEffect();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EffectPlayerContext *effectPlayer();
    CardEffectContext *cardEffect();
    MiscEffectContext *miscEffect();
    antlr4::tree::TerminalNode *Newline();
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  ParagraphContext : public antlr4::ParserRuleContext {
  public:
    ParagraphContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LineContext *> line();
    LineContext* line(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Newline();
    antlr4::tree::TerminalNode* Newline(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParagraphContext* paragraph();

  class  TextContext : public antlr4::ParserRuleContext {
  public:
    TextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParagraphContext *> paragraph();
    ParagraphContext* paragraph(size_t i);
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TextContext* text();

  class  IntegerContext : public antlr4::ParserRuleContext {
  public:
    IntegerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegerLiteralContext *integerLiteral();
    IntegerWordContext *integerWord();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerContext* integer();

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
    antlr4::tree::TerminalNode *One();
    antlr4::tree::TerminalNode *Two();
    antlr4::tree::TerminalNode *Three();
    antlr4::tree::TerminalNode *Four();
    antlr4::tree::TerminalNode *Five();
    antlr4::tree::TerminalNode *Six();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegerWordContext* integerWord();


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

