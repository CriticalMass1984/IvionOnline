
// Generated from IvionLexer.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  IvionLexer : public antlr4::Lexer {
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

