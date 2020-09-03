
// Generated from IvionGrammar/Ivion.antlr4 by ANTLR 4.8


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


//----------------- TargetPlayerContext ------------------------------------------------------------------

IvionParser::TargetPlayerContext::TargetPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 0, IvionParser::RuleTargetPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(IvionParser::T__0);
    setState(59);
    match(IvionParser::T__1);
   
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
  enterRule(_localctx, 2, IvionParser::RuleSelectPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(IvionParser::T__2);
    setState(62);
    match(IvionParser::T__1);
   
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
  enterRule(_localctx, 4, IvionParser::RuleCardController);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    _la = _input->LA(1);
    if (!(_la == IvionParser::T__3

    || _la == IvionParser::T__4)) {
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

//----------------- PreviousPlayerContext ------------------------------------------------------------------

IvionParser::PreviousPlayerContext::PreviousPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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
  enterRule(_localctx, 6, IvionParser::RulePreviousPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    _la = _input->LA(1);
    if (!(_la == IvionParser::T__5

    || _la == IvionParser::T__6)) {
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
  enterRule(_localctx, 8, IvionParser::RulePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__3:
      case IvionParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        cardController();
        break;
      }

      case IvionParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        selectPlayer();
        break;
      }

      case IvionParser::T__5:
      case IvionParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(70);
        previousPlayer();
        break;
      }

      case IvionParser::T__0: {
        enterOuterAlt(_localctx, 4);
        setState(71);
        targetPlayer();
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

//----------------- DamagePlayerContext ------------------------------------------------------------------

IvionParser::DamagePlayerContext::DamagePlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IntegerContext* IvionParser::DamagePlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::DamagePlayerContext::To() {
  return getToken(IvionParser::To, 0);
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
  enterRule(_localctx, 10, IvionParser::RuleDamagePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(74);
        match(IvionParser::T__7);
        setState(75);
        integer();
        setState(76);
        match(IvionParser::T__8);
        setState(77);
        match(IvionParser::To);
        setState(78);
        player();
        break;
      }

      case IvionParser::T__0:
      case IvionParser::T__2:
      case IvionParser::T__3:
      case IvionParser::T__4:
      case IvionParser::T__5:
      case IvionParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(80);
        player();
        setState(81);
        match(IvionParser::Take);
        setState(82);
        integer();
        setState(83);
        match(IvionParser::T__8);
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
  enterRule(_localctx, 12, IvionParser::RuleControl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
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
  enterRule(_localctx, 14, IvionParser::RuleControlPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(98);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Disarm:
      case IvionParser::Silence:
      case IvionParser::Slow: {
        enterOuterAlt(_localctx, 1);
        setState(89);
        control();
        setState(90);
        integer();
        setState(91);
        player();
        break;
      }

      case IvionParser::T__0:
      case IvionParser::T__2:
      case IvionParser::T__3:
      case IvionParser::T__4:
      case IvionParser::T__5:
      case IvionParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(93);
        player();
        setState(94);
        match(IvionParser::Is);
        setState(95);
        control();
        setState(96);
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

IvionParser::TileContext* IvionParser::MovePlayerContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}

IvionParser::PlayerContext* IvionParser::MovePlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::MovePlayerContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::IntegerContext* IvionParser::MovePlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::MovePlayerContext::Tile() {
  return getToken(IvionParser::Tile, 0);
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
  enterRule(_localctx, 16, IvionParser::RuleMovePlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(100);
      match(IvionParser::Move);
      setState(102);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(101);
        player();
        break;
      }

      }
      setState(105);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::To) {
        setState(104);
        match(IvionParser::To);
      }
      setState(107);
      tile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(108);
      match(IvionParser::Move);
      setState(110);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::T__0)
        | (1ULL << IvionParser::T__2)
        | (1ULL << IvionParser::T__3)
        | (1ULL << IvionParser::T__4)
        | (1ULL << IvionParser::T__5)
        | (1ULL << IvionParser::T__6))) != 0)) {
        setState(109);
        player();
      }
      setState(112);
      integer();
      setState(113);
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

//----------------- TravelPlayerContext ------------------------------------------------------------------

