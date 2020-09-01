
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
    setState(46);
    match(IvionParser::T__0);
    setState(47);
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
    setState(49);
    match(IvionParser::T__2);
    setState(50);
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
    setState(52);
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
    setState(54);
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
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__3:
      case IvionParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(56);
        cardController();
        break;
      }

      case IvionParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(57);
        selectPlayer();
        break;
      }

      case IvionParser::T__5:
      case IvionParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(58);
        previousPlayer();
        break;
      }

      case IvionParser::T__0: {
        enterOuterAlt(_localctx, 4);
        setState(59);
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
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        match(IvionParser::T__7);
        setState(63);
        integer();
        setState(64);
        match(IvionParser::T__8);
        setState(65);
        match(IvionParser::To);
        setState(66);
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
        setState(68);
        player();
        setState(69);
        match(IvionParser::Take);
        setState(70);
        integer();
        setState(71);
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
    setState(75);
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
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Disarm:
      case IvionParser::Silence:
      case IvionParser::Slow: {
        enterOuterAlt(_localctx, 1);
        setState(77);
        control();
        setState(78);
        integer();
        setState(79);
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
        setState(81);
        player();
        setState(82);
        match(IvionParser::Is);
        setState(83);
        control();
        setState(84);
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
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(88);
      match(IvionParser::Move);
      setState(90);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(89);
        player();
        break;
      }

      }
      setState(93);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::T__9) {
        setState(92);
        match(IvionParser::T__9);
      }
      setState(95);
      tile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(96);
      match(IvionParser::Move);
      setState(98);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::T__0)
        | (1ULL << IvionParser::T__2)
        | (1ULL << IvionParser::T__3)
        | (1ULL << IvionParser::T__4)
        | (1ULL << IvionParser::T__5)
        | (1ULL << IvionParser::T__6))) != 0)) {
        setState(97);
        player();
      }
      setState(100);
      integer();
      setState(101);
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
    setState(120);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(105);
      match(IvionParser::Travel);
      setState(107);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(106);
        player();
        break;
      }

      }
      setState(110);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::T__9) {
        setState(109);
        match(IvionParser::T__9);
      }
      setState(112);
      tile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(113);
      match(IvionParser::Travel);
      setState(115);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::T__0)
        | (1ULL << IvionParser::T__2)
        | (1ULL << IvionParser::T__3)
        | (1ULL << IvionParser::T__4)
        | (1ULL << IvionParser::T__5)
        | (1ULL << IvionParser::T__6))) != 0)) {
        setState(114);
        player();
      }
      setState(117);
      integer();
      setState(118);
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
  enterRule(_localctx, 20, IvionParser::RuleEffectPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(122);
      damagePlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(123);
      controlPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(124);
      movePlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(125);
      travelPlayer();
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
  enterRule(_localctx, 22, IvionParser::RuleTargetTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(IvionParser::T__0);
    setState(129);
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
  enterRule(_localctx, 24, IvionParser::RuleSelectTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(IvionParser::T__2);
    setState(132);
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
  enterRule(_localctx, 26, IvionParser::RuleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__2: {
        enterOuterAlt(_localctx, 1);
        setState(134);
        selectTile();
        break;
      }

      case IvionParser::T__0: {
        enterOuterAlt(_localctx, 2);
        setState(135);
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
  enterRule(_localctx, 28, IvionParser::RuleTargetCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(IvionParser::T__0);
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
  enterRule(_localctx, 30, IvionParser::RuleSelectCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(IvionParser::T__2);
    setState(142);
    match(IvionParser::T__10);
   
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
  enterRule(_localctx, 32, IvionParser::RuleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(144);
        targetCard();
        break;
      }

      case IvionParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(145);
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

//----------------- LineContext ------------------------------------------------------------------

IvionParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::EffectPlayerContext* IvionParser::LineContext::effectPlayer() {
  return getRuleContext<IvionParser::EffectPlayerContext>(0);
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
  enterRule(_localctx, 34, IvionParser::RuleLine);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    effectPlayer();
    setState(149);
    match(IvionParser::T__11);
    setState(151);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(150);
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
  enterRule(_localctx, 36, IvionParser::RuleParagraph);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(154); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(153);
              line();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(156); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(161);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IvionParser::Newline) {
      setState(158);
      match(IvionParser::Newline);
      setState(163);
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
  enterRule(_localctx, 38, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(170);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__0:
      case IvionParser::T__2:
      case IvionParser::T__3:
      case IvionParser::T__4:
      case IvionParser::T__5:
      case IvionParser::T__6:
      case IvionParser::T__7:
      case IvionParser::Disarm:
      case IvionParser::Silence:
      case IvionParser::Slow:
      case IvionParser::Move:
      case IvionParser::Travel: {
        enterOuterAlt(_localctx, 1);
        setState(165); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(164);
          paragraph();
          setState(167); 
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
          | (1ULL << IvionParser::Disarm)
          | (1ULL << IvionParser::Silence)
          | (1ULL << IvionParser::Slow)
          | (1ULL << IvionParser::Move)
          | (1ULL << IvionParser::Travel))) != 0));
        break;
      }

      case IvionParser::EOF: {
        enterOuterAlt(_localctx, 2);
        setState(169);
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
  enterRule(_localctx, 40, IvionParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(174);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 1);
        setState(172);
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
        setState(173);
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
  enterRule(_localctx, 42, IvionParser::RuleIntegerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
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
  enterRule(_localctx, 44, IvionParser::RuleIntegerWord);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
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
  "effectPlayer", "targetTile", "selectTile", "tile", "targetCard", "selectCard", 
  "card", "line", "paragraph", "text", "integer", "integerLiteral", "integerWord"
};

std::vector<std::string> IvionParser::_literalNames = {
  "", "'target'", "'player'", "'a'", "'you'", "'yourself'", "'them'", "'they'", 
  "'deal'", "'damage'", "'to'", "'card'", "'.'", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "'\n'"
};

std::vector<std::string> IvionParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "Disarm", "Silence", 
  "Slow", "Discard", "Move", "Travel", "Tile", "One", "Two", "Three", "Four", 
  "Five", "Six", "Is", "To", "Take", "Integer", "Newline", "Whitespace", 
  "BlockComment", "LineComment"
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
    0x3, 0x23, 0xb7, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x5, 0x6, 0x3f, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x4c, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x59, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5d, 0xa, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0x60, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x65, 
    0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x6a, 0xa, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0x6e, 0xa, 0xb, 0x3, 0xb, 0x5, 0xb, 0x71, 0xa, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x76, 0xa, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7b, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x5, 0xc, 0x81, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x8b, 0xa, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x95, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0x9a, 0xa, 0x13, 0x3, 0x14, 0x6, 0x14, 0x9d, 0xa, 
    0x14, 0xd, 0x14, 0xe, 0x14, 0x9e, 0x3, 0x14, 0x7, 0x14, 0xa2, 0xa, 0x14, 
    0xc, 0x14, 0xe, 0x14, 0xa5, 0xb, 0x14, 0x3, 0x15, 0x6, 0x15, 0xa8, 0xa, 
    0x15, 0xd, 0x15, 0xe, 0x15, 0xa9, 0x3, 0x15, 0x5, 0x15, 0xad, 0xa, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xb1, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x2, 0x2, 0x19, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x2, 0x7, 0x3, 0x2, 0x6, 0x7, 
    0x3, 0x2, 0x8, 0x9, 0x3, 0x2, 0xf, 0x11, 0x3, 0x3, 0x20, 0x20, 0x3, 
    0x2, 0x16, 0x1b, 0x2, 0xb7, 0x2, 0x30, 0x3, 0x2, 0x2, 0x2, 0x4, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x36, 0x3, 0x2, 0x2, 0x2, 0x8, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x58, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x16, 0x80, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x82, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x94, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x96, 0x3, 0x2, 0x2, 0x2, 0x26, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0xac, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0xb2, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 
    0x7, 0x3, 0x2, 0x2, 0x31, 0x32, 0x7, 0x4, 0x2, 0x2, 0x32, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x33, 0x34, 0x7, 0x5, 0x2, 0x2, 0x34, 0x35, 0x7, 0x4, 
    0x2, 0x2, 0x35, 0x5, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x9, 0x2, 0x2, 
    0x2, 0x37, 0x7, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x9, 0x3, 0x2, 0x2, 
    0x39, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3b, 
    0x3f, 0x5, 0x4, 0x3, 0x2, 0x3c, 0x3f, 0x5, 0x8, 0x5, 0x2, 0x3d, 0x3f, 
    0x5, 0x2, 0x2, 0x2, 0x3e, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3b, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x3f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0xa, 0x2, 
    0x2, 0x41, 0x42, 0x5, 0x2a, 0x16, 0x2, 0x42, 0x43, 0x7, 0xb, 0x2, 0x2, 
    0x43, 0x44, 0x7, 0x1d, 0x2, 0x2, 0x44, 0x45, 0x5, 0xa, 0x6, 0x2, 0x45, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x5, 0xa, 0x6, 0x2, 0x47, 0x48, 
    0x7, 0x1e, 0x2, 0x2, 0x48, 0x49, 0x5, 0x2a, 0x16, 0x2, 0x49, 0x4a, 0x7, 
    0xb, 0x2, 0x2, 0x4a, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x40, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4c, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4e, 0x9, 0x4, 0x2, 0x2, 0x4e, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x50, 0x5, 0xe, 0x8, 0x2, 0x50, 0x51, 0x5, 0x2a, 0x16, 0x2, 0x51, 
    0x52, 0x5, 0xa, 0x6, 0x2, 0x52, 0x59, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 
    0x5, 0xa, 0x6, 0x2, 0x54, 0x55, 0x7, 0x1c, 0x2, 0x2, 0x55, 0x56, 0x5, 
    0xe, 0x8, 0x2, 0x56, 0x57, 0x5, 0x2a, 0x16, 0x2, 0x57, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x58, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5c, 0x7, 0x13, 0x2, 0x2, 
    0x5b, 0x5d, 0x5, 0xa, 0x6, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x60, 
    0x7, 0xc, 0x2, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x6a, 0x5, 0x1c, 
    0xf, 0x2, 0x62, 0x64, 0x7, 0x13, 0x2, 0x2, 0x63, 0x65, 0x5, 0xa, 0x6, 
    0x2, 0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x5, 0x2a, 0x16, 0x2, 0x67, 
    0x68, 0x7, 0x15, 0x2, 0x2, 0x68, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x69, 0x5a, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x62, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x6d, 0x7, 0x14, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0xa, 
    0x6, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x71, 0x7, 0xc, 0x2, 0x2, 
    0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x72, 0x7b, 0x5, 0x1c, 0xf, 0x2, 0x73, 0x75, 
    0x7, 0x14, 0x2, 0x2, 0x74, 0x76, 0x5, 0xa, 0x6, 0x2, 0x75, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x78, 0x5, 0x2a, 0x16, 0x2, 0x78, 0x79, 0x7, 0x15, 0x2, 
    0x2, 0x79, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x73, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x81, 0x5, 0xc, 0x7, 0x2, 0x7d, 0x81, 0x5, 0x10, 0x9, 0x2, 0x7e, 0x81, 
    0x5, 0x12, 0xa, 0x2, 0x7f, 0x81, 0x5, 0x14, 0xb, 0x2, 0x80, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x83, 0x7, 0x3, 0x2, 0x2, 0x83, 0x84, 0x7, 0x15, 0x2, 0x2, 
    0x84, 0x19, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x5, 0x2, 0x2, 0x86, 
    0x87, 0x7, 0x15, 0x2, 0x2, 0x87, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x88, 0x8b, 
    0x5, 0x1a, 0xe, 0x2, 0x89, 0x8b, 0x5, 0x18, 0xd, 0x2, 0x8a, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8d, 0x7, 0x3, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0xd, 0x2, 
    0x2, 0x8e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x5, 0x2, 0x2, 
    0x90, 0x91, 0x7, 0xd, 0x2, 0x2, 0x91, 0x21, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x95, 0x5, 0x1e, 0x10, 0x2, 0x93, 0x95, 0x5, 0x20, 0x11, 0x2, 0x94, 
    0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x5, 0x16, 0xc, 0x2, 0x97, 0x99, 0x7, 
    0xe, 0x2, 0x2, 0x98, 0x9a, 0x9, 0x5, 0x2, 0x2, 0x99, 0x98, 0x3, 0x2, 
    0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x9b, 0x9d, 0x5, 0x24, 0x13, 0x2, 0x9c, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9e, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa2, 
    0x7, 0x20, 0x2, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0x27, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa8, 0x5, 0x26, 0x14, 0x2, 0xa7, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 
    0x7, 0x2, 0x2, 0x3, 0xac, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xac, 0xab, 0x3, 
    0x2, 0x2, 0x2, 0xad, 0x29, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb1, 0x5, 0x2c, 
    0x17, 0x2, 0xaf, 0xb1, 0x5, 0x2e, 0x18, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0xb2, 0xb3, 0x7, 0x1f, 0x2, 0x2, 0xb3, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb5, 0x9, 0x6, 0x2, 0x2, 0xb5, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x3e, 
    0x4b, 0x58, 0x5c, 0x5f, 0x64, 0x69, 0x6d, 0x70, 0x75, 0x7a, 0x80, 0x8a, 
    0x94, 0x99, 0x9e, 0xa3, 0xa9, 0xac, 0xb0, 
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
