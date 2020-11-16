
// Generated from Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, Heal = 14, 
    Disarm = 15, Silence = 16, Slow = 17, Discard = 18, Draw = 19, Deal = 20, 
    Move = 21, Travel = 22, Target = 23, Gain = 24, Action = 25, Power = 26, 
    Initiative = 27, SecondWind = 28, May = 29, Play = 30, Reveal = 31, 
    Damage = 32, Player = 33, Enemy = 34, Another = 35, CardController = 36, 
    PreviousPlayer = 37, Range = 38, Away = 39, Controller = 40, Its = 41, 
    Use = 42, UpTo = 43, Have = 44, Health = 45, For = 46, Less = 47, Free = 48, 
    All = 49, Tile = 50, Empty = 51, Card = 52, Heroic = 53, Attach = 54, 
    That = 55, Put = 56, Meta = 57, Counter = 58, Destroy = 59, Resource = 60, 
    Unless = 61, Pays = 62, Top = 63, Bottom = 64, Deck = 65, On = 66, Hand = 67, 
    From = 68, Until = 69, Number = 70, In = 71, Turn = 72, Start = 73, 
    End = 74, At = 75, This = 76, Then = 77, If = 78, Do = 79, Resolved = 80, 
    Used = 81, Non = 82, Ability = 83, Attack = 84, Already = 85, Instead = 86, 
    A = 87, Is = 88, To = 89, Take = 90, Of = 91, The = 92, One = 93, Two = 94, 
    Three = 95, Four = 96, Five = 97, Six = 98, Integer = 99, Newline = 100, 
    Whitespace = 101
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

