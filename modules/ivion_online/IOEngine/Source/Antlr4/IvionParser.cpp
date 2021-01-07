
// Generated from IvionParser.antlr4 by ANTLR 4.8


#include "IOEngine/Antlr4/IvionParserVisitor.h"

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
  return "IvionParser.antlr4";
}

const std::vector<std::string>& IvionParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& IvionParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- PlayerTypeContext ------------------------------------------------------------------

IvionParser::PlayerTypeContext::PlayerTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PlayerTypeContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::PlayerTypeContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::PlayerTypeContext::Ally() {
  return getToken(IvionParser::Ally, 0);
}


size_t IvionParser::PlayerTypeContext::getRuleIndex() const {
  return IvionParser::RulePlayerType;
}


antlrcpp::Any IvionParser::PlayerTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerType(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerTypeContext* IvionParser::playerType() {
  PlayerTypeContext *_localctx = _tracker.createInstance<PlayerTypeContext>(_ctx, getState());
  enterRule(_localctx, 0, IvionParser::RulePlayerType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Enemy

    || _la == IvionParser::Player || _la == IvionParser::Ally)) {
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

//----------------- PlayerPreFixContext ------------------------------------------------------------------

IvionParser::PlayerPreFixContext::PlayerPreFixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PlayerPreFixContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::PlayerPreFixContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}

tree::TerminalNode* IvionParser::PlayerPreFixContext::Uncontrolled() {
  return getToken(IvionParser::Uncontrolled, 0);
}


size_t IvionParser::PlayerPreFixContext::getRuleIndex() const {
  return IvionParser::RulePlayerPreFix;
}


antlrcpp::Any IvionParser::PlayerPreFixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerPreFix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerPreFixContext* IvionParser::playerPreFix() {
  PlayerPreFixContext *_localctx = _tracker.createInstance<PlayerPreFixContext>(_ctx, getState());
  enterRule(_localctx, 2, IvionParser::RulePlayerPreFix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    _la = _input->LA(1);
    if (!(((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & ((1ULL << (IvionParser::Another - 33))
      | (1ULL << (IvionParser::Controlled - 33))
      | (1ULL << (IvionParser::Uncontrolled - 33)))) != 0))) {
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

//----------------- PlayerPostFixContext ------------------------------------------------------------------

IvionParser::PlayerPostFixContext::PlayerPostFixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PlayerPostFixContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::PlayerPostFixContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::PlayerPostFixContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::PlayerPostFixContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

IvionParser::TileContext* IvionParser::PlayerPostFixContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}

tree::TerminalNode* IvionParser::PlayerPostFixContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::PlayerPostFixContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::LiteralValueContext* IvionParser::PlayerPostFixContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::PlayerPostFixContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::PlayerPostFixContext::Away() {
  return getToken(IvionParser::Away, 0);
}


size_t IvionParser::PlayerPostFixContext::getRuleIndex() const {
  return IvionParser::RulePlayerPostFix;
}


antlrcpp::Any IvionParser::PlayerPostFixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerPostFix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerPostFixContext* IvionParser::playerPostFix() {
  PlayerPostFixContext *_localctx = _tracker.createInstance<PlayerPostFixContext>(_ctx, getState());
  enterRule(_localctx, 4, IvionParser::RulePlayerPostFix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(340);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(324);
      match(IvionParser::In);
      setState(325);
      match(IvionParser::Terrain);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(326);
      match(IvionParser::Near);
      setState(327);
      match(IvionParser::Terrain);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(328);
      match(IvionParser::Near);
      setState(329);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(330);
      match(IvionParser::In);
      setState(331);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(332);
      match(IvionParser::In);
      setState(333);
      tile();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(334);
      match(IvionParser::At);
      setState(335);
      match(IvionParser::Least);
      setState(336);
      literalValue();
      setState(337);
      match(IvionParser::Tile);
      setState(338);
      match(IvionParser::Away);
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

//----------------- PlayerFilterContext ------------------------------------------------------------------

IvionParser::PlayerFilterContext::PlayerFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerTypeContext* IvionParser::PlayerFilterContext::playerType() {
  return getRuleContext<IvionParser::PlayerTypeContext>(0);
}

std::vector<IvionParser::PlayerPreFixContext *> IvionParser::PlayerFilterContext::playerPreFix() {
  return getRuleContexts<IvionParser::PlayerPreFixContext>();
}

IvionParser::PlayerPreFixContext* IvionParser::PlayerFilterContext::playerPreFix(size_t i) {
  return getRuleContext<IvionParser::PlayerPreFixContext>(i);
}

std::vector<IvionParser::PlayerPostFixContext *> IvionParser::PlayerFilterContext::playerPostFix() {
  return getRuleContexts<IvionParser::PlayerPostFixContext>();
}

IvionParser::PlayerPostFixContext* IvionParser::PlayerFilterContext::playerPostFix(size_t i) {
  return getRuleContext<IvionParser::PlayerPostFixContext>(i);
}


size_t IvionParser::PlayerFilterContext::getRuleIndex() const {
  return IvionParser::RulePlayerFilter;
}


antlrcpp::Any IvionParser::PlayerFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerFilterContext* IvionParser::playerFilter() {
  PlayerFilterContext *_localctx = _tracker.createInstance<PlayerFilterContext>(_ctx, getState());
  enterRule(_localctx, 6, IvionParser::RulePlayerFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(345);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & ((1ULL << (IvionParser::Another - 33))
      | (1ULL << (IvionParser::Controlled - 33))
      | (1ULL << (IvionParser::Uncontrolled - 33)))) != 0)) {
      setState(342);
      playerPreFix();
      setState(347);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(348);
    playerType();
    setState(352);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(349);
        playerPostFix(); 
      }
      setState(354);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CurrentPlayerContext ------------------------------------------------------------------

IvionParser::CurrentPlayerContext::CurrentPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CurrentPlayerContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
}

tree::TerminalNode* IvionParser::CurrentPlayerContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::CurrentPlayerContext::Your() {
  return getToken(IvionParser::Your, 0);
}


size_t IvionParser::CurrentPlayerContext::getRuleIndex() const {
  return IvionParser::RuleCurrentPlayer;
}


antlrcpp::Any IvionParser::CurrentPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCurrentPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CurrentPlayerContext* IvionParser::currentPlayer() {
  CurrentPlayerContext *_localctx = _tracker.createInstance<CurrentPlayerContext>(_ctx, getState());
  enterRule(_localctx, 8, IvionParser::RuleCurrentPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(355);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::You))) != 0))) {
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

tree::TerminalNode* IvionParser::PreviousPlayerContext::Them() {
  return getToken(IvionParser::Them, 0);
}

tree::TerminalNode* IvionParser::PreviousPlayerContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::PreviousPlayerContext::That() {
  return getToken(IvionParser::That, 0);
}

IvionParser::PlayerTypeContext* IvionParser::PreviousPlayerContext::playerType() {
  return getRuleContext<IvionParser::PlayerTypeContext>(0);
}

tree::TerminalNode* IvionParser::PreviousPlayerContext::Their() {
  return getToken(IvionParser::Their, 0);
}


size_t IvionParser::PreviousPlayerContext::getRuleIndex() const {
  return IvionParser::RulePreviousPlayer;
}


antlrcpp::Any IvionParser::PreviousPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
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
    setState(362);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Them: {
        enterOuterAlt(_localctx, 1);
        setState(357);
        match(IvionParser::Them);
        break;
      }

      case IvionParser::They: {
        enterOuterAlt(_localctx, 2);
        setState(358);
        match(IvionParser::They);
        break;
      }

      case IvionParser::That: {
        enterOuterAlt(_localctx, 3);
        setState(359);
        match(IvionParser::That);
        setState(360);
        playerType();
        break;
      }

      case IvionParser::Their: {
        enterOuterAlt(_localctx, 4);
        setState(361);
        match(IvionParser::Their);
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

//----------------- PlayerRefContext ------------------------------------------------------------------

IvionParser::PlayerRefContext::PlayerRefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PreviousPlayerContext* IvionParser::PlayerRefContext::previousPlayer() {
  return getRuleContext<IvionParser::PreviousPlayerContext>(0);
}

IvionParser::CurrentPlayerContext* IvionParser::PlayerRefContext::currentPlayer() {
  return getRuleContext<IvionParser::CurrentPlayerContext>(0);
}


size_t IvionParser::PlayerRefContext::getRuleIndex() const {
  return IvionParser::RulePlayerRef;
}


antlrcpp::Any IvionParser::PlayerRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerRef(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerRefContext* IvionParser::playerRef() {
  PlayerRefContext *_localctx = _tracker.createInstance<PlayerRefContext>(_ctx, getState());
  enterRule(_localctx, 12, IvionParser::RulePlayerRef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(366);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Them:
      case IvionParser::That:
      case IvionParser::They:
      case IvionParser::Their: {
        enterOuterAlt(_localctx, 1);
        setState(364);
        previousPlayer();
        break;
      }

      case IvionParser::Yourself:
      case IvionParser::Your:
      case IvionParser::You: {
        enterOuterAlt(_localctx, 2);
        setState(365);
        currentPlayer();
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

//----------------- TargetPlayerContext ------------------------------------------------------------------

IvionParser::TargetPlayerContext::TargetPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TargetPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

IvionParser::PlayerFilterContext* IvionParser::TargetPlayerContext::playerFilter() {
  return getRuleContext<IvionParser::PlayerFilterContext>(0);
}

tree::TerminalNode* IvionParser::TargetPlayerContext::Another() {
  return getToken(IvionParser::Another, 0);
}


size_t IvionParser::TargetPlayerContext::getRuleIndex() const {
  return IvionParser::RuleTargetPlayer;
}


antlrcpp::Any IvionParser::TargetPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTargetPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TargetPlayerContext* IvionParser::targetPlayer() {
  TargetPlayerContext *_localctx = _tracker.createInstance<TargetPlayerContext>(_ctx, getState());
  enterRule(_localctx, 14, IvionParser::RuleTargetPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(369);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(368);
      match(IvionParser::Another);
    }
    setState(371);
    match(IvionParser::Target);
    setState(372);
    playerFilter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PreviousCardsControllerContext ------------------------------------------------------------------

IvionParser::PreviousCardsControllerContext::PreviousCardsControllerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PreviousCardContext* IvionParser::PreviousCardsControllerContext::previousCard() {
  return getRuleContext<IvionParser::PreviousCardContext>(0);
}

tree::TerminalNode* IvionParser::PreviousCardsControllerContext::Controller() {
  return getToken(IvionParser::Controller, 0);
}

tree::TerminalNode* IvionParser::PreviousCardsControllerContext::Its() {
  return getToken(IvionParser::Its, 0);
}


size_t IvionParser::PreviousCardsControllerContext::getRuleIndex() const {
  return IvionParser::RulePreviousCardsController;
}


antlrcpp::Any IvionParser::PreviousCardsControllerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPreviousCardsController(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PreviousCardsControllerContext* IvionParser::previousCardsController() {
  PreviousCardsControllerContext *_localctx = _tracker.createInstance<PreviousCardsControllerContext>(_ctx, getState());
  enterRule(_localctx, 16, IvionParser::RulePreviousCardsController);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(379);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::That:
      case IvionParser::The: {
        enterOuterAlt(_localctx, 1);
        setState(374);
        previousCard();
        setState(375);
        match(IvionParser::Controller);
        break;
      }

      case IvionParser::Its: {
        enterOuterAlt(_localctx, 2);
        setState(377);
        match(IvionParser::Its);
        setState(378);
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

//----------------- SinglePlayerContext ------------------------------------------------------------------

IvionParser::SinglePlayerContext::SinglePlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::TargetPlayerContext* IvionParser::SinglePlayerContext::targetPlayer() {
  return getRuleContext<IvionParser::TargetPlayerContext>(0);
}

IvionParser::PlayerRefContext* IvionParser::SinglePlayerContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

IvionParser::PreviousCardsControllerContext* IvionParser::SinglePlayerContext::previousCardsController() {
  return getRuleContext<IvionParser::PreviousCardsControllerContext>(0);
}


size_t IvionParser::SinglePlayerContext::getRuleIndex() const {
  return IvionParser::RuleSinglePlayer;
}


antlrcpp::Any IvionParser::SinglePlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSinglePlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SinglePlayerContext* IvionParser::singlePlayer() {
  SinglePlayerContext *_localctx = _tracker.createInstance<SinglePlayerContext>(_ctx, getState());
  enterRule(_localctx, 18, IvionParser::RuleSinglePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(384);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(381);
      targetPlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(382);
      playerRef();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(383);
      previousCardsController();
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

//----------------- MultiPlayerContext ------------------------------------------------------------------

IvionParser::MultiPlayerContext::MultiPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::LiteralValueContext* IvionParser::MultiPlayerContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

IvionParser::TargetPlayerContext* IvionParser::MultiPlayerContext::targetPlayer() {
  return getRuleContext<IvionParser::TargetPlayerContext>(0);
}

IvionParser::UpToFlagContext* IvionParser::MultiPlayerContext::upToFlag() {
  return getRuleContext<IvionParser::UpToFlagContext>(0);
}


size_t IvionParser::MultiPlayerContext::getRuleIndex() const {
  return IvionParser::RuleMultiPlayer;
}


antlrcpp::Any IvionParser::MultiPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitMultiPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::MultiPlayerContext* IvionParser::multiPlayer() {
  MultiPlayerContext *_localctx = _tracker.createInstance<MultiPlayerContext>(_ctx, getState());
  enterRule(_localctx, 20, IvionParser::RuleMultiPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(386);
      dynamic_cast<MultiPlayerContext *>(_localctx)->UpToFlag = upToFlag();
    }
    setState(389);
    literalValue();
    setState(390);
    targetPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AllOtherPlayersContext ------------------------------------------------------------------

IvionParser::AllOtherPlayersContext::AllOtherPlayersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::AllOtherPlayersContext::Other() {
  return getToken(IvionParser::Other, 0);
}

IvionParser::PlayerFilterContext* IvionParser::AllOtherPlayersContext::playerFilter() {
  return getRuleContext<IvionParser::PlayerFilterContext>(0);
}

tree::TerminalNode* IvionParser::AllOtherPlayersContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::AllOtherPlayersContext::Each() {
  return getToken(IvionParser::Each, 0);
}


size_t IvionParser::AllOtherPlayersContext::getRuleIndex() const {
  return IvionParser::RuleAllOtherPlayers;
}


antlrcpp::Any IvionParser::AllOtherPlayersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAllOtherPlayers(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AllOtherPlayersContext* IvionParser::allOtherPlayers() {
  AllOtherPlayersContext *_localctx = _tracker.createInstance<AllOtherPlayersContext>(_ctx, getState());
  enterRule(_localctx, 22, IvionParser::RuleAllOtherPlayers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(392);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Each

    || _la == IvionParser::All)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(393);
    match(IvionParser::Other);
    setState(394);
    playerFilter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AllPlayersContext ------------------------------------------------------------------

IvionParser::AllPlayersContext::AllPlayersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerFilterContext* IvionParser::AllPlayersContext::playerFilter() {
  return getRuleContext<IvionParser::PlayerFilterContext>(0);
}

tree::TerminalNode* IvionParser::AllPlayersContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::AllPlayersContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::AllPlayersContext::Any() {
  return getToken(IvionParser::Any, 0);
}

tree::TerminalNode* IvionParser::AllPlayersContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
}

tree::TerminalNode* IvionParser::AllPlayersContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::AllPlayersContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::AllPlayersContext::Player() {
  return getToken(IvionParser::Player, 0);
}


size_t IvionParser::AllPlayersContext::getRuleIndex() const {
  return IvionParser::RuleAllPlayers;
}


antlrcpp::Any IvionParser::AllPlayersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAllPlayers(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AllPlayersContext* IvionParser::allPlayers() {
  AllPlayersContext *_localctx = _tracker.createInstance<AllPlayersContext>(_ctx, getState());
  enterRule(_localctx, 24, IvionParser::RuleAllPlayers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(402);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Each:
      case IvionParser::All:
      case IvionParser::Any: {
        enterOuterAlt(_localctx, 1);
        setState(396);
        _la = _input->LA(1);
        if (!(_la == IvionParser::Each

        || _la == IvionParser::All || _la == IvionParser::Any)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(397);
        playerFilter();
        break;
      }

      case IvionParser::Yourself: {
        enterOuterAlt(_localctx, 2);
        setState(398);
        match(IvionParser::Yourself);
        setState(399);
        match(IvionParser::Or);
        setState(400);
        match(IvionParser::Another);
        setState(401);
        match(IvionParser::Player);
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

//----------------- PlayerContext ------------------------------------------------------------------

IvionParser::PlayerContext::PlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::SinglePlayerContext* IvionParser::PlayerContext::singlePlayer() {
  return getRuleContext<IvionParser::SinglePlayerContext>(0);
}

IvionParser::MultiPlayerContext* IvionParser::PlayerContext::multiPlayer() {
  return getRuleContext<IvionParser::MultiPlayerContext>(0);
}

IvionParser::AllPlayersContext* IvionParser::PlayerContext::allPlayers() {
  return getRuleContext<IvionParser::AllPlayersContext>(0);
}

IvionParser::AllOtherPlayersContext* IvionParser::PlayerContext::allOtherPlayers() {
  return getRuleContext<IvionParser::AllOtherPlayersContext>(0);
}


size_t IvionParser::PlayerContext::getRuleIndex() const {
  return IvionParser::RulePlayer;
}


antlrcpp::Any IvionParser::PlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerContext* IvionParser::player() {
  PlayerContext *_localctx = _tracker.createInstance<PlayerContext>(_ctx, getState());
  enterRule(_localctx, 26, IvionParser::RulePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(408);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(404);
      singlePlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(405);
      multiPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(406);
      allPlayers();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(407);
      allOtherPlayers();
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

//----------------- HypotheticalPlayerContext ------------------------------------------------------------------

IvionParser::HypotheticalPlayerContext::HypotheticalPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerFilterContext* IvionParser::HypotheticalPlayerContext::playerFilter() {
  return getRuleContext<IvionParser::PlayerFilterContext>(0);
}

tree::TerminalNode* IvionParser::HypotheticalPlayerContext::A() {
  return getToken(IvionParser::A, 0);
}

IvionParser::PlayerContext* IvionParser::HypotheticalPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::HypotheticalPlayerContext::getRuleIndex() const {
  return IvionParser::RuleHypotheticalPlayer;
}


antlrcpp::Any IvionParser::HypotheticalPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitHypotheticalPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HypotheticalPlayerContext* IvionParser::hypotheticalPlayer() {
  HypotheticalPlayerContext *_localctx = _tracker.createInstance<HypotheticalPlayerContext>(_ctx, getState());
  enterRule(_localctx, 28, IvionParser::RuleHypotheticalPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(415);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(411);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::A) {
        setState(410);
        match(IvionParser::A);
      }
      setState(413);
      playerFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(414);
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

//----------------- CardPrefixContext ------------------------------------------------------------------

IvionParser::CardPrefixContext::CardPrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPrefixContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::Attached() {
  return getToken(IvionParser::Attached, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::Non() {
  return getToken(IvionParser::Non, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::First() {
  return getToken(IvionParser::First, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::CardPrefixContext::Third() {
  return getToken(IvionParser::Third, 0);
}


size_t IvionParser::CardPrefixContext::getRuleIndex() const {
  return IvionParser::RuleCardPrefix;
}


antlrcpp::Any IvionParser::CardPrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPrefix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPrefixContext* IvionParser::cardPrefix() {
  CardPrefixContext *_localctx = _tracker.createInstance<CardPrefixContext>(_ctx, getState());
  enterRule(_localctx, 30, IvionParser::RuleCardPrefix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(432);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(417);
      match(IvionParser::Enemy);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(418);
      match(IvionParser::Attached);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(420);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Non) {
        setState(419);
        match(IvionParser::Non);
      }
      setState(422);
      match(IvionParser::Ability);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(424);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Non) {
        setState(423);
        match(IvionParser::Non);
      }
      setState(426);
      match(IvionParser::Attack);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(427);
      match(IvionParser::Revealed);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(428);
      match(IvionParser::Another);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(429);
      match(IvionParser::First);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(430);
      match(IvionParser::Second);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(431);
      match(IvionParser::Third);
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

//----------------- CardPostfixContext ------------------------------------------------------------------

IvionParser::CardPostfixContext::CardPostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostfixContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Near() {
  return getToken(IvionParser::Near, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::CardPostfixContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

IvionParser::HypotheticalTileContext* IvionParser::CardPostfixContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Targeting() {
  return getToken(IvionParser::Targeting, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Cost() {
  return getToken(IvionParser::Cost, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::LiteralValueContext* IvionParser::CardPostfixContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Attached() {
  return getToken(IvionParser::Attached, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::To() {
  return getToken(IvionParser::To, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::By() {
  return getToken(IvionParser::By, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Hardcast() {
  return getToken(IvionParser::Hardcast, 0);
}

tree::TerminalNode* IvionParser::CardPostfixContext::Frenzy() {
  return getToken(IvionParser::Frenzy, 0);
}


size_t IvionParser::CardPostfixContext::getRuleIndex() const {
  return IvionParser::RuleCardPostfix;
}


antlrcpp::Any IvionParser::CardPostfixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostfix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostfixContext* IvionParser::cardPostfix() {
  CardPostfixContext *_localctx = _tracker.createInstance<CardPostfixContext>(_ctx, getState());
  enterRule(_localctx, 32, IvionParser::RuleCardPostfix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(468);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(434);
      match(IvionParser::In);
      setState(435);
      match(IvionParser::Terrain);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(436);
      match(IvionParser::Near);
      setState(437);
      match(IvionParser::Terrain);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(438);
      match(IvionParser::Near);
      setState(439);
      hypotheticalPlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(440);
      match(IvionParser::Near);
      setState(441);
      hypotheticalTile();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(442);
      match(IvionParser::In);
      setState(443);
      hypotheticalTile();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(444);
      match(IvionParser::Targeting);
      setState(445);
      hypotheticalPlayer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(446);
      match(IvionParser::With);
      setState(447);
      match(IvionParser::A);
      setState(448);
      match(IvionParser::Resource);
      setState(449);
      match(IvionParser::Cost);
      setState(450);
      match(IvionParser::Of);
      setState(451);
      literalValue();
      setState(452);
      match(IvionParser::Or);
      setState(453);
      match(IvionParser::Less);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(455);
      match(IvionParser::Attached);
      setState(456);
      match(IvionParser::To);
      setState(457);
      hypotheticalPlayer();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(458);
      match(IvionParser::Attached);
      setState(459);
      match(IvionParser::To);
      setState(460);
      hypotheticalTile();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(461);
      match(IvionParser::Controlled);
      setState(462);
      match(IvionParser::By);
      setState(463);
      hypotheticalPlayer();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(464);
      match(IvionParser::With);
      setState(465);
      match(IvionParser::Hardcast);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(466);
      match(IvionParser::With);
      setState(467);
      match(IvionParser::Frenzy);
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

//----------------- CardFilterContext ------------------------------------------------------------------

IvionParser::CardFilterContext::CardFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardFilterContext::Card() {
  return getToken(IvionParser::Card, 0);
}

std::vector<IvionParser::CardPrefixContext *> IvionParser::CardFilterContext::cardPrefix() {
  return getRuleContexts<IvionParser::CardPrefixContext>();
}

IvionParser::CardPrefixContext* IvionParser::CardFilterContext::cardPrefix(size_t i) {
  return getRuleContext<IvionParser::CardPrefixContext>(i);
}

std::vector<IvionParser::CardPostfixContext *> IvionParser::CardFilterContext::cardPostfix() {
  return getRuleContexts<IvionParser::CardPostfixContext>();
}

IvionParser::CardPostfixContext* IvionParser::CardFilterContext::cardPostfix(size_t i) {
  return getRuleContext<IvionParser::CardPostfixContext>(i);
}


size_t IvionParser::CardFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardFilter;
}


antlrcpp::Any IvionParser::CardFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardFilterContext* IvionParser::cardFilter() {
  CardFilterContext *_localctx = _tracker.createInstance<CardFilterContext>(_ctx, getState());
  enterRule(_localctx, 34, IvionParser::RuleCardFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(473);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::Attached)
      | (1ULL << IvionParser::Revealed))) != 0) || ((((_la - 72) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 72)) & ((1ULL << (IvionParser::Non - 72))
      | (1ULL << (IvionParser::Attack - 72))
      | (1ULL << (IvionParser::Ability - 72))
      | (1ULL << (IvionParser::Second - 72))
      | (1ULL << (IvionParser::Third - 72)))) != 0) || _la == IvionParser::First) {
      setState(470);
      cardPrefix();
      setState(475);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(476);
    match(IvionParser::Card);
    setState(480);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(477);
        cardPostfix(); 
      }
      setState(482);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardNameContext ------------------------------------------------------------------

IvionParser::CardNameContext::CardNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardNameContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}


size_t IvionParser::CardNameContext::getRuleIndex() const {
  return IvionParser::RuleCardName;
}


antlrcpp::Any IvionParser::CardNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardName(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardNameContext* IvionParser::cardName() {
  CardNameContext *_localctx = _tracker.createInstance<CardNameContext>(_ctx, getState());
  enterRule(_localctx, 36, IvionParser::RuleCardName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    match(IvionParser::CARD_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BottomCardContext ------------------------------------------------------------------

IvionParser::BottomCardContext::BottomCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::BottomCardContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::BottomCardContext::Bottom() {
  return getToken(IvionParser::Bottom, 0);
}

tree::TerminalNode* IvionParser::BottomCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::BottomCardContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::BottomCardContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::BottomCardContext::Deck() {
  return getToken(IvionParser::Deck, 0);
}


size_t IvionParser::BottomCardContext::getRuleIndex() const {
  return IvionParser::RuleBottomCard;
}


antlrcpp::Any IvionParser::BottomCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitBottomCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::BottomCardContext* IvionParser::bottomCard() {
  BottomCardContext *_localctx = _tracker.createInstance<BottomCardContext>(_ctx, getState());
  enterRule(_localctx, 38, IvionParser::RuleBottomCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(485);
    match(IvionParser::The);
    setState(486);
    match(IvionParser::Bottom);
    setState(487);
    match(IvionParser::Card);
    setState(488);
    match(IvionParser::Of);
    setState(489);
    hypotheticalPlayer();
    setState(490);
    match(IvionParser::Deck);
   
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

tree::TerminalNode* IvionParser::PreviousCardContext::The() {
  return getToken(IvionParser::The, 0);
}


size_t IvionParser::PreviousCardContext::getRuleIndex() const {
  return IvionParser::RulePreviousCard;
}


antlrcpp::Any IvionParser::PreviousCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPreviousCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PreviousCardContext* IvionParser::previousCard() {
  PreviousCardContext *_localctx = _tracker.createInstance<PreviousCardContext>(_ctx, getState());
  enterRule(_localctx, 40, IvionParser::RulePreviousCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(496);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::That: {
        enterOuterAlt(_localctx, 1);
        setState(492);
        match(IvionParser::That);
        setState(493);
        match(IvionParser::Card);
        break;
      }

      case IvionParser::The: {
        enterOuterAlt(_localctx, 2);
        setState(494);
        match(IvionParser::The);
        setState(495);
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

//----------------- TargetCardContext ------------------------------------------------------------------

IvionParser::TargetCardContext::TargetCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TargetCardContext::Target() {
  return getToken(IvionParser::Target, 0);
}

IvionParser::CardFilterContext* IvionParser::TargetCardContext::cardFilter() {
  return getRuleContext<IvionParser::CardFilterContext>(0);
}


size_t IvionParser::TargetCardContext::getRuleIndex() const {
  return IvionParser::RuleTargetCard;
}


antlrcpp::Any IvionParser::TargetCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTargetCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TargetCardContext* IvionParser::targetCard() {
  TargetCardContext *_localctx = _tracker.createInstance<TargetCardContext>(_ctx, getState());
  enterRule(_localctx, 42, IvionParser::RuleTargetCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    match(IvionParser::Target);
    setState(499);
    cardFilter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleCardContext ------------------------------------------------------------------

IvionParser::SingleCardContext::SingleCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CardNameContext* IvionParser::SingleCardContext::cardName() {
  return getRuleContext<IvionParser::CardNameContext>(0);
}

IvionParser::TargetCardContext* IvionParser::SingleCardContext::targetCard() {
  return getRuleContext<IvionParser::TargetCardContext>(0);
}

IvionParser::BottomCardContext* IvionParser::SingleCardContext::bottomCard() {
  return getRuleContext<IvionParser::BottomCardContext>(0);
}

IvionParser::PreviousCardContext* IvionParser::SingleCardContext::previousCard() {
  return getRuleContext<IvionParser::PreviousCardContext>(0);
}


size_t IvionParser::SingleCardContext::getRuleIndex() const {
  return IvionParser::RuleSingleCard;
}


antlrcpp::Any IvionParser::SingleCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSingleCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SingleCardContext* IvionParser::singleCard() {
  SingleCardContext *_localctx = _tracker.createInstance<SingleCardContext>(_ctx, getState());
  enterRule(_localctx, 44, IvionParser::RuleSingleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(505);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(501);
      cardName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(502);
      targetCard();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(503);
      bottomCard();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(504);
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

//----------------- AllCardsContext ------------------------------------------------------------------

IvionParser::AllCardsContext::AllCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::AllCardsContext::All() {
  return getToken(IvionParser::All, 0);
}

IvionParser::CardFilterContext* IvionParser::AllCardsContext::cardFilter() {
  return getRuleContext<IvionParser::CardFilterContext>(0);
}


size_t IvionParser::AllCardsContext::getRuleIndex() const {
  return IvionParser::RuleAllCards;
}


antlrcpp::Any IvionParser::AllCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAllCards(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AllCardsContext* IvionParser::allCards() {
  AllCardsContext *_localctx = _tracker.createInstance<AllCardsContext>(_ctx, getState());
  enterRule(_localctx, 46, IvionParser::RuleAllCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(IvionParser::All);
    setState(508);
    cardFilter();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiCardContext ------------------------------------------------------------------

IvionParser::MultiCardContext::MultiCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::LiteralValueContext* IvionParser::MultiCardContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

IvionParser::TargetCardContext* IvionParser::MultiCardContext::targetCard() {
  return getRuleContext<IvionParser::TargetCardContext>(0);
}

IvionParser::UpToFlagContext* IvionParser::MultiCardContext::upToFlag() {
  return getRuleContext<IvionParser::UpToFlagContext>(0);
}


size_t IvionParser::MultiCardContext::getRuleIndex() const {
  return IvionParser::RuleMultiCard;
}


antlrcpp::Any IvionParser::MultiCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitMultiCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::MultiCardContext* IvionParser::multiCard() {
  MultiCardContext *_localctx = _tracker.createInstance<MultiCardContext>(_ctx, getState());
  enterRule(_localctx, 48, IvionParser::RuleMultiCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(510);
      dynamic_cast<MultiCardContext *>(_localctx)->UpToFlag = upToFlag();
    }
    setState(513);
    literalValue();
    setState(514);
    targetCard();
   
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

IvionParser::SingleCardContext* IvionParser::CardContext::singleCard() {
  return getRuleContext<IvionParser::SingleCardContext>(0);
}

IvionParser::AllCardsContext* IvionParser::CardContext::allCards() {
  return getRuleContext<IvionParser::AllCardsContext>(0);
}

IvionParser::MultiCardContext* IvionParser::CardContext::multiCard() {
  return getRuleContext<IvionParser::MultiCardContext>(0);
}


size_t IvionParser::CardContext::getRuleIndex() const {
  return IvionParser::RuleCard;
}


antlrcpp::Any IvionParser::CardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardContext* IvionParser::card() {
  CardContext *_localctx = _tracker.createInstance<CardContext>(_ctx, getState());
  enterRule(_localctx, 50, IvionParser::RuleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(519);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target:
      case IvionParser::That:
      case IvionParser::The:
      case IvionParser::CARD_NAME: {
        enterOuterAlt(_localctx, 1);
        setState(516);
        singleCard();
        break;
      }

      case IvionParser::All: {
        enterOuterAlt(_localctx, 2);
        setState(517);
        allCards();
        break;
      }

      case IvionParser::A:
      case IvionParser::Up:
      case IvionParser::Once:
      case IvionParser::Twice:
      case IvionParser::Integer:
      case IvionParser::One:
      case IvionParser::Two:
      case IvionParser::Three: {
        enterOuterAlt(_localctx, 3);
        setState(518);
        multiCard();
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

//----------------- HypotheticalCardContext ------------------------------------------------------------------

IvionParser::HypotheticalCardContext::HypotheticalCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CardFilterContext* IvionParser::HypotheticalCardContext::cardFilter() {
  return getRuleContext<IvionParser::CardFilterContext>(0);
}

tree::TerminalNode* IvionParser::HypotheticalCardContext::A() {
  return getToken(IvionParser::A, 0);
}

IvionParser::CardContext* IvionParser::HypotheticalCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}


size_t IvionParser::HypotheticalCardContext::getRuleIndex() const {
  return IvionParser::RuleHypotheticalCard;
}


antlrcpp::Any IvionParser::HypotheticalCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitHypotheticalCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HypotheticalCardContext* IvionParser::hypotheticalCard() {
  HypotheticalCardContext *_localctx = _tracker.createInstance<HypotheticalCardContext>(_ctx, getState());
  enterRule(_localctx, 52, IvionParser::RuleHypotheticalCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(526);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(522);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::A) {
        setState(521);
        match(IvionParser::A);
      }
      setState(524);
      cardFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(525);
      card();
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

//----------------- TilePreFixContext ------------------------------------------------------------------

IvionParser::TilePreFixContext::TilePreFixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TilePreFixContext::Empty() {
  return getToken(IvionParser::Empty, 0);
}

tree::TerminalNode* IvionParser::TilePreFixContext::Non() {
  return getToken(IvionParser::Non, 0);
}


size_t IvionParser::TilePreFixContext::getRuleIndex() const {
  return IvionParser::RuleTilePreFix;
}


antlrcpp::Any IvionParser::TilePreFixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTilePreFix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TilePreFixContext* IvionParser::tilePreFix() {
  TilePreFixContext *_localctx = _tracker.createInstance<TilePreFixContext>(_ctx, getState());
  enterRule(_localctx, 54, IvionParser::RuleTilePreFix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(528);
      match(IvionParser::Non);
    }
    setState(531);
    match(IvionParser::Empty);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TilePostFixContext ------------------------------------------------------------------

IvionParser::TilePostFixContext::TilePostFixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TilePostFixContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::Near() {
  return getToken(IvionParser::Near, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::TilePostFixContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

IvionParser::CardContext* IvionParser::TilePostFixContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::LiteralValueContext* IvionParser::TilePostFixContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::Away() {
  return getToken(IvionParser::Away, 0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::Already() {
  return getToken(IvionParser::Already, 0);
}

tree::TerminalNode* IvionParser::TilePostFixContext::Had() {
  return getToken(IvionParser::Had, 0);
}


size_t IvionParser::TilePostFixContext::getRuleIndex() const {
  return IvionParser::RuleTilePostFix;
}


antlrcpp::Any IvionParser::TilePostFixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTilePostFix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TilePostFixContext* IvionParser::tilePostFix() {
  TilePostFixContext *_localctx = _tracker.createInstance<TilePostFixContext>(_ctx, getState());
  enterRule(_localctx, 56, IvionParser::RuleTilePostFix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(559);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(533);
      match(IvionParser::With);
      setState(534);
      match(IvionParser::Terrain);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(535);
      match(IvionParser::Near);
      setState(536);
      match(IvionParser::Terrain);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(537);
      match(IvionParser::Near);
      setState(538);
      hypotheticalPlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(539);
      match(IvionParser::Near);
      setState(540);
      card();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(541);
      match(IvionParser::At);
      setState(542);
      match(IvionParser::Least);
      setState(543);
      literalValue();
      setState(544);
      match(IvionParser::Tile);
      setState(545);
      match(IvionParser::Away);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(547);
      match(IvionParser::At);
      setState(548);
      match(IvionParser::Least);
      setState(549);
      literalValue();
      setState(550);
      match(IvionParser::Tile);
      setState(551);
      match(IvionParser::Away);
      setState(552);
      match(IvionParser::From);
      setState(553);
      hypotheticalPlayer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(555);
      match(IvionParser::That);
      setState(556);
      match(IvionParser::Already);
      setState(557);
      match(IvionParser::Had);
      setState(558);
      match(IvionParser::Terrain);
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

//----------------- TileFilterContext ------------------------------------------------------------------

IvionParser::TileFilterContext::TileFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TileFilterContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

std::vector<IvionParser::TilePreFixContext *> IvionParser::TileFilterContext::tilePreFix() {
  return getRuleContexts<IvionParser::TilePreFixContext>();
}

IvionParser::TilePreFixContext* IvionParser::TileFilterContext::tilePreFix(size_t i) {
  return getRuleContext<IvionParser::TilePreFixContext>(i);
}

std::vector<IvionParser::TilePostFixContext *> IvionParser::TileFilterContext::tilePostFix() {
  return getRuleContexts<IvionParser::TilePostFixContext>();
}

IvionParser::TilePostFixContext* IvionParser::TileFilterContext::tilePostFix(size_t i) {
  return getRuleContext<IvionParser::TilePostFixContext>(i);
}


size_t IvionParser::TileFilterContext::getRuleIndex() const {
  return IvionParser::RuleTileFilter;
}


antlrcpp::Any IvionParser::TileFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTileFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TileFilterContext* IvionParser::tileFilter() {
  TileFilterContext *_localctx = _tracker.createInstance<TileFilterContext>(_ctx, getState());
  enterRule(_localctx, 58, IvionParser::RuleTileFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(564);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IvionParser::Non

    || _la == IvionParser::Empty) {
      setState(561);
      tilePreFix();
      setState(566);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(567);
    match(IvionParser::Tile);
    setState(571);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(568);
        tilePostFix(); 
      }
      setState(573);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
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

IvionParser::TileFilterContext* IvionParser::TargetTileContext::tileFilter() {
  return getRuleContext<IvionParser::TileFilterContext>(0);
}

tree::TerminalNode* IvionParser::TargetTileContext::Another() {
  return getToken(IvionParser::Another, 0);
}

IvionParser::LiteralValueContext* IvionParser::TargetTileContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}


size_t IvionParser::TargetTileContext::getRuleIndex() const {
  return IvionParser::RuleTargetTile;
}


antlrcpp::Any IvionParser::TargetTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTargetTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TargetTileContext* IvionParser::targetTile() {
  TargetTileContext *_localctx = _tracker.createInstance<TargetTileContext>(_ctx, getState());
  enterRule(_localctx, 60, IvionParser::RuleTargetTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(575);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(574);
      match(IvionParser::Another);
    }
    setState(578);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::A || ((((_la - 194) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 194)) & ((1ULL << (IvionParser::Once - 194))
      | (1ULL << (IvionParser::Twice - 194))
      | (1ULL << (IvionParser::Integer - 194))
      | (1ULL << (IvionParser::One - 194))
      | (1ULL << (IvionParser::Two - 194))
      | (1ULL << (IvionParser::Three - 194)))) != 0)) {
      setState(577);
      literalValue();
    }
    setState(580);
    match(IvionParser::Target);
    setState(581);
    tileFilter();
   
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

tree::TerminalNode* IvionParser::PreviousTileContext::The() {
  return getToken(IvionParser::The, 0);
}


size_t IvionParser::PreviousTileContext::getRuleIndex() const {
  return IvionParser::RulePreviousTile;
}


antlrcpp::Any IvionParser::PreviousTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPreviousTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PreviousTileContext* IvionParser::previousTile() {
  PreviousTileContext *_localctx = _tracker.createInstance<PreviousTileContext>(_ctx, getState());
  enterRule(_localctx, 62, IvionParser::RulePreviousTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(587);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::That: {
        enterOuterAlt(_localctx, 1);
        setState(583);
        match(IvionParser::That);
        setState(584);
        match(IvionParser::Tile);
        break;
      }

      case IvionParser::The: {
        enterOuterAlt(_localctx, 2);
        setState(585);
        match(IvionParser::The);
        setState(586);
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

//----------------- TheNearestTileContext ------------------------------------------------------------------

IvionParser::TheNearestTileContext::TheNearestTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TheNearestTileContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::TheNearestTileContext::Nearest() {
  return getToken(IvionParser::Nearest, 0);
}

IvionParser::TileFilterContext* IvionParser::TheNearestTileContext::tileFilter() {
  return getRuleContext<IvionParser::TileFilterContext>(0);
}

tree::TerminalNode* IvionParser::TheNearestTileContext::Next() {
  return getToken(IvionParser::Next, 0);
}

tree::TerminalNode* IvionParser::TheNearestTileContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::TheNearestTileContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

IvionParser::HypotheticalCardContext* IvionParser::TheNearestTileContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}


size_t IvionParser::TheNearestTileContext::getRuleIndex() const {
  return IvionParser::RuleTheNearestTile;
}


antlrcpp::Any IvionParser::TheNearestTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTheNearestTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TheNearestTileContext* IvionParser::theNearestTile() {
  TheNearestTileContext *_localctx = _tracker.createInstance<TheNearestTileContext>(_ctx, getState());
  enterRule(_localctx, 64, IvionParser::RuleTheNearestTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(589);
    match(IvionParser::The);
    setState(590);
    match(IvionParser::Nearest);
    setState(591);
    tileFilter();
    setState(592);
    match(IvionParser::Next);
    setState(593);
    match(IvionParser::To);
    setState(596);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(594);
      hypotheticalPlayer();
      break;
    }

    case 2: {
      setState(595);
      hypotheticalCard();
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

//----------------- PlayersTileContext ------------------------------------------------------------------

IvionParser::PlayersTileContext::PlayersTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PlayersTileContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::PlayersTileContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

IvionParser::PlayerContext* IvionParser::PlayersTileContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayersTileContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::PlayersTileContext::Are() {
  return getToken(IvionParser::Are, 0);
}

tree::TerminalNode* IvionParser::PlayersTileContext::Is() {
  return getToken(IvionParser::Is, 0);
}


size_t IvionParser::PlayersTileContext::getRuleIndex() const {
  return IvionParser::RulePlayersTile;
}


antlrcpp::Any IvionParser::PlayersTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayersTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayersTileContext* IvionParser::playersTile() {
  PlayersTileContext *_localctx = _tracker.createInstance<PlayersTileContext>(_ctx, getState());
  enterRule(_localctx, 66, IvionParser::RulePlayersTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    match(IvionParser::The);
    setState(599);
    match(IvionParser::Tile);
    setState(600);
    player();
    setState(601);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Is || _la == IvionParser::Are)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(602);
    match(IvionParser::In);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardsTileContext ------------------------------------------------------------------

IvionParser::CardsTileContext::CardsTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardsTileContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::CardsTileContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}


size_t IvionParser::CardsTileContext::getRuleIndex() const {
  return IvionParser::RuleCardsTile;
}


antlrcpp::Any IvionParser::CardsTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardsTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardsTileContext* IvionParser::cardsTile() {
  CardsTileContext *_localctx = _tracker.createInstance<CardsTileContext>(_ctx, getState());
  enterRule(_localctx, 68, IvionParser::RuleCardsTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(IvionParser::This);
    setState(605);
    match(IvionParser::Tile);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleTileContext ------------------------------------------------------------------

IvionParser::SingleTileContext::SingleTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::TargetTileContext* IvionParser::SingleTileContext::targetTile() {
  return getRuleContext<IvionParser::TargetTileContext>(0);
}

IvionParser::PreviousTileContext* IvionParser::SingleTileContext::previousTile() {
  return getRuleContext<IvionParser::PreviousTileContext>(0);
}

IvionParser::TheNearestTileContext* IvionParser::SingleTileContext::theNearestTile() {
  return getRuleContext<IvionParser::TheNearestTileContext>(0);
}

IvionParser::PlayersTileContext* IvionParser::SingleTileContext::playersTile() {
  return getRuleContext<IvionParser::PlayersTileContext>(0);
}

IvionParser::CardsTileContext* IvionParser::SingleTileContext::cardsTile() {
  return getRuleContext<IvionParser::CardsTileContext>(0);
}


size_t IvionParser::SingleTileContext::getRuleIndex() const {
  return IvionParser::RuleSingleTile;
}


antlrcpp::Any IvionParser::SingleTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSingleTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SingleTileContext* IvionParser::singleTile() {
  SingleTileContext *_localctx = _tracker.createInstance<SingleTileContext>(_ctx, getState());
  enterRule(_localctx, 70, IvionParser::RuleSingleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(612);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(607);
      targetTile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(608);
      previousTile();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(609);
      theNearestTile();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(610);
      playersTile();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(611);
      cardsTile();
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

//----------------- MultiTileContext ------------------------------------------------------------------

IvionParser::MultiTileContext::MultiTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::LiteralValueContext* IvionParser::MultiTileContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

IvionParser::TargetTileContext* IvionParser::MultiTileContext::targetTile() {
  return getRuleContext<IvionParser::TargetTileContext>(0);
}

IvionParser::UpToFlagContext* IvionParser::MultiTileContext::upToFlag() {
  return getRuleContext<IvionParser::UpToFlagContext>(0);
}


size_t IvionParser::MultiTileContext::getRuleIndex() const {
  return IvionParser::RuleMultiTile;
}


antlrcpp::Any IvionParser::MultiTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitMultiTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::MultiTileContext* IvionParser::multiTile() {
  MultiTileContext *_localctx = _tracker.createInstance<MultiTileContext>(_ctx, getState());
  enterRule(_localctx, 72, IvionParser::RuleMultiTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(615);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(614);
      dynamic_cast<MultiTileContext *>(_localctx)->UpToFlag = upToFlag();
    }
    setState(617);
    literalValue();
    setState(618);
    targetTile();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AllTilesContext ------------------------------------------------------------------

IvionParser::AllTilesContext::AllTilesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::TileFilterContext* IvionParser::AllTilesContext::tileFilter() {
  return getRuleContext<IvionParser::TileFilterContext>(0);
}

tree::TerminalNode* IvionParser::AllTilesContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::AllTilesContext::All() {
  return getToken(IvionParser::All, 0);
}


size_t IvionParser::AllTilesContext::getRuleIndex() const {
  return IvionParser::RuleAllTiles;
}


antlrcpp::Any IvionParser::AllTilesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAllTiles(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AllTilesContext* IvionParser::allTiles() {
  AllTilesContext *_localctx = _tracker.createInstance<AllTilesContext>(_ctx, getState());
  enterRule(_localctx, 74, IvionParser::RuleAllTiles);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(620);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Each

    || _la == IvionParser::All)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(621);
    tileFilter();
   
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

IvionParser::SingleTileContext* IvionParser::TileContext::singleTile() {
  return getRuleContext<IvionParser::SingleTileContext>(0);
}

IvionParser::AllTilesContext* IvionParser::TileContext::allTiles() {
  return getRuleContext<IvionParser::AllTilesContext>(0);
}

IvionParser::MultiTileContext* IvionParser::TileContext::multiTile() {
  return getRuleContext<IvionParser::MultiTileContext>(0);
}


size_t IvionParser::TileContext::getRuleIndex() const {
  return IvionParser::RuleTile;
}


antlrcpp::Any IvionParser::TileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TileContext* IvionParser::tile() {
  TileContext *_localctx = _tracker.createInstance<TileContext>(_ctx, getState());
  enterRule(_localctx, 76, IvionParser::RuleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(626);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(623);
      singleTile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(624);
      allTiles();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(625);
      multiTile();
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

//----------------- HypotheticalTileContext ------------------------------------------------------------------

IvionParser::HypotheticalTileContext::HypotheticalTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::TileFilterContext* IvionParser::HypotheticalTileContext::tileFilter() {
  return getRuleContext<IvionParser::TileFilterContext>(0);
}

tree::TerminalNode* IvionParser::HypotheticalTileContext::A() {
  return getToken(IvionParser::A, 0);
}

IvionParser::TileContext* IvionParser::HypotheticalTileContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}


size_t IvionParser::HypotheticalTileContext::getRuleIndex() const {
  return IvionParser::RuleHypotheticalTile;
}


antlrcpp::Any IvionParser::HypotheticalTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitHypotheticalTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HypotheticalTileContext* IvionParser::hypotheticalTile() {
  HypotheticalTileContext *_localctx = _tracker.createInstance<HypotheticalTileContext>(_ctx, getState());
  enterRule(_localctx, 78, IvionParser::RuleHypotheticalTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(633);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(629);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::A) {
        setState(628);
        match(IvionParser::A);
      }
      setState(631);
      tileFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(632);
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

//----------------- EntityContext ------------------------------------------------------------------

IvionParser::EntityContext::EntityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CardContext* IvionParser::EntityContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::PlayerContext* IvionParser::EntityContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::TileContext* IvionParser::EntityContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}


size_t IvionParser::EntityContext::getRuleIndex() const {
  return IvionParser::RuleEntity;
}


antlrcpp::Any IvionParser::EntityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitEntity(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EntityContext* IvionParser::entity() {
  EntityContext *_localctx = _tracker.createInstance<EntityContext>(_ctx, getState());
  enterRule(_localctx, 80, IvionParser::RuleEntity);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(638);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(635);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(636);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(637);
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

//----------------- HypotheticalEntityContext ------------------------------------------------------------------

IvionParser::HypotheticalEntityContext::HypotheticalEntityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalCardContext* IvionParser::HypotheticalEntityContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::HypotheticalEntityContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

IvionParser::HypotheticalTileContext* IvionParser::HypotheticalEntityContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}


size_t IvionParser::HypotheticalEntityContext::getRuleIndex() const {
  return IvionParser::RuleHypotheticalEntity;
}


antlrcpp::Any IvionParser::HypotheticalEntityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitHypotheticalEntity(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HypotheticalEntityContext* IvionParser::hypotheticalEntity() {
  HypotheticalEntityContext *_localctx = _tracker.createInstance<HypotheticalEntityContext>(_ctx, getState());
  enterRule(_localctx, 82, IvionParser::RuleHypotheticalEntity);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(643);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(640);
      hypotheticalCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(641);
      hypotheticalPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(642);
      hypotheticalTile();
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

//----------------- DisarmPlayerContext ------------------------------------------------------------------

IvionParser::DisarmPlayerContext::DisarmPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DisarmPlayerContext::Disarm() {
  return getToken(IvionParser::Disarm, 0);
}

IvionParser::LiteralValueContext* IvionParser::DisarmPlayerContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

IvionParser::PlayerContext* IvionParser::DisarmPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::DisarmPlayerContext::getRuleIndex() const {
  return IvionParser::RuleDisarmPlayer;
}


antlrcpp::Any IvionParser::DisarmPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitDisarmPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DisarmPlayerContext* IvionParser::disarmPlayer() {
  DisarmPlayerContext *_localctx = _tracker.createInstance<DisarmPlayerContext>(_ctx, getState());
  enterRule(_localctx, 84, IvionParser::RuleDisarmPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(651);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(645);
      match(IvionParser::Disarm);
      setState(646);
      literalValue();
      setState(647);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(649);
      match(IvionParser::Disarm);
      setState(650);
      literalValue();
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

//----------------- SilencePlayerContext ------------------------------------------------------------------

IvionParser::SilencePlayerContext::SilencePlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SilencePlayerContext::Silence() {
  return getToken(IvionParser::Silence, 0);
}

IvionParser::LiteralValueContext* IvionParser::SilencePlayerContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

IvionParser::PlayerContext* IvionParser::SilencePlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::SilencePlayerContext::getRuleIndex() const {
  return IvionParser::RuleSilencePlayer;
}


antlrcpp::Any IvionParser::SilencePlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSilencePlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SilencePlayerContext* IvionParser::silencePlayer() {
  SilencePlayerContext *_localctx = _tracker.createInstance<SilencePlayerContext>(_ctx, getState());
  enterRule(_localctx, 86, IvionParser::RuleSilencePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(659);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(653);
      match(IvionParser::Silence);
      setState(654);
      literalValue();
      setState(655);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(657);
      match(IvionParser::Silence);
      setState(658);
      literalValue();
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

//----------------- SlowPlayerContext ------------------------------------------------------------------

IvionParser::SlowPlayerContext::SlowPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SlowPlayerContext::Slow() {
  return getToken(IvionParser::Slow, 0);
}

IvionParser::LiteralValueContext* IvionParser::SlowPlayerContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

IvionParser::PlayerContext* IvionParser::SlowPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::SlowPlayerContext::getRuleIndex() const {
  return IvionParser::RuleSlowPlayer;
}


antlrcpp::Any IvionParser::SlowPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSlowPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SlowPlayerContext* IvionParser::slowPlayer() {
  SlowPlayerContext *_localctx = _tracker.createInstance<SlowPlayerContext>(_ctx, getState());
  enterRule(_localctx, 88, IvionParser::RuleSlowPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(667);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(661);
      match(IvionParser::Slow);
      setState(662);
      literalValue();
      setState(663);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(665);
      match(IvionParser::Slow);
      setState(666);
      literalValue();
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

tree::TerminalNode* IvionParser::ControlPlayerContext::Apply() {
  return getToken(IvionParser::Apply, 0);
}

IvionParser::LiteralValueContext* IvionParser::ControlPlayerContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::More() {
  return getToken(IvionParser::More, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Instances() {
  return getToken(IvionParser::Instances, 0);
}

std::vector<tree::TerminalNode *> IvionParser::ControlPlayerContext::Of() {
  return getTokens(IvionParser::Of);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Of(size_t i) {
  return getToken(IvionParser::Of, i);
}

std::vector<tree::TerminalNode *> IvionParser::ControlPlayerContext::A() {
  return getTokens(IvionParser::A);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::A(size_t i) {
  return getToken(IvionParser::A, i);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Control() {
  return getToken(IvionParser::Control, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Type() {
  return getToken(IvionParser::Type, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Choice() {
  return getToken(IvionParser::Choice, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::PlayerContext* IvionParser::ControlPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Instance() {
  return getToken(IvionParser::Instance, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Increase() {
  return getToken(IvionParser::Increase, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Value() {
  return getToken(IvionParser::Value, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Already() {
  return getToken(IvionParser::Already, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Affecting() {
  return getToken(IvionParser::Affecting, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::By() {
  return getToken(IvionParser::By, 0);
}


size_t IvionParser::ControlPlayerContext::getRuleIndex() const {
  return IvionParser::RuleControlPlayer;
}


antlrcpp::Any IvionParser::ControlPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitControlPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ControlPlayerContext* IvionParser::controlPlayer() {
  ControlPlayerContext *_localctx = _tracker.createInstance<ControlPlayerContext>(_ctx, getState());
  enterRule(_localctx, 90, IvionParser::RuleControlPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(708);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(669);
      match(IvionParser::Apply);
      setState(670);
      literalValue();
      setState(671);
      match(IvionParser::More);
      setState(672);
      match(IvionParser::Instances);
      setState(673);
      match(IvionParser::Of);
      setState(674);
      match(IvionParser::A);
      setState(675);
      match(IvionParser::Control);
      setState(676);
      match(IvionParser::Type);
      setState(677);
      match(IvionParser::Of);
      setState(678);
      match(IvionParser::Your);
      setState(679);
      match(IvionParser::Choice);
      setState(680);
      match(IvionParser::To);
      setState(681);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(683);
      match(IvionParser::Apply);
      setState(684);
      match(IvionParser::A);
      setState(685);
      match(IvionParser::Instance);
      setState(686);
      match(IvionParser::Of);
      setState(687);
      match(IvionParser::A);
      setState(688);
      match(IvionParser::Control);
      setState(689);
      match(IvionParser::Type);
      setState(690);
      match(IvionParser::Of);
      setState(691);
      match(IvionParser::Your);
      setState(692);
      match(IvionParser::Choice);
      setState(693);
      match(IvionParser::To);
      setState(694);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(695);
      match(IvionParser::Increase);
      setState(696);
      match(IvionParser::The);
      setState(697);
      match(IvionParser::Value);
      setState(698);
      match(IvionParser::Of);
      setState(699);
      match(IvionParser::A);
      setState(700);
      match(IvionParser::Control);
      setState(701);
      match(IvionParser::Type);
      setState(702);
      match(IvionParser::Already);
      setState(703);
      match(IvionParser::Affecting);
      setState(704);
      player();
      setState(705);
      match(IvionParser::By);
      setState(706);
      literalValue();
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

//----------------- AwayFlagContext ------------------------------------------------------------------

IvionParser::AwayFlagContext::AwayFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::AwayFlagContext::Away() {
  return getToken(IvionParser::Away, 0);
}

tree::TerminalNode* IvionParser::AwayFlagContext::From() {
  return getToken(IvionParser::From, 0);
}

IvionParser::PlayerContext* IvionParser::AwayFlagContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::AwayFlagContext::getRuleIndex() const {
  return IvionParser::RuleAwayFlag;
}


antlrcpp::Any IvionParser::AwayFlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAwayFlag(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AwayFlagContext* IvionParser::awayFlag() {
  AwayFlagContext *_localctx = _tracker.createInstance<AwayFlagContext>(_ctx, getState());
  enterRule(_localctx, 92, IvionParser::RuleAwayFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(710);
    match(IvionParser::Away);
    setState(711);
    match(IvionParser::From);
    setState(712);
    player();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UpToFlagContext ------------------------------------------------------------------

IvionParser::UpToFlagContext::UpToFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::UpToFlagContext::Up() {
  return getToken(IvionParser::Up, 0);
}

tree::TerminalNode* IvionParser::UpToFlagContext::To() {
  return getToken(IvionParser::To, 0);
}


size_t IvionParser::UpToFlagContext::getRuleIndex() const {
  return IvionParser::RuleUpToFlag;
}


antlrcpp::Any IvionParser::UpToFlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitUpToFlag(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::UpToFlagContext* IvionParser::upToFlag() {
  UpToFlagContext *_localctx = _tracker.createInstance<UpToFlagContext>(_ctx, getState());
  enterRule(_localctx, 94, IvionParser::RuleUpToFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(714);
    match(IvionParser::Up);
    setState(715);
    match(IvionParser::To);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TravelDistanceContext ------------------------------------------------------------------

IvionParser::TravelDistanceContext::TravelDistanceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TravelDistanceContext::Travel() {
  return getToken(IvionParser::Travel, 0);
}

IvionParser::LiteralValueContext* IvionParser::TravelDistanceContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::TravelDistanceContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::TravelDistanceContext::Another() {
  return getToken(IvionParser::Another, 0);
}

IvionParser::PlayerContext* IvionParser::TravelDistanceContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::UpToFlagContext* IvionParser::TravelDistanceContext::upToFlag() {
  return getRuleContext<IvionParser::UpToFlagContext>(0);
}

IvionParser::AwayFlagContext* IvionParser::TravelDistanceContext::awayFlag() {
  return getRuleContext<IvionParser::AwayFlagContext>(0);
}


size_t IvionParser::TravelDistanceContext::getRuleIndex() const {
  return IvionParser::RuleTravelDistance;
}


antlrcpp::Any IvionParser::TravelDistanceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTravelDistance(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TravelDistanceContext* IvionParser::travelDistance() {
  TravelDistanceContext *_localctx = _tracker.createInstance<TravelDistanceContext>(_ctx, getState());
  enterRule(_localctx, 96, IvionParser::RuleTravelDistance);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(717);
    match(IvionParser::Travel);
    setState(719);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      setState(718);
      dynamic_cast<TravelDistanceContext *>(_localctx)->TargetPlayer = player();
      break;
    }

    }
    setState(722);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(721);
      dynamic_cast<TravelDistanceContext *>(_localctx)->UpToFlag = upToFlag();
    }
    setState(725);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(724);
      match(IvionParser::Another);
    }
    setState(727);
    literalValue();
    setState(728);
    match(IvionParser::Tile);
    setState(730);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      setState(729);
      dynamic_cast<TravelDistanceContext *>(_localctx)->Awayflag = awayFlag();
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

tree::TerminalNode* IvionParser::TravelPlayerContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::TileContext* IvionParser::TravelPlayerContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}

IvionParser::CardContext* IvionParser::TravelPlayerContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::PlayerContext* IvionParser::TravelPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::TravelPlayerContext::getRuleIndex() const {
  return IvionParser::RuleTravelPlayer;
}


antlrcpp::Any IvionParser::TravelPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTravelPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TravelPlayerContext* IvionParser::travelPlayer() {
  TravelPlayerContext *_localctx = _tracker.createInstance<TravelPlayerContext>(_ctx, getState());
  enterRule(_localctx, 98, IvionParser::RuleTravelPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(732);
    match(IvionParser::Travel);
    setState(734);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Them)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::The)
      | (1ULL << IvionParser::A)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::Each)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::Up)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::All)
      | (1ULL << IvionParser::Their)
      | (1ULL << IvionParser::Its))) != 0) || ((((_la - 150) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 150)) & ((1ULL << (IvionParser::Any - 150))
      | (1ULL << (IvionParser::Once - 150))
      | (1ULL << (IvionParser::Twice - 150))
      | (1ULL << (IvionParser::Integer - 150))
      | (1ULL << (IvionParser::One - 150))
      | (1ULL << (IvionParser::Two - 150))
      | (1ULL << (IvionParser::Three - 150)))) != 0)) {
      setState(733);
      dynamic_cast<TravelPlayerContext *>(_localctx)->TargetPlayer = player();
    }
    setState(736);
    match(IvionParser::To);
    setState(739);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      setState(737);
      dynamic_cast<TravelPlayerContext *>(_localctx)->TargetTile = tile();
      break;
    }

    case 2: {
      setState(738);
      dynamic_cast<TravelPlayerContext *>(_localctx)->TargetCard = card();
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
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitDestroyCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DestroyCardContext* IvionParser::destroyCard() {
  DestroyCardContext *_localctx = _tracker.createInstance<DestroyCardContext>(_ctx, getState());
  enterRule(_localctx, 100, IvionParser::RuleDestroyCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(741);
    match(IvionParser::Destroy);
    setState(742);
    card();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DealDamageContext ------------------------------------------------------------------

IvionParser::DealDamageContext::DealDamageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DealDamageContext::Deal() {
  return getToken(IvionParser::Deal, 0);
}

std::vector<IvionParser::LiteralValueContext *> IvionParser::DealDamageContext::literalValue() {
  return getRuleContexts<IvionParser::LiteralValueContext>();
}

IvionParser::LiteralValueContext* IvionParser::DealDamageContext::literalValue(size_t i) {
  return getRuleContext<IvionParser::LiteralValueContext>(i);
}

std::vector<tree::TerminalNode *> IvionParser::DealDamageContext::Damage() {
  return getTokens(IvionParser::Damage);
}

tree::TerminalNode* IvionParser::DealDamageContext::Damage(size_t i) {
  return getToken(IvionParser::Damage, i);
}

std::vector<tree::TerminalNode *> IvionParser::DealDamageContext::To() {
  return getTokens(IvionParser::To);
}

tree::TerminalNode* IvionParser::DealDamageContext::To(size_t i) {
  return getToken(IvionParser::To, i);
}

IvionParser::PlayerContext* IvionParser::DealDamageContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Equal() {
  return getToken(IvionParser::Equal, 0);
}

IvionParser::GameStateValueContext* IvionParser::DealDamageContext::gameStateValue() {
  return getRuleContext<IvionParser::GameStateValueContext>(0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Plus() {
  return getToken(IvionParser::Plus, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::More() {
  return getToken(IvionParser::More, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Their() {
  return getToken(IvionParser::Their, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}


size_t IvionParser::DealDamageContext::getRuleIndex() const {
  return IvionParser::RuleDealDamage;
}


antlrcpp::Any IvionParser::DealDamageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitDealDamage(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DealDamageContext* IvionParser::dealDamage() {
  DealDamageContext *_localctx = _tracker.createInstance<DealDamageContext>(_ctx, getState());
  enterRule(_localctx, 102, IvionParser::RuleDealDamage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(810);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(744);
      match(IvionParser::Deal);
      setState(745);
      literalValue();
      setState(746);
      match(IvionParser::Damage);
      setState(747);
      match(IvionParser::To);
      setState(748);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(750);
      match(IvionParser::Deal);
      setState(751);
      match(IvionParser::Damage);
      setState(752);
      match(IvionParser::To);
      setState(753);
      player();
      setState(754);
      match(IvionParser::Equal);
      setState(755);
      match(IvionParser::To);
      setState(756);
      gameStateValue();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(758);
      match(IvionParser::Deal);
      setState(759);
      literalValue();
      setState(760);
      match(IvionParser::Damage);
      setState(761);
      match(IvionParser::To);
      setState(762);
      player();
      setState(763);
      match(IvionParser::Plus);
      setState(764);
      match(IvionParser::Damage);
      setState(765);
      match(IvionParser::Equal);
      setState(766);
      match(IvionParser::To);
      setState(767);
      gameStateValue();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(769);
      match(IvionParser::Deal);
      setState(770);
      literalValue();
      setState(771);
      match(IvionParser::Damage);
      setState(772);
      match(IvionParser::To);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(774);
      match(IvionParser::Deal);
      setState(775);
      match(IvionParser::Damage);
      setState(776);
      match(IvionParser::To);
      setState(777);
      player();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(778);
      match(IvionParser::Deal);
      setState(779);
      literalValue();
      setState(780);
      match(IvionParser::More);
      setState(781);
      match(IvionParser::Damage);
      setState(782);
      match(IvionParser::To);
      setState(783);
      player();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(785);
      match(IvionParser::Deal);
      setState(786);
      literalValue();
      setState(787);
      match(IvionParser::Damage);
      setState(788);
      match(IvionParser::To);
      setState(789);
      player();
      setState(790);
      match(IvionParser::Plus);
      setState(791);
      literalValue();
      setState(792);
      match(IvionParser::More);
      setState(793);
      match(IvionParser::Damage);
      setState(794);
      match(IvionParser::For);
      setState(795);
      match(IvionParser::Each);
      setState(796);
      match(IvionParser::Revealed);
      setState(797);
      match(IvionParser::Card);
      setState(798);
      match(IvionParser::In);
      setState(799);
      match(IvionParser::Their);
      setState(800);
      match(IvionParser::Hand);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(802);
      match(IvionParser::Deal);
      setState(803);
      match(IvionParser::Damage);
      setState(804);
      match(IvionParser::To);
      setState(805);
      player();
      setState(806);
      match(IvionParser::Equal);
      setState(807);
      match(IvionParser::To);
      setState(808);
      literalValue();
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


size_t IvionParser::CounterCardContext::getRuleIndex() const {
  return IvionParser::RuleCounterCard;
}


antlrcpp::Any IvionParser::CounterCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCounterCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CounterCardContext* IvionParser::counterCard() {
  CounterCardContext *_localctx = _tracker.createInstance<CounterCardContext>(_ctx, getState());
  enterRule(_localctx, 104, IvionParser::RuleCounterCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(812);
    match(IvionParser::Counter);
    setState(813);
    card();
   
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

IvionParser::EntityContext* IvionParser::AttachCardContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Until() {
  return getToken(IvionParser::Until, 0);
}

IvionParser::TurnTriggerContext* IvionParser::AttachCardContext::turnTrigger() {
  return getRuleContext<IvionParser::TurnTriggerContext>(0);
}

tree::TerminalNode* IvionParser::AttachCardContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}


size_t IvionParser::AttachCardContext::getRuleIndex() const {
  return IvionParser::RuleAttachCard;
}


antlrcpp::Any IvionParser::AttachCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAttachCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AttachCardContext* IvionParser::attachCard() {
  AttachCardContext *_localctx = _tracker.createInstance<AttachCardContext>(_ctx, getState());
  enterRule(_localctx, 106, IvionParser::RuleAttachCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(828);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(815);
      match(IvionParser::Attach);
      setState(816);
      match(IvionParser::To);
      setState(817);
      entity();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(818);
      match(IvionParser::Attach);
      setState(819);
      match(IvionParser::To);
      setState(820);
      entity();
      setState(821);
      match(IvionParser::Until);
      setState(822);
      turnTrigger();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(824);
      match(IvionParser::Attach);
      setState(825);
      match(IvionParser::CARD_NAME);
      setState(826);
      match(IvionParser::To);
      setState(827);
      entity();
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

//----------------- GainPowerContext ------------------------------------------------------------------

IvionParser::GainPowerContext::GainPowerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::GainPowerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::GainPowerContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

IvionParser::LiteralValueContext* IvionParser::GainPowerContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::GainPowerContext::POWER() {
  return getToken(IvionParser::POWER, 0);
}

tree::TerminalNode* IvionParser::GainPowerContext::More() {
  return getToken(IvionParser::More, 0);
}

tree::TerminalNode* IvionParser::GainPowerContext::Additional() {
  return getToken(IvionParser::Additional, 0);
}


size_t IvionParser::GainPowerContext::getRuleIndex() const {
  return IvionParser::RuleGainPower;
}


antlrcpp::Any IvionParser::GainPowerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGainPower(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainPowerContext* IvionParser::gainPower() {
  GainPowerContext *_localctx = _tracker.createInstance<GainPowerContext>(_ctx, getState());
  enterRule(_localctx, 108, IvionParser::RuleGainPower);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(854);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(830);
      player();
      setState(831);
      match(IvionParser::Gain);
      setState(832);
      literalValue();
      setState(833);
      match(IvionParser::POWER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(835);
      match(IvionParser::Gain);
      setState(836);
      literalValue();
      setState(837);
      match(IvionParser::More);
      setState(838);
      match(IvionParser::POWER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(840);
      match(IvionParser::Gain);
      setState(841);
      literalValue();
      setState(842);
      match(IvionParser::Additional);
      setState(843);
      match(IvionParser::POWER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(845);
      match(IvionParser::Gain);
      setState(846);
      literalValue();
      setState(847);
      match(IvionParser::POWER);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(849);
      match(IvionParser::Gain);
      setState(850);
      literalValue();
      setState(851);
      match(IvionParser::More);
      setState(852);
      match(IvionParser::POWER);
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

//----------------- GainActionContext ------------------------------------------------------------------

IvionParser::GainActionContext::GainActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::GainActionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::GainActionContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

IvionParser::LiteralValueContext* IvionParser::GainActionContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::GainActionContext::ACTION() {
  return getToken(IvionParser::ACTION, 0);
}

tree::TerminalNode* IvionParser::GainActionContext::More() {
  return getToken(IvionParser::More, 0);
}

tree::TerminalNode* IvionParser::GainActionContext::Additional() {
  return getToken(IvionParser::Additional, 0);
}


size_t IvionParser::GainActionContext::getRuleIndex() const {
  return IvionParser::RuleGainAction;
}


antlrcpp::Any IvionParser::GainActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGainAction(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainActionContext* IvionParser::gainAction() {
  GainActionContext *_localctx = _tracker.createInstance<GainActionContext>(_ctx, getState());
  enterRule(_localctx, 110, IvionParser::RuleGainAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(880);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(856);
      player();
      setState(857);
      match(IvionParser::Gain);
      setState(858);
      literalValue();
      setState(859);
      match(IvionParser::ACTION);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(861);
      match(IvionParser::Gain);
      setState(862);
      literalValue();
      setState(863);
      match(IvionParser::More);
      setState(864);
      match(IvionParser::ACTION);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(866);
      match(IvionParser::Gain);
      setState(867);
      literalValue();
      setState(868);
      match(IvionParser::Additional);
      setState(869);
      match(IvionParser::ACTION);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(871);
      match(IvionParser::Gain);
      setState(872);
      literalValue();
      setState(873);
      match(IvionParser::ACTION);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(875);
      match(IvionParser::Gain);
      setState(876);
      literalValue();
      setState(877);
      match(IvionParser::More);
      setState(878);
      match(IvionParser::ACTION);
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

//----------------- GainInitiativeContext ------------------------------------------------------------------

IvionParser::GainInitiativeContext::GainInitiativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GainInitiativeContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

std::vector<tree::TerminalNode *> IvionParser::GainInitiativeContext::INITIATIVE() {
  return getTokens(IvionParser::INITIATIVE);
}

tree::TerminalNode* IvionParser::GainInitiativeContext::INITIATIVE(size_t i) {
  return getToken(IvionParser::INITIATIVE, i);
}

IvionParser::PlayerContext* IvionParser::GainInitiativeContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::GainInitiativeContext::Another() {
  return getToken(IvionParser::Another, 0);
}


size_t IvionParser::GainInitiativeContext::getRuleIndex() const {
  return IvionParser::RuleGainInitiative;
}


antlrcpp::Any IvionParser::GainInitiativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGainInitiative(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainInitiativeContext* IvionParser::gainInitiative() {
  GainInitiativeContext *_localctx = _tracker.createInstance<GainInitiativeContext>(_ctx, getState());
  enterRule(_localctx, 112, IvionParser::RuleGainInitiative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(902);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(882);
      match(IvionParser::Gain);
      setState(884); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(883);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(886); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(888);
      player();
      setState(889);
      match(IvionParser::Gain);
      setState(891); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(890);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(893); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(895);
      match(IvionParser::Gain);
      setState(896);
      match(IvionParser::Another);
      setState(898); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(897);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(900); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
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

//----------------- GainMitigateContext ------------------------------------------------------------------

IvionParser::GainMitigateContext::GainMitigateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::GainMitigateContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::GainMitigateContext::Gains() {
  return getToken(IvionParser::Gains, 0);
}

tree::TerminalNode* IvionParser::GainMitigateContext::Mitigate() {
  return getToken(IvionParser::Mitigate, 0);
}

IvionParser::LiteralValueContext* IvionParser::GainMitigateContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::GainMitigateContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}


size_t IvionParser::GainMitigateContext::getRuleIndex() const {
  return IvionParser::RuleGainMitigate;
}


antlrcpp::Any IvionParser::GainMitigateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGainMitigate(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainMitigateContext* IvionParser::gainMitigate() {
  GainMitigateContext *_localctx = _tracker.createInstance<GainMitigateContext>(_ctx, getState());
  enterRule(_localctx, 114, IvionParser::RuleGainMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(912);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target:
      case IvionParser::Them:
      case IvionParser::That:
      case IvionParser::Yourself:
      case IvionParser::The:
      case IvionParser::A:
      case IvionParser::Your:
      case IvionParser::Each:
      case IvionParser::Another:
      case IvionParser::You:
      case IvionParser::Up:
      case IvionParser::They:
      case IvionParser::All:
      case IvionParser::Their:
      case IvionParser::Its:
      case IvionParser::Any:
      case IvionParser::Once:
      case IvionParser::Twice:
      case IvionParser::Integer:
      case IvionParser::One:
      case IvionParser::Two:
      case IvionParser::Three: {
        enterOuterAlt(_localctx, 1);
        setState(904);
        player();
        setState(905);
        match(IvionParser::Gains);
        setState(906);
        match(IvionParser::Mitigate);
        setState(907);
        literalValue();
        break;
      }

      case IvionParser::Gain: {
        enterOuterAlt(_localctx, 2);
        setState(909);
        match(IvionParser::Gain);
        setState(910);
        match(IvionParser::Mitigate);
        setState(911);
        literalValue();
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

//----------------- LoseMitigateContext ------------------------------------------------------------------

IvionParser::LoseMitigateContext::LoseMitigateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::LoseMitigateContext::Lose() {
  return getToken(IvionParser::Lose, 0);
}

tree::TerminalNode* IvionParser::LoseMitigateContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::LoseMitigateContext::Mitigate() {
  return getToken(IvionParser::Mitigate, 0);
}


size_t IvionParser::LoseMitigateContext::getRuleIndex() const {
  return IvionParser::RuleLoseMitigate;
}


antlrcpp::Any IvionParser::LoseMitigateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitLoseMitigate(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::LoseMitigateContext* IvionParser::loseMitigate() {
  LoseMitigateContext *_localctx = _tracker.createInstance<LoseMitigateContext>(_ctx, getState());
  enterRule(_localctx, 116, IvionParser::RuleLoseMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(914);
    match(IvionParser::Lose);
    setState(915);
    match(IvionParser::Your);
    setState(916);
    match(IvionParser::Mitigate);
   
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

tree::TerminalNode* IvionParser::UseSecondWindContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::UseSecondWindContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::UseSecondWindContext::Wind() {
  return getToken(IvionParser::Wind, 0);
}


size_t IvionParser::UseSecondWindContext::getRuleIndex() const {
  return IvionParser::RuleUseSecondWind;
}


antlrcpp::Any IvionParser::UseSecondWindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitUseSecondWind(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::UseSecondWindContext* IvionParser::useSecondWind() {
  UseSecondWindContext *_localctx = _tracker.createInstance<UseSecondWindContext>(_ctx, getState());
  enterRule(_localctx, 118, IvionParser::RuleUseSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(918);
    match(IvionParser::Use);
    setState(919);
    match(IvionParser::Your);
    setState(920);
    match(IvionParser::Second);
    setState(921);
    match(IvionParser::Wind);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnCardContext ------------------------------------------------------------------

IvionParser::ReturnCardContext::ReturnCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ReturnCardContext::Return() {
  return getToken(IvionParser::Return, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Attached() {
  return getToken(IvionParser::Attached, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::To() {
  return getToken(IvionParser::To, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Its() {
  return getToken(IvionParser::Its, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Owners() {
  return getToken(IvionParser::Owners, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::With() {
  return getToken(IvionParser::With, 0);
}

std::vector<tree::TerminalNode *> IvionParser::ReturnCardContext::A() {
  return getTokens(IvionParser::A);
}

tree::TerminalNode* IvionParser::ReturnCardContext::A(size_t i) {
  return getToken(IvionParser::A, i);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Cost() {
  return getToken(IvionParser::Cost, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::LiteralValueContext* IvionParser::ReturnCardContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::From() {
  return getToken(IvionParser::From, 0);
}

std::vector<tree::TerminalNode *> IvionParser::ReturnCardContext::Your() {
  return getTokens(IvionParser::Your);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Your(size_t i) {
  return getToken(IvionParser::Your, i);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::It() {
  return getToken(IvionParser::It, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::More() {
  return getToken(IvionParser::More, 0);
}


size_t IvionParser::ReturnCardContext::getRuleIndex() const {
  return IvionParser::RuleReturnCard;
}


antlrcpp::Any IvionParser::ReturnCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitReturnCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ReturnCardContext* IvionParser::returnCard() {
  ReturnCardContext *_localctx = _tracker.createInstance<ReturnCardContext>(_ctx, getState());
  enterRule(_localctx, 120, IvionParser::RuleReturnCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1027);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(923);
      match(IvionParser::Return);
      setState(924);
      match(IvionParser::Target);
      setState(925);
      match(IvionParser::Attached);
      setState(926);
      match(IvionParser::Card);
      setState(927);
      match(IvionParser::To);
      setState(928);
      match(IvionParser::Its);
      setState(929);
      match(IvionParser::Owners);
      setState(930);
      match(IvionParser::Hand);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(931);
      match(IvionParser::Return);
      setState(932);
      match(IvionParser::Target);
      setState(933);
      match(IvionParser::Card);
      setState(934);
      match(IvionParser::With);
      setState(935);
      match(IvionParser::A);
      setState(936);
      match(IvionParser::Resource);
      setState(937);
      match(IvionParser::Cost);
      setState(938);
      match(IvionParser::Of);
      setState(939);
      literalValue();
      setState(940);
      match(IvionParser::Or);
      setState(941);
      match(IvionParser::Less);
      setState(942);
      match(IvionParser::From);
      setState(943);
      match(IvionParser::Your);
      setState(944);
      match(IvionParser::Discard);
      setState(945);
      match(IvionParser::To);
      setState(946);
      match(IvionParser::Your);
      setState(947);
      match(IvionParser::Hand);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(949);
      match(IvionParser::Return);
      setState(950);
      match(IvionParser::Target);
      setState(951);
      match(IvionParser::Ability);
      setState(952);
      match(IvionParser::Card);
      setState(953);
      match(IvionParser::From);
      setState(954);
      match(IvionParser::Your);
      setState(955);
      match(IvionParser::Discard);
      setState(956);
      match(IvionParser::To);
      setState(957);
      match(IvionParser::Your);
      setState(958);
      match(IvionParser::Hand);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(959);
      match(IvionParser::Return);
      setState(960);
      match(IvionParser::A);
      setState(961);
      match(IvionParser::Attack);
      setState(962);
      match(IvionParser::Card);
      setState(963);
      match(IvionParser::With);
      setState(964);
      match(IvionParser::A);
      setState(965);
      match(IvionParser::Resource);
      setState(966);
      match(IvionParser::Cost);
      setState(967);
      match(IvionParser::Of);
      setState(968);
      literalValue();
      setState(969);
      match(IvionParser::Or);
      setState(970);
      match(IvionParser::Less);
      setState(971);
      match(IvionParser::From);
      setState(972);
      match(IvionParser::Your);
      setState(973);
      match(IvionParser::Discard);
      setState(974);
      match(IvionParser::To);
      setState(975);
      match(IvionParser::Your);
      setState(976);
      match(IvionParser::Hand);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(978);
      match(IvionParser::Return);
      setState(979);
      match(IvionParser::A);
      setState(980);
      match(IvionParser::Card);
      setState(981);
      match(IvionParser::From);
      setState(982);
      match(IvionParser::Your);
      setState(983);
      match(IvionParser::Discard);
      setState(984);
      match(IvionParser::To);
      setState(985);
      match(IvionParser::Your);
      setState(986);
      match(IvionParser::Hand);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(987);
      match(IvionParser::Return);
      setState(988);
      match(IvionParser::Target);
      setState(989);
      match(IvionParser::Card);
      setState(990);
      match(IvionParser::From);
      setState(991);
      match(IvionParser::Your);
      setState(992);
      match(IvionParser::Discard);
      setState(993);
      match(IvionParser::To);
      setState(994);
      match(IvionParser::Your);
      setState(995);
      match(IvionParser::Hand);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(996);
      match(IvionParser::Return);
      setState(997);
      match(IvionParser::CARD_NAME);
      setState(998);
      match(IvionParser::To);
      setState(999);
      match(IvionParser::Your);
      setState(1000);
      match(IvionParser::Hand);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1001);
      match(IvionParser::Return);
      setState(1002);
      match(IvionParser::It);
      setState(1003);
      match(IvionParser::From);
      setState(1004);
      match(IvionParser::Your);
      setState(1005);
      match(IvionParser::Discard);
      setState(1006);
      match(IvionParser::To);
      setState(1007);
      match(IvionParser::Your);
      setState(1008);
      match(IvionParser::Hand);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1009);
      match(IvionParser::Return);
      setState(1010);
      match(IvionParser::Target);
      setState(1011);
      match(IvionParser::Card);
      setState(1012);
      match(IvionParser::With);
      setState(1013);
      match(IvionParser::A);
      setState(1014);
      match(IvionParser::Resource);
      setState(1015);
      match(IvionParser::Cost);
      setState(1016);
      match(IvionParser::Of);
      setState(1017);
      literalValue();
      setState(1018);
      match(IvionParser::Or);
      setState(1019);
      match(IvionParser::More);
      setState(1020);
      match(IvionParser::From);
      setState(1021);
      match(IvionParser::Your);
      setState(1022);
      match(IvionParser::Discard);
      setState(1023);
      match(IvionParser::To);
      setState(1024);
      match(IvionParser::Your);
      setState(1025);
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

//----------------- PutBottomCardOfDeckIntoHandContext ------------------------------------------------------------------

IvionParser::PutBottomCardOfDeckIntoHandContext::PutBottomCardOfDeckIntoHandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Put() {
  return getToken(IvionParser::Put, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::PutBottomCardOfDeckIntoHandContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Into() {
  return getToken(IvionParser::Into, 0);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}


size_t IvionParser::PutBottomCardOfDeckIntoHandContext::getRuleIndex() const {
  return IvionParser::RulePutBottomCardOfDeckIntoHand;
}


antlrcpp::Any IvionParser::PutBottomCardOfDeckIntoHandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPutBottomCardOfDeckIntoHand(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PutBottomCardOfDeckIntoHandContext* IvionParser::putBottomCardOfDeckIntoHand() {
  PutBottomCardOfDeckIntoHandContext *_localctx = _tracker.createInstance<PutBottomCardOfDeckIntoHandContext>(_ctx, getState());
  enterRule(_localctx, 122, IvionParser::RulePutBottomCardOfDeckIntoHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1029);
    match(IvionParser::Put);
    setState(1030);
    hypotheticalCard();
    setState(1031);
    match(IvionParser::Into);
    setState(1032);
    match(IvionParser::Your);
    setState(1033);
    match(IvionParser::Hand);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriggerDurationEffectsContext ------------------------------------------------------------------

IvionParser::TriggerDurationEffectsContext::TriggerDurationEffectsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Trigger() {
  return getToken(IvionParser::Trigger, 0);
}

std::vector<tree::TerminalNode *> IvionParser::TriggerDurationEffectsContext::Your() {
  return getTokens(IvionParser::Your);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Your(size_t i) {
  return getToken(IvionParser::Your, i);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Duration() {
  return getToken(IvionParser::Duration, 0);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Effects() {
  return getToken(IvionParser::Effects, 0);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::As() {
  return getToken(IvionParser::As, 0);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Though() {
  return getToken(IvionParser::Though, 0);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Had() {
  return getToken(IvionParser::Had, 0);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Just() {
  return getToken(IvionParser::Just, 0);
}

tree::TerminalNode* IvionParser::TriggerDurationEffectsContext::Ended() {
  return getToken(IvionParser::Ended, 0);
}


size_t IvionParser::TriggerDurationEffectsContext::getRuleIndex() const {
  return IvionParser::RuleTriggerDurationEffects;
}


antlrcpp::Any IvionParser::TriggerDurationEffectsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTriggerDurationEffects(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TriggerDurationEffectsContext* IvionParser::triggerDurationEffects() {
  TriggerDurationEffectsContext *_localctx = _tracker.createInstance<TriggerDurationEffectsContext>(_ctx, getState());
  enterRule(_localctx, 124, IvionParser::RuleTriggerDurationEffects);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1035);
    match(IvionParser::Trigger);
    setState(1036);
    match(IvionParser::Your);
    setState(1037);
    match(IvionParser::Duration);
    setState(1038);
    match(IvionParser::Effects);
    setState(1039);
    match(IvionParser::As);
    setState(1040);
    match(IvionParser::Though);
    setState(1041);
    match(IvionParser::Your);
    setState(1042);
    match(IvionParser::Turn);
    setState(1043);
    match(IvionParser::Had);
    setState(1044);
    match(IvionParser::Just);
    setState(1045);
    match(IvionParser::Ended);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayCardContext ------------------------------------------------------------------

IvionParser::PlayCardContext::PlayCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PlayCardContext::Play() {
  return getToken(IvionParser::Play, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::For() {
  return getToken(IvionParser::For, 0);
}

IvionParser::LiteralValueContext* IvionParser::PlayCardContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Free() {
  return getToken(IvionParser::Free, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Non() {
  return getToken(IvionParser::Non, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Targeting() {
  return getToken(IvionParser::Targeting, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayCardContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

IvionParser::PlayerContext* IvionParser::PlayCardContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayCardContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Frenzy() {
  return getToken(IvionParser::Frenzy, 0);
}

std::vector<tree::TerminalNode *> IvionParser::PlayCardContext::Cursed() {
  return getTokens(IvionParser::Cursed);
}

tree::TerminalNode* IvionParser::PlayCardContext::Cursed(size_t i) {
  return getToken(IvionParser::Cursed, i);
}

std::vector<tree::TerminalNode *> IvionParser::PlayCardContext::Dagger() {
  return getTokens(IvionParser::Dagger);
}

tree::TerminalNode* IvionParser::PlayCardContext::Dagger(size_t i) {
  return getToken(IvionParser::Dagger, i);
}

tree::TerminalNode* IvionParser::PlayCardContext::P() {
  return getToken(IvionParser::P, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Doesnt() {
  return getToken(IvionParser::Doesnt, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Count() {
  return getToken(IvionParser::Count, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Towards() {
  return getToken(IvionParser::Towards, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Limit() {
  return getToken(IvionParser::Limit, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Per() {
  return getToken(IvionParser::Per, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

std::vector<tree::TerminalNode *> IvionParser::PlayCardContext::Runic() {
  return getTokens(IvionParser::Runic);
}

tree::TerminalNode* IvionParser::PlayCardContext::Runic(size_t i) {
  return getToken(IvionParser::Runic, i);
}

std::vector<tree::TerminalNode *> IvionParser::PlayCardContext::Slaughter() {
  return getTokens(IvionParser::Slaughter);
}

tree::TerminalNode* IvionParser::PlayCardContext::Slaughter(size_t i) {
  return getToken(IvionParser::Slaughter, i);
}


size_t IvionParser::PlayCardContext::getRuleIndex() const {
  return IvionParser::RulePlayCard;
}


antlrcpp::Any IvionParser::PlayCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayCardContext* IvionParser::playCard() {
  PlayCardContext *_localctx = _tracker.createInstance<PlayCardContext>(_ctx, getState());
  enterRule(_localctx, 126, IvionParser::RulePlayCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1047);
      match(IvionParser::Play);
      setState(1048);
      match(IvionParser::A);
      setState(1049);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1050);
      match(IvionParser::Play);
      setState(1051);
      match(IvionParser::A);
      setState(1052);
      match(IvionParser::Card);
      setState(1053);
      match(IvionParser::For);
      setState(1054);
      literalValue();
      setState(1055);
      match(IvionParser::Less);
      setState(1056);
      match(IvionParser::Resource);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1058);
      match(IvionParser::Play);
      setState(1059);
      match(IvionParser::A);
      setState(1060);
      match(IvionParser::Card);
      setState(1061);
      match(IvionParser::For);
      setState(1062);
      match(IvionParser::Free);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1063);
      match(IvionParser::Play);
      setState(1064);
      match(IvionParser::That);
      setState(1065);
      match(IvionParser::Card);
      setState(1066);
      match(IvionParser::For);
      setState(1067);
      match(IvionParser::Free);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1068);
      match(IvionParser::Play);
      setState(1069);
      match(IvionParser::Target);
      setState(1070);
      match(IvionParser::Non);
      setState(1071);
      match(IvionParser::Attack);
      setState(1072);
      match(IvionParser::Card);
      setState(1073);
      match(IvionParser::From);
      setState(1074);
      match(IvionParser::Your);
      setState(1075);
      match(IvionParser::Discard);
      setState(1076);
      match(IvionParser::Targeting);
      setState(1077);
      hypotheticalPlayer();
      setState(1078);
      match(IvionParser::For);
      setState(1079);
      match(IvionParser::Free);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1081);
      match(IvionParser::Play);
      setState(1082);
      match(IvionParser::A);
      setState(1083);
      match(IvionParser::Attack);
      setState(1084);
      match(IvionParser::Card);
      setState(1085);
      match(IvionParser::Targeting);
      setState(1086);
      hypotheticalPlayer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1087);
      match(IvionParser::Play);
      setState(1088);
      match(IvionParser::A);
      setState(1089);
      match(IvionParser::Ability);
      setState(1090);
      match(IvionParser::Card);
      setState(1091);
      match(IvionParser::From);
      setState(1092);
      match(IvionParser::Your);
      setState(1093);
      match(IvionParser::Discard);
      setState(1094);
      match(IvionParser::Targeting);
      setState(1095);
      player();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1096);
      match(IvionParser::Play);
      setState(1097);
      match(IvionParser::A);
      setState(1098);
      match(IvionParser::Attack);
      setState(1099);
      match(IvionParser::Card);
      setState(1100);
      match(IvionParser::Targeting);
      setState(1101);
      player();
      setState(1102);
      match(IvionParser::For);
      setState(1103);
      literalValue();
      setState(1104);
      match(IvionParser::Less);
      setState(1105);
      match(IvionParser::Resource);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1107);
      match(IvionParser::Play);
      setState(1108);
      match(IvionParser::A);
      setState(1109);
      match(IvionParser::Card);
      setState(1110);
      match(IvionParser::With);
      setState(1111);
      match(IvionParser::Frenzy);
      setState(1112);
      match(IvionParser::For);
      setState(1113);
      literalValue();
      setState(1114);
      match(IvionParser::Less);
      setState(1115);
      match(IvionParser::Resource);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1117);
      match(IvionParser::Play);
      setState(1118);
      match(IvionParser::A);
      setState(1119);
      match(IvionParser::Card);
      setState(1120);
      match(IvionParser::Targeting);
      setState(1121);
      player();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1122);
      match(IvionParser::Play);
      setState(1123);
      match(IvionParser::Cursed);
      setState(1124);
      match(IvionParser::Dagger);
      setState(1125);
      match(IvionParser::For);
      setState(1126);
      match(IvionParser::Free);
      setState(1127);
      match(IvionParser::P);
      setState(1128);
      match(IvionParser::This);
      setState(1129);
      match(IvionParser::Doesnt);
      setState(1130);
      match(IvionParser::Count);
      setState(1131);
      match(IvionParser::Towards);
      setState(1132);
      match(IvionParser::Your);
      setState(1133);
      match(IvionParser::Cursed);
      setState(1134);
      match(IvionParser::Dagger);
      setState(1135);
      match(IvionParser::Limit);
      setState(1136);
      match(IvionParser::Per);
      setState(1137);
      match(IvionParser::Turn);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1138);
      match(IvionParser::Play);
      setState(1139);
      match(IvionParser::Runic);
      setState(1140);
      match(IvionParser::Slaughter);
      setState(1141);
      match(IvionParser::Targeting);
      setState(1142);
      player();
      setState(1143);
      match(IvionParser::For);
      setState(1144);
      match(IvionParser::Free);
      setState(1145);
      match(IvionParser::P);
      setState(1146);
      match(IvionParser::This);
      setState(1147);
      match(IvionParser::Doesnt);
      setState(1148);
      match(IvionParser::Count);
      setState(1149);
      match(IvionParser::Towards);
      setState(1150);
      match(IvionParser::Your);
      setState(1151);
      match(IvionParser::Runic);
      setState(1152);
      match(IvionParser::Slaughter);
      setState(1153);
      match(IvionParser::Limit);
      setState(1154);
      match(IvionParser::Per);
      setState(1155);
      match(IvionParser::Turn);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1157);
      match(IvionParser::Play);
      setState(1158);
      match(IvionParser::A);
      setState(1159);
      match(IvionParser::Card);
      setState(1160);
      match(IvionParser::For);
      setState(1161);
      literalValue();
      setState(1162);
      match(IvionParser::Less);
      setState(1163);
      match(IvionParser::Resource);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1165);
      match(IvionParser::Play);
      setState(1166);
      match(IvionParser::A);
      setState(1167);
      match(IvionParser::Non);
      setState(1168);
      match(IvionParser::Attack);
      setState(1169);
      match(IvionParser::Card);
      setState(1170);
      match(IvionParser::Targeting);
      setState(1171);
      hypotheticalPlayer();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1172);
      match(IvionParser::Play);
      setState(1173);
      match(IvionParser::A);
      setState(1174);
      match(IvionParser::Ability);
      setState(1175);
      match(IvionParser::Card);
      setState(1176);
      match(IvionParser::Targeting);
      setState(1177);
      player();
      setState(1178);
      match(IvionParser::For);
      setState(1179);
      literalValue();
      setState(1180);
      match(IvionParser::Less);
      setState(1181);
      match(IvionParser::Resource);
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

//----------------- DiscardCardsContext ------------------------------------------------------------------

IvionParser::DiscardCardsContext::DiscardCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}

IvionParser::LiteralValueContext* IvionParser::DiscardCardsContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Of() {
  return getToken(IvionParser::Of, 0);
}

std::vector<IvionParser::PlayerContext *> IvionParser::DiscardCardsContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::DiscardCardsContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Choice() {
  return getToken(IvionParser::Choice, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Discards() {
  return getToken(IvionParser::Discards, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Target() {
  return getToken(IvionParser::Target, 0);
}


size_t IvionParser::DiscardCardsContext::getRuleIndex() const {
  return IvionParser::RuleDiscardCards;
}


antlrcpp::Any IvionParser::DiscardCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitDiscardCards(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DiscardCardsContext* IvionParser::discardCards() {
  DiscardCardsContext *_localctx = _tracker.createInstance<DiscardCardsContext>(_ctx, getState());
  enterRule(_localctx, 128, IvionParser::RuleDiscardCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1234);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1185);
      match(IvionParser::Discard);
      setState(1186);
      literalValue();
      setState(1187);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1189);
      match(IvionParser::Discard);
      setState(1190);
      match(IvionParser::A);
      setState(1191);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1192);
      match(IvionParser::Discard);
      setState(1193);
      match(IvionParser::A);
      setState(1194);
      match(IvionParser::Revealed);
      setState(1195);
      match(IvionParser::Card);
      setState(1196);
      match(IvionParser::Of);
      setState(1197);
      player();
      setState(1198);
      match(IvionParser::Choice);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1200);
      player();
      setState(1201);
      match(IvionParser::Discard);
      setState(1202);
      literalValue();
      setState(1203);
      match(IvionParser::Card);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1205);
      player();
      setState(1206);
      match(IvionParser::Discard);
      setState(1207);
      match(IvionParser::A);
      setState(1208);
      match(IvionParser::Card);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1210);
      player();
      setState(1211);
      match(IvionParser::Discards);
      setState(1212);
      match(IvionParser::Target);
      setState(1213);
      match(IvionParser::Revealed);
      setState(1214);
      match(IvionParser::Card);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1216);
      player();
      setState(1217);
      match(IvionParser::Discards);
      setState(1218);
      literalValue();
      setState(1219);
      match(IvionParser::Card);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1221);
      player();
      setState(1222);
      match(IvionParser::Discards);
      setState(1223);
      match(IvionParser::A);
      setState(1224);
      match(IvionParser::Revealed);
      setState(1225);
      match(IvionParser::Card);
      setState(1226);
      match(IvionParser::Of);
      setState(1227);
      player();
      setState(1228);
      match(IvionParser::Choice);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1230);
      match(IvionParser::Discard);
      setState(1231);
      match(IvionParser::A);
      setState(1232);
      match(IvionParser::Revealed);
      setState(1233);
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

//----------------- GainsHeroicContext ------------------------------------------------------------------

IvionParser::GainsHeroicContext::GainsHeroicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GainsHeroicContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::GainsHeroicContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::GainsHeroicContext::Gains() {
  return getToken(IvionParser::Gains, 0);
}

tree::TerminalNode* IvionParser::GainsHeroicContext::Heroic() {
  return getToken(IvionParser::Heroic, 0);
}


size_t IvionParser::GainsHeroicContext::getRuleIndex() const {
  return IvionParser::RuleGainsHeroic;
}


antlrcpp::Any IvionParser::GainsHeroicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGainsHeroic(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainsHeroicContext* IvionParser::gainsHeroic() {
  GainsHeroicContext *_localctx = _tracker.createInstance<GainsHeroicContext>(_ctx, getState());
  enterRule(_localctx, 130, IvionParser::RuleGainsHeroic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1236);
    match(IvionParser::That);
    setState(1237);
    match(IvionParser::Card);
    setState(1238);
    match(IvionParser::Gains);
    setState(1239);
    match(IvionParser::Heroic);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HealPlayerContext ------------------------------------------------------------------

IvionParser::HealPlayerContext::HealPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::HealPlayerContext::Heal() {
  return getToken(IvionParser::Heal, 0);
}

IvionParser::PlayerContext* IvionParser::HealPlayerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::LiteralValueContext* IvionParser::HealPlayerContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::HP() {
  return getToken(IvionParser::HP, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Equal() {
  return getToken(IvionParser::Equal, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::To() {
  return getToken(IvionParser::To, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Number() {
  return getToken(IvionParser::Number, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::HealPlayerContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Their() {
  return getToken(IvionParser::Their, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}


size_t IvionParser::HealPlayerContext::getRuleIndex() const {
  return IvionParser::RuleHealPlayer;
}


antlrcpp::Any IvionParser::HealPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitHealPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HealPlayerContext* IvionParser::healPlayer() {
  HealPlayerContext *_localctx = _tracker.createInstance<HealPlayerContext>(_ctx, getState());
  enterRule(_localctx, 132, IvionParser::RuleHealPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1269);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1241);
      match(IvionParser::Heal);
      setState(1242);
      player();
      setState(1243);
      literalValue();
      setState(1244);
      match(IvionParser::HP);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1246);
      match(IvionParser::Heal);
      setState(1247);
      player();
      setState(1248);
      literalValue();
      setState(1249);
      match(IvionParser::HP);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1251);
      match(IvionParser::Heal);
      setState(1252);
      player();
      setState(1253);
      literalValue();
      setState(1254);
      match(IvionParser::HP);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1256);
      match(IvionParser::Heal);
      setState(1257);
      player();
      setState(1258);
      match(IvionParser::HP);
      setState(1259);
      match(IvionParser::Equal);
      setState(1260);
      match(IvionParser::To);
      setState(1261);
      match(IvionParser::The);
      setState(1262);
      match(IvionParser::Number);
      setState(1263);
      match(IvionParser::Of);
      setState(1264);
      hypotheticalCard();
      setState(1265);
      match(IvionParser::In);
      setState(1266);
      match(IvionParser::Their);
      setState(1267);
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
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitStunPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::StunPlayerContext* IvionParser::stunPlayer() {
  StunPlayerContext *_localctx = _tracker.createInstance<StunPlayerContext>(_ctx, getState());
  enterRule(_localctx, 134, IvionParser::RuleStunPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1271);
    match(IvionParser::Stun);
    setState(1272);
    player();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RevealCardsContext ------------------------------------------------------------------

IvionParser::RevealCardsContext::RevealCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::RevealCardsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Reveals() {
  return getToken(IvionParser::Reveals, 0);
}

IvionParser::LiteralValueContext* IvionParser::RevealCardsContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Their() {
  return getToken(IvionParser::Their, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Your() {
  return getToken(IvionParser::Your, 0);
}


size_t IvionParser::RevealCardsContext::getRuleIndex() const {
  return IvionParser::RuleRevealCards;
}


antlrcpp::Any IvionParser::RevealCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitRevealCards(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RevealCardsContext* IvionParser::revealCards() {
  RevealCardsContext *_localctx = _tracker.createInstance<RevealCardsContext>(_ctx, getState());
  enterRule(_localctx, 136, IvionParser::RuleRevealCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1336);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1274);
      player();
      setState(1275);
      match(IvionParser::Reveals);
      setState(1276);
      literalValue();
      setState(1277);
      match(IvionParser::Card);
      setState(1278);
      match(IvionParser::From);
      setState(1279);
      match(IvionParser::Their);
      setState(1280);
      match(IvionParser::Hand);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1282);
      player();
      setState(1283);
      match(IvionParser::Reveal);
      setState(1284);
      literalValue();
      setState(1285);
      match(IvionParser::Card);
      setState(1286);
      match(IvionParser::From);
      setState(1287);
      match(IvionParser::Their);
      setState(1288);
      match(IvionParser::Hand);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1290);
      player();
      setState(1291);
      match(IvionParser::Reveal);
      setState(1292);
      match(IvionParser::A);
      setState(1293);
      match(IvionParser::Card);
      setState(1294);
      match(IvionParser::From);
      setState(1295);
      match(IvionParser::Their);
      setState(1296);
      match(IvionParser::Hand);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1298);
      player();
      setState(1299);
      match(IvionParser::Reveals);
      setState(1300);
      match(IvionParser::A);
      setState(1301);
      match(IvionParser::Card);
      setState(1302);
      match(IvionParser::From);
      setState(1303);
      match(IvionParser::Their);
      setState(1304);
      match(IvionParser::Hand);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1306);
      player();
      setState(1307);
      match(IvionParser::Reveals);
      setState(1308);
      literalValue();
      setState(1309);
      match(IvionParser::Card);
      setState(1310);
      match(IvionParser::From);
      setState(1311);
      match(IvionParser::Their);
      setState(1312);
      match(IvionParser::Hand);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1314);
      player();
      setState(1315);
      match(IvionParser::Reveals);
      setState(1316);
      match(IvionParser::A);
      setState(1317);
      match(IvionParser::Card);
      setState(1318);
      match(IvionParser::From);
      setState(1319);
      match(IvionParser::Their);
      setState(1320);
      match(IvionParser::Hand);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1322);
      match(IvionParser::Reveal);
      setState(1323);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1324);
      match(IvionParser::Reveal);
      setState(1325);
      match(IvionParser::A);
      setState(1326);
      match(IvionParser::Card);
      setState(1327);
      match(IvionParser::From);
      setState(1328);
      match(IvionParser::Your);
      setState(1329);
      match(IvionParser::Hand);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1330);
      match(IvionParser::Reveals);
      setState(1331);
      match(IvionParser::A);
      setState(1332);
      match(IvionParser::Card);
      setState(1333);
      match(IvionParser::From);
      setState(1334);
      match(IvionParser::Their);
      setState(1335);
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

//----------------- DrawCardsContext ------------------------------------------------------------------

IvionParser::DrawCardsContext::DrawCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DrawCardsContext::Draw() {
  return getToken(IvionParser::Draw, 0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}

IvionParser::LiteralValueContext* IvionParser::DrawCardsContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Additional() {
  return getToken(IvionParser::Additional, 0);
}

IvionParser::PlayerContext* IvionParser::DrawCardsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::DrawCardsContext::getRuleIndex() const {
  return IvionParser::RuleDrawCards;
}


antlrcpp::Any IvionParser::DrawCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitDrawCards(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DrawCardsContext* IvionParser::drawCards() {
  DrawCardsContext *_localctx = _tracker.createInstance<DrawCardsContext>(_ctx, getState());
  enterRule(_localctx, 138, IvionParser::RuleDrawCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1364);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1338);
      match(IvionParser::Draw);
      setState(1339);
      match(IvionParser::A);
      setState(1340);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1341);
      match(IvionParser::Draw);
      setState(1342);
      literalValue();
      setState(1343);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1345);
      match(IvionParser::Draw);
      setState(1346);
      match(IvionParser::A);
      setState(1347);
      match(IvionParser::Additional);
      setState(1348);
      match(IvionParser::Card);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1349);
      player();
      setState(1350);
      match(IvionParser::Draw);
      setState(1351);
      literalValue();
      setState(1352);
      match(IvionParser::Card);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1354);
      player();
      setState(1355);
      match(IvionParser::Draw);
      setState(1356);
      literalValue();
      setState(1357);
      match(IvionParser::Card);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1359);
      player();
      setState(1360);
      match(IvionParser::Draw);
      setState(1361);
      match(IvionParser::A);
      setState(1362);
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

//----------------- RemoveControlContext ------------------------------------------------------------------

IvionParser::RemoveControlContext::RemoveControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::RemoveControlContext::Remove() {
  return getToken(IvionParser::Remove, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::Up() {
  return getToken(IvionParser::Up, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::LiteralValueContext* IvionParser::RemoveControlContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
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

tree::TerminalNode* IvionParser::RemoveControlContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::Affecting() {
  return getToken(IvionParser::Affecting, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::Instance() {
  return getToken(IvionParser::Instance, 0);
}


size_t IvionParser::RemoveControlContext::getRuleIndex() const {
  return IvionParser::RuleRemoveControl;
}


antlrcpp::Any IvionParser::RemoveControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitRemoveControl(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RemoveControlContext* IvionParser::removeControl() {
  RemoveControlContext *_localctx = _tracker.createInstance<RemoveControlContext>(_ctx, getState());
  enterRule(_localctx, 140, IvionParser::RuleRemoveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1388);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1366);
      match(IvionParser::Remove);
      setState(1367);
      match(IvionParser::Up);
      setState(1368);
      match(IvionParser::To);
      setState(1369);
      literalValue();
      setState(1370);
      match(IvionParser::Instances);
      setState(1371);
      match(IvionParser::Of);
      setState(1372);
      match(IvionParser::Control);
      setState(1373);
      match(IvionParser::From);
      setState(1374);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1376);
      match(IvionParser::Remove);
      setState(1377);
      match(IvionParser::All);
      setState(1378);
      match(IvionParser::Control);
      setState(1379);
      match(IvionParser::Affecting);
      setState(1380);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1381);
      match(IvionParser::Remove);
      setState(1382);
      match(IvionParser::A);
      setState(1383);
      match(IvionParser::Instance);
      setState(1384);
      match(IvionParser::Of);
      setState(1385);
      match(IvionParser::Control);
      setState(1386);
      match(IvionParser::From);
      setState(1387);
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

//----------------- HardcastEffectContext ------------------------------------------------------------------

IvionParser::HardcastEffectContext::HardcastEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::HardcastEffectContext::Hardcast() {
  return getToken(IvionParser::Hardcast, 0);
}


size_t IvionParser::HardcastEffectContext::getRuleIndex() const {
  return IvionParser::RuleHardcastEffect;
}


antlrcpp::Any IvionParser::HardcastEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitHardcastEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HardcastEffectContext* IvionParser::hardcastEffect() {
  HardcastEffectContext *_localctx = _tracker.createInstance<HardcastEffectContext>(_ctx, getState());
  enterRule(_localctx, 142, IvionParser::RuleHardcastEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1390);
    match(IvionParser::Hardcast);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SeekEffectContext ------------------------------------------------------------------

IvionParser::SeekEffectContext::SeekEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SeekEffectContext::Seek() {
  return getToken(IvionParser::Seek, 0);
}


size_t IvionParser::SeekEffectContext::getRuleIndex() const {
  return IvionParser::RuleSeekEffect;
}


antlrcpp::Any IvionParser::SeekEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSeekEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SeekEffectContext* IvionParser::seekEffect() {
  SeekEffectContext *_localctx = _tracker.createInstance<SeekEffectContext>(_ctx, getState());
  enterRule(_localctx, 144, IvionParser::RuleSeekEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1392);
    match(IvionParser::Seek);
   
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

tree::TerminalNode* IvionParser::MakeTerrainContext::Difficult() {
  return getToken(IvionParser::Difficult, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}


size_t IvionParser::MakeTerrainContext::getRuleIndex() const {
  return IvionParser::RuleMakeTerrain;
}


antlrcpp::Any IvionParser::MakeTerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitMakeTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::MakeTerrainContext* IvionParser::makeTerrain() {
  MakeTerrainContext *_localctx = _tracker.createInstance<MakeTerrainContext>(_ctx, getState());
  enterRule(_localctx, 146, IvionParser::RuleMakeTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1394);
    match(IvionParser::Make);
    setState(1395);
    tile();
    setState(1396);
    match(IvionParser::Difficult);
    setState(1397);
    match(IvionParser::Terrain);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RemoveTerrainContext ------------------------------------------------------------------

IvionParser::RemoveTerrainContext::RemoveTerrainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::RemoveTerrainContext::Remove() {
  return getToken(IvionParser::Remove, 0);
}

tree::TerminalNode* IvionParser::RemoveTerrainContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::RemoveTerrainContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::RemoveTerrainContext::Token() {
  return getToken(IvionParser::Token, 0);
}


size_t IvionParser::RemoveTerrainContext::getRuleIndex() const {
  return IvionParser::RuleRemoveTerrain;
}


antlrcpp::Any IvionParser::RemoveTerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitRemoveTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RemoveTerrainContext* IvionParser::removeTerrain() {
  RemoveTerrainContext *_localctx = _tracker.createInstance<RemoveTerrainContext>(_ctx, getState());
  enterRule(_localctx, 148, IvionParser::RuleRemoveTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1399);
    match(IvionParser::Remove);
    setState(1400);
    match(IvionParser::Target);
    setState(1401);
    match(IvionParser::Terrain);
    setState(1402);
    match(IvionParser::Token);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SpendResourcesContext ------------------------------------------------------------------

IvionParser::SpendResourcesContext::SpendResourcesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SpendResourcesContext::Spend() {
  return getToken(IvionParser::Spend, 0);
}

IvionParser::LiteralValueContext* IvionParser::SpendResourcesContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::SpendResourcesContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}


size_t IvionParser::SpendResourcesContext::getRuleIndex() const {
  return IvionParser::RuleSpendResources;
}


antlrcpp::Any IvionParser::SpendResourcesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSpendResources(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SpendResourcesContext* IvionParser::spendResources() {
  SpendResourcesContext *_localctx = _tracker.createInstance<SpendResourcesContext>(_ctx, getState());
  enterRule(_localctx, 150, IvionParser::RuleSpendResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1404);
    match(IvionParser::Spend);
    setState(1405);
    literalValue();
    setState(1406);
    match(IvionParser::Resource);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ScryEffectContext ------------------------------------------------------------------

IvionParser::ScryEffectContext::ScryEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ScryEffectContext::Look() {
  return getToken(IvionParser::Look, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::At() {
  return getToken(IvionParser::At, 0);
}

std::vector<tree::TerminalNode *> IvionParser::ScryEffectContext::The() {
  return getTokens(IvionParser::The);
}

tree::TerminalNode* IvionParser::ScryEffectContext::The(size_t i) {
  return getToken(IvionParser::The, i);
}

std::vector<tree::TerminalNode *> IvionParser::ScryEffectContext::Top() {
  return getTokens(IvionParser::Top);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Top(size_t i) {
  return getToken(IvionParser::Top, i);
}

IvionParser::LiteralValueContext* IvionParser::ScryEffectContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Deck() {
  return getToken(IvionParser::Deck, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::P() {
  return getToken(IvionParser::P, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Put() {
  return getToken(IvionParser::Put, 0);
}

std::vector<tree::TerminalNode *> IvionParser::ScryEffectContext::Any() {
  return getTokens(IvionParser::Any);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Any(size_t i) {
  return getToken(IvionParser::Any, i);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Number() {
  return getToken(IvionParser::Number, 0);
}

std::vector<tree::TerminalNode *> IvionParser::ScryEffectContext::On() {
  return getTokens(IvionParser::On);
}

tree::TerminalNode* IvionParser::ScryEffectContext::On(size_t i) {
  return getToken(IvionParser::On, i);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Bottom() {
  return getToken(IvionParser::Bottom, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::And() {
  return getToken(IvionParser::And, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Rest() {
  return getToken(IvionParser::Rest, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::ScryEffectContext::Order() {
  return getToken(IvionParser::Order, 0);
}


size_t IvionParser::ScryEffectContext::getRuleIndex() const {
  return IvionParser::RuleScryEffect;
}


antlrcpp::Any IvionParser::ScryEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitScryEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ScryEffectContext* IvionParser::scryEffect() {
  ScryEffectContext *_localctx = _tracker.createInstance<ScryEffectContext>(_ctx, getState());
  enterRule(_localctx, 152, IvionParser::RuleScryEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1408);
    match(IvionParser::Look);
    setState(1409);
    match(IvionParser::At);
    setState(1410);
    match(IvionParser::The);
    setState(1411);
    match(IvionParser::Top);
    setState(1412);
    literalValue();
    setState(1413);
    match(IvionParser::Card);
    setState(1414);
    match(IvionParser::Of);
    setState(1415);
    match(IvionParser::Your);
    setState(1416);
    match(IvionParser::Deck);
    setState(1417);
    match(IvionParser::P);
    setState(1418);
    match(IvionParser::Put);
    setState(1419);
    match(IvionParser::Any);
    setState(1420);
    match(IvionParser::Number);
    setState(1421);
    match(IvionParser::On);
    setState(1422);
    match(IvionParser::The);
    setState(1423);
    match(IvionParser::Bottom);
    setState(1424);
    match(IvionParser::And);
    setState(1425);
    match(IvionParser::The);
    setState(1426);
    match(IvionParser::Rest);
    setState(1427);
    match(IvionParser::On);
    setState(1428);
    match(IvionParser::Top);
    setState(1429);
    match(IvionParser::In);
    setState(1430);
    match(IvionParser::Any);
    setState(1431);
    match(IvionParser::Order);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OverrideFrenzyContext ------------------------------------------------------------------

IvionParser::OverrideFrenzyContext::OverrideFrenzyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Card() {
  return getToken(IvionParser::Card, 0);
}

std::vector<tree::TerminalNode *> IvionParser::OverrideFrenzyContext::Has() {
  return getTokens(IvionParser::Has);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Has(size_t i) {
  return getToken(IvionParser::Has, i);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Frenzy() {
  return getToken(IvionParser::Frenzy, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Even() {
  return getToken(IvionParser::Even, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::No() {
  return getToken(IvionParser::No, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Used() {
  return getToken(IvionParser::Used, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Their() {
  return getToken(IvionParser::Their, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Wind() {
  return getToken(IvionParser::Wind, 0);
}


size_t IvionParser::OverrideFrenzyContext::getRuleIndex() const {
  return IvionParser::RuleOverrideFrenzy;
}


antlrcpp::Any IvionParser::OverrideFrenzyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitOverrideFrenzy(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::OverrideFrenzyContext* IvionParser::overrideFrenzy() {
  OverrideFrenzyContext *_localctx = _tracker.createInstance<OverrideFrenzyContext>(_ctx, getState());
  enterRule(_localctx, 154, IvionParser::RuleOverrideFrenzy);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1433);
    match(IvionParser::That);
    setState(1434);
    match(IvionParser::Card);
    setState(1435);
    match(IvionParser::Has);
    setState(1436);
    match(IvionParser::Frenzy);
    setState(1437);
    match(IvionParser::Even);
    setState(1438);
    match(IvionParser::If);
    setState(1439);
    match(IvionParser::No);
    setState(1440);
    match(IvionParser::Player);
    setState(1441);
    match(IvionParser::Has);
    setState(1442);
    match(IvionParser::Used);
    setState(1443);
    match(IvionParser::Their);
    setState(1444);
    match(IvionParser::Second);
    setState(1445);
    match(IvionParser::Wind);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncreaseCardDurationContext ------------------------------------------------------------------

IvionParser::IncreaseCardDurationContext::IncreaseCardDurationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::Increase() {
  return getToken(IvionParser::Increase, 0);
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::Duration() {
  return getToken(IvionParser::Duration, 0);
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::Control() {
  return getToken(IvionParser::Control, 0);
}

tree::TerminalNode* IvionParser::IncreaseCardDurationContext::By() {
  return getToken(IvionParser::By, 0);
}

IvionParser::LiteralValueContext* IvionParser::IncreaseCardDurationContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}


size_t IvionParser::IncreaseCardDurationContext::getRuleIndex() const {
  return IvionParser::RuleIncreaseCardDuration;
}


antlrcpp::Any IvionParser::IncreaseCardDurationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIncreaseCardDuration(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IncreaseCardDurationContext* IvionParser::increaseCardDuration() {
  IncreaseCardDurationContext *_localctx = _tracker.createInstance<IncreaseCardDurationContext>(_ctx, getState());
  enterRule(_localctx, 156, IvionParser::RuleIncreaseCardDuration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1447);
    match(IvionParser::Increase);
    setState(1448);
    match(IvionParser::The);
    setState(1449);
    match(IvionParser::Duration);
    setState(1450);
    match(IvionParser::Of);
    setState(1451);
    match(IvionParser::A);
    setState(1452);
    match(IvionParser::Card);
    setState(1453);
    match(IvionParser::You);
    setState(1454);
    match(IvionParser::Control);
    setState(1455);
    match(IvionParser::By);
    setState(1456);
    literalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ResetUseOfCardContext ------------------------------------------------------------------

IvionParser::ResetUseOfCardContext::ResetUseOfCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ResetUseOfCardContext::Reset() {
  return getToken(IvionParser::Reset, 0);
}

tree::TerminalNode* IvionParser::ResetUseOfCardContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::ResetUseOfCardContext::Use() {
  return getToken(IvionParser::Use, 0);
}

tree::TerminalNode* IvionParser::ResetUseOfCardContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::ResetUseOfCardContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}


size_t IvionParser::ResetUseOfCardContext::getRuleIndex() const {
  return IvionParser::RuleResetUseOfCard;
}


antlrcpp::Any IvionParser::ResetUseOfCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitResetUseOfCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ResetUseOfCardContext* IvionParser::resetUseOfCard() {
  ResetUseOfCardContext *_localctx = _tracker.createInstance<ResetUseOfCardContext>(_ctx, getState());
  enterRule(_localctx, 158, IvionParser::RuleResetUseOfCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1458);
    match(IvionParser::Reset);
    setState(1459);
    match(IvionParser::The);
    setState(1460);
    match(IvionParser::Use);
    setState(1461);
    match(IvionParser::Of);
    setState(1462);
    match(IvionParser::CARD_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeroicContext ------------------------------------------------------------------

IvionParser::HeroicContext::HeroicContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::HeroicContext::Heroic() {
  return getToken(IvionParser::Heroic, 0);
}


size_t IvionParser::HeroicContext::getRuleIndex() const {
  return IvionParser::RuleHeroic;
}


antlrcpp::Any IvionParser::HeroicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitHeroic(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::HeroicContext* IvionParser::heroic() {
  HeroicContext *_localctx = _tracker.createInstance<HeroicContext>(_ctx, getState());
  enterRule(_localctx, 160, IvionParser::RuleHeroic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1464);
    match(IvionParser::Heroic);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OnlyPlayCertainCardsContext ------------------------------------------------------------------

IvionParser::OnlyPlayCertainCardsContext::OnlyPlayCertainCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::OnlyPlayCertainCardsContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Only() {
  return getToken(IvionParser::Only, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Play() {
  return getToken(IvionParser::Play, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Named() {
  return getToken(IvionParser::Named, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Has() {
  return getToken(IvionParser::Has, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Are() {
  return getToken(IvionParser::Are, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Uncontrolled() {
  return getToken(IvionParser::Uncontrolled, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::LiteralValueContext* IvionParser::OnlyPlayCertainCardsContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Taken() {
  return getToken(IvionParser::Taken, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::More() {
  return getToken(IvionParser::More, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Damage() {
  return getToken(IvionParser::Damage, 0);
}


size_t IvionParser::OnlyPlayCertainCardsContext::getRuleIndex() const {
  return IvionParser::RuleOnlyPlayCertainCards;
}


antlrcpp::Any IvionParser::OnlyPlayCertainCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitOnlyPlayCertainCards(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::OnlyPlayCertainCardsContext* IvionParser::onlyPlayCertainCards() {
  OnlyPlayCertainCardsContext *_localctx = _tracker.createInstance<OnlyPlayCertainCardsContext>(_ctx, getState());
  enterRule(_localctx, 162, IvionParser::RuleOnlyPlayCertainCards);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1540);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1466);
      hypotheticalPlayer();
      setState(1467);
      match(IvionParser::May);
      setState(1468);
      match(IvionParser::Only);
      setState(1469);
      match(IvionParser::Play);
      setState(1470);
      match(IvionParser::Card);
      setState(1471);
      match(IvionParser::Named);
      setState(1472);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1474);
      match(IvionParser::Only);
      setState(1475);
      match(IvionParser::Play);
      setState(1476);
      match(IvionParser::CARD_NAME);
      setState(1477);
      match(IvionParser::If);
      setState(1478);
      hypotheticalPlayer();
      setState(1479);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Have

      || _la == IvionParser::Has)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1480);
      match(IvionParser::Resolve);
      setState(1481);
      match(IvionParser::A);
      setState(1482);
      match(IvionParser::Attack);
      setState(1483);
      match(IvionParser::Card);
      setState(1484);
      match(IvionParser::This);
      setState(1485);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1487);
      match(IvionParser::Only);
      setState(1488);
      match(IvionParser::Play);
      setState(1489);
      match(IvionParser::CARD_NAME);
      setState(1490);
      match(IvionParser::If);
      setState(1491);
      hypotheticalPlayer();
      setState(1492);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Is || _la == IvionParser::Are)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1493);
      match(IvionParser::Controlled);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1495);
      match(IvionParser::Only);
      setState(1496);
      match(IvionParser::Play);
      setState(1497);
      match(IvionParser::CARD_NAME);
      setState(1498);
      match(IvionParser::If);
      setState(1499);
      hypotheticalPlayer();
      setState(1500);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Is || _la == IvionParser::Are)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1501);
      match(IvionParser::Uncontrolled);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1503);
      match(IvionParser::Only);
      setState(1504);
      match(IvionParser::Play);
      setState(1505);
      match(IvionParser::CARD_NAME);
      setState(1506);
      match(IvionParser::If);
      setState(1507);
      hypotheticalPlayer();
      setState(1508);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Is || _la == IvionParser::Are)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1509);
      match(IvionParser::Near);
      setState(1510);
      match(IvionParser::Terrain);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1512);
      match(IvionParser::Only);
      setState(1513);
      match(IvionParser::Play);
      setState(1514);
      match(IvionParser::CARD_NAME);
      setState(1515);
      match(IvionParser::If);
      setState(1516);
      hypotheticalPlayer();
      setState(1517);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Have

      || _la == IvionParser::Has)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1518);
      match(IvionParser::At);
      setState(1519);
      match(IvionParser::Least);
      setState(1520);
      literalValue();
      setState(1521);
      match(IvionParser::Card);
      setState(1522);
      match(IvionParser::In);
      setState(1523);
      match(IvionParser::Your);
      setState(1524);
      match(IvionParser::Discard);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1526);
      match(IvionParser::Only);
      setState(1527);
      match(IvionParser::Play);
      setState(1528);
      match(IvionParser::CARD_NAME);
      setState(1529);
      match(IvionParser::If);
      setState(1530);
      hypotheticalPlayer();
      setState(1531);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Have

      || _la == IvionParser::Has)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(1532);
      match(IvionParser::Taken);
      setState(1533);
      literalValue();
      setState(1534);
      match(IvionParser::Or);
      setState(1535);
      match(IvionParser::More);
      setState(1536);
      match(IvionParser::Damage);
      setState(1537);
      match(IvionParser::This);
      setState(1538);
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

//----------------- CostReductionContext ------------------------------------------------------------------

IvionParser::CostReductionContext::CostReductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalCardContext* IvionParser::CostReductionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::CostReductionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Play() {
  return getToken(IvionParser::Play, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Cost() {
  return getToken(IvionParser::Cost, 0);
}

IvionParser::LiteralValueContext* IvionParser::CostReductionContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::During() {
  return getToken(IvionParser::During, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::CostReductionContext::getRuleIndex() const {
  return IvionParser::RuleCostReduction;
}


antlrcpp::Any IvionParser::CostReductionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCostReduction(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CostReductionContext* IvionParser::costReduction() {
  CostReductionContext *_localctx = _tracker.createInstance<CostReductionContext>(_ctx, getState());
  enterRule(_localctx, 164, IvionParser::RuleCostReduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1564);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1542);
      hypotheticalCard();
      setState(1543);
      hypotheticalPlayer();
      setState(1544);
      match(IvionParser::Play);
      setState(1545);
      match(IvionParser::Cost);
      setState(1546);
      literalValue();
      setState(1547);
      match(IvionParser::Less);
      setState(1548);
      match(IvionParser::Resource);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1550);
      match(IvionParser::The);
      setState(1551);
      match(IvionParser::Second);
      setState(1552);
      match(IvionParser::Attack);
      setState(1553);
      match(IvionParser::Card);
      setState(1554);
      hypotheticalPlayer();
      setState(1555);
      match(IvionParser::Play);
      setState(1556);
      match(IvionParser::During);
      setState(1557);
      match(IvionParser::Your);
      setState(1558);
      match(IvionParser::Turn);
      setState(1559);
      match(IvionParser::Cost);
      setState(1560);
      literalValue();
      setState(1561);
      match(IvionParser::Less);
      setState(1562);
      match(IvionParser::Resource);
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

//----------------- RangeSetContext ------------------------------------------------------------------

IvionParser::RangeSetContext::RangeSetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::RangeSetContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::RangeSetContext::Range() {
  return getToken(IvionParser::Range, 0);
}

tree::TerminalNode* IvionParser::RangeSetContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::RangeSetContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::RangeSetContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::RangeSetContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::RangeSetContext::Is() {
  return getToken(IvionParser::Is, 0);
}

IvionParser::LiteralValueContext* IvionParser::RangeSetContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}


size_t IvionParser::RangeSetContext::getRuleIndex() const {
  return IvionParser::RuleRangeSet;
}


antlrcpp::Any IvionParser::RangeSetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitRangeSet(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RangeSetContext* IvionParser::rangeSet() {
  RangeSetContext *_localctx = _tracker.createInstance<RangeSetContext>(_ctx, getState());
  enterRule(_localctx, 166, IvionParser::RuleRangeSet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1566);
    match(IvionParser::The);
    setState(1567);
    match(IvionParser::Range);
    setState(1568);
    match(IvionParser::Of);
    setState(1569);
    match(IvionParser::Your);
    setState(1570);
    match(IvionParser::Attack);
    setState(1571);
    match(IvionParser::Card);
    setState(1572);
    match(IvionParser::Is);
    setState(1573);
    literalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CantPlayCardsContext ------------------------------------------------------------------

IvionParser::CantPlayCardsContext::CantPlayCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::CantPlayCardsContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::CantPlayCardsContext::Cant() {
  return getToken(IvionParser::Cant, 0);
}

tree::TerminalNode* IvionParser::CantPlayCardsContext::Play() {
  return getToken(IvionParser::Play, 0);
}

tree::TerminalNode* IvionParser::CantPlayCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}


size_t IvionParser::CantPlayCardsContext::getRuleIndex() const {
  return IvionParser::RuleCantPlayCards;
}


antlrcpp::Any IvionParser::CantPlayCardsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCantPlayCards(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CantPlayCardsContext* IvionParser::cantPlayCards() {
  CantPlayCardsContext *_localctx = _tracker.createInstance<CantPlayCardsContext>(_ctx, getState());
  enterRule(_localctx, 168, IvionParser::RuleCantPlayCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1575);
    hypotheticalPlayer();
    setState(1576);
    match(IvionParser::Cant);
    setState(1577);
    match(IvionParser::Play);
    setState(1578);
    match(IvionParser::Card);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerCantBeTargetedContext ------------------------------------------------------------------

IvionParser::PlayerCantBeTargetedContext::PlayerCantBeTargetedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerCantBeTargetedContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerCantBeTargetedContext::Cant() {
  return getToken(IvionParser::Cant, 0);
}

tree::TerminalNode* IvionParser::PlayerCantBeTargetedContext::Be() {
  return getToken(IvionParser::Be, 0);
}

tree::TerminalNode* IvionParser::PlayerCantBeTargetedContext::Targeted() {
  return getToken(IvionParser::Targeted, 0);
}

tree::TerminalNode* IvionParser::PlayerCantBeTargetedContext::By() {
  return getToken(IvionParser::By, 0);
}

tree::TerminalNode* IvionParser::PlayerCantBeTargetedContext::Enemies() {
  return getToken(IvionParser::Enemies, 0);
}

tree::TerminalNode* IvionParser::PlayerCantBeTargetedContext::Card() {
  return getToken(IvionParser::Card, 0);
}


size_t IvionParser::PlayerCantBeTargetedContext::getRuleIndex() const {
  return IvionParser::RulePlayerCantBeTargeted;
}


antlrcpp::Any IvionParser::PlayerCantBeTargetedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerCantBeTargeted(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerCantBeTargetedContext* IvionParser::playerCantBeTargeted() {
  PlayerCantBeTargetedContext *_localctx = _tracker.createInstance<PlayerCantBeTargetedContext>(_ctx, getState());
  enterRule(_localctx, 170, IvionParser::RulePlayerCantBeTargeted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1594);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1580);
      hypotheticalPlayer();
      setState(1581);
      match(IvionParser::Cant);
      setState(1582);
      match(IvionParser::Be);
      setState(1583);
      match(IvionParser::Targeted);
      setState(1584);
      match(IvionParser::By);
      setState(1585);
      match(IvionParser::Enemies);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1587);
      hypotheticalPlayer();
      setState(1588);
      match(IvionParser::Cant);
      setState(1589);
      match(IvionParser::Be);
      setState(1590);
      match(IvionParser::Targeted);
      setState(1591);
      match(IvionParser::By);
      setState(1592);
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

//----------------- IncreasedHandSizeContext ------------------------------------------------------------------

IvionParser::IncreasedHandSizeContext::IncreasedHandSizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IncreasedHandSizeContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::IncreasedHandSizeContext::Maximum() {
  return getToken(IvionParser::Maximum, 0);
}

tree::TerminalNode* IvionParser::IncreasedHandSizeContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}

tree::TerminalNode* IvionParser::IncreasedHandSizeContext::Size() {
  return getToken(IvionParser::Size, 0);
}

tree::TerminalNode* IvionParser::IncreasedHandSizeContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::IncreasedHandSizeContext::Increased() {
  return getToken(IvionParser::Increased, 0);
}

tree::TerminalNode* IvionParser::IncreasedHandSizeContext::By() {
  return getToken(IvionParser::By, 0);
}

IvionParser::LiteralValueContext* IvionParser::IncreasedHandSizeContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}


size_t IvionParser::IncreasedHandSizeContext::getRuleIndex() const {
  return IvionParser::RuleIncreasedHandSize;
}


antlrcpp::Any IvionParser::IncreasedHandSizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIncreasedHandSize(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IncreasedHandSizeContext* IvionParser::increasedHandSize() {
  IncreasedHandSizeContext *_localctx = _tracker.createInstance<IncreasedHandSizeContext>(_ctx, getState());
  enterRule(_localctx, 172, IvionParser::RuleIncreasedHandSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1596);
    match(IvionParser::Your);
    setState(1597);
    match(IvionParser::Maximum);
    setState(1598);
    match(IvionParser::Hand);
    setState(1599);
    match(IvionParser::Size);
    setState(1600);
    match(IvionParser::Is);
    setState(1601);
    match(IvionParser::Increased);
    setState(1602);
    match(IvionParser::By);
    setState(1603);
    literalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncreasedMaxHPContext ------------------------------------------------------------------

IvionParser::IncreasedMaxHPContext::IncreasedMaxHPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IncreasedMaxHPContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::IncreasedMaxHPContext::Maximum() {
  return getToken(IvionParser::Maximum, 0);
}

tree::TerminalNode* IvionParser::IncreasedMaxHPContext::HP() {
  return getToken(IvionParser::HP, 0);
}

tree::TerminalNode* IvionParser::IncreasedMaxHPContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::IncreasedMaxHPContext::Increased() {
  return getToken(IvionParser::Increased, 0);
}

tree::TerminalNode* IvionParser::IncreasedMaxHPContext::By() {
  return getToken(IvionParser::By, 0);
}

IvionParser::LiteralValueContext* IvionParser::IncreasedMaxHPContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}


size_t IvionParser::IncreasedMaxHPContext::getRuleIndex() const {
  return IvionParser::RuleIncreasedMaxHP;
}


antlrcpp::Any IvionParser::IncreasedMaxHPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIncreasedMaxHP(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IncreasedMaxHPContext* IvionParser::increasedMaxHP() {
  IncreasedMaxHPContext *_localctx = _tracker.createInstance<IncreasedMaxHPContext>(_ctx, getState());
  enterRule(_localctx, 174, IvionParser::RuleIncreasedMaxHP);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1605);
    match(IvionParser::Your);
    setState(1606);
    match(IvionParser::Maximum);
    setState(1607);
    match(IvionParser::HP);
    setState(1608);
    match(IvionParser::Is);
    setState(1609);
    match(IvionParser::Increased);
    setState(1610);
    match(IvionParser::By);
    setState(1611);
    literalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplacesSecondWindContext ------------------------------------------------------------------

IvionParser::ReplacesSecondWindContext::ReplacesSecondWindContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ReplacesSecondWindContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::ReplacesSecondWindContext::Replaces() {
  return getToken(IvionParser::Replaces, 0);
}

tree::TerminalNode* IvionParser::ReplacesSecondWindContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::ReplacesSecondWindContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::ReplacesSecondWindContext::Wind() {
  return getToken(IvionParser::Wind, 0);
}


size_t IvionParser::ReplacesSecondWindContext::getRuleIndex() const {
  return IvionParser::RuleReplacesSecondWind;
}


antlrcpp::Any IvionParser::ReplacesSecondWindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitReplacesSecondWind(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ReplacesSecondWindContext* IvionParser::replacesSecondWind() {
  ReplacesSecondWindContext *_localctx = _tracker.createInstance<ReplacesSecondWindContext>(_ctx, getState());
  enterRule(_localctx, 176, IvionParser::RuleReplacesSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1613);
    match(IvionParser::CARD_NAME);
    setState(1614);
    match(IvionParser::Replaces);
    setState(1615);
    match(IvionParser::Your);
    setState(1616);
    match(IvionParser::Second);
    setState(1617);
    match(IvionParser::Wind);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoInitiativeContext ------------------------------------------------------------------

IvionParser::NoInitiativeContext::NoInitiativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::NoInitiativeContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::Dont() {
  return getToken(IvionParser::Dont, 0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::INITIATIVE() {
  return getToken(IvionParser::INITIATIVE, 0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::Start() {
  return getToken(IvionParser::Start, 0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::NoInitiativeContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::NoInitiativeContext::getRuleIndex() const {
  return IvionParser::RuleNoInitiative;
}


antlrcpp::Any IvionParser::NoInitiativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitNoInitiative(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::NoInitiativeContext* IvionParser::noInitiative() {
  NoInitiativeContext *_localctx = _tracker.createInstance<NoInitiativeContext>(_ctx, getState());
  enterRule(_localctx, 178, IvionParser::RuleNoInitiative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1619);
    hypotheticalPlayer();
    setState(1620);
    match(IvionParser::Dont);
    setState(1621);
    match(IvionParser::Gain);
    setState(1622);
    match(IvionParser::INITIATIVE);
    setState(1623);
    match(IvionParser::At);
    setState(1624);
    match(IvionParser::The);
    setState(1625);
    match(IvionParser::Start);
    setState(1626);
    match(IvionParser::Of);
    setState(1627);
    match(IvionParser::Your);
    setState(1628);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DrawRangeContext ------------------------------------------------------------------

IvionParser::DrawRangeContext::DrawRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DrawRangeContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::DrawRangeContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

std::vector<tree::TerminalNode *> IvionParser::DrawRangeContext::Card() {
  return getTokens(IvionParser::Card);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Card(size_t i) {
  return getToken(IvionParser::Card, i);
}

std::vector<tree::TerminalNode *> IvionParser::DrawRangeContext::C() {
  return getTokens(IvionParser::C);
}

tree::TerminalNode* IvionParser::DrawRangeContext::C(size_t i) {
  return getToken(IvionParser::C, i);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Except() {
  return getToken(IvionParser::Except, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Travel() {
  return getToken(IvionParser::Travel, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Also() {
  return getToken(IvionParser::Also, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Draw() {
  return getToken(IvionParser::Draw, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Range() {
  return getToken(IvionParser::Range, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

IvionParser::HypotheticalTileContext* IvionParser::DrawRangeContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}


size_t IvionParser::DrawRangeContext::getRuleIndex() const {
  return IvionParser::RuleDrawRange;
}


antlrcpp::Any IvionParser::DrawRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitDrawRange(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DrawRangeContext* IvionParser::drawRange() {
  DrawRangeContext *_localctx = _tracker.createInstance<DrawRangeContext>(_ctx, getState());
  enterRule(_localctx, 180, IvionParser::RuleDrawRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1668);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1630);
      match(IvionParser::All);
      setState(1631);
      match(IvionParser::Of);
      setState(1632);
      hypotheticalPlayer();
      setState(1633);
      match(IvionParser::Card);
      setState(1634);
      match(IvionParser::C);
      setState(1635);
      match(IvionParser::Except);
      setState(1636);
      match(IvionParser::Travel);
      setState(1637);
      match(IvionParser::Card);
      setState(1638);
      match(IvionParser::That);
      setState(1639);
      match(IvionParser::Target);
      setState(1640);
      match(IvionParser::A);
      setState(1641);
      match(IvionParser::Tile);
      setState(1642);
      match(IvionParser::C);
      setState(1643);
      match(IvionParser::Also);
      setState(1644);
      match(IvionParser::Draw);
      setState(1645);
      match(IvionParser::Range);
      setState(1646);
      match(IvionParser::From);
      setState(1647);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1649);
      match(IvionParser::All);
      setState(1650);
      match(IvionParser::Of);
      setState(1651);
      hypotheticalPlayer();
      setState(1652);
      match(IvionParser::Card);
      setState(1653);
      match(IvionParser::C);
      setState(1654);
      match(IvionParser::Except);
      setState(1655);
      match(IvionParser::Travel);
      setState(1656);
      match(IvionParser::Card);
      setState(1657);
      match(IvionParser::That);
      setState(1658);
      match(IvionParser::Target);
      setState(1659);
      match(IvionParser::A);
      setState(1660);
      match(IvionParser::Tile);
      setState(1661);
      match(IvionParser::C);
      setState(1662);
      match(IvionParser::Also);
      setState(1663);
      match(IvionParser::Draw);
      setState(1664);
      match(IvionParser::Range);
      setState(1665);
      match(IvionParser::From);
      setState(1666);
      hypotheticalTile();
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

//----------------- GainRangeContext ------------------------------------------------------------------

IvionParser::GainRangeContext::GainRangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GainRangeContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::GainRangeContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::GainRangeContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

std::vector<tree::TerminalNode *> IvionParser::GainRangeContext::Card() {
  return getTokens(IvionParser::Card);
}

tree::TerminalNode* IvionParser::GainRangeContext::Card(size_t i) {
  return getToken(IvionParser::Card, i);
}

std::vector<tree::TerminalNode *> IvionParser::GainRangeContext::C() {
  return getTokens(IvionParser::C);
}

tree::TerminalNode* IvionParser::GainRangeContext::C(size_t i) {
  return getToken(IvionParser::C, i);
}

tree::TerminalNode* IvionParser::GainRangeContext::Except() {
  return getToken(IvionParser::Except, 0);
}

tree::TerminalNode* IvionParser::GainRangeContext::Travel() {
  return getToken(IvionParser::Travel, 0);
}

tree::TerminalNode* IvionParser::GainRangeContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::GainRangeContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::GainRangeContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::GainRangeContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::GainRangeContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

IvionParser::LiteralValueContext* IvionParser::GainRangeContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::GainRangeContext::Range() {
  return getToken(IvionParser::Range, 0);
}


size_t IvionParser::GainRangeContext::getRuleIndex() const {
  return IvionParser::RuleGainRange;
}


antlrcpp::Any IvionParser::GainRangeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGainRange(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GainRangeContext* IvionParser::gainRange() {
  GainRangeContext *_localctx = _tracker.createInstance<GainRangeContext>(_ctx, getState());
  enterRule(_localctx, 182, IvionParser::RuleGainRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1670);
    match(IvionParser::All);
    setState(1671);
    match(IvionParser::Of);
    setState(1672);
    hypotheticalPlayer();
    setState(1673);
    match(IvionParser::Card);
    setState(1674);
    match(IvionParser::C);
    setState(1675);
    match(IvionParser::Except);
    setState(1676);
    match(IvionParser::Travel);
    setState(1677);
    match(IvionParser::Card);
    setState(1678);
    match(IvionParser::That);
    setState(1679);
    match(IvionParser::Target);
    setState(1680);
    match(IvionParser::A);
    setState(1681);
    match(IvionParser::Tile);
    setState(1682);
    match(IvionParser::C);
    setState(1683);
    match(IvionParser::Gain);
    setState(1684);
    literalValue();
    setState(1685);
    match(IvionParser::Range);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LimitTargetsContext ------------------------------------------------------------------

IvionParser::LimitTargetsContext::LimitTargetsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::LimitTargetsContext::Only() {
  return getToken(IvionParser::Only, 0);
}

tree::TerminalNode* IvionParser::LimitTargetsContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::LimitTargetsContext::Other() {
  return getToken(IvionParser::Other, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::LimitTargetsContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

IvionParser::ConditionContext* IvionParser::LimitTargetsContext::condition() {
  return getRuleContext<IvionParser::ConditionContext>(0);
}


size_t IvionParser::LimitTargetsContext::getRuleIndex() const {
  return IvionParser::RuleLimitTargets;
}


antlrcpp::Any IvionParser::LimitTargetsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitLimitTargets(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::LimitTargetsContext* IvionParser::limitTargets() {
  LimitTargetsContext *_localctx = _tracker.createInstance<LimitTargetsContext>(_ctx, getState());
  enterRule(_localctx, 184, IvionParser::RuleLimitTargets);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1687);
    match(IvionParser::Only);
    setState(1688);
    match(IvionParser::Target);
    setState(1689);
    match(IvionParser::Other);
    setState(1690);
    hypotheticalPlayer();
    setState(1691);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PassiveEffectContext ------------------------------------------------------------------

IvionParser::PassiveEffectContext::PassiveEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerCantBeTargetedContext* IvionParser::PassiveEffectContext::playerCantBeTargeted() {
  return getRuleContext<IvionParser::PlayerCantBeTargetedContext>(0);
}

IvionParser::CantPlayCardsContext* IvionParser::PassiveEffectContext::cantPlayCards() {
  return getRuleContext<IvionParser::CantPlayCardsContext>(0);
}

IvionParser::RangeSetContext* IvionParser::PassiveEffectContext::rangeSet() {
  return getRuleContext<IvionParser::RangeSetContext>(0);
}

IvionParser::CostReductionContext* IvionParser::PassiveEffectContext::costReduction() {
  return getRuleContext<IvionParser::CostReductionContext>(0);
}

IvionParser::OnlyPlayCertainCardsContext* IvionParser::PassiveEffectContext::onlyPlayCertainCards() {
  return getRuleContext<IvionParser::OnlyPlayCertainCardsContext>(0);
}

IvionParser::IncreasedHandSizeContext* IvionParser::PassiveEffectContext::increasedHandSize() {
  return getRuleContext<IvionParser::IncreasedHandSizeContext>(0);
}

IvionParser::IncreasedMaxHPContext* IvionParser::PassiveEffectContext::increasedMaxHP() {
  return getRuleContext<IvionParser::IncreasedMaxHPContext>(0);
}

IvionParser::ReplacesSecondWindContext* IvionParser::PassiveEffectContext::replacesSecondWind() {
  return getRuleContext<IvionParser::ReplacesSecondWindContext>(0);
}

IvionParser::NoInitiativeContext* IvionParser::PassiveEffectContext::noInitiative() {
  return getRuleContext<IvionParser::NoInitiativeContext>(0);
}

IvionParser::DrawRangeContext* IvionParser::PassiveEffectContext::drawRange() {
  return getRuleContext<IvionParser::DrawRangeContext>(0);
}

IvionParser::GainRangeContext* IvionParser::PassiveEffectContext::gainRange() {
  return getRuleContext<IvionParser::GainRangeContext>(0);
}

IvionParser::LimitTargetsContext* IvionParser::PassiveEffectContext::limitTargets() {
  return getRuleContext<IvionParser::LimitTargetsContext>(0);
}


size_t IvionParser::PassiveEffectContext::getRuleIndex() const {
  return IvionParser::RulePassiveEffect;
}


antlrcpp::Any IvionParser::PassiveEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPassiveEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PassiveEffectContext* IvionParser::passiveEffect() {
  PassiveEffectContext *_localctx = _tracker.createInstance<PassiveEffectContext>(_ctx, getState());
  enterRule(_localctx, 186, IvionParser::RulePassiveEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1705);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1693);
      playerCantBeTargeted();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1694);
      cantPlayCards();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1695);
      rangeSet();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1696);
      costReduction();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1697);
      onlyPlayCertainCards();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1698);
      increasedHandSize();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1699);
      increasedMaxHP();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1700);
      replacesSecondWind();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1701);
      noInitiative();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1702);
      drawRange();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1703);
      gainRange();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1704);
      limitTargets();
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

//----------------- DurationEffectContext ------------------------------------------------------------------

IvionParser::DurationEffectContext::DurationEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DurationEffectContext::Duration() {
  return getToken(IvionParser::Duration, 0);
}


size_t IvionParser::DurationEffectContext::getRuleIndex() const {
  return IvionParser::RuleDurationEffect;
}


antlrcpp::Any IvionParser::DurationEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitDurationEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::DurationEffectContext* IvionParser::durationEffect() {
  DurationEffectContext *_localctx = _tracker.createInstance<DurationEffectContext>(_ctx, getState());
  enterRule(_localctx, 188, IvionParser::RuleDurationEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1707);
    match(IvionParser::Duration);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartOfPlayerTurnContext ------------------------------------------------------------------

IvionParser::StartOfPlayerTurnContext::StartOfPlayerTurnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::StartOfPlayerTurnContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::StartOfPlayerTurnContext::Start() {
  return getToken(IvionParser::Start, 0);
}

tree::TerminalNode* IvionParser::StartOfPlayerTurnContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::StartOfPlayerTurnContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::StartOfPlayerTurnContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::StartOfPlayerTurnContext::getRuleIndex() const {
  return IvionParser::RuleStartOfPlayerTurn;
}


antlrcpp::Any IvionParser::StartOfPlayerTurnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitStartOfPlayerTurn(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::StartOfPlayerTurnContext* IvionParser::startOfPlayerTurn() {
  StartOfPlayerTurnContext *_localctx = _tracker.createInstance<StartOfPlayerTurnContext>(_ctx, getState());
  enterRule(_localctx, 190, IvionParser::RuleStartOfPlayerTurn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1721);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1709);
      match(IvionParser::The);
      setState(1710);
      match(IvionParser::Start);
      setState(1711);
      match(IvionParser::Of);
      setState(1712);
      hypotheticalPlayer();
      setState(1713);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1715);
      match(IvionParser::The);
      setState(1716);
      match(IvionParser::Start);
      setState(1717);
      match(IvionParser::Of);
      setState(1718);
      hypotheticalPlayer();
      setState(1719);
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

//----------------- EndOfPlayerTurnTriggerContext ------------------------------------------------------------------

IvionParser::EndOfPlayerTurnTriggerContext::EndOfPlayerTurnTriggerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::EndOfPlayerTurnTriggerContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::EndOfPlayerTurnTriggerContext::End() {
  return getToken(IvionParser::End, 0);
}

tree::TerminalNode* IvionParser::EndOfPlayerTurnTriggerContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::EndOfPlayerTurnTriggerContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::EndOfPlayerTurnTriggerContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::EndOfPlayerTurnTriggerContext::getRuleIndex() const {
  return IvionParser::RuleEndOfPlayerTurnTrigger;
}


antlrcpp::Any IvionParser::EndOfPlayerTurnTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitEndOfPlayerTurnTrigger(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EndOfPlayerTurnTriggerContext* IvionParser::endOfPlayerTurnTrigger() {
  EndOfPlayerTurnTriggerContext *_localctx = _tracker.createInstance<EndOfPlayerTurnTriggerContext>(_ctx, getState());
  enterRule(_localctx, 192, IvionParser::RuleEndOfPlayerTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1723);
    match(IvionParser::The);
    setState(1724);
    match(IvionParser::End);
    setState(1725);
    match(IvionParser::Of);
    setState(1726);
    hypotheticalPlayer();
    setState(1727);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartOfPlayerNextTurnContext ------------------------------------------------------------------

IvionParser::StartOfPlayerNextTurnContext::StartOfPlayerNextTurnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::StartOfPlayerNextTurnContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::StartOfPlayerNextTurnContext::Start() {
  return getToken(IvionParser::Start, 0);
}

tree::TerminalNode* IvionParser::StartOfPlayerNextTurnContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::StartOfPlayerNextTurnContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::StartOfPlayerNextTurnContext::Next() {
  return getToken(IvionParser::Next, 0);
}

tree::TerminalNode* IvionParser::StartOfPlayerNextTurnContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::StartOfPlayerNextTurnContext::getRuleIndex() const {
  return IvionParser::RuleStartOfPlayerNextTurn;
}


antlrcpp::Any IvionParser::StartOfPlayerNextTurnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitStartOfPlayerNextTurn(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::StartOfPlayerNextTurnContext* IvionParser::startOfPlayerNextTurn() {
  StartOfPlayerNextTurnContext *_localctx = _tracker.createInstance<StartOfPlayerNextTurnContext>(_ctx, getState());
  enterRule(_localctx, 194, IvionParser::RuleStartOfPlayerNextTurn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1729);
    match(IvionParser::The);
    setState(1730);
    match(IvionParser::Start);
    setState(1731);
    match(IvionParser::Of);
    setState(1732);
    hypotheticalPlayer();
    setState(1733);
    match(IvionParser::Next);
    setState(1734);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndOfTurnTriggerContext ------------------------------------------------------------------

IvionParser::EndOfTurnTriggerContext::EndOfTurnTriggerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> IvionParser::EndOfTurnTriggerContext::The() {
  return getTokens(IvionParser::The);
}

tree::TerminalNode* IvionParser::EndOfTurnTriggerContext::The(size_t i) {
  return getToken(IvionParser::The, i);
}

tree::TerminalNode* IvionParser::EndOfTurnTriggerContext::End() {
  return getToken(IvionParser::End, 0);
}

tree::TerminalNode* IvionParser::EndOfTurnTriggerContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::EndOfTurnTriggerContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::EndOfTurnTriggerContext::getRuleIndex() const {
  return IvionParser::RuleEndOfTurnTrigger;
}


antlrcpp::Any IvionParser::EndOfTurnTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitEndOfTurnTrigger(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EndOfTurnTriggerContext* IvionParser::endOfTurnTrigger() {
  EndOfTurnTriggerContext *_localctx = _tracker.createInstance<EndOfTurnTriggerContext>(_ctx, getState());
  enterRule(_localctx, 196, IvionParser::RuleEndOfTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1748);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1736);
      match(IvionParser::The);
      setState(1737);
      match(IvionParser::End);
      setState(1738);
      match(IvionParser::Of);
      setState(1739);
      match(IvionParser::The);
      setState(1740);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1741);
      match(IvionParser::The);
      setState(1742);
      match(IvionParser::End);
      setState(1743);
      match(IvionParser::Of);
      setState(1744);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1745);
      match(IvionParser::End);
      setState(1746);
      match(IvionParser::Of);
      setState(1747);
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

//----------------- TurnTriggerContext ------------------------------------------------------------------

IvionParser::TurnTriggerContext::TurnTriggerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::StartOfPlayerTurnContext* IvionParser::TurnTriggerContext::startOfPlayerTurn() {
  return getRuleContext<IvionParser::StartOfPlayerTurnContext>(0);
}

IvionParser::EndOfPlayerTurnTriggerContext* IvionParser::TurnTriggerContext::endOfPlayerTurnTrigger() {
  return getRuleContext<IvionParser::EndOfPlayerTurnTriggerContext>(0);
}

IvionParser::StartOfPlayerNextTurnContext* IvionParser::TurnTriggerContext::startOfPlayerNextTurn() {
  return getRuleContext<IvionParser::StartOfPlayerNextTurnContext>(0);
}

IvionParser::EndOfTurnTriggerContext* IvionParser::TurnTriggerContext::endOfTurnTrigger() {
  return getRuleContext<IvionParser::EndOfTurnTriggerContext>(0);
}


size_t IvionParser::TurnTriggerContext::getRuleIndex() const {
  return IvionParser::RuleTurnTrigger;
}


antlrcpp::Any IvionParser::TurnTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTurnTrigger(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TurnTriggerContext* IvionParser::turnTrigger() {
  TurnTriggerContext *_localctx = _tracker.createInstance<TurnTriggerContext>(_ctx, getState());
  enterRule(_localctx, 198, IvionParser::RuleTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1754);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1750);
      startOfPlayerTurn();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1751);
      endOfPlayerTurnTrigger();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1752);
      startOfPlayerNextTurn();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1753);
      endOfTurnTrigger();
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

//----------------- GameStartTriggerContext ------------------------------------------------------------------

IvionParser::GameStartTriggerContext::GameStartTriggerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GameStartTriggerContext::At() {
  return getToken(IvionParser::At, 0);
}

std::vector<tree::TerminalNode *> IvionParser::GameStartTriggerContext::The() {
  return getTokens(IvionParser::The);
}

tree::TerminalNode* IvionParser::GameStartTriggerContext::The(size_t i) {
  return getToken(IvionParser::The, i);
}

tree::TerminalNode* IvionParser::GameStartTriggerContext::Start() {
  return getToken(IvionParser::Start, 0);
}

tree::TerminalNode* IvionParser::GameStartTriggerContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::GameStartTriggerContext::Game() {
  return getToken(IvionParser::Game, 0);
}


size_t IvionParser::GameStartTriggerContext::getRuleIndex() const {
  return IvionParser::RuleGameStartTrigger;
}


antlrcpp::Any IvionParser::GameStartTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGameStartTrigger(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GameStartTriggerContext* IvionParser::gameStartTrigger() {
  GameStartTriggerContext *_localctx = _tracker.createInstance<GameStartTriggerContext>(_ctx, getState());
  enterRule(_localctx, 200, IvionParser::RuleGameStartTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1756);
    match(IvionParser::At);
    setState(1757);
    match(IvionParser::The);
    setState(1758);
    match(IvionParser::Start);
    setState(1759);
    match(IvionParser::Of);
    setState(1760);
    match(IvionParser::The);
    setState(1761);
    match(IvionParser::Game);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EffectPostfixContext ------------------------------------------------------------------

IvionParser::EffectPostfixContext::EffectPostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::EffectPostfixContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::EffectPostfixContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::EffectPostfixContext::First() {
  return getToken(IvionParser::First, 0);
}

tree::TerminalNode* IvionParser::EffectPostfixContext::Time() {
  return getToken(IvionParser::Time, 0);
}

tree::TerminalNode* IvionParser::EffectPostfixContext::During() {
  return getToken(IvionParser::During, 0);
}

IvionParser::PlayerRefContext* IvionParser::EffectPostfixContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::EffectPostfixContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::EffectPostfixContext::Each() {
  return getToken(IvionParser::Each, 0);
}


size_t IvionParser::EffectPostfixContext::getRuleIndex() const {
  return IvionParser::RuleEffectPostfix;
}


antlrcpp::Any IvionParser::EffectPostfixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitEffectPostfix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EffectPostfixContext* IvionParser::effectPostfix() {
  EffectPostfixContext *_localctx = _tracker.createInstance<EffectPostfixContext>(_ctx, getState());
  enterRule(_localctx, 202, IvionParser::RuleEffectPostfix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1785);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1763);
      match(IvionParser::For);
      setState(1764);
      match(IvionParser::The);
      setState(1765);
      match(IvionParser::First);
      setState(1766);
      match(IvionParser::Time);
      setState(1767);
      match(IvionParser::During);
      setState(1768);
      playerRef();
      setState(1769);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1771);
      match(IvionParser::For);
      setState(1772);
      match(IvionParser::The);
      setState(1773);
      match(IvionParser::First);
      setState(1774);
      match(IvionParser::Time);
      setState(1775);
      match(IvionParser::During);
      setState(1776);
      match(IvionParser::Each);
      setState(1777);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1778);
      match(IvionParser::During);
      setState(1779);
      match(IvionParser::Each);
      setState(1780);
      match(IvionParser::Turn);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1781);
      match(IvionParser::During);
      setState(1782);
      playerRef();
      setState(1783);
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

//----------------- AfterEffectTriggerContext ------------------------------------------------------------------

IvionParser::AfterEffectTriggerContext::AfterEffectTriggerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::AfterEffectTriggerContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::AfterEffectTriggerContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::AfterEffectTriggerContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Resolves() {
  return getToken(IvionParser::Resolves, 0);
}

IvionParser::PlayerRefContext* IvionParser::AfterEffectTriggerContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::First() {
  return getToken(IvionParser::First, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Draw() {
  return getToken(IvionParser::Draw, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Make() {
  return getToken(IvionParser::Make, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::HypotheticalTileContext* IvionParser::AfterEffectTriggerContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Enters() {
  return getToken(IvionParser::Enters, 0);
}

std::vector<tree::TerminalNode *> IvionParser::AfterEffectTriggerContext::Or() {
  return getTokens(IvionParser::Or);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Or(size_t i) {
  return getToken(IvionParser::Or, i);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Play() {
  return getToken(IvionParser::Play, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Removed() {
  return getToken(IvionParser::Removed, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Way() {
  return getToken(IvionParser::Way, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Attach() {
  return getToken(IvionParser::Attach, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::To() {
  return getToken(IvionParser::To, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Stun() {
  return getToken(IvionParser::Stun, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Sent() {
  return getToken(IvionParser::Sent, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Wind() {
  return getToken(IvionParser::Wind, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Played() {
  return getToken(IvionParser::Played, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Fails() {
  return getToken(IvionParser::Fails, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Slow() {
  return getToken(IvionParser::Slow, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Receive() {
  return getToken(IvionParser::Receive, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Control() {
  return getToken(IvionParser::Control, 0);
}


size_t IvionParser::AfterEffectTriggerContext::getRuleIndex() const {
  return IvionParser::RuleAfterEffectTrigger;
}


antlrcpp::Any IvionParser::AfterEffectTriggerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAfterEffectTrigger(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AfterEffectTriggerContext* IvionParser::afterEffectTrigger() {
  AfterEffectTriggerContext *_localctx = _tracker.createInstance<AfterEffectTriggerContext>(_ctx, getState());
  enterRule(_localctx, 204, IvionParser::RuleAfterEffectTrigger);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1891);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1787);
      hypotheticalPlayer();
      setState(1788);
      match(IvionParser::Resolve);
      setState(1789);
      hypotheticalCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1791);
      hypotheticalCard();
      setState(1792);
      match(IvionParser::Resolves);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1794);
      hypotheticalPlayer();
      setState(1795);
      match(IvionParser::Resolve);
      setState(1796);
      playerRef();
      setState(1797);
      match(IvionParser::First);
      setState(1798);
      hypotheticalCard();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1800);
      hypotheticalPlayer();
      setState(1801);
      match(IvionParser::Draw);
      setState(1802);
      match(IvionParser::A);
      setState(1803);
      match(IvionParser::Card);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1805);
      hypotheticalPlayer();
      setState(1806);
      match(IvionParser::Make);
      setState(1807);
      match(IvionParser::Terrain);
      setState(1808);
      match(IvionParser::In);
      setState(1809);
      hypotheticalTile();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1811);
      hypotheticalPlayer();
      setState(1816);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == IvionParser::Or) {
        setState(1812);
        match(IvionParser::Or);
        setState(1813);
        hypotheticalPlayer();
        setState(1818);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1819);
      match(IvionParser::Enters);
      setState(1822);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
      case 1: {
        setState(1820);
        hypotheticalCard();
        break;
      }

      case 2: {
        setState(1821);
        hypotheticalTile();
        break;
      }

      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1824);
      hypotheticalPlayer();
      setState(1825);
      match(IvionParser::Play);
      setState(1826);
      hypotheticalCard();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1828);
      hypotheticalPlayer();
      setState(1829);
      match(IvionParser::Play);
      setState(1830);
      playerRef();
      setState(1831);
      match(IvionParser::First);
      setState(1832);
      hypotheticalCard();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1834);
      hypotheticalPlayer();
      setState(1835);
      match(IvionParser::Play);
      setState(1836);
      playerRef();
      setState(1837);
      match(IvionParser::Second);
      setState(1838);
      hypotheticalCard();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1840);
      match(IvionParser::A);
      setState(1841);
      match(IvionParser::Resource);
      setState(1842);
      match(IvionParser::Is);
      setState(1843);
      match(IvionParser::Removed);
      setState(1844);
      match(IvionParser::In);
      setState(1845);
      match(IvionParser::This);
      setState(1846);
      match(IvionParser::Way);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1847);
      hypotheticalPlayer();
      setState(1848);
      match(IvionParser::Attach);
      setState(1849);
      hypotheticalCard();
      setState(1850);
      match(IvionParser::To);
      setState(1851);
      hypotheticalPlayer();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1853);
      hypotheticalCard();
      setState(1854);
      match(IvionParser::Is);
      setState(1855);
      match(IvionParser::Revealed);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1857);
      hypotheticalPlayer();
      setState(1858);
      match(IvionParser::Stun);
      setState(1859);
      hypotheticalPlayer();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1861);
      hypotheticalCard();
      setState(1862);
      match(IvionParser::Is);
      setState(1863);
      match(IvionParser::Sent);
      setState(1864);
      match(IvionParser::To);
      setState(1865);
      match(IvionParser::Your);
      setState(1866);
      match(IvionParser::Discard);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1868);
      hypotheticalPlayer();
      setState(1869);
      match(IvionParser::Second);
      setState(1870);
      match(IvionParser::Wind);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1872);
      hypotheticalPlayer();
      setState(1873);
      match(IvionParser::Play);
      setState(1874);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1876);
      hypotheticalCard();
      setState(1877);
      hypotheticalPlayer();
      setState(1878);
      match(IvionParser::Played);
      setState(1879);
      match(IvionParser::Fails);
      setState(1880);
      match(IvionParser::To);
      setState(1881);
      match(IvionParser::Resolve);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1883);
      hypotheticalPlayer();
      setState(1884);
      match(IvionParser::Slow);
      setState(1885);
      hypotheticalPlayer();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(1887);
      hypotheticalPlayer();
      setState(1888);
      match(IvionParser::Receive);
      setState(1889);
      match(IvionParser::Control);
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

//----------------- TriggerEffectContext ------------------------------------------------------------------

IvionParser::TriggerEffectContext::TriggerEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TriggerEffectContext::At() {
  return getToken(IvionParser::At, 0);
}

IvionParser::TurnTriggerContext* IvionParser::TriggerEffectContext::turnTrigger() {
  return getRuleContext<IvionParser::TurnTriggerContext>(0);
}

tree::TerminalNode* IvionParser::TriggerEffectContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::EffectContext* IvionParser::TriggerEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

tree::TerminalNode* IvionParser::TriggerEffectContext::After() {
  return getToken(IvionParser::After, 0);
}

IvionParser::AfterEffectTriggerContext* IvionParser::TriggerEffectContext::afterEffectTrigger() {
  return getRuleContext<IvionParser::AfterEffectTriggerContext>(0);
}

IvionParser::EffectPostfixContext* IvionParser::TriggerEffectContext::effectPostfix() {
  return getRuleContext<IvionParser::EffectPostfixContext>(0);
}

IvionParser::DurationEffectContext* IvionParser::TriggerEffectContext::durationEffect() {
  return getRuleContext<IvionParser::DurationEffectContext>(0);
}

tree::TerminalNode* IvionParser::TriggerEffectContext::D() {
  return getToken(IvionParser::D, 0);
}

IvionParser::GameStartTriggerContext* IvionParser::TriggerEffectContext::gameStartTrigger() {
  return getRuleContext<IvionParser::GameStartTriggerContext>(0);
}


size_t IvionParser::TriggerEffectContext::getRuleIndex() const {
  return IvionParser::RuleTriggerEffect;
}


antlrcpp::Any IvionParser::TriggerEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTriggerEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TriggerEffectContext* IvionParser::triggerEffect() {
  TriggerEffectContext *_localctx = _tracker.createInstance<TriggerEffectContext>(_ctx, getState());
  enterRule(_localctx, 206, IvionParser::RuleTriggerEffect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1914);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1893);
      match(IvionParser::At);
      setState(1894);
      turnTrigger();
      setState(1895);
      match(IvionParser::C);
      setState(1896);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1898);
      match(IvionParser::After);
      setState(1899);
      afterEffectTrigger();
      setState(1901);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::For || _la == IvionParser::During) {
        setState(1900);
        effectPostfix();
      }
      setState(1903);
      match(IvionParser::C);
      setState(1904);
      effect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1906);
      durationEffect();
      setState(1907);
      match(IvionParser::D);
      setState(1908);
      effect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1910);
      gameStartTrigger();
      setState(1911);
      match(IvionParser::C);
      setState(1912);
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

//----------------- IfWouldRecieveControlContext ------------------------------------------------------------------

IvionParser::IfWouldRecieveControlContext::IfWouldRecieveControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfWouldRecieveControlContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::Would() {
  return getToken(IvionParser::Would, 0);
}

std::vector<tree::TerminalNode *> IvionParser::IfWouldRecieveControlContext::Receive() {
  return getTokens(IvionParser::Receive);
}

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::Receive(size_t i) {
  return getToken(IvionParser::Receive, i);
}

std::vector<tree::TerminalNode *> IvionParser::IfWouldRecieveControlContext::Control() {
  return getTokens(IvionParser::Control);
}

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::Control(size_t i) {
  return getToken(IvionParser::Control, i);
}

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::C() {
  return getToken(IvionParser::C, 0);
}

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::Instead() {
  return getToken(IvionParser::Instead, 0);
}

IvionParser::PlayerContext* IvionParser::IfWouldRecieveControlContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::The() {
  return getToken(IvionParser::The, 0);
}


size_t IvionParser::IfWouldRecieveControlContext::getRuleIndex() const {
  return IvionParser::RuleIfWouldRecieveControl;
}


antlrcpp::Any IvionParser::IfWouldRecieveControlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfWouldRecieveControl(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfWouldRecieveControlContext* IvionParser::ifWouldRecieveControl() {
  IfWouldRecieveControlContext *_localctx = _tracker.createInstance<IfWouldRecieveControlContext>(_ctx, getState());
  enterRule(_localctx, 208, IvionParser::RuleIfWouldRecieveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1916);
    match(IvionParser::If);
    setState(1917);
    hypotheticalPlayer();
    setState(1918);
    match(IvionParser::Would);
    setState(1919);
    match(IvionParser::Receive);
    setState(1920);
    match(IvionParser::Control);
    setState(1921);
    match(IvionParser::C);
    setState(1922);
    match(IvionParser::Instead);
    setState(1923);
    player();
    setState(1924);
    match(IvionParser::Receive);
    setState(1925);
    match(IvionParser::The);
    setState(1926);
    match(IvionParser::Control);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfWouldTakeDamageContext ------------------------------------------------------------------

IvionParser::IfWouldTakeDamageContext::IfWouldTakeDamageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfWouldTakeDamageContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Would() {
  return getToken(IvionParser::Would, 0);
}

std::vector<tree::TerminalNode *> IvionParser::IfWouldTakeDamageContext::Take() {
  return getTokens(IvionParser::Take);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Take(size_t i) {
  return getToken(IvionParser::Take, i);
}

std::vector<tree::TerminalNode *> IvionParser::IfWouldTakeDamageContext::Damage() {
  return getTokens(IvionParser::Damage);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Damage(size_t i) {
  return getToken(IvionParser::Damage, i);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::First() {
  return getToken(IvionParser::First, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Time() {
  return getToken(IvionParser::Time, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::During() {
  return getToken(IvionParser::During, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::C() {
  return getToken(IvionParser::C, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Instead() {
  return getToken(IvionParser::Instead, 0);
}

std::vector<IvionParser::LiteralValueContext *> IvionParser::IfWouldTakeDamageContext::literalValue() {
  return getRuleContexts<IvionParser::LiteralValueContext>();
}

IvionParser::LiteralValueContext* IvionParser::IfWouldTakeDamageContext::literalValue(size_t i) {
  return getRuleContext<IvionParser::LiteralValueContext>(i);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::P() {
  return getToken(IvionParser::P, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Not() {
  return getToken(IvionParser::Not, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Reduce() {
  return getToken(IvionParser::Reduce, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Taken() {
  return getToken(IvionParser::Taken, 0);
}

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::Below() {
  return getToken(IvionParser::Below, 0);
}

IvionParser::PlayerRefContext* IvionParser::IfWouldTakeDamageContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}


size_t IvionParser::IfWouldTakeDamageContext::getRuleIndex() const {
  return IvionParser::RuleIfWouldTakeDamage;
}


antlrcpp::Any IvionParser::IfWouldTakeDamageContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfWouldTakeDamage(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfWouldTakeDamageContext* IvionParser::ifWouldTakeDamage() {
  IfWouldTakeDamageContext *_localctx = _tracker.createInstance<IfWouldTakeDamageContext>(_ctx, getState());
  enterRule(_localctx, 210, IvionParser::RuleIfWouldTakeDamage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1928);
    match(IvionParser::If);
    setState(1929);
    hypotheticalPlayer();
    setState(1930);
    match(IvionParser::Would);
    setState(1931);
    match(IvionParser::Take);
    setState(1932);
    match(IvionParser::Damage);
    setState(1933);
    match(IvionParser::For);
    setState(1934);
    match(IvionParser::The);
    setState(1935);
    match(IvionParser::First);
    setState(1936);
    match(IvionParser::Time);
    setState(1937);
    match(IvionParser::During);
    setState(1938);
    match(IvionParser::Each);
    setState(1939);
    match(IvionParser::Turn);
    setState(1940);
    match(IvionParser::C);
    setState(1942);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Them)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::Their))) != 0)) {
      setState(1941);
      playerRef();
    }
    setState(1944);
    match(IvionParser::Instead);
    setState(1945);
    match(IvionParser::Take);
    setState(1946);
    literalValue();
    setState(1947);
    match(IvionParser::Less);
    setState(1948);
    match(IvionParser::Damage);
    setState(1949);
    match(IvionParser::P);
    setState(1950);
    match(IvionParser::This);
    setState(1951);
    match(IvionParser::May);
    setState(1952);
    match(IvionParser::Not);
    setState(1953);
    match(IvionParser::Reduce);
    setState(1954);
    match(IvionParser::Damage);
    setState(1955);
    match(IvionParser::Taken);
    setState(1956);
    match(IvionParser::Below);
    setState(1957);
    literalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfWouldHealContext ------------------------------------------------------------------

IvionParser::IfWouldHealContext::IfWouldHealContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfWouldHealContext::If() {
  return getToken(IvionParser::If, 0);
}

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::IfWouldHealContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfWouldHealContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Would() {
  return getToken(IvionParser::Would, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Heal() {
  return getToken(IvionParser::Heal, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::HP() {
  return getToken(IvionParser::HP, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::C() {
  return getToken(IvionParser::C, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Instead() {
  return getToken(IvionParser::Instead, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Deal() {
  return getToken(IvionParser::Deal, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Much() {
  return getToken(IvionParser::Much, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Damage() {
  return getToken(IvionParser::Damage, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::PlayerContext* IvionParser::IfWouldHealContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::IfWouldHealContext::getRuleIndex() const {
  return IvionParser::RuleIfWouldHeal;
}


antlrcpp::Any IvionParser::IfWouldHealContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfWouldHeal(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfWouldHealContext* IvionParser::ifWouldHeal() {
  IfWouldHealContext *_localctx = _tracker.createInstance<IfWouldHealContext>(_ctx, getState());
  enterRule(_localctx, 212, IvionParser::RuleIfWouldHeal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1959);
    match(IvionParser::If);
    setState(1960);
    hypotheticalPlayer();
    setState(1961);
    match(IvionParser::Would);
    setState(1962);
    match(IvionParser::Heal);
    setState(1963);
    hypotheticalPlayer();
    setState(1964);
    match(IvionParser::HP);
    setState(1965);
    match(IvionParser::C);
    setState(1966);
    match(IvionParser::Instead);
    setState(1967);
    match(IvionParser::Deal);
    setState(1968);
    match(IvionParser::That);
    setState(1969);
    match(IvionParser::Much);
    setState(1970);
    match(IvionParser::Damage);
    setState(1971);
    match(IvionParser::To);
    setState(1972);
    player();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReplacementTriggerEffectContext ------------------------------------------------------------------

IvionParser::ReplacementTriggerEffectContext::ReplacementTriggerEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IfWouldRecieveControlContext* IvionParser::ReplacementTriggerEffectContext::ifWouldRecieveControl() {
  return getRuleContext<IvionParser::IfWouldRecieveControlContext>(0);
}

IvionParser::IfWouldTakeDamageContext* IvionParser::ReplacementTriggerEffectContext::ifWouldTakeDamage() {
  return getRuleContext<IvionParser::IfWouldTakeDamageContext>(0);
}

IvionParser::IfWouldHealContext* IvionParser::ReplacementTriggerEffectContext::ifWouldHeal() {
  return getRuleContext<IvionParser::IfWouldHealContext>(0);
}


size_t IvionParser::ReplacementTriggerEffectContext::getRuleIndex() const {
  return IvionParser::RuleReplacementTriggerEffect;
}


antlrcpp::Any IvionParser::ReplacementTriggerEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitReplacementTriggerEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ReplacementTriggerEffectContext* IvionParser::replacementTriggerEffect() {
  ReplacementTriggerEffectContext *_localctx = _tracker.createInstance<ReplacementTriggerEffectContext>(_ctx, getState());
  enterRule(_localctx, 214, IvionParser::RuleReplacementTriggerEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1977);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1974);
      ifWouldRecieveControl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1975);
      ifWouldTakeDamage();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1976);
      ifWouldHeal();
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

//----------------- IfPlayerMakesChoiceContext ------------------------------------------------------------------

IvionParser::IfPlayerMakesChoiceContext::IfPlayerMakesChoiceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfPlayerMakesChoiceContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::IfPlayerMakesChoiceContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::IfPlayerMakesChoiceContext::Do() {
  return getToken(IvionParser::Do, 0);
}

tree::TerminalNode* IvionParser::IfPlayerMakesChoiceContext::Dont() {
  return getToken(IvionParser::Dont, 0);
}

tree::TerminalNode* IvionParser::IfPlayerMakesChoiceContext::You() {
  return getToken(IvionParser::You, 0);
}


size_t IvionParser::IfPlayerMakesChoiceContext::getRuleIndex() const {
  return IvionParser::RuleIfPlayerMakesChoice;
}


antlrcpp::Any IvionParser::IfPlayerMakesChoiceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPlayerMakesChoice(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPlayerMakesChoiceContext* IvionParser::ifPlayerMakesChoice() {
  IfPlayerMakesChoiceContext *_localctx = _tracker.createInstance<IfPlayerMakesChoiceContext>(_ctx, getState());
  enterRule(_localctx, 216, IvionParser::RuleIfPlayerMakesChoice);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1991);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1979);
      match(IvionParser::If);
      setState(1980);
      match(IvionParser::They);
      setState(1981);
      match(IvionParser::Do);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1982);
      match(IvionParser::If);
      setState(1983);
      match(IvionParser::They);
      setState(1984);
      match(IvionParser::Dont);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1985);
      match(IvionParser::If);
      setState(1986);
      match(IvionParser::You);
      setState(1987);
      match(IvionParser::Do);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1988);
      match(IvionParser::If);
      setState(1989);
      match(IvionParser::You);
      setState(1990);
      match(IvionParser::Dont);
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

//----------------- IfPreviousActionInvalidContext ------------------------------------------------------------------

IvionParser::IfPreviousActionInvalidContext::IfPreviousActionInvalidContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfPreviousActionInvalidContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::IfPreviousActionInvalidContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::IfPreviousActionInvalidContext::Cant() {
  return getToken(IvionParser::Cant, 0);
}

tree::TerminalNode* IvionParser::IfPreviousActionInvalidContext::You() {
  return getToken(IvionParser::You, 0);
}


size_t IvionParser::IfPreviousActionInvalidContext::getRuleIndex() const {
  return IvionParser::RuleIfPreviousActionInvalid;
}


antlrcpp::Any IvionParser::IfPreviousActionInvalidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPreviousActionInvalid(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPreviousActionInvalidContext* IvionParser::ifPreviousActionInvalid() {
  IfPreviousActionInvalidContext *_localctx = _tracker.createInstance<IfPreviousActionInvalidContext>(_ctx, getState());
  enterRule(_localctx, 218, IvionParser::RuleIfPreviousActionInvalid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1999);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1993);
      match(IvionParser::If);
      setState(1994);
      match(IvionParser::They);
      setState(1995);
      match(IvionParser::Cant);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1996);
      match(IvionParser::If);
      setState(1997);
      match(IvionParser::You);
      setState(1998);
      match(IvionParser::Cant);
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

//----------------- IfResolvedCardContext ------------------------------------------------------------------

IvionParser::IfResolvedCardContext::IfResolvedCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfResolvedCardContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Resolved() {
  return getToken(IvionParser::Resolved, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Has() {
  return getToken(IvionParser::Has, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}


size_t IvionParser::IfResolvedCardContext::getRuleIndex() const {
  return IvionParser::RuleIfResolvedCard;
}


antlrcpp::Any IvionParser::IfResolvedCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfResolvedCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfResolvedCardContext* IvionParser::ifResolvedCard() {
  IfResolvedCardContext *_localctx = _tracker.createInstance<IfResolvedCardContext>(_ctx, getState());
  enterRule(_localctx, 220, IvionParser::RuleIfResolvedCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2025);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2001);
      match(IvionParser::If);
      setState(2002);
      hypotheticalPlayer();
      setState(2004);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Have

      || _la == IvionParser::Has) {
        setState(2003);
        _la = _input->LA(1);
        if (!(_la == IvionParser::Have

        || _la == IvionParser::Has)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(2006);
      match(IvionParser::Resolved);
      setState(2007);
      match(IvionParser::Another);
      setState(2008);
      match(IvionParser::Ability);
      setState(2009);
      match(IvionParser::Card);
      setState(2010);
      match(IvionParser::This);
      setState(2011);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2013);
      match(IvionParser::If);
      setState(2014);
      hypotheticalPlayer();
      setState(2016);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Have

      || _la == IvionParser::Has) {
        setState(2015);
        _la = _input->LA(1);
        if (!(_la == IvionParser::Have

        || _la == IvionParser::Has)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(2018);
      match(IvionParser::Resolved);
      setState(2019);
      match(IvionParser::A);
      setState(2020);
      match(IvionParser::Attack);
      setState(2021);
      match(IvionParser::Card);
      setState(2022);
      match(IvionParser::This);
      setState(2023);
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

//----------------- IfUsedSecondWindContext ------------------------------------------------------------------

IvionParser::IfUsedSecondWindContext::IfUsedSecondWindContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfUsedSecondWindContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Used() {
  return getToken(IvionParser::Used, 0);
}

IvionParser::PlayerRefContext* IvionParser::IfUsedSecondWindContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Wind() {
  return getToken(IvionParser::Wind, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Already() {
  return getToken(IvionParser::Already, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Has() {
  return getToken(IvionParser::Has, 0);
}


size_t IvionParser::IfUsedSecondWindContext::getRuleIndex() const {
  return IvionParser::RuleIfUsedSecondWind;
}


antlrcpp::Any IvionParser::IfUsedSecondWindContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfUsedSecondWind(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfUsedSecondWindContext* IvionParser::ifUsedSecondWind() {
  IfUsedSecondWindContext *_localctx = _tracker.createInstance<IfUsedSecondWindContext>(_ctx, getState());
  enterRule(_localctx, 222, IvionParser::RuleIfUsedSecondWind);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2027);
    match(IvionParser::If);
    setState(2028);
    hypotheticalPlayer();
    setState(2030);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Have

    || _la == IvionParser::Has) {
      setState(2029);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Have

      || _la == IvionParser::Has)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(2033);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Already) {
      setState(2032);
      match(IvionParser::Already);
    }
    setState(2035);
    match(IvionParser::Used);
    setState(2036);
    playerRef();
    setState(2037);
    match(IvionParser::Second);
    setState(2038);
    match(IvionParser::Wind);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfNearContext ------------------------------------------------------------------

IvionParser::IfNearContext::IfNearContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfNearContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfNearContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfNearContext::Are() {
  return getToken(IvionParser::Are, 0);
}

tree::TerminalNode* IvionParser::IfNearContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::IfNearContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::IfNearContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}


size_t IvionParser::IfNearContext::getRuleIndex() const {
  return IvionParser::RuleIfNear;
}


antlrcpp::Any IvionParser::IfNearContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfNear(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfNearContext* IvionParser::ifNear() {
  IfNearContext *_localctx = _tracker.createInstance<IfNearContext>(_ctx, getState());
  enterRule(_localctx, 224, IvionParser::RuleIfNear);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2052);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 89, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2040);
      match(IvionParser::If);
      setState(2041);
      hypotheticalPlayer();
      setState(2042);
      match(IvionParser::Are);
      setState(2043);
      match(IvionParser::Near);
      setState(2044);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2046);
      match(IvionParser::If);
      setState(2047);
      hypotheticalPlayer();
      setState(2048);
      match(IvionParser::Are);
      setState(2049);
      match(IvionParser::Near);
      setState(2050);
      match(IvionParser::Terrain);
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

//----------------- IfControlledContext ------------------------------------------------------------------

IvionParser::IfControlledContext::IfControlledContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfControlledContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfControlledContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfControlledContext::Are() {
  return getToken(IvionParser::Are, 0);
}

tree::TerminalNode* IvionParser::IfControlledContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}


size_t IvionParser::IfControlledContext::getRuleIndex() const {
  return IvionParser::RuleIfControlled;
}


antlrcpp::Any IvionParser::IfControlledContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfControlled(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfControlledContext* IvionParser::ifControlled() {
  IfControlledContext *_localctx = _tracker.createInstance<IfControlledContext>(_ctx, getState());
  enterRule(_localctx, 226, IvionParser::RuleIfControlled);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2054);
    match(IvionParser::If);
    setState(2055);
    hypotheticalPlayer();
    setState(2056);
    match(IvionParser::Are);
    setState(2057);
    match(IvionParser::Controlled);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfPlayedContext ------------------------------------------------------------------

IvionParser::IfPlayedContext::IfPlayedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfPlayedContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayedContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::Played() {
  return getToken(IvionParser::Played, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::Has() {
  return getToken(IvionParser::Has, 0);
}


size_t IvionParser::IfPlayedContext::getRuleIndex() const {
  return IvionParser::RuleIfPlayed;
}


antlrcpp::Any IvionParser::IfPlayedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPlayed(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPlayedContext* IvionParser::ifPlayed() {
  IfPlayedContext *_localctx = _tracker.createInstance<IfPlayedContext>(_ctx, getState());
  enterRule(_localctx, 228, IvionParser::RuleIfPlayed);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2059);
    match(IvionParser::If);
    setState(2060);
    hypotheticalPlayer();
    setState(2062);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Have

    || _la == IvionParser::Has) {
      setState(2061);
      _la = _input->LA(1);
      if (!(_la == IvionParser::Have

      || _la == IvionParser::Has)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
    }
    setState(2064);
    match(IvionParser::Played);
    setState(2065);
    match(IvionParser::A);
    setState(2066);
    match(IvionParser::Attack);
    setState(2067);
    match(IvionParser::Card);
    setState(2068);
    match(IvionParser::This);
    setState(2069);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfTileHadTerrainContext ------------------------------------------------------------------

IvionParser::IfTileHadTerrainContext::IfTileHadTerrainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfTileHadTerrainContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::PreviousTileContext* IvionParser::IfTileHadTerrainContext::previousTile() {
  return getRuleContext<IvionParser::PreviousTileContext>(0);
}

tree::TerminalNode* IvionParser::IfTileHadTerrainContext::Already() {
  return getToken(IvionParser::Already, 0);
}

tree::TerminalNode* IvionParser::IfTileHadTerrainContext::Had() {
  return getToken(IvionParser::Had, 0);
}

tree::TerminalNode* IvionParser::IfTileHadTerrainContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}


size_t IvionParser::IfTileHadTerrainContext::getRuleIndex() const {
  return IvionParser::RuleIfTileHadTerrain;
}


antlrcpp::Any IvionParser::IfTileHadTerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfTileHadTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfTileHadTerrainContext* IvionParser::ifTileHadTerrain() {
  IfTileHadTerrainContext *_localctx = _tracker.createInstance<IfTileHadTerrainContext>(_ctx, getState());
  enterRule(_localctx, 230, IvionParser::RuleIfTileHadTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2071);
    match(IvionParser::If);
    setState(2072);
    previousTile();
    setState(2073);
    match(IvionParser::Already);
    setState(2074);
    match(IvionParser::Had);
    setState(2075);
    match(IvionParser::Terrain);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfCardRevealedContext ------------------------------------------------------------------

IvionParser::IfCardRevealedContext::IfCardRevealedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::PlayerContext* IvionParser::IfCardRevealedContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::LiteralValueContext* IvionParser::IfCardRevealedContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Has() {
  return getToken(IvionParser::Has, 0);
}


size_t IvionParser::IfCardRevealedContext::getRuleIndex() const {
  return IvionParser::RuleIfCardRevealed;
}


antlrcpp::Any IvionParser::IfCardRevealedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfCardRevealed(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfCardRevealedContext* IvionParser::ifCardRevealed() {
  IfCardRevealedContext *_localctx = _tracker.createInstance<IfCardRevealedContext>(_ctx, getState());
  enterRule(_localctx, 232, IvionParser::RuleIfCardRevealed);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2077);
    match(IvionParser::If);
    setState(2078);
    player();
    setState(2079);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Have

    || _la == IvionParser::Has)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(2080);
    match(IvionParser::At);
    setState(2081);
    match(IvionParser::Least);
    setState(2082);
    literalValue();
    setState(2083);
    match(IvionParser::Revealed);
    setState(2084);
    match(IvionParser::Card);
    setState(2085);
    match(IvionParser::In);
    setState(2086);
    match(IvionParser::Your);
    setState(2087);
    match(IvionParser::Hand);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfPlayerHasMitigateContext ------------------------------------------------------------------

IvionParser::IfPlayerHasMitigateContext::IfPlayerHasMitigateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::PlayerContext* IvionParser::IfPlayerHasMitigateContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::Mitigate() {
  return getToken(IvionParser::Mitigate, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::Has() {
  return getToken(IvionParser::Has, 0);
}


size_t IvionParser::IfPlayerHasMitigateContext::getRuleIndex() const {
  return IvionParser::RuleIfPlayerHasMitigate;
}


antlrcpp::Any IvionParser::IfPlayerHasMitigateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPlayerHasMitigate(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPlayerHasMitigateContext* IvionParser::ifPlayerHasMitigate() {
  IfPlayerHasMitigateContext *_localctx = _tracker.createInstance<IfPlayerHasMitigateContext>(_ctx, getState());
  enterRule(_localctx, 234, IvionParser::RuleIfPlayerHasMitigate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2089);
    match(IvionParser::If);
    setState(2090);
    player();
    setState(2091);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Have

    || _la == IvionParser::Has)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(2092);
    match(IvionParser::Mitigate);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfPlayerDidntLeaveTileContext ------------------------------------------------------------------

IvionParser::IfPlayerDidntLeaveTileContext::IfPlayerDidntLeaveTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfPlayerDidntLeaveTileContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::PlayerContext* IvionParser::IfPlayerDidntLeaveTileContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayerDidntLeaveTileContext::Didnt() {
  return getToken(IvionParser::Didnt, 0);
}

tree::TerminalNode* IvionParser::IfPlayerDidntLeaveTileContext::Leave() {
  return getToken(IvionParser::Leave, 0);
}

tree::TerminalNode* IvionParser::IfPlayerDidntLeaveTileContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::IfPlayerDidntLeaveTileContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::IfPlayerDidntLeaveTileContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::IfPlayerDidntLeaveTileContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::IfPlayerDidntLeaveTileContext::getRuleIndex() const {
  return IvionParser::RuleIfPlayerDidntLeaveTile;
}


antlrcpp::Any IvionParser::IfPlayerDidntLeaveTileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPlayerDidntLeaveTile(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPlayerDidntLeaveTileContext* IvionParser::ifPlayerDidntLeaveTile() {
  IfPlayerDidntLeaveTileContext *_localctx = _tracker.createInstance<IfPlayerDidntLeaveTileContext>(_ctx, getState());
  enterRule(_localctx, 236, IvionParser::RuleIfPlayerDidntLeaveTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2094);
    match(IvionParser::If);
    setState(2095);
    player();
    setState(2096);
    match(IvionParser::Didnt);
    setState(2097);
    match(IvionParser::Leave);
    setState(2098);
    match(IvionParser::A);
    setState(2099);
    match(IvionParser::Tile);
    setState(2100);
    match(IvionParser::This);
    setState(2101);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfCardCostReducedContext ------------------------------------------------------------------

IvionParser::IfCardCostReducedContext::IfCardCostReducedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfCardCostReducedContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::IfCardCostReducedContext::Its() {
  return getToken(IvionParser::Its, 0);
}

tree::TerminalNode* IvionParser::IfCardCostReducedContext::Cost() {
  return getToken(IvionParser::Cost, 0);
}

tree::TerminalNode* IvionParser::IfCardCostReducedContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::IfCardCostReducedContext::Reduced() {
  return getToken(IvionParser::Reduced, 0);
}


size_t IvionParser::IfCardCostReducedContext::getRuleIndex() const {
  return IvionParser::RuleIfCardCostReduced;
}


antlrcpp::Any IvionParser::IfCardCostReducedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfCardCostReduced(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfCardCostReducedContext* IvionParser::ifCardCostReduced() {
  IfCardCostReducedContext *_localctx = _tracker.createInstance<IfCardCostReducedContext>(_ctx, getState());
  enterRule(_localctx, 238, IvionParser::RuleIfCardCostReduced);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2103);
    match(IvionParser::If);
    setState(2104);
    match(IvionParser::Its);
    setState(2105);
    match(IvionParser::Cost);
    setState(2106);
    match(IvionParser::Is);
    setState(2107);
    match(IvionParser::Reduced);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfPlayerHasMoreHPContext ------------------------------------------------------------------

IvionParser::IfPlayerHasMoreHPContext::IfPlayerHasMoreHPContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::If() {
  return getToken(IvionParser::If, 0);
}

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::IfPlayerHasMoreHPContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayerHasMoreHPContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::More() {
  return getToken(IvionParser::More, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::HP() {
  return getToken(IvionParser::HP, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::Than() {
  return getToken(IvionParser::Than, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::Has() {
  return getToken(IvionParser::Has, 0);
}


size_t IvionParser::IfPlayerHasMoreHPContext::getRuleIndex() const {
  return IvionParser::RuleIfPlayerHasMoreHP;
}


antlrcpp::Any IvionParser::IfPlayerHasMoreHPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPlayerHasMoreHP(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPlayerHasMoreHPContext* IvionParser::ifPlayerHasMoreHP() {
  IfPlayerHasMoreHPContext *_localctx = _tracker.createInstance<IfPlayerHasMoreHPContext>(_ctx, getState());
  enterRule(_localctx, 240, IvionParser::RuleIfPlayerHasMoreHP);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2109);
    match(IvionParser::If);
    setState(2110);
    hypotheticalPlayer();
    setState(2111);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Have

    || _la == IvionParser::Has)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(2112);
    match(IvionParser::More);
    setState(2113);
    match(IvionParser::HP);
    setState(2114);
    match(IvionParser::Than);
    setState(2115);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfPlayerHasNoActionsContext ------------------------------------------------------------------

IvionParser::IfPlayerHasNoActionsContext::IfPlayerHasNoActionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayerHasNoActionsContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::No() {
  return getToken(IvionParser::No, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::Has() {
  return getToken(IvionParser::Has, 0);
}


size_t IvionParser::IfPlayerHasNoActionsContext::getRuleIndex() const {
  return IvionParser::RuleIfPlayerHasNoActions;
}


antlrcpp::Any IvionParser::IfPlayerHasNoActionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPlayerHasNoActions(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPlayerHasNoActionsContext* IvionParser::ifPlayerHasNoActions() {
  IfPlayerHasNoActionsContext *_localctx = _tracker.createInstance<IfPlayerHasNoActionsContext>(_ctx, getState());
  enterRule(_localctx, 242, IvionParser::RuleIfPlayerHasNoActions);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2117);
    match(IvionParser::If);
    setState(2118);
    hypotheticalPlayer();
    setState(2119);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Have

    || _la == IvionParser::Has)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(2120);
    match(IvionParser::No);
    setState(2121);
    match(IvionParser::Resource);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfPlayerInTerrainContext ------------------------------------------------------------------

IvionParser::IfPlayerInTerrainContext::IfPlayerInTerrainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::IfPlayerInTerrainContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayerInTerrainContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayerInTerrainContext::Are() {
  return getToken(IvionParser::Are, 0);
}

tree::TerminalNode* IvionParser::IfPlayerInTerrainContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::IfPlayerInTerrainContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}


size_t IvionParser::IfPlayerInTerrainContext::getRuleIndex() const {
  return IvionParser::RuleIfPlayerInTerrain;
}


antlrcpp::Any IvionParser::IfPlayerInTerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPlayerInTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPlayerInTerrainContext* IvionParser::ifPlayerInTerrain() {
  IfPlayerInTerrainContext *_localctx = _tracker.createInstance<IfPlayerInTerrainContext>(_ctx, getState());
  enterRule(_localctx, 244, IvionParser::RuleIfPlayerInTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2123);
    match(IvionParser::If);
    setState(2124);
    hypotheticalPlayer();
    setState(2125);
    match(IvionParser::Are);
    setState(2126);
    match(IvionParser::In);
    setState(2127);
    match(IvionParser::Terrain);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CounterCardConditionContext ------------------------------------------------------------------

IvionParser::CounterCardConditionContext::CounterCardConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::CounterCardConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::Countered() {
  return getToken(IvionParser::Countered, 0);
}


size_t IvionParser::CounterCardConditionContext::getRuleIndex() const {
  return IvionParser::RuleCounterCardCondition;
}


antlrcpp::Any IvionParser::CounterCardConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCounterCardCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CounterCardConditionContext* IvionParser::counterCardCondition() {
  CounterCardConditionContext *_localctx = _tracker.createInstance<CounterCardConditionContext>(_ctx, getState());
  enterRule(_localctx, 246, IvionParser::RuleCounterCardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2129);
    match(IvionParser::If);
    setState(2130);
    hypotheticalCard();
    setState(2131);
    match(IvionParser::Is);
    setState(2132);
    match(IvionParser::Countered);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StunPlayerConditionContext ------------------------------------------------------------------

IvionParser::StunPlayerConditionContext::StunPlayerConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::StunPlayerConditionContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::StunPlayerConditionContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::StunPlayerConditionContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::StunPlayerConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::StunPlayerConditionContext::Removed() {
  return getToken(IvionParser::Removed, 0);
}

tree::TerminalNode* IvionParser::StunPlayerConditionContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::StunPlayerConditionContext::Way() {
  return getToken(IvionParser::Way, 0);
}


size_t IvionParser::StunPlayerConditionContext::getRuleIndex() const {
  return IvionParser::RuleStunPlayerCondition;
}


antlrcpp::Any IvionParser::StunPlayerConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitStunPlayerCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::StunPlayerConditionContext* IvionParser::stunPlayerCondition() {
  StunPlayerConditionContext *_localctx = _tracker.createInstance<StunPlayerConditionContext>(_ctx, getState());
  enterRule(_localctx, 248, IvionParser::RuleStunPlayerCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2134);
    match(IvionParser::If);
    setState(2135);
    match(IvionParser::A);
    setState(2136);
    match(IvionParser::Resource);
    setState(2137);
    match(IvionParser::Is);
    setState(2138);
    match(IvionParser::Removed);
    setState(2139);
    match(IvionParser::This);
    setState(2140);
    match(IvionParser::Way);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RevealCardsConditionContext ------------------------------------------------------------------

IvionParser::RevealCardsConditionContext::RevealCardsConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::If() {
  return getToken(IvionParser::If, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::RevealCardsConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Way() {
  return getToken(IvionParser::Way, 0);
}


size_t IvionParser::RevealCardsConditionContext::getRuleIndex() const {
  return IvionParser::RuleRevealCardsCondition;
}


antlrcpp::Any IvionParser::RevealCardsConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitRevealCardsCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RevealCardsConditionContext* IvionParser::revealCardsCondition() {
  RevealCardsConditionContext *_localctx = _tracker.createInstance<RevealCardsConditionContext>(_ctx, getState());
  enterRule(_localctx, 250, IvionParser::RuleRevealCardsCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2142);
    match(IvionParser::If);
    setState(2143);
    hypotheticalCard();
    setState(2144);
    match(IvionParser::Is);
    setState(2145);
    match(IvionParser::Revealed);
    setState(2146);
    match(IvionParser::This);
    setState(2147);
    match(IvionParser::Way);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

IvionParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IfPlayerMakesChoiceContext* IvionParser::ConditionContext::ifPlayerMakesChoice() {
  return getRuleContext<IvionParser::IfPlayerMakesChoiceContext>(0);
}

IvionParser::IfPreviousActionInvalidContext* IvionParser::ConditionContext::ifPreviousActionInvalid() {
  return getRuleContext<IvionParser::IfPreviousActionInvalidContext>(0);
}

IvionParser::IfResolvedCardContext* IvionParser::ConditionContext::ifResolvedCard() {
  return getRuleContext<IvionParser::IfResolvedCardContext>(0);
}

IvionParser::IfUsedSecondWindContext* IvionParser::ConditionContext::ifUsedSecondWind() {
  return getRuleContext<IvionParser::IfUsedSecondWindContext>(0);
}

IvionParser::IfNearContext* IvionParser::ConditionContext::ifNear() {
  return getRuleContext<IvionParser::IfNearContext>(0);
}

IvionParser::IfControlledContext* IvionParser::ConditionContext::ifControlled() {
  return getRuleContext<IvionParser::IfControlledContext>(0);
}

IvionParser::IfPlayedContext* IvionParser::ConditionContext::ifPlayed() {
  return getRuleContext<IvionParser::IfPlayedContext>(0);
}

IvionParser::IfTileHadTerrainContext* IvionParser::ConditionContext::ifTileHadTerrain() {
  return getRuleContext<IvionParser::IfTileHadTerrainContext>(0);
}

IvionParser::IfCardRevealedContext* IvionParser::ConditionContext::ifCardRevealed() {
  return getRuleContext<IvionParser::IfCardRevealedContext>(0);
}

IvionParser::IfPlayerHasMitigateContext* IvionParser::ConditionContext::ifPlayerHasMitigate() {
  return getRuleContext<IvionParser::IfPlayerHasMitigateContext>(0);
}

IvionParser::IfPlayerDidntLeaveTileContext* IvionParser::ConditionContext::ifPlayerDidntLeaveTile() {
  return getRuleContext<IvionParser::IfPlayerDidntLeaveTileContext>(0);
}

IvionParser::IfCardCostReducedContext* IvionParser::ConditionContext::ifCardCostReduced() {
  return getRuleContext<IvionParser::IfCardCostReducedContext>(0);
}

IvionParser::IfPlayerHasMoreHPContext* IvionParser::ConditionContext::ifPlayerHasMoreHP() {
  return getRuleContext<IvionParser::IfPlayerHasMoreHPContext>(0);
}

IvionParser::IfPlayerHasNoActionsContext* IvionParser::ConditionContext::ifPlayerHasNoActions() {
  return getRuleContext<IvionParser::IfPlayerHasNoActionsContext>(0);
}

IvionParser::IfPlayerInTerrainContext* IvionParser::ConditionContext::ifPlayerInTerrain() {
  return getRuleContext<IvionParser::IfPlayerInTerrainContext>(0);
}

IvionParser::RevealCardsConditionContext* IvionParser::ConditionContext::revealCardsCondition() {
  return getRuleContext<IvionParser::RevealCardsConditionContext>(0);
}

IvionParser::StunPlayerConditionContext* IvionParser::ConditionContext::stunPlayerCondition() {
  return getRuleContext<IvionParser::StunPlayerConditionContext>(0);
}

IvionParser::CounterCardConditionContext* IvionParser::ConditionContext::counterCardCondition() {
  return getRuleContext<IvionParser::CounterCardConditionContext>(0);
}


size_t IvionParser::ConditionContext::getRuleIndex() const {
  return IvionParser::RuleCondition;
}


antlrcpp::Any IvionParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ConditionContext* IvionParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 252, IvionParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2167);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2149);
      ifPlayerMakesChoice();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2150);
      ifPreviousActionInvalid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2151);
      ifResolvedCard();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2152);
      ifUsedSecondWind();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2153);
      ifNear();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2154);
      ifControlled();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2155);
      ifPlayed();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2156);
      ifTileHadTerrain();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2157);
      ifCardRevealed();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2158);
      ifPlayerHasMitigate();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2159);
      ifPlayerDidntLeaveTile();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2160);
      ifCardCostReduced();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2161);
      ifPlayerHasMoreHP();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2162);
      ifPlayerHasNoActions();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2163);
      ifPlayerInTerrain();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2164);
      revealCardsCondition();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2165);
      stunPlayerCondition();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2166);
      counterCardCondition();
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

//----------------- CardCantBeTargetedContext ------------------------------------------------------------------

IvionParser::CardCantBeTargetedContext::CardCantBeTargetedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardCantBeTargetedContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::CardCantBeTargetedContext::Cant() {
  return getToken(IvionParser::Cant, 0);
}

tree::TerminalNode* IvionParser::CardCantBeTargetedContext::Be() {
  return getToken(IvionParser::Be, 0);
}

tree::TerminalNode* IvionParser::CardCantBeTargetedContext::Targeted() {
  return getToken(IvionParser::Targeted, 0);
}

tree::TerminalNode* IvionParser::CardCantBeTargetedContext::By() {
  return getToken(IvionParser::By, 0);
}

tree::TerminalNode* IvionParser::CardCantBeTargetedContext::Card() {
  return getToken(IvionParser::Card, 0);
}


size_t IvionParser::CardCantBeTargetedContext::getRuleIndex() const {
  return IvionParser::RuleCardCantBeTargeted;
}


antlrcpp::Any IvionParser::CardCantBeTargetedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardCantBeTargeted(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardCantBeTargetedContext* IvionParser::cardCantBeTargeted() {
  CardCantBeTargetedContext *_localctx = _tracker.createInstance<CardCantBeTargetedContext>(_ctx, getState());
  enterRule(_localctx, 254, IvionParser::RuleCardCantBeTargeted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2169);
    match(IvionParser::CARD_NAME);
    setState(2170);
    match(IvionParser::Cant);
    setState(2171);
    match(IvionParser::Be);
    setState(2172);
    match(IvionParser::Targeted);
    setState(2173);
    match(IvionParser::By);
    setState(2174);
    match(IvionParser::Card);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileEffectContext ------------------------------------------------------------------

IvionParser::WhileEffectContext::WhileEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::WhileEffectContext::While() {
  return getToken(IvionParser::While, 0);
}

tree::TerminalNode* IvionParser::WhileEffectContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::WhileEffectContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::WhileEffectContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::WhileEffectContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::WhileEffectContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::WhileEffectContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}

tree::TerminalNode* IvionParser::WhileEffectContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::PassiveEffectContext* IvionParser::WhileEffectContext::passiveEffect() {
  return getRuleContext<IvionParser::PassiveEffectContext>(0);
}


size_t IvionParser::WhileEffectContext::getRuleIndex() const {
  return IvionParser::RuleWhileEffect;
}


antlrcpp::Any IvionParser::WhileEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitWhileEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::WhileEffectContext* IvionParser::whileEffect() {
  WhileEffectContext *_localctx = _tracker.createInstance<WhileEffectContext>(_ctx, getState());
  enterRule(_localctx, 256, IvionParser::RuleWhileEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2176);
    match(IvionParser::While);
    setState(2177);
    match(IvionParser::CARD_NAME);
    setState(2178);
    match(IvionParser::Is);
    setState(2179);
    match(IvionParser::Revealed);
    setState(2180);
    match(IvionParser::In);
    setState(2181);
    match(IvionParser::Your);
    setState(2182);
    match(IvionParser::Hand);
    setState(2183);
    match(IvionParser::C);
    setState(2184);
    passiveEffect();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryCostReductionContext ------------------------------------------------------------------

IvionParser::PrimaryCostReductionContext::PrimaryCostReductionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Cost() {
  return getToken(IvionParser::Cost, 0);
}

IvionParser::LiteralValueContext* IvionParser::PrimaryCostReductionContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::POWER() {
  return getToken(IvionParser::POWER, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Other() {
  return getToken(IvionParser::Other, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}


size_t IvionParser::PrimaryCostReductionContext::getRuleIndex() const {
  return IvionParser::RulePrimaryCostReduction;
}


antlrcpp::Any IvionParser::PrimaryCostReductionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPrimaryCostReduction(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PrimaryCostReductionContext* IvionParser::primaryCostReduction() {
  PrimaryCostReductionContext *_localctx = _tracker.createInstance<PrimaryCostReductionContext>(_ctx, getState());
  enterRule(_localctx, 258, IvionParser::RulePrimaryCostReduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2186);
    match(IvionParser::CARD_NAME);
    setState(2187);
    match(IvionParser::Cost);
    setState(2188);
    literalValue();
    setState(2189);
    match(IvionParser::Less);
    setState(2190);
    match(IvionParser::POWER);
    setState(2191);
    match(IvionParser::For);
    setState(2192);
    match(IvionParser::Each);
    setState(2193);
    match(IvionParser::Other);
    setState(2194);
    match(IvionParser::Revealed);
    setState(2195);
    match(IvionParser::Card);
    setState(2196);
    match(IvionParser::In);
    setState(2197);
    match(IvionParser::Your);
    setState(2198);
    match(IvionParser::Hand);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OnlyPlayIfContext ------------------------------------------------------------------

IvionParser::OnlyPlayIfContext::OnlyPlayIfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::OnlyPlayIfContext::Only() {
  return getToken(IvionParser::Only, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayIfContext::Play() {
  return getToken(IvionParser::Play, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayIfContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

IvionParser::ConditionContext* IvionParser::OnlyPlayIfContext::condition() {
  return getRuleContext<IvionParser::ConditionContext>(0);
}


size_t IvionParser::OnlyPlayIfContext::getRuleIndex() const {
  return IvionParser::RuleOnlyPlayIf;
}


antlrcpp::Any IvionParser::OnlyPlayIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitOnlyPlayIf(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::OnlyPlayIfContext* IvionParser::onlyPlayIf() {
  OnlyPlayIfContext *_localctx = _tracker.createInstance<OnlyPlayIfContext>(_ctx, getState());
  enterRule(_localctx, 260, IvionParser::RuleOnlyPlayIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2200);
    match(IvionParser::Only);
    setState(2201);
    match(IvionParser::Play);
    setState(2202);
    match(IvionParser::CARD_NAME);
    setState(2203);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OncePerGameLimitContext ------------------------------------------------------------------

IvionParser::OncePerGameLimitContext::OncePerGameLimitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::OncePerGameLimitContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::OncePerGameLimitContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::OncePerGameLimitContext::Be() {
  return getToken(IvionParser::Be, 0);
}

tree::TerminalNode* IvionParser::OncePerGameLimitContext::Played() {
  return getToken(IvionParser::Played, 0);
}

tree::TerminalNode* IvionParser::OncePerGameLimitContext::Once() {
  return getToken(IvionParser::Once, 0);
}

tree::TerminalNode* IvionParser::OncePerGameLimitContext::Per() {
  return getToken(IvionParser::Per, 0);
}

tree::TerminalNode* IvionParser::OncePerGameLimitContext::Game() {
  return getToken(IvionParser::Game, 0);
}


size_t IvionParser::OncePerGameLimitContext::getRuleIndex() const {
  return IvionParser::RuleOncePerGameLimit;
}


antlrcpp::Any IvionParser::OncePerGameLimitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitOncePerGameLimit(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::OncePerGameLimitContext* IvionParser::oncePerGameLimit() {
  OncePerGameLimitContext *_localctx = _tracker.createInstance<OncePerGameLimitContext>(_ctx, getState());
  enterRule(_localctx, 262, IvionParser::RuleOncePerGameLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2205);
    match(IvionParser::CARD_NAME);
    setState(2206);
    match(IvionParser::May);
    setState(2207);
    match(IvionParser::Be);
    setState(2208);
    match(IvionParser::Played);
    setState(2209);
    match(IvionParser::Once);
    setState(2210);
    match(IvionParser::Per);
    setState(2211);
    match(IvionParser::Game);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriggerLimitContext ------------------------------------------------------------------

IvionParser::TriggerLimitContext::TriggerLimitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TriggerLimitContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::TriggerLimitContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::TriggerLimitContext::Only() {
  return getToken(IvionParser::Only, 0);
}

tree::TerminalNode* IvionParser::TriggerLimitContext::Trigger() {
  return getToken(IvionParser::Trigger, 0);
}

IvionParser::ConditionContext* IvionParser::TriggerLimitContext::condition() {
  return getRuleContext<IvionParser::ConditionContext>(0);
}


size_t IvionParser::TriggerLimitContext::getRuleIndex() const {
  return IvionParser::RuleTriggerLimit;
}


antlrcpp::Any IvionParser::TriggerLimitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTriggerLimit(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TriggerLimitContext* IvionParser::triggerLimit() {
  TriggerLimitContext *_localctx = _tracker.createInstance<TriggerLimitContext>(_ctx, getState());
  enterRule(_localctx, 264, IvionParser::RuleTriggerLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2213);
    match(IvionParser::CARD_NAME);
    setState(2214);
    match(IvionParser::May);
    setState(2215);
    match(IvionParser::Only);
    setState(2216);
    match(IvionParser::Trigger);
    setState(2217);
    condition();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriggerTurnLimitContext ------------------------------------------------------------------

IvionParser::TriggerTurnLimitContext::TriggerTurnLimitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TriggerTurnLimitContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::TriggerTurnLimitContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::TriggerTurnLimitContext::Trigger() {
  return getToken(IvionParser::Trigger, 0);
}

IvionParser::LiteralValueContext* IvionParser::TriggerTurnLimitContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::TriggerTurnLimitContext::Per() {
  return getToken(IvionParser::Per, 0);
}

tree::TerminalNode* IvionParser::TriggerTurnLimitContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::TriggerTurnLimitContext::getRuleIndex() const {
  return IvionParser::RuleTriggerTurnLimit;
}


antlrcpp::Any IvionParser::TriggerTurnLimitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTriggerTurnLimit(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TriggerTurnLimitContext* IvionParser::triggerTurnLimit() {
  TriggerTurnLimitContext *_localctx = _tracker.createInstance<TriggerTurnLimitContext>(_ctx, getState());
  enterRule(_localctx, 266, IvionParser::RuleTriggerTurnLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2219);
    match(IvionParser::CARD_NAME);
    setState(2220);
    match(IvionParser::May);
    setState(2221);
    match(IvionParser::Trigger);
    setState(2222);
    literalValue();
    setState(2223);
    match(IvionParser::Per);
    setState(2224);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OmniPresentEffectContext ------------------------------------------------------------------

IvionParser::OmniPresentEffectContext::OmniPresentEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CardCantBeTargetedContext* IvionParser::OmniPresentEffectContext::cardCantBeTargeted() {
  return getRuleContext<IvionParser::CardCantBeTargetedContext>(0);
}

IvionParser::WhileEffectContext* IvionParser::OmniPresentEffectContext::whileEffect() {
  return getRuleContext<IvionParser::WhileEffectContext>(0);
}

IvionParser::PrimaryCostReductionContext* IvionParser::OmniPresentEffectContext::primaryCostReduction() {
  return getRuleContext<IvionParser::PrimaryCostReductionContext>(0);
}

IvionParser::OnlyPlayIfContext* IvionParser::OmniPresentEffectContext::onlyPlayIf() {
  return getRuleContext<IvionParser::OnlyPlayIfContext>(0);
}

IvionParser::OncePerGameLimitContext* IvionParser::OmniPresentEffectContext::oncePerGameLimit() {
  return getRuleContext<IvionParser::OncePerGameLimitContext>(0);
}

IvionParser::TriggerLimitContext* IvionParser::OmniPresentEffectContext::triggerLimit() {
  return getRuleContext<IvionParser::TriggerLimitContext>(0);
}

IvionParser::TriggerTurnLimitContext* IvionParser::OmniPresentEffectContext::triggerTurnLimit() {
  return getRuleContext<IvionParser::TriggerTurnLimitContext>(0);
}


size_t IvionParser::OmniPresentEffectContext::getRuleIndex() const {
  return IvionParser::RuleOmniPresentEffect;
}


antlrcpp::Any IvionParser::OmniPresentEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitOmniPresentEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::OmniPresentEffectContext* IvionParser::omniPresentEffect() {
  OmniPresentEffectContext *_localctx = _tracker.createInstance<OmniPresentEffectContext>(_ctx, getState());
  enterRule(_localctx, 268, IvionParser::RuleOmniPresentEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2233);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2226);
      cardCantBeTargeted();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2227);
      whileEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2228);
      primaryCostReduction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2229);
      onlyPlayIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2230);
      oncePerGameLimit();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2231);
      triggerLimit();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2232);
      triggerTurnLimit();
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

//----------------- OneContext ------------------------------------------------------------------

IvionParser::OneContext::OneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::OneContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::OneContext::Once() {
  return getToken(IvionParser::Once, 0);
}

tree::TerminalNode* IvionParser::OneContext::One() {
  return getToken(IvionParser::One, 0);
}


size_t IvionParser::OneContext::getRuleIndex() const {
  return IvionParser::RuleOne;
}


antlrcpp::Any IvionParser::OneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitOne(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::OneContext* IvionParser::one() {
  OneContext *_localctx = _tracker.createInstance<OneContext>(_ctx, getState());
  enterRule(_localctx, 270, IvionParser::RuleOne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2235);
    _la = _input->LA(1);
    if (!(_la == IvionParser::A || _la == IvionParser::Once

    || _la == IvionParser::One)) {
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

//----------------- TwoContext ------------------------------------------------------------------

IvionParser::TwoContext::TwoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TwoContext::Two() {
  return getToken(IvionParser::Two, 0);
}

tree::TerminalNode* IvionParser::TwoContext::Twice() {
  return getToken(IvionParser::Twice, 0);
}


size_t IvionParser::TwoContext::getRuleIndex() const {
  return IvionParser::RuleTwo;
}


antlrcpp::Any IvionParser::TwoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTwo(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TwoContext* IvionParser::two() {
  TwoContext *_localctx = _tracker.createInstance<TwoContext>(_ctx, getState());
  enterRule(_localctx, 272, IvionParser::RuleTwo);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2237);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Twice

    || _la == IvionParser::Two)) {
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

//----------------- ThreeContext ------------------------------------------------------------------

IvionParser::ThreeContext::ThreeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ThreeContext::Three() {
  return getToken(IvionParser::Three, 0);
}


size_t IvionParser::ThreeContext::getRuleIndex() const {
  return IvionParser::RuleThree;
}


antlrcpp::Any IvionParser::ThreeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitThree(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ThreeContext* IvionParser::three() {
  ThreeContext *_localctx = _tracker.createInstance<ThreeContext>(_ctx, getState());
  enterRule(_localctx, 274, IvionParser::RuleThree);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2239);
    match(IvionParser::Three);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

IvionParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::NumberContext::Integer() {
  return getToken(IvionParser::Integer, 0);
}


size_t IvionParser::NumberContext::getRuleIndex() const {
  return IvionParser::RuleNumber;
}


antlrcpp::Any IvionParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::NumberContext* IvionParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 276, IvionParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2241);
    match(IvionParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerPowerValueContext ------------------------------------------------------------------

IvionParser::PlayerPowerValueContext::PlayerPowerValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::PlayerPowerValueContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerPowerValueContext::POWER() {
  return getToken(IvionParser::POWER, 0);
}


size_t IvionParser::PlayerPowerValueContext::getRuleIndex() const {
  return IvionParser::RulePlayerPowerValue;
}


antlrcpp::Any IvionParser::PlayerPowerValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerPowerValue(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerPowerValueContext* IvionParser::playerPowerValue() {
  PlayerPowerValueContext *_localctx = _tracker.createInstance<PlayerPowerValueContext>(_ctx, getState());
  enterRule(_localctx, 278, IvionParser::RulePlayerPowerValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2243);
    player();
    setState(2244);
    match(IvionParser::POWER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerControlAmountValueContext ------------------------------------------------------------------

IvionParser::PlayerControlAmountValueContext::PlayerControlAmountValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PlayerControlAmountValueContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::PlayerControlAmountValueContext::Total() {
  return getToken(IvionParser::Total, 0);
}

tree::TerminalNode* IvionParser::PlayerControlAmountValueContext::Value() {
  return getToken(IvionParser::Value, 0);
}

tree::TerminalNode* IvionParser::PlayerControlAmountValueContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::PlayerControlAmountValueContext::Control() {
  return getToken(IvionParser::Control, 0);
}

tree::TerminalNode* IvionParser::PlayerControlAmountValueContext::Affecting() {
  return getToken(IvionParser::Affecting, 0);
}

IvionParser::PlayerContext* IvionParser::PlayerControlAmountValueContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}


size_t IvionParser::PlayerControlAmountValueContext::getRuleIndex() const {
  return IvionParser::RulePlayerControlAmountValue;
}


antlrcpp::Any IvionParser::PlayerControlAmountValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerControlAmountValue(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerControlAmountValueContext* IvionParser::playerControlAmountValue() {
  PlayerControlAmountValueContext *_localctx = _tracker.createInstance<PlayerControlAmountValueContext>(_ctx, getState());
  enterRule(_localctx, 280, IvionParser::RulePlayerControlAmountValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2246);
    match(IvionParser::The);
    setState(2247);
    match(IvionParser::Total);
    setState(2248);
    match(IvionParser::Value);
    setState(2249);
    match(IvionParser::Of);
    setState(2250);
    match(IvionParser::Control);
    setState(2251);
    match(IvionParser::Affecting);
    setState(2252);
    player();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerHandSizeContext ------------------------------------------------------------------

IvionParser::PlayerHandSizeContext::PlayerHandSizeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PlayerHandSizeContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::PlayerHandSizeContext::Number() {
  return getToken(IvionParser::Number, 0);
}

tree::TerminalNode* IvionParser::PlayerHandSizeContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::PlayerHandSizeContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::PlayerHandSizeContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::PlayerHandSizeContext::Their() {
  return getToken(IvionParser::Their, 0);
}

tree::TerminalNode* IvionParser::PlayerHandSizeContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}


size_t IvionParser::PlayerHandSizeContext::getRuleIndex() const {
  return IvionParser::RulePlayerHandSize;
}


antlrcpp::Any IvionParser::PlayerHandSizeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerHandSize(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerHandSizeContext* IvionParser::playerHandSize() {
  PlayerHandSizeContext *_localctx = _tracker.createInstance<PlayerHandSizeContext>(_ctx, getState());
  enterRule(_localctx, 282, IvionParser::RulePlayerHandSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2254);
    match(IvionParser::The);
    setState(2255);
    match(IvionParser::Number);
    setState(2256);
    match(IvionParser::Of);
    setState(2257);
    hypotheticalCard();
    setState(2258);
    match(IvionParser::In);
    setState(2259);
    match(IvionParser::Their);
    setState(2260);
    match(IvionParser::Hand);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerMitigateContext ------------------------------------------------------------------

IvionParser::PlayerMitigateContext::PlayerMitigateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::PlayerMitigateContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerMitigateContext::Mitigate() {
  return getToken(IvionParser::Mitigate, 0);
}


size_t IvionParser::PlayerMitigateContext::getRuleIndex() const {
  return IvionParser::RulePlayerMitigate;
}


antlrcpp::Any IvionParser::PlayerMitigateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerMitigate(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerMitigateContext* IvionParser::playerMitigate() {
  PlayerMitigateContext *_localctx = _tracker.createInstance<PlayerMitigateContext>(_ctx, getState());
  enterRule(_localctx, 284, IvionParser::RulePlayerMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2262);
    player();
    setState(2263);
    match(IvionParser::Mitigate);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralValueContext ------------------------------------------------------------------

IvionParser::LiteralValueContext::LiteralValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::OneContext* IvionParser::LiteralValueContext::one() {
  return getRuleContext<IvionParser::OneContext>(0);
}

IvionParser::TwoContext* IvionParser::LiteralValueContext::two() {
  return getRuleContext<IvionParser::TwoContext>(0);
}

IvionParser::ThreeContext* IvionParser::LiteralValueContext::three() {
  return getRuleContext<IvionParser::ThreeContext>(0);
}

IvionParser::NumberContext* IvionParser::LiteralValueContext::number() {
  return getRuleContext<IvionParser::NumberContext>(0);
}


size_t IvionParser::LiteralValueContext::getRuleIndex() const {
  return IvionParser::RuleLiteralValue;
}


antlrcpp::Any IvionParser::LiteralValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitLiteralValue(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::LiteralValueContext* IvionParser::literalValue() {
  LiteralValueContext *_localctx = _tracker.createInstance<LiteralValueContext>(_ctx, getState());
  enterRule(_localctx, 286, IvionParser::RuleLiteralValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2269);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::A:
      case IvionParser::Once:
      case IvionParser::One: {
        enterOuterAlt(_localctx, 1);
        setState(2265);
        one();
        break;
      }

      case IvionParser::Twice:
      case IvionParser::Two: {
        enterOuterAlt(_localctx, 2);
        setState(2266);
        two();
        break;
      }

      case IvionParser::Three: {
        enterOuterAlt(_localctx, 3);
        setState(2267);
        three();
        break;
      }

      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 4);
        setState(2268);
        number();
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

//----------------- GameStateValueContext ------------------------------------------------------------------

IvionParser::GameStateValueContext::GameStateValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerPowerValueContext* IvionParser::GameStateValueContext::playerPowerValue() {
  return getRuleContext<IvionParser::PlayerPowerValueContext>(0);
}

IvionParser::PlayerControlAmountValueContext* IvionParser::GameStateValueContext::playerControlAmountValue() {
  return getRuleContext<IvionParser::PlayerControlAmountValueContext>(0);
}

IvionParser::PlayerHandSizeContext* IvionParser::GameStateValueContext::playerHandSize() {
  return getRuleContext<IvionParser::PlayerHandSizeContext>(0);
}

IvionParser::PlayerMitigateContext* IvionParser::GameStateValueContext::playerMitigate() {
  return getRuleContext<IvionParser::PlayerMitigateContext>(0);
}


size_t IvionParser::GameStateValueContext::getRuleIndex() const {
  return IvionParser::RuleGameStateValue;
}


antlrcpp::Any IvionParser::GameStateValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGameStateValue(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GameStateValueContext* IvionParser::gameStateValue() {
  GameStateValueContext *_localctx = _tracker.createInstance<GameStateValueContext>(_ctx, getState());
  enterRule(_localctx, 288, IvionParser::RuleGameStateValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2275);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2271);
      playerPowerValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2272);
      playerControlAmountValue();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2273);
      playerHandSize();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2274);
      playerMitigate();
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

//----------------- ChooseSameMultipleTimesContext ------------------------------------------------------------------

IvionParser::ChooseSameMultipleTimesContext::ChooseSameMultipleTimesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ChooseSameMultipleTimesContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::ChooseSameMultipleTimesContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::ChooseSameMultipleTimesContext::Choose() {
  return getToken(IvionParser::Choose, 0);
}

tree::TerminalNode* IvionParser::ChooseSameMultipleTimesContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::ChooseSameMultipleTimesContext::Same() {
  return getToken(IvionParser::Same, 0);
}

tree::TerminalNode* IvionParser::ChooseSameMultipleTimesContext::Mode() {
  return getToken(IvionParser::Mode, 0);
}

IvionParser::LiteralValueContext* IvionParser::ChooseSameMultipleTimesContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}


size_t IvionParser::ChooseSameMultipleTimesContext::getRuleIndex() const {
  return IvionParser::RuleChooseSameMultipleTimes;
}


antlrcpp::Any IvionParser::ChooseSameMultipleTimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitChooseSameMultipleTimes(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ChooseSameMultipleTimesContext* IvionParser::chooseSameMultipleTimes() {
  ChooseSameMultipleTimesContext *_localctx = _tracker.createInstance<ChooseSameMultipleTimesContext>(_ctx, getState());
  enterRule(_localctx, 290, IvionParser::RuleChooseSameMultipleTimes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2277);
    match(IvionParser::You);
    setState(2278);
    match(IvionParser::May);
    setState(2279);
    match(IvionParser::Choose);
    setState(2280);
    match(IvionParser::The);
    setState(2281);
    match(IvionParser::Same);
    setState(2282);
    match(IvionParser::Mode);
    setState(2283);
    literalValue();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EffectListContext ------------------------------------------------------------------

IvionParser::EffectListContext::EffectListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::EffectListContext::D() {
  return getToken(IvionParser::D, 0);
}

IvionParser::EffectContext* IvionParser::EffectListContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

IvionParser::EffectListContext* IvionParser::EffectListContext::effectList() {
  return getRuleContext<IvionParser::EffectListContext>(0);
}

tree::TerminalNode* IvionParser::EffectListContext::P() {
  return getToken(IvionParser::P, 0);
}


size_t IvionParser::EffectListContext::getRuleIndex() const {
  return IvionParser::RuleEffectList;
}


antlrcpp::Any IvionParser::EffectListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitEffectList(this);
  else
    return visitor->visitChildren(this);
}


IvionParser::EffectListContext* IvionParser::effectList() {
   return effectList(0);
}

IvionParser::EffectListContext* IvionParser::effectList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  IvionParser::EffectListContext *_localctx = _tracker.createInstance<EffectListContext>(_ctx, parentState);
  IvionParser::EffectListContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 292;
  enterRecursionRule(_localctx, 292, IvionParser::RuleEffectList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2286);
    match(IvionParser::D);
    setState(2287);
    effect();
    _ctx->stop = _input->LT(-1);
    setState(2295);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EffectListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEffectList);
        setState(2289);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2290);
        match(IvionParser::P);
        setState(2291);
        match(IvionParser::D);
        setState(2292);
        effect(); 
      }
      setState(2297);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 95, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ChooseEffectContext ------------------------------------------------------------------

IvionParser::ChooseEffectContext::ChooseEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ChooseEffectContext::Choose() {
  return getToken(IvionParser::Choose, 0);
}

IvionParser::LiteralValueContext* IvionParser::ChooseEffectContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::Each() {
  return getToken(IvionParser::Each, 0);
}

IvionParser::PlayerFilterContext* IvionParser::ChooseEffectContext::playerFilter() {
  return getRuleContext<IvionParser::PlayerFilterContext>(0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::It() {
  return getToken(IvionParser::It, 0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::O() {
  return getToken(IvionParser::O, 0);
}

IvionParser::EffectListContext* IvionParser::ChooseEffectContext::effectList() {
  return getRuleContext<IvionParser::EffectListContext>(0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::P() {
  return getToken(IvionParser::P, 0);
}

IvionParser::ChooseSameMultipleTimesContext* IvionParser::ChooseEffectContext::chooseSameMultipleTimes() {
  return getRuleContext<IvionParser::ChooseSameMultipleTimesContext>(0);
}


size_t IvionParser::ChooseEffectContext::getRuleIndex() const {
  return IvionParser::RuleChooseEffect;
}


antlrcpp::Any IvionParser::ChooseEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitChooseEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ChooseEffectContext* IvionParser::chooseEffect() {
  ChooseEffectContext *_localctx = _tracker.createInstance<ChooseEffectContext>(_ctx, getState());
  enterRule(_localctx, 294, IvionParser::RuleChooseEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2332);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2298);
      match(IvionParser::Choose);
      setState(2299);
      literalValue();
      setState(2300);
      match(IvionParser::For);
      setState(2301);
      match(IvionParser::Each);
      setState(2302);
      playerFilter();
      setState(2303);
      match(IvionParser::In);
      setState(2304);
      match(IvionParser::It);
      setState(2305);
      match(IvionParser::O);
      setState(2306);
      effectList(0);
      setState(2307);
      match(IvionParser::P);
      setState(2308);
      chooseSameMultipleTimes();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2310);
      match(IvionParser::Choose);
      setState(2311);
      literalValue();
      setState(2312);
      match(IvionParser::O);
      setState(2313);
      effectList(0);
      setState(2314);
      match(IvionParser::P);
      setState(2315);
      chooseSameMultipleTimes();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2317);
      match(IvionParser::Choose);
      setState(2318);
      literalValue();
      setState(2319);
      match(IvionParser::O);
      setState(2320);
      effectList(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2322);
      match(IvionParser::Choose);
      setState(2323);
      literalValue();
      setState(2324);
      match(IvionParser::For);
      setState(2325);
      match(IvionParser::Each);
      setState(2326);
      playerFilter();
      setState(2327);
      match(IvionParser::In);
      setState(2328);
      match(IvionParser::It);
      setState(2329);
      match(IvionParser::O);
      setState(2330);
      effectList(0);
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

//----------------- SingleEffectContext ------------------------------------------------------------------

IvionParser::SingleEffectContext::SingleEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::ChooseEffectContext* IvionParser::SingleEffectContext::chooseEffect() {
  return getRuleContext<IvionParser::ChooseEffectContext>(0);
}

IvionParser::DisarmPlayerContext* IvionParser::SingleEffectContext::disarmPlayer() {
  return getRuleContext<IvionParser::DisarmPlayerContext>(0);
}

IvionParser::SilencePlayerContext* IvionParser::SingleEffectContext::silencePlayer() {
  return getRuleContext<IvionParser::SilencePlayerContext>(0);
}

IvionParser::SlowPlayerContext* IvionParser::SingleEffectContext::slowPlayer() {
  return getRuleContext<IvionParser::SlowPlayerContext>(0);
}

IvionParser::ControlPlayerContext* IvionParser::SingleEffectContext::controlPlayer() {
  return getRuleContext<IvionParser::ControlPlayerContext>(0);
}

IvionParser::TravelPlayerContext* IvionParser::SingleEffectContext::travelPlayer() {
  return getRuleContext<IvionParser::TravelPlayerContext>(0);
}

IvionParser::TravelDistanceContext* IvionParser::SingleEffectContext::travelDistance() {
  return getRuleContext<IvionParser::TravelDistanceContext>(0);
}

IvionParser::DestroyCardContext* IvionParser::SingleEffectContext::destroyCard() {
  return getRuleContext<IvionParser::DestroyCardContext>(0);
}

IvionParser::DealDamageContext* IvionParser::SingleEffectContext::dealDamage() {
  return getRuleContext<IvionParser::DealDamageContext>(0);
}

IvionParser::CounterCardContext* IvionParser::SingleEffectContext::counterCard() {
  return getRuleContext<IvionParser::CounterCardContext>(0);
}

IvionParser::AttachCardContext* IvionParser::SingleEffectContext::attachCard() {
  return getRuleContext<IvionParser::AttachCardContext>(0);
}

IvionParser::GainPowerContext* IvionParser::SingleEffectContext::gainPower() {
  return getRuleContext<IvionParser::GainPowerContext>(0);
}

IvionParser::GainActionContext* IvionParser::SingleEffectContext::gainAction() {
  return getRuleContext<IvionParser::GainActionContext>(0);
}

IvionParser::GainInitiativeContext* IvionParser::SingleEffectContext::gainInitiative() {
  return getRuleContext<IvionParser::GainInitiativeContext>(0);
}

IvionParser::GainMitigateContext* IvionParser::SingleEffectContext::gainMitigate() {
  return getRuleContext<IvionParser::GainMitigateContext>(0);
}

IvionParser::LoseMitigateContext* IvionParser::SingleEffectContext::loseMitigate() {
  return getRuleContext<IvionParser::LoseMitigateContext>(0);
}

IvionParser::UseSecondWindContext* IvionParser::SingleEffectContext::useSecondWind() {
  return getRuleContext<IvionParser::UseSecondWindContext>(0);
}

IvionParser::ReturnCardContext* IvionParser::SingleEffectContext::returnCard() {
  return getRuleContext<IvionParser::ReturnCardContext>(0);
}

IvionParser::PutBottomCardOfDeckIntoHandContext* IvionParser::SingleEffectContext::putBottomCardOfDeckIntoHand() {
  return getRuleContext<IvionParser::PutBottomCardOfDeckIntoHandContext>(0);
}

IvionParser::TriggerDurationEffectsContext* IvionParser::SingleEffectContext::triggerDurationEffects() {
  return getRuleContext<IvionParser::TriggerDurationEffectsContext>(0);
}

IvionParser::PlayCardContext* IvionParser::SingleEffectContext::playCard() {
  return getRuleContext<IvionParser::PlayCardContext>(0);
}

IvionParser::DiscardCardsContext* IvionParser::SingleEffectContext::discardCards() {
  return getRuleContext<IvionParser::DiscardCardsContext>(0);
}

IvionParser::GainsHeroicContext* IvionParser::SingleEffectContext::gainsHeroic() {
  return getRuleContext<IvionParser::GainsHeroicContext>(0);
}

IvionParser::HealPlayerContext* IvionParser::SingleEffectContext::healPlayer() {
  return getRuleContext<IvionParser::HealPlayerContext>(0);
}

IvionParser::StunPlayerContext* IvionParser::SingleEffectContext::stunPlayer() {
  return getRuleContext<IvionParser::StunPlayerContext>(0);
}

IvionParser::RevealCardsContext* IvionParser::SingleEffectContext::revealCards() {
  return getRuleContext<IvionParser::RevealCardsContext>(0);
}

IvionParser::DrawCardsContext* IvionParser::SingleEffectContext::drawCards() {
  return getRuleContext<IvionParser::DrawCardsContext>(0);
}

IvionParser::RemoveControlContext* IvionParser::SingleEffectContext::removeControl() {
  return getRuleContext<IvionParser::RemoveControlContext>(0);
}

IvionParser::HardcastEffectContext* IvionParser::SingleEffectContext::hardcastEffect() {
  return getRuleContext<IvionParser::HardcastEffectContext>(0);
}

IvionParser::SeekEffectContext* IvionParser::SingleEffectContext::seekEffect() {
  return getRuleContext<IvionParser::SeekEffectContext>(0);
}

IvionParser::MakeTerrainContext* IvionParser::SingleEffectContext::makeTerrain() {
  return getRuleContext<IvionParser::MakeTerrainContext>(0);
}

IvionParser::RemoveTerrainContext* IvionParser::SingleEffectContext::removeTerrain() {
  return getRuleContext<IvionParser::RemoveTerrainContext>(0);
}

IvionParser::SpendResourcesContext* IvionParser::SingleEffectContext::spendResources() {
  return getRuleContext<IvionParser::SpendResourcesContext>(0);
}

IvionParser::ScryEffectContext* IvionParser::SingleEffectContext::scryEffect() {
  return getRuleContext<IvionParser::ScryEffectContext>(0);
}

IvionParser::OverrideFrenzyContext* IvionParser::SingleEffectContext::overrideFrenzy() {
  return getRuleContext<IvionParser::OverrideFrenzyContext>(0);
}

IvionParser::IncreaseCardDurationContext* IvionParser::SingleEffectContext::increaseCardDuration() {
  return getRuleContext<IvionParser::IncreaseCardDurationContext>(0);
}

IvionParser::ResetUseOfCardContext* IvionParser::SingleEffectContext::resetUseOfCard() {
  return getRuleContext<IvionParser::ResetUseOfCardContext>(0);
}

IvionParser::HeroicContext* IvionParser::SingleEffectContext::heroic() {
  return getRuleContext<IvionParser::HeroicContext>(0);
}


size_t IvionParser::SingleEffectContext::getRuleIndex() const {
  return IvionParser::RuleSingleEffect;
}


antlrcpp::Any IvionParser::SingleEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSingleEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SingleEffectContext* IvionParser::singleEffect() {
  SingleEffectContext *_localctx = _tracker.createInstance<SingleEffectContext>(_ctx, getState());
  enterRule(_localctx, 296, IvionParser::RuleSingleEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2373);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2334);
      chooseEffect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2335);
      disarmPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2336);
      silencePlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2337);
      slowPlayer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2338);
      controlPlayer();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2339);
      travelPlayer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2340);
      travelDistance();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2341);
      destroyCard();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2342);
      dealDamage();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2343);
      counterCard();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2344);
      attachCard();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2345);
      gainPower();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2346);
      gainAction();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2347);
      gainInitiative();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2348);
      gainMitigate();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2349);
      loseMitigate();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2350);
      useSecondWind();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2351);
      returnCard();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2352);
      putBottomCardOfDeckIntoHand();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2353);
      triggerDurationEffects();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2354);
      playCard();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2355);
      discardCards();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2356);
      gainsHeroic();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2357);
      healPlayer();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2358);
      stunPlayer();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2359);
      revealCards();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2360);
      drawCards();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2361);
      removeControl();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2362);
      hardcastEffect();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2363);
      seekEffect();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2364);
      makeTerrain();
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2365);
      removeTerrain();
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2366);
      spendResources();
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2367);
      scryEffect();
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2368);
      overrideFrenzy();
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2369);
      increaseCardDuration();
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2370);
      resetUseOfCard();
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2371);
      heroic();
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2372);
      spendResources();
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

//----------------- RepeatedEffectContext ------------------------------------------------------------------

IvionParser::RepeatedEffectContext::RepeatedEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::SingleEffectContext* IvionParser::RepeatedEffectContext::singleEffect() {
  return getRuleContext<IvionParser::SingleEffectContext>(0);
}

tree::TerminalNode* IvionParser::RepeatedEffectContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::RepeatedEffectContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::RepeatedEffectContext::Instance() {
  return getToken(IvionParser::Instance, 0);
}

tree::TerminalNode* IvionParser::RepeatedEffectContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::RepeatedEffectContext::Control() {
  return getToken(IvionParser::Control, 0);
}

IvionParser::PlayerRefContext* IvionParser::RepeatedEffectContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::RepeatedEffectContext::Receive() {
  return getToken(IvionParser::Receive, 0);
}


size_t IvionParser::RepeatedEffectContext::getRuleIndex() const {
  return IvionParser::RuleRepeatedEffect;
}


antlrcpp::Any IvionParser::RepeatedEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitRepeatedEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::RepeatedEffectContext* IvionParser::repeatedEffect() {
  RepeatedEffectContext *_localctx = _tracker.createInstance<RepeatedEffectContext>(_ctx, getState());
  enterRule(_localctx, 298, IvionParser::RuleRepeatedEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2385);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2375);
      singleEffect();
      setState(2376);
      match(IvionParser::For);
      setState(2377);
      match(IvionParser::Each);
      setState(2378);
      match(IvionParser::Instance);
      setState(2379);
      match(IvionParser::Of);
      setState(2380);
      match(IvionParser::Control);
      setState(2381);
      playerRef();
      setState(2382);
      match(IvionParser::Receive);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2384);
      singleEffect();
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

//----------------- ConditionalEffectContext ------------------------------------------------------------------

IvionParser::ConditionalEffectContext::ConditionalEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::ConditionContext* IvionParser::ConditionalEffectContext::condition() {
  return getRuleContext<IvionParser::ConditionContext>(0);
}

tree::TerminalNode* IvionParser::ConditionalEffectContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::EffectContext* IvionParser::ConditionalEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

IvionParser::RepeatedEffectContext* IvionParser::ConditionalEffectContext::repeatedEffect() {
  return getRuleContext<IvionParser::RepeatedEffectContext>(0);
}


size_t IvionParser::ConditionalEffectContext::getRuleIndex() const {
  return IvionParser::RuleConditionalEffect;
}


antlrcpp::Any IvionParser::ConditionalEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitConditionalEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ConditionalEffectContext* IvionParser::conditionalEffect() {
  ConditionalEffectContext *_localctx = _tracker.createInstance<ConditionalEffectContext>(_ctx, getState());
  enterRule(_localctx, 300, IvionParser::RuleConditionalEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2392);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(2387);
        condition();
        setState(2388);
        match(IvionParser::C);
        setState(2389);
        effect();
        break;
      }

      case IvionParser::Disarm:
      case IvionParser::Target:
      case IvionParser::Them:
      case IvionParser::Silence:
      case IvionParser::That:
      case IvionParser::Yourself:
      case IvionParser::Slow:
      case IvionParser::The:
      case IvionParser::Apply:
      case IvionParser::A:
      case IvionParser::Your:
      case IvionParser::Each:
      case IvionParser::Increase:
      case IvionParser::Travel:
      case IvionParser::Another:
      case IvionParser::You:
      case IvionParser::Up:
      case IvionParser::They:
      case IvionParser::Destroy:
      case IvionParser::All:
      case IvionParser::Deal:
      case IvionParser::Their:
      case IvionParser::Counter:
      case IvionParser::Its:
      case IvionParser::Spend:
      case IvionParser::Attach:
      case IvionParser::Gain:
      case IvionParser::Lose:
      case IvionParser::Use:
      case IvionParser::Return:
      case IvionParser::Discard:
      case IvionParser::Put:
      case IvionParser::Trigger:
      case IvionParser::Play:
      case IvionParser::Heroic:
      case IvionParser::Heal:
      case IvionParser::Stun:
      case IvionParser::Reveals:
      case IvionParser::Reveal:
      case IvionParser::Draw:
      case IvionParser::Remove:
      case IvionParser::Hardcast:
      case IvionParser::Seek:
      case IvionParser::Make:
      case IvionParser::Look:
      case IvionParser::Any:
      case IvionParser::Reset:
      case IvionParser::Once:
      case IvionParser::Twice:
      case IvionParser::Integer:
      case IvionParser::One:
      case IvionParser::Two:
      case IvionParser::Three:
      case IvionParser::Choose: {
        enterOuterAlt(_localctx, 2);
        setState(2391);
        repeatedEffect();
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

//----------------- AlternativeEffectContext ------------------------------------------------------------------

IvionParser::AlternativeEffectContext::AlternativeEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::ConditionContext* IvionParser::AlternativeEffectContext::condition() {
  return getRuleContext<IvionParser::ConditionContext>(0);
}

tree::TerminalNode* IvionParser::AlternativeEffectContext::C() {
  return getToken(IvionParser::C, 0);
}

tree::TerminalNode* IvionParser::AlternativeEffectContext::Instead() {
  return getToken(IvionParser::Instead, 0);
}

IvionParser::EffectContext* IvionParser::AlternativeEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

IvionParser::ConditionalEffectContext* IvionParser::AlternativeEffectContext::conditionalEffect() {
  return getRuleContext<IvionParser::ConditionalEffectContext>(0);
}


size_t IvionParser::AlternativeEffectContext::getRuleIndex() const {
  return IvionParser::RuleAlternativeEffect;
}


antlrcpp::Any IvionParser::AlternativeEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAlternativeEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AlternativeEffectContext* IvionParser::alternativeEffect() {
  AlternativeEffectContext *_localctx = _tracker.createInstance<AlternativeEffectContext>(_ctx, getState());
  enterRule(_localctx, 302, IvionParser::RuleAlternativeEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2400);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2394);
      condition();
      setState(2395);
      match(IvionParser::C);
      setState(2396);
      match(IvionParser::Instead);
      setState(2397);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2399);
      conditionalEffect();
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

//----------------- EffectContext ------------------------------------------------------------------

IvionParser::EffectContext::EffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::EffectContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::EffectContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::EffectContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::EffectContext::Have() {
  return getToken(IvionParser::Have, 0);
}

std::vector<IvionParser::AlternativeEffectContext *> IvionParser::EffectContext::alternativeEffect() {
  return getRuleContexts<IvionParser::AlternativeEffectContext>();
}

IvionParser::AlternativeEffectContext* IvionParser::EffectContext::alternativeEffect(size_t i) {
  return getRuleContext<IvionParser::AlternativeEffectContext>(i);
}

tree::TerminalNode* IvionParser::EffectContext::To() {
  return getToken(IvionParser::To, 0);
}

tree::TerminalNode* IvionParser::EffectContext::Unless() {
  return getToken(IvionParser::Unless, 0);
}


size_t IvionParser::EffectContext::getRuleIndex() const {
  return IvionParser::RuleEffect;
}


antlrcpp::Any IvionParser::EffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EffectContext* IvionParser::effect() {
  EffectContext *_localctx = _tracker.createInstance<EffectContext>(_ctx, getState());
  enterRule(_localctx, 304, IvionParser::RuleEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2424);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2402);
      hypotheticalPlayer();
      setState(2403);
      match(IvionParser::May);
      setState(2404);
      match(IvionParser::Have);
      setState(2405);
      hypotheticalPlayer();
      setState(2406);
      alternativeEffect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2408);
      hypotheticalPlayer();
      setState(2409);
      match(IvionParser::May);
      setState(2410);
      alternativeEffect();
      setState(2411);
      match(IvionParser::To);
      setState(2412);
      alternativeEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2414);
      hypotheticalPlayer();
      setState(2415);
      match(IvionParser::May);
      setState(2416);
      alternativeEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2418);
      alternativeEffect();
      setState(2419);
      match(IvionParser::Unless);
      setState(2420);
      hypotheticalPlayer();
      setState(2421);
      alternativeEffect();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2423);
      alternativeEffect();
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

//----------------- EffectEndContext ------------------------------------------------------------------

IvionParser::EffectEndContext::EffectEndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::EffectEndContext::P() {
  return getToken(IvionParser::P, 0);
}

tree::TerminalNode* IvionParser::EffectEndContext::Then() {
  return getToken(IvionParser::Then, 0);
}

tree::TerminalNode* IvionParser::EffectEndContext::C() {
  return getToken(IvionParser::C, 0);
}

tree::TerminalNode* IvionParser::EffectEndContext::And() {
  return getToken(IvionParser::And, 0);
}


size_t IvionParser::EffectEndContext::getRuleIndex() const {
  return IvionParser::RuleEffectEnd;
}


antlrcpp::Any IvionParser::EffectEndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitEffectEnd(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::EffectEndContext* IvionParser::effectEnd() {
  EffectEndContext *_localctx = _tracker.createInstance<EffectEndContext>(_ctx, getState());
  enterRule(_localctx, 306, IvionParser::RuleEffectEnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2426);
      match(IvionParser::P);
      setState(2427);
      match(IvionParser::Then);
      setState(2428);
      match(IvionParser::C);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2429);
      match(IvionParser::P);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2430);
      match(IvionParser::And);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2431);
      match(IvionParser::C);
      setState(2432);
      match(IvionParser::And);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2433);
      match(IvionParser::C);
      setState(2434);
      match(IvionParser::Then);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2435);
      match(IvionParser::C);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2436);
      match(IvionParser::Then);
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

//----------------- AnyEffectContext ------------------------------------------------------------------

IvionParser::AnyEffectContext::AnyEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::EffectContext* IvionParser::AnyEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

IvionParser::PassiveEffectContext* IvionParser::AnyEffectContext::passiveEffect() {
  return getRuleContext<IvionParser::PassiveEffectContext>(0);
}

IvionParser::ReplacementTriggerEffectContext* IvionParser::AnyEffectContext::replacementTriggerEffect() {
  return getRuleContext<IvionParser::ReplacementTriggerEffectContext>(0);
}

IvionParser::TriggerEffectContext* IvionParser::AnyEffectContext::triggerEffect() {
  return getRuleContext<IvionParser::TriggerEffectContext>(0);
}


size_t IvionParser::AnyEffectContext::getRuleIndex() const {
  return IvionParser::RuleAnyEffect;
}


antlrcpp::Any IvionParser::AnyEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAnyEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AnyEffectContext* IvionParser::anyEffect() {
  AnyEffectContext *_localctx = _tracker.createInstance<AnyEffectContext>(_ctx, getState());
  enterRule(_localctx, 308, IvionParser::RuleAnyEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2443);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2439);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2440);
      passiveEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2441);
      replacementTriggerEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2442);
      triggerEffect();
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

//----------------- BreachEffectContext ------------------------------------------------------------------

IvionParser::BreachEffectContext::BreachEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::BreachEffectContext::Breach() {
  return getToken(IvionParser::Breach, 0);
}

tree::TerminalNode* IvionParser::BreachEffectContext::D() {
  return getToken(IvionParser::D, 0);
}

std::vector<IvionParser::AnyEffectContext *> IvionParser::BreachEffectContext::anyEffect() {
  return getRuleContexts<IvionParser::AnyEffectContext>();
}

IvionParser::AnyEffectContext* IvionParser::BreachEffectContext::anyEffect(size_t i) {
  return getRuleContext<IvionParser::AnyEffectContext>(i);
}

std::vector<IvionParser::EffectEndContext *> IvionParser::BreachEffectContext::effectEnd() {
  return getRuleContexts<IvionParser::EffectEndContext>();
}

IvionParser::EffectEndContext* IvionParser::BreachEffectContext::effectEnd(size_t i) {
  return getRuleContext<IvionParser::EffectEndContext>(i);
}


size_t IvionParser::BreachEffectContext::getRuleIndex() const {
  return IvionParser::RuleBreachEffect;
}


antlrcpp::Any IvionParser::BreachEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitBreachEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::BreachEffectContext* IvionParser::breachEffect() {
  BreachEffectContext *_localctx = _tracker.createInstance<BreachEffectContext>(_ctx, getState());
  enterRule(_localctx, 310, IvionParser::RuleBreachEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2445);
    match(IvionParser::Breach);
    setState(2446);
    match(IvionParser::D);
    setState(2450); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2447);
              anyEffect();
              setState(2448);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2452); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdvantageEffectContext ------------------------------------------------------------------

IvionParser::AdvantageEffectContext::AdvantageEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::AdvantageEffectContext::Advantage() {
  return getToken(IvionParser::Advantage, 0);
}

tree::TerminalNode* IvionParser::AdvantageEffectContext::D() {
  return getToken(IvionParser::D, 0);
}

std::vector<IvionParser::AnyEffectContext *> IvionParser::AdvantageEffectContext::anyEffect() {
  return getRuleContexts<IvionParser::AnyEffectContext>();
}

IvionParser::AnyEffectContext* IvionParser::AdvantageEffectContext::anyEffect(size_t i) {
  return getRuleContext<IvionParser::AnyEffectContext>(i);
}

std::vector<IvionParser::EffectEndContext *> IvionParser::AdvantageEffectContext::effectEnd() {
  return getRuleContexts<IvionParser::EffectEndContext>();
}

IvionParser::EffectEndContext* IvionParser::AdvantageEffectContext::effectEnd(size_t i) {
  return getRuleContext<IvionParser::EffectEndContext>(i);
}


size_t IvionParser::AdvantageEffectContext::getRuleIndex() const {
  return IvionParser::RuleAdvantageEffect;
}


antlrcpp::Any IvionParser::AdvantageEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAdvantageEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AdvantageEffectContext* IvionParser::advantageEffect() {
  AdvantageEffectContext *_localctx = _tracker.createInstance<AdvantageEffectContext>(_ctx, getState());
  enterRule(_localctx, 312, IvionParser::RuleAdvantageEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2454);
    match(IvionParser::Advantage);
    setState(2455);
    match(IvionParser::D);
    setState(2459); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2456);
              anyEffect();
              setState(2457);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2461); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FrenzyEffectContext ------------------------------------------------------------------

IvionParser::FrenzyEffectContext::FrenzyEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::FrenzyEffectContext::Frenzy() {
  return getToken(IvionParser::Frenzy, 0);
}

tree::TerminalNode* IvionParser::FrenzyEffectContext::D() {
  return getToken(IvionParser::D, 0);
}

std::vector<IvionParser::AnyEffectContext *> IvionParser::FrenzyEffectContext::anyEffect() {
  return getRuleContexts<IvionParser::AnyEffectContext>();
}

IvionParser::AnyEffectContext* IvionParser::FrenzyEffectContext::anyEffect(size_t i) {
  return getRuleContext<IvionParser::AnyEffectContext>(i);
}

std::vector<IvionParser::EffectEndContext *> IvionParser::FrenzyEffectContext::effectEnd() {
  return getRuleContexts<IvionParser::EffectEndContext>();
}

IvionParser::EffectEndContext* IvionParser::FrenzyEffectContext::effectEnd(size_t i) {
  return getRuleContext<IvionParser::EffectEndContext>(i);
}


size_t IvionParser::FrenzyEffectContext::getRuleIndex() const {
  return IvionParser::RuleFrenzyEffect;
}


antlrcpp::Any IvionParser::FrenzyEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitFrenzyEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::FrenzyEffectContext* IvionParser::frenzyEffect() {
  FrenzyEffectContext *_localctx = _tracker.createInstance<FrenzyEffectContext>(_ctx, getState());
  enterRule(_localctx, 314, IvionParser::RuleFrenzyEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2463);
    match(IvionParser::Frenzy);
    setState(2464);
    match(IvionParser::D);
    setState(2468); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2465);
              anyEffect();
              setState(2466);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2470); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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

IvionParser::OmniPresentEffectContext* IvionParser::LineContext::omniPresentEffect() {
  return getRuleContext<IvionParser::OmniPresentEffectContext>(0);
}

tree::TerminalNode* IvionParser::LineContext::P() {
  return getToken(IvionParser::P, 0);
}

IvionParser::BreachEffectContext* IvionParser::LineContext::breachEffect() {
  return getRuleContext<IvionParser::BreachEffectContext>(0);
}

IvionParser::AdvantageEffectContext* IvionParser::LineContext::advantageEffect() {
  return getRuleContext<IvionParser::AdvantageEffectContext>(0);
}

IvionParser::FrenzyEffectContext* IvionParser::LineContext::frenzyEffect() {
  return getRuleContext<IvionParser::FrenzyEffectContext>(0);
}

IvionParser::AnyEffectContext* IvionParser::LineContext::anyEffect() {
  return getRuleContext<IvionParser::AnyEffectContext>(0);
}

IvionParser::EffectEndContext* IvionParser::LineContext::effectEnd() {
  return getRuleContext<IvionParser::EffectEndContext>(0);
}


size_t IvionParser::LineContext::getRuleIndex() const {
  return IvionParser::RuleLine;
}


antlrcpp::Any IvionParser::LineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitLine(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::LineContext* IvionParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 316, IvionParser::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2481);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2472);
      omniPresentEffect();
      setState(2473);
      match(IvionParser::P);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2475);
      breachEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2476);
      advantageEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2477);
      frenzyEffect();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2478);
      anyEffect();
      setState(2479);
      effectEnd();
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

std::vector<IvionParser::LineContext *> IvionParser::TextContext::line() {
  return getRuleContexts<IvionParser::LineContext>();
}

IvionParser::LineContext* IvionParser::TextContext::line(size_t i) {
  return getRuleContext<IvionParser::LineContext>(i);
}


size_t IvionParser::TextContext::getRuleIndex() const {
  return IvionParser::RuleText;
}


antlrcpp::Any IvionParser::TextContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitText(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TextContext* IvionParser::text() {
  TextContext *_localctx = _tracker.createInstance<TextContext>(_ctx, getState());
  enterRule(_localctx, 318, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2484); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(2483);
      line();
      setState(2486); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Disarm)
      | (1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Them)
      | (1ULL << IvionParser::Silence)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::Slow)
      | (1ULL << IvionParser::The)
      | (1ULL << IvionParser::Apply)
      | (1ULL << IvionParser::A)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::Each)
      | (1ULL << IvionParser::Increase)
      | (1ULL << IvionParser::Travel)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::Player)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::Up)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::Destroy)
      | (1ULL << IvionParser::Card)
      | (1ULL << IvionParser::Attached)
      | (1ULL << IvionParser::All)
      | (1ULL << IvionParser::Deal)
      | (1ULL << IvionParser::Revealed)
      | (1ULL << IvionParser::Their)
      | (1ULL << IvionParser::Counter)
      | (1ULL << IvionParser::Its)
      | (1ULL << IvionParser::Spend))) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & ((1ULL << (IvionParser::Controlled - 70))
      | (1ULL << (IvionParser::Uncontrolled - 70))
      | (1ULL << (IvionParser::Non - 70))
      | (1ULL << (IvionParser::Attack - 70))
      | (1ULL << (IvionParser::Ability - 70))
      | (1ULL << (IvionParser::If - 70))
      | (1ULL << (IvionParser::Attach - 70))
      | (1ULL << (IvionParser::Gain - 70))
      | (1ULL << (IvionParser::Lose - 70))
      | (1ULL << (IvionParser::Use - 70))
      | (1ULL << (IvionParser::Second - 70))
      | (1ULL << (IvionParser::Third - 70))
      | (1ULL << (IvionParser::Return - 70))
      | (1ULL << (IvionParser::Discard - 70))
      | (1ULL << (IvionParser::Put - 70))
      | (1ULL << (IvionParser::Trigger - 70))
      | (1ULL << (IvionParser::Duration - 70))
      | (1ULL << (IvionParser::Play - 70))
      | (1ULL << (IvionParser::Frenzy - 70))
      | (1ULL << (IvionParser::Heroic - 70))
      | (1ULL << (IvionParser::Heal - 70))
      | (1ULL << (IvionParser::Stun - 70))
      | (1ULL << (IvionParser::Reveals - 70))
      | (1ULL << (IvionParser::Reveal - 70)))) != 0) || ((((_la - 134) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 134)) & ((1ULL << (IvionParser::Draw - 134))
      | (1ULL << (IvionParser::Remove - 134))
      | (1ULL << (IvionParser::Hardcast - 134))
      | (1ULL << (IvionParser::Seek - 134))
      | (1ULL << (IvionParser::Make - 134))
      | (1ULL << (IvionParser::At - 134))
      | (1ULL << (IvionParser::Look - 134))
      | (1ULL << (IvionParser::Any - 134))
      | (1ULL << (IvionParser::Reset - 134))
      | (1ULL << (IvionParser::Only - 134))
      | (1ULL << (IvionParser::After - 134))
      | (1ULL << (IvionParser::First - 134))
      | (1ULL << (IvionParser::Ally - 134))
      | (1ULL << (IvionParser::While - 134))
      | (1ULL << (IvionParser::Once - 134))
      | (1ULL << (IvionParser::Twice - 134))
      | (1ULL << (IvionParser::CARD_NAME - 134)))) != 0) || ((((_la - 198) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 198)) & ((1ULL << (IvionParser::Integer - 198))
      | (1ULL << (IvionParser::One - 198))
      | (1ULL << (IvionParser::Two - 198))
      | (1ULL << (IvionParser::Three - 198))
      | (1ULL << (IvionParser::Choose - 198))
      | (1ULL << (IvionParser::Breach - 198))
      | (1ULL << (IvionParser::Advantage - 198)))) != 0));
    setState(2488);
    match(IvionParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool IvionParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 146: return effectListSempred(dynamic_cast<EffectListContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool IvionParser::effectListSempred(EffectListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> IvionParser::_decisionToDFA;
atn::PredictionContextCache IvionParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN IvionParser::_atn;
std::vector<uint16_t> IvionParser::_serializedATN;

std::vector<std::string> IvionParser::_ruleNames = {
  "playerType", "playerPreFix", "playerPostFix", "playerFilter", "currentPlayer", 
  "previousPlayer", "playerRef", "targetPlayer", "previousCardsController", 
  "singlePlayer", "multiPlayer", "allOtherPlayers", "allPlayers", "player", 
  "hypotheticalPlayer", "cardPrefix", "cardPostfix", "cardFilter", "cardName", 
  "bottomCard", "previousCard", "targetCard", "singleCard", "allCards", 
  "multiCard", "card", "hypotheticalCard", "tilePreFix", "tilePostFix", 
  "tileFilter", "targetTile", "previousTile", "theNearestTile", "playersTile", 
  "cardsTile", "singleTile", "multiTile", "allTiles", "tile", "hypotheticalTile", 
  "entity", "hypotheticalEntity", "disarmPlayer", "silencePlayer", "slowPlayer", 
  "controlPlayer", "awayFlag", "upToFlag", "travelDistance", "travelPlayer", 
  "destroyCard", "dealDamage", "counterCard", "attachCard", "gainPower", 
  "gainAction", "gainInitiative", "gainMitigate", "loseMitigate", "useSecondWind", 
  "returnCard", "putBottomCardOfDeckIntoHand", "triggerDurationEffects", 
  "playCard", "discardCards", "gainsHeroic", "healPlayer", "stunPlayer", 
  "revealCards", "drawCards", "removeControl", "hardcastEffect", "seekEffect", 
  "makeTerrain", "removeTerrain", "spendResources", "scryEffect", "overrideFrenzy", 
  "increaseCardDuration", "resetUseOfCard", "heroic", "onlyPlayCertainCards", 
  "costReduction", "rangeSet", "cantPlayCards", "playerCantBeTargeted", 
  "increasedHandSize", "increasedMaxHP", "replacesSecondWind", "noInitiative", 
  "drawRange", "gainRange", "limitTargets", "passiveEffect", "durationEffect", 
  "startOfPlayerTurn", "endOfPlayerTurnTrigger", "startOfPlayerNextTurn", 
  "endOfTurnTrigger", "turnTrigger", "gameStartTrigger", "effectPostfix", 
  "afterEffectTrigger", "triggerEffect", "ifWouldRecieveControl", "ifWouldTakeDamage", 
  "ifWouldHeal", "replacementTriggerEffect", "ifPlayerMakesChoice", "ifPreviousActionInvalid", 
  "ifResolvedCard", "ifUsedSecondWind", "ifNear", "ifControlled", "ifPlayed", 
  "ifTileHadTerrain", "ifCardRevealed", "ifPlayerHasMitigate", "ifPlayerDidntLeaveTile", 
  "ifCardCostReduced", "ifPlayerHasMoreHP", "ifPlayerHasNoActions", "ifPlayerInTerrain", 
  "counterCardCondition", "stunPlayerCondition", "revealCardsCondition", 
  "condition", "cardCantBeTargeted", "whileEffect", "primaryCostReduction", 
  "onlyPlayIf", "oncePerGameLimit", "triggerLimit", "triggerTurnLimit", 
  "omniPresentEffect", "one", "two", "three", "number", "playerPowerValue", 
  "playerControlAmountValue", "playerHandSize", "playerMitigate", "literalValue", 
  "gameStateValue", "chooseSameMultipleTimes", "effectList", "chooseEffect", 
  "singleEffect", "repeatedEffect", "conditionalEffect", "alternativeEffect", 
  "effect", "effectEnd", "anyEffect", "breachEffect", "advantageEffect", 
  "frenzyEffect", "line", "text"
};

std::vector<std::string> IvionParser::_literalNames = {
  "", "'disarm'", "'target'", "", "'in'", "'terrain'", "'them'", "'silence'", 
  "'that'", "", "'yourself'", "'slow'", "'the'", "'controller'", "'apply'", 
  "'more'", "'instances'", "'of'", "", "'control'", "'type'", "'your'", 
  "'choice'", "'to'", "'instance'", "'each'", "'near'", "'increase'", "'value'", 
  "'already'", "'affecting'", "'by'", "'travel'", "'another'", "", "'away'", 
  "'from'", "'you'", "'up'", "'nearest'", "'next'", "'unless'", "'they'", 
  "'destroy'", "", "'attached'", "'all'", "'deal'", "'damage'", "'equal'", 
  "'number'", "'revealed'", "'their'", "'hand'", "'plus'", "'mitigate'", 
  "'for'", "'total'", "'counter'", "", "", "", "'targeting'", "'maximum'", 
  "'size'", "'increased'", "'with'", "", "'or'", "'less'", "'controlled'", 
  "'uncontrolled'", "'non-'", "'attack'", "'ability'", "'if'", "", "'replaces'", 
  "'countered'", "'effect'", "'attach'", "'empty'", "'until'", "'end'", 
  "'turn'", "'than'", "'start'", "'gain'", "'additional'", "'gains'", "'lose'", 
  "'use'", "'second'", "'third'", "'wind'", "'return'", "'owner's'", "'discard'", 
  "'may'", "'put'", "'bottom'", "'deck'", "'into'", "'trigger'", "'duration'", 
  "'effects'", "'as'", "'though'", "'had'", "'just'", "'ended'", "'play'", 
  "'free'", "'frenzy'", "'cursed'", "'dagger'", "'this'", "'doesn't'", "'count'", 
  "'towards'", "'limit'", "'per'", "'runic'", "'slaughter'", "'have'", "'discards'", 
  "'heroic'", "'heal'", "'hp'", "'stun'", "'removed'", "'way'", "'reveals'", 
  "'reveal'", "", "'then'", "'except'", "'also'", "'range'", "'remove'", 
  "'hardcast'", "'seek'", "'make'", "'difficult'", "'at'", "'least'", "'are'", 
  "'token'", "'look'", "'top'", "'any'", "'on'", "'and'", "'rest'", "'much'", 
  "'order'", "'has'", "'even'", "'no'", "'used'", "'reset'", "'only'", "'named'", 
  "'resolve'", "'taken'", "'can't'", "'be'", "'targeted'", "'enemies'", 
  "", "'first'", "'during'", "'enters'", "'ally'", "'resolves'", "'time'", 
  "'receive'", "'sent'", "'would'", "'instead'", "'do'", "'don't'", "'resolved'", 
  "'played'", "'while'", "'leave'", "'didn't'", "'take'", "'reduced'", "'not'", 
  "'reduce'", "'below'", "'fails'", "'other'", "'once'", "'twice'", "'game'", 
  "'CARD_NAME'", "", "'one'", "'two'", "'three'", "','", "'.'", "'-'", "':'", 
  "", "", "", "'choose'", "'same'", "'mode'", "'it'", "'breach'", "'advantage'"
};

std::vector<std::string> IvionParser::_symbolicNames = {
  "", "Disarm", "Target", "Enemy", "In", "Terrain", "Them", "Silence", "That", 
  "Tile", "Yourself", "Slow", "The", "Controller", "Apply", "More", "Instances", 
  "Of", "A", "Control", "Type", "Your", "Choice", "To", "Instance", "Each", 
  "Near", "Increase", "Value", "Already", "Affecting", "By", "Travel", "Another", 
  "Player", "Away", "From", "You", "Up", "Nearest", "Next", "Unless", "They", 
  "Destroy", "Card", "Attached", "All", "Deal", "Damage", "Equal", "Number", 
  "Revealed", "Their", "Hand", "Plus", "Mitigate", "For", "Total", "Counter", 
  "Its", "Spend", "Resource", "Targeting", "Maximum", "Size", "Increased", 
  "With", "Cost", "Or", "Less", "Controlled", "Uncontrolled", "Non", "Attack", 
  "Ability", "If", "Is", "Replaces", "Countered", "Effect", "Attach", "Empty", 
  "Until", "End", "Turn", "Than", "Start", "Gain", "Additional", "Gains", 
  "Lose", "Use", "Second", "Third", "Wind", "Return", "Owners", "Discard", 
  "May", "Put", "Bottom", "Deck", "Into", "Trigger", "Duration", "Effects", 
  "As", "Though", "Had", "Just", "Ended", "Play", "Free", "Frenzy", "Cursed", 
  "Dagger", "This", "Doesnt", "Count", "Towards", "Limit", "Per", "Runic", 
  "Slaughter", "Have", "Discards", "Heroic", "Heal", "HP", "Stun", "Removed", 
  "Way", "Reveals", "Reveal", "Draw", "Then", "Except", "Also", "Range", 
  "Remove", "Hardcast", "Seek", "Make", "Difficult", "At", "Least", "Are", 
  "Token", "Look", "Top", "Any", "On", "And", "Rest", "Much", "Order", "Has", 
  "Even", "No", "Used", "Reset", "Only", "Named", "Resolve", "Taken", "Cant", 
  "Be", "Targeted", "Enemies", "After", "First", "During", "Enters", "Ally", 
  "Resolves", "Time", "Receive", "Sent", "Would", "Instead", "Do", "Dont", 
  "Resolved", "Played", "While", "Leave", "Didnt", "Take", "Reduced", "Not", 
  "Reduce", "Below", "Fails", "Other", "Once", "Twice", "Game", "CARD_NAME", 
  "Integer", "One", "Two", "Three", "C", "P", "D", "O", "POWER", "ACTION", 
  "INITIATIVE", "Choose", "Same", "Mode", "It", "Breach", "Advantage", "Whitespace"
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
    0x3, 0xd9, 0x9bd, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 0x9, 
    0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 0x9, 0x5c, 
    0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 0x9, 0x5f, 0x4, 
    0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 0x9, 0x62, 0x4, 0x63, 
    0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 0x9, 0x65, 0x4, 0x66, 0x9, 
    0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 
    0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x4, 
    0x6d, 0x9, 0x6d, 0x4, 0x6e, 0x9, 0x6e, 0x4, 0x6f, 0x9, 0x6f, 0x4, 0x70, 
    0x9, 0x70, 0x4, 0x71, 0x9, 0x71, 0x4, 0x72, 0x9, 0x72, 0x4, 0x73, 0x9, 
    0x73, 0x4, 0x74, 0x9, 0x74, 0x4, 0x75, 0x9, 0x75, 0x4, 0x76, 0x9, 0x76, 
    0x4, 0x77, 0x9, 0x77, 0x4, 0x78, 0x9, 0x78, 0x4, 0x79, 0x9, 0x79, 0x4, 
    0x7a, 0x9, 0x7a, 0x4, 0x7b, 0x9, 0x7b, 0x4, 0x7c, 0x9, 0x7c, 0x4, 0x7d, 
    0x9, 0x7d, 0x4, 0x7e, 0x9, 0x7e, 0x4, 0x7f, 0x9, 0x7f, 0x4, 0x80, 0x9, 
    0x80, 0x4, 0x81, 0x9, 0x81, 0x4, 0x82, 0x9, 0x82, 0x4, 0x83, 0x9, 0x83, 
    0x4, 0x84, 0x9, 0x84, 0x4, 0x85, 0x9, 0x85, 0x4, 0x86, 0x9, 0x86, 0x4, 
    0x87, 0x9, 0x87, 0x4, 0x88, 0x9, 0x88, 0x4, 0x89, 0x9, 0x89, 0x4, 0x8a, 
    0x9, 0x8a, 0x4, 0x8b, 0x9, 0x8b, 0x4, 0x8c, 0x9, 0x8c, 0x4, 0x8d, 0x9, 
    0x8d, 0x4, 0x8e, 0x9, 0x8e, 0x4, 0x8f, 0x9, 0x8f, 0x4, 0x90, 0x9, 0x90, 
    0x4, 0x91, 0x9, 0x91, 0x4, 0x92, 0x9, 0x92, 0x4, 0x93, 0x9, 0x93, 0x4, 
    0x94, 0x9, 0x94, 0x4, 0x95, 0x9, 0x95, 0x4, 0x96, 0x9, 0x96, 0x4, 0x97, 
    0x9, 0x97, 0x4, 0x98, 0x9, 0x98, 0x4, 0x99, 0x9, 0x99, 0x4, 0x9a, 0x9, 
    0x9a, 0x4, 0x9b, 0x9, 0x9b, 0x4, 0x9c, 0x9, 0x9c, 0x4, 0x9d, 0x9, 0x9d, 
    0x4, 0x9e, 0x9, 0x9e, 0x4, 0x9f, 0x9, 0x9f, 0x4, 0xa0, 0x9, 0xa0, 0x4, 
    0xa1, 0x9, 0xa1, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x5, 0x4, 0x157, 0xa, 0x4, 0x3, 0x5, 0x7, 0x5, 0x15a, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x15d, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x161, 
    0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x164, 0xb, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x16d, 0xa, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x171, 0xa, 0x8, 0x3, 0x9, 0x5, 0x9, 0x174, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x17e, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x183, 0xa, 0xb, 0x3, 0xc, 0x5, 0xc, 0x186, 0xa, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 
    0x195, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x19b, 
    0xa, 0xf, 0x3, 0x10, 0x5, 0x10, 0x19e, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x1a2, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x1a7, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x1ab, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x1b3, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x1d7, 0xa, 0x12, 
    0x3, 0x13, 0x7, 0x13, 0x1da, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x1dd, 
    0xb, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x1e1, 0xa, 0x13, 0xc, 0x13, 
    0xe, 0x13, 0x1e4, 0xb, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1f3, 0xa, 0x16, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
    0x18, 0x1fc, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x5, 0x1a, 0x202, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x20a, 0xa, 0x1b, 0x3, 0x1c, 0x5, 0x1c, 
    0x20d, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x211, 0xa, 0x1c, 
    0x3, 0x1d, 0x5, 0x1d, 0x214, 0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 
    0x232, 0xa, 0x1e, 0x3, 0x1f, 0x7, 0x1f, 0x235, 0xa, 0x1f, 0xc, 0x1f, 
    0xe, 0x1f, 0x238, 0xb, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x23c, 
    0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x23f, 0xb, 0x1f, 0x3, 0x20, 0x5, 0x20, 
    0x242, 0xa, 0x20, 0x3, 0x20, 0x5, 0x20, 0x245, 0xa, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x5, 
    0x21, 0x24e, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x257, 0xa, 0x22, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x5, 0x25, 0x267, 0xa, 0x25, 0x3, 0x26, 0x5, 0x26, 0x26a, 0xa, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 0x28, 0x275, 0xa, 0x28, 0x3, 0x29, 
    0x5, 0x29, 0x278, 0xa, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x27c, 
    0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x281, 0xa, 0x2a, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x286, 0xa, 0x2b, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x28e, 
    0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x5, 0x2d, 0x296, 0xa, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 0x2e, 0x29e, 0xa, 0x2e, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 
    0x2c7, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2d2, 0xa, 0x32, 
    0x3, 0x32, 0x5, 0x32, 0x2d5, 0xa, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2d8, 
    0xa, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x2dd, 0xa, 0x32, 
    0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x2e1, 0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x5, 0x33, 0x2e6, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x5, 0x35, 0x32d, 0xa, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 
    0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x5, 0x37, 0x33f, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 
    0x38, 0x5, 0x38, 0x359, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
    0x39, 0x3, 0x39, 0x5, 0x39, 0x373, 0xa, 0x39, 0x3, 0x3a, 0x3, 0x3a, 
    0x6, 0x3a, 0x377, 0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 0x378, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 0x37e, 0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 
    0x37f, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 0x385, 0xa, 0x3a, 
    0xd, 0x3a, 0xe, 0x3a, 0x386, 0x5, 0x3a, 0x389, 0xa, 0x3a, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x5, 0x3b, 0x393, 0xa, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
    0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 
    0x3e, 0x406, 0xa, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 
    0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 
    0x41, 0x5, 0x41, 0x4a2, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
    0x42, 0x5, 0x42, 0x4d5, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 
    0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x4f8, 0xa, 0x44, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 
    0x5, 0x46, 0x53b, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
    0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x557, 0xa, 0x47, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
    0x48, 0x3, 0x48, 0x5, 0x48, 0x56f, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
    0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
    0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
    0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 
    0x51, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
    0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
    0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
    0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
    0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 
    0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x5, 0x53, 0x607, 
    0xa, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x61f, 0xa, 0x54, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
    0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 
    0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
    0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x63d, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
    0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
    0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
    0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
    0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
    0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x687, 
    0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
    0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
    0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x6ac, 0xa, 0x5f, 
    0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
    0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
    0x3, 0x61, 0x5, 0x61, 0x6bc, 0xa, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
    0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
    0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 
    0x64, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0x6d7, 0xa, 0x64, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x5, 0x65, 0x6dd, 0xa, 0x65, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 0x6fc, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x7, 0x68, 
    0x719, 0xa, 0x68, 0xc, 0x68, 0xe, 0x68, 0x71c, 0xb, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x721, 0xa, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x5, 0x68, 0x766, 0xa, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 
    0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x770, 0xa, 0x69, 
    0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 
    0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x5, 0x69, 0x77d, 
    0xa, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
    0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
    0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x5, 0x6b, 0x799, 0xa, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
    0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6c, 
    0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 
    0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 
    0x3, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x5, 0x6d, 0x7bc, 0xa, 0x6d, 
    0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
    0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x5, 0x6e, 
    0x7ca, 0xa, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
    0x3, 0x6f, 0x5, 0x6f, 0x7d2, 0xa, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
    0x5, 0x70, 0x7d7, 0xa, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
    0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x5, 
    0x70, 0x7e3, 0xa, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
    0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x5, 0x70, 0x7ec, 0xa, 0x70, 0x3, 0x71, 
    0x3, 0x71, 0x3, 0x71, 0x5, 0x71, 0x7f1, 0xa, 0x71, 0x3, 0x71, 0x5, 0x71, 
    0x7f4, 0xa, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 
    0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
    0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x5, 0x72, 
    0x807, 0xa, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x811, 0xa, 0x74, 0x3, 0x74, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
    0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 
    0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 
    0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 0x3, 0x77, 
    0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 
    0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 
    0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x7a, 0x3, 
    0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 
    0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 
    0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 
    0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 
    0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x87a, 
    0xa, 0x80, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 
    0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 
    0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x3, 
    0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 
    0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
    0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 
    0x5, 0x88, 0x8bc, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 
    0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
    0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 
    0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
    0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 
    0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 0x8e0, 0xa, 0x91, 
    0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x5, 0x92, 0x8e6, 0xa, 0x92, 
    0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 
    0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 
    0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x7, 0x94, 0x8f8, 0xa, 0x94, 0xc, 0x94, 
    0xe, 0x94, 0x8fb, 0xb, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
    0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 
    0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
    0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 
    0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
    0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x5, 0x95, 0x91f, 0xa, 0x95, 
    0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 
    0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 
    0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 
    0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 
    0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 
    0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 
    0x5, 0x96, 0x948, 0xa, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 
    0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x5, 
    0x97, 0x954, 0xa, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 
    0x3, 0x98, 0x5, 0x98, 0x95b, 0xa, 0x98, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 
    0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x5, 0x99, 0x963, 0xa, 0x99, 0x3, 0x9a, 
    0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 
    0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
    0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 
    0x9a, 0x3, 0x9a, 0x5, 0x9a, 0x97b, 0xa, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 
    0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 
    0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x5, 0x9b, 0x988, 0xa, 0x9b, 0x3, 0x9c, 
    0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x5, 0x9c, 0x98e, 0xa, 0x9c, 0x3, 0x9d, 
    0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x6, 0x9d, 0x995, 0xa, 0x9d, 
    0xd, 0x9d, 0xe, 0x9d, 0x996, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 
    0x3, 0x9e, 0x6, 0x9e, 0x99e, 0xa, 0x9e, 0xd, 0x9e, 0xe, 0x9e, 0x99f, 
    0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x6, 0x9f, 0x9a7, 
    0xa, 0x9f, 0xd, 0x9f, 0xe, 0x9f, 0x9a8, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 
    0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x5, 
    0xa0, 0x9b4, 0xa, 0xa0, 0x3, 0xa1, 0x6, 0xa1, 0x9b7, 0xa, 0xa1, 0xd, 
    0xa1, 0xe, 0xa1, 0x9b8, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x2, 0x3, 0x126, 
    0xa2, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
    0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
    0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
    0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 
    0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 
    0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 
    0xda, 0xdc, 0xde, 0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 
    0xf2, 0xf4, 0xf6, 0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 
    0x108, 0x10a, 0x10c, 0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 
    0x11c, 0x11e, 0x120, 0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 
    0x130, 0x132, 0x134, 0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x2, 
    0xb, 0x5, 0x2, 0x5, 0x5, 0x24, 0x24, 0xaf, 0xaf, 0x4, 0x2, 0x23, 0x23, 
    0x48, 0x49, 0x5, 0x2, 0xc, 0xc, 0x17, 0x17, 0x27, 0x27, 0x4, 0x2, 0x1b, 
    0x1b, 0x30, 0x30, 0x5, 0x2, 0x1b, 0x1b, 0x30, 0x30, 0x98, 0x98, 0x4, 
    0x2, 0x4e, 0x4e, 0x94, 0x94, 0x4, 0x2, 0x7e, 0x7e, 0x9e, 0x9e, 0x5, 
    0x2, 0x14, 0x14, 0xc4, 0xc4, 0xc9, 0xc9, 0x4, 0x2, 0xc5, 0xc5, 0xca, 
    0xca, 0x2, 0xa60, 0x2, 0x142, 0x3, 0x2, 0x2, 0x2, 0x4, 0x144, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x156, 0x3, 0x2, 0x2, 0x2, 0x8, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x165, 0x3, 0x2, 0x2, 0x2, 0xc, 0x16c, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x170, 0x3, 0x2, 0x2, 0x2, 0x10, 0x173, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x17d, 0x3, 0x2, 0x2, 0x2, 0x14, 0x182, 0x3, 0x2, 0x2, 0x2, 0x16, 0x185, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x194, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1a1, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1d6, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x26, 0x1e5, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x1f4, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x30, 0x1fd, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x201, 0x3, 0x2, 0x2, 0x2, 0x34, 0x209, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x210, 0x3, 0x2, 0x2, 0x2, 0x38, 0x213, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x231, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x236, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x241, 0x3, 0x2, 0x2, 0x2, 0x40, 0x24d, 0x3, 0x2, 0x2, 0x2, 
    0x42, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x44, 0x258, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x25e, 0x3, 0x2, 0x2, 0x2, 0x48, 0x266, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x269, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x274, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x52, 0x280, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x285, 0x3, 0x2, 0x2, 0x2, 0x56, 0x28d, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x295, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x29d, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x2cc, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2de, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x68, 0x32c, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x33e, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x358, 0x3, 0x2, 0x2, 0x2, 0x70, 0x372, 0x3, 0x2, 0x2, 
    0x2, 0x72, 0x388, 0x3, 0x2, 0x2, 0x2, 0x74, 0x392, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x394, 0x3, 0x2, 0x2, 0x2, 0x78, 0x398, 0x3, 0x2, 0x2, 0x2, 0x7a, 
    0x405, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x407, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x40d, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x4a1, 0x3, 0x2, 0x2, 0x2, 0x82, 0x4d4, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x4d6, 0x3, 0x2, 0x2, 0x2, 0x86, 0x4f7, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x4f9, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x53a, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x556, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x56e, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x570, 0x3, 0x2, 0x2, 0x2, 0x92, 0x572, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x574, 0x3, 0x2, 0x2, 0x2, 0x96, 0x579, 0x3, 0x2, 0x2, 0x2, 0x98, 0x57e, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x582, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x59b, 0x3, 
    0x2, 0x2, 0x2, 0x9e, 0x5a9, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x5b4, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0x5ba, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x606, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0x61e, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x620, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0x629, 0x3, 0x2, 0x2, 0x2, 0xac, 0x63c, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0x63e, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x647, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x64f, 
    0x3, 0x2, 0x2, 0x2, 0xb4, 0x655, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x686, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0x688, 0x3, 0x2, 0x2, 0x2, 0xba, 0x699, 0x3, 0x2, 
    0x2, 0x2, 0xbc, 0x6ab, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x6ad, 0x3, 0x2, 0x2, 
    0x2, 0xc0, 0x6bb, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x6bd, 0x3, 0x2, 0x2, 0x2, 
    0xc4, 0x6c3, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0x6dc, 0x3, 0x2, 0x2, 0x2, 0xca, 0x6de, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x6fb, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0x765, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x77c, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0x77e, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x78a, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x7bb, 0x3, 0x2, 0x2, 
    0x2, 0xda, 0x7c9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x7d1, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0x7eb, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x7ed, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0x806, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x808, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x80d, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0x819, 0x3, 0x2, 0x2, 0x2, 0xea, 0x81f, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0x82b, 0x3, 0x2, 0x2, 0x2, 0xee, 0x830, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0x839, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x83f, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0x847, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x84d, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0x853, 0x3, 0x2, 0x2, 0x2, 0xfa, 0x858, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0x860, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x879, 0x3, 0x2, 0x2, 0x2, 0x100, 0x87b, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x882, 0x3, 0x2, 0x2, 0x2, 0x104, 0x88c, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x89a, 0x3, 0x2, 0x2, 0x2, 0x108, 0x89f, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x8a7, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x8ad, 
    0x3, 0x2, 0x2, 0x2, 0x10e, 0x8bb, 0x3, 0x2, 0x2, 0x2, 0x110, 0x8bd, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x8bf, 0x3, 0x2, 0x2, 0x2, 0x114, 0x8c1, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x8c3, 0x3, 0x2, 0x2, 0x2, 0x118, 0x8c5, 
    0x3, 0x2, 0x2, 0x2, 0x11a, 0x8c8, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x8d0, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x8d8, 0x3, 0x2, 0x2, 0x2, 0x120, 0x8df, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x8e5, 0x3, 0x2, 0x2, 0x2, 0x124, 0x8e7, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x8ef, 0x3, 0x2, 0x2, 0x2, 0x128, 0x91e, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x947, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x953, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x95a, 0x3, 0x2, 0x2, 0x2, 0x130, 0x962, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x97a, 0x3, 0x2, 0x2, 0x2, 0x134, 0x987, 
    0x3, 0x2, 0x2, 0x2, 0x136, 0x98d, 0x3, 0x2, 0x2, 0x2, 0x138, 0x98f, 
    0x3, 0x2, 0x2, 0x2, 0x13a, 0x998, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x9a1, 
    0x3, 0x2, 0x2, 0x2, 0x13e, 0x9b3, 0x3, 0x2, 0x2, 0x2, 0x140, 0x9b6, 
    0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x9, 0x2, 0x2, 0x2, 0x143, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x144, 0x145, 0x9, 0x3, 0x2, 0x2, 0x145, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x146, 0x147, 0x7, 0x6, 0x2, 0x2, 0x147, 0x157, 0x7, 0x7, 
    0x2, 0x2, 0x148, 0x149, 0x7, 0x1c, 0x2, 0x2, 0x149, 0x157, 0x7, 0x7, 
    0x2, 0x2, 0x14a, 0x14b, 0x7, 0x1c, 0x2, 0x2, 0x14b, 0x157, 0x7, 0xc7, 
    0x2, 0x2, 0x14c, 0x14d, 0x7, 0x6, 0x2, 0x2, 0x14d, 0x157, 0x7, 0xc7, 
    0x2, 0x2, 0x14e, 0x14f, 0x7, 0x6, 0x2, 0x2, 0x14f, 0x157, 0x5, 0x4e, 
    0x28, 0x2, 0x150, 0x151, 0x7, 0x92, 0x2, 0x2, 0x151, 0x152, 0x7, 0x93, 
    0x2, 0x2, 0x152, 0x153, 0x5, 0x120, 0x91, 0x2, 0x153, 0x154, 0x7, 0xb, 
    0x2, 0x2, 0x154, 0x155, 0x7, 0x25, 0x2, 0x2, 0x155, 0x157, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x146, 0x3, 0x2, 0x2, 0x2, 0x156, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x156, 0x14c, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x156, 0x150, 0x3, 0x2, 
    0x2, 0x2, 0x157, 0x7, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15a, 0x5, 0x4, 0x3, 
    0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15d, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 
    0x2, 0x15c, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x162, 0x5, 0x2, 0x2, 0x2, 0x15f, 0x161, 0x5, 0x6, 0x4, 
    0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x164, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 
    0x2, 0x163, 0x9, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 0x3, 0x2, 0x2, 0x2, 
    0x165, 0x166, 0x9, 0x4, 0x2, 0x2, 0x166, 0xb, 0x3, 0x2, 0x2, 0x2, 0x167, 
    0x16d, 0x7, 0x8, 0x2, 0x2, 0x168, 0x16d, 0x7, 0x2c, 0x2, 0x2, 0x169, 
    0x16a, 0x7, 0xa, 0x2, 0x2, 0x16a, 0x16d, 0x5, 0x2, 0x2, 0x2, 0x16b, 
    0x16d, 0x7, 0x36, 0x2, 0x2, 0x16c, 0x167, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x168, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x171, 
    0x5, 0xc, 0x7, 0x2, 0x16f, 0x171, 0x5, 0xa, 0x6, 0x2, 0x170, 0x16e, 
    0x3, 0x2, 0x2, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x172, 0x174, 0x7, 0x23, 0x2, 0x2, 0x173, 0x172, 0x3, 
    0x2, 0x2, 0x2, 0x173, 0x174, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x175, 0x176, 0x7, 0x4, 0x2, 0x2, 0x176, 0x177, 0x5, 
    0x8, 0x5, 0x2, 0x177, 0x11, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x5, 0x2a, 
    0x16, 0x2, 0x179, 0x17a, 0x7, 0xf, 0x2, 0x2, 0x17a, 0x17e, 0x3, 0x2, 
    0x2, 0x2, 0x17b, 0x17c, 0x7, 0x3d, 0x2, 0x2, 0x17c, 0x17e, 0x7, 0xf, 
    0x2, 0x2, 0x17d, 0x178, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x13, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x183, 0x5, 0x10, 
    0x9, 0x2, 0x180, 0x183, 0x5, 0xe, 0x8, 0x2, 0x181, 0x183, 0x5, 0x12, 
    0xa, 0x2, 0x182, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x182, 0x180, 0x3, 0x2, 
    0x2, 0x2, 0x182, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x184, 0x186, 0x5, 0x60, 0x31, 0x2, 0x185, 0x184, 0x3, 0x2, 0x2, 
    0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 
    0x2, 0x187, 0x188, 0x5, 0x120, 0x91, 0x2, 0x188, 0x189, 0x5, 0x10, 0x9, 
    0x2, 0x189, 0x17, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x9, 0x5, 0x2, 0x2, 
    0x18b, 0x18c, 0x7, 0xc3, 0x2, 0x2, 0x18c, 0x18d, 0x5, 0x8, 0x5, 0x2, 
    0x18d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x9, 0x6, 0x2, 0x2, 0x18f, 
    0x195, 0x5, 0x8, 0x5, 0x2, 0x190, 0x191, 0x7, 0xc, 0x2, 0x2, 0x191, 
    0x192, 0x7, 0x46, 0x2, 0x2, 0x192, 0x193, 0x7, 0x23, 0x2, 0x2, 0x193, 
    0x195, 0x7, 0x24, 0x2, 0x2, 0x194, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x190, 0x3, 0x2, 0x2, 0x2, 0x195, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x196, 0x19b, 
    0x5, 0x14, 0xb, 0x2, 0x197, 0x19b, 0x5, 0x16, 0xc, 0x2, 0x198, 0x19b, 
    0x5, 0x1a, 0xe, 0x2, 0x199, 0x19b, 0x5, 0x18, 0xd, 0x2, 0x19a, 0x196, 
    0x3, 0x2, 0x2, 0x2, 0x19a, 0x197, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x198, 
    0x3, 0x2, 0x2, 0x2, 0x19a, 0x199, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x19c, 0x19e, 0x7, 0x14, 0x2, 0x2, 0x19d, 0x19c, 0x3, 
    0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x3, 
    0x2, 0x2, 0x2, 0x19f, 0x1a2, 0x5, 0x8, 0x5, 0x2, 0x1a0, 0x1a2, 0x5, 
    0x1c, 0xf, 0x2, 0x1a1, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a0, 0x3, 
    0x2, 0x2, 0x2, 0x1a2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1b3, 0x7, 0x5, 
    0x2, 0x2, 0x1a4, 0x1b3, 0x7, 0x2f, 0x2, 0x2, 0x1a5, 0x1a7, 0x7, 0x4a, 
    0x2, 0x2, 0x1a6, 0x1a5, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x3, 0x2, 
    0x2, 0x2, 0x1a7, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1b3, 0x7, 0x4c, 
    0x2, 0x2, 0x1a9, 0x1ab, 0x7, 0x4a, 0x2, 0x2, 0x1aa, 0x1a9, 0x3, 0x2, 
    0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 
    0x2, 0x2, 0x1ac, 0x1b3, 0x7, 0x4b, 0x2, 0x2, 0x1ad, 0x1b3, 0x7, 0x35, 
    0x2, 0x2, 0x1ae, 0x1b3, 0x7, 0x23, 0x2, 0x2, 0x1af, 0x1b3, 0x7, 0xac, 
    0x2, 0x2, 0x1b0, 0x1b3, 0x7, 0x5e, 0x2, 0x2, 0x1b1, 0x1b3, 0x7, 0x5f, 
    0x2, 0x2, 0x1b2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1a4, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1aa, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1ae, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x1b4, 0x1b5, 0x7, 0x6, 0x2, 0x2, 0x1b5, 0x1d7, 0x7, 0x7, 0x2, 
    0x2, 0x1b6, 0x1b7, 0x7, 0x1c, 0x2, 0x2, 0x1b7, 0x1d7, 0x7, 0x7, 0x2, 
    0x2, 0x1b8, 0x1b9, 0x7, 0x1c, 0x2, 0x2, 0x1b9, 0x1d7, 0x5, 0x1e, 0x10, 
    0x2, 0x1ba, 0x1bb, 0x7, 0x1c, 0x2, 0x2, 0x1bb, 0x1d7, 0x5, 0x50, 0x29, 
    0x2, 0x1bc, 0x1bd, 0x7, 0x6, 0x2, 0x2, 0x1bd, 0x1d7, 0x5, 0x50, 0x29, 
    0x2, 0x1be, 0x1bf, 0x7, 0x40, 0x2, 0x2, 0x1bf, 0x1d7, 0x5, 0x1e, 0x10, 
    0x2, 0x1c0, 0x1c1, 0x7, 0x44, 0x2, 0x2, 0x1c1, 0x1c2, 0x7, 0x14, 0x2, 
    0x2, 0x1c2, 0x1c3, 0x7, 0x3f, 0x2, 0x2, 0x1c3, 0x1c4, 0x7, 0x45, 0x2, 
    0x2, 0x1c4, 0x1c5, 0x7, 0x13, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0x120, 0x91, 
    0x2, 0x1c6, 0x1c7, 0x7, 0x46, 0x2, 0x2, 0x1c7, 0x1c8, 0x7, 0x47, 0x2, 
    0x2, 0x1c8, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x7, 0x2f, 0x2, 
    0x2, 0x1ca, 0x1cb, 0x7, 0x19, 0x2, 0x2, 0x1cb, 0x1d7, 0x5, 0x1e, 0x10, 
    0x2, 0x1cc, 0x1cd, 0x7, 0x2f, 0x2, 0x2, 0x1cd, 0x1ce, 0x7, 0x19, 0x2, 
    0x2, 0x1ce, 0x1d7, 0x5, 0x50, 0x29, 0x2, 0x1cf, 0x1d0, 0x7, 0x48, 0x2, 
    0x2, 0x1d0, 0x1d1, 0x7, 0x21, 0x2, 0x2, 0x1d1, 0x1d7, 0x5, 0x1e, 0x10, 
    0x2, 0x1d2, 0x1d3, 0x7, 0x44, 0x2, 0x2, 0x1d3, 0x1d7, 0x7, 0x8e, 0x2, 
    0x2, 0x1d4, 0x1d5, 0x7, 0x44, 0x2, 0x2, 0x1d5, 0x1d7, 0x7, 0x73, 0x2, 
    0x2, 0x1d6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1b6, 0x3, 0x2, 0x2, 
    0x2, 0x1d6, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1ba, 0x3, 0x2, 0x2, 
    0x2, 0x1d6, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1be, 0x3, 0x2, 0x2, 
    0x2, 0x1d6, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1d6, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1cf, 0x3, 0x2, 0x2, 
    0x2, 0x1d6, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d4, 0x3, 0x2, 0x2, 
    0x2, 0x1d7, 0x23, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1da, 0x5, 0x20, 0x11, 
    0x2, 0x1d9, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1dd, 0x3, 0x2, 0x2, 
    0x2, 0x1db, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 
    0x2, 0x1dc, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x1de, 0x1e2, 0x7, 0x2e, 0x2, 0x2, 0x1df, 0x1e1, 0x5, 0x22, 0x12, 
    0x2, 0x1e0, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e4, 0x3, 0x2, 0x2, 
    0x2, 0x1e2, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 0x2, 
    0x2, 0x1e3, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 
    0x1e5, 0x1e6, 0x7, 0xc7, 0x2, 0x2, 0x1e6, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x1e7, 0x1e8, 0x7, 0xe, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x66, 0x2, 0x2, 
    0x1e9, 0x1ea, 0x7, 0x2e, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x13, 0x2, 0x2, 
    0x1eb, 0x1ec, 0x5, 0x1e, 0x10, 0x2, 0x1ec, 0x1ed, 0x7, 0x67, 0x2, 0x2, 
    0x1ed, 0x29, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0xa, 0x2, 0x2, 0x1ef, 
    0x1f3, 0x7, 0x2e, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0xe, 0x2, 0x2, 0x1f1, 
    0x1f3, 0x7, 0x2e, 0x2, 0x2, 0x1f2, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f2, 
    0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 
    0x7, 0x4, 0x2, 0x2, 0x1f5, 0x1f6, 0x5, 0x24, 0x13, 0x2, 0x1f6, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1fc, 0x5, 0x26, 0x14, 0x2, 0x1f8, 0x1fc, 
    0x5, 0x2c, 0x17, 0x2, 0x1f9, 0x1fc, 0x5, 0x28, 0x15, 0x2, 0x1fa, 0x1fc, 
    0x5, 0x2a, 0x16, 0x2, 0x1fb, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1f8, 
    0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fa, 
    0x3, 0x2, 0x2, 0x2, 0x1fc, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 
    0x30, 0x2, 0x2, 0x1fe, 0x1ff, 0x5, 0x24, 0x13, 0x2, 0x1ff, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x200, 0x202, 0x5, 0x60, 0x31, 0x2, 0x201, 0x200, 0x3, 
    0x2, 0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 
    0x2, 0x2, 0x2, 0x203, 0x204, 0x5, 0x120, 0x91, 0x2, 0x204, 0x205, 0x5, 
    0x2c, 0x17, 0x2, 0x205, 0x33, 0x3, 0x2, 0x2, 0x2, 0x206, 0x20a, 0x5, 
    0x2e, 0x18, 0x2, 0x207, 0x20a, 0x5, 0x30, 0x19, 0x2, 0x208, 0x20a, 0x5, 
    0x32, 0x1a, 0x2, 0x209, 0x206, 0x3, 0x2, 0x2, 0x2, 0x209, 0x207, 0x3, 
    0x2, 0x2, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x20b, 0x20d, 0x7, 0x14, 0x2, 0x2, 0x20c, 0x20b, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x211, 0x5, 0x24, 0x13, 0x2, 0x20f, 0x211, 0x5, 0x34, 
    0x1b, 0x2, 0x210, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x210, 0x20f, 0x3, 0x2, 
    0x2, 0x2, 0x211, 0x37, 0x3, 0x2, 0x2, 0x2, 0x212, 0x214, 0x7, 0x4a, 
    0x2, 0x2, 0x213, 0x212, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 0x215, 0x216, 0x7, 0x53, 
    0x2, 0x2, 0x216, 0x39, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x7, 0x44, 
    0x2, 0x2, 0x218, 0x232, 0x7, 0x7, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x1c, 
    0x2, 0x2, 0x21a, 0x232, 0x7, 0x7, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x1c, 
    0x2, 0x2, 0x21c, 0x232, 0x5, 0x1e, 0x10, 0x2, 0x21d, 0x21e, 0x7, 0x1c, 
    0x2, 0x2, 0x21e, 0x232, 0x5, 0x34, 0x1b, 0x2, 0x21f, 0x220, 0x7, 0x92, 
    0x2, 0x2, 0x220, 0x221, 0x7, 0x93, 0x2, 0x2, 0x221, 0x222, 0x5, 0x120, 
    0x91, 0x2, 0x222, 0x223, 0x7, 0xb, 0x2, 0x2, 0x223, 0x224, 0x7, 0x25, 
    0x2, 0x2, 0x224, 0x232, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x7, 0x92, 
    0x2, 0x2, 0x226, 0x227, 0x7, 0x93, 0x2, 0x2, 0x227, 0x228, 0x5, 0x120, 
    0x91, 0x2, 0x228, 0x229, 0x7, 0xb, 0x2, 0x2, 0x229, 0x22a, 0x7, 0x25, 
    0x2, 0x2, 0x22a, 0x22b, 0x7, 0x26, 0x2, 0x2, 0x22b, 0x22c, 0x5, 0x1e, 
    0x10, 0x2, 0x22c, 0x232, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x7, 0xa, 
    0x2, 0x2, 0x22e, 0x22f, 0x7, 0x1f, 0x2, 0x2, 0x22f, 0x230, 0x7, 0x6e, 
    0x2, 0x2, 0x230, 0x232, 0x7, 0x7, 0x2, 0x2, 0x231, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x231, 0x219, 0x3, 0x2, 0x2, 0x2, 0x231, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x231, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x231, 0x21f, 0x3, 0x2, 
    0x2, 0x2, 0x231, 0x225, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22d, 0x3, 0x2, 
    0x2, 0x2, 0x232, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x233, 0x235, 0x5, 0x38, 
    0x1d, 0x2, 0x234, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 0x238, 0x3, 0x2, 
    0x2, 0x2, 0x236, 0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x3, 0x2, 
    0x2, 0x2, 0x237, 0x239, 0x3, 0x2, 0x2, 0x2, 0x238, 0x236, 0x3, 0x2, 
    0x2, 0x2, 0x239, 0x23d, 0x7, 0xb, 0x2, 0x2, 0x23a, 0x23c, 0x5, 0x3a, 
    0x1e, 0x2, 0x23b, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23f, 0x3, 0x2, 
    0x2, 0x2, 0x23d, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x23e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x23d, 0x3, 0x2, 0x2, 
    0x2, 0x240, 0x242, 0x7, 0x23, 0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 
    0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 0x244, 0x3, 0x2, 0x2, 
    0x2, 0x243, 0x245, 0x5, 0x120, 0x91, 0x2, 0x244, 0x243, 0x3, 0x2, 0x2, 
    0x2, 0x244, 0x245, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x3, 0x2, 0x2, 
    0x2, 0x246, 0x247, 0x7, 0x4, 0x2, 0x2, 0x247, 0x248, 0x5, 0x3c, 0x1f, 
    0x2, 0x248, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x7, 0xa, 0x2, 0x2, 
    0x24a, 0x24e, 0x7, 0xb, 0x2, 0x2, 0x24b, 0x24c, 0x7, 0xe, 0x2, 0x2, 
    0x24c, 0x24e, 0x7, 0xb, 0x2, 0x2, 0x24d, 0x249, 0x3, 0x2, 0x2, 0x2, 
    0x24d, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x24f, 
    0x250, 0x7, 0xe, 0x2, 0x2, 0x250, 0x251, 0x7, 0x29, 0x2, 0x2, 0x251, 
    0x252, 0x5, 0x3c, 0x1f, 0x2, 0x252, 0x253, 0x7, 0x2a, 0x2, 0x2, 0x253, 
    0x256, 0x7, 0x19, 0x2, 0x2, 0x254, 0x257, 0x5, 0x1e, 0x10, 0x2, 0x255, 
    0x257, 0x5, 0x36, 0x1c, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 
    0x255, 0x3, 0x2, 0x2, 0x2, 0x257, 0x43, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 
    0x7, 0xe, 0x2, 0x2, 0x259, 0x25a, 0x7, 0xb, 0x2, 0x2, 0x25a, 0x25b, 
    0x5, 0x1c, 0xf, 0x2, 0x25b, 0x25c, 0x9, 0x7, 0x2, 0x2, 0x25c, 0x25d, 
    0x7, 0x6, 0x2, 0x2, 0x25d, 0x45, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x7, 
    0x76, 0x2, 0x2, 0x25f, 0x260, 0x7, 0xb, 0x2, 0x2, 0x260, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x261, 0x267, 0x5, 0x3e, 0x20, 0x2, 0x262, 0x267, 0x5, 
    0x40, 0x21, 0x2, 0x263, 0x267, 0x5, 0x42, 0x22, 0x2, 0x264, 0x267, 0x5, 
    0x44, 0x23, 0x2, 0x265, 0x267, 0x5, 0x46, 0x24, 0x2, 0x266, 0x261, 0x3, 
    0x2, 0x2, 0x2, 0x266, 0x262, 0x3, 0x2, 0x2, 0x2, 0x266, 0x263, 0x3, 
    0x2, 0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x265, 0x3, 
    0x2, 0x2, 0x2, 0x267, 0x49, 0x3, 0x2, 0x2, 0x2, 0x268, 0x26a, 0x5, 0x60, 
    0x31, 0x2, 0x269, 0x268, 0x3, 0x2, 0x2, 0x2, 0x269, 0x26a, 0x3, 0x2, 
    0x2, 0x2, 0x26a, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x5, 0x120, 
    0x91, 0x2, 0x26c, 0x26d, 0x5, 0x3e, 0x20, 0x2, 0x26d, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x26e, 0x26f, 0x9, 0x5, 0x2, 0x2, 0x26f, 0x270, 0x5, 0x3c, 
    0x1f, 0x2, 0x270, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x271, 0x275, 0x5, 0x48, 
    0x25, 0x2, 0x272, 0x275, 0x5, 0x4c, 0x27, 0x2, 0x273, 0x275, 0x5, 0x4a, 
    0x26, 0x2, 0x274, 0x271, 0x3, 0x2, 0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 
    0x2, 0x2, 0x274, 0x273, 0x3, 0x2, 0x2, 0x2, 0x275, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x276, 0x278, 0x7, 0x14, 0x2, 0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 
    0x2, 0x277, 0x278, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 0x2, 
    0x2, 0x279, 0x27c, 0x5, 0x3c, 0x1f, 0x2, 0x27a, 0x27c, 0x5, 0x4e, 0x28, 
    0x2, 0x27b, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27a, 0x3, 0x2, 0x2, 
    0x2, 0x27c, 0x51, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x281, 0x5, 0x34, 0x1b, 
    0x2, 0x27e, 0x281, 0x5, 0x1c, 0xf, 0x2, 0x27f, 0x281, 0x5, 0x4e, 0x28, 
    0x2, 0x280, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 
    0x2, 0x280, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x281, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x282, 0x286, 0x5, 0x36, 0x1c, 0x2, 0x283, 0x286, 0x5, 0x1e, 0x10, 0x2, 
    0x284, 0x286, 0x5, 0x50, 0x29, 0x2, 0x285, 0x282, 0x3, 0x2, 0x2, 0x2, 
    0x285, 0x283, 0x3, 0x2, 0x2, 0x2, 0x285, 0x284, 0x3, 0x2, 0x2, 0x2, 
    0x286, 0x55, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x7, 0x3, 0x2, 0x2, 0x288, 
    0x289, 0x5, 0x120, 0x91, 0x2, 0x289, 0x28a, 0x5, 0x1c, 0xf, 0x2, 0x28a, 
    0x28e, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0x3, 0x2, 0x2, 0x28c, 
    0x28e, 0x5, 0x120, 0x91, 0x2, 0x28d, 0x287, 0x3, 0x2, 0x2, 0x2, 0x28d, 
    0x28b, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x57, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 
    0x7, 0x9, 0x2, 0x2, 0x290, 0x291, 0x5, 0x120, 0x91, 0x2, 0x291, 0x292, 
    0x5, 0x1c, 0xf, 0x2, 0x292, 0x296, 0x3, 0x2, 0x2, 0x2, 0x293, 0x294, 
    0x7, 0x9, 0x2, 0x2, 0x294, 0x296, 0x5, 0x120, 0x91, 0x2, 0x295, 0x28f, 
    0x3, 0x2, 0x2, 0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 0x296, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x297, 0x298, 0x7, 0xd, 0x2, 0x2, 0x298, 0x299, 0x5, 
    0x120, 0x91, 0x2, 0x299, 0x29a, 0x5, 0x1c, 0xf, 0x2, 0x29a, 0x29e, 0x3, 
    0x2, 0x2, 0x2, 0x29b, 0x29c, 0x7, 0xd, 0x2, 0x2, 0x29c, 0x29e, 0x5, 
    0x120, 0x91, 0x2, 0x29d, 0x297, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29b, 0x3, 
    0x2, 0x2, 0x2, 0x29e, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x7, 0x10, 
    0x2, 0x2, 0x2a0, 0x2a1, 0x5, 0x120, 0x91, 0x2, 0x2a1, 0x2a2, 0x7, 0x11, 
    0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0x12, 0x2, 0x2, 0x2a3, 0x2a4, 0x7, 0x13, 
    0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x14, 0x2, 0x2, 0x2a5, 0x2a6, 0x7, 0x15, 
    0x2, 0x2, 0x2a6, 0x2a7, 0x7, 0x16, 0x2, 0x2, 0x2a7, 0x2a8, 0x7, 0x13, 
    0x2, 0x2, 0x2a8, 0x2a9, 0x7, 0x17, 0x2, 0x2, 0x2a9, 0x2aa, 0x7, 0x18, 
    0x2, 0x2, 0x2aa, 0x2ab, 0x7, 0x19, 0x2, 0x2, 0x2ab, 0x2ac, 0x5, 0x1c, 
    0xf, 0x2, 0x2ac, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 0x7, 0x10, 
    0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x14, 0x2, 0x2, 0x2af, 0x2b0, 0x7, 0x1a, 
    0x2, 0x2, 0x2b0, 0x2b1, 0x7, 0x13, 0x2, 0x2, 0x2b1, 0x2b2, 0x7, 0x14, 
    0x2, 0x2, 0x2b2, 0x2b3, 0x7, 0x15, 0x2, 0x2, 0x2b3, 0x2b4, 0x7, 0x16, 
    0x2, 0x2, 0x2b4, 0x2b5, 0x7, 0x13, 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x17, 
    0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x18, 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0x19, 
    0x2, 0x2, 0x2b8, 0x2c7, 0x5, 0x1c, 0xf, 0x2, 0x2b9, 0x2ba, 0x7, 0x1d, 
    0x2, 0x2, 0x2ba, 0x2bb, 0x7, 0xe, 0x2, 0x2, 0x2bb, 0x2bc, 0x7, 0x1e, 
    0x2, 0x2, 0x2bc, 0x2bd, 0x7, 0x13, 0x2, 0x2, 0x2bd, 0x2be, 0x7, 0x14, 
    0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x15, 0x2, 0x2, 0x2bf, 0x2c0, 0x7, 0x16, 
    0x2, 0x2, 0x2c0, 0x2c1, 0x7, 0x1f, 0x2, 0x2, 0x2c1, 0x2c2, 0x7, 0x20, 
    0x2, 0x2, 0x2c2, 0x2c3, 0x5, 0x1c, 0xf, 0x2, 0x2c3, 0x2c4, 0x7, 0x21, 
    0x2, 0x2, 0x2c4, 0x2c5, 0x5, 0x120, 0x91, 0x2, 0x2c5, 0x2c7, 0x3, 0x2, 
    0x2, 0x2, 0x2c6, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2ad, 0x3, 0x2, 
    0x2, 0x2, 0x2c6, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x2c8, 0x2c9, 0x7, 0x25, 0x2, 0x2, 0x2c9, 0x2ca, 0x7, 0x26, 0x2, 
    0x2, 0x2ca, 0x2cb, 0x5, 0x1c, 0xf, 0x2, 0x2cb, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x2cc, 0x2cd, 0x7, 0x28, 0x2, 0x2, 0x2cd, 0x2ce, 0x7, 0x19, 0x2, 
    0x2, 0x2ce, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d1, 0x7, 0x22, 0x2, 
    0x2, 0x2d0, 0x2d2, 0x5, 0x1c, 0xf, 0x2, 0x2d1, 0x2d0, 0x3, 0x2, 0x2, 
    0x2, 0x2d1, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d4, 0x3, 0x2, 0x2, 
    0x2, 0x2d3, 0x2d5, 0x5, 0x60, 0x31, 0x2, 0x2d4, 0x2d3, 0x3, 0x2, 0x2, 
    0x2, 0x2d4, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d7, 0x3, 0x2, 0x2, 
    0x2, 0x2d6, 0x2d8, 0x7, 0x23, 0x2, 0x2, 0x2d7, 0x2d6, 0x3, 0x2, 0x2, 
    0x2, 0x2d7, 0x2d8, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x3, 0x2, 0x2, 
    0x2, 0x2d9, 0x2da, 0x5, 0x120, 0x91, 0x2, 0x2da, 0x2dc, 0x7, 0xb, 0x2, 
    0x2, 0x2db, 0x2dd, 0x5, 0x5e, 0x30, 0x2, 0x2dc, 0x2db, 0x3, 0x2, 0x2, 
    0x2, 0x2dc, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2dd, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x2de, 0x2e0, 0x7, 0x22, 0x2, 0x2, 0x2df, 0x2e1, 0x5, 0x1c, 0xf, 0x2, 
    0x2e0, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2e1, 0x3, 0x2, 0x2, 0x2, 
    0x2e1, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e5, 0x7, 0x19, 0x2, 0x2, 
    0x2e3, 0x2e6, 0x5, 0x4e, 0x28, 0x2, 0x2e4, 0x2e6, 0x5, 0x34, 0x1b, 0x2, 
    0x2e5, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e4, 0x3, 0x2, 0x2, 0x2, 
    0x2e6, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x7, 0x2d, 0x2, 0x2, 
    0x2e8, 0x2e9, 0x5, 0x34, 0x1b, 0x2, 0x2e9, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x2ea, 0x2eb, 0x7, 0x31, 0x2, 0x2, 0x2eb, 0x2ec, 0x5, 0x120, 0x91, 0x2, 
    0x2ec, 0x2ed, 0x7, 0x32, 0x2, 0x2, 0x2ed, 0x2ee, 0x7, 0x19, 0x2, 0x2, 
    0x2ee, 0x2ef, 0x5, 0x1c, 0xf, 0x2, 0x2ef, 0x32d, 0x3, 0x2, 0x2, 0x2, 
    0x2f0, 0x2f1, 0x7, 0x31, 0x2, 0x2, 0x2f1, 0x2f2, 0x7, 0x32, 0x2, 0x2, 
    0x2f2, 0x2f3, 0x7, 0x19, 0x2, 0x2, 0x2f3, 0x2f4, 0x5, 0x1c, 0xf, 0x2, 
    0x2f4, 0x2f5, 0x7, 0x33, 0x2, 0x2, 0x2f5, 0x2f6, 0x7, 0x19, 0x2, 0x2, 
    0x2f6, 0x2f7, 0x5, 0x122, 0x92, 0x2, 0x2f7, 0x32d, 0x3, 0x2, 0x2, 0x2, 
    0x2f8, 0x2f9, 0x7, 0x31, 0x2, 0x2, 0x2f9, 0x2fa, 0x5, 0x120, 0x91, 0x2, 
    0x2fa, 0x2fb, 0x7, 0x32, 0x2, 0x2, 0x2fb, 0x2fc, 0x7, 0x19, 0x2, 0x2, 
    0x2fc, 0x2fd, 0x5, 0x1c, 0xf, 0x2, 0x2fd, 0x2fe, 0x7, 0x38, 0x2, 0x2, 
    0x2fe, 0x2ff, 0x7, 0x32, 0x2, 0x2, 0x2ff, 0x300, 0x7, 0x33, 0x2, 0x2, 
    0x300, 0x301, 0x7, 0x19, 0x2, 0x2, 0x301, 0x302, 0x5, 0x122, 0x92, 0x2, 
    0x302, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x303, 0x304, 0x7, 0x31, 0x2, 0x2, 
    0x304, 0x305, 0x5, 0x120, 0x91, 0x2, 0x305, 0x306, 0x7, 0x32, 0x2, 0x2, 
    0x306, 0x307, 0x7, 0x19, 0x2, 0x2, 0x307, 0x32d, 0x3, 0x2, 0x2, 0x2, 
    0x308, 0x309, 0x7, 0x31, 0x2, 0x2, 0x309, 0x30a, 0x7, 0x32, 0x2, 0x2, 
    0x30a, 0x30b, 0x7, 0x19, 0x2, 0x2, 0x30b, 0x32d, 0x5, 0x1c, 0xf, 0x2, 
    0x30c, 0x30d, 0x7, 0x31, 0x2, 0x2, 0x30d, 0x30e, 0x5, 0x120, 0x91, 0x2, 
    0x30e, 0x30f, 0x7, 0x11, 0x2, 0x2, 0x30f, 0x310, 0x7, 0x32, 0x2, 0x2, 
    0x310, 0x311, 0x7, 0x19, 0x2, 0x2, 0x311, 0x312, 0x5, 0x1c, 0xf, 0x2, 
    0x312, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x313, 0x314, 0x7, 0x31, 0x2, 0x2, 
    0x314, 0x315, 0x5, 0x120, 0x91, 0x2, 0x315, 0x316, 0x7, 0x32, 0x2, 0x2, 
    0x316, 0x317, 0x7, 0x19, 0x2, 0x2, 0x317, 0x318, 0x5, 0x1c, 0xf, 0x2, 
    0x318, 0x319, 0x7, 0x38, 0x2, 0x2, 0x319, 0x31a, 0x5, 0x120, 0x91, 0x2, 
    0x31a, 0x31b, 0x7, 0x11, 0x2, 0x2, 0x31b, 0x31c, 0x7, 0x32, 0x2, 0x2, 
    0x31c, 0x31d, 0x7, 0x3a, 0x2, 0x2, 0x31d, 0x31e, 0x7, 0x1b, 0x2, 0x2, 
    0x31e, 0x31f, 0x7, 0x35, 0x2, 0x2, 0x31f, 0x320, 0x7, 0x2e, 0x2, 0x2, 
    0x320, 0x321, 0x7, 0x6, 0x2, 0x2, 0x321, 0x322, 0x7, 0x36, 0x2, 0x2, 
    0x322, 0x323, 0x7, 0x37, 0x2, 0x2, 0x323, 0x32d, 0x3, 0x2, 0x2, 0x2, 
    0x324, 0x325, 0x7, 0x31, 0x2, 0x2, 0x325, 0x326, 0x7, 0x32, 0x2, 0x2, 
    0x326, 0x327, 0x7, 0x19, 0x2, 0x2, 0x327, 0x328, 0x5, 0x1c, 0xf, 0x2, 
    0x328, 0x329, 0x7, 0x33, 0x2, 0x2, 0x329, 0x32a, 0x7, 0x19, 0x2, 0x2, 
    0x32a, 0x32b, 0x5, 0x120, 0x91, 0x2, 0x32b, 0x32d, 0x3, 0x2, 0x2, 0x2, 
    0x32c, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x2f0, 0x3, 0x2, 0x2, 0x2, 
    0x32c, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x303, 0x3, 0x2, 0x2, 0x2, 
    0x32c, 0x308, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x30c, 0x3, 0x2, 0x2, 0x2, 
    0x32c, 0x313, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x324, 0x3, 0x2, 0x2, 0x2, 
    0x32d, 0x69, 0x3, 0x2, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0x3c, 0x2, 0x2, 
    0x32f, 0x330, 0x5, 0x34, 0x1b, 0x2, 0x330, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x331, 0x332, 0x7, 0x52, 0x2, 0x2, 0x332, 0x333, 0x7, 0x19, 0x2, 0x2, 
    0x333, 0x33f, 0x5, 0x52, 0x2a, 0x2, 0x334, 0x335, 0x7, 0x52, 0x2, 0x2, 
    0x335, 0x336, 0x7, 0x19, 0x2, 0x2, 0x336, 0x337, 0x5, 0x52, 0x2a, 0x2, 
    0x337, 0x338, 0x7, 0x54, 0x2, 0x2, 0x338, 0x339, 0x5, 0xc8, 0x65, 0x2, 
    0x339, 0x33f, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33b, 0x7, 0x52, 0x2, 0x2, 
    0x33b, 0x33c, 0x7, 0xc7, 0x2, 0x2, 0x33c, 0x33d, 0x7, 0x19, 0x2, 0x2, 
    0x33d, 0x33f, 0x5, 0x52, 0x2a, 0x2, 0x33e, 0x331, 0x3, 0x2, 0x2, 0x2, 
    0x33e, 0x334, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33a, 0x3, 0x2, 0x2, 0x2, 
    0x33f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x5, 0x1c, 0xf, 0x2, 
    0x341, 0x342, 0x7, 0x59, 0x2, 0x2, 0x342, 0x343, 0x5, 0x120, 0x91, 0x2, 
    0x343, 0x344, 0x7, 0xd0, 0x2, 0x2, 0x344, 0x359, 0x3, 0x2, 0x2, 0x2, 
    0x345, 0x346, 0x7, 0x59, 0x2, 0x2, 0x346, 0x347, 0x5, 0x120, 0x91, 0x2, 
    0x347, 0x348, 0x7, 0x11, 0x2, 0x2, 0x348, 0x349, 0x7, 0xd0, 0x2, 0x2, 
    0x349, 0x359, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0x7, 0x59, 0x2, 0x2, 
    0x34b, 0x34c, 0x5, 0x120, 0x91, 0x2, 0x34c, 0x34d, 0x7, 0x5a, 0x2, 0x2, 
    0x34d, 0x34e, 0x7, 0xd0, 0x2, 0x2, 0x34e, 0x359, 0x3, 0x2, 0x2, 0x2, 
    0x34f, 0x350, 0x7, 0x59, 0x2, 0x2, 0x350, 0x351, 0x5, 0x120, 0x91, 0x2, 
    0x351, 0x352, 0x7, 0xd0, 0x2, 0x2, 0x352, 0x359, 0x3, 0x2, 0x2, 0x2, 
    0x353, 0x354, 0x7, 0x59, 0x2, 0x2, 0x354, 0x355, 0x5, 0x120, 0x91, 0x2, 
    0x355, 0x356, 0x7, 0x11, 0x2, 0x2, 0x356, 0x357, 0x7, 0xd0, 0x2, 0x2, 
    0x357, 0x359, 0x3, 0x2, 0x2, 0x2, 0x358, 0x340, 0x3, 0x2, 0x2, 0x2, 
    0x358, 0x345, 0x3, 0x2, 0x2, 0x2, 0x358, 0x34a, 0x3, 0x2, 0x2, 0x2, 
    0x358, 0x34f, 0x3, 0x2, 0x2, 0x2, 0x358, 0x353, 0x3, 0x2, 0x2, 0x2, 
    0x359, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x5, 0x1c, 0xf, 0x2, 
    0x35b, 0x35c, 0x7, 0x59, 0x2, 0x2, 0x35c, 0x35d, 0x5, 0x120, 0x91, 0x2, 
    0x35d, 0x35e, 0x7, 0xd1, 0x2, 0x2, 0x35e, 0x373, 0x3, 0x2, 0x2, 0x2, 
    0x35f, 0x360, 0x7, 0x59, 0x2, 0x2, 0x360, 0x361, 0x5, 0x120, 0x91, 0x2, 
    0x361, 0x362, 0x7, 0x11, 0x2, 0x2, 0x362, 0x363, 0x7, 0xd1, 0x2, 0x2, 
    0x363, 0x373, 0x3, 0x2, 0x2, 0x2, 0x364, 0x365, 0x7, 0x59, 0x2, 0x2, 
    0x365, 0x366, 0x5, 0x120, 0x91, 0x2, 0x366, 0x367, 0x7, 0x5a, 0x2, 0x2, 
    0x367, 0x368, 0x7, 0xd1, 0x2, 0x2, 0x368, 0x373, 0x3, 0x2, 0x2, 0x2, 
    0x369, 0x36a, 0x7, 0x59, 0x2, 0x2, 0x36a, 0x36b, 0x5, 0x120, 0x91, 0x2, 
    0x36b, 0x36c, 0x7, 0xd1, 0x2, 0x2, 0x36c, 0x373, 0x3, 0x2, 0x2, 0x2, 
    0x36d, 0x36e, 0x7, 0x59, 0x2, 0x2, 0x36e, 0x36f, 0x5, 0x120, 0x91, 0x2, 
    0x36f, 0x370, 0x7, 0x11, 0x2, 0x2, 0x370, 0x371, 0x7, 0xd1, 0x2, 0x2, 
    0x371, 0x373, 0x3, 0x2, 0x2, 0x2, 0x372, 0x35a, 0x3, 0x2, 0x2, 0x2, 
    0x372, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x372, 0x364, 0x3, 0x2, 0x2, 0x2, 
    0x372, 0x369, 0x3, 0x2, 0x2, 0x2, 0x372, 0x36d, 0x3, 0x2, 0x2, 0x2, 
    0x373, 0x71, 0x3, 0x2, 0x2, 0x2, 0x374, 0x376, 0x7, 0x59, 0x2, 0x2, 
    0x375, 0x377, 0x7, 0xd2, 0x2, 0x2, 0x376, 0x375, 0x3, 0x2, 0x2, 0x2, 
    0x377, 0x378, 0x3, 0x2, 0x2, 0x2, 0x378, 0x376, 0x3, 0x2, 0x2, 0x2, 
    0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 0x389, 0x3, 0x2, 0x2, 0x2, 
    0x37a, 0x37b, 0x5, 0x1c, 0xf, 0x2, 0x37b, 0x37d, 0x7, 0x59, 0x2, 0x2, 
    0x37c, 0x37e, 0x7, 0xd2, 0x2, 0x2, 0x37d, 0x37c, 0x3, 0x2, 0x2, 0x2, 
    0x37e, 0x37f, 0x3, 0x2, 0x2, 0x2, 0x37f, 0x37d, 0x3, 0x2, 0x2, 0x2, 
    0x37f, 0x380, 0x3, 0x2, 0x2, 0x2, 0x380, 0x389, 0x3, 0x2, 0x2, 0x2, 
    0x381, 0x382, 0x7, 0x59, 0x2, 0x2, 0x382, 0x384, 0x7, 0x23, 0x2, 0x2, 
    0x383, 0x385, 0x7, 0xd2, 0x2, 0x2, 0x384, 0x383, 0x3, 0x2, 0x2, 0x2, 
    0x385, 0x386, 0x3, 0x2, 0x2, 0x2, 0x386, 0x384, 0x3, 0x2, 0x2, 0x2, 
    0x386, 0x387, 0x3, 0x2, 0x2, 0x2, 0x387, 0x389, 0x3, 0x2, 0x2, 0x2, 
    0x388, 0x374, 0x3, 0x2, 0x2, 0x2, 0x388, 0x37a, 0x3, 0x2, 0x2, 0x2, 
    0x388, 0x381, 0x3, 0x2, 0x2, 0x2, 0x389, 0x73, 0x3, 0x2, 0x2, 0x2, 0x38a, 
    0x38b, 0x5, 0x1c, 0xf, 0x2, 0x38b, 0x38c, 0x7, 0x5b, 0x2, 0x2, 0x38c, 
    0x38d, 0x7, 0x39, 0x2, 0x2, 0x38d, 0x38e, 0x5, 0x120, 0x91, 0x2, 0x38e, 
    0x393, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 0x7, 0x59, 0x2, 0x2, 0x390, 
    0x391, 0x7, 0x39, 0x2, 0x2, 0x391, 0x393, 0x5, 0x120, 0x91, 0x2, 0x392, 
    0x38a, 0x3, 0x2, 0x2, 0x2, 0x392, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x393, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x394, 0x395, 0x7, 0x5c, 0x2, 0x2, 0x395, 
    0x396, 0x7, 0x17, 0x2, 0x2, 0x396, 0x397, 0x7, 0x39, 0x2, 0x2, 0x397, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x398, 0x399, 0x7, 0x5d, 0x2, 0x2, 0x399, 
    0x39a, 0x7, 0x17, 0x2, 0x2, 0x39a, 0x39b, 0x7, 0x5e, 0x2, 0x2, 0x39b, 
    0x39c, 0x7, 0x60, 0x2, 0x2, 0x39c, 0x79, 0x3, 0x2, 0x2, 0x2, 0x39d, 
    0x39e, 0x7, 0x61, 0x2, 0x2, 0x39e, 0x39f, 0x7, 0x4, 0x2, 0x2, 0x39f, 
    0x3a0, 0x7, 0x2f, 0x2, 0x2, 0x3a0, 0x3a1, 0x7, 0x2e, 0x2, 0x2, 0x3a1, 
    0x3a2, 0x7, 0x19, 0x2, 0x2, 0x3a2, 0x3a3, 0x7, 0x3d, 0x2, 0x2, 0x3a3, 
    0x3a4, 0x7, 0x62, 0x2, 0x2, 0x3a4, 0x406, 0x7, 0x37, 0x2, 0x2, 0x3a5, 
    0x3a6, 0x7, 0x61, 0x2, 0x2, 0x3a6, 0x3a7, 0x7, 0x4, 0x2, 0x2, 0x3a7, 
    0x3a8, 0x7, 0x2e, 0x2, 0x2, 0x3a8, 0x3a9, 0x7, 0x44, 0x2, 0x2, 0x3a9, 
    0x3aa, 0x7, 0x14, 0x2, 0x2, 0x3aa, 0x3ab, 0x7, 0x3f, 0x2, 0x2, 0x3ab, 
    0x3ac, 0x7, 0x45, 0x2, 0x2, 0x3ac, 0x3ad, 0x7, 0x13, 0x2, 0x2, 0x3ad, 
    0x3ae, 0x5, 0x120, 0x91, 0x2, 0x3ae, 0x3af, 0x7, 0x46, 0x2, 0x2, 0x3af, 
    0x3b0, 0x7, 0x47, 0x2, 0x2, 0x3b0, 0x3b1, 0x7, 0x26, 0x2, 0x2, 0x3b1, 
    0x3b2, 0x7, 0x17, 0x2, 0x2, 0x3b2, 0x3b3, 0x7, 0x63, 0x2, 0x2, 0x3b3, 
    0x3b4, 0x7, 0x19, 0x2, 0x2, 0x3b4, 0x3b5, 0x7, 0x17, 0x2, 0x2, 0x3b5, 
    0x3b6, 0x7, 0x37, 0x2, 0x2, 0x3b6, 0x406, 0x3, 0x2, 0x2, 0x2, 0x3b7, 
    0x3b8, 0x7, 0x61, 0x2, 0x2, 0x3b8, 0x3b9, 0x7, 0x4, 0x2, 0x2, 0x3b9, 
    0x3ba, 0x7, 0x4c, 0x2, 0x2, 0x3ba, 0x3bb, 0x7, 0x2e, 0x2, 0x2, 0x3bb, 
    0x3bc, 0x7, 0x26, 0x2, 0x2, 0x3bc, 0x3bd, 0x7, 0x17, 0x2, 0x2, 0x3bd, 
    0x3be, 0x7, 0x63, 0x2, 0x2, 0x3be, 0x3bf, 0x7, 0x19, 0x2, 0x2, 0x3bf, 
    0x3c0, 0x7, 0x17, 0x2, 0x2, 0x3c0, 0x406, 0x7, 0x37, 0x2, 0x2, 0x3c1, 
    0x3c2, 0x7, 0x61, 0x2, 0x2, 0x3c2, 0x3c3, 0x7, 0x14, 0x2, 0x2, 0x3c3, 
    0x3c4, 0x7, 0x4b, 0x2, 0x2, 0x3c4, 0x3c5, 0x7, 0x2e, 0x2, 0x2, 0x3c5, 
    0x3c6, 0x7, 0x44, 0x2, 0x2, 0x3c6, 0x3c7, 0x7, 0x14, 0x2, 0x2, 0x3c7, 
    0x3c8, 0x7, 0x3f, 0x2, 0x2, 0x3c8, 0x3c9, 0x7, 0x45, 0x2, 0x2, 0x3c9, 
    0x3ca, 0x7, 0x13, 0x2, 0x2, 0x3ca, 0x3cb, 0x5, 0x120, 0x91, 0x2, 0x3cb, 
    0x3cc, 0x7, 0x46, 0x2, 0x2, 0x3cc, 0x3cd, 0x7, 0x47, 0x2, 0x2, 0x3cd, 
    0x3ce, 0x7, 0x26, 0x2, 0x2, 0x3ce, 0x3cf, 0x7, 0x17, 0x2, 0x2, 0x3cf, 
    0x3d0, 0x7, 0x63, 0x2, 0x2, 0x3d0, 0x3d1, 0x7, 0x19, 0x2, 0x2, 0x3d1, 
    0x3d2, 0x7, 0x17, 0x2, 0x2, 0x3d2, 0x3d3, 0x7, 0x37, 0x2, 0x2, 0x3d3, 
    0x406, 0x3, 0x2, 0x2, 0x2, 0x3d4, 0x3d5, 0x7, 0x61, 0x2, 0x2, 0x3d5, 
    0x3d6, 0x7, 0x14, 0x2, 0x2, 0x3d6, 0x3d7, 0x7, 0x2e, 0x2, 0x2, 0x3d7, 
    0x3d8, 0x7, 0x26, 0x2, 0x2, 0x3d8, 0x3d9, 0x7, 0x17, 0x2, 0x2, 0x3d9, 
    0x3da, 0x7, 0x63, 0x2, 0x2, 0x3da, 0x3db, 0x7, 0x19, 0x2, 0x2, 0x3db, 
    0x3dc, 0x7, 0x17, 0x2, 0x2, 0x3dc, 0x406, 0x7, 0x37, 0x2, 0x2, 0x3dd, 
    0x3de, 0x7, 0x61, 0x2, 0x2, 0x3de, 0x3df, 0x7, 0x4, 0x2, 0x2, 0x3df, 
    0x3e0, 0x7, 0x2e, 0x2, 0x2, 0x3e0, 0x3e1, 0x7, 0x26, 0x2, 0x2, 0x3e1, 
    0x3e2, 0x7, 0x17, 0x2, 0x2, 0x3e2, 0x3e3, 0x7, 0x63, 0x2, 0x2, 0x3e3, 
    0x3e4, 0x7, 0x19, 0x2, 0x2, 0x3e4, 0x3e5, 0x7, 0x17, 0x2, 0x2, 0x3e5, 
    0x406, 0x7, 0x37, 0x2, 0x2, 0x3e6, 0x3e7, 0x7, 0x61, 0x2, 0x2, 0x3e7, 
    0x3e8, 0x7, 0xc7, 0x2, 0x2, 0x3e8, 0x3e9, 0x7, 0x19, 0x2, 0x2, 0x3e9, 
    0x3ea, 0x7, 0x17, 0x2, 0x2, 0x3ea, 0x406, 0x7, 0x37, 0x2, 0x2, 0x3eb, 
    0x3ec, 0x7, 0x61, 0x2, 0x2, 0x3ec, 0x3ed, 0x7, 0xd6, 0x2, 0x2, 0x3ed, 
    0x3ee, 0x7, 0x26, 0x2, 0x2, 0x3ee, 0x3ef, 0x7, 0x17, 0x2, 0x2, 0x3ef, 
    0x3f0, 0x7, 0x63, 0x2, 0x2, 0x3f0, 0x3f1, 0x7, 0x19, 0x2, 0x2, 0x3f1, 
    0x3f2, 0x7, 0x17, 0x2, 0x2, 0x3f2, 0x406, 0x7, 0x37, 0x2, 0x2, 0x3f3, 
    0x3f4, 0x7, 0x61, 0x2, 0x2, 0x3f4, 0x3f5, 0x7, 0x4, 0x2, 0x2, 0x3f5, 
    0x3f6, 0x7, 0x2e, 0x2, 0x2, 0x3f6, 0x3f7, 0x7, 0x44, 0x2, 0x2, 0x3f7, 
    0x3f8, 0x7, 0x14, 0x2, 0x2, 0x3f8, 0x3f9, 0x7, 0x3f, 0x2, 0x2, 0x3f9, 
    0x3fa, 0x7, 0x45, 0x2, 0x2, 0x3fa, 0x3fb, 0x7, 0x13, 0x2, 0x2, 0x3fb, 
    0x3fc, 0x5, 0x120, 0x91, 0x2, 0x3fc, 0x3fd, 0x7, 0x46, 0x2, 0x2, 0x3fd, 
    0x3fe, 0x7, 0x11, 0x2, 0x2, 0x3fe, 0x3ff, 0x7, 0x26, 0x2, 0x2, 0x3ff, 
    0x400, 0x7, 0x17, 0x2, 0x2, 0x400, 0x401, 0x7, 0x63, 0x2, 0x2, 0x401, 
    0x402, 0x7, 0x19, 0x2, 0x2, 0x402, 0x403, 0x7, 0x17, 0x2, 0x2, 0x403, 
    0x404, 0x7, 0x37, 0x2, 0x2, 0x404, 0x406, 0x3, 0x2, 0x2, 0x2, 0x405, 
    0x39d, 0x3, 0x2, 0x2, 0x2, 0x405, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x405, 
    0x3b7, 0x3, 0x2, 0x2, 0x2, 0x405, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x405, 
    0x3d4, 0x3, 0x2, 0x2, 0x2, 0x405, 0x3dd, 0x3, 0x2, 0x2, 0x2, 0x405, 
    0x3e6, 0x3, 0x2, 0x2, 0x2, 0x405, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x405, 
    0x3f3, 0x3, 0x2, 0x2, 0x2, 0x406, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 
    0x7, 0x65, 0x2, 0x2, 0x408, 0x409, 0x5, 0x36, 0x1c, 0x2, 0x409, 0x40a, 
    0x7, 0x68, 0x2, 0x2, 0x40a, 0x40b, 0x7, 0x17, 0x2, 0x2, 0x40b, 0x40c, 
    0x7, 0x37, 0x2, 0x2, 0x40c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x40d, 0x40e, 
    0x7, 0x69, 0x2, 0x2, 0x40e, 0x40f, 0x7, 0x17, 0x2, 0x2, 0x40f, 0x410, 
    0x7, 0x6a, 0x2, 0x2, 0x410, 0x411, 0x7, 0x6b, 0x2, 0x2, 0x411, 0x412, 
    0x7, 0x6c, 0x2, 0x2, 0x412, 0x413, 0x7, 0x6d, 0x2, 0x2, 0x413, 0x414, 
    0x7, 0x17, 0x2, 0x2, 0x414, 0x415, 0x7, 0x56, 0x2, 0x2, 0x415, 0x416, 
    0x7, 0x6e, 0x2, 0x2, 0x416, 0x417, 0x7, 0x6f, 0x2, 0x2, 0x417, 0x418, 
    0x7, 0x70, 0x2, 0x2, 0x418, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x419, 0x41a, 
    0x7, 0x71, 0x2, 0x2, 0x41a, 0x41b, 0x7, 0x14, 0x2, 0x2, 0x41b, 0x4a2, 
    0x7, 0x2e, 0x2, 0x2, 0x41c, 0x41d, 0x7, 0x71, 0x2, 0x2, 0x41d, 0x41e, 
    0x7, 0x14, 0x2, 0x2, 0x41e, 0x41f, 0x7, 0x2e, 0x2, 0x2, 0x41f, 0x420, 
    0x7, 0x3a, 0x2, 0x2, 0x420, 0x421, 0x5, 0x120, 0x91, 0x2, 0x421, 0x422, 
    0x7, 0x47, 0x2, 0x2, 0x422, 0x423, 0x7, 0x3f, 0x2, 0x2, 0x423, 0x4a2, 
    0x3, 0x2, 0x2, 0x2, 0x424, 0x425, 0x7, 0x71, 0x2, 0x2, 0x425, 0x426, 
    0x7, 0x14, 0x2, 0x2, 0x426, 0x427, 0x7, 0x2e, 0x2, 0x2, 0x427, 0x428, 
    0x7, 0x3a, 0x2, 0x2, 0x428, 0x4a2, 0x7, 0x72, 0x2, 0x2, 0x429, 0x42a, 
    0x7, 0x71, 0x2, 0x2, 0x42a, 0x42b, 0x7, 0xa, 0x2, 0x2, 0x42b, 0x42c, 
    0x7, 0x2e, 0x2, 0x2, 0x42c, 0x42d, 0x7, 0x3a, 0x2, 0x2, 0x42d, 0x4a2, 
    0x7, 0x72, 0x2, 0x2, 0x42e, 0x42f, 0x7, 0x71, 0x2, 0x2, 0x42f, 0x430, 
    0x7, 0x4, 0x2, 0x2, 0x430, 0x431, 0x7, 0x4a, 0x2, 0x2, 0x431, 0x432, 
    0x7, 0x4b, 0x2, 0x2, 0x432, 0x433, 0x7, 0x2e, 0x2, 0x2, 0x433, 0x434, 
    0x7, 0x26, 0x2, 0x2, 0x434, 0x435, 0x7, 0x17, 0x2, 0x2, 0x435, 0x436, 
    0x7, 0x63, 0x2, 0x2, 0x436, 0x437, 0x7, 0x40, 0x2, 0x2, 0x437, 0x438, 
    0x5, 0x1e, 0x10, 0x2, 0x438, 0x439, 0x7, 0x3a, 0x2, 0x2, 0x439, 0x43a, 
    0x7, 0x72, 0x2, 0x2, 0x43a, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43c, 
    0x7, 0x71, 0x2, 0x2, 0x43c, 0x43d, 0x7, 0x14, 0x2, 0x2, 0x43d, 0x43e, 
    0x7, 0x4b, 0x2, 0x2, 0x43e, 0x43f, 0x7, 0x2e, 0x2, 0x2, 0x43f, 0x440, 
    0x7, 0x40, 0x2, 0x2, 0x440, 0x4a2, 0x5, 0x1e, 0x10, 0x2, 0x441, 0x442, 
    0x7, 0x71, 0x2, 0x2, 0x442, 0x443, 0x7, 0x14, 0x2, 0x2, 0x443, 0x444, 
    0x7, 0x4c, 0x2, 0x2, 0x444, 0x445, 0x7, 0x2e, 0x2, 0x2, 0x445, 0x446, 
    0x7, 0x26, 0x2, 0x2, 0x446, 0x447, 0x7, 0x17, 0x2, 0x2, 0x447, 0x448, 
    0x7, 0x63, 0x2, 0x2, 0x448, 0x449, 0x7, 0x40, 0x2, 0x2, 0x449, 0x4a2, 
    0x5, 0x1c, 0xf, 0x2, 0x44a, 0x44b, 0x7, 0x71, 0x2, 0x2, 0x44b, 0x44c, 
    0x7, 0x14, 0x2, 0x2, 0x44c, 0x44d, 0x7, 0x4b, 0x2, 0x2, 0x44d, 0x44e, 
    0x7, 0x2e, 0x2, 0x2, 0x44e, 0x44f, 0x7, 0x40, 0x2, 0x2, 0x44f, 0x450, 
    0x5, 0x1c, 0xf, 0x2, 0x450, 0x451, 0x7, 0x3a, 0x2, 0x2, 0x451, 0x452, 
    0x5, 0x120, 0x91, 0x2, 0x452, 0x453, 0x7, 0x47, 0x2, 0x2, 0x453, 0x454, 
    0x7, 0x3f, 0x2, 0x2, 0x454, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x455, 0x456, 
    0x7, 0x71, 0x2, 0x2, 0x456, 0x457, 0x7, 0x14, 0x2, 0x2, 0x457, 0x458, 
    0x7, 0x2e, 0x2, 0x2, 0x458, 0x459, 0x7, 0x44, 0x2, 0x2, 0x459, 0x45a, 
    0x7, 0x73, 0x2, 0x2, 0x45a, 0x45b, 0x7, 0x3a, 0x2, 0x2, 0x45b, 0x45c, 
    0x5, 0x120, 0x91, 0x2, 0x45c, 0x45d, 0x7, 0x47, 0x2, 0x2, 0x45d, 0x45e, 
    0x7, 0x3f, 0x2, 0x2, 0x45e, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x45f, 0x460, 
    0x7, 0x71, 0x2, 0x2, 0x460, 0x461, 0x7, 0x14, 0x2, 0x2, 0x461, 0x462, 
    0x7, 0x2e, 0x2, 0x2, 0x462, 0x463, 0x7, 0x40, 0x2, 0x2, 0x463, 0x4a2, 
    0x5, 0x1c, 0xf, 0x2, 0x464, 0x465, 0x7, 0x71, 0x2, 0x2, 0x465, 0x466, 
    0x7, 0x74, 0x2, 0x2, 0x466, 0x467, 0x7, 0x75, 0x2, 0x2, 0x467, 0x468, 
    0x7, 0x3a, 0x2, 0x2, 0x468, 0x469, 0x7, 0x72, 0x2, 0x2, 0x469, 0x46a, 
    0x7, 0xcd, 0x2, 0x2, 0x46a, 0x46b, 0x7, 0x76, 0x2, 0x2, 0x46b, 0x46c, 
    0x7, 0x77, 0x2, 0x2, 0x46c, 0x46d, 0x7, 0x78, 0x2, 0x2, 0x46d, 0x46e, 
    0x7, 0x79, 0x2, 0x2, 0x46e, 0x46f, 0x7, 0x17, 0x2, 0x2, 0x46f, 0x470, 
    0x7, 0x74, 0x2, 0x2, 0x470, 0x471, 0x7, 0x75, 0x2, 0x2, 0x471, 0x472, 
    0x7, 0x7a, 0x2, 0x2, 0x472, 0x473, 0x7, 0x7b, 0x2, 0x2, 0x473, 0x4a2, 
    0x7, 0x56, 0x2, 0x2, 0x474, 0x475, 0x7, 0x71, 0x2, 0x2, 0x475, 0x476, 
    0x7, 0x7c, 0x2, 0x2, 0x476, 0x477, 0x7, 0x7d, 0x2, 0x2, 0x477, 0x478, 
    0x7, 0x40, 0x2, 0x2, 0x478, 0x479, 0x5, 0x1c, 0xf, 0x2, 0x479, 0x47a, 
    0x7, 0x3a, 0x2, 0x2, 0x47a, 0x47b, 0x7, 0x72, 0x2, 0x2, 0x47b, 0x47c, 
    0x7, 0xcd, 0x2, 0x2, 0x47c, 0x47d, 0x7, 0x76, 0x2, 0x2, 0x47d, 0x47e, 
    0x7, 0x77, 0x2, 0x2, 0x47e, 0x47f, 0x7, 0x78, 0x2, 0x2, 0x47f, 0x480, 
    0x7, 0x79, 0x2, 0x2, 0x480, 0x481, 0x7, 0x17, 0x2, 0x2, 0x481, 0x482, 
    0x7, 0x7c, 0x2, 0x2, 0x482, 0x483, 0x7, 0x7d, 0x2, 0x2, 0x483, 0x484, 
    0x7, 0x7a, 0x2, 0x2, 0x484, 0x485, 0x7, 0x7b, 0x2, 0x2, 0x485, 0x486, 
    0x7, 0x56, 0x2, 0x2, 0x486, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x487, 0x488, 
    0x7, 0x71, 0x2, 0x2, 0x488, 0x489, 0x7, 0x14, 0x2, 0x2, 0x489, 0x48a, 
    0x7, 0x2e, 0x2, 0x2, 0x48a, 0x48b, 0x7, 0x3a, 0x2, 0x2, 0x48b, 0x48c, 
    0x5, 0x120, 0x91, 0x2, 0x48c, 0x48d, 0x7, 0x47, 0x2, 0x2, 0x48d, 0x48e, 
    0x7, 0x3f, 0x2, 0x2, 0x48e, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x48f, 0x490, 
    0x7, 0x71, 0x2, 0x2, 0x490, 0x491, 0x7, 0x14, 0x2, 0x2, 0x491, 0x492, 
    0x7, 0x4a, 0x2, 0x2, 0x492, 0x493, 0x7, 0x4b, 0x2, 0x2, 0x493, 0x494, 
    0x7, 0x2e, 0x2, 0x2, 0x494, 0x495, 0x7, 0x40, 0x2, 0x2, 0x495, 0x4a2, 
    0x5, 0x1e, 0x10, 0x2, 0x496, 0x497, 0x7, 0x71, 0x2, 0x2, 0x497, 0x498, 
    0x7, 0x14, 0x2, 0x2, 0x498, 0x499, 0x7, 0x4c, 0x2, 0x2, 0x499, 0x49a, 
    0x7, 0x2e, 0x2, 0x2, 0x49a, 0x49b, 0x7, 0x40, 0x2, 0x2, 0x49b, 0x49c, 
    0x5, 0x1c, 0xf, 0x2, 0x49c, 0x49d, 0x7, 0x3a, 0x2, 0x2, 0x49d, 0x49e, 
    0x5, 0x120, 0x91, 0x2, 0x49e, 0x49f, 0x7, 0x47, 0x2, 0x2, 0x49f, 0x4a0, 
    0x7, 0x3f, 0x2, 0x2, 0x4a0, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x419, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x41c, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x424, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x429, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x42e, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x441, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x44a, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x455, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x464, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x474, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x487, 
    0x3, 0x2, 0x2, 0x2, 0x4a1, 0x48f, 0x3, 0x2, 0x2, 0x2, 0x4a1, 0x496, 
    0x3, 0x2, 0x2, 0x2, 0x4a2, 0x81, 0x3, 0x2, 0x2, 0x2, 0x4a3, 0x4a4, 0x7, 
    0x63, 0x2, 0x2, 0x4a4, 0x4a5, 0x5, 0x120, 0x91, 0x2, 0x4a5, 0x4a6, 0x7, 
    0x2e, 0x2, 0x2, 0x4a6, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4a7, 0x4a8, 0x7, 
    0x63, 0x2, 0x2, 0x4a8, 0x4a9, 0x7, 0x14, 0x2, 0x2, 0x4a9, 0x4d5, 0x7, 
    0x2e, 0x2, 0x2, 0x4aa, 0x4ab, 0x7, 0x63, 0x2, 0x2, 0x4ab, 0x4ac, 0x7, 
    0x14, 0x2, 0x2, 0x4ac, 0x4ad, 0x7, 0x35, 0x2, 0x2, 0x4ad, 0x4ae, 0x7, 
    0x2e, 0x2, 0x2, 0x4ae, 0x4af, 0x7, 0x13, 0x2, 0x2, 0x4af, 0x4b0, 0x5, 
    0x1c, 0xf, 0x2, 0x4b0, 0x4b1, 0x7, 0x18, 0x2, 0x2, 0x4b1, 0x4d5, 0x3, 
    0x2, 0x2, 0x2, 0x4b2, 0x4b3, 0x5, 0x1c, 0xf, 0x2, 0x4b3, 0x4b4, 0x7, 
    0x63, 0x2, 0x2, 0x4b4, 0x4b5, 0x5, 0x120, 0x91, 0x2, 0x4b5, 0x4b6, 0x7, 
    0x2e, 0x2, 0x2, 0x4b6, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4b7, 0x4b8, 0x5, 
    0x1c, 0xf, 0x2, 0x4b8, 0x4b9, 0x7, 0x63, 0x2, 0x2, 0x4b9, 0x4ba, 0x7, 
    0x14, 0x2, 0x2, 0x4ba, 0x4bb, 0x7, 0x2e, 0x2, 0x2, 0x4bb, 0x4d5, 0x3, 
    0x2, 0x2, 0x2, 0x4bc, 0x4bd, 0x5, 0x1c, 0xf, 0x2, 0x4bd, 0x4be, 0x7, 
    0x7f, 0x2, 0x2, 0x4be, 0x4bf, 0x7, 0x4, 0x2, 0x2, 0x4bf, 0x4c0, 0x7, 
    0x35, 0x2, 0x2, 0x4c0, 0x4c1, 0x7, 0x2e, 0x2, 0x2, 0x4c1, 0x4d5, 0x3, 
    0x2, 0x2, 0x2, 0x4c2, 0x4c3, 0x5, 0x1c, 0xf, 0x2, 0x4c3, 0x4c4, 0x7, 
    0x7f, 0x2, 0x2, 0x4c4, 0x4c5, 0x5, 0x120, 0x91, 0x2, 0x4c5, 0x4c6, 0x7, 
    0x2e, 0x2, 0x2, 0x4c6, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4c7, 0x4c8, 0x5, 
    0x1c, 0xf, 0x2, 0x4c8, 0x4c9, 0x7, 0x7f, 0x2, 0x2, 0x4c9, 0x4ca, 0x7, 
    0x14, 0x2, 0x2, 0x4ca, 0x4cb, 0x7, 0x35, 0x2, 0x2, 0x4cb, 0x4cc, 0x7, 
    0x2e, 0x2, 0x2, 0x4cc, 0x4cd, 0x7, 0x13, 0x2, 0x2, 0x4cd, 0x4ce, 0x5, 
    0x1c, 0xf, 0x2, 0x4ce, 0x4cf, 0x7, 0x18, 0x2, 0x2, 0x4cf, 0x4d5, 0x3, 
    0x2, 0x2, 0x2, 0x4d0, 0x4d1, 0x7, 0x63, 0x2, 0x2, 0x4d1, 0x4d2, 0x7, 
    0x14, 0x2, 0x2, 0x4d2, 0x4d3, 0x7, 0x35, 0x2, 0x2, 0x4d3, 0x4d5, 0x7, 
    0x2e, 0x2, 0x2, 0x4d4, 0x4a3, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4a7, 0x3, 
    0x2, 0x2, 0x2, 0x4d4, 0x4aa, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4b2, 0x3, 
    0x2, 0x2, 0x2, 0x4d4, 0x4b7, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4bc, 0x3, 
    0x2, 0x2, 0x2, 0x4d4, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4d4, 0x4c7, 0x3, 
    0x2, 0x2, 0x2, 0x4d4, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0x4d5, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x4d6, 0x4d7, 0x7, 0xa, 0x2, 0x2, 0x4d7, 0x4d8, 0x7, 0x2e, 
    0x2, 0x2, 0x4d8, 0x4d9, 0x7, 0x5b, 0x2, 0x2, 0x4d9, 0x4da, 0x7, 0x80, 
    0x2, 0x2, 0x4da, 0x85, 0x3, 0x2, 0x2, 0x2, 0x4db, 0x4dc, 0x7, 0x81, 
    0x2, 0x2, 0x4dc, 0x4dd, 0x5, 0x1c, 0xf, 0x2, 0x4dd, 0x4de, 0x5, 0x120, 
    0x91, 0x2, 0x4de, 0x4df, 0x7, 0x82, 0x2, 0x2, 0x4df, 0x4f8, 0x3, 0x2, 
    0x2, 0x2, 0x4e0, 0x4e1, 0x7, 0x81, 0x2, 0x2, 0x4e1, 0x4e2, 0x5, 0x1c, 
    0xf, 0x2, 0x4e2, 0x4e3, 0x5, 0x120, 0x91, 0x2, 0x4e3, 0x4e4, 0x7, 0x82, 
    0x2, 0x2, 0x4e4, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4e6, 0x7, 0x81, 
    0x2, 0x2, 0x4e6, 0x4e7, 0x5, 0x1c, 0xf, 0x2, 0x4e7, 0x4e8, 0x5, 0x120, 
    0x91, 0x2, 0x4e8, 0x4e9, 0x7, 0x82, 0x2, 0x2, 0x4e9, 0x4f8, 0x3, 0x2, 
    0x2, 0x2, 0x4ea, 0x4eb, 0x7, 0x81, 0x2, 0x2, 0x4eb, 0x4ec, 0x5, 0x1c, 
    0xf, 0x2, 0x4ec, 0x4ed, 0x7, 0x82, 0x2, 0x2, 0x4ed, 0x4ee, 0x7, 0x33, 
    0x2, 0x2, 0x4ee, 0x4ef, 0x7, 0x19, 0x2, 0x2, 0x4ef, 0x4f0, 0x7, 0xe, 
    0x2, 0x2, 0x4f0, 0x4f1, 0x7, 0x34, 0x2, 0x2, 0x4f1, 0x4f2, 0x7, 0x13, 
    0x2, 0x2, 0x4f2, 0x4f3, 0x5, 0x36, 0x1c, 0x2, 0x4f3, 0x4f4, 0x7, 0x6, 
    0x2, 0x2, 0x4f4, 0x4f5, 0x7, 0x36, 0x2, 0x2, 0x4f5, 0x4f6, 0x7, 0x37, 
    0x2, 0x2, 0x4f6, 0x4f8, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4db, 0x3, 0x2, 
    0x2, 0x2, 0x4f7, 0x4e0, 0x3, 0x2, 0x2, 0x2, 0x4f7, 0x4e5, 0x3, 0x2, 
    0x2, 0x2, 0x4f7, 0x4ea, 0x3, 0x2, 0x2, 0x2, 0x4f8, 0x87, 0x3, 0x2, 0x2, 
    0x2, 0x4f9, 0x4fa, 0x7, 0x83, 0x2, 0x2, 0x4fa, 0x4fb, 0x5, 0x1c, 0xf, 
    0x2, 0x4fb, 0x89, 0x3, 0x2, 0x2, 0x2, 0x4fc, 0x4fd, 0x5, 0x1c, 0xf, 
    0x2, 0x4fd, 0x4fe, 0x7, 0x86, 0x2, 0x2, 0x4fe, 0x4ff, 0x5, 0x120, 0x91, 
    0x2, 0x4ff, 0x500, 0x7, 0x2e, 0x2, 0x2, 0x500, 0x501, 0x7, 0x26, 0x2, 
    0x2, 0x501, 0x502, 0x7, 0x36, 0x2, 0x2, 0x502, 0x503, 0x7, 0x37, 0x2, 
    0x2, 0x503, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x504, 0x505, 0x5, 0x1c, 0xf, 
    0x2, 0x505, 0x506, 0x7, 0x87, 0x2, 0x2, 0x506, 0x507, 0x5, 0x120, 0x91, 
    0x2, 0x507, 0x508, 0x7, 0x2e, 0x2, 0x2, 0x508, 0x509, 0x7, 0x26, 0x2, 
    0x2, 0x509, 0x50a, 0x7, 0x36, 0x2, 0x2, 0x50a, 0x50b, 0x7, 0x37, 0x2, 
    0x2, 0x50b, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x50d, 0x5, 0x1c, 0xf, 
    0x2, 0x50d, 0x50e, 0x7, 0x87, 0x2, 0x2, 0x50e, 0x50f, 0x7, 0x14, 0x2, 
    0x2, 0x50f, 0x510, 0x7, 0x2e, 0x2, 0x2, 0x510, 0x511, 0x7, 0x26, 0x2, 
    0x2, 0x511, 0x512, 0x7, 0x36, 0x2, 0x2, 0x512, 0x513, 0x7, 0x37, 0x2, 
    0x2, 0x513, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x514, 0x515, 0x5, 0x1c, 0xf, 
    0x2, 0x515, 0x516, 0x7, 0x86, 0x2, 0x2, 0x516, 0x517, 0x7, 0x14, 0x2, 
    0x2, 0x517, 0x518, 0x7, 0x2e, 0x2, 0x2, 0x518, 0x519, 0x7, 0x26, 0x2, 
    0x2, 0x519, 0x51a, 0x7, 0x36, 0x2, 0x2, 0x51a, 0x51b, 0x7, 0x37, 0x2, 
    0x2, 0x51b, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51d, 0x5, 0x1c, 0xf, 
    0x2, 0x51d, 0x51e, 0x7, 0x86, 0x2, 0x2, 0x51e, 0x51f, 0x5, 0x120, 0x91, 
    0x2, 0x51f, 0x520, 0x7, 0x2e, 0x2, 0x2, 0x520, 0x521, 0x7, 0x26, 0x2, 
    0x2, 0x521, 0x522, 0x7, 0x36, 0x2, 0x2, 0x522, 0x523, 0x7, 0x37, 0x2, 
    0x2, 0x523, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x524, 0x525, 0x5, 0x1c, 0xf, 
    0x2, 0x525, 0x526, 0x7, 0x86, 0x2, 0x2, 0x526, 0x527, 0x7, 0x14, 0x2, 
    0x2, 0x527, 0x528, 0x7, 0x2e, 0x2, 0x2, 0x528, 0x529, 0x7, 0x26, 0x2, 
    0x2, 0x529, 0x52a, 0x7, 0x36, 0x2, 0x2, 0x52a, 0x52b, 0x7, 0x37, 0x2, 
    0x2, 0x52b, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x52c, 0x52d, 0x7, 0x87, 0x2, 
    0x2, 0x52d, 0x53b, 0x7, 0xc7, 0x2, 0x2, 0x52e, 0x52f, 0x7, 0x87, 0x2, 
    0x2, 0x52f, 0x530, 0x7, 0x14, 0x2, 0x2, 0x530, 0x531, 0x7, 0x2e, 0x2, 
    0x2, 0x531, 0x532, 0x7, 0x26, 0x2, 0x2, 0x532, 0x533, 0x7, 0x17, 0x2, 
    0x2, 0x533, 0x53b, 0x7, 0x37, 0x2, 0x2, 0x534, 0x535, 0x7, 0x86, 0x2, 
    0x2, 0x535, 0x536, 0x7, 0x14, 0x2, 0x2, 0x536, 0x537, 0x7, 0x2e, 0x2, 
    0x2, 0x537, 0x538, 0x7, 0x26, 0x2, 0x2, 0x538, 0x539, 0x7, 0x36, 0x2, 
    0x2, 0x539, 0x53b, 0x7, 0x37, 0x2, 0x2, 0x53a, 0x4fc, 0x3, 0x2, 0x2, 
    0x2, 0x53a, 0x504, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x50c, 0x3, 0x2, 0x2, 
    0x2, 0x53a, 0x514, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x51c, 0x3, 0x2, 0x2, 
    0x2, 0x53a, 0x524, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x52c, 0x3, 0x2, 0x2, 
    0x2, 0x53a, 0x52e, 0x3, 0x2, 0x2, 0x2, 0x53a, 0x534, 0x3, 0x2, 0x2, 
    0x2, 0x53b, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53d, 0x7, 0x88, 0x2, 
    0x2, 0x53d, 0x53e, 0x7, 0x14, 0x2, 0x2, 0x53e, 0x557, 0x7, 0x2e, 0x2, 
    0x2, 0x53f, 0x540, 0x7, 0x88, 0x2, 0x2, 0x540, 0x541, 0x5, 0x120, 0x91, 
    0x2, 0x541, 0x542, 0x7, 0x2e, 0x2, 0x2, 0x542, 0x557, 0x3, 0x2, 0x2, 
    0x2, 0x543, 0x544, 0x7, 0x88, 0x2, 0x2, 0x544, 0x545, 0x7, 0x14, 0x2, 
    0x2, 0x545, 0x546, 0x7, 0x5a, 0x2, 0x2, 0x546, 0x557, 0x7, 0x2e, 0x2, 
    0x2, 0x547, 0x548, 0x5, 0x1c, 0xf, 0x2, 0x548, 0x549, 0x7, 0x88, 0x2, 
    0x2, 0x549, 0x54a, 0x5, 0x120, 0x91, 0x2, 0x54a, 0x54b, 0x7, 0x2e, 0x2, 
    0x2, 0x54b, 0x557, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54d, 0x5, 0x1c, 0xf, 
    0x2, 0x54d, 0x54e, 0x7, 0x88, 0x2, 0x2, 0x54e, 0x54f, 0x5, 0x120, 0x91, 
    0x2, 0x54f, 0x550, 0x7, 0x2e, 0x2, 0x2, 0x550, 0x557, 0x3, 0x2, 0x2, 
    0x2, 0x551, 0x552, 0x5, 0x1c, 0xf, 0x2, 0x552, 0x553, 0x7, 0x88, 0x2, 
    0x2, 0x553, 0x554, 0x7, 0x14, 0x2, 0x2, 0x554, 0x555, 0x7, 0x2e, 0x2, 
    0x2, 0x555, 0x557, 0x3, 0x2, 0x2, 0x2, 0x556, 0x53c, 0x3, 0x2, 0x2, 
    0x2, 0x556, 0x53f, 0x3, 0x2, 0x2, 0x2, 0x556, 0x543, 0x3, 0x2, 0x2, 
    0x2, 0x556, 0x547, 0x3, 0x2, 0x2, 0x2, 0x556, 0x54c, 0x3, 0x2, 0x2, 
    0x2, 0x556, 0x551, 0x3, 0x2, 0x2, 0x2, 0x557, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x558, 0x559, 0x7, 0x8d, 0x2, 0x2, 0x559, 0x55a, 0x7, 0x28, 0x2, 0x2, 
    0x55a, 0x55b, 0x7, 0x19, 0x2, 0x2, 0x55b, 0x55c, 0x5, 0x120, 0x91, 0x2, 
    0x55c, 0x55d, 0x7, 0x12, 0x2, 0x2, 0x55d, 0x55e, 0x7, 0x13, 0x2, 0x2, 
    0x55e, 0x55f, 0x7, 0x15, 0x2, 0x2, 0x55f, 0x560, 0x7, 0x26, 0x2, 0x2, 
    0x560, 0x561, 0x5, 0x1c, 0xf, 0x2, 0x561, 0x56f, 0x3, 0x2, 0x2, 0x2, 
    0x562, 0x563, 0x7, 0x8d, 0x2, 0x2, 0x563, 0x564, 0x7, 0x30, 0x2, 0x2, 
    0x564, 0x565, 0x7, 0x15, 0x2, 0x2, 0x565, 0x566, 0x7, 0x20, 0x2, 0x2, 
    0x566, 0x56f, 0x5, 0x1c, 0xf, 0x2, 0x567, 0x568, 0x7, 0x8d, 0x2, 0x2, 
    0x568, 0x569, 0x7, 0x14, 0x2, 0x2, 0x569, 0x56a, 0x7, 0x1a, 0x2, 0x2, 
    0x56a, 0x56b, 0x7, 0x13, 0x2, 0x2, 0x56b, 0x56c, 0x7, 0x15, 0x2, 0x2, 
    0x56c, 0x56d, 0x7, 0x26, 0x2, 0x2, 0x56d, 0x56f, 0x5, 0x1c, 0xf, 0x2, 
    0x56e, 0x558, 0x3, 0x2, 0x2, 0x2, 0x56e, 0x562, 0x3, 0x2, 0x2, 0x2, 
    0x56e, 0x567, 0x3, 0x2, 0x2, 0x2, 0x56f, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x570, 
    0x571, 0x7, 0x8e, 0x2, 0x2, 0x571, 0x91, 0x3, 0x2, 0x2, 0x2, 0x572, 
    0x573, 0x7, 0x8f, 0x2, 0x2, 0x573, 0x93, 0x3, 0x2, 0x2, 0x2, 0x574, 
    0x575, 0x7, 0x90, 0x2, 0x2, 0x575, 0x576, 0x5, 0x4e, 0x28, 0x2, 0x576, 
    0x577, 0x7, 0x91, 0x2, 0x2, 0x577, 0x578, 0x7, 0x7, 0x2, 0x2, 0x578, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x579, 0x57a, 0x7, 0x8d, 0x2, 0x2, 0x57a, 
    0x57b, 0x7, 0x4, 0x2, 0x2, 0x57b, 0x57c, 0x7, 0x7, 0x2, 0x2, 0x57c, 
    0x57d, 0x7, 0x95, 0x2, 0x2, 0x57d, 0x97, 0x3, 0x2, 0x2, 0x2, 0x57e, 
    0x57f, 0x7, 0x3e, 0x2, 0x2, 0x57f, 0x580, 0x5, 0x120, 0x91, 0x2, 0x580, 
    0x581, 0x7, 0x3f, 0x2, 0x2, 0x581, 0x99, 0x3, 0x2, 0x2, 0x2, 0x582, 
    0x583, 0x7, 0x96, 0x2, 0x2, 0x583, 0x584, 0x7, 0x92, 0x2, 0x2, 0x584, 
    0x585, 0x7, 0xe, 0x2, 0x2, 0x585, 0x586, 0x7, 0x97, 0x2, 0x2, 0x586, 
    0x587, 0x5, 0x120, 0x91, 0x2, 0x587, 0x588, 0x7, 0x2e, 0x2, 0x2, 0x588, 
    0x589, 0x7, 0x13, 0x2, 0x2, 0x589, 0x58a, 0x7, 0x17, 0x2, 0x2, 0x58a, 
    0x58b, 0x7, 0x67, 0x2, 0x2, 0x58b, 0x58c, 0x7, 0xcd, 0x2, 0x2, 0x58c, 
    0x58d, 0x7, 0x65, 0x2, 0x2, 0x58d, 0x58e, 0x7, 0x98, 0x2, 0x2, 0x58e, 
    0x58f, 0x7, 0x34, 0x2, 0x2, 0x58f, 0x590, 0x7, 0x99, 0x2, 0x2, 0x590, 
    0x591, 0x7, 0xe, 0x2, 0x2, 0x591, 0x592, 0x7, 0x66, 0x2, 0x2, 0x592, 
    0x593, 0x7, 0x9a, 0x2, 0x2, 0x593, 0x594, 0x7, 0xe, 0x2, 0x2, 0x594, 
    0x595, 0x7, 0x9b, 0x2, 0x2, 0x595, 0x596, 0x7, 0x99, 0x2, 0x2, 0x596, 
    0x597, 0x7, 0x97, 0x2, 0x2, 0x597, 0x598, 0x7, 0x6, 0x2, 0x2, 0x598, 
    0x599, 0x7, 0x98, 0x2, 0x2, 0x599, 0x59a, 0x7, 0x9d, 0x2, 0x2, 0x59a, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x59b, 0x59c, 0x7, 0xa, 0x2, 0x2, 0x59c, 0x59d, 
    0x7, 0x2e, 0x2, 0x2, 0x59d, 0x59e, 0x7, 0x9e, 0x2, 0x2, 0x59e, 0x59f, 
    0x7, 0x73, 0x2, 0x2, 0x59f, 0x5a0, 0x7, 0x9f, 0x2, 0x2, 0x5a0, 0x5a1, 
    0x7, 0x4d, 0x2, 0x2, 0x5a1, 0x5a2, 0x7, 0xa0, 0x2, 0x2, 0x5a2, 0x5a3, 
    0x7, 0x24, 0x2, 0x2, 0x5a3, 0x5a4, 0x7, 0x9e, 0x2, 0x2, 0x5a4, 0x5a5, 
    0x7, 0xa1, 0x2, 0x2, 0x5a5, 0x5a6, 0x7, 0x36, 0x2, 0x2, 0x5a6, 0x5a7, 
    0x7, 0x5e, 0x2, 0x2, 0x5a7, 0x5a8, 0x7, 0x60, 0x2, 0x2, 0x5a8, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x5a9, 0x5aa, 0x7, 0x1d, 0x2, 0x2, 0x5aa, 0x5ab, 
    0x7, 0xe, 0x2, 0x2, 0x5ab, 0x5ac, 0x7, 0x6a, 0x2, 0x2, 0x5ac, 0x5ad, 
    0x7, 0x13, 0x2, 0x2, 0x5ad, 0x5ae, 0x7, 0x14, 0x2, 0x2, 0x5ae, 0x5af, 
    0x7, 0x2e, 0x2, 0x2, 0x5af, 0x5b0, 0x7, 0x27, 0x2, 0x2, 0x5b0, 0x5b1, 
    0x7, 0x15, 0x2, 0x2, 0x5b1, 0x5b2, 0x7, 0x21, 0x2, 0x2, 0x5b2, 0x5b3, 
    0x5, 0x120, 0x91, 0x2, 0x5b3, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b5, 
    0x7, 0xa2, 0x2, 0x2, 0x5b5, 0x5b6, 0x7, 0xe, 0x2, 0x2, 0x5b6, 0x5b7, 
    0x7, 0x5d, 0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x13, 0x2, 0x2, 0x5b8, 0x5b9, 
    0x7, 0xc7, 0x2, 0x2, 0x5b9, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x5ba, 0x5bb, 
    0x7, 0x80, 0x2, 0x2, 0x5bb, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x5bc, 0x5bd, 
    0x5, 0x1e, 0x10, 0x2, 0x5bd, 0x5be, 0x7, 0x64, 0x2, 0x2, 0x5be, 0x5bf, 
    0x7, 0xa3, 0x2, 0x2, 0x5bf, 0x5c0, 0x7, 0x71, 0x2, 0x2, 0x5c0, 0x5c1, 
    0x7, 0x2e, 0x2, 0x2, 0x5c1, 0x5c2, 0x7, 0xa4, 0x2, 0x2, 0x5c2, 0x5c3, 
    0x7, 0xc7, 0x2, 0x2, 0x5c3, 0x607, 0x3, 0x2, 0x2, 0x2, 0x5c4, 0x5c5, 
    0x7, 0xa3, 0x2, 0x2, 0x5c5, 0x5c6, 0x7, 0x71, 0x2, 0x2, 0x5c6, 0x5c7, 
    0x7, 0xc7, 0x2, 0x2, 0x5c7, 0x5c8, 0x7, 0x4d, 0x2, 0x2, 0x5c8, 0x5c9, 
    0x5, 0x1e, 0x10, 0x2, 0x5c9, 0x5ca, 0x9, 0x8, 0x2, 0x2, 0x5ca, 0x5cb, 
    0x7, 0xa5, 0x2, 0x2, 0x5cb, 0x5cc, 0x7, 0x14, 0x2, 0x2, 0x5cc, 0x5cd, 
    0x7, 0x4b, 0x2, 0x2, 0x5cd, 0x5ce, 0x7, 0x2e, 0x2, 0x2, 0x5ce, 0x5cf, 
    0x7, 0x76, 0x2, 0x2, 0x5cf, 0x5d0, 0x7, 0x56, 0x2, 0x2, 0x5d0, 0x607, 
    0x3, 0x2, 0x2, 0x2, 0x5d1, 0x5d2, 0x7, 0xa3, 0x2, 0x2, 0x5d2, 0x5d3, 
    0x7, 0x71, 0x2, 0x2, 0x5d3, 0x5d4, 0x7, 0xc7, 0x2, 0x2, 0x5d4, 0x5d5, 
    0x7, 0x4d, 0x2, 0x2, 0x5d5, 0x5d6, 0x5, 0x1e, 0x10, 0x2, 0x5d6, 0x5d7, 
    0x9, 0x7, 0x2, 0x2, 0x5d7, 0x5d8, 0x7, 0x48, 0x2, 0x2, 0x5d8, 0x607, 
    0x3, 0x2, 0x2, 0x2, 0x5d9, 0x5da, 0x7, 0xa3, 0x2, 0x2, 0x5da, 0x5db, 
    0x7, 0x71, 0x2, 0x2, 0x5db, 0x5dc, 0x7, 0xc7, 0x2, 0x2, 0x5dc, 0x5dd, 
    0x7, 0x4d, 0x2, 0x2, 0x5dd, 0x5de, 0x5, 0x1e, 0x10, 0x2, 0x5de, 0x5df, 
    0x9, 0x7, 0x2, 0x2, 0x5df, 0x5e0, 0x7, 0x49, 0x2, 0x2, 0x5e0, 0x607, 
    0x3, 0x2, 0x2, 0x2, 0x5e1, 0x5e2, 0x7, 0xa3, 0x2, 0x2, 0x5e2, 0x5e3, 
    0x7, 0x71, 0x2, 0x2, 0x5e3, 0x5e4, 0x7, 0xc7, 0x2, 0x2, 0x5e4, 0x5e5, 
    0x7, 0x4d, 0x2, 0x2, 0x5e5, 0x5e6, 0x5, 0x1e, 0x10, 0x2, 0x5e6, 0x5e7, 
    0x9, 0x7, 0x2, 0x2, 0x5e7, 0x5e8, 0x7, 0x1c, 0x2, 0x2, 0x5e8, 0x5e9, 
    0x7, 0x7, 0x2, 0x2, 0x5e9, 0x607, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0x5eb, 
    0x7, 0xa3, 0x2, 0x2, 0x5eb, 0x5ec, 0x7, 0x71, 0x2, 0x2, 0x5ec, 0x5ed, 
    0x7, 0xc7, 0x2, 0x2, 0x5ed, 0x5ee, 0x7, 0x4d, 0x2, 0x2, 0x5ee, 0x5ef, 
    0x5, 0x1e, 0x10, 0x2, 0x5ef, 0x5f0, 0x9, 0x8, 0x2, 0x2, 0x5f0, 0x5f1, 
    0x7, 0x92, 0x2, 0x2, 0x5f1, 0x5f2, 0x7, 0x93, 0x2, 0x2, 0x5f2, 0x5f3, 
    0x5, 0x120, 0x91, 0x2, 0x5f3, 0x5f4, 0x7, 0x2e, 0x2, 0x2, 0x5f4, 0x5f5, 
    0x7, 0x6, 0x2, 0x2, 0x5f5, 0x5f6, 0x7, 0x17, 0x2, 0x2, 0x5f6, 0x5f7, 
    0x7, 0x63, 0x2, 0x2, 0x5f7, 0x607, 0x3, 0x2, 0x2, 0x2, 0x5f8, 0x5f9, 
    0x7, 0xa3, 0x2, 0x2, 0x5f9, 0x5fa, 0x7, 0x71, 0x2, 0x2, 0x5fa, 0x5fb, 
    0x7, 0xc7, 0x2, 0x2, 0x5fb, 0x5fc, 0x7, 0x4d, 0x2, 0x2, 0x5fc, 0x5fd, 
    0x5, 0x1e, 0x10, 0x2, 0x5fd, 0x5fe, 0x9, 0x8, 0x2, 0x2, 0x5fe, 0x5ff, 
    0x7, 0xa6, 0x2, 0x2, 0x5ff, 0x600, 0x5, 0x120, 0x91, 0x2, 0x600, 0x601, 
    0x7, 0x46, 0x2, 0x2, 0x601, 0x602, 0x7, 0x11, 0x2, 0x2, 0x602, 0x603, 
    0x7, 0x32, 0x2, 0x2, 0x603, 0x604, 0x7, 0x76, 0x2, 0x2, 0x604, 0x605, 
    0x7, 0x56, 0x2, 0x2, 0x605, 0x607, 0x3, 0x2, 0x2, 0x2, 0x606, 0x5bc, 
    0x3, 0x2, 0x2, 0x2, 0x606, 0x5c4, 0x3, 0x2, 0x2, 0x2, 0x606, 0x5d1, 
    0x3, 0x2, 0x2, 0x2, 0x606, 0x5d9, 0x3, 0x2, 0x2, 0x2, 0x606, 0x5e1, 
    0x3, 0x2, 0x2, 0x2, 0x606, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0x606, 0x5f8, 
    0x3, 0x2, 0x2, 0x2, 0x607, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x608, 0x609, 0x5, 
    0x36, 0x1c, 0x2, 0x609, 0x60a, 0x5, 0x1e, 0x10, 0x2, 0x60a, 0x60b, 0x7, 
    0x71, 0x2, 0x2, 0x60b, 0x60c, 0x7, 0x45, 0x2, 0x2, 0x60c, 0x60d, 0x5, 
    0x120, 0x91, 0x2, 0x60d, 0x60e, 0x7, 0x47, 0x2, 0x2, 0x60e, 0x60f, 0x7, 
    0x3f, 0x2, 0x2, 0x60f, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x610, 0x611, 0x7, 
    0xe, 0x2, 0x2, 0x611, 0x612, 0x7, 0x5e, 0x2, 0x2, 0x612, 0x613, 0x7, 
    0x4b, 0x2, 0x2, 0x613, 0x614, 0x7, 0x2e, 0x2, 0x2, 0x614, 0x615, 0x5, 
    0x1e, 0x10, 0x2, 0x615, 0x616, 0x7, 0x71, 0x2, 0x2, 0x616, 0x617, 0x7, 
    0xad, 0x2, 0x2, 0x617, 0x618, 0x7, 0x17, 0x2, 0x2, 0x618, 0x619, 0x7, 
    0x56, 0x2, 0x2, 0x619, 0x61a, 0x7, 0x45, 0x2, 0x2, 0x61a, 0x61b, 0x5, 
    0x120, 0x91, 0x2, 0x61b, 0x61c, 0x7, 0x47, 0x2, 0x2, 0x61c, 0x61d, 0x7, 
    0x3f, 0x2, 0x2, 0x61d, 0x61f, 0x3, 0x2, 0x2, 0x2, 0x61e, 0x608, 0x3, 
    0x2, 0x2, 0x2, 0x61e, 0x610, 0x3, 0x2, 0x2, 0x2, 0x61f, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0x620, 0x621, 0x7, 0xe, 0x2, 0x2, 0x621, 0x622, 0x7, 0x8c, 
    0x2, 0x2, 0x622, 0x623, 0x7, 0x13, 0x2, 0x2, 0x623, 0x624, 0x7, 0x17, 
    0x2, 0x2, 0x624, 0x625, 0x7, 0x4b, 0x2, 0x2, 0x625, 0x626, 0x7, 0x2e, 
    0x2, 0x2, 0x626, 0x627, 0x7, 0x4e, 0x2, 0x2, 0x627, 0x628, 0x5, 0x120, 
    0x91, 0x2, 0x628, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x629, 0x62a, 0x5, 0x1e, 
    0x10, 0x2, 0x62a, 0x62b, 0x7, 0xa7, 0x2, 0x2, 0x62b, 0x62c, 0x7, 0x71, 
    0x2, 0x2, 0x62c, 0x62d, 0x7, 0x2e, 0x2, 0x2, 0x62d, 0xab, 0x3, 0x2, 
    0x2, 0x2, 0x62e, 0x62f, 0x5, 0x1e, 0x10, 0x2, 0x62f, 0x630, 0x7, 0xa7, 
    0x2, 0x2, 0x630, 0x631, 0x7, 0xa8, 0x2, 0x2, 0x631, 0x632, 0x7, 0xa9, 
    0x2, 0x2, 0x632, 0x633, 0x7, 0x21, 0x2, 0x2, 0x633, 0x634, 0x7, 0xaa, 
    0x2, 0x2, 0x634, 0x63d, 0x3, 0x2, 0x2, 0x2, 0x635, 0x636, 0x5, 0x1e, 
    0x10, 0x2, 0x636, 0x637, 0x7, 0xa7, 0x2, 0x2, 0x637, 0x638, 0x7, 0xa8, 
    0x2, 0x2, 0x638, 0x639, 0x7, 0xa9, 0x2, 0x2, 0x639, 0x63a, 0x7, 0x21, 
    0x2, 0x2, 0x63a, 0x63b, 0x7, 0x2e, 0x2, 0x2, 0x63b, 0x63d, 0x3, 0x2, 
    0x2, 0x2, 0x63c, 0x62e, 0x3, 0x2, 0x2, 0x2, 0x63c, 0x635, 0x3, 0x2, 
    0x2, 0x2, 0x63d, 0xad, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x63f, 0x7, 0x17, 
    0x2, 0x2, 0x63f, 0x640, 0x7, 0x41, 0x2, 0x2, 0x640, 0x641, 0x7, 0x37, 
    0x2, 0x2, 0x641, 0x642, 0x7, 0x42, 0x2, 0x2, 0x642, 0x643, 0x7, 0x4e, 
    0x2, 0x2, 0x643, 0x644, 0x7, 0x43, 0x2, 0x2, 0x644, 0x645, 0x7, 0x21, 
    0x2, 0x2, 0x645, 0x646, 0x5, 0x120, 0x91, 0x2, 0x646, 0xaf, 0x3, 0x2, 
    0x2, 0x2, 0x647, 0x648, 0x7, 0x17, 0x2, 0x2, 0x648, 0x649, 0x7, 0x41, 
    0x2, 0x2, 0x649, 0x64a, 0x7, 0x82, 0x2, 0x2, 0x64a, 0x64b, 0x7, 0x4e, 
    0x2, 0x2, 0x64b, 0x64c, 0x7, 0x43, 0x2, 0x2, 0x64c, 0x64d, 0x7, 0x21, 
    0x2, 0x2, 0x64d, 0x64e, 0x5, 0x120, 0x91, 0x2, 0x64e, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0x64f, 0x650, 0x7, 0xc7, 0x2, 0x2, 0x650, 0x651, 0x7, 0x4f, 
    0x2, 0x2, 0x651, 0x652, 0x7, 0x17, 0x2, 0x2, 0x652, 0x653, 0x7, 0x5e, 
    0x2, 0x2, 0x653, 0x654, 0x7, 0x60, 0x2, 0x2, 0x654, 0xb3, 0x3, 0x2, 
    0x2, 0x2, 0x655, 0x656, 0x5, 0x1e, 0x10, 0x2, 0x656, 0x657, 0x7, 0xb7, 
    0x2, 0x2, 0x657, 0x658, 0x7, 0x59, 0x2, 0x2, 0x658, 0x659, 0x7, 0xd2, 
    0x2, 0x2, 0x659, 0x65a, 0x7, 0x92, 0x2, 0x2, 0x65a, 0x65b, 0x7, 0xe, 
    0x2, 0x2, 0x65b, 0x65c, 0x7, 0x58, 0x2, 0x2, 0x65c, 0x65d, 0x7, 0x13, 
    0x2, 0x2, 0x65d, 0x65e, 0x7, 0x17, 0x2, 0x2, 0x65e, 0x65f, 0x7, 0x56, 
    0x2, 0x2, 0x65f, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x660, 0x661, 0x7, 0x30, 
    0x2, 0x2, 0x661, 0x662, 0x7, 0x13, 0x2, 0x2, 0x662, 0x663, 0x5, 0x1e, 
    0x10, 0x2, 0x663, 0x664, 0x7, 0x2e, 0x2, 0x2, 0x664, 0x665, 0x7, 0xcc, 
    0x2, 0x2, 0x665, 0x666, 0x7, 0x8a, 0x2, 0x2, 0x666, 0x667, 0x7, 0x22, 
    0x2, 0x2, 0x667, 0x668, 0x7, 0x2e, 0x2, 0x2, 0x668, 0x669, 0x7, 0xa, 
    0x2, 0x2, 0x669, 0x66a, 0x7, 0x4, 0x2, 0x2, 0x66a, 0x66b, 0x7, 0x14, 
    0x2, 0x2, 0x66b, 0x66c, 0x7, 0xb, 0x2, 0x2, 0x66c, 0x66d, 0x7, 0xcc, 
    0x2, 0x2, 0x66d, 0x66e, 0x7, 0x8b, 0x2, 0x2, 0x66e, 0x66f, 0x7, 0x88, 
    0x2, 0x2, 0x66f, 0x670, 0x7, 0x8c, 0x2, 0x2, 0x670, 0x671, 0x7, 0x26, 
    0x2, 0x2, 0x671, 0x672, 0x7, 0xc7, 0x2, 0x2, 0x672, 0x687, 0x3, 0x2, 
    0x2, 0x2, 0x673, 0x674, 0x7, 0x30, 0x2, 0x2, 0x674, 0x675, 0x7, 0x13, 
    0x2, 0x2, 0x675, 0x676, 0x5, 0x1e, 0x10, 0x2, 0x676, 0x677, 0x7, 0x2e, 
    0x2, 0x2, 0x677, 0x678, 0x7, 0xcc, 0x2, 0x2, 0x678, 0x679, 0x7, 0x8a, 
    0x2, 0x2, 0x679, 0x67a, 0x7, 0x22, 0x2, 0x2, 0x67a, 0x67b, 0x7, 0x2e, 
    0x2, 0x2, 0x67b, 0x67c, 0x7, 0xa, 0x2, 0x2, 0x67c, 0x67d, 0x7, 0x4, 
    0x2, 0x2, 0x67d, 0x67e, 0x7, 0x14, 0x2, 0x2, 0x67e, 0x67f, 0x7, 0xb, 
    0x2, 0x2, 0x67f, 0x680, 0x7, 0xcc, 0x2, 0x2, 0x680, 0x681, 0x7, 0x8b, 
    0x2, 0x2, 0x681, 0x682, 0x7, 0x88, 0x2, 0x2, 0x682, 0x683, 0x7, 0x8c, 
    0x2, 0x2, 0x683, 0x684, 0x7, 0x26, 0x2, 0x2, 0x684, 0x685, 0x5, 0x50, 
    0x29, 0x2, 0x685, 0x687, 0x3, 0x2, 0x2, 0x2, 0x686, 0x660, 0x3, 0x2, 
    0x2, 0x2, 0x686, 0x673, 0x3, 0x2, 0x2, 0x2, 0x687, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0x688, 0x689, 0x7, 0x30, 0x2, 0x2, 0x689, 0x68a, 0x7, 0x13, 0x2, 
    0x2, 0x68a, 0x68b, 0x5, 0x1e, 0x10, 0x2, 0x68b, 0x68c, 0x7, 0x2e, 0x2, 
    0x2, 0x68c, 0x68d, 0x7, 0xcc, 0x2, 0x2, 0x68d, 0x68e, 0x7, 0x8a, 0x2, 
    0x2, 0x68e, 0x68f, 0x7, 0x22, 0x2, 0x2, 0x68f, 0x690, 0x7, 0x2e, 0x2, 
    0x2, 0x690, 0x691, 0x7, 0xa, 0x2, 0x2, 0x691, 0x692, 0x7, 0x4, 0x2, 
    0x2, 0x692, 0x693, 0x7, 0x14, 0x2, 0x2, 0x693, 0x694, 0x7, 0xb, 0x2, 
    0x2, 0x694, 0x695, 0x7, 0xcc, 0x2, 0x2, 0x695, 0x696, 0x7, 0x59, 0x2, 
    0x2, 0x696, 0x697, 0x5, 0x120, 0x91, 0x2, 0x697, 0x698, 0x7, 0x8c, 0x2, 
    0x2, 0x698, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x699, 0x69a, 0x7, 0xa3, 0x2, 
    0x2, 0x69a, 0x69b, 0x7, 0x4, 0x2, 0x2, 0x69b, 0x69c, 0x7, 0xc3, 0x2, 
    0x2, 0x69c, 0x69d, 0x5, 0x1e, 0x10, 0x2, 0x69d, 0x69e, 0x5, 0xfe, 0x80, 
    0x2, 0x69e, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x69f, 0x6ac, 0x5, 0xac, 0x57, 
    0x2, 0x6a0, 0x6ac, 0x5, 0xaa, 0x56, 0x2, 0x6a1, 0x6ac, 0x5, 0xa8, 0x55, 
    0x2, 0x6a2, 0x6ac, 0x5, 0xa6, 0x54, 0x2, 0x6a3, 0x6ac, 0x5, 0xa4, 0x53, 
    0x2, 0x6a4, 0x6ac, 0x5, 0xae, 0x58, 0x2, 0x6a5, 0x6ac, 0x5, 0xb0, 0x59, 
    0x2, 0x6a6, 0x6ac, 0x5, 0xb2, 0x5a, 0x2, 0x6a7, 0x6ac, 0x5, 0xb4, 0x5b, 
    0x2, 0x6a8, 0x6ac, 0x5, 0xb6, 0x5c, 0x2, 0x6a9, 0x6ac, 0x5, 0xb8, 0x5d, 
    0x2, 0x6aa, 0x6ac, 0x5, 0xba, 0x5e, 0x2, 0x6ab, 0x69f, 0x3, 0x2, 0x2, 
    0x2, 0x6ab, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6a1, 0x3, 0x2, 0x2, 
    0x2, 0x6ab, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6a3, 0x3, 0x2, 0x2, 
    0x2, 0x6ab, 0x6a4, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6a5, 0x3, 0x2, 0x2, 
    0x2, 0x6ab, 0x6a6, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6a7, 0x3, 0x2, 0x2, 
    0x2, 0x6ab, 0x6a8, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6a9, 0x3, 0x2, 0x2, 
    0x2, 0x6ab, 0x6aa, 0x3, 0x2, 0x2, 0x2, 0x6ac, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0x6ad, 0x6ae, 0x7, 0x6a, 0x2, 0x2, 0x6ae, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0x6af, 0x6b0, 0x7, 0xe, 0x2, 0x2, 0x6b0, 0x6b1, 0x7, 0x58, 0x2, 0x2, 
    0x6b1, 0x6b2, 0x7, 0x13, 0x2, 0x2, 0x6b2, 0x6b3, 0x5, 0x1e, 0x10, 0x2, 
    0x6b3, 0x6b4, 0x7, 0x56, 0x2, 0x2, 0x6b4, 0x6bc, 0x3, 0x2, 0x2, 0x2, 
    0x6b5, 0x6b6, 0x7, 0xe, 0x2, 0x2, 0x6b6, 0x6b7, 0x7, 0x58, 0x2, 0x2, 
    0x6b7, 0x6b8, 0x7, 0x13, 0x2, 0x2, 0x6b8, 0x6b9, 0x5, 0x1e, 0x10, 0x2, 
    0x6b9, 0x6ba, 0x7, 0x56, 0x2, 0x2, 0x6ba, 0x6bc, 0x3, 0x2, 0x2, 0x2, 
    0x6bb, 0x6af, 0x3, 0x2, 0x2, 0x2, 0x6bb, 0x6b5, 0x3, 0x2, 0x2, 0x2, 
    0x6bc, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6be, 0x7, 0xe, 0x2, 0x2, 0x6be, 
    0x6bf, 0x7, 0x55, 0x2, 0x2, 0x6bf, 0x6c0, 0x7, 0x13, 0x2, 0x2, 0x6c0, 
    0x6c1, 0x5, 0x1e, 0x10, 0x2, 0x6c1, 0x6c2, 0x7, 0x56, 0x2, 0x2, 0x6c2, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c4, 0x7, 0xe, 0x2, 0x2, 0x6c4, 0x6c5, 
    0x7, 0x58, 0x2, 0x2, 0x6c5, 0x6c6, 0x7, 0x13, 0x2, 0x2, 0x6c6, 0x6c7, 
    0x5, 0x1e, 0x10, 0x2, 0x6c7, 0x6c8, 0x7, 0x2a, 0x2, 0x2, 0x6c8, 0x6c9, 
    0x7, 0x56, 0x2, 0x2, 0x6c9, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6cb, 
    0x7, 0xe, 0x2, 0x2, 0x6cb, 0x6cc, 0x7, 0x55, 0x2, 0x2, 0x6cc, 0x6cd, 
    0x7, 0x13, 0x2, 0x2, 0x6cd, 0x6ce, 0x7, 0xe, 0x2, 0x2, 0x6ce, 0x6d7, 
    0x7, 0x56, 0x2, 0x2, 0x6cf, 0x6d0, 0x7, 0xe, 0x2, 0x2, 0x6d0, 0x6d1, 
    0x7, 0x55, 0x2, 0x2, 0x6d1, 0x6d2, 0x7, 0x13, 0x2, 0x2, 0x6d2, 0x6d7, 
    0x7, 0x56, 0x2, 0x2, 0x6d3, 0x6d4, 0x7, 0x55, 0x2, 0x2, 0x6d4, 0x6d5, 
    0x7, 0x13, 0x2, 0x2, 0x6d5, 0x6d7, 0x7, 0x56, 0x2, 0x2, 0x6d6, 0x6ca, 
    0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d3, 
    0x3, 0x2, 0x2, 0x2, 0x6d7, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x6d8, 0x6dd, 0x5, 
    0xc0, 0x61, 0x2, 0x6d9, 0x6dd, 0x5, 0xc2, 0x62, 0x2, 0x6da, 0x6dd, 0x5, 
    0xc4, 0x63, 0x2, 0x6db, 0x6dd, 0x5, 0xc6, 0x64, 0x2, 0x6dc, 0x6d8, 0x3, 
    0x2, 0x2, 0x2, 0x6dc, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6dc, 0x6da, 0x3, 
    0x2, 0x2, 0x2, 0x6dc, 0x6db, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0x6de, 0x6df, 0x7, 0x92, 0x2, 0x2, 0x6df, 0x6e0, 0x7, 0xe, 
    0x2, 0x2, 0x6e0, 0x6e1, 0x7, 0x58, 0x2, 0x2, 0x6e1, 0x6e2, 0x7, 0x13, 
    0x2, 0x2, 0x6e2, 0x6e3, 0x7, 0xe, 0x2, 0x2, 0x6e3, 0x6e4, 0x7, 0xc6, 
    0x2, 0x2, 0x6e4, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x6e5, 0x6e6, 0x7, 0x3a, 
    0x2, 0x2, 0x6e6, 0x6e7, 0x7, 0xe, 0x2, 0x2, 0x6e7, 0x6e8, 0x7, 0xac, 
    0x2, 0x2, 0x6e8, 0x6e9, 0x7, 0xb1, 0x2, 0x2, 0x6e9, 0x6ea, 0x7, 0xad, 
    0x2, 0x2, 0x6ea, 0x6eb, 0x5, 0xe, 0x8, 0x2, 0x6eb, 0x6ec, 0x7, 0x56, 
    0x2, 0x2, 0x6ec, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x6ed, 0x6ee, 0x7, 0x3a, 
    0x2, 0x2, 0x6ee, 0x6ef, 0x7, 0xe, 0x2, 0x2, 0x6ef, 0x6f0, 0x7, 0xac, 
    0x2, 0x2, 0x6f0, 0x6f1, 0x7, 0xb1, 0x2, 0x2, 0x6f1, 0x6f2, 0x7, 0xad, 
    0x2, 0x2, 0x6f2, 0x6f3, 0x7, 0x1b, 0x2, 0x2, 0x6f3, 0x6fc, 0x7, 0x56, 
    0x2, 0x2, 0x6f4, 0x6f5, 0x7, 0xad, 0x2, 0x2, 0x6f5, 0x6f6, 0x7, 0x1b, 
    0x2, 0x2, 0x6f6, 0x6fc, 0x7, 0x56, 0x2, 0x2, 0x6f7, 0x6f8, 0x7, 0xad, 
    0x2, 0x2, 0x6f8, 0x6f9, 0x5, 0xe, 0x8, 0x2, 0x6f9, 0x6fa, 0x7, 0x56, 
    0x2, 0x2, 0x6fa, 0x6fc, 0x3, 0x2, 0x2, 0x2, 0x6fb, 0x6e5, 0x3, 0x2, 
    0x2, 0x2, 0x6fb, 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x6fb, 0x6f4, 0x3, 0x2, 
    0x2, 0x2, 0x6fb, 0x6f7, 0x3, 0x2, 0x2, 0x2, 0x6fc, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0x6fd, 0x6fe, 0x5, 0x1e, 0x10, 0x2, 0x6fe, 0x6ff, 0x7, 0xa5, 0x2, 
    0x2, 0x6ff, 0x700, 0x5, 0x36, 0x1c, 0x2, 0x700, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x701, 0x702, 0x5, 0x36, 0x1c, 0x2, 0x702, 0x703, 0x7, 0xb0, 0x2, 
    0x2, 0x703, 0x766, 0x3, 0x2, 0x2, 0x2, 0x704, 0x705, 0x5, 0x1e, 0x10, 
    0x2, 0x705, 0x706, 0x7, 0xa5, 0x2, 0x2, 0x706, 0x707, 0x5, 0xe, 0x8, 
    0x2, 0x707, 0x708, 0x7, 0xac, 0x2, 0x2, 0x708, 0x709, 0x5, 0x36, 0x1c, 
    0x2, 0x709, 0x766, 0x3, 0x2, 0x2, 0x2, 0x70a, 0x70b, 0x5, 0x1e, 0x10, 
    0x2, 0x70b, 0x70c, 0x7, 0x88, 0x2, 0x2, 0x70c, 0x70d, 0x7, 0x14, 0x2, 
    0x2, 0x70d, 0x70e, 0x7, 0x2e, 0x2, 0x2, 0x70e, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x70f, 0x710, 0x5, 0x1e, 0x10, 0x2, 0x710, 0x711, 0x7, 0x90, 0x2, 
    0x2, 0x711, 0x712, 0x7, 0x7, 0x2, 0x2, 0x712, 0x713, 0x7, 0x6, 0x2, 
    0x2, 0x713, 0x714, 0x5, 0x50, 0x29, 0x2, 0x714, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x715, 0x71a, 0x5, 0x1e, 0x10, 0x2, 0x716, 0x717, 0x7, 0x46, 0x2, 
    0x2, 0x717, 0x719, 0x5, 0x1e, 0x10, 0x2, 0x718, 0x716, 0x3, 0x2, 0x2, 
    0x2, 0x719, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71a, 0x718, 0x3, 0x2, 0x2, 
    0x2, 0x71a, 0x71b, 0x3, 0x2, 0x2, 0x2, 0x71b, 0x71d, 0x3, 0x2, 0x2, 
    0x2, 0x71c, 0x71a, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x720, 0x7, 0xae, 0x2, 
    0x2, 0x71e, 0x721, 0x5, 0x36, 0x1c, 0x2, 0x71f, 0x721, 0x5, 0x50, 0x29, 
    0x2, 0x720, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x720, 0x71f, 0x3, 0x2, 0x2, 
    0x2, 0x721, 0x766, 0x3, 0x2, 0x2, 0x2, 0x722, 0x723, 0x5, 0x1e, 0x10, 
    0x2, 0x723, 0x724, 0x7, 0x71, 0x2, 0x2, 0x724, 0x725, 0x5, 0x36, 0x1c, 
    0x2, 0x725, 0x766, 0x3, 0x2, 0x2, 0x2, 0x726, 0x727, 0x5, 0x1e, 0x10, 
    0x2, 0x727, 0x728, 0x7, 0x71, 0x2, 0x2, 0x728, 0x729, 0x5, 0xe, 0x8, 
    0x2, 0x729, 0x72a, 0x7, 0xac, 0x2, 0x2, 0x72a, 0x72b, 0x5, 0x36, 0x1c, 
    0x2, 0x72b, 0x766, 0x3, 0x2, 0x2, 0x2, 0x72c, 0x72d, 0x5, 0x1e, 0x10, 
    0x2, 0x72d, 0x72e, 0x7, 0x71, 0x2, 0x2, 0x72e, 0x72f, 0x5, 0xe, 0x8, 
    0x2, 0x72f, 0x730, 0x7, 0x5e, 0x2, 0x2, 0x730, 0x731, 0x5, 0x36, 0x1c, 
    0x2, 0x731, 0x766, 0x3, 0x2, 0x2, 0x2, 0x732, 0x733, 0x7, 0x14, 0x2, 
    0x2, 0x733, 0x734, 0x7, 0x3f, 0x2, 0x2, 0x734, 0x735, 0x7, 0x4e, 0x2, 
    0x2, 0x735, 0x736, 0x7, 0x84, 0x2, 0x2, 0x736, 0x737, 0x7, 0x6, 0x2, 
    0x2, 0x737, 0x738, 0x7, 0x76, 0x2, 0x2, 0x738, 0x766, 0x7, 0x85, 0x2, 
    0x2, 0x739, 0x73a, 0x5, 0x1e, 0x10, 0x2, 0x73a, 0x73b, 0x7, 0x52, 0x2, 
    0x2, 0x73b, 0x73c, 0x5, 0x36, 0x1c, 0x2, 0x73c, 0x73d, 0x7, 0x19, 0x2, 
    0x2, 0x73d, 0x73e, 0x5, 0x1e, 0x10, 0x2, 0x73e, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x73f, 0x740, 0x5, 0x36, 0x1c, 0x2, 0x740, 0x741, 0x7, 0x4e, 0x2, 
    0x2, 0x741, 0x742, 0x7, 0x35, 0x2, 0x2, 0x742, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x743, 0x744, 0x5, 0x1e, 0x10, 0x2, 0x744, 0x745, 0x7, 0x83, 0x2, 
    0x2, 0x745, 0x746, 0x5, 0x1e, 0x10, 0x2, 0x746, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x747, 0x748, 0x5, 0x36, 0x1c, 0x2, 0x748, 0x749, 0x7, 0x4e, 0x2, 
    0x2, 0x749, 0x74a, 0x7, 0xb3, 0x2, 0x2, 0x74a, 0x74b, 0x7, 0x19, 0x2, 
    0x2, 0x74b, 0x74c, 0x7, 0x17, 0x2, 0x2, 0x74c, 0x74d, 0x7, 0x63, 0x2, 
    0x2, 0x74d, 0x766, 0x3, 0x2, 0x2, 0x2, 0x74e, 0x74f, 0x5, 0x1e, 0x10, 
    0x2, 0x74f, 0x750, 0x7, 0x5e, 0x2, 0x2, 0x750, 0x751, 0x7, 0x60, 0x2, 
    0x2, 0x751, 0x766, 0x3, 0x2, 0x2, 0x2, 0x752, 0x753, 0x5, 0x1e, 0x10, 
    0x2, 0x753, 0x754, 0x7, 0x71, 0x2, 0x2, 0x754, 0x755, 0x7, 0xc7, 0x2, 
    0x2, 0x755, 0x766, 0x3, 0x2, 0x2, 0x2, 0x756, 0x757, 0x5, 0x36, 0x1c, 
    0x2, 0x757, 0x758, 0x5, 0x1e, 0x10, 0x2, 0x758, 0x759, 0x7, 0xb9, 0x2, 
    0x2, 0x759, 0x75a, 0x7, 0xc2, 0x2, 0x2, 0x75a, 0x75b, 0x7, 0x19, 0x2, 
    0x2, 0x75b, 0x75c, 0x7, 0xa5, 0x2, 0x2, 0x75c, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x75d, 0x75e, 0x5, 0x1e, 0x10, 0x2, 0x75e, 0x75f, 0x7, 0xd, 0x2, 
    0x2, 0x75f, 0x760, 0x5, 0x1e, 0x10, 0x2, 0x760, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x761, 0x762, 0x5, 0x1e, 0x10, 0x2, 0x762, 0x763, 0x7, 0xb2, 0x2, 
    0x2, 0x763, 0x764, 0x7, 0x15, 0x2, 0x2, 0x764, 0x766, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x6fd, 0x3, 0x2, 0x2, 0x2, 0x765, 0x701, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x704, 0x3, 0x2, 0x2, 0x2, 0x765, 0x70a, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x70f, 0x3, 0x2, 0x2, 0x2, 0x765, 0x715, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x722, 0x3, 0x2, 0x2, 0x2, 0x765, 0x726, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x72c, 0x3, 0x2, 0x2, 0x2, 0x765, 0x732, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x739, 0x3, 0x2, 0x2, 0x2, 0x765, 0x73f, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x743, 0x3, 0x2, 0x2, 0x2, 0x765, 0x747, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x74e, 0x3, 0x2, 0x2, 0x2, 0x765, 0x752, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x756, 0x3, 0x2, 0x2, 0x2, 0x765, 0x75d, 0x3, 0x2, 0x2, 
    0x2, 0x765, 0x761, 0x3, 0x2, 0x2, 0x2, 0x766, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0x767, 0x768, 0x7, 0x92, 0x2, 0x2, 0x768, 0x769, 0x5, 0xc8, 0x65, 0x2, 
    0x769, 0x76a, 0x7, 0xcc, 0x2, 0x2, 0x76a, 0x76b, 0x5, 0x132, 0x9a, 0x2, 
    0x76b, 0x77d, 0x3, 0x2, 0x2, 0x2, 0x76c, 0x76d, 0x7, 0xab, 0x2, 0x2, 
    0x76d, 0x76f, 0x5, 0xce, 0x68, 0x2, 0x76e, 0x770, 0x5, 0xcc, 0x67, 0x2, 
    0x76f, 0x76e, 0x3, 0x2, 0x2, 0x2, 0x76f, 0x770, 0x3, 0x2, 0x2, 0x2, 
    0x770, 0x771, 0x3, 0x2, 0x2, 0x2, 0x771, 0x772, 0x7, 0xcc, 0x2, 0x2, 
    0x772, 0x773, 0x5, 0x132, 0x9a, 0x2, 0x773, 0x77d, 0x3, 0x2, 0x2, 0x2, 
    0x774, 0x775, 0x5, 0xbe, 0x60, 0x2, 0x775, 0x776, 0x7, 0xce, 0x2, 0x2, 
    0x776, 0x777, 0x5, 0x132, 0x9a, 0x2, 0x777, 0x77d, 0x3, 0x2, 0x2, 0x2, 
    0x778, 0x779, 0x5, 0xca, 0x66, 0x2, 0x779, 0x77a, 0x7, 0xcc, 0x2, 0x2, 
    0x77a, 0x77b, 0x5, 0x132, 0x9a, 0x2, 0x77b, 0x77d, 0x3, 0x2, 0x2, 0x2, 
    0x77c, 0x767, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x76c, 0x3, 0x2, 0x2, 0x2, 
    0x77c, 0x774, 0x3, 0x2, 0x2, 0x2, 0x77c, 0x778, 0x3, 0x2, 0x2, 0x2, 
    0x77d, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x77f, 0x7, 0x4d, 0x2, 0x2, 
    0x77f, 0x780, 0x5, 0x1e, 0x10, 0x2, 0x780, 0x781, 0x7, 0xb4, 0x2, 0x2, 
    0x781, 0x782, 0x7, 0xb2, 0x2, 0x2, 0x782, 0x783, 0x7, 0x15, 0x2, 0x2, 
    0x783, 0x784, 0x7, 0xcc, 0x2, 0x2, 0x784, 0x785, 0x7, 0xb5, 0x2, 0x2, 
    0x785, 0x786, 0x5, 0x1c, 0xf, 0x2, 0x786, 0x787, 0x7, 0xb2, 0x2, 0x2, 
    0x787, 0x788, 0x7, 0xe, 0x2, 0x2, 0x788, 0x789, 0x7, 0x15, 0x2, 0x2, 
    0x789, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x78a, 0x78b, 0x7, 0x4d, 0x2, 0x2, 
    0x78b, 0x78c, 0x5, 0x1e, 0x10, 0x2, 0x78c, 0x78d, 0x7, 0xb4, 0x2, 0x2, 
    0x78d, 0x78e, 0x7, 0xbd, 0x2, 0x2, 0x78e, 0x78f, 0x7, 0x32, 0x2, 0x2, 
    0x78f, 0x790, 0x7, 0x3a, 0x2, 0x2, 0x790, 0x791, 0x7, 0xe, 0x2, 0x2, 
    0x791, 0x792, 0x7, 0xac, 0x2, 0x2, 0x792, 0x793, 0x7, 0xb1, 0x2, 0x2, 
    0x793, 0x794, 0x7, 0xad, 0x2, 0x2, 0x794, 0x795, 0x7, 0x1b, 0x2, 0x2, 
    0x795, 0x796, 0x7, 0x56, 0x2, 0x2, 0x796, 0x798, 0x7, 0xcc, 0x2, 0x2, 
    0x797, 0x799, 0x5, 0xe, 0x8, 0x2, 0x798, 0x797, 0x3, 0x2, 0x2, 0x2, 
    0x798, 0x799, 0x3, 0x2, 0x2, 0x2, 0x799, 0x79a, 0x3, 0x2, 0x2, 0x2, 
    0x79a, 0x79b, 0x7, 0xb5, 0x2, 0x2, 0x79b, 0x79c, 0x7, 0xbd, 0x2, 0x2, 
    0x79c, 0x79d, 0x5, 0x120, 0x91, 0x2, 0x79d, 0x79e, 0x7, 0x47, 0x2, 0x2, 
    0x79e, 0x79f, 0x7, 0x32, 0x2, 0x2, 0x79f, 0x7a0, 0x7, 0xcd, 0x2, 0x2, 
    0x7a0, 0x7a1, 0x7, 0x76, 0x2, 0x2, 0x7a1, 0x7a2, 0x7, 0x64, 0x2, 0x2, 
    0x7a2, 0x7a3, 0x7, 0xbf, 0x2, 0x2, 0x7a3, 0x7a4, 0x7, 0xc0, 0x2, 0x2, 
    0x7a4, 0x7a5, 0x7, 0x32, 0x2, 0x2, 0x7a5, 0x7a6, 0x7, 0xa6, 0x2, 0x2, 
    0x7a6, 0x7a7, 0x7, 0xc1, 0x2, 0x2, 0x7a7, 0x7a8, 0x5, 0x120, 0x91, 0x2, 
    0x7a8, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x7a9, 0x7aa, 0x7, 0x4d, 0x2, 0x2, 
    0x7aa, 0x7ab, 0x5, 0x1e, 0x10, 0x2, 0x7ab, 0x7ac, 0x7, 0xb4, 0x2, 0x2, 
    0x7ac, 0x7ad, 0x7, 0x81, 0x2, 0x2, 0x7ad, 0x7ae, 0x5, 0x1e, 0x10, 0x2, 
    0x7ae, 0x7af, 0x7, 0x82, 0x2, 0x2, 0x7af, 0x7b0, 0x7, 0xcc, 0x2, 0x2, 
    0x7b0, 0x7b1, 0x7, 0xb5, 0x2, 0x2, 0x7b1, 0x7b2, 0x7, 0x31, 0x2, 0x2, 
    0x7b2, 0x7b3, 0x7, 0xa, 0x2, 0x2, 0x7b3, 0x7b4, 0x7, 0x9c, 0x2, 0x2, 
    0x7b4, 0x7b5, 0x7, 0x32, 0x2, 0x2, 0x7b5, 0x7b6, 0x7, 0x19, 0x2, 0x2, 
    0x7b6, 0x7b7, 0x5, 0x1c, 0xf, 0x2, 0x7b7, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0x7b8, 0x7bc, 0x5, 0xd2, 0x6a, 0x2, 0x7b9, 0x7bc, 0x5, 0xd4, 0x6b, 0x2, 
    0x7ba, 0x7bc, 0x5, 0xd6, 0x6c, 0x2, 0x7bb, 0x7b8, 0x3, 0x2, 0x2, 0x2, 
    0x7bb, 0x7b9, 0x3, 0x2, 0x2, 0x2, 0x7bb, 0x7ba, 0x3, 0x2, 0x2, 0x2, 
    0x7bc, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7be, 0x7, 0x4d, 0x2, 0x2, 
    0x7be, 0x7bf, 0x7, 0x2c, 0x2, 0x2, 0x7bf, 0x7ca, 0x7, 0xb6, 0x2, 0x2, 
    0x7c0, 0x7c1, 0x7, 0x4d, 0x2, 0x2, 0x7c1, 0x7c2, 0x7, 0x2c, 0x2, 0x2, 
    0x7c2, 0x7ca, 0x7, 0xb7, 0x2, 0x2, 0x7c3, 0x7c4, 0x7, 0x4d, 0x2, 0x2, 
    0x7c4, 0x7c5, 0x7, 0x27, 0x2, 0x2, 0x7c5, 0x7ca, 0x7, 0xb6, 0x2, 0x2, 
    0x7c6, 0x7c7, 0x7, 0x4d, 0x2, 0x2, 0x7c7, 0x7c8, 0x7, 0x27, 0x2, 0x2, 
    0x7c8, 0x7ca, 0x7, 0xb7, 0x2, 0x2, 0x7c9, 0x7bd, 0x3, 0x2, 0x2, 0x2, 
    0x7c9, 0x7c0, 0x3, 0x2, 0x2, 0x2, 0x7c9, 0x7c3, 0x3, 0x2, 0x2, 0x2, 
    0x7c9, 0x7c6, 0x3, 0x2, 0x2, 0x2, 0x7ca, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x7cb, 
    0x7cc, 0x7, 0x4d, 0x2, 0x2, 0x7cc, 0x7cd, 0x7, 0x2c, 0x2, 0x2, 0x7cd, 
    0x7d2, 0x7, 0xa7, 0x2, 0x2, 0x7ce, 0x7cf, 0x7, 0x4d, 0x2, 0x2, 0x7cf, 
    0x7d0, 0x7, 0x27, 0x2, 0x2, 0x7d0, 0x7d2, 0x7, 0xa7, 0x2, 0x2, 0x7d1, 
    0x7cb, 0x3, 0x2, 0x2, 0x2, 0x7d1, 0x7ce, 0x3, 0x2, 0x2, 0x2, 0x7d2, 
    0xdd, 0x3, 0x2, 0x2, 0x2, 0x7d3, 0x7d4, 0x7, 0x4d, 0x2, 0x2, 0x7d4, 
    0x7d6, 0x5, 0x1e, 0x10, 0x2, 0x7d5, 0x7d7, 0x9, 0x8, 0x2, 0x2, 0x7d6, 
    0x7d5, 0x3, 0x2, 0x2, 0x2, 0x7d6, 0x7d7, 0x3, 0x2, 0x2, 0x2, 0x7d7, 
    0x7d8, 0x3, 0x2, 0x2, 0x2, 0x7d8, 0x7d9, 0x7, 0xb8, 0x2, 0x2, 0x7d9, 
    0x7da, 0x7, 0x23, 0x2, 0x2, 0x7da, 0x7db, 0x7, 0x4c, 0x2, 0x2, 0x7db, 
    0x7dc, 0x7, 0x2e, 0x2, 0x2, 0x7dc, 0x7dd, 0x7, 0x76, 0x2, 0x2, 0x7dd, 
    0x7de, 0x7, 0x56, 0x2, 0x2, 0x7de, 0x7ec, 0x3, 0x2, 0x2, 0x2, 0x7df, 
    0x7e0, 0x7, 0x4d, 0x2, 0x2, 0x7e0, 0x7e2, 0x5, 0x1e, 0x10, 0x2, 0x7e1, 
    0x7e3, 0x9, 0x8, 0x2, 0x2, 0x7e2, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x7e2, 
    0x7e3, 0x3, 0x2, 0x2, 0x2, 0x7e3, 0x7e4, 0x3, 0x2, 0x2, 0x2, 0x7e4, 
    0x7e5, 0x7, 0xb8, 0x2, 0x2, 0x7e5, 0x7e6, 0x7, 0x14, 0x2, 0x2, 0x7e6, 
    0x7e7, 0x7, 0x4b, 0x2, 0x2, 0x7e7, 0x7e8, 0x7, 0x2e, 0x2, 0x2, 0x7e8, 
    0x7e9, 0x7, 0x76, 0x2, 0x2, 0x7e9, 0x7ea, 0x7, 0x56, 0x2, 0x2, 0x7ea, 
    0x7ec, 0x3, 0x2, 0x2, 0x2, 0x7eb, 0x7d3, 0x3, 0x2, 0x2, 0x2, 0x7eb, 
    0x7df, 0x3, 0x2, 0x2, 0x2, 0x7ec, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x7ed, 0x7ee, 
    0x7, 0x4d, 0x2, 0x2, 0x7ee, 0x7f0, 0x5, 0x1e, 0x10, 0x2, 0x7ef, 0x7f1, 
    0x9, 0x8, 0x2, 0x2, 0x7f0, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x7f0, 0x7f1, 
    0x3, 0x2, 0x2, 0x2, 0x7f1, 0x7f3, 0x3, 0x2, 0x2, 0x2, 0x7f2, 0x7f4, 
    0x7, 0x1f, 0x2, 0x2, 0x7f3, 0x7f2, 0x3, 0x2, 0x2, 0x2, 0x7f3, 0x7f4, 
    0x3, 0x2, 0x2, 0x2, 0x7f4, 0x7f5, 0x3, 0x2, 0x2, 0x2, 0x7f5, 0x7f6, 
    0x7, 0xa1, 0x2, 0x2, 0x7f6, 0x7f7, 0x5, 0xe, 0x8, 0x2, 0x7f7, 0x7f8, 
    0x7, 0x5e, 0x2, 0x2, 0x7f8, 0x7f9, 0x7, 0x60, 0x2, 0x2, 0x7f9, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0x7fa, 0x7fb, 0x7, 0x4d, 0x2, 0x2, 0x7fb, 0x7fc, 
    0x5, 0x1e, 0x10, 0x2, 0x7fc, 0x7fd, 0x7, 0x94, 0x2, 0x2, 0x7fd, 0x7fe, 
    0x7, 0x1c, 0x2, 0x2, 0x7fe, 0x7ff, 0x7, 0xc7, 0x2, 0x2, 0x7ff, 0x807, 
    0x3, 0x2, 0x2, 0x2, 0x800, 0x801, 0x7, 0x4d, 0x2, 0x2, 0x801, 0x802, 
    0x5, 0x1e, 0x10, 0x2, 0x802, 0x803, 0x7, 0x94, 0x2, 0x2, 0x803, 0x804, 
    0x7, 0x1c, 0x2, 0x2, 0x804, 0x805, 0x7, 0x7, 0x2, 0x2, 0x805, 0x807, 
    0x3, 0x2, 0x2, 0x2, 0x806, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x806, 0x800, 
    0x3, 0x2, 0x2, 0x2, 0x807, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x808, 0x809, 0x7, 
    0x4d, 0x2, 0x2, 0x809, 0x80a, 0x5, 0x1e, 0x10, 0x2, 0x80a, 0x80b, 0x7, 
    0x94, 0x2, 0x2, 0x80b, 0x80c, 0x7, 0x48, 0x2, 0x2, 0x80c, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0x80d, 0x80e, 0x7, 0x4d, 0x2, 0x2, 0x80e, 0x810, 0x5, 
    0x1e, 0x10, 0x2, 0x80f, 0x811, 0x9, 0x8, 0x2, 0x2, 0x810, 0x80f, 0x3, 
    0x2, 0x2, 0x2, 0x810, 0x811, 0x3, 0x2, 0x2, 0x2, 0x811, 0x812, 0x3, 
    0x2, 0x2, 0x2, 0x812, 0x813, 0x7, 0xb9, 0x2, 0x2, 0x813, 0x814, 0x7, 
    0x14, 0x2, 0x2, 0x814, 0x815, 0x7, 0x4b, 0x2, 0x2, 0x815, 0x816, 0x7, 
    0x2e, 0x2, 0x2, 0x816, 0x817, 0x7, 0x76, 0x2, 0x2, 0x817, 0x818, 0x7, 
    0x56, 0x2, 0x2, 0x818, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x819, 0x81a, 0x7, 
    0x4d, 0x2, 0x2, 0x81a, 0x81b, 0x5, 0x40, 0x21, 0x2, 0x81b, 0x81c, 0x7, 
    0x1f, 0x2, 0x2, 0x81c, 0x81d, 0x7, 0x6e, 0x2, 0x2, 0x81d, 0x81e, 0x7, 
    0x7, 0x2, 0x2, 0x81e, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x81f, 0x820, 0x7, 0x4d, 
    0x2, 0x2, 0x820, 0x821, 0x5, 0x1c, 0xf, 0x2, 0x821, 0x822, 0x9, 0x8, 
    0x2, 0x2, 0x822, 0x823, 0x7, 0x92, 0x2, 0x2, 0x823, 0x824, 0x7, 0x93, 
    0x2, 0x2, 0x824, 0x825, 0x5, 0x120, 0x91, 0x2, 0x825, 0x826, 0x7, 0x35, 
    0x2, 0x2, 0x826, 0x827, 0x7, 0x2e, 0x2, 0x2, 0x827, 0x828, 0x7, 0x6, 
    0x2, 0x2, 0x828, 0x829, 0x7, 0x17, 0x2, 0x2, 0x829, 0x82a, 0x7, 0x37, 
    0x2, 0x2, 0x82a, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x82b, 0x82c, 0x7, 0x4d, 
    0x2, 0x2, 0x82c, 0x82d, 0x5, 0x1c, 0xf, 0x2, 0x82d, 0x82e, 0x9, 0x8, 
    0x2, 0x2, 0x82e, 0x82f, 0x7, 0x39, 0x2, 0x2, 0x82f, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0x830, 0x831, 0x7, 0x4d, 0x2, 0x2, 0x831, 0x832, 0x5, 0x1c, 
    0xf, 0x2, 0x832, 0x833, 0x7, 0xbc, 0x2, 0x2, 0x833, 0x834, 0x7, 0xbb, 
    0x2, 0x2, 0x834, 0x835, 0x7, 0x14, 0x2, 0x2, 0x835, 0x836, 0x7, 0xb, 
    0x2, 0x2, 0x836, 0x837, 0x7, 0x76, 0x2, 0x2, 0x837, 0x838, 0x7, 0x56, 
    0x2, 0x2, 0x838, 0xef, 0x3, 0x2, 0x2, 0x2, 0x839, 0x83a, 0x7, 0x4d, 
    0x2, 0x2, 0x83a, 0x83b, 0x7, 0x3d, 0x2, 0x2, 0x83b, 0x83c, 0x7, 0x45, 
    0x2, 0x2, 0x83c, 0x83d, 0x7, 0x4e, 0x2, 0x2, 0x83d, 0x83e, 0x7, 0xbe, 
    0x2, 0x2, 0x83e, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x83f, 0x840, 0x7, 0x4d, 
    0x2, 0x2, 0x840, 0x841, 0x5, 0x1e, 0x10, 0x2, 0x841, 0x842, 0x9, 0x8, 
    0x2, 0x2, 0x842, 0x843, 0x7, 0x11, 0x2, 0x2, 0x843, 0x844, 0x7, 0x82, 
    0x2, 0x2, 0x844, 0x845, 0x7, 0x57, 0x2, 0x2, 0x845, 0x846, 0x5, 0x1e, 
    0x10, 0x2, 0x846, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x847, 0x848, 0x7, 0x4d, 
    0x2, 0x2, 0x848, 0x849, 0x5, 0x1e, 0x10, 0x2, 0x849, 0x84a, 0x9, 0x8, 
    0x2, 0x2, 0x84a, 0x84b, 0x7, 0xa0, 0x2, 0x2, 0x84b, 0x84c, 0x7, 0x3f, 
    0x2, 0x2, 0x84c, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x84d, 0x84e, 0x7, 0x4d, 
    0x2, 0x2, 0x84e, 0x84f, 0x5, 0x1e, 0x10, 0x2, 0x84f, 0x850, 0x7, 0x94, 
    0x2, 0x2, 0x850, 0x851, 0x7, 0x6, 0x2, 0x2, 0x851, 0x852, 0x7, 0x7, 
    0x2, 0x2, 0x852, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x853, 0x854, 0x7, 0x4d, 
    0x2, 0x2, 0x854, 0x855, 0x5, 0x36, 0x1c, 0x2, 0x855, 0x856, 0x7, 0x4e, 
    0x2, 0x2, 0x856, 0x857, 0x7, 0x50, 0x2, 0x2, 0x857, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0x858, 0x859, 0x7, 0x4d, 0x2, 0x2, 0x859, 0x85a, 0x7, 0x14, 
    0x2, 0x2, 0x85a, 0x85b, 0x7, 0x3f, 0x2, 0x2, 0x85b, 0x85c, 0x7, 0x4e, 
    0x2, 0x2, 0x85c, 0x85d, 0x7, 0x84, 0x2, 0x2, 0x85d, 0x85e, 0x7, 0x76, 
    0x2, 0x2, 0x85e, 0x85f, 0x7, 0x85, 0x2, 0x2, 0x85f, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0x860, 0x861, 0x7, 0x4d, 0x2, 0x2, 0x861, 0x862, 0x5, 0x36, 
    0x1c, 0x2, 0x862, 0x863, 0x7, 0x4e, 0x2, 0x2, 0x863, 0x864, 0x7, 0x35, 
    0x2, 0x2, 0x864, 0x865, 0x7, 0x76, 0x2, 0x2, 0x865, 0x866, 0x7, 0x85, 
    0x2, 0x2, 0x866, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x867, 0x87a, 0x5, 0xda, 
    0x6e, 0x2, 0x868, 0x87a, 0x5, 0xdc, 0x6f, 0x2, 0x869, 0x87a, 0x5, 0xde, 
    0x70, 0x2, 0x86a, 0x87a, 0x5, 0xe0, 0x71, 0x2, 0x86b, 0x87a, 0x5, 0xe2, 
    0x72, 0x2, 0x86c, 0x87a, 0x5, 0xe4, 0x73, 0x2, 0x86d, 0x87a, 0x5, 0xe6, 
    0x74, 0x2, 0x86e, 0x87a, 0x5, 0xe8, 0x75, 0x2, 0x86f, 0x87a, 0x5, 0xea, 
    0x76, 0x2, 0x870, 0x87a, 0x5, 0xec, 0x77, 0x2, 0x871, 0x87a, 0x5, 0xee, 
    0x78, 0x2, 0x872, 0x87a, 0x5, 0xf0, 0x79, 0x2, 0x873, 0x87a, 0x5, 0xf2, 
    0x7a, 0x2, 0x874, 0x87a, 0x5, 0xf4, 0x7b, 0x2, 0x875, 0x87a, 0x5, 0xf6, 
    0x7c, 0x2, 0x876, 0x87a, 0x5, 0xfc, 0x7f, 0x2, 0x877, 0x87a, 0x5, 0xfa, 
    0x7e, 0x2, 0x878, 0x87a, 0x5, 0xf8, 0x7d, 0x2, 0x879, 0x867, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x868, 0x3, 0x2, 0x2, 0x2, 0x879, 0x869, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x86a, 0x3, 0x2, 0x2, 0x2, 0x879, 0x86b, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x86c, 0x3, 0x2, 0x2, 0x2, 0x879, 0x86d, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x879, 0x86f, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x870, 0x3, 0x2, 0x2, 0x2, 0x879, 0x871, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x872, 0x3, 0x2, 0x2, 0x2, 0x879, 0x873, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x874, 0x3, 0x2, 0x2, 0x2, 0x879, 0x875, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x876, 0x3, 0x2, 0x2, 0x2, 0x879, 0x877, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x878, 0x3, 0x2, 0x2, 0x2, 0x87a, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0x87b, 0x87c, 0x7, 0xc7, 0x2, 0x2, 0x87c, 0x87d, 0x7, 0xa7, 0x2, 
    0x2, 0x87d, 0x87e, 0x7, 0xa8, 0x2, 0x2, 0x87e, 0x87f, 0x7, 0xa9, 0x2, 
    0x2, 0x87f, 0x880, 0x7, 0x21, 0x2, 0x2, 0x880, 0x881, 0x7, 0x2e, 0x2, 
    0x2, 0x881, 0x101, 0x3, 0x2, 0x2, 0x2, 0x882, 0x883, 0x7, 0xba, 0x2, 
    0x2, 0x883, 0x884, 0x7, 0xc7, 0x2, 0x2, 0x884, 0x885, 0x7, 0x4e, 0x2, 
    0x2, 0x885, 0x886, 0x7, 0x35, 0x2, 0x2, 0x886, 0x887, 0x7, 0x6, 0x2, 
    0x2, 0x887, 0x888, 0x7, 0x17, 0x2, 0x2, 0x888, 0x889, 0x7, 0x37, 0x2, 
    0x2, 0x889, 0x88a, 0x7, 0xcc, 0x2, 0x2, 0x88a, 0x88b, 0x5, 0xbc, 0x5f, 
    0x2, 0x88b, 0x103, 0x3, 0x2, 0x2, 0x2, 0x88c, 0x88d, 0x7, 0xc7, 0x2, 
    0x2, 0x88d, 0x88e, 0x7, 0x45, 0x2, 0x2, 0x88e, 0x88f, 0x5, 0x120, 0x91, 
    0x2, 0x88f, 0x890, 0x7, 0x47, 0x2, 0x2, 0x890, 0x891, 0x7, 0xd0, 0x2, 
    0x2, 0x891, 0x892, 0x7, 0x3a, 0x2, 0x2, 0x892, 0x893, 0x7, 0x1b, 0x2, 
    0x2, 0x893, 0x894, 0x7, 0xc3, 0x2, 0x2, 0x894, 0x895, 0x7, 0x35, 0x2, 
    0x2, 0x895, 0x896, 0x7, 0x2e, 0x2, 0x2, 0x896, 0x897, 0x7, 0x6, 0x2, 
    0x2, 0x897, 0x898, 0x7, 0x17, 0x2, 0x2, 0x898, 0x899, 0x7, 0x37, 0x2, 
    0x2, 0x899, 0x105, 0x3, 0x2, 0x2, 0x2, 0x89a, 0x89b, 0x7, 0xa3, 0x2, 
    0x2, 0x89b, 0x89c, 0x7, 0x71, 0x2, 0x2, 0x89c, 0x89d, 0x7, 0xc7, 0x2, 
    0x2, 0x89d, 0x89e, 0x5, 0xfe, 0x80, 0x2, 0x89e, 0x107, 0x3, 0x2, 0x2, 
    0x2, 0x89f, 0x8a0, 0x7, 0xc7, 0x2, 0x2, 0x8a0, 0x8a1, 0x7, 0x64, 0x2, 
    0x2, 0x8a1, 0x8a2, 0x7, 0xa8, 0x2, 0x2, 0x8a2, 0x8a3, 0x7, 0xb9, 0x2, 
    0x2, 0x8a3, 0x8a4, 0x7, 0xc4, 0x2, 0x2, 0x8a4, 0x8a5, 0x7, 0x7b, 0x2, 
    0x2, 0x8a5, 0x8a6, 0x7, 0xc6, 0x2, 0x2, 0x8a6, 0x109, 0x3, 0x2, 0x2, 
    0x2, 0x8a7, 0x8a8, 0x7, 0xc7, 0x2, 0x2, 0x8a8, 0x8a9, 0x7, 0x64, 0x2, 
    0x2, 0x8a9, 0x8aa, 0x7, 0xa3, 0x2, 0x2, 0x8aa, 0x8ab, 0x7, 0x69, 0x2, 
    0x2, 0x8ab, 0x8ac, 0x5, 0xfe, 0x80, 0x2, 0x8ac, 0x10b, 0x3, 0x2, 0x2, 
    0x2, 0x8ad, 0x8ae, 0x7, 0xc7, 0x2, 0x2, 0x8ae, 0x8af, 0x7, 0x64, 0x2, 
    0x2, 0x8af, 0x8b0, 0x7, 0x69, 0x2, 0x2, 0x8b0, 0x8b1, 0x5, 0x120, 0x91, 
    0x2, 0x8b1, 0x8b2, 0x7, 0x7b, 0x2, 0x2, 0x8b2, 0x8b3, 0x7, 0x56, 0x2, 
    0x2, 0x8b3, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x8b4, 0x8bc, 0x5, 0x100, 0x81, 
    0x2, 0x8b5, 0x8bc, 0x5, 0x102, 0x82, 0x2, 0x8b6, 0x8bc, 0x5, 0x104, 
    0x83, 0x2, 0x8b7, 0x8bc, 0x5, 0x106, 0x84, 0x2, 0x8b8, 0x8bc, 0x5, 0x108, 
    0x85, 0x2, 0x8b9, 0x8bc, 0x5, 0x10a, 0x86, 0x2, 0x8ba, 0x8bc, 0x5, 0x10c, 
    0x87, 0x2, 0x8bb, 0x8b4, 0x3, 0x2, 0x2, 0x2, 0x8bb, 0x8b5, 0x3, 0x2, 
    0x2, 0x2, 0x8bb, 0x8b6, 0x3, 0x2, 0x2, 0x2, 0x8bb, 0x8b7, 0x3, 0x2, 
    0x2, 0x2, 0x8bb, 0x8b8, 0x3, 0x2, 0x2, 0x2, 0x8bb, 0x8b9, 0x3, 0x2, 
    0x2, 0x2, 0x8bb, 0x8ba, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x8bd, 0x8be, 0x9, 0x9, 0x2, 0x2, 0x8be, 0x111, 0x3, 0x2, 
    0x2, 0x2, 0x8bf, 0x8c0, 0x9, 0xa, 0x2, 0x2, 0x8c0, 0x113, 0x3, 0x2, 
    0x2, 0x2, 0x8c1, 0x8c2, 0x7, 0xcb, 0x2, 0x2, 0x8c2, 0x115, 0x3, 0x2, 
    0x2, 0x2, 0x8c3, 0x8c4, 0x7, 0xc8, 0x2, 0x2, 0x8c4, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x8c5, 0x8c6, 0x5, 0x1c, 0xf, 0x2, 0x8c6, 0x8c7, 0x7, 0xd0, 
    0x2, 0x2, 0x8c7, 0x119, 0x3, 0x2, 0x2, 0x2, 0x8c8, 0x8c9, 0x7, 0xe, 
    0x2, 0x2, 0x8c9, 0x8ca, 0x7, 0x3b, 0x2, 0x2, 0x8ca, 0x8cb, 0x7, 0x1e, 
    0x2, 0x2, 0x8cb, 0x8cc, 0x7, 0x13, 0x2, 0x2, 0x8cc, 0x8cd, 0x7, 0x15, 
    0x2, 0x2, 0x8cd, 0x8ce, 0x7, 0x20, 0x2, 0x2, 0x8ce, 0x8cf, 0x5, 0x1c, 
    0xf, 0x2, 0x8cf, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x8d0, 0x8d1, 0x7, 0xe, 
    0x2, 0x2, 0x8d1, 0x8d2, 0x7, 0x34, 0x2, 0x2, 0x8d2, 0x8d3, 0x7, 0x13, 
    0x2, 0x2, 0x8d3, 0x8d4, 0x5, 0x36, 0x1c, 0x2, 0x8d4, 0x8d5, 0x7, 0x6, 
    0x2, 0x2, 0x8d5, 0x8d6, 0x7, 0x36, 0x2, 0x2, 0x8d6, 0x8d7, 0x7, 0x37, 
    0x2, 0x2, 0x8d7, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x8d8, 0x8d9, 0x5, 0x1c, 
    0xf, 0x2, 0x8d9, 0x8da, 0x7, 0x39, 0x2, 0x2, 0x8da, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x8db, 0x8e0, 0x5, 0x110, 0x89, 0x2, 0x8dc, 0x8e0, 0x5, 0x112, 
    0x8a, 0x2, 0x8dd, 0x8e0, 0x5, 0x114, 0x8b, 0x2, 0x8de, 0x8e0, 0x5, 0x116, 
    0x8c, 0x2, 0x8df, 0x8db, 0x3, 0x2, 0x2, 0x2, 0x8df, 0x8dc, 0x3, 0x2, 
    0x2, 0x2, 0x8df, 0x8dd, 0x3, 0x2, 0x2, 0x2, 0x8df, 0x8de, 0x3, 0x2, 
    0x2, 0x2, 0x8e0, 0x121, 0x3, 0x2, 0x2, 0x2, 0x8e1, 0x8e6, 0x5, 0x118, 
    0x8d, 0x2, 0x8e2, 0x8e6, 0x5, 0x11a, 0x8e, 0x2, 0x8e3, 0x8e6, 0x5, 0x11c, 
    0x8f, 0x2, 0x8e4, 0x8e6, 0x5, 0x11e, 0x90, 0x2, 0x8e5, 0x8e1, 0x3, 0x2, 
    0x2, 0x2, 0x8e5, 0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8e5, 0x8e3, 0x3, 0x2, 
    0x2, 0x2, 0x8e5, 0x8e4, 0x3, 0x2, 0x2, 0x2, 0x8e6, 0x123, 0x3, 0x2, 
    0x2, 0x2, 0x8e7, 0x8e8, 0x7, 0x27, 0x2, 0x2, 0x8e8, 0x8e9, 0x7, 0x64, 
    0x2, 0x2, 0x8e9, 0x8ea, 0x7, 0xd3, 0x2, 0x2, 0x8ea, 0x8eb, 0x7, 0xe, 
    0x2, 0x2, 0x8eb, 0x8ec, 0x7, 0xd4, 0x2, 0x2, 0x8ec, 0x8ed, 0x7, 0xd5, 
    0x2, 0x2, 0x8ed, 0x8ee, 0x5, 0x120, 0x91, 0x2, 0x8ee, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x8ef, 0x8f0, 0x8, 0x94, 0x1, 0x2, 0x8f0, 0x8f1, 0x7, 0xce, 
    0x2, 0x2, 0x8f1, 0x8f2, 0x5, 0x132, 0x9a, 0x2, 0x8f2, 0x8f9, 0x3, 0x2, 
    0x2, 0x2, 0x8f3, 0x8f4, 0xc, 0x3, 0x2, 0x2, 0x8f4, 0x8f5, 0x7, 0xcd, 
    0x2, 0x2, 0x8f5, 0x8f6, 0x7, 0xce, 0x2, 0x2, 0x8f6, 0x8f8, 0x5, 0x132, 
    0x9a, 0x2, 0x8f7, 0x8f3, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8fb, 0x3, 0x2, 
    0x2, 0x2, 0x8f9, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fa, 0x3, 0x2, 
    0x2, 0x2, 0x8fa, 0x127, 0x3, 0x2, 0x2, 0x2, 0x8fb, 0x8f9, 0x3, 0x2, 
    0x2, 0x2, 0x8fc, 0x8fd, 0x7, 0xd3, 0x2, 0x2, 0x8fd, 0x8fe, 0x5, 0x120, 
    0x91, 0x2, 0x8fe, 0x8ff, 0x7, 0x3a, 0x2, 0x2, 0x8ff, 0x900, 0x7, 0x1b, 
    0x2, 0x2, 0x900, 0x901, 0x5, 0x8, 0x5, 0x2, 0x901, 0x902, 0x7, 0x6, 
    0x2, 0x2, 0x902, 0x903, 0x7, 0xd6, 0x2, 0x2, 0x903, 0x904, 0x7, 0xcf, 
    0x2, 0x2, 0x904, 0x905, 0x5, 0x126, 0x94, 0x2, 0x905, 0x906, 0x7, 0xcd, 
    0x2, 0x2, 0x906, 0x907, 0x5, 0x124, 0x93, 0x2, 0x907, 0x91f, 0x3, 0x2, 
    0x2, 0x2, 0x908, 0x909, 0x7, 0xd3, 0x2, 0x2, 0x909, 0x90a, 0x5, 0x120, 
    0x91, 0x2, 0x90a, 0x90b, 0x7, 0xcf, 0x2, 0x2, 0x90b, 0x90c, 0x5, 0x126, 
    0x94, 0x2, 0x90c, 0x90d, 0x7, 0xcd, 0x2, 0x2, 0x90d, 0x90e, 0x5, 0x124, 
    0x93, 0x2, 0x90e, 0x91f, 0x3, 0x2, 0x2, 0x2, 0x90f, 0x910, 0x7, 0xd3, 
    0x2, 0x2, 0x910, 0x911, 0x5, 0x120, 0x91, 0x2, 0x911, 0x912, 0x7, 0xcf, 
    0x2, 0x2, 0x912, 0x913, 0x5, 0x126, 0x94, 0x2, 0x913, 0x91f, 0x3, 0x2, 
    0x2, 0x2, 0x914, 0x915, 0x7, 0xd3, 0x2, 0x2, 0x915, 0x916, 0x5, 0x120, 
    0x91, 0x2, 0x916, 0x917, 0x7, 0x3a, 0x2, 0x2, 0x917, 0x918, 0x7, 0x1b, 
    0x2, 0x2, 0x918, 0x919, 0x5, 0x8, 0x5, 0x2, 0x919, 0x91a, 0x7, 0x6, 
    0x2, 0x2, 0x91a, 0x91b, 0x7, 0xd6, 0x2, 0x2, 0x91b, 0x91c, 0x7, 0xcf, 
    0x2, 0x2, 0x91c, 0x91d, 0x5, 0x126, 0x94, 0x2, 0x91d, 0x91f, 0x3, 0x2, 
    0x2, 0x2, 0x91e, 0x8fc, 0x3, 0x2, 0x2, 0x2, 0x91e, 0x908, 0x3, 0x2, 
    0x2, 0x2, 0x91e, 0x90f, 0x3, 0x2, 0x2, 0x2, 0x91e, 0x914, 0x3, 0x2, 
    0x2, 0x2, 0x91f, 0x129, 0x3, 0x2, 0x2, 0x2, 0x920, 0x948, 0x5, 0x128, 
    0x95, 0x2, 0x921, 0x948, 0x5, 0x56, 0x2c, 0x2, 0x922, 0x948, 0x5, 0x58, 
    0x2d, 0x2, 0x923, 0x948, 0x5, 0x5a, 0x2e, 0x2, 0x924, 0x948, 0x5, 0x5c, 
    0x2f, 0x2, 0x925, 0x948, 0x5, 0x64, 0x33, 0x2, 0x926, 0x948, 0x5, 0x62, 
    0x32, 0x2, 0x927, 0x948, 0x5, 0x66, 0x34, 0x2, 0x928, 0x948, 0x5, 0x68, 
    0x35, 0x2, 0x929, 0x948, 0x5, 0x6a, 0x36, 0x2, 0x92a, 0x948, 0x5, 0x6c, 
    0x37, 0x2, 0x92b, 0x948, 0x5, 0x6e, 0x38, 0x2, 0x92c, 0x948, 0x5, 0x70, 
    0x39, 0x2, 0x92d, 0x948, 0x5, 0x72, 0x3a, 0x2, 0x92e, 0x948, 0x5, 0x74, 
    0x3b, 0x2, 0x92f, 0x948, 0x5, 0x76, 0x3c, 0x2, 0x930, 0x948, 0x5, 0x78, 
    0x3d, 0x2, 0x931, 0x948, 0x5, 0x7a, 0x3e, 0x2, 0x932, 0x948, 0x5, 0x7c, 
    0x3f, 0x2, 0x933, 0x948, 0x5, 0x7e, 0x40, 0x2, 0x934, 0x948, 0x5, 0x80, 
    0x41, 0x2, 0x935, 0x948, 0x5, 0x82, 0x42, 0x2, 0x936, 0x948, 0x5, 0x84, 
    0x43, 0x2, 0x937, 0x948, 0x5, 0x86, 0x44, 0x2, 0x938, 0x948, 0x5, 0x88, 
    0x45, 0x2, 0x939, 0x948, 0x5, 0x8a, 0x46, 0x2, 0x93a, 0x948, 0x5, 0x8c, 
    0x47, 0x2, 0x93b, 0x948, 0x5, 0x8e, 0x48, 0x2, 0x93c, 0x948, 0x5, 0x90, 
    0x49, 0x2, 0x93d, 0x948, 0x5, 0x92, 0x4a, 0x2, 0x93e, 0x948, 0x5, 0x94, 
    0x4b, 0x2, 0x93f, 0x948, 0x5, 0x96, 0x4c, 0x2, 0x940, 0x948, 0x5, 0x98, 
    0x4d, 0x2, 0x941, 0x948, 0x5, 0x9a, 0x4e, 0x2, 0x942, 0x948, 0x5, 0x9c, 
    0x4f, 0x2, 0x943, 0x948, 0x5, 0x9e, 0x50, 0x2, 0x944, 0x948, 0x5, 0xa0, 
    0x51, 0x2, 0x945, 0x948, 0x5, 0xa2, 0x52, 0x2, 0x946, 0x948, 0x5, 0x98, 
    0x4d, 0x2, 0x947, 0x920, 0x3, 0x2, 0x2, 0x2, 0x947, 0x921, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x922, 0x3, 0x2, 0x2, 0x2, 0x947, 0x923, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x924, 0x3, 0x2, 0x2, 0x2, 0x947, 0x925, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x926, 0x3, 0x2, 0x2, 0x2, 0x947, 0x927, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x928, 0x3, 0x2, 0x2, 0x2, 0x947, 0x929, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x947, 0x92b, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x92c, 0x3, 0x2, 0x2, 0x2, 0x947, 0x92d, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x92e, 0x3, 0x2, 0x2, 0x2, 0x947, 0x92f, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x930, 0x3, 0x2, 0x2, 0x2, 0x947, 0x931, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x932, 0x3, 0x2, 0x2, 0x2, 0x947, 0x933, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x934, 0x3, 0x2, 0x2, 0x2, 0x947, 0x935, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x936, 0x3, 0x2, 0x2, 0x2, 0x947, 0x937, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x938, 0x3, 0x2, 0x2, 0x2, 0x947, 0x939, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x947, 0x93b, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x93c, 0x3, 0x2, 0x2, 0x2, 0x947, 0x93d, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x947, 0x93f, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x940, 0x3, 0x2, 0x2, 0x2, 0x947, 0x941, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x942, 0x3, 0x2, 0x2, 0x2, 0x947, 0x943, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x944, 0x3, 0x2, 0x2, 0x2, 0x947, 0x945, 0x3, 0x2, 
    0x2, 0x2, 0x947, 0x946, 0x3, 0x2, 0x2, 0x2, 0x948, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x949, 0x94a, 0x5, 0x12a, 0x96, 0x2, 0x94a, 0x94b, 0x7, 0x3a, 
    0x2, 0x2, 0x94b, 0x94c, 0x7, 0x1b, 0x2, 0x2, 0x94c, 0x94d, 0x7, 0x1a, 
    0x2, 0x2, 0x94d, 0x94e, 0x7, 0x13, 0x2, 0x2, 0x94e, 0x94f, 0x7, 0x15, 
    0x2, 0x2, 0x94f, 0x950, 0x5, 0xe, 0x8, 0x2, 0x950, 0x951, 0x7, 0xb2, 
    0x2, 0x2, 0x951, 0x954, 0x3, 0x2, 0x2, 0x2, 0x952, 0x954, 0x5, 0x12a, 
    0x96, 0x2, 0x953, 0x949, 0x3, 0x2, 0x2, 0x2, 0x953, 0x952, 0x3, 0x2, 
    0x2, 0x2, 0x954, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x955, 0x956, 0x5, 0xfe, 
    0x80, 0x2, 0x956, 0x957, 0x7, 0xcc, 0x2, 0x2, 0x957, 0x958, 0x5, 0x132, 
    0x9a, 0x2, 0x958, 0x95b, 0x3, 0x2, 0x2, 0x2, 0x959, 0x95b, 0x5, 0x12c, 
    0x97, 0x2, 0x95a, 0x955, 0x3, 0x2, 0x2, 0x2, 0x95a, 0x959, 0x3, 0x2, 
    0x2, 0x2, 0x95b, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x95c, 0x95d, 0x5, 0xfe, 
    0x80, 0x2, 0x95d, 0x95e, 0x7, 0xcc, 0x2, 0x2, 0x95e, 0x95f, 0x7, 0xb5, 
    0x2, 0x2, 0x95f, 0x960, 0x5, 0x132, 0x9a, 0x2, 0x960, 0x963, 0x3, 0x2, 
    0x2, 0x2, 0x961, 0x963, 0x5, 0x12e, 0x98, 0x2, 0x962, 0x95c, 0x3, 0x2, 
    0x2, 0x2, 0x962, 0x961, 0x3, 0x2, 0x2, 0x2, 0x963, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x964, 0x965, 0x5, 0x1e, 0x10, 0x2, 0x965, 0x966, 0x7, 0x64, 
    0x2, 0x2, 0x966, 0x967, 0x7, 0x7e, 0x2, 0x2, 0x967, 0x968, 0x5, 0x1e, 
    0x10, 0x2, 0x968, 0x969, 0x5, 0x130, 0x99, 0x2, 0x969, 0x97b, 0x3, 0x2, 
    0x2, 0x2, 0x96a, 0x96b, 0x5, 0x1e, 0x10, 0x2, 0x96b, 0x96c, 0x7, 0x64, 
    0x2, 0x2, 0x96c, 0x96d, 0x5, 0x130, 0x99, 0x2, 0x96d, 0x96e, 0x7, 0x19, 
    0x2, 0x2, 0x96e, 0x96f, 0x5, 0x130, 0x99, 0x2, 0x96f, 0x97b, 0x3, 0x2, 
    0x2, 0x2, 0x970, 0x971, 0x5, 0x1e, 0x10, 0x2, 0x971, 0x972, 0x7, 0x64, 
    0x2, 0x2, 0x972, 0x973, 0x5, 0x130, 0x99, 0x2, 0x973, 0x97b, 0x3, 0x2, 
    0x2, 0x2, 0x974, 0x975, 0x5, 0x130, 0x99, 0x2, 0x975, 0x976, 0x7, 0x2b, 
    0x2, 0x2, 0x976, 0x977, 0x5, 0x1e, 0x10, 0x2, 0x977, 0x978, 0x5, 0x130, 
    0x99, 0x2, 0x978, 0x97b, 0x3, 0x2, 0x2, 0x2, 0x979, 0x97b, 0x5, 0x130, 
    0x99, 0x2, 0x97a, 0x964, 0x3, 0x2, 0x2, 0x2, 0x97a, 0x96a, 0x3, 0x2, 
    0x2, 0x2, 0x97a, 0x970, 0x3, 0x2, 0x2, 0x2, 0x97a, 0x974, 0x3, 0x2, 
    0x2, 0x2, 0x97a, 0x979, 0x3, 0x2, 0x2, 0x2, 0x97b, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x97c, 0x97d, 0x7, 0xcd, 0x2, 0x2, 0x97d, 0x97e, 0x7, 0x89, 
    0x2, 0x2, 0x97e, 0x988, 0x7, 0xcc, 0x2, 0x2, 0x97f, 0x988, 0x7, 0xcd, 
    0x2, 0x2, 0x980, 0x988, 0x7, 0x9a, 0x2, 0x2, 0x981, 0x982, 0x7, 0xcc, 
    0x2, 0x2, 0x982, 0x988, 0x7, 0x9a, 0x2, 0x2, 0x983, 0x984, 0x7, 0xcc, 
    0x2, 0x2, 0x984, 0x988, 0x7, 0x89, 0x2, 0x2, 0x985, 0x988, 0x7, 0xcc, 
    0x2, 0x2, 0x986, 0x988, 0x7, 0x89, 0x2, 0x2, 0x987, 0x97c, 0x3, 0x2, 
    0x2, 0x2, 0x987, 0x97f, 0x3, 0x2, 0x2, 0x2, 0x987, 0x980, 0x3, 0x2, 
    0x2, 0x2, 0x987, 0x981, 0x3, 0x2, 0x2, 0x2, 0x987, 0x983, 0x3, 0x2, 
    0x2, 0x2, 0x987, 0x985, 0x3, 0x2, 0x2, 0x2, 0x987, 0x986, 0x3, 0x2, 
    0x2, 0x2, 0x988, 0x135, 0x3, 0x2, 0x2, 0x2, 0x989, 0x98e, 0x5, 0x132, 
    0x9a, 0x2, 0x98a, 0x98e, 0x5, 0xbc, 0x5f, 0x2, 0x98b, 0x98e, 0x5, 0xd8, 
    0x6d, 0x2, 0x98c, 0x98e, 0x5, 0xd0, 0x69, 0x2, 0x98d, 0x989, 0x3, 0x2, 
    0x2, 0x2, 0x98d, 0x98a, 0x3, 0x2, 0x2, 0x2, 0x98d, 0x98b, 0x3, 0x2, 
    0x2, 0x2, 0x98d, 0x98c, 0x3, 0x2, 0x2, 0x2, 0x98e, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x98f, 0x990, 0x7, 0xd7, 0x2, 0x2, 0x990, 0x994, 0x7, 0xce, 
    0x2, 0x2, 0x991, 0x992, 0x5, 0x136, 0x9c, 0x2, 0x992, 0x993, 0x5, 0x134, 
    0x9b, 0x2, 0x993, 0x995, 0x3, 0x2, 0x2, 0x2, 0x994, 0x991, 0x3, 0x2, 
    0x2, 0x2, 0x995, 0x996, 0x3, 0x2, 0x2, 0x2, 0x996, 0x994, 0x3, 0x2, 
    0x2, 0x2, 0x996, 0x997, 0x3, 0x2, 0x2, 0x2, 0x997, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x998, 0x999, 0x7, 0xd8, 0x2, 0x2, 0x999, 0x99d, 0x7, 0xce, 
    0x2, 0x2, 0x99a, 0x99b, 0x5, 0x136, 0x9c, 0x2, 0x99b, 0x99c, 0x5, 0x134, 
    0x9b, 0x2, 0x99c, 0x99e, 0x3, 0x2, 0x2, 0x2, 0x99d, 0x99a, 0x3, 0x2, 
    0x2, 0x2, 0x99e, 0x99f, 0x3, 0x2, 0x2, 0x2, 0x99f, 0x99d, 0x3, 0x2, 
    0x2, 0x2, 0x99f, 0x9a0, 0x3, 0x2, 0x2, 0x2, 0x9a0, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x9a1, 0x9a2, 0x7, 0x73, 0x2, 0x2, 0x9a2, 0x9a6, 0x7, 0xce, 
    0x2, 0x2, 0x9a3, 0x9a4, 0x5, 0x136, 0x9c, 0x2, 0x9a4, 0x9a5, 0x5, 0x134, 
    0x9b, 0x2, 0x9a5, 0x9a7, 0x3, 0x2, 0x2, 0x2, 0x9a6, 0x9a3, 0x3, 0x2, 
    0x2, 0x2, 0x9a7, 0x9a8, 0x3, 0x2, 0x2, 0x2, 0x9a8, 0x9a6, 0x3, 0x2, 
    0x2, 0x2, 0x9a8, 0x9a9, 0x3, 0x2, 0x2, 0x2, 0x9a9, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x9aa, 0x9ab, 0x5, 0x10e, 0x88, 0x2, 0x9ab, 0x9ac, 0x7, 0xcd, 
    0x2, 0x2, 0x9ac, 0x9b4, 0x3, 0x2, 0x2, 0x2, 0x9ad, 0x9b4, 0x5, 0x138, 
    0x9d, 0x2, 0x9ae, 0x9b4, 0x5, 0x13a, 0x9e, 0x2, 0x9af, 0x9b4, 0x5, 0x13c, 
    0x9f, 0x2, 0x9b0, 0x9b1, 0x5, 0x136, 0x9c, 0x2, 0x9b1, 0x9b2, 0x5, 0x134, 
    0x9b, 0x2, 0x9b2, 0x9b4, 0x3, 0x2, 0x2, 0x2, 0x9b3, 0x9aa, 0x3, 0x2, 
    0x2, 0x2, 0x9b3, 0x9ad, 0x3, 0x2, 0x2, 0x2, 0x9b3, 0x9ae, 0x3, 0x2, 
    0x2, 0x2, 0x9b3, 0x9af, 0x3, 0x2, 0x2, 0x2, 0x9b3, 0x9b0, 0x3, 0x2, 
    0x2, 0x2, 0x9b4, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x9b5, 0x9b7, 0x5, 0x13e, 
    0xa0, 0x2, 0x9b6, 0x9b5, 0x3, 0x2, 0x2, 0x2, 0x9b7, 0x9b8, 0x3, 0x2, 
    0x2, 0x2, 0x9b8, 0x9b6, 0x3, 0x2, 0x2, 0x2, 0x9b8, 0x9b9, 0x3, 0x2, 
    0x2, 0x2, 0x9b9, 0x9ba, 0x3, 0x2, 0x2, 0x2, 0x9ba, 0x9bb, 0x7, 0x2, 
    0x2, 0x3, 0x9bb, 0x141, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x156, 0x15b, 0x162, 
    0x16c, 0x170, 0x173, 0x17d, 0x182, 0x185, 0x194, 0x19a, 0x19d, 0x1a1, 
    0x1a6, 0x1aa, 0x1b2, 0x1d6, 0x1db, 0x1e2, 0x1f2, 0x1fb, 0x201, 0x209, 
    0x20c, 0x210, 0x213, 0x231, 0x236, 0x23d, 0x241, 0x244, 0x24d, 0x256, 
    0x266, 0x269, 0x274, 0x277, 0x27b, 0x280, 0x285, 0x28d, 0x295, 0x29d, 
    0x2c6, 0x2d1, 0x2d4, 0x2d7, 0x2dc, 0x2e0, 0x2e5, 0x32c, 0x33e, 0x358, 
    0x372, 0x378, 0x37f, 0x386, 0x388, 0x392, 0x405, 0x4a1, 0x4d4, 0x4f7, 
    0x53a, 0x556, 0x56e, 0x606, 0x61e, 0x63c, 0x686, 0x6ab, 0x6bb, 0x6d6, 
    0x6dc, 0x6fb, 0x71a, 0x720, 0x765, 0x76f, 0x77c, 0x798, 0x7bb, 0x7c9, 
    0x7d1, 0x7d6, 0x7e2, 0x7eb, 0x7f0, 0x7f3, 0x806, 0x810, 0x879, 0x8bb, 
    0x8df, 0x8e5, 0x8f9, 0x91e, 0x947, 0x953, 0x95a, 0x962, 0x97a, 0x987, 
    0x98d, 0x996, 0x99f, 0x9a8, 0x9b3, 0x9b8, 
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
