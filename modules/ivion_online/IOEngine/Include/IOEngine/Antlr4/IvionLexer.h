
// Generated from Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, Heal = 16, Disarm = 17, Silence = 18, Slow = 19, Discard = 20, 
    Draw = 21, Deal = 22, Move = 23, Travel = 24, Target = 25, Gain = 26, 
    Action = 27, Power = 28, Initiative = 29, SecondWind = 30, May = 31, 
    Play = 32, Reveal = 33, Damage = 34, Player = 35, Enemy = 36, Another = 37, 
    CardController = 38, PreviousPlayer = 39, Range = 40, Away = 41, Controller = 42, 
    Its = 43, Use = 44, UpTo = 45, Have = 46, Health = 47, For = 48, Less = 49, 
    Free = 50, Tile = 51, Empty = 52, Card = 53, Heroic = 54, Attach = 55, 
    That = 56, Put = 57, Meta = 58, Counter = 59, Destroy = 60, Resource = 61, 
    Unless = 62, Pays = 63, Top = 64, Bottom = 65, Deck = 66, On = 67, Hand = 68, 
    From = 69, Until = 70, Number = 71, In = 72, Turn = 73, Start = 74, 
    End = 75, At = 76, This = 77, Then = 78, If = 79, Do = 80, Resolved = 81, 
    Used = 82, Non = 83, Ability = 84, Attack = 85, Already = 86, Instead = 87, 
    A = 88, Is = 89, To = 90, Take = 91, Of = 92, The = 93, One = 94, Two = 95, 
    Three = 96, Four = 97, Five = 98, Six = 99, Integer = 100, Newline = 101, 
    Whitespace = 102, BlockComment = 103, RulesComment = 104, LineComment = 105, 
    TextSymbolComment = 106, BracketComment = 107
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

