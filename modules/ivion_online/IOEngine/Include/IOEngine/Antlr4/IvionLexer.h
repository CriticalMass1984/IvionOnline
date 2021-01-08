
// Generated from IvionLexer.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionLexer : public antlr4::Lexer {
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

