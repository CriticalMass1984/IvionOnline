
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

