
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
  enterRule(_localctx, 0, IvionParser::RuleFilterPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(108);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Player

      || _la == IvionParser::Enemy)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(111); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == IvionParser::Player

    || _la == IvionParser::Enemy);
   
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
  enterRule(_localctx, 2, IvionParser::RuleTargetPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(113);
      match(IvionParser::Target);
      setState(114);
      filterPlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      match(IvionParser::Another);
      setState(116);
      match(IvionParser::Target);
      setState(117);
      filterPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(118);
      match(IvionParser::Target);
      setState(119);
      match(IvionParser::Another);
      setState(120);
      filterPlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(121);
      match(IvionParser::UpTo);
      setState(122);
      integer();
      setState(123);
      match(IvionParser::Target);
      setState(124);
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
  enterRule(_localctx, 4, IvionParser::RuleSelectPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::A: {
        enterOuterAlt(_localctx, 1);
        setState(128);
        match(IvionParser::A);
        setState(129);
        filterPlayer();
        break;
      }

      case IvionParser::Another: {
        enterOuterAlt(_localctx, 2);
        setState(130);
        match(IvionParser::Another);
        setState(131);
        filterPlayer();
        break;
      }

      case IvionParser::Its: {
        enterOuterAlt(_localctx, 3);
        setState(132);
        match(IvionParser::Its);
        setState(133);
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
  enterRule(_localctx, 6, IvionParser::RuleCardController);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
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
  enterRule(_localctx, 8, IvionParser::RulePreviousPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
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
  enterRule(_localctx, 10, IvionParser::RulePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(140);
      cardController();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(141);
      selectPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(142);
      previousPlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(143);
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
  enterRule(_localctx, 12, IvionParser::RuleDamagePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(165);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(146);
      match(IvionParser::Deal);
      setState(147);
      integer();
      setState(148);
      match(IvionParser::Damage);
      setState(149);
      match(IvionParser::To);
      setState(150);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(152);
      player();
      setState(153);
      match(IvionParser::Take);
      setState(154);
      integer();
      setState(155);
      match(IvionParser::Damage);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(157);
      match(IvionParser::Deal);
      setState(158);
      match(IvionParser::Damage);
      setState(159);
      match(IvionParser::To);
      setState(160);
      player();
      setState(161);
      match(IvionParser::T__0);
      setState(162);
      match(IvionParser::To);
      setState(163);
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

//----------------- ControlContext ------------------------------------------------------------------

IvionParser::ControlContext::ControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ControlContext::Slow() {
  return getToken(IvionParser::Slow, 0);
}

tree::TerminalNode* IvionParser::ControlContext::Silence() {
  return getToken(IvionParser::Silence, 0);
}

tree::TerminalNode* IvionParser::ControlContext::Disarm() {
  return getToken(IvionParser::Disarm, 0);
}


size_t IvionParser::ControlContext::getRuleIndex() const {
  return IvionParser::RuleControl;
}


antlrcpp::Any IvionParser::ControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitControl(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ControlContext* IvionParser::control() {
  ControlContext *_localctx = _tracker.createInstance<ControlContext>(_ctx, getState());
  enterRule(_localctx, 14, IvionParser::RuleControl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Disarm)
      | (1ULL << IvionParser::Silence)
      | (1ULL << IvionParser::Slow))) != 0))) {
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

//----------------- ControlPlayerContext ------------------------------------------------------------------

IvionParser::ControlPlayerContext::ControlPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::ControlContext* IvionParser::ControlPlayerContext::control() {
  return getRuleContext<IvionParser::ControlContext>(0);
}

IvionParser::IntegerContext* IvionParser::ControlPlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

IvionParser::PlayerContext* IvionParser::ControlPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Disarm:
      case IvionParser::Silence:
      case IvionParser::Slow: {
        enterOuterAlt(_localctx, 1);
        setState(169);
        control();
        setState(170);
        integer();
        setState(171);
        player();
        break;
      }

      case IvionParser::Target:
      case IvionParser::Another:
      case IvionParser::CardController:
      case IvionParser::PreviousPlayer:
      case IvionParser::Its:
      case IvionParser::UpTo:
      case IvionParser::A: {
        enterOuterAlt(_localctx, 2);
        setState(173);
        player();
        setState(174);
        match(IvionParser::Is);
        setState(175);
        control();
        setState(176);
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
    setState(180);
    match(IvionParser::Move);
    setState(181);
    match(IvionParser::To);
    setState(182);
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

IvionParser::PlayerContext* IvionParser::TravelPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::UpTo() {
  return getToken(IvionParser::UpTo, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Away() {
  return getToken(IvionParser::Away, 0);
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
    setState(210);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(184);
      match(IvionParser::Travel);
      setState(185);
      match(IvionParser::To);
      setState(186);
      tile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(187);
      match(IvionParser::Travel);
      setState(188);
      integer();
      setState(189);
      match(IvionParser::Tile);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(191);
      match(IvionParser::Travel);
      setState(192);
      player();
      setState(193);
      match(IvionParser::To);
      setState(194);
      tile();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(196);
      match(IvionParser::Travel);
      setState(197);
      player();
      setState(199);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::UpTo) {
        setState(198);
        match(IvionParser::UpTo);
      }
      setState(201);
      integer();
      setState(202);
      match(IvionParser::Tile);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(204);
      match(IvionParser::Travel);
      setState(205);
      player();
      setState(206);
      match(IvionParser::Away);
      setState(207);
      integer();
      setState(208);
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

//----------------- GainResourceContext ------------------------------------------------------------------

IvionParser::GainResourceContext::GainResourceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GainResourceContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

IvionParser::IntegerContext* IvionParser::GainResourceContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
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
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::CardController)
      | (1ULL << IvionParser::PreviousPlayer)
      | (1ULL << IvionParser::Its)
      | (1ULL << IvionParser::UpTo))) != 0) || _la == IvionParser::A) {
      setState(212);
      player();
    }
    setState(215);
    match(IvionParser::Gain);
    setState(216);
    integer();
    setState(218);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::T__1) {
      setState(217);
      match(IvionParser::T__1);
    }
    setState(220);
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
    setState(231);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target:
      case IvionParser::Another:
      case IvionParser::CardController:
      case IvionParser::PreviousPlayer:
      case IvionParser::Its:
      case IvionParser::UpTo:
      case IvionParser::A: {
        enterOuterAlt(_localctx, 1);
        setState(222);
        player();
        setState(223);
        match(IvionParser::Draw);
        setState(224);
        integer();
        setState(225);
        match(IvionParser::Card);
        break;
      }

      case IvionParser::Draw: {
        enterOuterAlt(_localctx, 2);
        setState(227);
        match(IvionParser::Draw);
        setState(228);
        integer();
        setState(229);
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

tree::TerminalNode* IvionParser::UseSecondWindContext::CardController() {
  return getToken(IvionParser::CardController, 0);
}

tree::TerminalNode* IvionParser::UseSecondWindContext::PreviousPlayer() {
  return getToken(IvionParser::PreviousPlayer, 0);
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
  enterRule(_localctx, 26, IvionParser::RuleUseSecondWind);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    match(IvionParser::Use);
    setState(234);
    _la = _input->LA(1);
    if (!(_la == IvionParser::CardController

    || _la == IvionParser::PreviousPlayer)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(235);
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

std::vector<IvionParser::IntegerContext *> IvionParser::PlayACardContext::integer() {
  return getRuleContexts<IvionParser::IntegerContext>();
}

IvionParser::IntegerContext* IvionParser::PlayACardContext::integer(size_t i) {
  return getRuleContext<IvionParser::IntegerContext>(i);
}

tree::TerminalNode* IvionParser::PlayACardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::PlayACardContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::PlayACardContext::For() {
  return getToken(IvionParser::For, 0);
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
  enterRule(_localctx, 28, IvionParser::RulePlayACard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(267);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(237);
      player();
      setState(239);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::May) {
        setState(238);
        match(IvionParser::May);
      }
      setState(241);
      match(IvionParser::Play);
      setState(242);
      integer();
      setState(243);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(245);
      player();
      setState(247);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::May) {
        setState(246);
        match(IvionParser::May);
      }
      setState(249);
      match(IvionParser::Play);
      setState(250);
      integer();
      setState(251);
      match(IvionParser::Card);
      setState(252);
      match(IvionParser::For);
      setState(253);
      integer();
      setState(254);
      match(IvionParser::Less);
      setState(255);
      match(IvionParser::Resource);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(257);
      player();
      setState(259);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::May) {
        setState(258);
        match(IvionParser::May);
      }
      setState(261);
      match(IvionParser::Play);
      setState(262);
      integer();
      setState(263);
      match(IvionParser::Card);
      setState(264);
      match(IvionParser::For);
      setState(265);
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
  enterRule(_localctx, 30, IvionParser::RuleHeal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(IvionParser::Heal);
    setState(270);
    player();
    setState(271);
    integer();
    setState(272);
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
  enterRule(_localctx, 32, IvionParser::RuleRangeSource);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(IvionParser::All);
    setState(275);
    match(IvionParser::Of);
    setState(276);
    match(IvionParser::CardController);
    setState(277);
    match(IvionParser::Card);
    setState(278);
    match(IvionParser::T__2);
    setState(279);
    match(IvionParser::T__3);
    setState(280);
    match(IvionParser::Travel);
    setState(281);
    match(IvionParser::Card);
    setState(282);
    match(IvionParser::That);
    setState(283);
    match(IvionParser::Target);
    setState(284);
    match(IvionParser::A);
    setState(285);
    match(IvionParser::Tile);
    setState(286);
    match(IvionParser::T__2);
    setState(287);
    match(IvionParser::T__4);
    setState(288);
    match(IvionParser::Draw);
    setState(289);
    match(IvionParser::Range);
    setState(290);
    match(IvionParser::From);
    setState(294);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(291);
        matchWildcard(); 
      }
      setState(296);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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
  enterRule(_localctx, 34, IvionParser::RuleRevealFromHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    player();
    setState(298);
    match(IvionParser::Reveal);
    setState(299);
    integer();
    setState(300);
    match(IvionParser::Card);
    setState(301);
    match(IvionParser::From);
    setState(302);
    match(IvionParser::PreviousPlayer);
    setState(303);
    match(IvionParser::Hand);
   
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
  enterRule(_localctx, 36, IvionParser::RuleEffectPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(316);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(305);
      damagePlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(306);
      controlPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(307);
      movePlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(308);
      travelPlayer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(309);
      gainResource();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(310);
      drawCards();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(311);
      useSecondWind();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(312);
      playACard();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(313);
      heal();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(314);
      rangeSource();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(315);
      revealFromHand();
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
  enterRule(_localctx, 38, IvionParser::RuleTargetTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(318);
      match(IvionParser::Target);
      setState(319);
      match(IvionParser::Tile);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(320);
      match(IvionParser::Target);
      setState(321);
      match(IvionParser::Another);
      setState(322);
      match(IvionParser::Tile);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(323);
      match(IvionParser::Another);
      setState(324);
      match(IvionParser::Target);
      setState(325);
      match(IvionParser::Tile);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(326);
      match(IvionParser::UpTo);
      setState(327);
      integer();
      setState(328);
      match(IvionParser::Target);
      setState(329);
      match(IvionParser::Tile);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(331);
      match(IvionParser::Target);
      setState(332);
      match(IvionParser::Empty);
      setState(333);
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
  enterRule(_localctx, 40, IvionParser::RuleSelectTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(IvionParser::A);
    setState(337);
    match(IvionParser::Tile);
   
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
  enterRule(_localctx, 42, IvionParser::RuleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::A: {
        enterOuterAlt(_localctx, 1);
        setState(339);
        selectTile();
        break;
      }

      case IvionParser::Target:
      case IvionParser::Another:
      case IvionParser::UpTo: {
        enterOuterAlt(_localctx, 2);
        setState(340);
        targetTile();
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

tree::TerminalNode* IvionParser::TargetCardContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::TargetCardContext::UpTo() {
  return getToken(IvionParser::UpTo, 0);
}

IvionParser::IntegerContext* IvionParser::TargetCardContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
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
  enterRule(_localctx, 44, IvionParser::RuleTargetCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(343);
      match(IvionParser::Target);
      setState(344);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(345);
      match(IvionParser::Another);
      setState(346);
      match(IvionParser::Target);
      setState(347);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(348);
      match(IvionParser::Target);
      setState(349);
      match(IvionParser::Another);
      setState(350);
      match(IvionParser::Card);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(351);
      match(IvionParser::UpTo);
      setState(352);
      integer();
      setState(353);
      match(IvionParser::Target);
      setState(354);
      match(IvionParser::Card);
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

//----------------- SelectCardContext ------------------------------------------------------------------

IvionParser::SelectCardContext::SelectCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SelectCardContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::SelectCardContext::Card() {
  return getToken(IvionParser::Card, 0);
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
  enterRule(_localctx, 46, IvionParser::RuleSelectCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    match(IvionParser::A);
    setState(359);
    match(IvionParser::Card);
   
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
  enterRule(_localctx, 48, IvionParser::RulePreviousCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    match(IvionParser::That);
    setState(362);
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
  enterRule(_localctx, 50, IvionParser::RuleTopOfStack);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    match(IvionParser::Top);
    setState(365);
    match(IvionParser::Of);
    setState(366);
    match(IvionParser::The);
    setState(367);
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
  enterRule(_localctx, 52, IvionParser::RuleBottomOfDeck);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(385);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(369);
      match(IvionParser::The);
      setState(370);
      match(IvionParser::Card);
      setState(371);
      match(IvionParser::On);
      setState(372);
      match(IvionParser::The);
      setState(373);
      match(IvionParser::Bottom);
      setState(374);
      match(IvionParser::Of);
      setState(375);
      player();
      setState(376);
      match(IvionParser::Deck);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(378);
      match(IvionParser::The);
      setState(379);
      match(IvionParser::Bottom);
      setState(380);
      match(IvionParser::Card);
      setState(381);
      match(IvionParser::Of);
      setState(382);
      player();
      setState(383);
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
  enterRule(_localctx, 54, IvionParser::RuleTopOfDeck);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(403);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(387);
      match(IvionParser::The);
      setState(388);
      match(IvionParser::Card);
      setState(389);
      match(IvionParser::On);
      setState(390);
      match(IvionParser::The);
      setState(391);
      match(IvionParser::Top);
      setState(392);
      match(IvionParser::Of);
      setState(393);
      player();
      setState(394);
      match(IvionParser::Deck);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(396);
      match(IvionParser::The);
      setState(397);
      match(IvionParser::Top);
      setState(398);
      match(IvionParser::Card);
      setState(399);
      match(IvionParser::Of);
      setState(400);
      player();
      setState(401);
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
  enterRule(_localctx, 56, IvionParser::RuleHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    player();
    setState(406);
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

IvionParser::PreviousCardContext* IvionParser::CardContext::previousCard() {
  return getRuleContext<IvionParser::PreviousCardContext>(0);
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
  enterRule(_localctx, 58, IvionParser::RuleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(416);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(408);
      targetCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(409);
      selectCard();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(410);
      topOfStack();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(411);
      bottomOfDeck();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(412);
      topOfDeck();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(413);
      match(IvionParser::From);
      setState(414);
      hand();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(415);
      previousCard();
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
  enterRule(_localctx, 60, IvionParser::RuleAttachCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(432);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(418);
      match(IvionParser::Attach);
      setState(419);
      match(IvionParser::To);
      setState(420);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(421);
      match(IvionParser::Attach);
      setState(422);
      match(IvionParser::To);
      setState(423);
      tile();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(424);
      match(IvionParser::Attach);
      setState(425);
      match(IvionParser::To);
      setState(426);
      tile();
      setState(427);
      match(IvionParser::Until);
      setState(428);
      match(IvionParser::End);
      setState(429);
      match(IvionParser::Of);
      setState(430);
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
  enterRule(_localctx, 62, IvionParser::RuleMetaCounterCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(IvionParser::Meta);
    setState(435);
    match(IvionParser::Counter);
    setState(436);
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
  enterRule(_localctx, 64, IvionParser::RuleCounterCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    match(IvionParser::Counter);
    setState(439);
    card();
    setState(440);
    match(IvionParser::Unless);
    setState(441);
    player();
    setState(442);
    match(IvionParser::Pays);
    setState(443);
    integer();
    setState(444);
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
  enterRule(_localctx, 66, IvionParser::RuleDestroyCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    match(IvionParser::Destroy);
    setState(447);
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
  enterRule(_localctx, 68, IvionParser::RuleCardGainsTrait);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    card();
    setState(450);
    match(IvionParser::Gain);

    setState(451);
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
  enterRule(_localctx, 70, IvionParser::RulePutCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(IvionParser::Put);
    setState(454);
    card();
    setState(460);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::On: {
        setState(455);
        match(IvionParser::On);
        setState(456);
        bottomOfDeck();
        break;
      }

      case IvionParser::The: {
        setState(457);
        topOfDeck();
        break;
      }

      case IvionParser::T__6: {
        setState(458);
        match(IvionParser::T__6);
        setState(459);
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
  enterRule(_localctx, 72, IvionParser::RuleCardEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(468);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Meta: {
        enterOuterAlt(_localctx, 1);
        setState(462);
        metaCounterCard();
        break;
      }

      case IvionParser::Counter: {
        enterOuterAlt(_localctx, 2);
        setState(463);
        counterCard();
        break;
      }

      case IvionParser::Destroy: {
        enterOuterAlt(_localctx, 3);
        setState(464);
        destroyCard();
        break;
      }

      case IvionParser::Attach: {
        enterOuterAlt(_localctx, 4);
        setState(465);
        attachCard();
        break;
      }

      case IvionParser::Put: {
        enterOuterAlt(_localctx, 5);
        setState(466);
        putCard();
        break;
      }

      case IvionParser::Target:
      case IvionParser::Another:
      case IvionParser::UpTo:
      case IvionParser::That:
      case IvionParser::Top:
      case IvionParser::From:
      case IvionParser::A:
      case IvionParser::The: {
        enterOuterAlt(_localctx, 6);
        setState(467);
        cardGainsTrait();
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
  enterRule(_localctx, 74, IvionParser::RuleTurnTrigger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(IvionParser::At);
    setState(471);
    match(IvionParser::The);
    setState(472);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Start

    || _la == IvionParser::End)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(473);
    match(IvionParser::Of);
    setState(474);
    player();
    setState(475);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriggerConditionsContext ------------------------------------------------------------------

IvionParser::TriggerConditionsContext::TriggerConditionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::TurnTriggerContext* IvionParser::TriggerConditionsContext::turnTrigger() {
  return getRuleContext<IvionParser::TurnTriggerContext>(0);
}


size_t IvionParser::TriggerConditionsContext::getRuleIndex() const {
  return IvionParser::RuleTriggerConditions;
}


antlrcpp::Any IvionParser::TriggerConditionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitTriggerConditions(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TriggerConditionsContext* IvionParser::triggerConditions() {
  TriggerConditionsContext *_localctx = _tracker.createInstance<TriggerConditionsContext>(_ctx, getState());
  enterRule(_localctx, 76, IvionParser::RuleTriggerConditions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    turnTrigger();
   
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

IvionParser::TriggerConditionsContext* IvionParser::TriggerEffectContext::triggerConditions() {
  return getRuleContext<IvionParser::TriggerConditionsContext>(0);
}

IvionParser::EffectContext* IvionParser::TriggerEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
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
  enterRule(_localctx, 78, IvionParser::RuleTriggerEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    triggerConditions();
    setState(480);
    match(IvionParser::T__2);
    setState(481);
    effect();
    setState(482);
    match(IvionParser::T__7);
   
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
  enterRule(_localctx, 80, IvionParser::RuleBreach);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(484);
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
  enterRule(_localctx, 82, IvionParser::RuleAdvantage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    match(IvionParser::T__9);
   
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

tree::TerminalNode* IvionParser::ResolvedContext::Resolved() {
  return getToken(IvionParser::Resolved, 0);
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
  enterRule(_localctx, 84, IvionParser::RuleResolved);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(488);
    match(IvionParser::If);
    setState(489);
    player();
    setState(490);
    match(IvionParser::Resolved);
    setState(491);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Another

    || _la == IvionParser::A)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(493);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(492);
      match(IvionParser::Non);
    }
    setState(495);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Ability

    || _la == IvionParser::Attack)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(496);
    match(IvionParser::Card);
    setState(497);
    match(IvionParser::This);
    setState(498);
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
  enterRule(_localctx, 86, IvionParser::RuleUsedSecondWind);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(IvionParser::If);
    setState(501);
    player();
    setState(502);
    match(IvionParser::Already);
    setState(503);
    match(IvionParser::Used);
    setState(504);
    _la = _input->LA(1);
    if (!(_la == IvionParser::CardController

    || _la == IvionParser::PreviousPlayer)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(505);
    match(IvionParser::SecondWind);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfMadeChoiceContext ------------------------------------------------------------------

IvionParser::IfMadeChoiceContext::IfMadeChoiceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfMadeChoiceContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::IfMadeChoiceContext::Do() {
  return getToken(IvionParser::Do, 0);
}

tree::TerminalNode* IvionParser::IfMadeChoiceContext::CardController() {
  return getToken(IvionParser::CardController, 0);
}

tree::TerminalNode* IvionParser::IfMadeChoiceContext::PreviousPlayer() {
  return getToken(IvionParser::PreviousPlayer, 0);
}


size_t IvionParser::IfMadeChoiceContext::getRuleIndex() const {
  return IvionParser::RuleIfMadeChoice;
}


antlrcpp::Any IvionParser::IfMadeChoiceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitIfMadeChoice(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfMadeChoiceContext* IvionParser::ifMadeChoice() {
  IfMadeChoiceContext *_localctx = _tracker.createInstance<IfMadeChoiceContext>(_ctx, getState());
  enterRule(_localctx, 88, IvionParser::RuleIfMadeChoice);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(IvionParser::If);
    setState(508);
    _la = _input->LA(1);
    if (!(_la == IvionParser::CardController

    || _la == IvionParser::PreviousPlayer)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(509);
    match(IvionParser::Do);
   
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

IvionParser::BreachContext* IvionParser::ReplacementConditionContext::breach() {
  return getRuleContext<IvionParser::BreachContext>(0);
}

IvionParser::AdvantageContext* IvionParser::ReplacementConditionContext::advantage() {
  return getRuleContext<IvionParser::AdvantageContext>(0);
}

IvionParser::UsedSecondWindContext* IvionParser::ReplacementConditionContext::usedSecondWind() {
  return getRuleContext<IvionParser::UsedSecondWindContext>(0);
}

IvionParser::IfMadeChoiceContext* IvionParser::ReplacementConditionContext::ifMadeChoice() {
  return getRuleContext<IvionParser::IfMadeChoiceContext>(0);
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
  enterRule(_localctx, 90, IvionParser::RuleReplacementCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(516);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(511);
      resolved();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(512);
      breach();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(513);
      advantage();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(514);
      usedSecondWind();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(515);
      ifMadeChoice();
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
  enterRule(_localctx, 92, IvionParser::RuleReplacementEffect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    replacementCondition();
    setState(519);
    match(IvionParser::T__2);
    setState(521);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Instead) {
      setState(520);
      match(IvionParser::Instead);
    }
    setState(523);
    effect();
    setState(524);
    match(IvionParser::T__7);
   
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

IvionParser::EffectPlayerContext* IvionParser::EffectContext::effectPlayer() {
  return getRuleContext<IvionParser::EffectPlayerContext>(0);
}

IvionParser::CardEffectContext* IvionParser::EffectContext::cardEffect() {
  return getRuleContext<IvionParser::CardEffectContext>(0);
}

tree::TerminalNode* IvionParser::EffectContext::Then() {
  return getToken(IvionParser::Then, 0);
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
  enterRule(_localctx, 94, IvionParser::RuleEffect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Then) {
      setState(526);
      match(IvionParser::Then);
      setState(527);
      match(IvionParser::T__2);
    }
    setState(532);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(530);
      effectPlayer();
      break;
    }

    case 2: {
      setState(531);
      cardEffect();
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

//----------------- ChooseContext ------------------------------------------------------------------

IvionParser::ChooseContext::ChooseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IntegerContext* IvionParser::ChooseContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

std::vector<IvionParser::EffectContext *> IvionParser::ChooseContext::effect() {
  return getRuleContexts<IvionParser::EffectContext>();
}

IvionParser::EffectContext* IvionParser::ChooseContext::effect(size_t i) {
  return getRuleContext<IvionParser::EffectContext>(i);
}


size_t IvionParser::ChooseContext::getRuleIndex() const {
  return IvionParser::RuleChoose;
}


antlrcpp::Any IvionParser::ChooseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitChoose(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ChooseContext* IvionParser::choose() {
  ChooseContext *_localctx = _tracker.createInstance<ChooseContext>(_ctx, getState());
  enterRule(_localctx, 96, IvionParser::RuleChoose);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    match(IvionParser::T__10);
    setState(535);
    integer();
    setState(536);
    match(IvionParser::T__11);
    setState(541); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(537);
      match(IvionParser::T__12);
      setState(538);
      effect();
      setState(539);
      match(IvionParser::T__7);
      setState(543); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == IvionParser::T__12);
   
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

std::vector<IvionParser::ChooseContext *> IvionParser::TextContext::choose() {
  return getRuleContexts<IvionParser::ChooseContext>();
}

IvionParser::ChooseContext* IvionParser::TextContext::choose(size_t i) {
  return getRuleContext<IvionParser::ChooseContext>(i);
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
  enterRule(_localctx, 98, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(551);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::T__10: {
          setState(545);
          choose();
          break;
        }

        case IvionParser::T__8:
        case IvionParser::T__9:
        case IvionParser::If: {
          setState(546);
          replacementEffect();
          break;
        }

        case IvionParser::At: {
          setState(547);
          triggerEffect();
          break;
        }

        case IvionParser::Heal:
        case IvionParser::Disarm:
        case IvionParser::Silence:
        case IvionParser::Slow:
        case IvionParser::Draw:
        case IvionParser::Deal:
        case IvionParser::Move:
        case IvionParser::Travel:
        case IvionParser::Target:
        case IvionParser::Gain:
        case IvionParser::Another:
        case IvionParser::CardController:
        case IvionParser::PreviousPlayer:
        case IvionParser::Its:
        case IvionParser::Use:
        case IvionParser::UpTo:
        case IvionParser::All:
        case IvionParser::Attach:
        case IvionParser::That:
        case IvionParser::Put:
        case IvionParser::Meta:
        case IvionParser::Counter:
        case IvionParser::Destroy:
        case IvionParser::Top:
        case IvionParser::From:
        case IvionParser::Then:
        case IvionParser::A:
        case IvionParser::The: {
          setState(548);
          effect();
          setState(549);
          match(IvionParser::T__7);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(553); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::T__8)
      | (1ULL << IvionParser::T__9)
      | (1ULL << IvionParser::T__10)
      | (1ULL << IvionParser::Heal)
      | (1ULL << IvionParser::Disarm)
      | (1ULL << IvionParser::Silence)
      | (1ULL << IvionParser::Slow)
      | (1ULL << IvionParser::Draw)
      | (1ULL << IvionParser::Deal)
      | (1ULL << IvionParser::Move)
      | (1ULL << IvionParser::Travel)
      | (1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Gain)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::CardController)
      | (1ULL << IvionParser::PreviousPlayer)
      | (1ULL << IvionParser::Its)
      | (1ULL << IvionParser::Use)
      | (1ULL << IvionParser::UpTo)
      | (1ULL << IvionParser::All)
      | (1ULL << IvionParser::Attach)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Put)
      | (1ULL << IvionParser::Meta)
      | (1ULL << IvionParser::Counter)
      | (1ULL << IvionParser::Destroy)
      | (1ULL << IvionParser::Top))) != 0) || ((((_la - 68) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 68)) & ((1ULL << (IvionParser::From - 68))
      | (1ULL << (IvionParser::At - 68))
      | (1ULL << (IvionParser::Then - 68))
      | (1ULL << (IvionParser::If - 68))
      | (1ULL << (IvionParser::A - 68))
      | (1ULL << (IvionParser::The - 68)))) != 0));
    setState(555);
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
  enterRule(_localctx, 100, IvionParser::RuleTheNumberOfCardsInHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(574);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(557);
      match(IvionParser::The);
      setState(558);
      match(IvionParser::Number);
      setState(559);
      match(IvionParser::Of);
      setState(560);
      match(IvionParser::Card);
      setState(561);
      match(IvionParser::In);
      setState(562);
      player();
      setState(563);
      match(IvionParser::Hand);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(565);
      match(IvionParser::The);
      setState(566);
      match(IvionParser::Number);
      setState(567);
      match(IvionParser::Of);
      setState(568);
      match(IvionParser::Reveal);
      setState(569);
      match(IvionParser::Card);
      setState(570);
      match(IvionParser::In);
      setState(571);
      player();
      setState(572);
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
  enterRule(_localctx, 102, IvionParser::RuleIntegerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(576);
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
  enterRule(_localctx, 104, IvionParser::RuleIntegerWord);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    _la = _input->LA(1);
    if (!(((((_la - 87) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 87)) & ((1ULL << (IvionParser::A - 87))
      | (1ULL << (IvionParser::One - 87))
      | (1ULL << (IvionParser::Two - 87))
      | (1ULL << (IvionParser::Three - 87))
      | (1ULL << (IvionParser::Four - 87))
      | (1ULL << (IvionParser::Five - 87))
      | (1ULL << (IvionParser::Six - 87)))) != 0))) {
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
  enterRule(_localctx, 106, IvionParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(583);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 1);
        setState(580);
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
        setState(581);
        integerWord();
        break;
      }

      case IvionParser::The: {
        enterOuterAlt(_localctx, 3);
        setState(582);
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
  "filterPlayer", "targetPlayer", "selectPlayer", "cardController", "previousPlayer", 
  "player", "damagePlayer", "control", "controlPlayer", "movePlayer", "travelPlayer", 
  "gainResource", "drawCards", "useSecondWind", "playACard", "heal", "rangeSource", 
  "revealFromHand", "effectPlayer", "targetTile", "selectTile", "tile", 
  "targetCard", "selectCard", "previousCard", "topOfStack", "bottomOfDeck", 
  "topOfDeck", "hand", "card", "attachCard", "metaCounterCard", "counterCard", 
  "destroyCard", "cardGainsTrait", "putCard", "cardEffect", "turnTrigger", 
  "triggerConditions", "triggerEffect", "breach", "advantage", "resolved", 
  "usedSecondWind", "ifMadeChoice", "replacementCondition", "replacementEffect", 
  "effect", "choose", "text", "theNumberOfCardsInHand", "integerLiteral", 
  "integerWord", "integer"
};

std::vector<std::string> IvionParser::_literalNames = {
  "", "'equal'", "'more'", "','", "'except'", "'also'", "'stack'", "'into'", 
  "'.'", "'breach'", "'advantage'", "'choose'", "':'", "'-'", "", "", "", 
  "", "", "", "'deal'", "", "", "'target'", "", "", "'power'", "'initiative'", 
  "'second wind'", "'may'", "'play'", "", "'damage'", "", "", "'another'", 
  "", "", "'range'", "'away from you'", "'controller'", "'its'", "", "'up to'", 
  "", "", "'for'", "'less'", "'free'", "'all'", "", "'empty'", "", "'heroic'", 
  "'attach'", "'that'", "'put'", "'meta'", "'counter'", "'destroy'", "", 
  "'unless'", "", "'top'", "'bottom'", "'deck'", "", "'hand'", "'from'", 
  "'until'", "'number'", "'in'", "'turn'", "'start'", "'end'", "'at'", "'this'", 
  "", "'if'", "'do'", "'resolved'", "'used'", "'non-'", "'ability'", "'attack'", 
  "'already'", "'instead'", "", "", "'to'", "", "'of'", "'the'", "'one'", 
  "'two'", "'three'", "'four'", "'five'", "'six'", "", "'\n'"
};

std::vector<std::string> IvionParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "Heal", "Disarm", 
  "Silence", "Slow", "Discard", "Draw", "Deal", "Move", "Travel", "Target", 
  "Gain", "Action", "Power", "Initiative", "SecondWind", "May", "Play", 
  "Reveal", "Damage", "Player", "Enemy", "Another", "CardController", "PreviousPlayer", 
  "Range", "Away", "Controller", "Its", "Use", "UpTo", "Have", "Health", 
  "For", "Less", "Free", "All", "Tile", "Empty", "Card", "Heroic", "Attach", 
  "That", "Put", "Meta", "Counter", "Destroy", "Resource", "Unless", "Pays", 
  "Top", "Bottom", "Deck", "On", "Hand", "From", "Until", "Number", "In", 
  "Turn", "Start", "End", "At", "This", "Then", "If", "Do", "Resolved", 
  "Used", "Non", "Ability", "Attack", "Already", "Instead", "A", "Is", "To", 
  "Take", "Of", "The", "One", "Two", "Three", "Four", "Five", "Six", "Integer", 
  "Newline", "Whitespace"
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
    0x3, 0x67, 0x24c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x3, 0x2, 0x6, 0x2, 0x70, 
    0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x71, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x81, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x89, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x93, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0xa8, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0xb5, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0xca, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xd5, 
    0xa, 0xc, 0x3, 0xd, 0x5, 0xd, 0xd8, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0xdd, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0xea, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xf2, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xfa, 0xa, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x106, 0xa, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x10e, 
    0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x127, 
    0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x12a, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x13f, 0xa, 0x14, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x151, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x158, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x167, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x184, 0xa, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x196, 0xa, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x1a3, 0xa, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x5, 0x20, 0x1b3, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1cf, 0xa, 0x25, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 
    0x26, 0x1d7, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 
    0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 
    0x2c, 0x1f0, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x207, 0xa, 0x2f, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x20c, 0xa, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x213, 0xa, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x217, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x6, 0x32, 0x220, 
    0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x221, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 0x22a, 0xa, 0x33, 0xd, 0x33, 
    0xe, 0x33, 0x22b, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x5, 0x34, 0x241, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 0x24a, 0xa, 0x37, 
    0x3, 0x37, 0x3, 0x128, 0x2, 0x38, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x2, 
    0xa, 0x3, 0x2, 0x23, 0x24, 0x3, 0x2, 0x11, 0x13, 0x3, 0x2, 0x1b, 0x1d, 
    0x3, 0x2, 0x26, 0x27, 0x3, 0x2, 0x4b, 0x4c, 0x4, 0x2, 0x25, 0x25, 0x59, 
    0x59, 0x3, 0x2, 0x55, 0x56, 0x4, 0x2, 0x59, 0x59, 0x5f, 0x64, 0x2, 0x262, 
    0x2, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x80, 0x3, 0x2, 0x2, 0x2, 0x6, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x8a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x92, 0x3, 0x2, 0x2, 0x2, 0xe, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0x16, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xeb, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x20, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x114, 0x3, 0x2, 0x2, 0x2, 0x24, 0x12b, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x28, 0x150, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x152, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x157, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x30, 0x168, 0x3, 0x2, 0x2, 0x2, 0x32, 0x16b, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x36, 0x183, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x195, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x197, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1b2, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1b8, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x1c7, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1d8, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1e1, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1e8, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1f6, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x206, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x208, 0x3, 0x2, 0x2, 0x2, 0x60, 0x212, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x218, 0x3, 0x2, 0x2, 0x2, 0x64, 0x229, 0x3, 0x2, 0x2, 0x2, 0x66, 0x240, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x242, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x244, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x249, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x70, 0x9, 0x2, 
    0x2, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x3, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x19, 0x2, 0x2, 0x74, 
    0x81, 0x5, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x25, 0x2, 0x2, 0x76, 0x77, 
    0x7, 0x19, 0x2, 0x2, 0x77, 0x81, 0x5, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 
    0x19, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x25, 0x2, 0x2, 0x7a, 0x81, 0x5, 0x2, 
    0x2, 0x2, 0x7b, 0x7c, 0x7, 0x2d, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x6c, 0x37, 
    0x2, 0x7d, 0x7e, 0x7, 0x19, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x2, 0x2, 0x2, 
    0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x73, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x80, 0x78, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x5, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x7, 
    0x59, 0x2, 0x2, 0x83, 0x89, 0x5, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0x25, 
    0x2, 0x2, 0x85, 0x89, 0x5, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0x2b, 0x2, 
    0x2, 0x87, 0x89, 0x7, 0x2a, 0x2, 0x2, 0x88, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x84, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x26, 0x2, 0x2, 0x8b, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x27, 0x2, 0x2, 0x8d, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x93, 0x5, 0x8, 0x5, 0x2, 0x8f, 0x93, 0x5, 0x6, 
    0x4, 0x2, 0x90, 0x93, 0x5, 0xa, 0x6, 0x2, 0x91, 0x93, 0x5, 0x4, 0x3, 
    0x2, 0x92, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x92, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x16, 0x2, 0x2, 0x95, 0x96, 
    0x5, 0x6c, 0x37, 0x2, 0x96, 0x97, 0x7, 0x22, 0x2, 0x2, 0x97, 0x98, 0x7, 
    0x5b, 0x2, 0x2, 0x98, 0x99, 0x5, 0xc, 0x7, 0x2, 0x99, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x9b, 0x5, 0xc, 0x7, 0x2, 0x9b, 0x9c, 0x7, 0x5c, 0x2, 
    0x2, 0x9c, 0x9d, 0x5, 0x6c, 0x37, 0x2, 0x9d, 0x9e, 0x7, 0x22, 0x2, 0x2, 
    0x9e, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x16, 0x2, 0x2, 0xa0, 
    0xa1, 0x7, 0x22, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x5b, 0x2, 0x2, 0xa2, 0xa3, 
    0x5, 0xc, 0x7, 0x2, 0xa3, 0xa4, 0x7, 0x3, 0x2, 0x2, 0xa4, 0xa5, 0x7, 
    0x5b, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0x6c, 0x37, 0x2, 0xa6, 0xa8, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0x94, 0x3, 0x2, 0x2, 0x2, 0xa7, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xaa, 0x9, 0x3, 0x2, 0x2, 0xaa, 0x11, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xac, 0x5, 0x10, 0x9, 0x2, 0xac, 0xad, 0x5, 0x6c, 0x37, 0x2, 0xad, 0xae, 
    0x5, 0xc, 0x7, 0x2, 0xae, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 
    0xc, 0x7, 0x2, 0xb0, 0xb1, 0x7, 0x5a, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x10, 
    0x9, 0x2, 0xb2, 0xb3, 0x5, 0x6c, 0x37, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0xab, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x17, 0x2, 0x2, 0xb7, 
    0xb8, 0x7, 0x5b, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x2c, 0x17, 0x2, 0xb9, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x18, 0x2, 0x2, 0xbb, 0xbc, 0x7, 
    0x5b, 0x2, 0x2, 0xbc, 0xd5, 0x5, 0x2c, 0x17, 0x2, 0xbd, 0xbe, 0x7, 0x18, 
    0x2, 0x2, 0xbe, 0xbf, 0x5, 0x6c, 0x37, 0x2, 0xbf, 0xc0, 0x7, 0x34, 0x2, 
    0x2, 0xc0, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x7, 0x18, 0x2, 0x2, 
    0xc2, 0xc3, 0x5, 0xc, 0x7, 0x2, 0xc3, 0xc4, 0x7, 0x5b, 0x2, 0x2, 0xc4, 
    0xc5, 0x5, 0x2c, 0x17, 0x2, 0xc5, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 
    0x7, 0x18, 0x2, 0x2, 0xc7, 0xc9, 0x5, 0xc, 0x7, 0x2, 0xc8, 0xca, 0x7, 
    0x2d, 0x2, 0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x6c, 0x37, 
    0x2, 0xcc, 0xcd, 0x7, 0x34, 0x2, 0x2, 0xcd, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xcf, 0x7, 0x18, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0xc, 0x7, 0x2, 0xd0, 
    0xd1, 0x7, 0x29, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0x6c, 0x37, 0x2, 0xd2, 0xd3, 
    0x7, 0x34, 0x2, 0x2, 0xd3, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0x17, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x5, 0xc, 0x7, 0x2, 
    0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x1a, 0x2, 0x2, 0xda, 0xdc, 
    0x5, 0x6c, 0x37, 0x2, 0xdb, 0xdd, 0x7, 0x4, 0x2, 0x2, 0xdc, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 
    0x2, 0x2, 0xde, 0xdf, 0x9, 0x4, 0x2, 0x2, 0xdf, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0x5, 0xc, 0x7, 0x2, 0xe1, 0xe2, 0x7, 0x15, 0x2, 0x2, 
    0xe2, 0xe3, 0x5, 0x6c, 0x37, 0x2, 0xe3, 0xe4, 0x7, 0x36, 0x2, 0x2, 0xe4, 
    0xea, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x15, 0x2, 0x2, 0xe6, 0xe7, 
    0x5, 0x6c, 0x37, 0x2, 0xe7, 0xe8, 0x7, 0x36, 0x2, 0x2, 0xe8, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0xe9, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe5, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x2c, 0x2, 
    0x2, 0xec, 0xed, 0x9, 0x5, 0x2, 0x2, 0xed, 0xee, 0x7, 0x1e, 0x2, 0x2, 
    0xee, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf1, 0x5, 0xc, 0x7, 0x2, 0xf0, 
    0xf2, 0x7, 0x1f, 0x2, 0x2, 0xf1, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 
    0x20, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x6c, 0x37, 0x2, 0xf5, 0xf6, 0x7, 0x36, 
    0x2, 0x2, 0xf6, 0x10e, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf9, 0x5, 0xc, 0x7, 
    0x2, 0xf8, 0xfa, 0x7, 0x1f, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 
    0xfc, 0x7, 0x20, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0x6c, 0x37, 0x2, 0xfd, 0xfe, 
    0x7, 0x36, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x30, 0x2, 0x2, 0xff, 0x100, 0x5, 
    0x6c, 0x37, 0x2, 0x100, 0x101, 0x7, 0x31, 0x2, 0x2, 0x101, 0x102, 0x7, 
    0x3e, 0x2, 0x2, 0x102, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x103, 0x105, 0x5, 
    0xc, 0x7, 0x2, 0x104, 0x106, 0x7, 0x1f, 0x2, 0x2, 0x105, 0x104, 0x3, 
    0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x107, 0x108, 0x7, 0x20, 0x2, 0x2, 0x108, 0x109, 0x5, 
    0x6c, 0x37, 0x2, 0x109, 0x10a, 0x7, 0x36, 0x2, 0x2, 0x10a, 0x10b, 0x7, 
    0x30, 0x2, 0x2, 0x10b, 0x10c, 0x7, 0x32, 0x2, 0x2, 0x10c, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x10d, 0xef, 0x3, 0x2, 0x2, 0x2, 0x10d, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0x10d, 0x103, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x10f, 0x110, 0x7, 0x10, 0x2, 0x2, 0x110, 0x111, 0x5, 0xc, 0x7, 
    0x2, 0x111, 0x112, 0x5, 0x6c, 0x37, 0x2, 0x112, 0x113, 0x7, 0x2f, 0x2, 
    0x2, 0x113, 0x21, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 0x33, 0x2, 
    0x2, 0x115, 0x116, 0x7, 0x5d, 0x2, 0x2, 0x116, 0x117, 0x7, 0x26, 0x2, 
    0x2, 0x117, 0x118, 0x7, 0x36, 0x2, 0x2, 0x118, 0x119, 0x7, 0x5, 0x2, 
    0x2, 0x119, 0x11a, 0x7, 0x6, 0x2, 0x2, 0x11a, 0x11b, 0x7, 0x18, 0x2, 
    0x2, 0x11b, 0x11c, 0x7, 0x36, 0x2, 0x2, 0x11c, 0x11d, 0x7, 0x39, 0x2, 
    0x2, 0x11d, 0x11e, 0x7, 0x19, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x59, 0x2, 
    0x2, 0x11f, 0x120, 0x7, 0x34, 0x2, 0x2, 0x120, 0x121, 0x7, 0x5, 0x2, 
    0x2, 0x121, 0x122, 0x7, 0x7, 0x2, 0x2, 0x122, 0x123, 0x7, 0x15, 0x2, 
    0x2, 0x123, 0x124, 0x7, 0x28, 0x2, 0x2, 0x124, 0x128, 0x7, 0x46, 0x2, 
    0x2, 0x125, 0x127, 0xb, 0x2, 0x2, 0x2, 0x126, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x127, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x128, 0x126, 0x3, 0x2, 0x2, 0x2, 0x129, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x5, 0xc, 0x7, 0x2, 
    0x12c, 0x12d, 0x7, 0x21, 0x2, 0x2, 0x12d, 0x12e, 0x5, 0x6c, 0x37, 0x2, 
    0x12e, 0x12f, 0x7, 0x36, 0x2, 0x2, 0x12f, 0x130, 0x7, 0x46, 0x2, 0x2, 
    0x130, 0x131, 0x7, 0x27, 0x2, 0x2, 0x131, 0x132, 0x7, 0x45, 0x2, 0x2, 
    0x132, 0x25, 0x3, 0x2, 0x2, 0x2, 0x133, 0x13f, 0x5, 0xe, 0x8, 0x2, 0x134, 
    0x13f, 0x5, 0x12, 0xa, 0x2, 0x135, 0x13f, 0x5, 0x14, 0xb, 0x2, 0x136, 
    0x13f, 0x5, 0x16, 0xc, 0x2, 0x137, 0x13f, 0x5, 0x18, 0xd, 0x2, 0x138, 
    0x13f, 0x5, 0x1a, 0xe, 0x2, 0x139, 0x13f, 0x5, 0x1c, 0xf, 0x2, 0x13a, 
    0x13f, 0x5, 0x1e, 0x10, 0x2, 0x13b, 0x13f, 0x5, 0x20, 0x11, 0x2, 0x13c, 
    0x13f, 0x5, 0x22, 0x12, 0x2, 0x13d, 0x13f, 0x5, 0x24, 0x13, 0x2, 0x13e, 
    0x133, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x134, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x135, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x136, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x137, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x139, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13b, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 
    0x13d, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 
    0x7, 0x19, 0x2, 0x2, 0x141, 0x151, 0x7, 0x34, 0x2, 0x2, 0x142, 0x143, 
    0x7, 0x19, 0x2, 0x2, 0x143, 0x144, 0x7, 0x25, 0x2, 0x2, 0x144, 0x151, 
    0x7, 0x34, 0x2, 0x2, 0x145, 0x146, 0x7, 0x25, 0x2, 0x2, 0x146, 0x147, 
    0x7, 0x19, 0x2, 0x2, 0x147, 0x151, 0x7, 0x34, 0x2, 0x2, 0x148, 0x149, 
    0x7, 0x2d, 0x2, 0x2, 0x149, 0x14a, 0x5, 0x6c, 0x37, 0x2, 0x14a, 0x14b, 
    0x7, 0x19, 0x2, 0x2, 0x14b, 0x14c, 0x7, 0x34, 0x2, 0x2, 0x14c, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x7, 0x19, 0x2, 0x2, 0x14e, 0x14f, 
    0x7, 0x35, 0x2, 0x2, 0x14f, 0x151, 0x7, 0x34, 0x2, 0x2, 0x150, 0x140, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x142, 0x3, 0x2, 0x2, 0x2, 0x150, 0x145, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x148, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14d, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x29, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x7, 
    0x59, 0x2, 0x2, 0x153, 0x154, 0x7, 0x34, 0x2, 0x2, 0x154, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x158, 0x5, 0x2a, 0x16, 0x2, 0x156, 0x158, 0x5, 
    0x28, 0x15, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 0x157, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x158, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 0x19, 
    0x2, 0x2, 0x15a, 0x167, 0x7, 0x36, 0x2, 0x2, 0x15b, 0x15c, 0x7, 0x25, 
    0x2, 0x2, 0x15c, 0x15d, 0x7, 0x19, 0x2, 0x2, 0x15d, 0x167, 0x7, 0x36, 
    0x2, 0x2, 0x15e, 0x15f, 0x7, 0x19, 0x2, 0x2, 0x15f, 0x160, 0x7, 0x25, 
    0x2, 0x2, 0x160, 0x167, 0x7, 0x36, 0x2, 0x2, 0x161, 0x162, 0x7, 0x2d, 
    0x2, 0x2, 0x162, 0x163, 0x5, 0x6c, 0x37, 0x2, 0x163, 0x164, 0x7, 0x19, 
    0x2, 0x2, 0x164, 0x165, 0x7, 0x36, 0x2, 0x2, 0x165, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x159, 0x3, 0x2, 0x2, 0x2, 0x166, 0x15b, 0x3, 0x2, 
    0x2, 0x2, 0x166, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x166, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x7, 0x59, 
    0x2, 0x2, 0x169, 0x16a, 0x7, 0x36, 0x2, 0x2, 0x16a, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x16b, 0x16c, 0x7, 0x39, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0x36, 
    0x2, 0x2, 0x16d, 0x33, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x7, 0x41, 
    0x2, 0x2, 0x16f, 0x170, 0x7, 0x5d, 0x2, 0x2, 0x170, 0x171, 0x7, 0x5e, 
    0x2, 0x2, 0x171, 0x172, 0x7, 0x8, 0x2, 0x2, 0x172, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x173, 0x174, 0x7, 0x5e, 0x2, 0x2, 0x174, 0x175, 0x7, 0x36, 0x2, 
    0x2, 0x175, 0x176, 0x7, 0x44, 0x2, 0x2, 0x176, 0x177, 0x7, 0x5e, 0x2, 
    0x2, 0x177, 0x178, 0x7, 0x42, 0x2, 0x2, 0x178, 0x179, 0x7, 0x5d, 0x2, 
    0x2, 0x179, 0x17a, 0x5, 0xc, 0x7, 0x2, 0x17a, 0x17b, 0x7, 0x43, 0x2, 
    0x2, 0x17b, 0x184, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x5e, 0x2, 
    0x2, 0x17d, 0x17e, 0x7, 0x42, 0x2, 0x2, 0x17e, 0x17f, 0x7, 0x36, 0x2, 
    0x2, 0x17f, 0x180, 0x7, 0x5d, 0x2, 0x2, 0x180, 0x181, 0x5, 0xc, 0x7, 
    0x2, 0x181, 0x182, 0x7, 0x43, 0x2, 0x2, 0x182, 0x184, 0x3, 0x2, 0x2, 
    0x2, 0x183, 0x173, 0x3, 0x2, 0x2, 0x2, 0x183, 0x17c, 0x3, 0x2, 0x2, 
    0x2, 0x184, 0x37, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 0x5e, 0x2, 
    0x2, 0x186, 0x187, 0x7, 0x36, 0x2, 0x2, 0x187, 0x188, 0x7, 0x44, 0x2, 
    0x2, 0x188, 0x189, 0x7, 0x5e, 0x2, 0x2, 0x189, 0x18a, 0x7, 0x41, 0x2, 
    0x2, 0x18a, 0x18b, 0x7, 0x5d, 0x2, 0x2, 0x18b, 0x18c, 0x5, 0xc, 0x7, 
    0x2, 0x18c, 0x18d, 0x7, 0x43, 0x2, 0x2, 0x18d, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x18f, 0x7, 0x5e, 0x2, 0x2, 0x18f, 0x190, 0x7, 0x41, 0x2, 
    0x2, 0x190, 0x191, 0x7, 0x36, 0x2, 0x2, 0x191, 0x192, 0x7, 0x5d, 0x2, 
    0x2, 0x192, 0x193, 0x5, 0xc, 0x7, 0x2, 0x193, 0x194, 0x7, 0x43, 0x2, 
    0x2, 0x194, 0x196, 0x3, 0x2, 0x2, 0x2, 0x195, 0x185, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x196, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x197, 0x198, 0x5, 0xc, 0x7, 0x2, 0x198, 0x199, 0x7, 0x45, 0x2, 0x2, 
    0x199, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x1a3, 0x5, 0x2e, 0x18, 0x2, 
    0x19b, 0x1a3, 0x5, 0x30, 0x19, 0x2, 0x19c, 0x1a3, 0x5, 0x34, 0x1b, 0x2, 
    0x19d, 0x1a3, 0x5, 0x36, 0x1c, 0x2, 0x19e, 0x1a3, 0x5, 0x38, 0x1d, 0x2, 
    0x19f, 0x1a0, 0x7, 0x46, 0x2, 0x2, 0x1a0, 0x1a3, 0x5, 0x3a, 0x1e, 0x2, 
    0x1a1, 0x1a3, 0x5, 0x32, 0x1a, 0x2, 0x1a2, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x19c, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x19e, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x38, 0x2, 0x2, 
    0x1a5, 0x1a6, 0x7, 0x5b, 0x2, 0x2, 0x1a6, 0x1b3, 0x5, 0xc, 0x7, 0x2, 
    0x1a7, 0x1a8, 0x7, 0x38, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x5b, 0x2, 0x2, 
    0x1a9, 0x1b3, 0x5, 0x2c, 0x17, 0x2, 0x1aa, 0x1ab, 0x7, 0x38, 0x2, 0x2, 
    0x1ab, 0x1ac, 0x7, 0x5b, 0x2, 0x2, 0x1ac, 0x1ad, 0x5, 0x2c, 0x17, 0x2, 
    0x1ad, 0x1ae, 0x7, 0x47, 0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x4c, 0x2, 0x2, 
    0x1af, 0x1b0, 0x7, 0x5d, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x4a, 0x2, 0x2, 
    0x1b1, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1a4, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1a7, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1aa, 0x3, 0x2, 0x2, 0x2, 
    0x1b3, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x3b, 0x2, 0x2, 
    0x1b5, 0x1b6, 0x7, 0x3c, 0x2, 0x2, 0x1b6, 0x1b7, 0x5, 0x3c, 0x1f, 0x2, 
    0x1b7, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x3c, 0x2, 0x2, 
    0x1b9, 0x1ba, 0x5, 0x3c, 0x1f, 0x2, 0x1ba, 0x1bb, 0x7, 0x3f, 0x2, 0x2, 
    0x1bb, 0x1bc, 0x5, 0xc, 0x7, 0x2, 0x1bc, 0x1bd, 0x7, 0x40, 0x2, 0x2, 
    0x1bd, 0x1be, 0x5, 0x6c, 0x37, 0x2, 0x1be, 0x1bf, 0x7, 0x3e, 0x2, 0x2, 
    0x1bf, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x3d, 0x2, 0x2, 
    0x1c1, 0x1c2, 0x5, 0x3c, 0x1f, 0x2, 0x1c2, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x1c3, 0x1c4, 0x5, 0x3c, 0x1f, 0x2, 0x1c4, 0x1c5, 0x7, 0x1a, 0x2, 0x2, 
    0x1c5, 0x1c6, 0x7, 0x37, 0x2, 0x2, 0x1c6, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x1c7, 0x1c8, 0x7, 0x3a, 0x2, 0x2, 0x1c8, 0x1ce, 0x5, 0x3c, 0x1f, 0x2, 
    0x1c9, 0x1ca, 0x7, 0x44, 0x2, 0x2, 0x1ca, 0x1cf, 0x5, 0x36, 0x1c, 0x2, 
    0x1cb, 0x1cf, 0x5, 0x38, 0x1d, 0x2, 0x1cc, 0x1cd, 0x7, 0x9, 0x2, 0x2, 
    0x1cd, 0x1cf, 0x5, 0x3a, 0x1e, 0x2, 0x1ce, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x1ce, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1cf, 0x49, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d7, 0x5, 0x40, 0x21, 0x2, 
    0x1d1, 0x1d7, 0x5, 0x42, 0x22, 0x2, 0x1d2, 0x1d7, 0x5, 0x44, 0x23, 0x2, 
    0x1d3, 0x1d7, 0x5, 0x3e, 0x20, 0x2, 0x1d4, 0x1d7, 0x5, 0x48, 0x25, 0x2, 
    0x1d5, 0x1d7, 0x5, 0x46, 0x24, 0x2, 0x1d6, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d2, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
    0x1d9, 0x7, 0x4d, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x5e, 0x2, 0x2, 0x1da, 
    0x1db, 0x9, 0x6, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x5d, 0x2, 0x2, 0x1dc, 
    0x1dd, 0x5, 0xc, 0x7, 0x2, 0x1dd, 0x1de, 0x7, 0x4a, 0x2, 0x2, 0x1de, 
    0x4d, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x5, 0x4c, 0x27, 0x2, 0x1e0, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x5, 0x4e, 0x28, 0x2, 0x1e2, 
    0x1e3, 0x7, 0x5, 0x2, 0x2, 0x1e3, 0x1e4, 0x5, 0x60, 0x31, 0x2, 0x1e4, 
    0x1e5, 0x7, 0xa, 0x2, 0x2, 0x1e5, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 
    0x7, 0xb, 0x2, 0x2, 0x1e7, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 
    0xc, 0x2, 0x2, 0x1e9, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x50, 
    0x2, 0x2, 0x1eb, 0x1ec, 0x5, 0xc, 0x7, 0x2, 0x1ec, 0x1ed, 0x7, 0x52, 
    0x2, 0x2, 0x1ed, 0x1ef, 0x9, 0x7, 0x2, 0x2, 0x1ee, 0x1f0, 0x7, 0x54, 
    0x2, 0x2, 0x1ef, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 
    0x2, 0x2, 0x1f0, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x9, 0x8, 
    0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x36, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x4e, 
    0x2, 0x2, 0x1f4, 0x1f5, 0x7, 0x4a, 0x2, 0x2, 0x1f5, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x50, 0x2, 0x2, 0x1f7, 0x1f8, 0x5, 0xc, 
    0x7, 0x2, 0x1f8, 0x1f9, 0x7, 0x57, 0x2, 0x2, 0x1f9, 0x1fa, 0x7, 0x53, 
    0x2, 0x2, 0x1fa, 0x1fb, 0x9, 0x5, 0x2, 0x2, 0x1fb, 0x1fc, 0x7, 0x1e, 
    0x2, 0x2, 0x1fc, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x50, 
    0x2, 0x2, 0x1fe, 0x1ff, 0x9, 0x5, 0x2, 0x2, 0x1ff, 0x200, 0x7, 0x51, 
    0x2, 0x2, 0x200, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x201, 0x207, 0x5, 0x56, 
    0x2c, 0x2, 0x202, 0x207, 0x5, 0x52, 0x2a, 0x2, 0x203, 0x207, 0x5, 0x54, 
    0x2b, 0x2, 0x204, 0x207, 0x5, 0x58, 0x2d, 0x2, 0x205, 0x207, 0x5, 0x5a, 
    0x2e, 0x2, 0x206, 0x201, 0x3, 0x2, 0x2, 0x2, 0x206, 0x202, 0x3, 0x2, 
    0x2, 0x2, 0x206, 0x203, 0x3, 0x2, 0x2, 0x2, 0x206, 0x204, 0x3, 0x2, 
    0x2, 0x2, 0x206, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x208, 0x209, 0x5, 0x5c, 0x2f, 0x2, 0x209, 0x20b, 0x7, 0x5, 0x2, 
    0x2, 0x20a, 0x20c, 0x7, 0x58, 0x2, 0x2, 0x20b, 0x20a, 0x3, 0x2, 0x2, 
    0x2, 0x20b, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 
    0x2, 0x20d, 0x20e, 0x5, 0x60, 0x31, 0x2, 0x20e, 0x20f, 0x7, 0xa, 0x2, 
    0x2, 0x20f, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x7, 0x4f, 0x2, 
    0x2, 0x211, 0x213, 0x7, 0x5, 0x2, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 
    0x2, 0x212, 0x213, 0x3, 0x2, 0x2, 0x2, 0x213, 0x216, 0x3, 0x2, 0x2, 
    0x2, 0x214, 0x217, 0x5, 0x26, 0x14, 0x2, 0x215, 0x217, 0x5, 0x4a, 0x26, 
    0x2, 0x216, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x215, 0x3, 0x2, 0x2, 
    0x2, 0x217, 0x61, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x7, 0xd, 0x2, 0x2, 
    0x219, 0x21a, 0x5, 0x6c, 0x37, 0x2, 0x21a, 0x21f, 0x7, 0xe, 0x2, 0x2, 
    0x21b, 0x21c, 0x7, 0xf, 0x2, 0x2, 0x21c, 0x21d, 0x5, 0x60, 0x31, 0x2, 
    0x21d, 0x21e, 0x7, 0xa, 0x2, 0x2, 0x21e, 0x220, 0x3, 0x2, 0x2, 0x2, 
    0x21f, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 0x2, 0x2, 
    0x221, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 0x2, 0x2, 
    0x222, 0x63, 0x3, 0x2, 0x2, 0x2, 0x223, 0x22a, 0x5, 0x62, 0x32, 0x2, 
    0x224, 0x22a, 0x5, 0x5e, 0x30, 0x2, 0x225, 0x22a, 0x5, 0x50, 0x29, 0x2, 
    0x226, 0x227, 0x5, 0x60, 0x31, 0x2, 0x227, 0x228, 0x7, 0xa, 0x2, 0x2, 
    0x228, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x229, 0x223, 0x3, 0x2, 0x2, 0x2, 
    0x229, 0x224, 0x3, 0x2, 0x2, 0x2, 0x229, 0x225, 0x3, 0x2, 0x2, 0x2, 
    0x229, 0x226, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 0x2, 
    0x22b, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 
    0x22c, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x7, 0x2, 0x2, 0x3, 
    0x22e, 0x65, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x7, 0x5e, 0x2, 0x2, 
    0x230, 0x231, 0x7, 0x48, 0x2, 0x2, 0x231, 0x232, 0x7, 0x5d, 0x2, 0x2, 
    0x232, 0x233, 0x7, 0x36, 0x2, 0x2, 0x233, 0x234, 0x7, 0x49, 0x2, 0x2, 
    0x234, 0x235, 0x5, 0xc, 0x7, 0x2, 0x235, 0x236, 0x7, 0x45, 0x2, 0x2, 
    0x236, 0x241, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x7, 0x5e, 0x2, 0x2, 
    0x238, 0x239, 0x7, 0x48, 0x2, 0x2, 0x239, 0x23a, 0x7, 0x5d, 0x2, 0x2, 
    0x23a, 0x23b, 0x7, 0x21, 0x2, 0x2, 0x23b, 0x23c, 0x7, 0x36, 0x2, 0x2, 
    0x23c, 0x23d, 0x7, 0x49, 0x2, 0x2, 0x23d, 0x23e, 0x5, 0xc, 0x7, 0x2, 
    0x23e, 0x23f, 0x7, 0x45, 0x2, 0x2, 0x23f, 0x241, 0x3, 0x2, 0x2, 0x2, 
    0x240, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x240, 0x237, 0x3, 0x2, 0x2, 0x2, 
    0x241, 0x67, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x7, 0x65, 0x2, 0x2, 
    0x243, 0x69, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x9, 0x9, 0x2, 0x2, 0x245, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x246, 0x24a, 0x5, 0x68, 0x35, 0x2, 0x247, 
    0x24a, 0x5, 0x6a, 0x36, 0x2, 0x248, 0x24a, 0x5, 0x66, 0x34, 0x2, 0x249, 
    0x246, 0x3, 0x2, 0x2, 0x2, 0x249, 0x247, 0x3, 0x2, 0x2, 0x2, 0x249, 
    0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x26, 0x71, 
    0x80, 0x88, 0x92, 0xa7, 0xb4, 0xc9, 0xd4, 0xd7, 0xdc, 0xe9, 0xf1, 0xf9, 
    0x105, 0x10d, 0x128, 0x13e, 0x150, 0x157, 0x166, 0x183, 0x195, 0x1a2, 
    0x1b2, 0x1ce, 0x1d6, 0x1ef, 0x206, 0x20b, 0x212, 0x216, 0x221, 0x229, 
    0x22b, 0x240, 0x249, 
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