IvionParser::TravelPlayerContext::TravelPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Travel() {
  return getToken(IvionParser::Travel, 0);
}

IvionParser::TileContext* IvionParser::TravelPlayerContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}

IvionParser::PlayerContext* IvionParser::TravelPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::IntegerContext* IvionParser::TravelPlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Tile() {
  return getToken(IvionParser::Tile, 0);
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
  enterRule(_localctx, 18, IvionParser::RuleTravelPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(132);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      match(IvionParser::Travel);
      setState(119);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(118);
        player();
        break;
      }

      }
      setState(122);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::To) {
        setState(121);
        match(IvionParser::To);
      }
      setState(124);
      tile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(125);
      match(IvionParser::Travel);
      setState(127);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::T__0)
        | (1ULL << IvionParser::T__2)
        | (1ULL << IvionParser::T__3)
        | (1ULL << IvionParser::T__4)
        | (1ULL << IvionParser::T__5)
        | (1ULL << IvionParser::T__6))) != 0)) {
        setState(126);
        player();
      }
      setState(129);
      integer();
      setState(130);
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

//----------------- GainActionsContext ------------------------------------------------------------------

IvionParser::GainActionsContext::GainActionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IntegerContext* IvionParser::GainActionsContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

IvionParser::PlayerContext* IvionParser::GainActionsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::GainActionsContext::getRuleIndex() const {
  return IvionParser::RuleGainActions;
}


antlrcpp::Any IvionParser::GainActionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitGainActions(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainActionsContext* IvionParser::gainActions() {
  GainActionsContext *_localctx = _tracker.createInstance<GainActionsContext>(_ctx, getState());
  enterRule(_localctx, 20, IvionParser::RuleGainActions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::T__0)
      | (1ULL << IvionParser::T__2)
      | (1ULL << IvionParser::T__3)
      | (1ULL << IvionParser::T__4)
      | (1ULL << IvionParser::T__5)
      | (1ULL << IvionParser::T__6))) != 0)) {
      setState(134);
      player();
    }
    setState(137);
    match(IvionParser::T__9);
    setState(138);
    integer();
    setState(139);
    match(IvionParser::T__10);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GainPowerContext ------------------------------------------------------------------

IvionParser::GainPowerContext::GainPowerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IntegerContext* IvionParser::GainPowerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

IvionParser::PlayerContext* IvionParser::GainPowerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::GainPowerContext::getRuleIndex() const {
  return IvionParser::RuleGainPower;
}


antlrcpp::Any IvionParser::GainPowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitGainPower(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainPowerContext* IvionParser::gainPower() {
  GainPowerContext *_localctx = _tracker.createInstance<GainPowerContext>(_ctx, getState());
  enterRule(_localctx, 22, IvionParser::RuleGainPower);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::T__0)
      | (1ULL << IvionParser::T__2)
      | (1ULL << IvionParser::T__3)
      | (1ULL << IvionParser::T__4)
      | (1ULL << IvionParser::T__5)
      | (1ULL << IvionParser::T__6))) != 0)) {
      setState(141);
      player();
    }
    setState(144);
    match(IvionParser::T__9);
    setState(145);
    integer();
    setState(146);
    match(IvionParser::T__11);
   
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

tree::TerminalNode* IvionParser::DrawCardsContext::Draw() {
  return getToken(IvionParser::Draw, 0);
}

IvionParser::IntegerContext* IvionParser::DrawCardsContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}

IvionParser::PlayerContext* IvionParser::DrawCardsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::T__0)
      | (1ULL << IvionParser::T__2)
      | (1ULL << IvionParser::T__3)
      | (1ULL << IvionParser::T__4)
      | (1ULL << IvionParser::T__5)
      | (1ULL << IvionParser::T__6))) != 0)) {
      setState(148);
      player();
    }
    setState(151);
    match(IvionParser::Draw);
    setState(152);
    integer();
    setState(153);
    match(IvionParser::Card);
   
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

IvionParser::GainActionsContext* IvionParser::EffectPlayerContext::gainActions() {
  return getRuleContext<IvionParser::GainActionsContext>(0);
}

