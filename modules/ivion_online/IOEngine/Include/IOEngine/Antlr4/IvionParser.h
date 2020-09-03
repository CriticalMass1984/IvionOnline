
// Generated from IvionGrammar/Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    Disarm = 15, Silence = 16, Slow = 17, Discard = 18, Draw = 19, Move = 20, 
    Travel = 21, Tile = 22, Card = 23, One = 24, Two = 25, Three = 26, Four = 27, 
    Five = 28, Six = 29, Is = 30, To = 31, Take = 32, Integer = 33, Newline = 34, 
    Whitespace = 35, BlockComment = 36, LineComment = 37
  };

  enum {
    RuleTargetPlayer = 0, RuleSelectPlayer = 1, RuleCardController = 2, 
    RulePreviousPlayer = 3, RulePlayer = 4, RuleDamagePlayer = 5, RuleControl = 6, 
    RuleControlPlayer = 7, RuleMovePlayer = 8, RuleTravelPlayer = 9, RuleGainActions = 10, 
    RuleGainPower = 11, RuleDrawCards = 12, RuleEffectPlayer = 13, RuleTargetTile = 14, 
    RuleSelectTile = 15, RuleTile = 16, RuleTargetCard = 17, RuleSelectCard = 18, 
    RuleCard = 19, RuleLine = 20, RuleParagraph = 21, RuleText = 22, RuleInteger = 23, 
    RuleIntegerLiteral = 24, RuleIntegerWord = 25
  };

  IvionParser(antlr4::TokenStream *input);
  ~IvionParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


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
  class CardContext;
  class LineContext;
  class ParagraphContext;
  class TextContext;
  class IntegerContext;
  class IntegerLiteralContext;
  class IntegerWordContext; 

  class  TargetPlayerContext : public antlr4::ParserRuleContext {
  public:
    TargetPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetPlayerContext* targetPlayer();

  class  SelectPlayerContext : public antlr4::ParserRuleContext {
  public:
    SelectPlayerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


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
    antlr4::tree::TerminalNode *Tile();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetTileContext* targetTile();

  class  SelectTileContext : public antlr4::ParserRuleContext {
  public:
    SelectTileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
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


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetCardContext* targetCard();

  class  SelectCardContext : public antlr4::ParserRuleContext {
  public:
    SelectCardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectCardContext* selectCard();

  class  CardContext : public antlr4::ParserRuleContext {
  public:
    CardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TargetCardContext *targetCard();
    SelectCardContext *selectCard();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CardContext* card();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EffectPlayerContext *effectPlayer();
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

