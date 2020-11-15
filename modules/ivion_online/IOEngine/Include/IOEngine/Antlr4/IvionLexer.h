
// Generated from IvionGrammar/Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionLexer : public antlr4::Lexer {
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

  IvionLexer(antlr4::CharStream *input);
  ~IvionLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