IvionParser::GainPowerContext* IvionParser::EffectPlayerContext::gainPower() {
  return getRuleContext<IvionParser::GainPowerContext>(0);
}

IvionParser::DrawCardsContext* IvionParser::EffectPlayerContext::drawCards() {
  return getRuleContext<IvionParser::DrawCardsContext>(0);
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
  enterRule(_localctx, 26, IvionParser::RuleEffectPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(155);
      damagePlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(156);
      controlPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(157);
      movePlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(158);
      travelPlayer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(159);
      gainActions();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(160);
      gainPower();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(161);
      drawCards();
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

tree::TerminalNode* IvionParser::TargetTileContext::Tile() {
  return getToken(IvionParser::Tile, 0);
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
  enterRule(_localctx, 28, IvionParser::RuleTargetTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(IvionParser::T__0);
    setState(165);
    match(IvionParser::Tile);
   
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
  enterRule(_localctx, 30, IvionParser::RuleSelectTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    match(IvionParser::T__2);
    setState(168);
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
  enterRule(_localctx, 32, IvionParser::RuleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(170);
        selectTile();
        break;
      }

      case IvionParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(171);
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
  enterRule(_localctx, 34, IvionParser::RuleTargetCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(IvionParser::T__0);
    setState(175);
    match(IvionParser::T__12);
   
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
  enterRule(_localctx, 36, IvionParser::RuleSelectCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(IvionParser::T__2);
    setState(178);
    match(IvionParser::T__12);
   
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
  enterRule(_localctx, 38, IvionParser::RuleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(182);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(180);
        targetCard();
        break;
      }

      case IvionParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(181);
        selectCard();
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

//----------------- EndTheTurnContext ------------------------------------------------------------------

IvionParser::EndTheTurnContext::EndTheTurnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IvionParser::EndTheTurnContext::getRuleIndex() const {
  return IvionParser::RuleEndTheTurn;
}


antlrcpp::Any IvionParser::EndTheTurnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitEndTheTurn(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EndTheTurnContext* IvionParser::endTheTurn() {
  EndTheTurnContext *_localctx = _tracker.createInstance<EndTheTurnContext>(_ctx, getState());
  enterRule(_localctx, 40, IvionParser::RuleEndTheTurn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(IvionParser::T__13);
    setState(185);
    match(IvionParser::T__14);
    setState(186);
    match(IvionParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartTheTurnContext ------------------------------------------------------------------

IvionParser::StartTheTurnContext::StartTheTurnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t IvionParser::StartTheTurnContext::getRuleIndex() const {
  return IvionParser::RuleStartTheTurn;
}


antlrcpp::Any IvionParser::StartTheTurnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitStartTheTurn(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::StartTheTurnContext* IvionParser::startTheTurn() {
  StartTheTurnContext *_localctx = _tracker.createInstance<StartTheTurnContext>(_ctx, getState());
  enterRule(_localctx, 42, IvionParser::RuleStartTheTurn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(IvionParser::T__16);
    setState(189);
    match(IvionParser::T__14);
    setState(190);
    match(IvionParser::T__15);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MiscEffectContext ------------------------------------------------------------------

IvionParser::MiscEffectContext::MiscEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::StartTheTurnContext* IvionParser::MiscEffectContext::startTheTurn() {
  return getRuleContext<IvionParser::StartTheTurnContext>(0);
}

IvionParser::EndTheTurnContext* IvionParser::MiscEffectContext::endTheTurn() {
  return getRuleContext<IvionParser::EndTheTurnContext>(0);
}


size_t IvionParser::MiscEffectContext::getRuleIndex() const {
  return IvionParser::RuleMiscEffect;
}


antlrcpp::Any IvionParser::MiscEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitMiscEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::MiscEffectContext* IvionParser::miscEffect() {
  MiscEffectContext *_localctx = _tracker.createInstance<MiscEffectContext>(_ctx, getState());
  enterRule(_localctx, 44, IvionParser::RuleMiscEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__16: {
        enterOuterAlt(_localctx, 1);
        setState(192);
        startTheTurn();
        break;
      }

      case IvionParser::T__13: {
        enterOuterAlt(_localctx, 2);
        setState(193);
        endTheTurn();
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

//----------------- LineContext ------------------------------------------------------------------

IvionParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::EffectPlayerContext* IvionParser::LineContext::effectPlayer() {
  return getRuleContext<IvionParser::EffectPlayerContext>(0);
}

IvionParser::MiscEffectContext* IvionParser::LineContext::miscEffect() {
  return getRuleContext<IvionParser::MiscEffectContext>(0);
}

tree::TerminalNode* IvionParser::LineContext::Newline() {
  return getToken(IvionParser::Newline, 0);
}

tree::TerminalNode* IvionParser::LineContext::EOF() {
  return getToken(IvionParser::EOF, 0);
}


size_t IvionParser::LineContext::getRuleIndex() const {
  return IvionParser::RuleLine;
}


antlrcpp::Any IvionParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::LineContext* IvionParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 46, IvionParser::RuleLine);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__0:
      case IvionParser::T__2:
      case IvionParser::T__3:
      case IvionParser::T__4:
      case IvionParser::T__5:
      case IvionParser::T__6:
      case IvionParser::T__7:
      case IvionParser::T__9:
      case IvionParser::Disarm:
      case IvionParser::Silence:
      case IvionParser::Slow:
      case IvionParser::Draw:
      case IvionParser::Move:
      case IvionParser::Travel: {
        setState(196);
        effectPlayer();
        break;
      }

      case IvionParser::T__13:
      case IvionParser::T__16: {
        setState(197);
        miscEffect();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(200);
    match(IvionParser::T__17);
    setState(202);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(201);
      _la = _input->LA(1);
      if (!(_la == IvionParser::EOF

      || _la == IvionParser::Newline)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
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

//----------------- ParagraphContext ------------------------------------------------------------------

IvionParser::ParagraphContext::ParagraphContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::LineContext *> IvionParser::ParagraphContext::line() {
  return getRuleContexts<IvionParser::LineContext>();
}

IvionParser::LineContext* IvionParser::ParagraphContext::line(size_t i) {
  return getRuleContext<IvionParser::LineContext>(i);
}

std::vector<tree::TerminalNode *> IvionParser::ParagraphContext::Newline() {
  return getTokens(IvionParser::Newline);
}

tree::TerminalNode* IvionParser::ParagraphContext::Newline(size_t i) {
  return getToken(IvionParser::Newline, i);
}


size_t IvionParser::ParagraphContext::getRuleIndex() const {
  return IvionParser::RuleParagraph;
}


antlrcpp::Any IvionParser::ParagraphContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionVisitor*>(visitor))
    return parserVisitor->visitParagraph(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ParagraphContext* IvionParser::paragraph() {
  ParagraphContext *_localctx = _tracker.createInstance<ParagraphContext>(_ctx, getState());
  enterRule(_localctx, 48, IvionParser::RuleParagraph);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(205); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(204);
              line();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(207); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IvionParser::Newline) {
      setState(209);
      match(IvionParser::Newline);
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
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

std::vector<IvionParser::ParagraphContext *> IvionParser::TextContext::paragraph() {
  return getRuleContexts<IvionParser::ParagraphContext>();
}

IvionParser::ParagraphContext* IvionParser::TextContext::paragraph(size_t i) {
  return getRuleContext<IvionParser::ParagraphContext>(i);
}

tree::TerminalNode* IvionParser::TextContext::EOF() {
  return getToken(IvionParser::EOF, 0);
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
  enterRule(_localctx, 50, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__0:
      case IvionParser::T__2:
      case IvionParser::T__3:
      case IvionParser::T__4:
      case IvionParser::T__5:
      case IvionParser::T__6:
      case IvionParser::T__7:
      case IvionParser::T__9:
      case IvionParser::T__13:
      case IvionParser::T__16:
      case IvionParser::Disarm:
      case IvionParser::Silence:
      case IvionParser::Slow:
      case IvionParser::Draw:
      case IvionParser::Move:
      case IvionParser::Travel: {
        enterOuterAlt(_localctx, 1);
        setState(216); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(215);
          paragraph();
          setState(218); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << IvionParser::T__0)
          | (1ULL << IvionParser::T__2)
          | (1ULL << IvionParser::T__3)
          | (1ULL << IvionParser::T__4)
          | (1ULL << IvionParser::T__5)
          | (1ULL << IvionParser::T__6)
          | (1ULL << IvionParser::T__7)
          | (1ULL << IvionParser::T__9)
          | (1ULL << IvionParser::T__13)
          | (1ULL << IvionParser::T__16)
          | (1ULL << IvionParser::Disarm)
          | (1ULL << IvionParser::Silence)
          | (1ULL << IvionParser::Slow)
          | (1ULL << IvionParser::Draw)
          | (1ULL << IvionParser::Move)
          | (1ULL << IvionParser::Travel))) != 0));
        break;
      }

      case IvionParser::EOF: {
        enterOuterAlt(_localctx, 2);
        setState(220);
        match(IvionParser::EOF);
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
  enterRule(_localctx, 52, IvionParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(225);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 1);
        setState(223);
        integerLiteral();
        break;
      }

      case IvionParser::One:
      case IvionParser::Two:
      case IvionParser::Three:
      case IvionParser::Four:
      case IvionParser::Five:
      case IvionParser::Six: {
        enterOuterAlt(_localctx, 2);
        setState(224);
        integerWord();
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
  enterRule(_localctx, 54, IvionParser::RuleIntegerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(227);
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
  enterRule(_localctx, 56, IvionParser::RuleIntegerWord);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::One)
      | (1ULL << IvionParser::Two)
      | (1ULL << IvionParser::Three)
      | (1ULL << IvionParser::Four)
      | (1ULL << IvionParser::Five)
      | (1ULL << IvionParser::Six))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> IvionParser::_decisionToDFA;
atn::PredictionContextCache IvionParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IvionParser::_atn;
std::vector<uint16_t> IvionParser::_serializedATN;

std::vector<std::string> IvionParser::_ruleNames = {
  "targetPlayer", "selectPlayer", "cardController", "previousPlayer", "player", 
  "damagePlayer", "control", "controlPlayer", "movePlayer", "travelPlayer", 
  "gainActions", "gainPower", "drawCards", "effectPlayer", "targetTile", 
  "selectTile", "tile", "targetCard", "selectCard", "card", "endTheTurn", 
  "startTheTurn", "miscEffect", "line", "paragraph", "text", "integer", 
  "integerLiteral", "integerWord"
};

std::vector<std::string> IvionParser::_literalNames = {
  "", "'target'", "'player'", "'a'", "'you'", "'yourself'", "'them'", "'they'", 
  "'deal'", "'damage'", "'gain'", "'actions'", "'power'", "'card'", "'end'", 
  "'the'", "'turn'", "'start'", "'.'", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "'\n'"
};

std::vector<std::string> IvionParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "Disarm", "Silence", "Slow", "Discard", "Draw", "Move", "Travel", 
  "Tile", "Card", "One", "Two", "Three", "Four", "Five", "Six", "Is", "To", 
  "Take", "Integer", "Newline", "Whitespace", "BlockComment", "LineComment"
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
    0x3, 0x2b, 0xea, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x4b, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x58, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x65, 0xa, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x69, 0xa, 0xa, 0x3, 0xa, 0x5, 0xa, 
    0x6c, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x71, 0xa, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x76, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x7a, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7d, 0xa, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x82, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x87, 0xa, 0xb, 0x3, 0xc, 0x5, 0xc, 0x8a, 0xa, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x5, 0xd, 0x91, 0xa, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x5, 0xe, 0x98, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xa5, 0xa, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xaf, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x5, 
    0x15, 0xb9, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0xc5, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xc9, 0xa, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x5, 0x19, 0xcd, 0xa, 0x19, 0x3, 0x1a, 0x6, 0x1a, 0xd0, 
    0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 0xd1, 0x3, 0x1a, 0x7, 0x1a, 0xd5, 0xa, 
    0x1a, 0xc, 0x1a, 0xe, 0x1a, 0xd8, 0xb, 0x1a, 0x3, 0x1b, 0x6, 0x1b, 0xdb, 
    0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 0xdc, 0x3, 0x1b, 0x5, 0x1b, 0xe0, 0xa, 
    0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xe4, 0xa, 0x1c, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x2, 0x2, 0x1f, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x2, 0x7, 0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 
    0x15, 0x17, 0x3, 0x3, 0x28, 0x28, 0x3, 0x2, 0x1e, 0x23, 0x2, 0xec, 0x2, 
    0x3c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x6, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x44, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x57, 0x3, 0x2, 0x2, 0x2, 0xe, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x64, 0x3, 0x2, 0x2, 0x2, 0x12, 0x75, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x16, 0x89, 0x3, 0x2, 0x2, 0x2, 0x18, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x97, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa9, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0xae, 0x3, 0x2, 0x2, 0x2, 0x24, 0xb0, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x28, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xba, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0x30, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x32, 0xcf, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x36, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xe7, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x4, 0x2, 
    0x2, 0x3e, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x5, 0x2, 0x2, 
    0x40, 0x41, 0x7, 0x4, 0x2, 0x2, 0x41, 0x5, 0x3, 0x2, 0x2, 0x2, 0x42, 
    0x43, 0x9, 0x2, 0x2, 0x2, 0x43, 0x7, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 
    0x9, 0x3, 0x2, 0x2, 0x45, 0x9, 0x3, 0x2, 0x2, 0x2, 0x46, 0x4b, 0x5, 
    0x6, 0x4, 0x2, 0x47, 0x4b, 0x5, 0x4, 0x3, 0x2, 0x48, 0x4b, 0x5, 0x8, 
    0x5, 0x2, 0x49, 0x4b, 0x5, 0x2, 0x2, 0x2, 0x4a, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4d, 0x7, 0xa, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0x36, 0x1c, 0x2, 0x4e, 0x4f, 
    0x7, 0xb, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x25, 0x2, 0x2, 0x50, 0x51, 0x5, 
    0xa, 0x6, 0x2, 0x51, 0x58, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x5, 0xa, 
    0x6, 0x2, 0x53, 0x54, 0x7, 0x26, 0x2, 0x2, 0x54, 0x55, 0x5, 0x36, 0x1c, 
    0x2, 0x55, 0x56, 0x7, 0xb, 0x2, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x57, 0x52, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x9, 0x4, 0x2, 0x2, 0x5a, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0xe, 0x8, 0x2, 0x5c, 0x5d, 0x5, 
    0x36, 0x1c, 0x2, 0x5d, 0x5e, 0x5, 0xa, 0x6, 0x2, 0x5e, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x60, 0x5, 0xa, 0x6, 0x2, 0x60, 0x61, 0x7, 0x24, 0x2, 
    0x2, 0x61, 0x62, 0x5, 0xe, 0x8, 0x2, 0x62, 0x63, 0x5, 0x36, 0x1c, 0x2, 
    0x63, 0x65, 0x3, 0x2, 0x2, 0x2, 0x64, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x65, 0x11, 0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 
    0x7, 0x1a, 0x2, 0x2, 0x67, 0x69, 0x5, 0xa, 0x6, 0x2, 0x68, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x6a, 0x6c, 0x7, 0x25, 0x2, 0x2, 0x6b, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x6d, 0x76, 0x5, 0x22, 0x12, 0x2, 0x6e, 0x70, 0x7, 0x1a, 0x2, 0x2, 0x6f, 
    0x71, 0x5, 0xa, 0x6, 0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 
    0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 
    0x36, 0x1c, 0x2, 0x73, 0x74, 0x7, 0x1c, 0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x75, 0x66, 0x3, 0x2, 0x2, 0x2, 0x75, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x13, 0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x7, 0x1b, 0x2, 0x2, 
    0x78, 0x7a, 0x5, 0xa, 0x6, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 
    0x7, 0x25, 0x2, 0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x87, 0x5, 0x22, 
    0x12, 0x2, 0x7f, 0x81, 0x7, 0x1b, 0x2, 0x2, 0x80, 0x82, 0x5, 0xa, 0x6, 
    0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x5, 0x36, 0x1c, 0x2, 0x84, 
    0x85, 0x7, 0x1c, 0x2, 0x2, 0x85, 0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x77, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x87, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x88, 0x8a, 0x5, 0xa, 0x6, 0x2, 0x89, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x8c, 0x7, 0xc, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x36, 0x1c, 0x2, 
    0x8d, 0x8e, 0x7, 0xd, 0x2, 0x2, 0x8e, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x91, 0x5, 0xa, 0x6, 0x2, 0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 
    0xc, 0x2, 0x2, 0x93, 0x94, 0x5, 0x36, 0x1c, 0x2, 0x94, 0x95, 0x7, 0xe, 
    0x2, 0x2, 0x95, 0x19, 0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 0x5, 0xa, 0x6, 
    0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x19, 0x2, 0x2, 0x9a, 
    0x9b, 0x5, 0x36, 0x1c, 0x2, 0x9b, 0x9c, 0x7, 0x1d, 0x2, 0x2, 0x9c, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0xa5, 0x5, 0xc, 0x7, 0x2, 0x9e, 0xa5, 0x5, 
    0x10, 0x9, 0x2, 0x9f, 0xa5, 0x5, 0x12, 0xa, 0x2, 0xa0, 0xa5, 0x5, 0x14, 
    0xb, 0x2, 0xa1, 0xa5, 0x5, 0x16, 0xc, 0x2, 0xa2, 0xa5, 0x5, 0x18, 0xd, 
    0x2, 0xa3, 0xa5, 0x5, 0x1a, 0xe, 0x2, 0xa4, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0xa4, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa4, 
    0xa0, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x3, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x1c, 
    0x2, 0x2, 0xa8, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x5, 0x2, 
    0x2, 0xaa, 0xab, 0x7, 0x1c, 0x2, 0x2, 0xab, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0xaf, 0x5, 0x20, 0x11, 0x2, 0xad, 0xaf, 0x5, 0x1e, 0x10, 0x2, 
    0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x3, 0x2, 0x2, 0xb1, 0xb2, 
    0x7, 0xf, 0x2, 0x2, 0xb2, 0x25, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 
    0x5, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0xf, 0x2, 0x2, 0xb5, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0xb9, 0x5, 0x24, 0x13, 0x2, 0xb7, 0xb9, 0x5, 0x26, 0x14, 
    0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0x29, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x10, 0x2, 0x2, 0xbb, 
    0xbc, 0x7, 0x11, 0x2, 0x2, 0xbc, 0xbd, 0x7, 0x12, 0x2, 0x2, 0xbd, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x13, 0x2, 0x2, 0xbf, 0xc0, 0x7, 
    0x11, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x12, 0x2, 0x2, 0xc1, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0xc5, 0x5, 0x2c, 0x17, 0x2, 0xc3, 0xc5, 0x5, 0x2a, 0x16, 
    0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc5, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x5, 0x1c, 0xf, 0x2, 0xc7, 
    0xc9, 0x5, 0x2e, 0x18, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 0x7, 
    0x14, 0x2, 0x2, 0xcb, 0xcd, 0x9, 0x5, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xd0, 0x5, 0x30, 0x19, 0x2, 0xcf, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd5, 
    0x7, 0x28, 0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0xd7, 0x33, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0xdb, 0x5, 0x32, 0x1a, 0x2, 0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 
    0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xe0, 
    0x7, 0x2, 0x2, 0x3, 0xdf, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xde, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0x35, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe4, 0x5, 0x38, 
    0x1d, 0x2, 0xe2, 0xe4, 0x5, 0x3a, 0x1e, 0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe6, 0x7, 0x27, 0x2, 0x2, 0xe6, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe7, 
    0xe8, 0x9, 0x6, 0x2, 0x2, 0xe8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x4a, 
    0x57, 0x64, 0x68, 0x6b, 0x70, 0x75, 0x79, 0x7c, 0x81, 0x86, 0x89, 0x90, 
    0x97, 0xa4, 0xae, 0xb8, 0xc4, 0xc8, 0xcc, 0xd1, 0xd6, 0xdc, 0xdf, 0xe3, 
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
