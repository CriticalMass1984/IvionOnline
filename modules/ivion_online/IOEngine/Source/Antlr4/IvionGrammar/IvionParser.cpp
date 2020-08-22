
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
    setState(40);
    match(IvionParser::T__0);
    setState(41);
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
    setState(43);
    match(IvionParser::T__2);
    setState(44);
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
    setState(46);
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
    setState(48);
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
    setState(54);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__3:
      case IvionParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(50);
        cardController();
        break;
      }

      case IvionParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(51);
        selectPlayer();
        break;
      }

      case IvionParser::T__5:
      case IvionParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(52);
        previousPlayer();
        break;
      }

      case IvionParser::T__0: {
        enterOuterAlt(_localctx, 4);
        setState(53);
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
    setState(67);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(56);
        match(IvionParser::T__7);
        setState(57);
        integer();
        setState(58);
        match(IvionParser::T__8);
        setState(59);
        match(IvionParser::T__9);
        setState(60);
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
        setState(62);
        player();
        setState(63);
        match(IvionParser::Take);
        setState(64);
        integer();
        setState(65);
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
    setState(69);
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
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Disarm:
      case IvionParser::Silence:
      case IvionParser::Slow: {
        enterOuterAlt(_localctx, 1);
        setState(71);
        control();
        setState(72);
        integer();
        setState(73);
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
        setState(75);
        player();
        setState(76);
        match(IvionParser::Is);
        setState(77);
        control();
        setState(78);
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

IvionParser::PlayerContext* IvionParser::MovePlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::MovePlayerContext::Shift() {
  return getToken(IvionParser::Shift, 0);
}

IvionParser::IntegerContext* IvionParser::MovePlayerContext::integer() {
  return getRuleContext<IvionParser::IntegerContext>(0);
}

tree::TerminalNode* IvionParser::MovePlayerContext::Tile() {
  return getToken(IvionParser::Tile, 0);
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
  enterRule(_localctx, 16, IvionParser::RuleMovePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      player();
      setState(83);
      match(IvionParser::Shift);
      setState(84);
      integer();
      setState(85);
      match(IvionParser::Tile);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(87);
      player();
      setState(88);
      match(IvionParser::Shift);
      setState(89);
      match(IvionParser::T__9);
      setState(90);
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
  enterRule(_localctx, 18, IvionParser::RuleEffectPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      damagePlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      controlPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(96);
      movePlayer();
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
  enterRule(_localctx, 20, IvionParser::RuleTargetTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(IvionParser::T__0);
    setState(100);
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

IvionParser::TargetTileContext* IvionParser::SelectTileContext::targetTile() {
  return getRuleContext<IvionParser::TargetTileContext>(0);
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
  enterRule(_localctx, 22, IvionParser::RuleSelectTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(102);
        targetTile();
        break;
      }

      case IvionParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(103);
        match(IvionParser::T__2);
        setState(104);
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
  enterRule(_localctx, 24, IvionParser::RuleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(107);
      selectTile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(108);
      targetTile();
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
  enterRule(_localctx, 26, IvionParser::RuleTargetCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(IvionParser::T__0);
    setState(112);
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
  enterRule(_localctx, 28, IvionParser::RuleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    targetCard();
   
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
  enterRule(_localctx, 30, IvionParser::RuleLine);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    effectPlayer();
    setState(117);
    match(IvionParser::T__11);
    setState(119);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(118);
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
  enterRule(_localctx, 32, IvionParser::RuleParagraph);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(122); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(121);
              line();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(124); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IvionParser::Newline) {
      setState(126);
      match(IvionParser::Newline);
      setState(131);
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
  enterRule(_localctx, 34, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(138);
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
      case IvionParser::Slow: {
        enterOuterAlt(_localctx, 1);
        setState(133); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(132);
          paragraph();
          setState(135); 
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
          | (1ULL << IvionParser::Slow))) != 0));
        break;
      }

      case IvionParser::EOF: {
        enterOuterAlt(_localctx, 2);
        setState(137);
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
  enterRule(_localctx, 36, IvionParser::RuleInteger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    integerLiteral();
   
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
  enterRule(_localctx, 38, IvionParser::RuleIntegerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(IvionParser::Integer);
   
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
  "damagePlayer", "control", "controlPlayer", "movePlayer", "effectPlayer", 
  "targetTile", "selectTile", "tile", "targetCard", "card", "line", "paragraph", 
  "text", "integer", "integerLiteral"
};

std::vector<std::string> IvionParser::_literalNames = {
  "", "'target'", "'player'", "'a'", "'you'", "'yourself'", "'them'", "'they'", 
  "'deal'", "'damage'", "'to'", "'card'", "'.'", "", "", "", "", "", "", 
  "", "", "", "'\n'"
};

std::vector<std::string> IvionParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "Disarm", "Silence", 
  "Slow", "Discard", "Shift", "Tile", "Is", "Take", "Integer", "Newline", 
  "Whitespace", "BlockComment", "LineComment"
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
    0x3, 0x1b, 0x93, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0x39, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x5, 0x7, 0x46, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x53, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5f, 0xa, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x64, 0xa, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x6c, 0xa, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x70, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x7a, 0xa, 0x11, 0x3, 0x12, 0x6, 0x12, 0x7d, 0xa, 0x12, 0xd, 0x12, 
    0xe, 0x12, 0x7e, 0x3, 0x12, 0x7, 0x12, 0x82, 0xa, 0x12, 0xc, 0x12, 0xe, 
    0x12, 0x85, 0xb, 0x12, 0x3, 0x13, 0x6, 0x13, 0x88, 0xa, 0x13, 0xd, 0x13, 
    0xe, 0x13, 0x89, 0x3, 0x13, 0x5, 0x13, 0x8d, 0xa, 0x13, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x2, 0x2, 0x16, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2, 0x6, 0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 
    0x8, 0x9, 0x3, 0x2, 0xf, 0x11, 0x3, 0x3, 0x18, 0x18, 0x2, 0x8d, 0x2, 
    0x2a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x32, 0x3, 0x2, 0x2, 0x2, 0xa, 0x38, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x45, 0x3, 0x2, 0x2, 0x2, 0xe, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x52, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x63, 0x3, 0x2, 0x2, 0x2, 0x16, 0x65, 0x3, 0x2, 0x2, 0x2, 0x18, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x71, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x74, 0x3, 0x2, 0x2, 0x2, 0x20, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x24, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x28, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x2b, 0x7, 0x3, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x4, 0x2, 0x2, 0x2c, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x5, 0x2, 0x2, 0x2e, 0x2f, 
    0x7, 0x4, 0x2, 0x2, 0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x9, 
    0x2, 0x2, 0x2, 0x31, 0x7, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x9, 0x3, 
    0x2, 0x2, 0x33, 0x9, 0x3, 0x2, 0x2, 0x2, 0x34, 0x39, 0x5, 0x6, 0x4, 
    0x2, 0x35, 0x39, 0x5, 0x4, 0x3, 0x2, 0x36, 0x39, 0x5, 0x8, 0x5, 0x2, 
    0x37, 0x39, 0x5, 0x2, 0x2, 0x2, 0x38, 0x34, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 
    0xa, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0x26, 0x14, 0x2, 0x3c, 0x3d, 0x7, 0xb, 
    0x2, 0x2, 0x3d, 0x3e, 0x7, 0xc, 0x2, 0x2, 0x3e, 0x3f, 0x5, 0xa, 0x6, 
    0x2, 0x3f, 0x46, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x5, 0xa, 0x6, 0x2, 
    0x41, 0x42, 0x7, 0x16, 0x2, 0x2, 0x42, 0x43, 0x5, 0x26, 0x14, 0x2, 0x43, 
    0x44, 0x7, 0xb, 0x2, 0x2, 0x44, 0x46, 0x3, 0x2, 0x2, 0x2, 0x45, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x40, 0x3, 0x2, 0x2, 0x2, 0x46, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x48, 0x9, 0x4, 0x2, 0x2, 0x48, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x4a, 0x5, 0xe, 0x8, 0x2, 0x4a, 0x4b, 0x5, 0x26, 0x14, 
    0x2, 0x4b, 0x4c, 0x5, 0xa, 0x6, 0x2, 0x4c, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x4d, 0x4e, 0x5, 0xa, 0x6, 0x2, 0x4e, 0x4f, 0x7, 0x15, 0x2, 0x2, 0x4f, 
    0x50, 0x5, 0xe, 0x8, 0x2, 0x50, 0x51, 0x5, 0x26, 0x14, 0x2, 0x51, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x49, 0x3, 0x2, 0x2, 0x2, 0x52, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x11, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x5, 0xa, 
    0x6, 0x2, 0x55, 0x56, 0x7, 0x13, 0x2, 0x2, 0x56, 0x57, 0x5, 0x26, 0x14, 
    0x2, 0x57, 0x58, 0x7, 0x14, 0x2, 0x2, 0x58, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x59, 0x5a, 0x5, 0xa, 0x6, 0x2, 0x5a, 0x5b, 0x7, 0x13, 0x2, 0x2, 0x5b, 
    0x5c, 0x7, 0xc, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x1a, 0xe, 0x2, 0x5d, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x54, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x13, 0x3, 0x2, 0x2, 0x2, 0x60, 0x64, 0x5, 0xc, 
    0x7, 0x2, 0x61, 0x64, 0x5, 0x10, 0x9, 0x2, 0x62, 0x64, 0x5, 0x12, 0xa, 
    0x2, 0x63, 0x60, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x15, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x66, 0x7, 0x3, 0x2, 0x2, 0x66, 0x67, 0x7, 0x14, 0x2, 0x2, 0x67, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x6c, 0x5, 0x16, 0xc, 0x2, 0x69, 0x6a, 0x7, 
    0x5, 0x2, 0x2, 0x6a, 0x6c, 0x7, 0x14, 0x2, 0x2, 0x6b, 0x68, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x70, 0x5, 0x18, 0xd, 0x2, 0x6e, 0x70, 0x5, 0x16, 0xc, 0x2, 
    0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x3, 0x2, 0x2, 0x72, 0x73, 
    0x7, 0xd, 0x2, 0x2, 0x73, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x5, 
    0x1c, 0xf, 0x2, 0x75, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x5, 0x14, 
    0xb, 0x2, 0x77, 0x79, 0x7, 0xe, 0x2, 0x2, 0x78, 0x7a, 0x9, 0x5, 0x2, 
    0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x21, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x5, 0x20, 0x11, 0x2, 0x7c, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x82, 0x7, 0x18, 0x2, 0x2, 0x81, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x88, 0x5, 0x22, 0x12, 0x2, 0x87, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8d, 0x3, 
    0x2, 0x2, 0x2, 0x8b, 0x8d, 0x7, 0x2, 0x2, 0x3, 0x8c, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x8f, 0x5, 0x28, 0x15, 0x2, 0x8f, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x91, 0x7, 0x17, 0x2, 0x2, 0x91, 0x29, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x38, 0x45, 0x52, 0x5e, 0x63, 0x6b, 0x6f, 0x79, 0x7e, 0x83, 0x89, 0x8c, 
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
