
// Generated from Ivion.antlr4 by ANTLR 4.8


#include "IOEngine/Antlr4/IvionVisitor.h"

#include "IOEngine/Antlr4/IvionParser.h"


using namespace antlrcpp;
using namespace antlr4;

IvionParser::IvionParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

IvionParser::~IvionParser() {
  delete _interpreter;
}

std::string IvionParser::getGrammarFileName() const {
  return "Ivion.antlr4";
}

const std::vector<std::string>& IvionParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& IvionParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- BeforeContext ------------------------------------------------------------------

IvionParser::BeforeContext::BeforeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IvionParser::BeforeContext::getRuleIndex() const {
  return IvionParser::RuleBefore;
}


antlrcpp::Any IvionParser::BeforeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitBefore(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::BeforeContext* IvionParser::before() {
  BeforeContext *_localctx = _tracker.createInstance<BeforeContext>(_ctx, getState());
  enterRule(_localctx, 0, IvionParser::RuleBefore);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    match(IvionParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FilterPlayerContext ------------------------------------------------------------------

IvionParser::FilterPlayerContext::FilterPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> IvionParser::FilterPlayerContext::Player() {
  return getTokens(IvionParser::Player);
}

tree::TerminalNode* IvionParser::FilterPlayerContext::Player(size_t i) {
  return getToken(IvionParser::Player, i);
}

std::vector<tree::TerminalNode *> IvionParser::FilterPlayerContext::Enemy() {
  return getTokens(IvionParser::Enemy);
}

tree::TerminalNode* IvionParser::FilterPlayerContext::Enemy(size_t i) {
  return getToken(IvionParser::Enemy, i);
}


size_t IvionParser::FilterPlayerContext::getRuleIndex() const {
  return IvionParser::RuleFilterPlayer;
}


antlrcpp::Any IvionParser::FilterPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitFilterPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::FilterPlayerContext* IvionParser::filterPlayer() {
  FilterPlayerContext *_localctx = _tracker.createInstance<FilterPlayerContext>(_ctx, getState());
  enterRule(_localctx, 2, IvionParser::RuleFilterPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(143); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(142);
              _la = _input->LA(1);
              if (!(_la == IvionParser::Player

              || _la == IvionParser::Enemy)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(145); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TargetPlayerContext ------------------------------------------------------------------

IvionParser::TargetPlayerContext::TargetPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TargetPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

IvionParser::FilterPlayerContext* IvionParser::TargetPlayerContext::filterPlayer() {
  return getRuleContext<IvionParser::FilterPlayerContext>(0);
}

tree::TerminalNode* IvionParser::TargetPlayerContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::TargetPlayerContext::UpTo() {
  return getToken(IvionParser::UpTo, 0);
}

IvionParser::IntegerContext* IvionParser::TargetPlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}


size_t IvionParser::TargetPlayerContext::getRuleIndex() const {
  return IvionParser::RuleTargetPlayer;
}


antlrcpp::Any IvionParser::TargetPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTargetPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TargetPlayerContext* IvionParser::targetPlayer() {
  TargetPlayerContext *_localctx = _tracker.createInstance<TargetPlayerContext>(_ctx, getState());
  enterRule(_localctx, 4, IvionParser::RuleTargetPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(147);
      match(IvionParser::Target);
      setState(148);
      filterPlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      match(IvionParser::Another);
      setState(150);
      match(IvionParser::Target);
      setState(151);
      filterPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(152);
      match(IvionParser::Target);
      setState(153);
      match(IvionParser::Another);
      setState(154);
      filterPlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(155);
      match(IvionParser::UpTo);
      setState(156);
      integer();
      setState(157);
      match(IvionParser::Target);
      setState(158);
      filterPlayer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectPlayerContext ------------------------------------------------------------------

IvionParser::SelectPlayerContext::SelectPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SelectPlayerContext::A() {
  return getToken(IvionParser::A, 0);
}

IvionParser::FilterPlayerContext* IvionParser::SelectPlayerContext::filterPlayer() {
  return getRuleContext<IvionParser::FilterPlayerContext>(0);
}

tree::TerminalNode* IvionParser::SelectPlayerContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::SelectPlayerContext::Its() {
  return getToken(IvionParser::Its, 0);
}

tree::TerminalNode* IvionParser::SelectPlayerContext::Controller() {
  return getToken(IvionParser::Controller, 0);
}


size_t IvionParser::SelectPlayerContext::getRuleIndex() const {
  return IvionParser::RuleSelectPlayer;
}


antlrcpp::Any IvionParser::SelectPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitSelectPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SelectPlayerContext* IvionParser::selectPlayer() {
  SelectPlayerContext *_localctx = _tracker.createInstance<SelectPlayerContext>(_ctx, getState());
  enterRule(_localctx, 6, IvionParser::RuleSelectPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(169);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::A: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        match(IvionParser::A);
        setState(163);
        filterPlayer();
        break;
      }

      case IvionParser::Another: {
        enterOuterAlt(_localctx, 2);
        setState(164);
        match(IvionParser::Another);
        setState(165);
        filterPlayer();
        break;
      }

      case IvionParser::Player:
      case IvionParser::Enemy: {
        enterOuterAlt(_localctx, 3);
        setState(166);
        filterPlayer();
        break;
      }

      case IvionParser::Its: {
        enterOuterAlt(_localctx, 4);
        setState(167);
        match(IvionParser::Its);
        setState(168);
        match(IvionParser::Controller);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardControllerContext ------------------------------------------------------------------

IvionParser::CardControllerContext::CardControllerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardControllerContext::CardController() {
  return getToken(IvionParser::CardController, 0);
}


size_t IvionParser::CardControllerContext::getRuleIndex() const {
  return IvionParser::RuleCardController;
}


antlrcpp::Any IvionParser::CardControllerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitCardController(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardControllerContext* IvionParser::cardController() {
  CardControllerContext *_localctx = _tracker.createInstance<CardControllerContext>(_ctx, getState());
  enterRule(_localctx, 8, IvionParser::RuleCardController);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(IvionParser::CardController);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreviousPlayerContext ------------------------------------------------------------------

IvionParser::PreviousPlayerContext::PreviousPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PreviousPlayerContext::PreviousPlayer() {
  return getToken(IvionParser::PreviousPlayer, 0);
}


size_t IvionParser::PreviousPlayerContext::getRuleIndex() const {
  return IvionParser::RulePreviousPlayer;
}


antlrcpp::Any IvionParser::PreviousPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitPreviousPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PreviousPlayerContext* IvionParser::previousPlayer() {
  PreviousPlayerContext *_localctx = _tracker.createInstance<PreviousPlayerContext>(_ctx, getState());
  enterRule(_localctx, 10, IvionParser::RulePreviousPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(IvionParser::PreviousPlayer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerContext ------------------------------------------------------------------

IvionParser::PlayerContext::PlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CardControllerContext* IvionParser::PlayerContext::cardController() {
  return getRuleContext<IvionParser::CardControllerContext>(0);
}

IvionParser::SelectPlayerContext* IvionParser::PlayerContext::selectPlayer() {
  return getRuleContext<IvionParser::SelectPlayerContext>(0);
}

IvionParser::PreviousPlayerContext* IvionParser::PlayerContext::previousPlayer() {
  return getRuleContext<IvionParser::PreviousPlayerContext>(0);
}

IvionParser::TargetPlayerContext* IvionParser::PlayerContext::targetPlayer() {
  return getRuleContext<IvionParser::TargetPlayerContext>(0);
}


size_t IvionParser::PlayerContext::getRuleIndex() const {
  return IvionParser::RulePlayer;
}


antlrcpp::Any IvionParser::PlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerContext* IvionParser::player() {
  PlayerContext *_localctx = _tracker.createInstance<PlayerContext>(_ctx, getState());
  enterRule(_localctx, 12, IvionParser::RulePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(179);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(175);
      cardController();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(176);
      selectPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(177);
      previousPlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(178);
      targetPlayer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DamagePlayerContext ------------------------------------------------------------------

IvionParser::DamagePlayerContext::DamagePlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DamagePlayerContext::Deal() {
  return getToken(IvionParser::Deal, 0);
}

IvionParser::IntegerContext* IvionParser::DamagePlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::DamagePlayerContext::Damage() {
  return getToken(IvionParser::Damage, 0);
}

std::vector<tree::TerminalNode *> IvionParser::DamagePlayerContext::To() {
  return getTokens(IvionParser::To);
}

tree::TerminalNode* IvionParser::DamagePlayerContext::To(size_t i) {
  return getToken(IvionParser::To, i);
}

IvionParser::PlayerContext* IvionParser::DamagePlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::DamagePlayerContext::Take() {
  return getToken(IvionParser::Take, 0);
}


size_t IvionParser::DamagePlayerContext::getRuleIndex() const {
  return IvionParser::RuleDamagePlayer;
}


antlrcpp::Any IvionParser::DamagePlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitDamagePlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DamagePlayerContext* IvionParser::damagePlayer() {
  DamagePlayerContext *_localctx = _tracker.createInstance<DamagePlayerContext>(_ctx, getState());
  enterRule(_localctx, 14, IvionParser::RuleDamagePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(181);
      match(IvionParser::Deal);
      setState(182);
      integer();
      setState(183);
      match(IvionParser::Damage);
      setState(184);
      match(IvionParser::To);
      setState(185);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(187);
      player();
      setState(188);
      match(IvionParser::Take);
      setState(189);
      integer();
      setState(190);
      match(IvionParser::Damage);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(192);
      match(IvionParser::Deal);
      setState(193);
      match(IvionParser::Damage);
      setState(194);
      match(IvionParser::To);
      setState(195);
      player();
      setState(196);
      match(IvionParser::T__1);
      setState(197);
      match(IvionParser::To);
      setState(198);
      integer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlPlayerContext ------------------------------------------------------------------

IvionParser::ControlPlayerContext::ControlPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IntegerContext* IvionParser::ControlPlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

IvionParser::PlayerContext* IvionParser::ControlPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Control() {
  return getToken(IvionParser::Control, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Slow() {
  return getToken(IvionParser::Slow, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Silence() {
  return getToken(IvionParser::Silence, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Disarm() {
  return getToken(IvionParser::Disarm, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Is() {
  return getToken(IvionParser::Is, 0);
}


size_t IvionParser::ControlPlayerContext::getRuleIndex() const {
  return IvionParser::RuleControlPlayer;
}


antlrcpp::Any IvionParser::ControlPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitControlPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ControlPlayerContext* IvionParser::controlPlayer() {
  ControlPlayerContext *_localctx = _tracker.createInstance<ControlPlayerContext>(_ctx, getState());
  enterRule(_localctx, 16, IvionParser::RuleControlPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(211);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Disarm:
      case IvionParser::Silence:
      case IvionParser::Slow:
      case IvionParser::Control: {
        enterOuterAlt(_localctx, 1);
        setState(202);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << IvionParser::Disarm)
          | (1ULL << IvionParser::Silence)
          | (1ULL << IvionParser::Slow)
          | (1ULL << IvionParser::Control))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(203);
        integer();
        setState(204);
        player();
        break;
      }

      case IvionParser::Target:
      case IvionParser::Player:
      case IvionParser::Enemy:
      case IvionParser::Another:
      case IvionParser::CardController:
      case IvionParser::PreviousPlayer:
      case IvionParser::Its:
      case IvionParser::UpTo:
      case IvionParser::A: {
        enterOuterAlt(_localctx, 2);
        setState(206);
        player();
        setState(207);
        match(IvionParser::Is);
        setState(208);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << IvionParser::Disarm)
          | (1ULL << IvionParser::Silence)
          | (1ULL << IvionParser::Slow)
          | (1ULL << IvionParser::Control))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(209);
        integer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MovePlayerContext ------------------------------------------------------------------

IvionParser::MovePlayerContext::MovePlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::MovePlayerContext::Move() {
  return getToken(IvionParser::Move, 0);
}

tree::TerminalNode* IvionParser::MovePlayerContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::TileContext* IvionParser::MovePlayerContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}


size_t IvionParser::MovePlayerContext::getRuleIndex() const {
  return IvionParser::RuleMovePlayer;
}


antlrcpp::Any IvionParser::MovePlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitMovePlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::MovePlayerContext* IvionParser::movePlayer() {
  MovePlayerContext *_localctx = _tracker.createInstance<MovePlayerContext>(_ctx, getState());
  enterRule(_localctx, 18, IvionParser::RuleMovePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(IvionParser::Move);
    setState(214);
    match(IvionParser::To);
    setState(215);
    tile();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TravelPlayerContext ------------------------------------------------------------------

IvionParser::TravelPlayerContext::TravelPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Travel() {
  return getToken(IvionParser::Travel, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::TileContext* IvionParser::TravelPlayerContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}

IvionParser::IntegerContext* IvionParser::TravelPlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

std::vector<IvionParser::PlayerContext *> IvionParser::TravelPlayerContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::TravelPlayerContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::UpTo() {
  return getToken(IvionParser::UpTo, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Away() {
  return getToken(IvionParser::Away, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::From() {
  return getToken(IvionParser::From, 0);
}


size_t IvionParser::TravelPlayerContext::getRuleIndex() const {
  return IvionParser::RuleTravelPlayer;
}


antlrcpp::Any IvionParser::TravelPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTravelPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TravelPlayerContext* IvionParser::travelPlayer() {
  TravelPlayerContext *_localctx = _tracker.createInstance<TravelPlayerContext>(_ctx, getState());
  enterRule(_localctx, 20, IvionParser::RuleTravelPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(248);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(217);
      match(IvionParser::Travel);
      setState(218);
      match(IvionParser::To);
      setState(219);
      tile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(220);
      match(IvionParser::Travel);
      setState(221);
      integer();
      setState(222);
      match(IvionParser::Tile);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(224);
      match(IvionParser::Travel);
      setState(225);
      player();
      setState(226);
      match(IvionParser::To);
      setState(227);
      tile();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(229);
      match(IvionParser::Travel);
      setState(230);
      player();
      setState(232);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::UpTo) {
        setState(231);
        match(IvionParser::UpTo);
      }
      setState(234);
      integer();
      setState(235);
      match(IvionParser::Tile);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(237);
      match(IvionParser::Travel);
      setState(238);
      player();
      setState(240);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::UpTo) {
        setState(239);
        match(IvionParser::UpTo);
      }
      setState(242);
      integer();
      setState(243);
      match(IvionParser::Tile);
      setState(244);
      match(IvionParser::Away);
      setState(245);
      match(IvionParser::From);
      setState(246);
      player();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GainResourceContext ------------------------------------------------------------------

IvionParser::GainResourceContext::GainResourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GainResourceContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

tree::TerminalNode* IvionParser::GainResourceContext::Power() {
  return getToken(IvionParser::Power, 0);
}

tree::TerminalNode* IvionParser::GainResourceContext::Action() {
  return getToken(IvionParser::Action, 0);
}

tree::TerminalNode* IvionParser::GainResourceContext::Initiative() {
  return getToken(IvionParser::Initiative, 0);
}

IvionParser::PlayerContext* IvionParser::GainResourceContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::IntegerContext* IvionParser::GainResourceContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::GainResourceContext::More() {
  return getToken(IvionParser::More, 0);
}


size_t IvionParser::GainResourceContext::getRuleIndex() const {
  return IvionParser::RuleGainResource;
}


antlrcpp::Any IvionParser::GainResourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitGainResource(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainResourceContext* IvionParser::gainResource() {
  GainResourceContext *_localctx = _tracker.createInstance<GainResourceContext>(_ctx, getState());
  enterRule(_localctx, 22, IvionParser::RuleGainResource);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Player)
      | (1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::CardController)
      | (1ULL << IvionParser::PreviousPlayer)
      | (1ULL << IvionParser::Its)
      | (1ULL << IvionParser::UpTo))) != 0) || _la == IvionParser::A) {
      setState(250);
      player();
    }
    setState(253);
    match(IvionParser::Gain);
    setState(255);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 108) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 108)) & ((1ULL << (IvionParser::A - 108))
      | (1ULL << (IvionParser::The - 108))
      | (1ULL << (IvionParser::One - 108))
      | (1ULL << (IvionParser::Two - 108))
      | (1ULL << (IvionParser::Three - 108))
      | (1ULL << (IvionParser::Four - 108))
      | (1ULL << (IvionParser::Five - 108))
      | (1ULL << (IvionParser::Six - 108))
      | (1ULL << (IvionParser::Integer - 108)))) != 0)) {
      setState(254);
      integer();
    }
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::More) {
      setState(257);
      match(IvionParser::More);
    }
    setState(260);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Action)
      | (1ULL << IvionParser::Power)
      | (1ULL << IvionParser::Initiative))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DrawCardsContext ------------------------------------------------------------------

IvionParser::DrawCardsContext::DrawCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::DrawCardsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Draw() {
  return getToken(IvionParser::Draw, 0);
}

IvionParser::IntegerContext* IvionParser::DrawCardsContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}


size_t IvionParser::DrawCardsContext::getRuleIndex() const {
  return IvionParser::RuleDrawCards;
}


antlrcpp::Any IvionParser::DrawCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitDrawCards(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DrawCardsContext* IvionParser::drawCards() {
  DrawCardsContext *_localctx = _tracker.createInstance<DrawCardsContext>(_ctx, getState());
  enterRule(_localctx, 24, IvionParser::RuleDrawCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(271);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target:
      case IvionParser::Player:
      case IvionParser::Enemy:
      case IvionParser::Another:
      case IvionParser::CardController:
      case IvionParser::PreviousPlayer:
      case IvionParser::Its:
      case IvionParser::UpTo:
      case IvionParser::A: {
        enterOuterAlt(_localctx, 1);
        setState(262);
        player();
        setState(263);
        match(IvionParser::Draw);
        setState(264);
        integer();
        setState(265);
        match(IvionParser::Card);
        break;
      }

      case IvionParser::Draw: {
        enterOuterAlt(_localctx, 2);
        setState(267);
        match(IvionParser::Draw);
        setState(268);
        integer();
        setState(269);
        match(IvionParser::Card);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DiscardCardsContext ------------------------------------------------------------------

IvionParser::DiscardCardsContext::DiscardCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::DiscardCardsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}

IvionParser::IntegerContext* IvionParser::DiscardCardsContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}


size_t IvionParser::DiscardCardsContext::getRuleIndex() const {
  return IvionParser::RuleDiscardCards;
}


antlrcpp::Any IvionParser::DiscardCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitDiscardCards(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DiscardCardsContext* IvionParser::discardCards() {
  DiscardCardsContext *_localctx = _tracker.createInstance<DiscardCardsContext>(_ctx, getState());
  enterRule(_localctx, 26, IvionParser::RuleDiscardCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(282);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target:
      case IvionParser::Player:
      case IvionParser::Enemy:
      case IvionParser::Another:
      case IvionParser::CardController:
      case IvionParser::PreviousPlayer:
      case IvionParser::Its:
      case IvionParser::UpTo:
      case IvionParser::A: {
        enterOuterAlt(_localctx, 1);
        setState(273);
        player();
        setState(274);
        match(IvionParser::Discard);
        setState(275);
        integer();
        setState(276);
        match(IvionParser::Card);
        break;
      }

      case IvionParser::Discard: {
        enterOuterAlt(_localctx, 2);
        setState(278);
        match(IvionParser::Discard);
        setState(279);
        integer();
        setState(280);
        match(IvionParser::Card);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UseSecondWindContext ------------------------------------------------------------------

IvionParser::UseSecondWindContext::UseSecondWindContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::UseSecondWindContext::Use() {
  return getToken(IvionParser::Use, 0);
}

tree::TerminalNode* IvionParser::UseSecondWindContext::SecondWind() {
  return getToken(IvionParser::SecondWind, 0);
}

IvionParser::CardControllerContext* IvionParser::UseSecondWindContext::cardController() {
  return getRuleContext<IvionParser::CardControllerContext>(0);
}

IvionParser::PreviousPlayerContext* IvionParser::UseSecondWindContext::previousPlayer() {
  return getRuleContext<IvionParser::PreviousPlayerContext>(0);
}


size_t IvionParser::UseSecondWindContext::getRuleIndex() const {
  return IvionParser::RuleUseSecondWind;
}


antlrcpp::Any IvionParser::UseSecondWindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitUseSecondWind(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::UseSecondWindContext* IvionParser::useSecondWind() {
  UseSecondWindContext *_localctx = _tracker.createInstance<UseSecondWindContext>(_ctx, getState());
  enterRule(_localctx, 28, IvionParser::RuleUseSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(IvionParser::Use);
    setState(287);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::CardController: {
        setState(285);
        cardController();
        break;
      }

      case IvionParser::PreviousPlayer: {
        setState(286);
        previousPlayer();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(289);
    match(IvionParser::SecondWind);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayACardContext ------------------------------------------------------------------

IvionParser::PlayACardContext::PlayACardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::PlayACardContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayACardContext::Play() {
  return getToken(IvionParser::Play, 0);
}

IvionParser::CardContext* IvionParser::PlayACardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

tree::TerminalNode* IvionParser::PlayACardContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::PlayACardContext::For() {
  return getToken(IvionParser::For, 0);
}

IvionParser::IntegerContext* IvionParser::PlayACardContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::PlayACardContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::PlayACardContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::PlayACardContext::Free() {
  return getToken(IvionParser::Free, 0);
}


size_t IvionParser::PlayACardContext::getRuleIndex() const {
  return IvionParser::RulePlayACard;
}


antlrcpp::Any IvionParser::PlayACardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitPlayACard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayACardContext* IvionParser::playACard() {
  PlayACardContext *_localctx = _tracker.createInstance<PlayACardContext>(_ctx, getState());
  enterRule(_localctx, 30, IvionParser::RulePlayACard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(318);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(291);
      player();
      setState(293);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::May) {
        setState(292);
        match(IvionParser::May);
      }
      setState(295);
      match(IvionParser::Play);
      setState(296);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(298);
      player();
      setState(300);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::May) {
        setState(299);
        match(IvionParser::May);
      }
      setState(302);
      match(IvionParser::Play);
      setState(303);
      card();
      setState(304);
      match(IvionParser::For);
      setState(305);
      integer();
      setState(306);
      match(IvionParser::Less);
      setState(307);
      match(IvionParser::Resource);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(309);
      player();
      setState(311);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::May) {
        setState(310);
        match(IvionParser::May);
      }
      setState(313);
      match(IvionParser::Play);
      setState(314);
      card();
      setState(315);
      match(IvionParser::For);
      setState(316);
      match(IvionParser::Free);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HealContext ------------------------------------------------------------------

IvionParser::HealContext::HealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::HealContext::Heal() {
  return getToken(IvionParser::Heal, 0);
}

IvionParser::PlayerContext* IvionParser::HealContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::IntegerContext* IvionParser::HealContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::HealContext::Health() {
  return getToken(IvionParser::Health, 0);
}


size_t IvionParser::HealContext::getRuleIndex() const {
  return IvionParser::RuleHeal;
}


antlrcpp::Any IvionParser::HealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitHeal(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HealContext* IvionParser::heal() {
  HealContext *_localctx = _tracker.createInstance<HealContext>(_ctx, getState());
  enterRule(_localctx, 32, IvionParser::RuleHeal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    match(IvionParser::Heal);
    setState(321);
    player();
    setState(322);
    integer();
    setState(323);
    match(IvionParser::Health);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeSourceContext ------------------------------------------------------------------

IvionParser::RangeSourceContext::RangeSourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::RangeSourceContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::CardController() {
  return getToken(IvionParser::CardController, 0);
}

std::vector<tree::TerminalNode *> IvionParser::RangeSourceContext::Card() {
  return getTokens(IvionParser::Card);
}

tree::TerminalNode* IvionParser::RangeSourceContext::Card(size_t i) {
  return getToken(IvionParser::Card, i);
}

tree::TerminalNode* IvionParser::RangeSourceContext::Travel() {
  return getToken(IvionParser::Travel, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::Draw() {
  return getToken(IvionParser::Draw, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::Range() {
  return getToken(IvionParser::Range, 0);
}

tree::TerminalNode* IvionParser::RangeSourceContext::From() {
  return getToken(IvionParser::From, 0);
}


size_t IvionParser::RangeSourceContext::getRuleIndex() const {
  return IvionParser::RuleRangeSource;
}


antlrcpp::Any IvionParser::RangeSourceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitRangeSource(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RangeSourceContext* IvionParser::rangeSource() {
  RangeSourceContext *_localctx = _tracker.createInstance<RangeSourceContext>(_ctx, getState());
  enterRule(_localctx, 34, IvionParser::RuleRangeSource);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(IvionParser::All);
    setState(326);
    match(IvionParser::Of);
    setState(327);
    match(IvionParser::CardController);
    setState(328);
    match(IvionParser::Card);
    setState(329);
    match(IvionParser::T__2);
    setState(330);
    match(IvionParser::T__3);
    setState(331);
    match(IvionParser::Travel);
    setState(332);
    match(IvionParser::Card);
    setState(333);
    match(IvionParser::That);
    setState(334);
    match(IvionParser::Target);
    setState(335);
    match(IvionParser::A);
    setState(336);
    match(IvionParser::Tile);
    setState(337);
    match(IvionParser::T__2);
    setState(338);
    match(IvionParser::T__4);
    setState(339);
    match(IvionParser::Draw);
    setState(340);
    match(IvionParser::Range);
    setState(341);
    match(IvionParser::From);
    setState(345);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(342);
        matchWildcard(); 
      }
      setState(347);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RevealFromHandContext ------------------------------------------------------------------

IvionParser::RevealFromHandContext::RevealFromHandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::RevealFromHandContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::RevealFromHandContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
}

IvionParser::IntegerContext* IvionParser::RevealFromHandContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::RevealFromHandContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::RevealFromHandContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::RevealFromHandContext::PreviousPlayer() {
  return getToken(IvionParser::PreviousPlayer, 0);
}

tree::TerminalNode* IvionParser::RevealFromHandContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}


size_t IvionParser::RevealFromHandContext::getRuleIndex() const {
  return IvionParser::RuleRevealFromHand;
}


antlrcpp::Any IvionParser::RevealFromHandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitRevealFromHand(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RevealFromHandContext* IvionParser::revealFromHand() {
  RevealFromHandContext *_localctx = _tracker.createInstance<RevealFromHandContext>(_ctx, getState());
  enterRule(_localctx, 36, IvionParser::RuleRevealFromHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    player();
    setState(349);
    match(IvionParser::Reveal);
    setState(350);
    integer();
    setState(351);
    match(IvionParser::Card);
    setState(352);
    match(IvionParser::From);
    setState(353);
    match(IvionParser::PreviousPlayer);
    setState(354);
    match(IvionParser::Hand);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RemoveControlContext ------------------------------------------------------------------

IvionParser::RemoveControlContext::RemoveControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::RemoveControlContext::Remove() {
  return getToken(IvionParser::Remove, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::UpTo() {
  return getToken(IvionParser::UpTo, 0);
}

IvionParser::IntegerContext* IvionParser::RemoveControlContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::Instances() {
  return getToken(IvionParser::Instances, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::Control() {
  return getToken(IvionParser::Control, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::From() {
  return getToken(IvionParser::From, 0);
}

IvionParser::PlayerContext* IvionParser::RemoveControlContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::RemoveControlContext::getRuleIndex() const {
  return IvionParser::RuleRemoveControl;
}


antlrcpp::Any IvionParser::RemoveControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitRemoveControl(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RemoveControlContext* IvionParser::removeControl() {
  RemoveControlContext *_localctx = _tracker.createInstance<RemoveControlContext>(_ctx, getState());
  enterRule(_localctx, 38, IvionParser::RuleRemoveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    match(IvionParser::Remove);
    setState(357);
    match(IvionParser::UpTo);
    setState(358);
    integer();
    setState(359);
    match(IvionParser::Instances);
    setState(360);
    match(IvionParser::Of);
    setState(361);
    match(IvionParser::Control);
    setState(362);
    match(IvionParser::From);
    setState(363);
    player();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StunPlayerContext ------------------------------------------------------------------

IvionParser::StunPlayerContext::StunPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::StunPlayerContext::Stun() {
  return getToken(IvionParser::Stun, 0);
}

IvionParser::PlayerContext* IvionParser::StunPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::StunPlayerContext::getRuleIndex() const {
  return IvionParser::RuleStunPlayer;
}


antlrcpp::Any IvionParser::StunPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitStunPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::StunPlayerContext* IvionParser::stunPlayer() {
  StunPlayerContext *_localctx = _tracker.createInstance<StunPlayerContext>(_ctx, getState());
  enterRule(_localctx, 40, IvionParser::RuleStunPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    match(IvionParser::Stun);
    setState(366);
    player();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EffectPlayerContext ------------------------------------------------------------------

IvionParser::EffectPlayerContext::EffectPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::DamagePlayerContext* IvionParser::EffectPlayerContext::damagePlayer() {
  return getRuleContext<IvionParser::DamagePlayerContext>(0);
}

IvionParser::ControlPlayerContext* IvionParser::EffectPlayerContext::controlPlayer() {
  return getRuleContext<IvionParser::ControlPlayerContext>(0);
}

IvionParser::MovePlayerContext* IvionParser::EffectPlayerContext::movePlayer() {
  return getRuleContext<IvionParser::MovePlayerContext>(0);
}

IvionParser::TravelPlayerContext* IvionParser::EffectPlayerContext::travelPlayer() {
  return getRuleContext<IvionParser::TravelPlayerContext>(0);
}

IvionParser::GainResourceContext* IvionParser::EffectPlayerContext::gainResource() {
  return getRuleContext<IvionParser::GainResourceContext>(0);
}

IvionParser::DrawCardsContext* IvionParser::EffectPlayerContext::drawCards() {
  return getRuleContext<IvionParser::DrawCardsContext>(0);
}

IvionParser::UseSecondWindContext* IvionParser::EffectPlayerContext::useSecondWind() {
  return getRuleContext<IvionParser::UseSecondWindContext>(0);
}

IvionParser::PlayACardContext* IvionParser::EffectPlayerContext::playACard() {
  return getRuleContext<IvionParser::PlayACardContext>(0);
}

IvionParser::HealContext* IvionParser::EffectPlayerContext::heal() {
  return getRuleContext<IvionParser::HealContext>(0);
}

IvionParser::RangeSourceContext* IvionParser::EffectPlayerContext::rangeSource() {
  return getRuleContext<IvionParser::RangeSourceContext>(0);
}

IvionParser::RevealFromHandContext* IvionParser::EffectPlayerContext::revealFromHand() {
  return getRuleContext<IvionParser::RevealFromHandContext>(0);
}

IvionParser::DiscardCardsContext* IvionParser::EffectPlayerContext::discardCards() {
  return getRuleContext<IvionParser::DiscardCardsContext>(0);
}

IvionParser::RemoveControlContext* IvionParser::EffectPlayerContext::removeControl() {
  return getRuleContext<IvionParser::RemoveControlContext>(0);
}

IvionParser::StunPlayerContext* IvionParser::EffectPlayerContext::stunPlayer() {
  return getRuleContext<IvionParser::StunPlayerContext>(0);
}


size_t IvionParser::EffectPlayerContext::getRuleIndex() const {
  return IvionParser::RuleEffectPlayer;
}


antlrcpp::Any IvionParser::EffectPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitEffectPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EffectPlayerContext* IvionParser::effectPlayer() {
  EffectPlayerContext *_localctx = _tracker.createInstance<EffectPlayerContext>(_ctx, getState());
  enterRule(_localctx, 42, IvionParser::RuleEffectPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(382);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(368);
      damagePlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(369);
      controlPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(370);
      movePlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(371);
      travelPlayer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(372);
      gainResource();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(373);
      drawCards();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(374);
      useSecondWind();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(375);
      playACard();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(376);
      heal();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(377);
      rangeSource();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(378);
      revealFromHand();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(379);
      discardCards();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(380);
      removeControl();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(381);
      stunPlayer();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TargetTileContext ------------------------------------------------------------------

IvionParser::TargetTileContext::TargetTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TargetTileContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::TargetTileContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::TargetTileContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::TargetTileContext::UpTo() {
  return getToken(IvionParser::UpTo, 0);
}

IvionParser::IntegerContext* IvionParser::TargetTileContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::TargetTileContext::Empty() {
  return getToken(IvionParser::Empty, 0);
}


size_t IvionParser::TargetTileContext::getRuleIndex() const {
  return IvionParser::RuleTargetTile;
}


antlrcpp::Any IvionParser::TargetTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTargetTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TargetTileContext* IvionParser::targetTile() {
  TargetTileContext *_localctx = _tracker.createInstance<TargetTileContext>(_ctx, getState());
  enterRule(_localctx, 44, IvionParser::RuleTargetTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(400);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(384);
      match(IvionParser::Target);
      setState(385);
      match(IvionParser::Tile);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(386);
      match(IvionParser::Target);
      setState(387);
      match(IvionParser::Another);
      setState(388);
      match(IvionParser::Tile);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(389);
      match(IvionParser::Another);
      setState(390);
      match(IvionParser::Target);
      setState(391);
      match(IvionParser::Tile);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(392);
      match(IvionParser::UpTo);
      setState(393);
      integer();
      setState(394);
      match(IvionParser::Target);
      setState(395);
      match(IvionParser::Tile);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(397);
      match(IvionParser::Target);
      setState(398);
      match(IvionParser::Empty);
      setState(399);
      match(IvionParser::Tile);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectTileContext ------------------------------------------------------------------

IvionParser::SelectTileContext::SelectTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SelectTileContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::SelectTileContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}


size_t IvionParser::SelectTileContext::getRuleIndex() const {
  return IvionParser::RuleSelectTile;
}


antlrcpp::Any IvionParser::SelectTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitSelectTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SelectTileContext* IvionParser::selectTile() {
  SelectTileContext *_localctx = _tracker.createInstance<SelectTileContext>(_ctx, getState());
  enterRule(_localctx, 46, IvionParser::RuleSelectTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(IvionParser::A);
    setState(403);
    match(IvionParser::Tile);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreviousTileContext ------------------------------------------------------------------

IvionParser::PreviousTileContext::PreviousTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PreviousTileContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::PreviousTileContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::PreviousTileContext::It() {
  return getToken(IvionParser::It, 0);
}

tree::TerminalNode* IvionParser::PreviousTileContext::This() {
  return getToken(IvionParser::This, 0);
}


size_t IvionParser::PreviousTileContext::getRuleIndex() const {
  return IvionParser::RulePreviousTile;
}


antlrcpp::Any IvionParser::PreviousTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitPreviousTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PreviousTileContext* IvionParser::previousTile() {
  PreviousTileContext *_localctx = _tracker.createInstance<PreviousTileContext>(_ctx, getState());
  enterRule(_localctx, 48, IvionParser::RulePreviousTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(410);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::That: {
        enterOuterAlt(_localctx, 1);
        setState(405);
        match(IvionParser::That);
        setState(406);
        match(IvionParser::Tile);
        break;
      }

      case IvionParser::It: {
        enterOuterAlt(_localctx, 2);
        setState(407);
        match(IvionParser::It);
        break;
      }

      case IvionParser::This: {
        enterOuterAlt(_localctx, 3);
        setState(408);
        match(IvionParser::This);
        setState(409);
        match(IvionParser::Tile);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TileContext ------------------------------------------------------------------

IvionParser::TileContext::TileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::SelectTileContext* IvionParser::TileContext::selectTile() {
  return getRuleContext<IvionParser::SelectTileContext>(0);
}

IvionParser::TargetTileContext* IvionParser::TileContext::targetTile() {
  return getRuleContext<IvionParser::TargetTileContext>(0);
}

IvionParser::PreviousTileContext* IvionParser::TileContext::previousTile() {
  return getRuleContext<IvionParser::PreviousTileContext>(0);
}


size_t IvionParser::TileContext::getRuleIndex() const {
  return IvionParser::RuleTile;
}


antlrcpp::Any IvionParser::TileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TileContext* IvionParser::tile() {
  TileContext *_localctx = _tracker.createInstance<TileContext>(_ctx, getState());
  enterRule(_localctx, 50, IvionParser::RuleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(415);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::A: {
        enterOuterAlt(_localctx, 1);
        setState(412);
        selectTile();
        break;
      }

      case IvionParser::Target:
      case IvionParser::Another:
      case IvionParser::UpTo: {
        enterOuterAlt(_localctx, 2);
        setState(413);
        targetTile();
        break;
      }

      case IvionParser::That:
      case IvionParser::It:
      case IvionParser::This: {
        enterOuterAlt(_localctx, 3);
        setState(414);
        previousTile();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TargetTerrainContext ------------------------------------------------------------------

IvionParser::TargetTerrainContext::TargetTerrainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TargetTerrainContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::TargetTerrainContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::TargetTerrainContext::Token() {
  return getToken(IvionParser::Token, 0);
}


size_t IvionParser::TargetTerrainContext::getRuleIndex() const {
  return IvionParser::RuleTargetTerrain;
}


antlrcpp::Any IvionParser::TargetTerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTargetTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TargetTerrainContext* IvionParser::targetTerrain() {
  TargetTerrainContext *_localctx = _tracker.createInstance<TargetTerrainContext>(_ctx, getState());
  enterRule(_localctx, 52, IvionParser::RuleTargetTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    match(IvionParser::Target);
    setState(418);
    match(IvionParser::Terrain);
    setState(419);
    match(IvionParser::Token);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerrainContext ------------------------------------------------------------------

IvionParser::TerrainContext::TerrainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::TargetTerrainContext* IvionParser::TerrainContext::targetTerrain() {
  return getRuleContext<IvionParser::TargetTerrainContext>(0);
}


size_t IvionParser::TerrainContext::getRuleIndex() const {
  return IvionParser::RuleTerrain;
}


antlrcpp::Any IvionParser::TerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TerrainContext* IvionParser::terrain() {
  TerrainContext *_localctx = _tracker.createInstance<TerrainContext>(_ctx, getState());
  enterRule(_localctx, 54, IvionParser::RuleTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    targetTerrain();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MakeTerrainContext ------------------------------------------------------------------

IvionParser::MakeTerrainContext::MakeTerrainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Make() {
  return getToken(IvionParser::Make, 0);
}

IvionParser::TileContext* IvionParser::MakeTerrainContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Difficult() {
  return getToken(IvionParser::Difficult, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Enchanted() {
  return getToken(IvionParser::Enchanted, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::In() {
  return getToken(IvionParser::In, 0);
}


size_t IvionParser::MakeTerrainContext::getRuleIndex() const {
  return IvionParser::RuleMakeTerrain;
}


antlrcpp::Any IvionParser::MakeTerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitMakeTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::MakeTerrainContext* IvionParser::makeTerrain() {
  MakeTerrainContext *_localctx = _tracker.createInstance<MakeTerrainContext>(_ctx, getState());
  enterRule(_localctx, 56, IvionParser::RuleMakeTerrain);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(423);
      match(IvionParser::Make);
      setState(424);
      tile();
      setState(425);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Enchanted

      || _la == IvionParser::Difficult)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(426);
      match(IvionParser::Terrain);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(428);
      match(IvionParser::Make);
      setState(432);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Difficult: {
          setState(429);
          match(IvionParser::Difficult);
          break;
        }

        case IvionParser::Enchanted: {
          setState(430);
          match(IvionParser::Enchanted);
          break;
        }

        case IvionParser::Terrain: {
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(434);
      match(IvionParser::Terrain);
      setState(435);
      match(IvionParser::In);
      setState(436);
      tile();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DestroyTerrainContext ------------------------------------------------------------------

IvionParser::DestroyTerrainContext::DestroyTerrainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DestroyTerrainContext::Remove() {
  return getToken(IvionParser::Remove, 0);
}

IvionParser::TerrainContext* IvionParser::DestroyTerrainContext::terrain() {
  return getRuleContext<IvionParser::TerrainContext>(0);
}


size_t IvionParser::DestroyTerrainContext::getRuleIndex() const {
  return IvionParser::RuleDestroyTerrain;
}


antlrcpp::Any IvionParser::DestroyTerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitDestroyTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DestroyTerrainContext* IvionParser::destroyTerrain() {
  DestroyTerrainContext *_localctx = _tracker.createInstance<DestroyTerrainContext>(_ctx, getState());
  enterRule(_localctx, 58, IvionParser::RuleDestroyTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    match(IvionParser::Remove);
    setState(440);
    terrain();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TerrainEffectContext ------------------------------------------------------------------

IvionParser::TerrainEffectContext::TerrainEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::MakeTerrainContext* IvionParser::TerrainEffectContext::makeTerrain() {
  return getRuleContext<IvionParser::MakeTerrainContext>(0);
}

IvionParser::DestroyTerrainContext* IvionParser::TerrainEffectContext::destroyTerrain() {
  return getRuleContext<IvionParser::DestroyTerrainContext>(0);
}


size_t IvionParser::TerrainEffectContext::getRuleIndex() const {
  return IvionParser::RuleTerrainEffect;
}


antlrcpp::Any IvionParser::TerrainEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTerrainEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TerrainEffectContext* IvionParser::terrainEffect() {
  TerrainEffectContext *_localctx = _tracker.createInstance<TerrainEffectContext>(_ctx, getState());
  enterRule(_localctx, 60, IvionParser::RuleTerrainEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(444);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Make: {
        enterOuterAlt(_localctx, 1);
        setState(442);
        makeTerrain();
        break;
      }

      case IvionParser::Remove: {
        enterOuterAlt(_localctx, 2);
        setState(443);
        destroyTerrain();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardFilterPrefixContext ------------------------------------------------------------------

IvionParser::CardFilterPrefixContext::CardFilterPrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardFilterPrefixContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::CardFilterPrefixContext::Non() {
  return getToken(IvionParser::Non, 0);
}

tree::TerminalNode* IvionParser::CardFilterPrefixContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::CardFilterPrefixContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

IvionParser::PlayerContext* IvionParser::CardFilterPrefixContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::CardFilterPrefixContext::First() {
  return getToken(IvionParser::First, 0);
}


size_t IvionParser::CardFilterPrefixContext::getRuleIndex() const {
  return IvionParser::RuleCardFilterPrefix;
}


antlrcpp::Any IvionParser::CardFilterPrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitCardFilterPrefix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardFilterPrefixContext* IvionParser::cardFilterPrefix() {
  CardFilterPrefixContext *_localctx = _tracker.createInstance<CardFilterPrefixContext>(_ctx, getState());
  enterRule(_localctx, 62, IvionParser::RuleCardFilterPrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(453);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(446);
      match(IvionParser::Another);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(447);
      match(IvionParser::Non);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(448);
      match(IvionParser::Attack);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(449);
      match(IvionParser::Ability);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(450);
      player();
      setState(451);
      match(IvionParser::First);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardFilterPostfixContext ------------------------------------------------------------------

IvionParser::CardFilterPostfixContext::CardFilterPostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardFilterPostfixContext::Target() {
  return getToken(IvionParser::Target, 0);
}

IvionParser::PlayerContext* IvionParser::CardFilterPostfixContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::CardFilterPostfixContext::During() {
  return getToken(IvionParser::During, 0);
}

tree::TerminalNode* IvionParser::CardFilterPostfixContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::CardFilterPostfixContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::CardFilterPostfixContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}


size_t IvionParser::CardFilterPostfixContext::getRuleIndex() const {
  return IvionParser::RuleCardFilterPostfix;
}


antlrcpp::Any IvionParser::CardFilterPostfixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitCardFilterPostfix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardFilterPostfixContext* IvionParser::cardFilterPostfix() {
  CardFilterPostfixContext *_localctx = _tracker.createInstance<CardFilterPostfixContext>(_ctx, getState());
  enterRule(_localctx, 64, IvionParser::RuleCardFilterPostfix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(465);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target: {
        enterOuterAlt(_localctx, 1);
        setState(455);
        match(IvionParser::Target);
        setState(456);
        player();
        break;
      }

      case IvionParser::During: {
        enterOuterAlt(_localctx, 2);
        setState(457);
        match(IvionParser::During);
        setState(458);
        player();
        setState(459);
        match(IvionParser::Turn);
        break;
      }

      case IvionParser::From: {
        enterOuterAlt(_localctx, 3);
        setState(461);
        match(IvionParser::From);
        setState(462);
        player();
        setState(463);
        match(IvionParser::Discard);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TargetCardContext ------------------------------------------------------------------

IvionParser::TargetCardContext::TargetCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TargetCardContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::TargetCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::TargetCardContext::UpTo() {
  return getToken(IvionParser::UpTo, 0);
}

IvionParser::IntegerContext* IvionParser::TargetCardContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

std::vector<IvionParser::CardFilterPrefixContext *> IvionParser::TargetCardContext::cardFilterPrefix() {
  return getRuleContexts<IvionParser::CardFilterPrefixContext>();
}

IvionParser::CardFilterPrefixContext* IvionParser::TargetCardContext::cardFilterPrefix(size_t i) {
  return getRuleContext<IvionParser::CardFilterPrefixContext>(i);
}

std::vector<IvionParser::CardFilterPostfixContext *> IvionParser::TargetCardContext::cardFilterPostfix() {
  return getRuleContexts<IvionParser::CardFilterPostfixContext>();
}

IvionParser::CardFilterPostfixContext* IvionParser::TargetCardContext::cardFilterPostfix(size_t i) {
  return getRuleContext<IvionParser::CardFilterPostfixContext>(i);
}


size_t IvionParser::TargetCardContext::getRuleIndex() const {
  return IvionParser::RuleTargetCard;
}


antlrcpp::Any IvionParser::TargetCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTargetCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TargetCardContext* IvionParser::targetCard() {
  TargetCardContext *_localctx = _tracker.createInstance<TargetCardContext>(_ctx, getState());
  enterRule(_localctx, 66, IvionParser::RuleTargetCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(469);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(467);
      match(IvionParser::UpTo);
      setState(468);
      integer();
      break;
    }

    }
    setState(474);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(471);
        cardFilterPrefix(); 
      }
      setState(476);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(477);
    match(IvionParser::Target);
    setState(481);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Player)
      | (1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::CardController)
      | (1ULL << IvionParser::PreviousPlayer)
      | (1ULL << IvionParser::Its)
      | (1ULL << IvionParser::UpTo))) != 0) || ((((_la - 100) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 100)) & ((1ULL << (IvionParser::Non - 100))
      | (1ULL << (IvionParser::Ability - 100))
      | (1ULL << (IvionParser::Attack - 100))
      | (1ULL << (IvionParser::A - 100)))) != 0)) {
      setState(478);
      cardFilterPrefix();
      setState(483);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(484);
    match(IvionParser::Card);
    setState(488);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(485);
        cardFilterPostfix(); 
      }
      setState(490);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectCardContext ------------------------------------------------------------------

IvionParser::SelectCardContext::SelectCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IntegerContext* IvionParser::SelectCardContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::SelectCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

std::vector<IvionParser::CardFilterPrefixContext *> IvionParser::SelectCardContext::cardFilterPrefix() {
  return getRuleContexts<IvionParser::CardFilterPrefixContext>();
}

IvionParser::CardFilterPrefixContext* IvionParser::SelectCardContext::cardFilterPrefix(size_t i) {
  return getRuleContext<IvionParser::CardFilterPrefixContext>(i);
}

std::vector<IvionParser::CardFilterPostfixContext *> IvionParser::SelectCardContext::cardFilterPostfix() {
  return getRuleContexts<IvionParser::CardFilterPostfixContext>();
}

IvionParser::CardFilterPostfixContext* IvionParser::SelectCardContext::cardFilterPostfix(size_t i) {
  return getRuleContext<IvionParser::CardFilterPostfixContext>(i);
}

tree::TerminalNode* IvionParser::SelectCardContext::A() {
  return getToken(IvionParser::A, 0);
}


size_t IvionParser::SelectCardContext::getRuleIndex() const {
  return IvionParser::RuleSelectCard;
}


antlrcpp::Any IvionParser::SelectCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitSelectCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SelectCardContext* IvionParser::selectCard() {
  SelectCardContext *_localctx = _tracker.createInstance<SelectCardContext>(_ctx, getState());
  enterRule(_localctx, 68, IvionParser::RuleSelectCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(521);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(491);
      integer();
      setState(495);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::Target)
        | (1ULL << IvionParser::Player)
        | (1ULL << IvionParser::Enemy)
        | (1ULL << IvionParser::Another)
        | (1ULL << IvionParser::CardController)
        | (1ULL << IvionParser::PreviousPlayer)
        | (1ULL << IvionParser::Its)
        | (1ULL << IvionParser::UpTo))) != 0) || ((((_la - 100) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 100)) & ((1ULL << (IvionParser::Non - 100))
        | (1ULL << (IvionParser::Ability - 100))
        | (1ULL << (IvionParser::Attack - 100))
        | (1ULL << (IvionParser::A - 100)))) != 0)) {
        setState(492);
        cardFilterPrefix();
        setState(497);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(498);
      match(IvionParser::Card);
      setState(502);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(499);
          cardFilterPostfix(); 
        }
        setState(504);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(506);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
      case 1: {
        setState(505);
        match(IvionParser::A);
        break;
      }

      }
      setState(511);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::Target)
        | (1ULL << IvionParser::Player)
        | (1ULL << IvionParser::Enemy)
        | (1ULL << IvionParser::Another)
        | (1ULL << IvionParser::CardController)
        | (1ULL << IvionParser::PreviousPlayer)
        | (1ULL << IvionParser::Its)
        | (1ULL << IvionParser::UpTo))) != 0) || ((((_la - 100) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 100)) & ((1ULL << (IvionParser::Non - 100))
        | (1ULL << (IvionParser::Ability - 100))
        | (1ULL << (IvionParser::Attack - 100))
        | (1ULL << (IvionParser::A - 100)))) != 0)) {
        setState(508);
        cardFilterPrefix();
        setState(513);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(514);
      match(IvionParser::Card);
      setState(518);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(515);
          cardFilterPostfix(); 
        }
        setState(520);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreviousCardContext ------------------------------------------------------------------

IvionParser::PreviousCardContext::PreviousCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PreviousCardContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::PreviousCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}


size_t IvionParser::PreviousCardContext::getRuleIndex() const {
  return IvionParser::RulePreviousCard;
}


antlrcpp::Any IvionParser::PreviousCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitPreviousCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PreviousCardContext* IvionParser::previousCard() {
  PreviousCardContext *_localctx = _tracker.createInstance<PreviousCardContext>(_ctx, getState());
  enterRule(_localctx, 70, IvionParser::RulePreviousCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(IvionParser::That);
    setState(524);
    match(IvionParser::Card);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopOfStackContext ------------------------------------------------------------------

IvionParser::TopOfStackContext::TopOfStackContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TopOfStackContext::Top() {
  return getToken(IvionParser::Top, 0);
}

tree::TerminalNode* IvionParser::TopOfStackContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::TopOfStackContext::The() {
  return getToken(IvionParser::The, 0);
}


size_t IvionParser::TopOfStackContext::getRuleIndex() const {
  return IvionParser::RuleTopOfStack;
}


antlrcpp::Any IvionParser::TopOfStackContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTopOfStack(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TopOfStackContext* IvionParser::topOfStack() {
  TopOfStackContext *_localctx = _tracker.createInstance<TopOfStackContext>(_ctx, getState());
  enterRule(_localctx, 72, IvionParser::RuleTopOfStack);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(526);
    match(IvionParser::Top);
    setState(527);
    match(IvionParser::Of);
    setState(528);
    match(IvionParser::The);
    setState(529);
    match(IvionParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BottomOfDeckContext ------------------------------------------------------------------

IvionParser::BottomOfDeckContext::BottomOfDeckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> IvionParser::BottomOfDeckContext::The() {
  return getTokens(IvionParser::The);
}

tree::TerminalNode* IvionParser::BottomOfDeckContext::The(size_t i) {
  return getToken(IvionParser::The, i);
}

tree::TerminalNode* IvionParser::BottomOfDeckContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::BottomOfDeckContext::On() {
  return getToken(IvionParser::On, 0);
}

tree::TerminalNode* IvionParser::BottomOfDeckContext::Bottom() {
  return getToken(IvionParser::Bottom, 0);
}

tree::TerminalNode* IvionParser::BottomOfDeckContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::PlayerContext* IvionParser::BottomOfDeckContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::BottomOfDeckContext::Deck() {
  return getToken(IvionParser::Deck, 0);
}


size_t IvionParser::BottomOfDeckContext::getRuleIndex() const {
  return IvionParser::RuleBottomOfDeck;
}


antlrcpp::Any IvionParser::BottomOfDeckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitBottomOfDeck(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::BottomOfDeckContext* IvionParser::bottomOfDeck() {
  BottomOfDeckContext *_localctx = _tracker.createInstance<BottomOfDeckContext>(_ctx, getState());
  enterRule(_localctx, 74, IvionParser::RuleBottomOfDeck);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(547);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(531);
      match(IvionParser::The);
      setState(532);
      match(IvionParser::Card);
      setState(533);
      match(IvionParser::On);
      setState(534);
      match(IvionParser::The);
      setState(535);
      match(IvionParser::Bottom);
      setState(536);
      match(IvionParser::Of);
      setState(537);
      player();
      setState(538);
      match(IvionParser::Deck);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(540);
      match(IvionParser::The);
      setState(541);
      match(IvionParser::Bottom);
      setState(542);
      match(IvionParser::Card);
      setState(543);
      match(IvionParser::Of);
      setState(544);
      player();
      setState(545);
      match(IvionParser::Deck);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopOfDeckContext ------------------------------------------------------------------

IvionParser::TopOfDeckContext::TopOfDeckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> IvionParser::TopOfDeckContext::The() {
  return getTokens(IvionParser::The);
}

tree::TerminalNode* IvionParser::TopOfDeckContext::The(size_t i) {
  return getToken(IvionParser::The, i);
}

tree::TerminalNode* IvionParser::TopOfDeckContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::TopOfDeckContext::On() {
  return getToken(IvionParser::On, 0);
}

tree::TerminalNode* IvionParser::TopOfDeckContext::Top() {
  return getToken(IvionParser::Top, 0);
}

tree::TerminalNode* IvionParser::TopOfDeckContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::PlayerContext* IvionParser::TopOfDeckContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::TopOfDeckContext::Deck() {
  return getToken(IvionParser::Deck, 0);
}


size_t IvionParser::TopOfDeckContext::getRuleIndex() const {
  return IvionParser::RuleTopOfDeck;
}


antlrcpp::Any IvionParser::TopOfDeckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTopOfDeck(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TopOfDeckContext* IvionParser::topOfDeck() {
  TopOfDeckContext *_localctx = _tracker.createInstance<TopOfDeckContext>(_ctx, getState());
  enterRule(_localctx, 76, IvionParser::RuleTopOfDeck);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(565);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(549);
      match(IvionParser::The);
      setState(550);
      match(IvionParser::Card);
      setState(551);
      match(IvionParser::On);
      setState(552);
      match(IvionParser::The);
      setState(553);
      match(IvionParser::Top);
      setState(554);
      match(IvionParser::Of);
      setState(555);
      player();
      setState(556);
      match(IvionParser::Deck);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(558);
      match(IvionParser::The);
      setState(559);
      match(IvionParser::Top);
      setState(560);
      match(IvionParser::Card);
      setState(561);
      match(IvionParser::Of);
      setState(562);
      player();
      setState(563);
      match(IvionParser::Deck);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HandContext ------------------------------------------------------------------

IvionParser::HandContext::HandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::HandContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::HandContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}


size_t IvionParser::HandContext::getRuleIndex() const {
  return IvionParser::RuleHand;
}


antlrcpp::Any IvionParser::HandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitHand(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HandContext* IvionParser::hand() {
  HandContext *_localctx = _tracker.createInstance<HandContext>(_ctx, getState());
  enterRule(_localctx, 78, IvionParser::RuleHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    player();
    setState(568);
    match(IvionParser::Hand);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardContext ------------------------------------------------------------------

IvionParser::CardContext::CardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PreviousCardContext* IvionParser::CardContext::previousCard() {
  return getRuleContext<IvionParser::PreviousCardContext>(0);
}

IvionParser::TargetCardContext* IvionParser::CardContext::targetCard() {
  return getRuleContext<IvionParser::TargetCardContext>(0);
}

IvionParser::SelectCardContext* IvionParser::CardContext::selectCard() {
  return getRuleContext<IvionParser::SelectCardContext>(0);
}

IvionParser::TopOfStackContext* IvionParser::CardContext::topOfStack() {
  return getRuleContext<IvionParser::TopOfStackContext>(0);
}

IvionParser::BottomOfDeckContext* IvionParser::CardContext::bottomOfDeck() {
  return getRuleContext<IvionParser::BottomOfDeckContext>(0);
}

IvionParser::TopOfDeckContext* IvionParser::CardContext::topOfDeck() {
  return getRuleContext<IvionParser::TopOfDeckContext>(0);
}

tree::TerminalNode* IvionParser::CardContext::From() {
  return getToken(IvionParser::From, 0);
}

IvionParser::HandContext* IvionParser::CardContext::hand() {
  return getRuleContext<IvionParser::HandContext>(0);
}


size_t IvionParser::CardContext::getRuleIndex() const {
  return IvionParser::RuleCard;
}


antlrcpp::Any IvionParser::CardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardContext* IvionParser::card() {
  CardContext *_localctx = _tracker.createInstance<CardContext>(_ctx, getState());
  enterRule(_localctx, 80, IvionParser::RuleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(578);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(570);
      previousCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(571);
      targetCard();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(572);
      selectCard();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(573);
      topOfStack();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(574);
      bottomOfDeck();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(575);
      topOfDeck();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(576);
      match(IvionParser::From);
      setState(577);
      hand();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttachCardContext ------------------------------------------------------------------

IvionParser::AttachCardContext::AttachCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::AttachCardContext::Attach() {
  return getToken(IvionParser::Attach, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::PlayerContext* IvionParser::AttachCardContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::TileContext* IvionParser::AttachCardContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Until() {
  return getToken(IvionParser::Until, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::End() {
  return getToken(IvionParser::End, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::AttachCardContext::getRuleIndex() const {
  return IvionParser::RuleAttachCard;
}


antlrcpp::Any IvionParser::AttachCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitAttachCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AttachCardContext* IvionParser::attachCard() {
  AttachCardContext *_localctx = _tracker.createInstance<AttachCardContext>(_ctx, getState());
  enterRule(_localctx, 82, IvionParser::RuleAttachCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(594);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(580);
      match(IvionParser::Attach);
      setState(581);
      match(IvionParser::To);
      setState(582);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(583);
      match(IvionParser::Attach);
      setState(584);
      match(IvionParser::To);
      setState(585);
      tile();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(586);
      match(IvionParser::Attach);
      setState(587);
      match(IvionParser::To);
      setState(588);
      tile();
      setState(589);
      match(IvionParser::Until);
      setState(590);
      match(IvionParser::End);
      setState(591);
      match(IvionParser::Of);
      setState(592);
      match(IvionParser::Turn);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MetaCounterCardContext ------------------------------------------------------------------

IvionParser::MetaCounterCardContext::MetaCounterCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::MetaCounterCardContext::Meta() {
  return getToken(IvionParser::Meta, 0);
}

tree::TerminalNode* IvionParser::MetaCounterCardContext::Counter() {
  return getToken(IvionParser::Counter, 0);
}

IvionParser::CardContext* IvionParser::MetaCounterCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}


size_t IvionParser::MetaCounterCardContext::getRuleIndex() const {
  return IvionParser::RuleMetaCounterCard;
}


antlrcpp::Any IvionParser::MetaCounterCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitMetaCounterCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::MetaCounterCardContext* IvionParser::metaCounterCard() {
  MetaCounterCardContext *_localctx = _tracker.createInstance<MetaCounterCardContext>(_ctx, getState());
  enterRule(_localctx, 84, IvionParser::RuleMetaCounterCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(596);
    match(IvionParser::Meta);
    setState(597);
    match(IvionParser::Counter);
    setState(598);
    card();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CounterCardContext ------------------------------------------------------------------

IvionParser::CounterCardContext::CounterCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CounterCardContext::Counter() {
  return getToken(IvionParser::Counter, 0);
}

IvionParser::CardContext* IvionParser::CounterCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Unless() {
  return getToken(IvionParser::Unless, 0);
}

IvionParser::PlayerContext* IvionParser::CounterCardContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Pays() {
  return getToken(IvionParser::Pays, 0);
}

IvionParser::IntegerContext* IvionParser::CounterCardContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}


size_t IvionParser::CounterCardContext::getRuleIndex() const {
  return IvionParser::RuleCounterCard;
}


antlrcpp::Any IvionParser::CounterCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitCounterCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CounterCardContext* IvionParser::counterCard() {
  CounterCardContext *_localctx = _tracker.createInstance<CounterCardContext>(_ctx, getState());
  enterRule(_localctx, 86, IvionParser::RuleCounterCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    match(IvionParser::Counter);
    setState(601);
    card();
    setState(602);
    match(IvionParser::Unless);
    setState(603);
    player();
    setState(604);
    match(IvionParser::Pays);
    setState(605);
    integer();
    setState(606);
    match(IvionParser::Resource);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DestroyCardContext ------------------------------------------------------------------

IvionParser::DestroyCardContext::DestroyCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DestroyCardContext::Destroy() {
  return getToken(IvionParser::Destroy, 0);
}

IvionParser::CardContext* IvionParser::DestroyCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}


size_t IvionParser::DestroyCardContext::getRuleIndex() const {
  return IvionParser::RuleDestroyCard;
}


antlrcpp::Any IvionParser::DestroyCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitDestroyCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DestroyCardContext* IvionParser::destroyCard() {
  DestroyCardContext *_localctx = _tracker.createInstance<DestroyCardContext>(_ctx, getState());
  enterRule(_localctx, 88, IvionParser::RuleDestroyCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    match(IvionParser::Destroy);
    setState(609);
    card();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardGainsTraitContext ------------------------------------------------------------------

IvionParser::CardGainsTraitContext::CardGainsTraitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CardContext* IvionParser::CardGainsTraitContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

tree::TerminalNode* IvionParser::CardGainsTraitContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

tree::TerminalNode* IvionParser::CardGainsTraitContext::Heroic() {
  return getToken(IvionParser::Heroic, 0);
}


size_t IvionParser::CardGainsTraitContext::getRuleIndex() const {
  return IvionParser::RuleCardGainsTrait;
}


antlrcpp::Any IvionParser::CardGainsTraitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitCardGainsTrait(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardGainsTraitContext* IvionParser::cardGainsTrait() {
  CardGainsTraitContext *_localctx = _tracker.createInstance<CardGainsTraitContext>(_ctx, getState());
  enterRule(_localctx, 90, IvionParser::RuleCardGainsTrait);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    card();
    setState(612);
    match(IvionParser::Gain);

    setState(613);
    match(IvionParser::Heroic);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PutCardContext ------------------------------------------------------------------

IvionParser::PutCardContext::PutCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PutCardContext::Put() {
  return getToken(IvionParser::Put, 0);
}

IvionParser::CardContext* IvionParser::PutCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

tree::TerminalNode* IvionParser::PutCardContext::On() {
  return getToken(IvionParser::On, 0);
}

IvionParser::BottomOfDeckContext* IvionParser::PutCardContext::bottomOfDeck() {
  return getRuleContext<IvionParser::BottomOfDeckContext>(0);
}

IvionParser::TopOfDeckContext* IvionParser::PutCardContext::topOfDeck() {
  return getRuleContext<IvionParser::TopOfDeckContext>(0);
}

IvionParser::HandContext* IvionParser::PutCardContext::hand() {
  return getRuleContext<IvionParser::HandContext>(0);
}


size_t IvionParser::PutCardContext::getRuleIndex() const {
  return IvionParser::RulePutCard;
}


antlrcpp::Any IvionParser::PutCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitPutCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PutCardContext* IvionParser::putCard() {
  PutCardContext *_localctx = _tracker.createInstance<PutCardContext>(_ctx, getState());
  enterRule(_localctx, 92, IvionParser::RulePutCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    match(IvionParser::Put);
    setState(616);
    card();
    setState(622);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::On: {
        setState(617);
        match(IvionParser::On);
        setState(618);
        bottomOfDeck();
        break;
      }

      case IvionParser::The: {
        setState(619);
        topOfDeck();
        break;
      }

      case IvionParser::T__6: {
        setState(620);
        match(IvionParser::T__6);
        setState(621);
        hand();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HardcastContext ------------------------------------------------------------------

IvionParser::HardcastContext::HardcastContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::HardcastContext::Hardcast() {
  return getToken(IvionParser::Hardcast, 0);
}


size_t IvionParser::HardcastContext::getRuleIndex() const {
  return IvionParser::RuleHardcast;
}


antlrcpp::Any IvionParser::HardcastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitHardcast(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HardcastContext* IvionParser::hardcast() {
  HardcastContext *_localctx = _tracker.createInstance<HardcastContext>(_ctx, getState());
  enterRule(_localctx, 94, IvionParser::RuleHardcast);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
    match(IvionParser::Hardcast);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResolveCardContext ------------------------------------------------------------------

IvionParser::ResolveCardContext::ResolveCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ResolveCardContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}

IvionParser::CardContext* IvionParser::ResolveCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}


size_t IvionParser::ResolveCardContext::getRuleIndex() const {
  return IvionParser::RuleResolveCard;
}


antlrcpp::Any IvionParser::ResolveCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitResolveCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ResolveCardContext* IvionParser::resolveCard() {
  ResolveCardContext *_localctx = _tracker.createInstance<ResolveCardContext>(_ctx, getState());
  enterRule(_localctx, 96, IvionParser::RuleResolveCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(629);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(626);
      match(IvionParser::Resolve);
      setState(627);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(628);
      match(IvionParser::Resolve);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardEffectContext ------------------------------------------------------------------

IvionParser::CardEffectContext::CardEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::MetaCounterCardContext* IvionParser::CardEffectContext::metaCounterCard() {
  return getRuleContext<IvionParser::MetaCounterCardContext>(0);
}

IvionParser::CounterCardContext* IvionParser::CardEffectContext::counterCard() {
  return getRuleContext<IvionParser::CounterCardContext>(0);
}

IvionParser::DestroyCardContext* IvionParser::CardEffectContext::destroyCard() {
  return getRuleContext<IvionParser::DestroyCardContext>(0);
}

IvionParser::AttachCardContext* IvionParser::CardEffectContext::attachCard() {
  return getRuleContext<IvionParser::AttachCardContext>(0);
}

IvionParser::PutCardContext* IvionParser::CardEffectContext::putCard() {
  return getRuleContext<IvionParser::PutCardContext>(0);
}

IvionParser::CardGainsTraitContext* IvionParser::CardEffectContext::cardGainsTrait() {
  return getRuleContext<IvionParser::CardGainsTraitContext>(0);
}

IvionParser::HardcastContext* IvionParser::CardEffectContext::hardcast() {
  return getRuleContext<IvionParser::HardcastContext>(0);
}

IvionParser::ResolveCardContext* IvionParser::CardEffectContext::resolveCard() {
  return getRuleContext<IvionParser::ResolveCardContext>(0);
}


size_t IvionParser::CardEffectContext::getRuleIndex() const {
  return IvionParser::RuleCardEffect;
}


antlrcpp::Any IvionParser::CardEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitCardEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardEffectContext* IvionParser::cardEffect() {
  CardEffectContext *_localctx = _tracker.createInstance<CardEffectContext>(_ctx, getState());
  enterRule(_localctx, 98, IvionParser::RuleCardEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(639);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Meta: {
        enterOuterAlt(_localctx, 1);
        setState(631);
        metaCounterCard();
        break;
      }

      case IvionParser::Counter: {
        enterOuterAlt(_localctx, 2);
        setState(632);
        counterCard();
        break;
      }

      case IvionParser::Destroy: {
        enterOuterAlt(_localctx, 3);
        setState(633);
        destroyCard();
        break;
      }

      case IvionParser::Attach: {
        enterOuterAlt(_localctx, 4);
        setState(634);
        attachCard();
        break;
      }

      case IvionParser::Put: {
        enterOuterAlt(_localctx, 5);
        setState(635);
        putCard();
        break;
      }

      case IvionParser::Target:
      case IvionParser::Player:
      case IvionParser::Enemy:
      case IvionParser::Another:
      case IvionParser::CardController:
      case IvionParser::PreviousPlayer:
      case IvionParser::Its:
      case IvionParser::UpTo:
      case IvionParser::Card:
      case IvionParser::That:
      case IvionParser::Top:
      case IvionParser::From:
      case IvionParser::Non:
      case IvionParser::Ability:
      case IvionParser::Attack:
      case IvionParser::A:
      case IvionParser::The:
      case IvionParser::One:
      case IvionParser::Two:
      case IvionParser::Three:
      case IvionParser::Four:
      case IvionParser::Five:
      case IvionParser::Six:
      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 6);
        setState(636);
        cardGainsTrait();
        break;
      }

      case IvionParser::Hardcast: {
        enterOuterAlt(_localctx, 7);
        setState(637);
        hardcast();
        break;
      }

      case IvionParser::Resolve: {
        enterOuterAlt(_localctx, 8);
        setState(638);
        resolveCard();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TurnTriggerContext ------------------------------------------------------------------

IvionParser::TurnTriggerContext::TurnTriggerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TurnTriggerContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::PlayerContext* IvionParser::TurnTriggerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::Start() {
  return getToken(IvionParser::Start, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::End() {
  return getToken(IvionParser::End, 0);
}


size_t IvionParser::TurnTriggerContext::getRuleIndex() const {
  return IvionParser::RuleTurnTrigger;
}


antlrcpp::Any IvionParser::TurnTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTurnTrigger(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TurnTriggerContext* IvionParser::turnTrigger() {
  TurnTriggerContext *_localctx = _tracker.createInstance<TurnTriggerContext>(_ctx, getState());
  enterRule(_localctx, 100, IvionParser::RuleTurnTrigger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(641);
    match(IvionParser::At);
    setState(642);
    match(IvionParser::The);
    setState(643);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Start

    || _la == IvionParser::End)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(644);
    match(IvionParser::Of);
    setState(645);
    player();
    setState(646);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EffectTriggerContext ------------------------------------------------------------------

IvionParser::EffectTriggerContext::EffectTriggerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::EffectTriggerContext::After() {
  return getToken(IvionParser::After, 0);
}

IvionParser::PlayerContext* IvionParser::EffectTriggerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::EffectContext* IvionParser::EffectTriggerContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

IvionParser::CardContext* IvionParser::EffectTriggerContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}


size_t IvionParser::EffectTriggerContext::getRuleIndex() const {
  return IvionParser::RuleEffectTrigger;
}


antlrcpp::Any IvionParser::EffectTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitEffectTrigger(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EffectTriggerContext* IvionParser::effectTrigger() {
  EffectTriggerContext *_localctx = _tracker.createInstance<EffectTriggerContext>(_ctx, getState());
  enterRule(_localctx, 102, IvionParser::RuleEffectTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(656);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(648);
      match(IvionParser::After);
      setState(649);
      player();
      setState(650);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(652);
      match(IvionParser::After);
      setState(653);
      card();
      setState(654);
      effect();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TileTrapContext ------------------------------------------------------------------

IvionParser::TileTrapContext::TileTrapContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TileTrapContext::After() {
  return getToken(IvionParser::After, 0);
}

IvionParser::PlayerContext* IvionParser::TileTrapContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::TileTrapContext::Enters() {
  return getToken(IvionParser::Enters, 0);
}

IvionParser::TileContext* IvionParser::TileTrapContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}


size_t IvionParser::TileTrapContext::getRuleIndex() const {
  return IvionParser::RuleTileTrap;
}


antlrcpp::Any IvionParser::TileTrapContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTileTrap(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TileTrapContext* IvionParser::tileTrap() {
  TileTrapContext *_localctx = _tracker.createInstance<TileTrapContext>(_ctx, getState());
  enterRule(_localctx, 104, IvionParser::RuleTileTrap);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(658);
    match(IvionParser::After);
    setState(659);
    player();
    setState(660);
    match(IvionParser::Enters);
    setState(661);
    tile();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriggerEffectContext ------------------------------------------------------------------

IvionParser::TriggerEffectContext::TriggerEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::EffectTriggerContext* IvionParser::TriggerEffectContext::effectTrigger() {
  return getRuleContext<IvionParser::EffectTriggerContext>(0);
}

IvionParser::EffectContext* IvionParser::TriggerEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

IvionParser::TurnTriggerContext* IvionParser::TriggerEffectContext::turnTrigger() {
  return getRuleContext<IvionParser::TurnTriggerContext>(0);
}

IvionParser::TileTrapContext* IvionParser::TriggerEffectContext::tileTrap() {
  return getRuleContext<IvionParser::TileTrapContext>(0);
}


size_t IvionParser::TriggerEffectContext::getRuleIndex() const {
  return IvionParser::RuleTriggerEffect;
}


antlrcpp::Any IvionParser::TriggerEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTriggerEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TriggerEffectContext* IvionParser::triggerEffect() {
  TriggerEffectContext *_localctx = _tracker.createInstance<TriggerEffectContext>(_ctx, getState());
  enterRule(_localctx, 106, IvionParser::RuleTriggerEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(674);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(663);
      effectTrigger();
      setState(664);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(666);
      turnTrigger();
      setState(667);
      match(IvionParser::T__2);
      setState(668);
      effect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(670);
      tileTrap();
      setState(671);
      match(IvionParser::T__2);
      setState(672);
      effect();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BreachContext ------------------------------------------------------------------

IvionParser::BreachContext::BreachContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IvionParser::BreachContext::getRuleIndex() const {
  return IvionParser::RuleBreach;
}


antlrcpp::Any IvionParser::BreachContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitBreach(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::BreachContext* IvionParser::breach() {
  BreachContext *_localctx = _tracker.createInstance<BreachContext>(_ctx, getState());
  enterRule(_localctx, 108, IvionParser::RuleBreach);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(676);
    match(IvionParser::T__7);
    setState(677);
    match(IvionParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdvantageContext ------------------------------------------------------------------

IvionParser::AdvantageContext::AdvantageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IvionParser::AdvantageContext::getRuleIndex() const {
  return IvionParser::RuleAdvantage;
}


antlrcpp::Any IvionParser::AdvantageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitAdvantage(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AdvantageContext* IvionParser::advantage() {
  AdvantageContext *_localctx = _tracker.createInstance<AdvantageContext>(_ctx, getState());
  enterRule(_localctx, 110, IvionParser::RuleAdvantage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(679);
    match(IvionParser::T__9);
    setState(680);
    match(IvionParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FrenzyContext ------------------------------------------------------------------

IvionParser::FrenzyContext::FrenzyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IvionParser::FrenzyContext::getRuleIndex() const {
  return IvionParser::RuleFrenzy;
}


antlrcpp::Any IvionParser::FrenzyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitFrenzy(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::FrenzyContext* IvionParser::frenzy() {
  FrenzyContext *_localctx = _tracker.createInstance<FrenzyContext>(_ctx, getState());
  enterRule(_localctx, 112, IvionParser::RuleFrenzy);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(682);
    match(IvionParser::T__10);
    setState(683);
    match(IvionParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResolvedContext ------------------------------------------------------------------

IvionParser::ResolvedContext::ResolvedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ResolvedContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::PlayerContext* IvionParser::ResolvedContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::ResolvedContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}

tree::TerminalNode* IvionParser::ResolvedContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::ResolvedContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::ResolvedContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::ResolvedContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::ResolvedContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::ResolvedContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

tree::TerminalNode* IvionParser::ResolvedContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::ResolvedContext::Non() {
  return getToken(IvionParser::Non, 0);
}


size_t IvionParser::ResolvedContext::getRuleIndex() const {
  return IvionParser::RuleResolved;
}


antlrcpp::Any IvionParser::ResolvedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitResolved(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ResolvedContext* IvionParser::resolved() {
  ResolvedContext *_localctx = _tracker.createInstance<ResolvedContext>(_ctx, getState());
  enterRule(_localctx, 114, IvionParser::RuleResolved);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(685);
    match(IvionParser::If);
    setState(686);
    player();
    setState(687);
    match(IvionParser::Resolve);
    setState(688);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Another || _la == IvionParser::A)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(690);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(689);
      match(IvionParser::Non);
    }
    setState(692);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Ability

    || _la == IvionParser::Attack)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(693);
    match(IvionParser::Card);
    setState(694);
    match(IvionParser::This);
    setState(695);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsedSecondWindContext ------------------------------------------------------------------

IvionParser::UsedSecondWindContext::UsedSecondWindContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::UsedSecondWindContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::PlayerContext* IvionParser::UsedSecondWindContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::UsedSecondWindContext::Already() {
  return getToken(IvionParser::Already, 0);
}

tree::TerminalNode* IvionParser::UsedSecondWindContext::Used() {
  return getToken(IvionParser::Used, 0);
}

tree::TerminalNode* IvionParser::UsedSecondWindContext::SecondWind() {
  return getToken(IvionParser::SecondWind, 0);
}

tree::TerminalNode* IvionParser::UsedSecondWindContext::CardController() {
  return getToken(IvionParser::CardController, 0);
}

tree::TerminalNode* IvionParser::UsedSecondWindContext::PreviousPlayer() {
  return getToken(IvionParser::PreviousPlayer, 0);
}


size_t IvionParser::UsedSecondWindContext::getRuleIndex() const {
  return IvionParser::RuleUsedSecondWind;
}


antlrcpp::Any IvionParser::UsedSecondWindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitUsedSecondWind(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::UsedSecondWindContext* IvionParser::usedSecondWind() {
  UsedSecondWindContext *_localctx = _tracker.createInstance<UsedSecondWindContext>(_ctx, getState());
  enterRule(_localctx, 116, IvionParser::RuleUsedSecondWind);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(697);
    match(IvionParser::If);
    setState(698);
    player();
    setState(699);
    match(IvionParser::Already);
    setState(700);
    match(IvionParser::Used);
    setState(701);
    _la = _input->LA(1);
    if (!(_la == IvionParser::CardController

    || _la == IvionParser::PreviousPlayer)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(702);
    match(IvionParser::SecondWind);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StunSuccessContext ------------------------------------------------------------------

IvionParser::StunSuccessContext::StunSuccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::StunSuccessContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::StunSuccessContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::StunSuccessContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::StunSuccessContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::StunSuccessContext::Removed() {
  return getToken(IvionParser::Removed, 0);
}

tree::TerminalNode* IvionParser::StunSuccessContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::StunSuccessContext::Way() {
  return getToken(IvionParser::Way, 0);
}


size_t IvionParser::StunSuccessContext::getRuleIndex() const {
  return IvionParser::RuleStunSuccess;
}


antlrcpp::Any IvionParser::StunSuccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitStunSuccess(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::StunSuccessContext* IvionParser::stunSuccess() {
  StunSuccessContext *_localctx = _tracker.createInstance<StunSuccessContext>(_ctx, getState());
  enterRule(_localctx, 118, IvionParser::RuleStunSuccess);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(704);
    match(IvionParser::If);
    setState(705);
    match(IvionParser::A);
    setState(706);
    match(IvionParser::Resource);
    setState(707);
    match(IvionParser::Is);
    setState(708);
    match(IvionParser::Removed);
    setState(709);
    match(IvionParser::This);
    setState(710);
    match(IvionParser::Way);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfConditionalContext ------------------------------------------------------------------

IvionParser::IfConditionalContext::IfConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfConditionalContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::IfConditionalContext::Do() {
  return getToken(IvionParser::Do, 0);
}

tree::TerminalNode* IvionParser::IfConditionalContext::CardController() {
  return getToken(IvionParser::CardController, 0);
}

tree::TerminalNode* IvionParser::IfConditionalContext::PreviousPlayer() {
  return getToken(IvionParser::PreviousPlayer, 0);
}

IvionParser::CardContext* IvionParser::IfConditionalContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

tree::TerminalNode* IvionParser::IfConditionalContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::IfConditionalContext::Counter() {
  return getToken(IvionParser::Counter, 0);
}


size_t IvionParser::IfConditionalContext::getRuleIndex() const {
  return IvionParser::RuleIfConditional;
}


antlrcpp::Any IvionParser::IfConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitIfConditional(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfConditionalContext* IvionParser::ifConditional() {
  IfConditionalContext *_localctx = _tracker.createInstance<IfConditionalContext>(_ctx, getState());
  enterRule(_localctx, 120, IvionParser::RuleIfConditional);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(720);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(712);
      match(IvionParser::If);
      setState(713);
      _la = _input->LA(1);
      if (!(_la == IvionParser::CardController

      || _la == IvionParser::PreviousPlayer)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(714);
      match(IvionParser::Do);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(715);
      match(IvionParser::If);
      setState(716);
      card();
      setState(717);
      match(IvionParser::Is);
      setState(718);
      match(IvionParser::Counter);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplacementConditionContext ------------------------------------------------------------------

IvionParser::ReplacementConditionContext::ReplacementConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::ResolvedContext* IvionParser::ReplacementConditionContext::resolved() {
  return getRuleContext<IvionParser::ResolvedContext>(0);
}

IvionParser::UsedSecondWindContext* IvionParser::ReplacementConditionContext::usedSecondWind() {
  return getRuleContext<IvionParser::UsedSecondWindContext>(0);
}

IvionParser::IfConditionalContext* IvionParser::ReplacementConditionContext::ifConditional() {
  return getRuleContext<IvionParser::IfConditionalContext>(0);
}

IvionParser::StunSuccessContext* IvionParser::ReplacementConditionContext::stunSuccess() {
  return getRuleContext<IvionParser::StunSuccessContext>(0);
}


size_t IvionParser::ReplacementConditionContext::getRuleIndex() const {
  return IvionParser::RuleReplacementCondition;
}


antlrcpp::Any IvionParser::ReplacementConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitReplacementCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ReplacementConditionContext* IvionParser::replacementCondition() {
  ReplacementConditionContext *_localctx = _tracker.createInstance<ReplacementConditionContext>(_ctx, getState());
  enterRule(_localctx, 122, IvionParser::RuleReplacementCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(726);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(722);
      resolved();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(723);
      usedSecondWind();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(724);
      ifConditional();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(725);
      stunSuccess();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplacementEffectContext ------------------------------------------------------------------

IvionParser::ReplacementEffectContext::ReplacementEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::ReplacementConditionContext* IvionParser::ReplacementEffectContext::replacementCondition() {
  return getRuleContext<IvionParser::ReplacementConditionContext>(0);
}

IvionParser::EffectContext* IvionParser::ReplacementEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

tree::TerminalNode* IvionParser::ReplacementEffectContext::Instead() {
  return getToken(IvionParser::Instead, 0);
}

IvionParser::BreachContext* IvionParser::ReplacementEffectContext::breach() {
  return getRuleContext<IvionParser::BreachContext>(0);
}

IvionParser::AdvantageContext* IvionParser::ReplacementEffectContext::advantage() {
  return getRuleContext<IvionParser::AdvantageContext>(0);
}

IvionParser::FrenzyContext* IvionParser::ReplacementEffectContext::frenzy() {
  return getRuleContext<IvionParser::FrenzyContext>(0);
}


size_t IvionParser::ReplacementEffectContext::getRuleIndex() const {
  return IvionParser::RuleReplacementEffect;
}


antlrcpp::Any IvionParser::ReplacementEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitReplacementEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ReplacementEffectContext* IvionParser::replacementEffect() {
  ReplacementEffectContext *_localctx = _tracker.createInstance<ReplacementEffectContext>(_ctx, getState());
  enterRule(_localctx, 124, IvionParser::RuleReplacementEffect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(744);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(728);
        replacementCondition();
        setState(729);
        match(IvionParser::T__2);
        setState(731);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == IvionParser::Instead) {
          setState(730);
          match(IvionParser::Instead);
        }
        setState(733);
        effect();
        break;
      }

      case IvionParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(735);
        breach();
        setState(736);
        effect();
        break;
      }

      case IvionParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(738);
        advantage();
        setState(739);
        effect();
        break;
      }

      case IvionParser::T__10: {
        enterOuterAlt(_localctx, 4);
        setState(741);
        frenzy();
        setState(742);
        effect();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SimpleEffectContext ------------------------------------------------------------------

IvionParser::SimpleEffectContext::SimpleEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SimpleEffectContext::And() {
  return getToken(IvionParser::And, 0);
}

tree::TerminalNode* IvionParser::SimpleEffectContext::Then() {
  return getToken(IvionParser::Then, 0);
}

IvionParser::EffectPlayerContext* IvionParser::SimpleEffectContext::effectPlayer() {
  return getRuleContext<IvionParser::EffectPlayerContext>(0);
}

IvionParser::CardEffectContext* IvionParser::SimpleEffectContext::cardEffect() {
  return getRuleContext<IvionParser::CardEffectContext>(0);
}

IvionParser::TerrainEffectContext* IvionParser::SimpleEffectContext::terrainEffect() {
  return getRuleContext<IvionParser::TerrainEffectContext>(0);
}


size_t IvionParser::SimpleEffectContext::getRuleIndex() const {
  return IvionParser::RuleSimpleEffect;
}


antlrcpp::Any IvionParser::SimpleEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitSimpleEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SimpleEffectContext* IvionParser::simpleEffect() {
  SimpleEffectContext *_localctx = _tracker.createInstance<SimpleEffectContext>(_ctx, getState());
  enterRule(_localctx, 126, IvionParser::RuleSimpleEffect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(750);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      setState(746);
      match(IvionParser::Then);
      setState(747);
      match(IvionParser::T__2);
      break;
    }

    case 2: {
      setState(748);
      match(IvionParser::Then);
      break;
    }

    case 3: {
      break;
    }

    }
    setState(755);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(752);
      effectPlayer();
      break;
    }

    case 2: {
      setState(753);
      cardEffect();
      break;
    }

    case 3: {
      setState(754);
      terrainEffect();
      break;
    }

    }
    setState(757);
    _la = _input->LA(1);
    if (!(_la == IvionParser::T__2

    || _la == IvionParser::T__11 || _la == IvionParser::And)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EffectContext ------------------------------------------------------------------

IvionParser::EffectContext::EffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::SimpleEffectContext *> IvionParser::EffectContext::simpleEffect() {
  return getRuleContexts<IvionParser::SimpleEffectContext>();
}

IvionParser::SimpleEffectContext* IvionParser::EffectContext::simpleEffect(size_t i) {
  return getRuleContext<IvionParser::SimpleEffectContext>(i);
}

tree::TerminalNode* IvionParser::EffectContext::Choose() {
  return getToken(IvionParser::Choose, 0);
}

IvionParser::IntegerContext* IvionParser::EffectContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::EffectContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::EffectContext::Each() {
  return getToken(IvionParser::Each, 0);
}

IvionParser::PlayerContext* IvionParser::EffectContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::EffectContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::TileContext* IvionParser::EffectContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}


size_t IvionParser::EffectContext::getRuleIndex() const {
  return IvionParser::RuleEffect;
}


antlrcpp::Any IvionParser::EffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EffectContext* IvionParser::effect() {
  EffectContext *_localctx = _tracker.createInstance<EffectContext>(_ctx, getState());
  enterRule(_localctx, 128, IvionParser::RuleEffect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(783);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(759);
      simpleEffect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(760);
      match(IvionParser::Choose);
      setState(761);
      integer();
      setState(762);
      match(IvionParser::T__12);
      setState(765); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(763);
        match(IvionParser::T__8);
        setState(764);
        simpleEffect();
        setState(767); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == IvionParser::T__8);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(769);
      match(IvionParser::Choose);
      setState(770);
      integer();
      setState(771);
      match(IvionParser::For);
      setState(772);
      match(IvionParser::Each);
      setState(773);
      player();
      setState(774);
      match(IvionParser::In);
      setState(775);
      tile();
      setState(776);
      match(IvionParser::T__12);
      setState(779); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(777);
        match(IvionParser::T__8);
        setState(778);
        simpleEffect();
        setState(781); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == IvionParser::T__8);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TextContext ------------------------------------------------------------------

IvionParser::TextContext::TextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TextContext::EOF() {
  return getToken(IvionParser::EOF, 0);
}

std::vector<IvionParser::ReplacementEffectContext *> IvionParser::TextContext::replacementEffect() {
  return getRuleContexts<IvionParser::ReplacementEffectContext>();
}

IvionParser::ReplacementEffectContext* IvionParser::TextContext::replacementEffect(size_t i) {
  return getRuleContext<IvionParser::ReplacementEffectContext>(i);
}

std::vector<IvionParser::TriggerEffectContext *> IvionParser::TextContext::triggerEffect() {
  return getRuleContexts<IvionParser::TriggerEffectContext>();
}

IvionParser::TriggerEffectContext* IvionParser::TextContext::triggerEffect(size_t i) {
  return getRuleContext<IvionParser::TriggerEffectContext>(i);
}

std::vector<IvionParser::EffectContext *> IvionParser::TextContext::effect() {
  return getRuleContexts<IvionParser::EffectContext>();
}

IvionParser::EffectContext* IvionParser::TextContext::effect(size_t i) {
  return getRuleContext<IvionParser::EffectContext>(i);
}


size_t IvionParser::TextContext::getRuleIndex() const {
  return IvionParser::RuleText;
}


antlrcpp::Any IvionParser::TextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitText(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TextContext* IvionParser::text() {
  TextContext *_localctx = _tracker.createInstance<TextContext>(_ctx, getState());
  enterRule(_localctx, 130, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(788); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(788);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::T__7:
        case IvionParser::T__9:
        case IvionParser::T__10:
        case IvionParser::If: {
          setState(785);
          replacementEffect();
          break;
        }

        case IvionParser::At:
        case IvionParser::After: {
          setState(786);
          triggerEffect();
          break;
        }

        case IvionParser::Heal:
        case IvionParser::Disarm:
        case IvionParser::Silence:
        case IvionParser::Slow:
        case IvionParser::Control:
        case IvionParser::Discard:
        case IvionParser::Draw:
        case IvionParser::Deal:
        case IvionParser::Move:
        case IvionParser::Travel:
        case IvionParser::Target:
        case IvionParser::Gain:
        case IvionParser::Remove:
        case IvionParser::Stun:
        case IvionParser::Player:
        case IvionParser::Enemy:
        case IvionParser::Another:
        case IvionParser::CardController:
        case IvionParser::PreviousPlayer:
        case IvionParser::Its:
        case IvionParser::Use:
        case IvionParser::UpTo:
        case IvionParser::All:
        case IvionParser::Make:
        case IvionParser::Card:
        case IvionParser::Attach:
        case IvionParser::Hardcast:
        case IvionParser::That:
        case IvionParser::Put:
        case IvionParser::Meta:
        case IvionParser::Counter:
        case IvionParser::Destroy:
        case IvionParser::Top:
        case IvionParser::From:
        case IvionParser::Then:
        case IvionParser::Resolve:
        case IvionParser::Non:
        case IvionParser::Ability:
        case IvionParser::Attack:
        case IvionParser::Choose:
        case IvionParser::A:
        case IvionParser::The:
        case IvionParser::One:
        case IvionParser::Two:
        case IvionParser::Three:
        case IvionParser::Four:
        case IvionParser::Five:
        case IvionParser::Six:
        case IvionParser::Integer: {
          setState(787);
          effect();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(790); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::T__7)
      | (1ULL << IvionParser::T__9)
      | (1ULL << IvionParser::T__10)
      | (1ULL << IvionParser::Heal)
      | (1ULL << IvionParser::Disarm)
      | (1ULL << IvionParser::Silence)
      | (1ULL << IvionParser::Slow)
      | (1ULL << IvionParser::Control)
      | (1ULL << IvionParser::Discard)
      | (1ULL << IvionParser::Draw)
      | (1ULL << IvionParser::Deal)
      | (1ULL << IvionParser::Move)
      | (1ULL << IvionParser::Travel)
      | (1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Gain)
      | (1ULL << IvionParser::Remove)
      | (1ULL << IvionParser::Stun)
      | (1ULL << IvionParser::Player)
      | (1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::CardController)
      | (1ULL << IvionParser::PreviousPlayer)
      | (1ULL << IvionParser::Its)
      | (1ULL << IvionParser::Use)
      | (1ULL << IvionParser::UpTo)
      | (1ULL << IvionParser::All))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (IvionParser::Make - 64))
      | (1ULL << (IvionParser::Card - 64))
      | (1ULL << (IvionParser::Attach - 64))
      | (1ULL << (IvionParser::Hardcast - 64))
      | (1ULL << (IvionParser::That - 64))
      | (1ULL << (IvionParser::Put - 64))
      | (1ULL << (IvionParser::Meta - 64))
      | (1ULL << (IvionParser::Counter - 64))
      | (1ULL << (IvionParser::Destroy - 64))
      | (1ULL << (IvionParser::Top - 64))
      | (1ULL << (IvionParser::From - 64))
      | (1ULL << (IvionParser::At - 64))
      | (1ULL << (IvionParser::After - 64))
      | (1ULL << (IvionParser::Then - 64))
      | (1ULL << (IvionParser::If - 64))
      | (1ULL << (IvionParser::Resolve - 64))
      | (1ULL << (IvionParser::Non - 64))
      | (1ULL << (IvionParser::Ability - 64))
      | (1ULL << (IvionParser::Attack - 64))
      | (1ULL << (IvionParser::Choose - 64))
      | (1ULL << (IvionParser::A - 64))
      | (1ULL << (IvionParser::The - 64))
      | (1ULL << (IvionParser::One - 64))
      | (1ULL << (IvionParser::Two - 64))
      | (1ULL << (IvionParser::Three - 64))
      | (1ULL << (IvionParser::Four - 64))
      | (1ULL << (IvionParser::Five - 64))
      | (1ULL << (IvionParser::Six - 64))
      | (1ULL << (IvionParser::Integer - 64)))) != 0));
    setState(792);
    match(IvionParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TheNumberOfCardsInHandContext ------------------------------------------------------------------

IvionParser::TheNumberOfCardsInHandContext::TheNumberOfCardsInHandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TheNumberOfCardsInHandContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::TheNumberOfCardsInHandContext::Number() {
  return getToken(IvionParser::Number, 0);
}

tree::TerminalNode* IvionParser::TheNumberOfCardsInHandContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::TheNumberOfCardsInHandContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::TheNumberOfCardsInHandContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::PlayerContext* IvionParser::TheNumberOfCardsInHandContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::TheNumberOfCardsInHandContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}

tree::TerminalNode* IvionParser::TheNumberOfCardsInHandContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
}


size_t IvionParser::TheNumberOfCardsInHandContext::getRuleIndex() const {
  return IvionParser::RuleTheNumberOfCardsInHand;
}


antlrcpp::Any IvionParser::TheNumberOfCardsInHandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTheNumberOfCardsInHand(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TheNumberOfCardsInHandContext* IvionParser::theNumberOfCardsInHand() {
  TheNumberOfCardsInHandContext *_localctx = _tracker.createInstance<TheNumberOfCardsInHandContext>(_ctx, getState());
  enterRule(_localctx, 132, IvionParser::RuleTheNumberOfCardsInHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(811);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(794);
      match(IvionParser::The);
      setState(795);
      match(IvionParser::Number);
      setState(796);
      match(IvionParser::Of);
      setState(797);
      match(IvionParser::Card);
      setState(798);
      match(IvionParser::In);
      setState(799);
      player();
      setState(800);
      match(IvionParser::Hand);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(802);
      match(IvionParser::The);
      setState(803);
      match(IvionParser::Number);
      setState(804);
      match(IvionParser::Of);
      setState(805);
      match(IvionParser::Reveal);
      setState(806);
      match(IvionParser::Card);
      setState(807);
      match(IvionParser::In);
      setState(808);
      player();
      setState(809);
      match(IvionParser::Hand);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

IvionParser::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IntegerLiteralContext::Integer() {
  return getToken(IvionParser::Integer, 0);
}


size_t IvionParser::IntegerLiteralContext::getRuleIndex() const {
  return IvionParser::RuleIntegerLiteral;
}


antlrcpp::Any IvionParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IntegerLiteralContext* IvionParser::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 134, IvionParser::RuleIntegerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(813);
    match(IvionParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerWordContext ------------------------------------------------------------------

IvionParser::IntegerWordContext::IntegerWordContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IntegerWordContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::IntegerWordContext::One() {
  return getToken(IvionParser::One, 0);
}

tree::TerminalNode* IvionParser::IntegerWordContext::Two() {
  return getToken(IvionParser::Two, 0);
}

tree::TerminalNode* IvionParser::IntegerWordContext::Three() {
  return getToken(IvionParser::Three, 0);
}

tree::TerminalNode* IvionParser::IntegerWordContext::Four() {
  return getToken(IvionParser::Four, 0);
}

tree::TerminalNode* IvionParser::IntegerWordContext::Five() {
  return getToken(IvionParser::Five, 0);
}

tree::TerminalNode* IvionParser::IntegerWordContext::Six() {
  return getToken(IvionParser::Six, 0);
}


size_t IvionParser::IntegerWordContext::getRuleIndex() const {
  return IvionParser::RuleIntegerWord;
}


antlrcpp::Any IvionParser::IntegerWordContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitIntegerWord(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IntegerWordContext* IvionParser::integerWord() {
  IntegerWordContext *_localctx = _tracker.createInstance<IntegerWordContext>(_ctx, getState());
  enterRule(_localctx, 136, IvionParser::RuleIntegerWord);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(815);
    _la = _input->LA(1);
    if (!(((((_la - 108) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 108)) & ((1ULL << (IvionParser::A - 108))
      | (1ULL << (IvionParser::One - 108))
      | (1ULL << (IvionParser::Two - 108))
      | (1ULL << (IvionParser::Three - 108))
      | (1ULL << (IvionParser::Four - 108))
      | (1ULL << (IvionParser::Five - 108))
      | (1ULL << (IvionParser::Six - 108)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerContext ------------------------------------------------------------------

IvionParser::IntegerContext::IntegerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IntegerLiteralContext* IvionParser::IntegerContext::integerLiteral() {
  return getRuleContext<IvionParser::IntegerLiteralContext>(0);
}

IvionParser::IntegerWordContext* IvionParser::IntegerContext::integerWord() {
  return getRuleContext<IvionParser::IntegerWordContext>(0);
}

IvionParser::TheNumberOfCardsInHandContext* IvionParser::IntegerContext::theNumberOfCardsInHand() {
  return getRuleContext<IvionParser::TheNumberOfCardsInHandContext>(0);
}


size_t IvionParser::IntegerContext::getRuleIndex() const {
  return IvionParser::RuleInteger;
}


antlrcpp::Any IvionParser::IntegerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitInteger(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IntegerContext* IvionParser::integer() {
  IntegerContext *_localctx = _tracker.createInstance<IntegerContext>(_ctx, getState());
  enterRule(_localctx, 138, IvionParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(820);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 1);
        setState(817);
        integerLiteral();
        break;
      }

      case IvionParser::A:
      case IvionParser::One:
      case IvionParser::Two:
      case IvionParser::Three:
      case IvionParser::Four:
      case IvionParser::Five:
      case IvionParser::Six: {
        enterOuterAlt(_localctx, 2);
        setState(818);
        integerWord();
        break;
      }

      case IvionParser::The: {
        enterOuterAlt(_localctx, 3);
        setState(819);
        theNumberOfCardsInHand();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> IvionParser::_decisionToDFA;
atn::PredictionContextCache IvionParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IvionParser::_atn;
std::vector<uint16_t> IvionParser::_serializedATN;

std::vector<std::string> IvionParser::_ruleNames = {
  "before", "filterPlayer", "targetPlayer", "selectPlayer", "cardController", 
  "previousPlayer", "player", "damagePlayer", "controlPlayer", "movePlayer", 
  "travelPlayer", "gainResource", "drawCards", "discardCards", "useSecondWind", 
  "playACard", "heal", "rangeSource", "revealFromHand", "removeControl", 
  "stunPlayer", "effectPlayer", "targetTile", "selectTile", "previousTile", 
  "tile", "targetTerrain", "terrain", "makeTerrain", "destroyTerrain", "terrainEffect", 
  "cardFilterPrefix", "cardFilterPostfix", "targetCard", "selectCard", "previousCard", 
  "topOfStack", "bottomOfDeck", "topOfDeck", "hand", "card", "attachCard", 
  "metaCounterCard", "counterCard", "destroyCard", "cardGainsTrait", "putCard", 
  "hardcast", "resolveCard", "cardEffect", "turnTrigger", "effectTrigger", 
  "tileTrap", "triggerEffect", "breach", "advantage", "frenzy", "resolved", 
  "usedSecondWind", "stunSuccess", "ifConditional", "replacementCondition", 
  "replacementEffect", "simpleEffect", "effect", "text", "theNumberOfCardsInHand", 
  "integerLiteral", "integerWord", "integer"
};

std::vector<std::string> IvionParser::_literalNames = {
  "", "'before'", "'equal'", "','", "'except'", "'also'", "'stack'", "'into'", 
  "'breach'", "'-'", "'advantage'", "'frenzy'", "'.'", "':'", "", "", "", 
  "", "'control'", "", "", "'deal'", "", "", "", "", "", "'power'", "'initiative'", 
  "'second wind'", "'may'", "'play'", "", "'damage'", "'remove'", "'stun'", 
  "", "", "'another'", "", "", "'range'", "'away'", "'controller'", "'its'", 
  "", "'up to'", "", "", "'for'", "'less'", "'free'", "'all'", "'instances'", 
  "'more'", "'removed'", "'way'", "'first'", "'during'", "", "'empty'", 
  "'enchanted'", "'difficult'", "'terrain'", "'make'", "'token'", "", "'heroic'", 
  "'attach'", "'hardcast'", "'that'", "'put'", "'meta'", "", "'destroy'", 
  "", "'unless'", "", "'top'", "'bottom'", "'deck'", "", "'hand'", "'from'", 
  "'until'", "'number'", "'in'", "'it'", "'turn'", "'start'", "'end'", "'at'", 
  "", "'this'", "", "'enter'", "'if'", "'do'", "", "'used'", "'non-'", "'ability'", 
  "'attack'", "'already'", "'instead'", "'choose'", "'and'", "'each'", "", 
  "", "'to'", "", "'of'", "'the'", "'one'", "'two'", "'three'", "'four'", 
  "'five'", "'six'", "", "'\n'"
};

std::vector<std::string> IvionParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Heal", "Disarm", 
  "Silence", "Slow", "Control", "Discard", "Draw", "Deal", "Move", "Travel", 
  "Target", "Gain", "Action", "Power", "Initiative", "SecondWind", "May", 
  "Play", "Reveal", "Damage", "Remove", "Stun", "Player", "Enemy", "Another", 
  "CardController", "PreviousPlayer", "Range", "Away", "Controller", "Its", 
  "Use", "UpTo", "Have", "Health", "For", "Less", "Free", "All", "Instances", 
  "More", "Removed", "Way", "First", "During", "Tile", "Empty", "Enchanted", 
  "Difficult", "Terrain", "Make", "Token", "Card", "Heroic", "Attach", "Hardcast", 
  "That", "Put", "Meta", "Counter", "Destroy", "Resource", "Unless", "Pays", 
  "Top", "Bottom", "Deck", "On", "Hand", "From", "Until", "Number", "In", 
  "It", "Turn", "Start", "End", "At", "After", "This", "Then", "Enters", 
  "If", "Do", "Resolve", "Used", "Non", "Ability", "Attack", "Already", 
  "Instead", "Choose", "And", "Each", "A", "Is", "To", "Take", "Of", "The", 
  "One", "Two", "Three", "Four", "Five", "Six", "Integer", "Newline", "Whitespace"
};

dfa::Vocabulary IvionParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> IvionParser::_tokenNames;

IvionParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x7c, 0x339, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
    0x6, 0x3, 0x92, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x93, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xa3, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0xac, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xb6, 0xa, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0xcb, 0xa, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x5, 0xa, 0xd6, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0xeb, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xf3, 0xa, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xfb, 0xa, 0xc, 
    0x3, 0xd, 0x5, 0xd, 0xfe, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x102, 
    0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x105, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0x112, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0x11d, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x122, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x128, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x12f, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x13a, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x141, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 
    0x13, 0x15a, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x15d, 0xb, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x181, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x193, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x19d, 0xa, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x1a2, 0xa, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x5, 0x1e, 0x1b3, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x5, 0x1e, 0x1b8, 0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x1bf, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 0x21, 0x1c8, 0xa, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1d4, 0xa, 0x22, 
    0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1d8, 0xa, 0x23, 0x3, 0x23, 0x7, 0x23, 
    0x1db, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x1de, 0xb, 0x23, 0x3, 0x23, 
    0x3, 0x23, 0x7, 0x23, 0x1e2, 0xa, 0x23, 0xc, 0x23, 0xe, 0x23, 0x1e5, 
    0xb, 0x23, 0x3, 0x23, 0x3, 0x23, 0x7, 0x23, 0x1e9, 0xa, 0x23, 0xc, 0x23, 
    0xe, 0x23, 0x1ec, 0xb, 0x23, 0x3, 0x24, 0x3, 0x24, 0x7, 0x24, 0x1f0, 
    0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x1f3, 0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x7, 0x24, 0x1f7, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x1fa, 0xb, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x1fd, 0xa, 0x24, 0x3, 0x24, 0x7, 0x24, 0x200, 
    0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x203, 0xb, 0x24, 0x3, 0x24, 0x3, 0x24, 
    0x7, 0x24, 0x207, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x20a, 0xb, 0x24, 
    0x5, 0x24, 0x20c, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x5, 0x27, 0x226, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x5, 0x28, 0x238, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x5, 0x2a, 0x245, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x255, 
    0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x5, 0x30, 0x271, 0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x278, 0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x5, 
    0x33, 0x282, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 0x293, 
    0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2a5, 0xa, 0x37, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x5, 0x3b, 0x2b5, 0xa, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 
    0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 
    0x2d3, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 
    0x2d9, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 0x2de, 
    0xa, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
    0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x5, 0x40, 
    0x2eb, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
    0x2f1, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x2f6, 
    0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x6, 0x42, 0x300, 0xa, 0x42, 0xd, 0x42, 
    0xe, 0x42, 0x301, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x6, 0x42, 0x30e, 
    0xa, 0x42, 0xd, 0x42, 0xe, 0x42, 0x30f, 0x5, 0x42, 0x312, 0xa, 0x42, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 0x317, 0xa, 0x43, 0xd, 0x43, 
    0xe, 0x43, 0x318, 0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x5, 0x44, 0x32e, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x337, 0xa, 0x47, 
    0x3, 0x47, 0x3, 0x15b, 0x2, 0x48, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
    0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 
    0x88, 0x8a, 0x8c, 0x2, 0xc, 0x3, 0x2, 0x26, 0x27, 0x3, 0x2, 0x11, 0x14, 
    0x3, 0x2, 0x1c, 0x1e, 0x3, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x5b, 0x5c, 0x4, 
    0x2, 0x28, 0x28, 0x6e, 0x6e, 0x3, 0x2, 0x67, 0x68, 0x3, 0x2, 0x29, 0x2a, 
    0x5, 0x2, 0x5, 0x5, 0xe, 0xe, 0x6c, 0x6c, 0x4, 0x2, 0x6e, 0x6e, 0x74, 
    0x79, 0x2, 0x368, 0x2, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x8, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xc, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xe, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xca, 0x3, 0x2, 0x2, 0x2, 0x12, 0xd5, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x16, 0xfa, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x111, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x11e, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x140, 0x3, 0x2, 0x2, 0x2, 0x22, 0x142, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x147, 0x3, 0x2, 0x2, 0x2, 0x26, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x28, 0x166, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x180, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x192, 0x3, 0x2, 0x2, 0x2, 0x30, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x34, 0x1a1, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1a7, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x1be, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1d3, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x46, 0x20b, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x210, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x225, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x237, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x239, 0x3, 0x2, 0x2, 0x2, 0x52, 0x244, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x254, 0x3, 0x2, 0x2, 0x2, 0x56, 0x256, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x25a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x262, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x265, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x269, 0x3, 0x2, 0x2, 0x2, 0x60, 0x272, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x277, 0x3, 0x2, 0x2, 0x2, 0x64, 0x281, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x283, 0x3, 0x2, 0x2, 0x2, 0x68, 0x292, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x294, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2a4, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x70, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x2ac, 0x3, 0x2, 0x2, 0x2, 0x74, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2bb, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2d2, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2ea, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x82, 0x311, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x316, 0x3, 0x2, 0x2, 0x2, 0x86, 0x32d, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x331, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x336, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x3, 0x2, 0x2, 0x8f, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x92, 0x9, 0x2, 0x2, 0x2, 0x91, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x96, 0x7, 0x1a, 0x2, 0x2, 0x96, 0xa3, 0x5, 0x4, 0x3, 0x2, 
    0x97, 0x98, 0x7, 0x28, 0x2, 0x2, 0x98, 0x99, 0x7, 0x1a, 0x2, 0x2, 0x99, 
    0xa3, 0x5, 0x4, 0x3, 0x2, 0x9a, 0x9b, 0x7, 0x1a, 0x2, 0x2, 0x9b, 0x9c, 
    0x7, 0x28, 0x2, 0x2, 0x9c, 0xa3, 0x5, 0x4, 0x3, 0x2, 0x9d, 0x9e, 0x7, 
    0x30, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x8c, 0x47, 0x2, 0x9f, 0xa0, 0x7, 0x1a, 
    0x2, 0x2, 0xa0, 0xa1, 0x5, 0x4, 0x3, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0x95, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x9a, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x6e, 0x2, 0x2, 0xa5, 0xac, 
    0x5, 0x4, 0x3, 0x2, 0xa6, 0xa7, 0x7, 0x28, 0x2, 0x2, 0xa7, 0xac, 0x5, 
    0x4, 0x3, 0x2, 0xa8, 0xac, 0x5, 0x4, 0x3, 0x2, 0xa9, 0xaa, 0x7, 0x2e, 
    0x2, 0x2, 0xaa, 0xac, 0x7, 0x2d, 0x2, 0x2, 0xab, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa8, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0x9, 0x3, 0x2, 0x2, 0x2, 0xad, 
    0xae, 0x7, 0x29, 0x2, 0x2, 0xae, 0xb, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0x7, 0x2a, 0x2, 0x2, 0xb0, 0xd, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb6, 0x5, 
    0xa, 0x6, 0x2, 0xb2, 0xb6, 0x5, 0x8, 0x5, 0x2, 0xb3, 0xb6, 0x5, 0xc, 
    0x7, 0x2, 0xb4, 0xb6, 0x5, 0x6, 0x4, 0x2, 0xb5, 0xb1, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xf, 0x3, 0x2, 0x2, 0x2, 0xb7, 
    0xb8, 0x7, 0x17, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x8c, 0x47, 0x2, 0xb9, 0xba, 
    0x7, 0x23, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x70, 0x2, 0x2, 0xbb, 0xbc, 0x5, 
    0xe, 0x8, 0x2, 0xbc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x5, 0xe, 
    0x8, 0x2, 0xbe, 0xbf, 0x7, 0x71, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0x8c, 0x47, 
    0x2, 0xc0, 0xc1, 0x7, 0x23, 0x2, 0x2, 0xc1, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0xc3, 0x7, 0x17, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x23, 0x2, 0x2, 0xc4, 
    0xc5, 0x7, 0x70, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0xe, 0x8, 0x2, 0xc6, 0xc7, 
    0x7, 0x4, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x70, 0x2, 0x2, 0xc8, 0xc9, 0x5, 
    0x8c, 0x47, 0x2, 0xc9, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xca, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc2, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0x11, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x9, 0x3, 0x2, 0x2, 
    0xcd, 0xce, 0x5, 0x8c, 0x47, 0x2, 0xce, 0xcf, 0x5, 0xe, 0x8, 0x2, 0xcf, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0xe, 0x8, 0x2, 0xd1, 0xd2, 
    0x7, 0x6f, 0x2, 0x2, 0xd2, 0xd3, 0x9, 0x3, 0x2, 0x2, 0xd3, 0xd4, 0x5, 
    0x8c, 0x47, 0x2, 0xd4, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xd8, 0x7, 0x18, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x70, 0x2, 0x2, 
    0xd9, 0xda, 0x5, 0x34, 0x1b, 0x2, 0xda, 0x15, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xdc, 0x7, 0x19, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x70, 0x2, 0x2, 0xdd, 0xfb, 
    0x5, 0x34, 0x1b, 0x2, 0xde, 0xdf, 0x7, 0x19, 0x2, 0x2, 0xdf, 0xe0, 0x5, 
    0x8c, 0x47, 0x2, 0xe0, 0xe1, 0x7, 0x3d, 0x2, 0x2, 0xe1, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0xe2, 0xe3, 0x7, 0x19, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0xe, 0x8, 
    0x2, 0xe4, 0xe5, 0x7, 0x70, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x34, 0x1b, 0x2, 
    0xe6, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x19, 0x2, 0x2, 0xe8, 
    0xea, 0x5, 0xe, 0x8, 0x2, 0xe9, 0xeb, 0x7, 0x30, 0x2, 0x2, 0xea, 0xe9, 
    0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0xed, 0x5, 0x8c, 0x47, 0x2, 0xed, 0xee, 0x7, 0x3d, 
    0x2, 0x2, 0xee, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x19, 0x2, 
    0x2, 0xf0, 0xf2, 0x5, 0xe, 0x8, 0x2, 0xf1, 0xf3, 0x7, 0x30, 0x2, 0x2, 
    0xf2, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x8c, 0x47, 0x2, 0xf5, 0xf6, 
    0x7, 0x3d, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x2c, 0x2, 0x2, 0xf7, 0xf8, 0x7, 
    0x55, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0xe, 0x8, 0x2, 0xf9, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0xfa, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xde, 0x3, 0x2, 0x2, 
    0x2, 0xfa, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xe7, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0xef, 0x3, 0x2, 0x2, 0x2, 0xfb, 0x17, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xfe, 0x5, 0xe, 0x8, 0x2, 0xfd, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x101, 0x7, 
    0x1b, 0x2, 0x2, 0x100, 0x102, 0x5, 0x8c, 0x47, 0x2, 0x101, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x105, 0x7, 0x38, 0x2, 0x2, 0x104, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0x105, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x107, 0x9, 0x4, 0x2, 0x2, 0x107, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x108, 0x109, 0x5, 0xe, 0x8, 0x2, 0x109, 0x10a, 0x7, 0x16, 
    0x2, 0x2, 0x10a, 0x10b, 0x5, 0x8c, 0x47, 0x2, 0x10b, 0x10c, 0x7, 0x44, 
    0x2, 0x2, 0x10c, 0x112, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x7, 0x16, 
    0x2, 0x2, 0x10e, 0x10f, 0x5, 0x8c, 0x47, 0x2, 0x10f, 0x110, 0x7, 0x44, 
    0x2, 0x2, 0x110, 0x112, 0x3, 0x2, 0x2, 0x2, 0x111, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x111, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x112, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x113, 0x114, 0x5, 0xe, 0x8, 0x2, 0x114, 0x115, 0x7, 0x15, 0x2, 
    0x2, 0x115, 0x116, 0x5, 0x8c, 0x47, 0x2, 0x116, 0x117, 0x7, 0x44, 0x2, 
    0x2, 0x117, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x7, 0x15, 0x2, 
    0x2, 0x119, 0x11a, 0x5, 0x8c, 0x47, 0x2, 0x11a, 0x11b, 0x7, 0x44, 0x2, 
    0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x113, 0x3, 0x2, 0x2, 
    0x2, 0x11c, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x121, 0x7, 0x2f, 0x2, 0x2, 0x11f, 0x122, 0x5, 0xa, 0x6, 0x2, 
    0x120, 0x122, 0x5, 0xc, 0x7, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 
    0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 
    0x123, 0x124, 0x7, 0x1f, 0x2, 0x2, 0x124, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x125, 0x127, 0x5, 0xe, 0x8, 0x2, 0x126, 0x128, 0x7, 0x20, 0x2, 0x2, 
    0x127, 0x126, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 
    0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x7, 0x21, 0x2, 0x2, 
    0x12a, 0x12b, 0x5, 0x52, 0x2a, 0x2, 0x12b, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x12c, 0x12e, 0x5, 0xe, 0x8, 0x2, 0x12d, 0x12f, 0x7, 0x20, 0x2, 0x2, 
    0x12e, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 
    0x12f, 0x130, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x7, 0x21, 0x2, 0x2, 
    0x131, 0x132, 0x5, 0x52, 0x2a, 0x2, 0x132, 0x133, 0x7, 0x33, 0x2, 0x2, 
    0x133, 0x134, 0x5, 0x8c, 0x47, 0x2, 0x134, 0x135, 0x7, 0x34, 0x2, 0x2, 
    0x135, 0x136, 0x7, 0x4d, 0x2, 0x2, 0x136, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x137, 0x139, 0x5, 0xe, 0x8, 0x2, 0x138, 0x13a, 0x7, 0x20, 0x2, 0x2, 
    0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 0x2, 0x2, 
    0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x7, 0x21, 0x2, 0x2, 
    0x13c, 0x13d, 0x5, 0x52, 0x2a, 0x2, 0x13d, 0x13e, 0x7, 0x33, 0x2, 0x2, 
    0x13e, 0x13f, 0x7, 0x35, 0x2, 0x2, 0x13f, 0x141, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x125, 0x3, 0x2, 0x2, 0x2, 0x140, 0x12c, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x137, 0x3, 0x2, 0x2, 0x2, 0x141, 0x21, 0x3, 0x2, 0x2, 0x2, 0x142, 
    0x143, 0x7, 0x10, 0x2, 0x2, 0x143, 0x144, 0x5, 0xe, 0x8, 0x2, 0x144, 
    0x145, 0x5, 0x8c, 0x47, 0x2, 0x145, 0x146, 0x7, 0x32, 0x2, 0x2, 0x146, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x7, 0x36, 0x2, 0x2, 0x148, 
    0x149, 0x7, 0x72, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x29, 0x2, 0x2, 0x14a, 
    0x14b, 0x7, 0x44, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x5, 0x2, 0x2, 0x14c, 
    0x14d, 0x7, 0x6, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x19, 0x2, 0x2, 0x14e, 
    0x14f, 0x7, 0x44, 0x2, 0x2, 0x14f, 0x150, 0x7, 0x48, 0x2, 0x2, 0x150, 
    0x151, 0x7, 0x1a, 0x2, 0x2, 0x151, 0x152, 0x7, 0x6e, 0x2, 0x2, 0x152, 
    0x153, 0x7, 0x3d, 0x2, 0x2, 0x153, 0x154, 0x7, 0x5, 0x2, 0x2, 0x154, 
    0x155, 0x7, 0x7, 0x2, 0x2, 0x155, 0x156, 0x7, 0x16, 0x2, 0x2, 0x156, 
    0x157, 0x7, 0x2b, 0x2, 0x2, 0x157, 0x15b, 0x7, 0x55, 0x2, 0x2, 0x158, 
    0x15a, 0xb, 0x2, 0x2, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 
    0x15d, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15b, 
    0x159, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x25, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 
    0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x5, 0xe, 0x8, 0x2, 0x15f, 0x160, 
    0x7, 0x22, 0x2, 0x2, 0x160, 0x161, 0x5, 0x8c, 0x47, 0x2, 0x161, 0x162, 
    0x7, 0x44, 0x2, 0x2, 0x162, 0x163, 0x7, 0x55, 0x2, 0x2, 0x163, 0x164, 
    0x7, 0x2a, 0x2, 0x2, 0x164, 0x165, 0x7, 0x54, 0x2, 0x2, 0x165, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x7, 0x24, 0x2, 0x2, 0x167, 0x168, 
    0x7, 0x30, 0x2, 0x2, 0x168, 0x169, 0x5, 0x8c, 0x47, 0x2, 0x169, 0x16a, 
    0x7, 0x37, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x72, 0x2, 0x2, 0x16b, 0x16c, 
    0x7, 0x14, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0x55, 0x2, 0x2, 0x16d, 0x16e, 
    0x5, 0xe, 0x8, 0x2, 0x16e, 0x29, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x7, 
    0x25, 0x2, 0x2, 0x170, 0x171, 0x5, 0xe, 0x8, 0x2, 0x171, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x172, 0x181, 0x5, 0x10, 0x9, 0x2, 0x173, 0x181, 0x5, 
    0x12, 0xa, 0x2, 0x174, 0x181, 0x5, 0x14, 0xb, 0x2, 0x175, 0x181, 0x5, 
    0x16, 0xc, 0x2, 0x176, 0x181, 0x5, 0x18, 0xd, 0x2, 0x177, 0x181, 0x5, 
    0x1a, 0xe, 0x2, 0x178, 0x181, 0x5, 0x1e, 0x10, 0x2, 0x179, 0x181, 0x5, 
    0x20, 0x11, 0x2, 0x17a, 0x181, 0x5, 0x22, 0x12, 0x2, 0x17b, 0x181, 0x5, 
    0x24, 0x13, 0x2, 0x17c, 0x181, 0x5, 0x26, 0x14, 0x2, 0x17d, 0x181, 0x5, 
    0x1c, 0xf, 0x2, 0x17e, 0x181, 0x5, 0x28, 0x15, 0x2, 0x17f, 0x181, 0x5, 
    0x2a, 0x16, 0x2, 0x180, 0x172, 0x3, 0x2, 0x2, 0x2, 0x180, 0x173, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x174, 0x3, 0x2, 0x2, 0x2, 0x180, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x176, 0x3, 0x2, 0x2, 0x2, 0x180, 0x177, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x178, 0x3, 0x2, 0x2, 0x2, 0x180, 0x179, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17b, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17d, 0x3, 
    0x2, 0x2, 0x2, 0x180, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x17f, 0x3, 
    0x2, 0x2, 0x2, 0x181, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x7, 0x1a, 
    0x2, 0x2, 0x183, 0x193, 0x7, 0x3d, 0x2, 0x2, 0x184, 0x185, 0x7, 0x1a, 
    0x2, 0x2, 0x185, 0x186, 0x7, 0x28, 0x2, 0x2, 0x186, 0x193, 0x7, 0x3d, 
    0x2, 0x2, 0x187, 0x188, 0x7, 0x28, 0x2, 0x2, 0x188, 0x189, 0x7, 0x1a, 
    0x2, 0x2, 0x189, 0x193, 0x7, 0x3d, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x30, 
    0x2, 0x2, 0x18b, 0x18c, 0x5, 0x8c, 0x47, 0x2, 0x18c, 0x18d, 0x7, 0x1a, 
    0x2, 0x2, 0x18d, 0x18e, 0x7, 0x3d, 0x2, 0x2, 0x18e, 0x193, 0x3, 0x2, 
    0x2, 0x2, 0x18f, 0x190, 0x7, 0x1a, 0x2, 0x2, 0x190, 0x191, 0x7, 0x3e, 
    0x2, 0x2, 0x191, 0x193, 0x7, 0x3d, 0x2, 0x2, 0x192, 0x182, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x184, 0x3, 0x2, 0x2, 0x2, 0x192, 0x187, 0x3, 0x2, 
    0x2, 0x2, 0x192, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x192, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x193, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x7, 0x6e, 
    0x2, 0x2, 0x195, 0x196, 0x7, 0x3d, 0x2, 0x2, 0x196, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x197, 0x198, 0x7, 0x48, 0x2, 0x2, 0x198, 0x19d, 0x7, 0x3d, 
    0x2, 0x2, 0x199, 0x19d, 0x7, 0x59, 0x2, 0x2, 0x19a, 0x19b, 0x7, 0x5f, 
    0x2, 0x2, 0x19b, 0x19d, 0x7, 0x3d, 0x2, 0x2, 0x19c, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x19c, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 0x2, 
    0x2, 0x2, 0x19d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x1a2, 0x5, 0x30, 
    0x19, 0x2, 0x19f, 0x1a2, 0x5, 0x2e, 0x18, 0x2, 0x1a0, 0x1a2, 0x5, 0x32, 
    0x1a, 0x2, 0x1a1, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x19f, 0x3, 0x2, 
    0x2, 0x2, 0x1a1, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x1a3, 0x1a4, 0x7, 0x1a, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x41, 0x2, 
    0x2, 0x1a5, 0x1a6, 0x7, 0x43, 0x2, 0x2, 0x1a6, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x1a7, 0x1a8, 0x5, 0x36, 0x1c, 0x2, 0x1a8, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x1a9, 0x1aa, 0x7, 0x42, 0x2, 0x2, 0x1aa, 0x1ab, 0x5, 0x34, 0x1b, 
    0x2, 0x1ab, 0x1ac, 0x9, 0x5, 0x2, 0x2, 0x1ac, 0x1ad, 0x7, 0x41, 0x2, 
    0x2, 0x1ad, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1b2, 0x7, 0x42, 0x2, 
    0x2, 0x1af, 0x1b3, 0x7, 0x40, 0x2, 0x2, 0x1b0, 0x1b3, 0x7, 0x3f, 0x2, 
    0x2, 0x1b1, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b1, 0x3, 0x2, 0x2, 
    0x2, 0x1b3, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x41, 0x2, 
    0x2, 0x1b5, 0x1b6, 0x7, 0x58, 0x2, 0x2, 0x1b6, 0x1b8, 0x5, 0x34, 0x1b, 
    0x2, 0x1b7, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1ae, 0x3, 0x2, 0x2, 
    0x2, 0x1b8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x7, 0x24, 0x2, 
    0x2, 0x1ba, 0x1bb, 0x5, 0x38, 0x1d, 0x2, 0x1bb, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x1bc, 0x1bf, 0x5, 0x3a, 0x1e, 0x2, 0x1bd, 0x1bf, 0x5, 0x3c, 0x1f, 
    0x2, 0x1be, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bd, 0x3, 0x2, 0x2, 
    0x2, 0x1bf, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c8, 0x7, 0x28, 0x2, 
    0x2, 0x1c1, 0x1c8, 0x7, 0x66, 0x2, 0x2, 0x1c2, 0x1c8, 0x7, 0x68, 0x2, 
    0x2, 0x1c3, 0x1c8, 0x7, 0x67, 0x2, 0x2, 0x1c4, 0x1c5, 0x5, 0xe, 0x8, 
    0x2, 0x1c5, 0x1c6, 0x7, 0x3b, 0x2, 0x2, 0x1c6, 0x1c8, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c1, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c3, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x1c9, 0x1ca, 0x7, 0x1a, 0x2, 0x2, 0x1ca, 0x1d4, 0x5, 0xe, 0x8, 0x2, 
    0x1cb, 0x1cc, 0x7, 0x3c, 0x2, 0x2, 0x1cc, 0x1cd, 0x5, 0xe, 0x8, 0x2, 
    0x1cd, 0x1ce, 0x7, 0x5a, 0x2, 0x2, 0x1ce, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1cf, 0x1d0, 0x7, 0x55, 0x2, 0x2, 0x1d0, 0x1d1, 0x5, 0xe, 0x8, 0x2, 
    0x1d1, 0x1d2, 0x7, 0x15, 0x2, 0x2, 0x1d2, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1d5, 
    0x1d6, 0x7, 0x30, 0x2, 0x2, 0x1d6, 0x1d8, 0x5, 0x8c, 0x47, 0x2, 0x1d7, 
    0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
    0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1db, 0x5, 0x40, 0x21, 0x2, 0x1da, 
    0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 
    0x1df, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1df, 
    0x1e3, 0x7, 0x1a, 0x2, 0x2, 0x1e0, 0x1e2, 0x5, 0x40, 0x21, 0x2, 0x1e1, 
    0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e3, 
    0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e4, 
    0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e6, 
    0x1ea, 0x7, 0x44, 0x2, 0x2, 0x1e7, 0x1e9, 0x5, 0x42, 0x22, 0x2, 0x1e8, 
    0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ea, 
    0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1f1, 
    0x5, 0x8c, 0x47, 0x2, 0x1ee, 0x1f0, 0x5, 0x40, 0x21, 0x2, 0x1ef, 0x1ee, 
    0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1ef, 
    0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f4, 
    0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f8, 
    0x7, 0x44, 0x2, 0x2, 0x1f5, 0x1f7, 0x5, 0x42, 0x22, 0x2, 0x1f6, 0x1f5, 
    0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f6, 
    0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1f9, 0x20c, 
    0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fd, 
    0x7, 0x6e, 0x2, 0x2, 0x1fc, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 
    0x3, 0x2, 0x2, 0x2, 0x1fd, 0x201, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x200, 
    0x5, 0x40, 0x21, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x200, 0x203, 
    0x3, 0x2, 0x2, 0x2, 0x201, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 
    0x3, 0x2, 0x2, 0x2, 0x202, 0x204, 0x3, 0x2, 0x2, 0x2, 0x203, 0x201, 
    0x3, 0x2, 0x2, 0x2, 0x204, 0x208, 0x7, 0x44, 0x2, 0x2, 0x205, 0x207, 
    0x5, 0x42, 0x22, 0x2, 0x206, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 0x20a, 
    0x3, 0x2, 0x2, 0x2, 0x208, 0x206, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 
    0x3, 0x2, 0x2, 0x2, 0x209, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x208, 
    0x3, 0x2, 0x2, 0x2, 0x20b, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x1fc, 
    0x3, 0x2, 0x2, 0x2, 0x20c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x7, 
    0x48, 0x2, 0x2, 0x20e, 0x20f, 0x7, 0x44, 0x2, 0x2, 0x20f, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x210, 0x211, 0x7, 0x50, 0x2, 0x2, 0x211, 0x212, 0x7, 
    0x72, 0x2, 0x2, 0x212, 0x213, 0x7, 0x73, 0x2, 0x2, 0x213, 0x214, 0x7, 
    0x8, 0x2, 0x2, 0x214, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x7, 0x73, 
    0x2, 0x2, 0x216, 0x217, 0x7, 0x44, 0x2, 0x2, 0x217, 0x218, 0x7, 0x53, 
    0x2, 0x2, 0x218, 0x219, 0x7, 0x73, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x51, 
    0x2, 0x2, 0x21a, 0x21b, 0x7, 0x72, 0x2, 0x2, 0x21b, 0x21c, 0x5, 0xe, 
    0x8, 0x2, 0x21c, 0x21d, 0x7, 0x52, 0x2, 0x2, 0x21d, 0x226, 0x3, 0x2, 
    0x2, 0x2, 0x21e, 0x21f, 0x7, 0x73, 0x2, 0x2, 0x21f, 0x220, 0x7, 0x51, 
    0x2, 0x2, 0x220, 0x221, 0x7, 0x44, 0x2, 0x2, 0x221, 0x222, 0x7, 0x72, 
    0x2, 0x2, 0x222, 0x223, 0x5, 0xe, 0x8, 0x2, 0x223, 0x224, 0x7, 0x52, 
    0x2, 0x2, 0x224, 0x226, 0x3, 0x2, 0x2, 0x2, 0x225, 0x215, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x226, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x227, 0x228, 0x7, 0x73, 0x2, 0x2, 0x228, 0x229, 0x7, 0x44, 0x2, 
    0x2, 0x229, 0x22a, 0x7, 0x53, 0x2, 0x2, 0x22a, 0x22b, 0x7, 0x73, 0x2, 
    0x2, 0x22b, 0x22c, 0x7, 0x50, 0x2, 0x2, 0x22c, 0x22d, 0x7, 0x72, 0x2, 
    0x2, 0x22d, 0x22e, 0x5, 0xe, 0x8, 0x2, 0x22e, 0x22f, 0x7, 0x52, 0x2, 
    0x2, 0x22f, 0x238, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 0x73, 0x2, 
    0x2, 0x231, 0x232, 0x7, 0x50, 0x2, 0x2, 0x232, 0x233, 0x7, 0x44, 0x2, 
    0x2, 0x233, 0x234, 0x7, 0x72, 0x2, 0x2, 0x234, 0x235, 0x5, 0xe, 0x8, 
    0x2, 0x235, 0x236, 0x7, 0x52, 0x2, 0x2, 0x236, 0x238, 0x3, 0x2, 0x2, 
    0x2, 0x237, 0x227, 0x3, 0x2, 0x2, 0x2, 0x237, 0x230, 0x3, 0x2, 0x2, 
    0x2, 0x238, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x5, 0xe, 0x8, 0x2, 
    0x23a, 0x23b, 0x7, 0x54, 0x2, 0x2, 0x23b, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x23c, 0x245, 0x5, 0x48, 0x25, 0x2, 0x23d, 0x245, 0x5, 0x44, 0x23, 0x2, 
    0x23e, 0x245, 0x5, 0x46, 0x24, 0x2, 0x23f, 0x245, 0x5, 0x4a, 0x26, 0x2, 
    0x240, 0x245, 0x5, 0x4c, 0x27, 0x2, 0x241, 0x245, 0x5, 0x4e, 0x28, 0x2, 
    0x242, 0x243, 0x7, 0x55, 0x2, 0x2, 0x243, 0x245, 0x5, 0x50, 0x29, 0x2, 
    0x244, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x244, 0x23d, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x244, 0x23f, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x240, 0x3, 0x2, 0x2, 0x2, 0x244, 0x241, 0x3, 0x2, 0x2, 0x2, 
    0x244, 0x242, 0x3, 0x2, 0x2, 0x2, 0x245, 0x53, 0x3, 0x2, 0x2, 0x2, 0x246, 
    0x247, 0x7, 0x46, 0x2, 0x2, 0x247, 0x248, 0x7, 0x70, 0x2, 0x2, 0x248, 
    0x255, 0x5, 0xe, 0x8, 0x2, 0x249, 0x24a, 0x7, 0x46, 0x2, 0x2, 0x24a, 
    0x24b, 0x7, 0x70, 0x2, 0x2, 0x24b, 0x255, 0x5, 0x34, 0x1b, 0x2, 0x24c, 
    0x24d, 0x7, 0x46, 0x2, 0x2, 0x24d, 0x24e, 0x7, 0x70, 0x2, 0x2, 0x24e, 
    0x24f, 0x5, 0x34, 0x1b, 0x2, 0x24f, 0x250, 0x7, 0x56, 0x2, 0x2, 0x250, 
    0x251, 0x7, 0x5c, 0x2, 0x2, 0x251, 0x252, 0x7, 0x72, 0x2, 0x2, 0x252, 
    0x253, 0x7, 0x5a, 0x2, 0x2, 0x253, 0x255, 0x3, 0x2, 0x2, 0x2, 0x254, 
    0x246, 0x3, 0x2, 0x2, 0x2, 0x254, 0x249, 0x3, 0x2, 0x2, 0x2, 0x254, 
    0x24c, 0x3, 0x2, 0x2, 0x2, 0x255, 0x55, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 
    0x7, 0x4a, 0x2, 0x2, 0x257, 0x258, 0x7, 0x4b, 0x2, 0x2, 0x258, 0x259, 
    0x5, 0x52, 0x2a, 0x2, 0x259, 0x57, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 
    0x7, 0x4b, 0x2, 0x2, 0x25b, 0x25c, 0x5, 0x52, 0x2a, 0x2, 0x25c, 0x25d, 
    0x7, 0x4e, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0xe, 0x8, 0x2, 0x25e, 0x25f, 
    0x7, 0x4f, 0x2, 0x2, 0x25f, 0x260, 0x5, 0x8c, 0x47, 0x2, 0x260, 0x261, 
    0x7, 0x4d, 0x2, 0x2, 0x261, 0x59, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 
    0x7, 0x4c, 0x2, 0x2, 0x263, 0x264, 0x5, 0x52, 0x2a, 0x2, 0x264, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x5, 0x52, 0x2a, 0x2, 0x266, 0x267, 
    0x7, 0x1b, 0x2, 0x2, 0x267, 0x268, 0x7, 0x45, 0x2, 0x2, 0x268, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x7, 0x49, 0x2, 0x2, 0x26a, 0x270, 
    0x5, 0x52, 0x2a, 0x2, 0x26b, 0x26c, 0x7, 0x53, 0x2, 0x2, 0x26c, 0x271, 
    0x5, 0x4c, 0x27, 0x2, 0x26d, 0x271, 0x5, 0x4e, 0x28, 0x2, 0x26e, 0x26f, 
    0x7, 0x9, 0x2, 0x2, 0x26f, 0x271, 0x5, 0x50, 0x29, 0x2, 0x270, 0x26b, 
    0x3, 0x2, 0x2, 0x2, 0x270, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x270, 0x26e, 
    0x3, 0x2, 0x2, 0x2, 0x271, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x7, 
    0x47, 0x2, 0x2, 0x273, 0x61, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x7, 
    0x64, 0x2, 0x2, 0x275, 0x278, 0x5, 0x52, 0x2a, 0x2, 0x276, 0x278, 0x7, 
    0x64, 0x2, 0x2, 0x277, 0x274, 0x3, 0x2, 0x2, 0x2, 0x277, 0x276, 0x3, 
    0x2, 0x2, 0x2, 0x278, 0x63, 0x3, 0x2, 0x2, 0x2, 0x279, 0x282, 0x5, 0x56, 
    0x2c, 0x2, 0x27a, 0x282, 0x5, 0x58, 0x2d, 0x2, 0x27b, 0x282, 0x5, 0x5a, 
    0x2e, 0x2, 0x27c, 0x282, 0x5, 0x54, 0x2b, 0x2, 0x27d, 0x282, 0x5, 0x5e, 
    0x30, 0x2, 0x27e, 0x282, 0x5, 0x5c, 0x2f, 0x2, 0x27f, 0x282, 0x5, 0x60, 
    0x31, 0x2, 0x280, 0x282, 0x5, 0x62, 0x32, 0x2, 0x281, 0x279, 0x3, 0x2, 
    0x2, 0x2, 0x281, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27b, 0x3, 0x2, 
    0x2, 0x2, 0x281, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27d, 0x3, 0x2, 
    0x2, 0x2, 0x281, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x281, 0x27f, 0x3, 0x2, 
    0x2, 0x2, 0x281, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x283, 0x284, 0x7, 0x5d, 0x2, 0x2, 0x284, 0x285, 0x7, 0x73, 0x2, 
    0x2, 0x285, 0x286, 0x9, 0x6, 0x2, 0x2, 0x286, 0x287, 0x7, 0x72, 0x2, 
    0x2, 0x287, 0x288, 0x5, 0xe, 0x8, 0x2, 0x288, 0x289, 0x7, 0x5a, 0x2, 
    0x2, 0x289, 0x67, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x7, 0x5e, 0x2, 
    0x2, 0x28b, 0x28c, 0x5, 0xe, 0x8, 0x2, 0x28c, 0x28d, 0x5, 0x82, 0x42, 
    0x2, 0x28d, 0x293, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x7, 0x5e, 0x2, 
    0x2, 0x28f, 0x290, 0x5, 0x52, 0x2a, 0x2, 0x290, 0x291, 0x5, 0x82, 0x42, 
    0x2, 0x291, 0x293, 0x3, 0x2, 0x2, 0x2, 0x292, 0x28a, 0x3, 0x2, 0x2, 
    0x2, 0x292, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x293, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x294, 0x295, 0x7, 0x5e, 0x2, 0x2, 0x295, 0x296, 0x5, 0xe, 0x8, 0x2, 
    0x296, 0x297, 0x7, 0x61, 0x2, 0x2, 0x297, 0x298, 0x5, 0x34, 0x1b, 0x2, 
    0x298, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x5, 0x68, 0x35, 0x2, 
    0x29a, 0x29b, 0x5, 0x82, 0x42, 0x2, 0x29b, 0x2a5, 0x3, 0x2, 0x2, 0x2, 
    0x29c, 0x29d, 0x5, 0x66, 0x34, 0x2, 0x29d, 0x29e, 0x7, 0x5, 0x2, 0x2, 
    0x29e, 0x29f, 0x5, 0x82, 0x42, 0x2, 0x29f, 0x2a5, 0x3, 0x2, 0x2, 0x2, 
    0x2a0, 0x2a1, 0x5, 0x6a, 0x36, 0x2, 0x2a1, 0x2a2, 0x7, 0x5, 0x2, 0x2, 
    0x2a2, 0x2a3, 0x5, 0x82, 0x42, 0x2, 0x2a3, 0x2a5, 0x3, 0x2, 0x2, 0x2, 
    0x2a4, 0x299, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x29c, 0x3, 0x2, 0x2, 0x2, 
    0x2a4, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2a6, 
    0x2a7, 0x7, 0xa, 0x2, 0x2, 0x2a7, 0x2a8, 0x7, 0xb, 0x2, 0x2, 0x2a8, 
    0x6f, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x7, 0xc, 0x2, 0x2, 0x2aa, 0x2ab, 
    0x7, 0xb, 0x2, 0x2, 0x2ab, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 
    0xd, 0x2, 0x2, 0x2ad, 0x2ae, 0x7, 0xb, 0x2, 0x2, 0x2ae, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x2af, 0x2b0, 0x7, 0x62, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0xe, 
    0x8, 0x2, 0x2b1, 0x2b2, 0x7, 0x64, 0x2, 0x2, 0x2b2, 0x2b4, 0x9, 0x7, 
    0x2, 0x2, 0x2b3, 0x2b5, 0x7, 0x66, 0x2, 0x2, 0x2b4, 0x2b3, 0x3, 0x2, 
    0x2, 0x2, 0x2b4, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 
    0x2, 0x2, 0x2b6, 0x2b7, 0x9, 0x8, 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0x44, 
    0x2, 0x2, 0x2b8, 0x2b9, 0x7, 0x5f, 0x2, 0x2, 0x2b9, 0x2ba, 0x7, 0x5a, 
    0x2, 0x2, 0x2ba, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x7, 0x62, 
    0x2, 0x2, 0x2bc, 0x2bd, 0x5, 0xe, 0x8, 0x2, 0x2bd, 0x2be, 0x7, 0x69, 
    0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x65, 0x2, 0x2, 0x2bf, 0x2c0, 0x9, 0x9, 
    0x2, 0x2, 0x2c0, 0x2c1, 0x7, 0x1f, 0x2, 0x2, 0x2c1, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x2c2, 0x2c3, 0x7, 0x62, 0x2, 0x2, 0x2c3, 0x2c4, 0x7, 0x6e, 
    0x2, 0x2, 0x2c4, 0x2c5, 0x7, 0x4d, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x6f, 
    0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x39, 0x2, 0x2, 0x2c7, 0x2c8, 0x7, 0x5f, 
    0x2, 0x2, 0x2c8, 0x2c9, 0x7, 0x3a, 0x2, 0x2, 0x2c9, 0x79, 0x3, 0x2, 
    0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x62, 0x2, 0x2, 0x2cb, 0x2cc, 0x9, 0x9, 
    0x2, 0x2, 0x2cc, 0x2d3, 0x7, 0x63, 0x2, 0x2, 0x2cd, 0x2ce, 0x7, 0x62, 
    0x2, 0x2, 0x2ce, 0x2cf, 0x5, 0x52, 0x2a, 0x2, 0x2cf, 0x2d0, 0x7, 0x6f, 
    0x2, 0x2, 0x2d0, 0x2d1, 0x7, 0x4b, 0x2, 0x2, 0x2d1, 0x2d3, 0x3, 0x2, 
    0x2, 0x2, 0x2d2, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2cd, 0x3, 0x2, 
    0x2, 0x2, 0x2d3, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d9, 0x5, 0x74, 
    0x3b, 0x2, 0x2d5, 0x2d9, 0x5, 0x76, 0x3c, 0x2, 0x2d6, 0x2d9, 0x5, 0x7a, 
    0x3e, 0x2, 0x2d7, 0x2d9, 0x5, 0x78, 0x3d, 0x2, 0x2d8, 0x2d4, 0x3, 0x2, 
    0x2, 0x2, 0x2d8, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d6, 0x3, 0x2, 
    0x2, 0x2, 0x2d8, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x2da, 0x2db, 0x5, 0x7c, 0x3f, 0x2, 0x2db, 0x2dd, 0x7, 0x5, 0x2, 
    0x2, 0x2dc, 0x2de, 0x7, 0x6a, 0x2, 0x2, 0x2dd, 0x2dc, 0x3, 0x2, 0x2, 
    0x2, 0x2dd, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 0x3, 0x2, 0x2, 
    0x2, 0x2df, 0x2e0, 0x5, 0x82, 0x42, 0x2, 0x2e0, 0x2eb, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x2e2, 0x5, 0x6e, 0x38, 0x2, 0x2e2, 0x2e3, 0x5, 0x82, 0x42, 
    0x2, 0x2e3, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2e4, 0x2e5, 0x5, 0x70, 0x39, 
    0x2, 0x2e5, 0x2e6, 0x5, 0x82, 0x42, 0x2, 0x2e6, 0x2eb, 0x3, 0x2, 0x2, 
    0x2, 0x2e7, 0x2e8, 0x5, 0x72, 0x3a, 0x2, 0x2e8, 0x2e9, 0x5, 0x82, 0x42, 
    0x2, 0x2e9, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2da, 0x3, 0x2, 0x2, 
    0x2, 0x2ea, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2ea, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2ea, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x2ec, 0x2ed, 0x7, 0x60, 0x2, 0x2, 0x2ed, 0x2f1, 0x7, 0x5, 0x2, 0x2, 
    0x2ee, 0x2f1, 0x7, 0x60, 0x2, 0x2, 0x2ef, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
    0x2f0, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2f0, 0x2ee, 0x3, 0x2, 0x2, 0x2, 
    0x2f0, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f5, 0x3, 0x2, 0x2, 0x2, 
    0x2f2, 0x2f6, 0x5, 0x2c, 0x17, 0x2, 0x2f3, 0x2f6, 0x5, 0x64, 0x33, 0x2, 
    0x2f4, 0x2f6, 0x5, 0x3e, 0x20, 0x2, 0x2f5, 0x2f2, 0x3, 0x2, 0x2, 0x2, 
    0x2f5, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f5, 0x2f4, 0x3, 0x2, 0x2, 0x2, 
    0x2f6, 0x2f7, 0x3, 0x2, 0x2, 0x2, 0x2f7, 0x2f8, 0x9, 0xa, 0x2, 0x2, 
    0x2f8, 0x81, 0x3, 0x2, 0x2, 0x2, 0x2f9, 0x312, 0x5, 0x80, 0x41, 0x2, 
    0x2fa, 0x2fb, 0x7, 0x6b, 0x2, 0x2, 0x2fb, 0x2fc, 0x5, 0x8c, 0x47, 0x2, 
    0x2fc, 0x2ff, 0x7, 0xf, 0x2, 0x2, 0x2fd, 0x2fe, 0x7, 0xb, 0x2, 0x2, 
    0x2fe, 0x300, 0x5, 0x80, 0x41, 0x2, 0x2ff, 0x2fd, 0x3, 0x2, 0x2, 0x2, 
    0x300, 0x301, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 
    0x301, 0x302, 0x3, 0x2, 0x2, 0x2, 0x302, 0x312, 0x3, 0x2, 0x2, 0x2, 
    0x303, 0x304, 0x7, 0x6b, 0x2, 0x2, 0x304, 0x305, 0x5, 0x8c, 0x47, 0x2, 
    0x305, 0x306, 0x7, 0x33, 0x2, 0x2, 0x306, 0x307, 0x7, 0x6d, 0x2, 0x2, 
    0x307, 0x308, 0x5, 0xe, 0x8, 0x2, 0x308, 0x309, 0x7, 0x58, 0x2, 0x2, 
    0x309, 0x30a, 0x5, 0x34, 0x1b, 0x2, 0x30a, 0x30d, 0x7, 0xf, 0x2, 0x2, 
    0x30b, 0x30c, 0x7, 0xb, 0x2, 0x2, 0x30c, 0x30e, 0x5, 0x80, 0x41, 0x2, 
    0x30d, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 
    0x30f, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x3, 0x2, 0x2, 0x2, 
    0x310, 0x312, 0x3, 0x2, 0x2, 0x2, 0x311, 0x2f9, 0x3, 0x2, 0x2, 0x2, 
    0x311, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x311, 0x303, 0x3, 0x2, 0x2, 0x2, 
    0x312, 0x83, 0x3, 0x2, 0x2, 0x2, 0x313, 0x317, 0x5, 0x7e, 0x40, 0x2, 
    0x314, 0x317, 0x5, 0x6c, 0x37, 0x2, 0x315, 0x317, 0x5, 0x82, 0x42, 0x2, 
    0x316, 0x313, 0x3, 0x2, 0x2, 0x2, 0x316, 0x314, 0x3, 0x2, 0x2, 0x2, 
    0x316, 0x315, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x3, 0x2, 0x2, 0x2, 
    0x318, 0x316, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x3, 0x2, 0x2, 0x2, 
    0x319, 0x31a, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x31b, 0x7, 0x2, 0x2, 0x3, 
    0x31b, 0x85, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31d, 0x7, 0x73, 0x2, 0x2, 
    0x31d, 0x31e, 0x7, 0x57, 0x2, 0x2, 0x31e, 0x31f, 0x7, 0x72, 0x2, 0x2, 
    0x31f, 0x320, 0x7, 0x44, 0x2, 0x2, 0x320, 0x321, 0x7, 0x58, 0x2, 0x2, 
    0x321, 0x322, 0x5, 0xe, 0x8, 0x2, 0x322, 0x323, 0x7, 0x54, 0x2, 0x2, 
    0x323, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 0x7, 0x73, 0x2, 0x2, 
    0x325, 0x326, 0x7, 0x57, 0x2, 0x2, 0x326, 0x327, 0x7, 0x72, 0x2, 0x2, 
    0x327, 0x328, 0x7, 0x22, 0x2, 0x2, 0x328, 0x329, 0x7, 0x44, 0x2, 0x2, 
    0x329, 0x32a, 0x7, 0x58, 0x2, 0x2, 0x32a, 0x32b, 0x5, 0xe, 0x8, 0x2, 
    0x32b, 0x32c, 0x7, 0x54, 0x2, 0x2, 0x32c, 0x32e, 0x3, 0x2, 0x2, 0x2, 
    0x32d, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x32d, 0x324, 0x3, 0x2, 0x2, 0x2, 
    0x32e, 0x87, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x330, 0x7, 0x7a, 0x2, 0x2, 
    0x330, 0x89, 0x3, 0x2, 0x2, 0x2, 0x331, 0x332, 0x9, 0xb, 0x2, 0x2, 0x332, 
    0x8b, 0x3, 0x2, 0x2, 0x2, 0x333, 0x337, 0x5, 0x88, 0x45, 0x2, 0x334, 
    0x337, 0x5, 0x8a, 0x46, 0x2, 0x335, 0x337, 0x5, 0x86, 0x44, 0x2, 0x336, 
    0x333, 0x3, 0x2, 0x2, 0x2, 0x336, 0x334, 0x3, 0x2, 0x2, 0x2, 0x336, 
    0x335, 0x3, 0x2, 0x2, 0x2, 0x337, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x93, 
    0xa2, 0xab, 0xb5, 0xca, 0xd5, 0xea, 0xf2, 0xfa, 0xfd, 0x101, 0x104, 
    0x111, 0x11c, 0x121, 0x127, 0x12e, 0x139, 0x140, 0x15b, 0x180, 0x192, 
    0x19c, 0x1a1, 0x1b2, 0x1b7, 0x1be, 0x1c7, 0x1d3, 0x1d7, 0x1dc, 0x1e3, 
    0x1ea, 0x1f1, 0x1f8, 0x1fc, 0x201, 0x208, 0x20b, 0x225, 0x237, 0x244, 
    0x254, 0x270, 0x277, 0x281, 0x292, 0x2a4, 0x2b4, 0x2d2, 0x2d8, 0x2dd, 
    0x2ea, 0x2f0, 0x2f5, 0x301, 0x30f, 0x311, 0x316, 0x318, 0x32d, 0x336, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

IvionParser::Initializer IvionParser::_init;
