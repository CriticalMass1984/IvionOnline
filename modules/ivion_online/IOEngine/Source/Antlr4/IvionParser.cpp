
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


//----------------- GeneralPostInTerrainFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostInTerrainFilterContext::GeneralPostInTerrainFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostInTerrainFilterContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::GeneralPostInTerrainFilterContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::GeneralPostInTerrainFilterContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::GeneralPostInTerrainFilterContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::GeneralPostInTerrainFilterContext::Already() {
  return getToken(IvionParser::Already, 0);
}

tree::TerminalNode* IvionParser::GeneralPostInTerrainFilterContext::Had() {
  return getToken(IvionParser::Had, 0);
}


size_t IvionParser::GeneralPostInTerrainFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostInTerrainFilter;
}


antlrcpp::Any IvionParser::GeneralPostInTerrainFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostInTerrainFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostInTerrainFilterContext* IvionParser::generalPostInTerrainFilter() {
  GeneralPostInTerrainFilterContext *_localctx = _tracker.createInstance<GeneralPostInTerrainFilterContext>(_ctx, getState());
  enterRule(_localctx, 0, IvionParser::RuleGeneralPostInTerrainFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(421);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::In: {
        setState(416);
        match(IvionParser::In);
        break;
      }

      case IvionParser::With: {
        setState(417);
        match(IvionParser::With);
        break;
      }

      case IvionParser::That: {
        setState(418);
        match(IvionParser::That);
        setState(419);
        match(IvionParser::Already);
        setState(420);
        match(IvionParser::Had);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(423);
    match(IvionParser::Terrain);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostNearTerrainFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostNearTerrainFilterContext::GeneralPostNearTerrainFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostNearTerrainFilterContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::GeneralPostNearTerrainFilterContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}


size_t IvionParser::GeneralPostNearTerrainFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostNearTerrainFilter;
}


antlrcpp::Any IvionParser::GeneralPostNearTerrainFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostNearTerrainFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostNearTerrainFilterContext* IvionParser::generalPostNearTerrainFilter() {
  GeneralPostNearTerrainFilterContext *_localctx = _tracker.createInstance<GeneralPostNearTerrainFilterContext>(_ctx, getState());
  enterRule(_localctx, 2, IvionParser::RuleGeneralPostNearTerrainFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(IvionParser::Near);
    setState(426);
    match(IvionParser::Terrain);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostNearPlayerFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostNearPlayerFilterContext::GeneralPostNearPlayerFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostNearPlayerFilterContext::Near() {
  return getToken(IvionParser::Near, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::GeneralPostNearPlayerFilterContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}


size_t IvionParser::GeneralPostNearPlayerFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostNearPlayerFilter;
}


antlrcpp::Any IvionParser::GeneralPostNearPlayerFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostNearPlayerFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostNearPlayerFilterContext* IvionParser::generalPostNearPlayerFilter() {
  GeneralPostNearPlayerFilterContext *_localctx = _tracker.createInstance<GeneralPostNearPlayerFilterContext>(_ctx, getState());
  enterRule(_localctx, 4, IvionParser::RuleGeneralPostNearPlayerFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(IvionParser::Near);
    setState(429);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostNearTileFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostNearTileFilterContext::GeneralPostNearTileFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostNearTileFilterContext::Near() {
  return getToken(IvionParser::Near, 0);
}

IvionParser::HypotheticalTileContext* IvionParser::GeneralPostNearTileFilterContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}


size_t IvionParser::GeneralPostNearTileFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostNearTileFilter;
}


antlrcpp::Any IvionParser::GeneralPostNearTileFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostNearTileFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostNearTileFilterContext* IvionParser::generalPostNearTileFilter() {
  GeneralPostNearTileFilterContext *_localctx = _tracker.createInstance<GeneralPostNearTileFilterContext>(_ctx, getState());
  enterRule(_localctx, 6, IvionParser::RuleGeneralPostNearTileFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    match(IvionParser::Near);
    setState(432);
    hypotheticalTile();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostInTileFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostInTileFilterContext::GeneralPostInTileFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostInTileFilterContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::HypotheticalTileContext* IvionParser::GeneralPostInTileFilterContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}


size_t IvionParser::GeneralPostInTileFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostInTileFilter;
}


antlrcpp::Any IvionParser::GeneralPostInTileFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostInTileFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostInTileFilterContext* IvionParser::generalPostInTileFilter() {
  GeneralPostInTileFilterContext *_localctx = _tracker.createInstance<GeneralPostInTileFilterContext>(_ctx, getState());
  enterRule(_localctx, 8, IvionParser::RuleGeneralPostInTileFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(IvionParser::In);
    setState(435);
    hypotheticalTile();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostNearCardFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostNearCardFilterContext::GeneralPostNearCardFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostNearCardFilterContext::Near() {
  return getToken(IvionParser::Near, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::GeneralPostNearCardFilterContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}


size_t IvionParser::GeneralPostNearCardFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostNearCardFilter;
}


antlrcpp::Any IvionParser::GeneralPostNearCardFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostNearCardFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostNearCardFilterContext* IvionParser::generalPostNearCardFilter() {
  GeneralPostNearCardFilterContext *_localctx = _tracker.createInstance<GeneralPostNearCardFilterContext>(_ctx, getState());
  enterRule(_localctx, 10, IvionParser::RuleGeneralPostNearCardFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(437);
    match(IvionParser::Near);
    setState(438);
    hypotheticalCard();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostInCardFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostInCardFilterContext::GeneralPostInCardFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostInCardFilterContext::Near() {
  return getToken(IvionParser::Near, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::GeneralPostInCardFilterContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}


size_t IvionParser::GeneralPostInCardFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostInCardFilter;
}


antlrcpp::Any IvionParser::GeneralPostInCardFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostInCardFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostInCardFilterContext* IvionParser::generalPostInCardFilter() {
  GeneralPostInCardFilterContext *_localctx = _tracker.createInstance<GeneralPostInCardFilterContext>(_ctx, getState());
  enterRule(_localctx, 12, IvionParser::RuleGeneralPostInCardFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(IvionParser::Near);
    setState(441);
    hypotheticalCard();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostPlayerChoiceFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostPlayerChoiceFilterContext::GeneralPostPlayerChoiceFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostPlayerChoiceFilterContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::PlayerContext* IvionParser::GeneralPostPlayerChoiceFilterContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::GeneralPostPlayerChoiceFilterContext::Choice() {
  return getToken(IvionParser::Choice, 0);
}


size_t IvionParser::GeneralPostPlayerChoiceFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostPlayerChoiceFilter;
}


antlrcpp::Any IvionParser::GeneralPostPlayerChoiceFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostPlayerChoiceFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostPlayerChoiceFilterContext* IvionParser::generalPostPlayerChoiceFilter() {
  GeneralPostPlayerChoiceFilterContext *_localctx = _tracker.createInstance<GeneralPostPlayerChoiceFilterContext>(_ctx, getState());
  enterRule(_localctx, 14, IvionParser::RuleGeneralPostPlayerChoiceFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(IvionParser::Of);
    setState(444);
    player();
    setState(445);
    match(IvionParser::Choice);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostAtLeastAwayFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostAtLeastAwayFilterContext::GeneralPostAtLeastAwayFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFilterContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFilterContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::LiteralValueContext* IvionParser::GeneralPostAtLeastAwayFilterContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFilterContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFilterContext::Away() {
  return getToken(IvionParser::Away, 0);
}


size_t IvionParser::GeneralPostAtLeastAwayFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostAtLeastAwayFilter;
}


antlrcpp::Any IvionParser::GeneralPostAtLeastAwayFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostAtLeastAwayFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostAtLeastAwayFilterContext* IvionParser::generalPostAtLeastAwayFilter() {
  GeneralPostAtLeastAwayFilterContext *_localctx = _tracker.createInstance<GeneralPostAtLeastAwayFilterContext>(_ctx, getState());
  enterRule(_localctx, 16, IvionParser::RuleGeneralPostAtLeastAwayFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(447);
    match(IvionParser::At);
    setState(448);
    match(IvionParser::Least);
    setState(449);
    literalValue();
    setState(450);
    match(IvionParser::Tile);
    setState(451);
    match(IvionParser::Away);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostAtLeastAwayFromPlayerFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::GeneralPostAtLeastAwayFromPlayerFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::LiteralValueContext* IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::Away() {
  return getToken(IvionParser::Away, 0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::From() {
  return getToken(IvionParser::From, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}


size_t IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostAtLeastAwayFromPlayerFilter;
}


antlrcpp::Any IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostAtLeastAwayFromPlayerFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext* IvionParser::generalPostAtLeastAwayFromPlayerFilter() {
  GeneralPostAtLeastAwayFromPlayerFilterContext *_localctx = _tracker.createInstance<GeneralPostAtLeastAwayFromPlayerFilterContext>(_ctx, getState());
  enterRule(_localctx, 18, IvionParser::RuleGeneralPostAtLeastAwayFromPlayerFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(IvionParser::At);
    setState(454);
    match(IvionParser::Least);
    setState(455);
    literalValue();
    setState(456);
    match(IvionParser::Tile);
    setState(457);
    match(IvionParser::Away);
    setState(458);
    match(IvionParser::From);
    setState(459);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
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
  enterRule(_localctx, 20, IvionParser::RulePlayerType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
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

IvionParser::PlayerTypeContext* IvionParser::PlayerPreFixContext::playerType() {
  return getRuleContext<IvionParser::PlayerTypeContext>(0);
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
  enterRule(_localctx, 22, IvionParser::RulePlayerPreFix);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(464);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(463);
      match(IvionParser::Another);
    }
    setState(467);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Controlled) {
      setState(466);
      match(IvionParser::Controlled);
    }
    setState(470);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Uncontrolled) {
      setState(469);
      match(IvionParser::Uncontrolled);
    }
    setState(472);
    playerType();
   
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

IvionParser::PlayerPreFixContext* IvionParser::PlayerPostFixContext::playerPreFix() {
  return getRuleContext<IvionParser::PlayerPreFixContext>(0);
}

IvionParser::PlayerPostFixContext* IvionParser::PlayerPostFixContext::playerPostFix() {
  return getRuleContext<IvionParser::PlayerPostFixContext>(0);
}

IvionParser::GeneralPostInTerrainFilterContext* IvionParser::PlayerPostFixContext::generalPostInTerrainFilter() {
  return getRuleContext<IvionParser::GeneralPostInTerrainFilterContext>(0);
}

IvionParser::GeneralPostNearTerrainFilterContext* IvionParser::PlayerPostFixContext::generalPostNearTerrainFilter() {
  return getRuleContext<IvionParser::GeneralPostNearTerrainFilterContext>(0);
}

IvionParser::GeneralPostNearPlayerFilterContext* IvionParser::PlayerPostFixContext::generalPostNearPlayerFilter() {
  return getRuleContext<IvionParser::GeneralPostNearPlayerFilterContext>(0);
}

IvionParser::GeneralPostNearTileFilterContext* IvionParser::PlayerPostFixContext::generalPostNearTileFilter() {
  return getRuleContext<IvionParser::GeneralPostNearTileFilterContext>(0);
}

IvionParser::GeneralPostInTileFilterContext* IvionParser::PlayerPostFixContext::generalPostInTileFilter() {
  return getRuleContext<IvionParser::GeneralPostInTileFilterContext>(0);
}

IvionParser::GeneralPostNearCardFilterContext* IvionParser::PlayerPostFixContext::generalPostNearCardFilter() {
  return getRuleContext<IvionParser::GeneralPostNearCardFilterContext>(0);
}

IvionParser::GeneralPostInCardFilterContext* IvionParser::PlayerPostFixContext::generalPostInCardFilter() {
  return getRuleContext<IvionParser::GeneralPostInCardFilterContext>(0);
}

IvionParser::GeneralPostPlayerChoiceFilterContext* IvionParser::PlayerPostFixContext::generalPostPlayerChoiceFilter() {
  return getRuleContext<IvionParser::GeneralPostPlayerChoiceFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFilterContext* IvionParser::PlayerPostFixContext::generalPostAtLeastAwayFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext* IvionParser::PlayerPostFixContext::generalPostAtLeastAwayFromPlayerFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext>(0);
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
   return playerPostFix(0);
}

IvionParser::PlayerPostFixContext* IvionParser::playerPostFix(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  IvionParser::PlayerPostFixContext *_localctx = _tracker.createInstance<PlayerPostFixContext>(_ctx, parentState);
  IvionParser::PlayerPostFixContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, IvionParser::RulePlayerPostFix, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(475);
    playerPreFix();
    _ctx->stop = _input->LT(-1);
    setState(499);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(497);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(477);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(478);
          generalPostInTerrainFilter();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(479);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(480);
          generalPostNearTerrainFilter();
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(481);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(482);
          generalPostNearPlayerFilter();
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(483);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(484);
          generalPostNearTileFilter();
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(485);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(486);
          generalPostInTileFilter();
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(487);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(488);
          generalPostNearCardFilter();
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(489);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(490);
          generalPostInCardFilter();
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(491);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(492);
          generalPostPlayerChoiceFilter();
          break;
        }

        case 9: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(493);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(494);
          generalPostAtLeastAwayFilter();
          break;
        }

        case 10: {
          _localctx = _tracker.createInstance<PlayerPostFixContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RulePlayerPostFix);
          setState(495);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(496);
          generalPostAtLeastAwayFromPlayerFilter();
          break;
        }

        } 
      }
      setState(501);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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

IvionParser::PlayerPostFixContext* IvionParser::PlayerFilterContext::playerPostFix() {
  return getRuleContext<IvionParser::PlayerPostFixContext>(0);
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
  enterRule(_localctx, 26, IvionParser::RulePlayerFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    playerPostFix(0);
   
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
  enterRule(_localctx, 28, IvionParser::RuleCurrentPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
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
  enterRule(_localctx, 30, IvionParser::RulePreviousPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(511);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Them: {
        enterOuterAlt(_localctx, 1);
        setState(506);
        match(IvionParser::Them);
        break;
      }

      case IvionParser::They: {
        enterOuterAlt(_localctx, 2);
        setState(507);
        match(IvionParser::They);
        break;
      }

      case IvionParser::That: {
        enterOuterAlt(_localctx, 3);
        setState(508);
        match(IvionParser::That);
        setState(509);
        playerType();
        break;
      }

      case IvionParser::Their: {
        enterOuterAlt(_localctx, 4);
        setState(510);
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

//----------------- PreviousCardsOwnerContext ------------------------------------------------------------------

IvionParser::PreviousCardsOwnerContext::PreviousCardsOwnerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PreviousCardsOwnerContext::Its() {
  return getToken(IvionParser::Its, 0);
}

tree::TerminalNode* IvionParser::PreviousCardsOwnerContext::Owner() {
  return getToken(IvionParser::Owner, 0);
}


size_t IvionParser::PreviousCardsOwnerContext::getRuleIndex() const {
  return IvionParser::RulePreviousCardsOwner;
}


antlrcpp::Any IvionParser::PreviousCardsOwnerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPreviousCardsOwner(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PreviousCardsOwnerContext* IvionParser::previousCardsOwner() {
  PreviousCardsOwnerContext *_localctx = _tracker.createInstance<PreviousCardsOwnerContext>(_ctx, getState());
  enterRule(_localctx, 32, IvionParser::RulePreviousCardsOwner);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    match(IvionParser::Its);
    setState(514);
    match(IvionParser::Owner);
   
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
  enterRule(_localctx, 34, IvionParser::RulePreviousCardsController);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(521);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(516);
      previousCard();
      setState(517);
      match(IvionParser::Controller);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(519);
      match(IvionParser::Its);
      setState(520);
      match(IvionParser::Controller);
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

IvionParser::PreviousCardsOwnerContext* IvionParser::PlayerRefContext::previousCardsOwner() {
  return getRuleContext<IvionParser::PreviousCardsOwnerContext>(0);
}

IvionParser::PreviousCardsControllerContext* IvionParser::PlayerRefContext::previousCardsController() {
  return getRuleContext<IvionParser::PreviousCardsControllerContext>(0);
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
  enterRule(_localctx, 36, IvionParser::RulePlayerRef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(527);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(523);
      previousPlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(524);
      currentPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(525);
      previousCardsOwner();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(526);
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
  enterRule(_localctx, 38, IvionParser::RuleTargetPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(529);
      match(IvionParser::Another);
    }
    setState(532);
    match(IvionParser::Target);
    setState(533);
    playerFilter();
   
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
  enterRule(_localctx, 40, IvionParser::RuleSinglePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(537);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target:
      case IvionParser::Another: {
        enterOuterAlt(_localctx, 1);
        setState(535);
        targetPlayer();
        break;
      }

      case IvionParser::Them:
      case IvionParser::That:
      case IvionParser::Yourself:
      case IvionParser::The:
      case IvionParser::Your:
      case IvionParser::You:
      case IvionParser::They:
      case IvionParser::Their:
      case IvionParser::Its:
      case IvionParser::It: {
        enterOuterAlt(_localctx, 2);
        setState(536);
        playerRef();
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
  enterRule(_localctx, 42, IvionParser::RuleMultiPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(539);
      dynamic_cast<MultiPlayerContext *>(_localctx)->UpToFlag = upToFlag();
    }
    setState(542);
    literalValue();
    setState(543);
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
  enterRule(_localctx, 44, IvionParser::RuleAllOtherPlayers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(545);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Each

    || _la == IvionParser::All)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(546);
    match(IvionParser::Other);
    setState(547);
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
  enterRule(_localctx, 46, IvionParser::RuleAllPlayers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(555);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Each:
      case IvionParser::All:
      case IvionParser::Any: {
        enterOuterAlt(_localctx, 1);
        setState(549);
        _la = _input->LA(1);
        if (!(_la == IvionParser::Each

        || _la == IvionParser::All || _la == IvionParser::Any)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(550);
        playerFilter();
        break;
      }

      case IvionParser::Yourself: {
        enterOuterAlt(_localctx, 2);
        setState(551);
        match(IvionParser::Yourself);
        setState(552);
        match(IvionParser::Or);
        setState(553);
        match(IvionParser::Another);
        setState(554);
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
  enterRule(_localctx, 48, IvionParser::RulePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(561);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(557);
      singlePlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(558);
      multiPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(559);
      allPlayers();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(560);
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
  enterRule(_localctx, 50, IvionParser::RuleHypotheticalPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(568);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(564);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::A) {
        setState(563);
        match(IvionParser::A);
      }
      setState(566);
      playerFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(567);
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

//----------------- CardPreEnemyFilterContext ------------------------------------------------------------------

IvionParser::CardPreEnemyFilterContext::CardPreEnemyFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPreEnemyFilterContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}


size_t IvionParser::CardPreEnemyFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPreEnemyFilter;
}


antlrcpp::Any IvionParser::CardPreEnemyFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPreEnemyFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPreEnemyFilterContext* IvionParser::cardPreEnemyFilter() {
  CardPreEnemyFilterContext *_localctx = _tracker.createInstance<CardPreEnemyFilterContext>(_ctx, getState());
  enterRule(_localctx, 52, IvionParser::RuleCardPreEnemyFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    match(IvionParser::Enemy);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPreAttachedFilterContext ------------------------------------------------------------------

IvionParser::CardPreAttachedFilterContext::CardPreAttachedFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPreAttachedFilterContext::Attached() {
  return getToken(IvionParser::Attached, 0);
}


size_t IvionParser::CardPreAttachedFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPreAttachedFilter;
}


antlrcpp::Any IvionParser::CardPreAttachedFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPreAttachedFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPreAttachedFilterContext* IvionParser::cardPreAttachedFilter() {
  CardPreAttachedFilterContext *_localctx = _tracker.createInstance<CardPreAttachedFilterContext>(_ctx, getState());
  enterRule(_localctx, 54, IvionParser::RuleCardPreAttachedFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(IvionParser::Attached);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPreAbilityFilterContext ------------------------------------------------------------------

IvionParser::CardPreAbilityFilterContext::CardPreAbilityFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPreAbilityFilterContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

tree::TerminalNode* IvionParser::CardPreAbilityFilterContext::Non() {
  return getToken(IvionParser::Non, 0);
}


size_t IvionParser::CardPreAbilityFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPreAbilityFilter;
}


antlrcpp::Any IvionParser::CardPreAbilityFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPreAbilityFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPreAbilityFilterContext* IvionParser::cardPreAbilityFilter() {
  CardPreAbilityFilterContext *_localctx = _tracker.createInstance<CardPreAbilityFilterContext>(_ctx, getState());
  enterRule(_localctx, 56, IvionParser::RuleCardPreAbilityFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(575);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(574);
      match(IvionParser::Non);
    }
    setState(577);
    match(IvionParser::Ability);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPreAttackFilterContext ------------------------------------------------------------------

IvionParser::CardPreAttackFilterContext::CardPreAttackFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPreAttackFilterContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::CardPreAttackFilterContext::Non() {
  return getToken(IvionParser::Non, 0);
}


size_t IvionParser::CardPreAttackFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPreAttackFilter;
}


antlrcpp::Any IvionParser::CardPreAttackFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPreAttackFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPreAttackFilterContext* IvionParser::cardPreAttackFilter() {
  CardPreAttackFilterContext *_localctx = _tracker.createInstance<CardPreAttackFilterContext>(_ctx, getState());
  enterRule(_localctx, 58, IvionParser::RuleCardPreAttackFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(580);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(579);
      match(IvionParser::Non);
    }
    setState(582);
    match(IvionParser::Attack);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPreRevealedFilterContext ------------------------------------------------------------------

IvionParser::CardPreRevealedFilterContext::CardPreRevealedFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPreRevealedFilterContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
}


size_t IvionParser::CardPreRevealedFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPreRevealedFilter;
}


antlrcpp::Any IvionParser::CardPreRevealedFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPreRevealedFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPreRevealedFilterContext* IvionParser::cardPreRevealedFilter() {
  CardPreRevealedFilterContext *_localctx = _tracker.createInstance<CardPreRevealedFilterContext>(_ctx, getState());
  enterRule(_localctx, 60, IvionParser::RuleCardPreRevealedFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    match(IvionParser::Reveal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPreAnotherFilterContext ------------------------------------------------------------------

IvionParser::CardPreAnotherFilterContext::CardPreAnotherFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPreAnotherFilterContext::Another() {
  return getToken(IvionParser::Another, 0);
}


size_t IvionParser::CardPreAnotherFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPreAnotherFilter;
}


antlrcpp::Any IvionParser::CardPreAnotherFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPreAnotherFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPreAnotherFilterContext* IvionParser::cardPreAnotherFilter() {
  CardPreAnotherFilterContext *_localctx = _tracker.createInstance<CardPreAnotherFilterContext>(_ctx, getState());
  enterRule(_localctx, 62, IvionParser::RuleCardPreAnotherFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    match(IvionParser::Another);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPreInstanceFilterContext ------------------------------------------------------------------

IvionParser::CardPreInstanceFilterContext::CardPreInstanceFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPreInstanceFilterContext::First() {
  return getToken(IvionParser::First, 0);
}

tree::TerminalNode* IvionParser::CardPreInstanceFilterContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::CardPreInstanceFilterContext::Third() {
  return getToken(IvionParser::Third, 0);
}

tree::TerminalNode* IvionParser::CardPreInstanceFilterContext::The() {
  return getToken(IvionParser::The, 0);
}

IvionParser::PlayerRefContext* IvionParser::CardPreInstanceFilterContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}


size_t IvionParser::CardPreInstanceFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPreInstanceFilter;
}


antlrcpp::Any IvionParser::CardPreInstanceFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPreInstanceFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPreInstanceFilterContext* IvionParser::cardPreInstanceFilter() {
  CardPreInstanceFilterContext *_localctx = _tracker.createInstance<CardPreInstanceFilterContext>(_ctx, getState());
  enterRule(_localctx, 64, IvionParser::RuleCardPreInstanceFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      break;
    }

    case 2: {
      setState(589);
      match(IvionParser::The);
      break;
    }

    case 3: {
      setState(590);
      playerRef();
      break;
    }

    }
    setState(593);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Second

    || _la == IvionParser::Third || _la == IvionParser::First)) {
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

//----------------- CardPrefixContext ------------------------------------------------------------------

IvionParser::CardPrefixContext::CardPrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CardPreEnemyFilterContext* IvionParser::CardPrefixContext::cardPreEnemyFilter() {
  return getRuleContext<IvionParser::CardPreEnemyFilterContext>(0);
}

IvionParser::CardPreAttachedFilterContext* IvionParser::CardPrefixContext::cardPreAttachedFilter() {
  return getRuleContext<IvionParser::CardPreAttachedFilterContext>(0);
}

IvionParser::CardPreAbilityFilterContext* IvionParser::CardPrefixContext::cardPreAbilityFilter() {
  return getRuleContext<IvionParser::CardPreAbilityFilterContext>(0);
}

IvionParser::CardPreAttackFilterContext* IvionParser::CardPrefixContext::cardPreAttackFilter() {
  return getRuleContext<IvionParser::CardPreAttackFilterContext>(0);
}

IvionParser::CardPreRevealedFilterContext* IvionParser::CardPrefixContext::cardPreRevealedFilter() {
  return getRuleContext<IvionParser::CardPreRevealedFilterContext>(0);
}

IvionParser::CardPreAnotherFilterContext* IvionParser::CardPrefixContext::cardPreAnotherFilter() {
  return getRuleContext<IvionParser::CardPreAnotherFilterContext>(0);
}

IvionParser::CardPreInstanceFilterContext* IvionParser::CardPrefixContext::cardPreInstanceFilter() {
  return getRuleContext<IvionParser::CardPreInstanceFilterContext>(0);
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
  enterRule(_localctx, 66, IvionParser::RuleCardPrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(602);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(595);
      cardPreEnemyFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(596);
      cardPreAttachedFilter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(597);
      cardPreAbilityFilter();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(598);
      cardPreAttackFilter();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(599);
      cardPreRevealedFilter();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(600);
      cardPreAnotherFilter();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(601);
      cardPreInstanceFilter();
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

//----------------- CardPostTargettingFilterContext ------------------------------------------------------------------

IvionParser::CardPostTargettingFilterContext::CardPostTargettingFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostTargettingFilterContext::Targeting() {
  return getToken(IvionParser::Targeting, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::CardPostTargettingFilterContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}


size_t IvionParser::CardPostTargettingFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostTargettingFilter;
}


antlrcpp::Any IvionParser::CardPostTargettingFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostTargettingFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostTargettingFilterContext* IvionParser::cardPostTargettingFilter() {
  CardPostTargettingFilterContext *_localctx = _tracker.createInstance<CardPostTargettingFilterContext>(_ctx, getState());
  enterRule(_localctx, 68, IvionParser::RuleCardPostTargettingFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(IvionParser::Targeting);
    setState(605);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPostCostFilterContext ------------------------------------------------------------------

IvionParser::CardPostCostFilterContext::CardPostCostFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostCostFilterContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::CardPostCostFilterContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::CardPostCostFilterContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::CardPostCostFilterContext::Cost() {
  return getToken(IvionParser::Cost, 0);
}

tree::TerminalNode* IvionParser::CardPostCostFilterContext::Of() {
  return getToken(IvionParser::Of, 0);
}

IvionParser::LiteralValueContext* IvionParser::CardPostCostFilterContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::CardPostCostFilterContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::CardPostCostFilterContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::CardPostCostFilterContext::More() {
  return getToken(IvionParser::More, 0);
}


size_t IvionParser::CardPostCostFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostCostFilter;
}


antlrcpp::Any IvionParser::CardPostCostFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostCostFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostCostFilterContext* IvionParser::cardPostCostFilter() {
  CardPostCostFilterContext *_localctx = _tracker.createInstance<CardPostCostFilterContext>(_ctx, getState());
  enterRule(_localctx, 70, IvionParser::RuleCardPostCostFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    match(IvionParser::With);
    setState(608);
    match(IvionParser::A);
    setState(609);
    match(IvionParser::Resource);
    setState(610);
    match(IvionParser::Cost);
    setState(611);
    match(IvionParser::Of);
    setState(612);
    literalValue();
    setState(613);
    match(IvionParser::Or);
    setState(614);
    _la = _input->LA(1);
    if (!(_la == IvionParser::More

    || _la == IvionParser::Less)) {
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

//----------------- CardPostAttachedToPlayerFilterContext ------------------------------------------------------------------

IvionParser::CardPostAttachedToPlayerFilterContext::CardPostAttachedToPlayerFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostAttachedToPlayerFilterContext::Attached() {
  return getToken(IvionParser::Attached, 0);
}

tree::TerminalNode* IvionParser::CardPostAttachedToPlayerFilterContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::CardPostAttachedToPlayerFilterContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}


size_t IvionParser::CardPostAttachedToPlayerFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostAttachedToPlayerFilter;
}


antlrcpp::Any IvionParser::CardPostAttachedToPlayerFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostAttachedToPlayerFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostAttachedToPlayerFilterContext* IvionParser::cardPostAttachedToPlayerFilter() {
  CardPostAttachedToPlayerFilterContext *_localctx = _tracker.createInstance<CardPostAttachedToPlayerFilterContext>(_ctx, getState());
  enterRule(_localctx, 72, IvionParser::RuleCardPostAttachedToPlayerFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(616);
    match(IvionParser::Attached);
    setState(617);
    match(IvionParser::To);
    setState(618);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPostAttachedToTileFilterContext ------------------------------------------------------------------

IvionParser::CardPostAttachedToTileFilterContext::CardPostAttachedToTileFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostAttachedToTileFilterContext::Attached() {
  return getToken(IvionParser::Attached, 0);
}

tree::TerminalNode* IvionParser::CardPostAttachedToTileFilterContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::HypotheticalTileContext* IvionParser::CardPostAttachedToTileFilterContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}


size_t IvionParser::CardPostAttachedToTileFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostAttachedToTileFilter;
}


antlrcpp::Any IvionParser::CardPostAttachedToTileFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostAttachedToTileFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostAttachedToTileFilterContext* IvionParser::cardPostAttachedToTileFilter() {
  CardPostAttachedToTileFilterContext *_localctx = _tracker.createInstance<CardPostAttachedToTileFilterContext>(_ctx, getState());
  enterRule(_localctx, 74, IvionParser::RuleCardPostAttachedToTileFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(620);
    match(IvionParser::Attached);
    setState(621);
    match(IvionParser::To);
    setState(622);
    hypotheticalTile();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPostControlledByPlayerFilterContext ------------------------------------------------------------------

IvionParser::CardPostControlledByPlayerFilterContext::CardPostControlledByPlayerFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostControlledByPlayerFilterContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}

tree::TerminalNode* IvionParser::CardPostControlledByPlayerFilterContext::By() {
  return getToken(IvionParser::By, 0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::CardPostControlledByPlayerFilterContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}


size_t IvionParser::CardPostControlledByPlayerFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostControlledByPlayerFilter;
}


antlrcpp::Any IvionParser::CardPostControlledByPlayerFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostControlledByPlayerFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostControlledByPlayerFilterContext* IvionParser::cardPostControlledByPlayerFilter() {
  CardPostControlledByPlayerFilterContext *_localctx = _tracker.createInstance<CardPostControlledByPlayerFilterContext>(_ctx, getState());
  enterRule(_localctx, 76, IvionParser::RuleCardPostControlledByPlayerFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
    match(IvionParser::Controlled);
    setState(625);
    match(IvionParser::By);
    setState(626);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPostHardcastFilterContext ------------------------------------------------------------------

IvionParser::CardPostHardcastFilterContext::CardPostHardcastFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostHardcastFilterContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::CardPostHardcastFilterContext::Hardcast() {
  return getToken(IvionParser::Hardcast, 0);
}


size_t IvionParser::CardPostHardcastFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostHardcastFilter;
}


antlrcpp::Any IvionParser::CardPostHardcastFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostHardcastFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostHardcastFilterContext* IvionParser::cardPostHardcastFilter() {
  CardPostHardcastFilterContext *_localctx = _tracker.createInstance<CardPostHardcastFilterContext>(_ctx, getState());
  enterRule(_localctx, 78, IvionParser::RuleCardPostHardcastFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(628);
    match(IvionParser::With);
    setState(629);
    match(IvionParser::Hardcast);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPostFrenzyFilterContext ------------------------------------------------------------------

IvionParser::CardPostFrenzyFilterContext::CardPostFrenzyFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostFrenzyFilterContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::CardPostFrenzyFilterContext::Frenzy() {
  return getToken(IvionParser::Frenzy, 0);
}


size_t IvionParser::CardPostFrenzyFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostFrenzyFilter;
}


antlrcpp::Any IvionParser::CardPostFrenzyFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostFrenzyFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostFrenzyFilterContext* IvionParser::cardPostFrenzyFilter() {
  CardPostFrenzyFilterContext *_localctx = _tracker.createInstance<CardPostFrenzyFilterContext>(_ctx, getState());
  enterRule(_localctx, 80, IvionParser::RuleCardPostFrenzyFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(631);
    match(IvionParser::With);
    setState(632);
    match(IvionParser::Frenzy);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPostInDiscardFilterContext ------------------------------------------------------------------

IvionParser::CardPostInDiscardFilterContext::CardPostInDiscardFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostInDiscardFilterContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::CardPostInDiscardFilterContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::CardPostInDiscardFilterContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}


size_t IvionParser::CardPostInDiscardFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostInDiscardFilter;
}


antlrcpp::Any IvionParser::CardPostInDiscardFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostInDiscardFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostInDiscardFilterContext* IvionParser::cardPostInDiscardFilter() {
  CardPostInDiscardFilterContext *_localctx = _tracker.createInstance<CardPostInDiscardFilterContext>(_ctx, getState());
  enterRule(_localctx, 82, IvionParser::RuleCardPostInDiscardFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(634);
    match(IvionParser::From);
    setState(635);
    match(IvionParser::Your);
    setState(636);
    match(IvionParser::Discard);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardPostTurnRefFilterContext ------------------------------------------------------------------

IvionParser::CardPostTurnRefFilterContext::CardPostTurnRefFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostTurnRefFilterContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::CardPostTurnRefFilterContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::CardPostTurnRefFilterContext::During() {
  return getToken(IvionParser::During, 0);
}

IvionParser::PlayerRefContext* IvionParser::CardPostTurnRefFilterContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}


size_t IvionParser::CardPostTurnRefFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostTurnRefFilter;
}


antlrcpp::Any IvionParser::CardPostTurnRefFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostTurnRefFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostTurnRefFilterContext* IvionParser::cardPostTurnRefFilter() {
  CardPostTurnRefFilterContext *_localctx = _tracker.createInstance<CardPostTurnRefFilterContext>(_ctx, getState());
  enterRule(_localctx, 84, IvionParser::RuleCardPostTurnRefFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(644);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::This: {
        enterOuterAlt(_localctx, 1);
        setState(638);
        match(IvionParser::This);
        setState(639);
        match(IvionParser::Turn);
        break;
      }

      case IvionParser::During: {
        enterOuterAlt(_localctx, 2);
        setState(640);
        match(IvionParser::During);
        setState(641);
        playerRef();
        setState(642);
        match(IvionParser::Turn);
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

//----------------- CardPostfixContext ------------------------------------------------------------------

IvionParser::CardPostfixContext::CardPostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CardPostTargettingFilterContext* IvionParser::CardPostfixContext::cardPostTargettingFilter() {
  return getRuleContext<IvionParser::CardPostTargettingFilterContext>(0);
}

IvionParser::CardPostCostFilterContext* IvionParser::CardPostfixContext::cardPostCostFilter() {
  return getRuleContext<IvionParser::CardPostCostFilterContext>(0);
}

IvionParser::CardPostAttachedToPlayerFilterContext* IvionParser::CardPostfixContext::cardPostAttachedToPlayerFilter() {
  return getRuleContext<IvionParser::CardPostAttachedToPlayerFilterContext>(0);
}

IvionParser::CardPostAttachedToTileFilterContext* IvionParser::CardPostfixContext::cardPostAttachedToTileFilter() {
  return getRuleContext<IvionParser::CardPostAttachedToTileFilterContext>(0);
}

IvionParser::CardPostControlledByPlayerFilterContext* IvionParser::CardPostfixContext::cardPostControlledByPlayerFilter() {
  return getRuleContext<IvionParser::CardPostControlledByPlayerFilterContext>(0);
}

IvionParser::CardPostHardcastFilterContext* IvionParser::CardPostfixContext::cardPostHardcastFilter() {
  return getRuleContext<IvionParser::CardPostHardcastFilterContext>(0);
}

IvionParser::CardPostFrenzyFilterContext* IvionParser::CardPostfixContext::cardPostFrenzyFilter() {
  return getRuleContext<IvionParser::CardPostFrenzyFilterContext>(0);
}

IvionParser::CardPostInDiscardFilterContext* IvionParser::CardPostfixContext::cardPostInDiscardFilter() {
  return getRuleContext<IvionParser::CardPostInDiscardFilterContext>(0);
}

IvionParser::CardPostTurnRefFilterContext* IvionParser::CardPostfixContext::cardPostTurnRefFilter() {
  return getRuleContext<IvionParser::CardPostTurnRefFilterContext>(0);
}

IvionParser::GeneralPostInTerrainFilterContext* IvionParser::CardPostfixContext::generalPostInTerrainFilter() {
  return getRuleContext<IvionParser::GeneralPostInTerrainFilterContext>(0);
}

IvionParser::GeneralPostNearTerrainFilterContext* IvionParser::CardPostfixContext::generalPostNearTerrainFilter() {
  return getRuleContext<IvionParser::GeneralPostNearTerrainFilterContext>(0);
}

IvionParser::GeneralPostNearPlayerFilterContext* IvionParser::CardPostfixContext::generalPostNearPlayerFilter() {
  return getRuleContext<IvionParser::GeneralPostNearPlayerFilterContext>(0);
}

IvionParser::GeneralPostNearTileFilterContext* IvionParser::CardPostfixContext::generalPostNearTileFilter() {
  return getRuleContext<IvionParser::GeneralPostNearTileFilterContext>(0);
}

IvionParser::GeneralPostInTileFilterContext* IvionParser::CardPostfixContext::generalPostInTileFilter() {
  return getRuleContext<IvionParser::GeneralPostInTileFilterContext>(0);
}

IvionParser::GeneralPostNearCardFilterContext* IvionParser::CardPostfixContext::generalPostNearCardFilter() {
  return getRuleContext<IvionParser::GeneralPostNearCardFilterContext>(0);
}

IvionParser::GeneralPostInCardFilterContext* IvionParser::CardPostfixContext::generalPostInCardFilter() {
  return getRuleContext<IvionParser::GeneralPostInCardFilterContext>(0);
}

IvionParser::GeneralPostPlayerChoiceFilterContext* IvionParser::CardPostfixContext::generalPostPlayerChoiceFilter() {
  return getRuleContext<IvionParser::GeneralPostPlayerChoiceFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFilterContext* IvionParser::CardPostfixContext::generalPostAtLeastAwayFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext* IvionParser::CardPostfixContext::generalPostAtLeastAwayFromPlayerFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext>(0);
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
  enterRule(_localctx, 86, IvionParser::RuleCardPostfix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(665);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(646);
      cardPostTargettingFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(647);
      cardPostCostFilter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(648);
      cardPostAttachedToPlayerFilter();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(649);
      cardPostAttachedToTileFilter();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(650);
      cardPostControlledByPlayerFilter();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(651);
      cardPostHardcastFilter();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(652);
      cardPostFrenzyFilter();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(653);
      cardPostInDiscardFilter();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(654);
      cardPostTurnRefFilter();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(655);
      generalPostInTerrainFilter();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(656);
      generalPostNearTerrainFilter();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(657);
      generalPostNearPlayerFilter();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(658);
      generalPostNearTileFilter();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(659);
      generalPostInTileFilter();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(660);
      generalPostNearCardFilter();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(661);
      generalPostInCardFilter();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(662);
      generalPostPlayerChoiceFilter();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(663);
      generalPostAtLeastAwayFilter();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(664);
      generalPostAtLeastAwayFromPlayerFilter();
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
  enterRule(_localctx, 88, IvionParser::RuleCardFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(670);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Them)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::The)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::Attached)
      | (1ULL << IvionParser::Their)
      | (1ULL << IvionParser::Its))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (IvionParser::Non - 71))
      | (1ULL << (IvionParser::Attack - 71))
      | (1ULL << (IvionParser::Ability - 71))
      | (1ULL << (IvionParser::Second - 71))
      | (1ULL << (IvionParser::Third - 71))
      | (1ULL << (IvionParser::Reveal - 71)))) != 0) || _la == IvionParser::First

    || _la == IvionParser::It) {
      setState(667);
      cardPrefix();
      setState(672);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(673);
    match(IvionParser::Card);
    setState(677);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(674);
        cardPostfix(); 
      }
      setState(679);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
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
  enterRule(_localctx, 90, IvionParser::RuleCardName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(680);
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
  enterRule(_localctx, 92, IvionParser::RuleBottomCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(682);
    match(IvionParser::The);
    setState(683);
    match(IvionParser::Bottom);
    setState(684);
    match(IvionParser::Card);
    setState(685);
    match(IvionParser::Of);
    setState(686);
    hypotheticalPlayer();
    setState(687);
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

tree::TerminalNode* IvionParser::PreviousCardContext::Its() {
  return getToken(IvionParser::Its, 0);
}

tree::TerminalNode* IvionParser::PreviousCardContext::It() {
  return getToken(IvionParser::It, 0);
}

tree::TerminalNode* IvionParser::PreviousCardContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::PreviousCardContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::PreviousCardContext::Discard() {
  return getToken(IvionParser::Discard, 0);
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
  enterRule(_localctx, 94, IvionParser::RulePreviousCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(699);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(689);
      match(IvionParser::That);
      setState(690);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(691);
      match(IvionParser::The);
      setState(692);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(693);
      match(IvionParser::Its);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(694);
      match(IvionParser::It);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(695);
      match(IvionParser::It);
      setState(696);
      match(IvionParser::From);
      setState(697);
      match(IvionParser::Your);
      setState(698);
      match(IvionParser::Discard);
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
  enterRule(_localctx, 96, IvionParser::RuleTargetCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(701);
    match(IvionParser::Target);
    setState(702);
    cardFilter();
   
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

IvionParser::CardFilterContext* IvionParser::SelectCardContext::cardFilter() {
  return getRuleContext<IvionParser::CardFilterContext>(0);
}


size_t IvionParser::SelectCardContext::getRuleIndex() const {
  return IvionParser::RuleSelectCard;
}


antlrcpp::Any IvionParser::SelectCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSelectCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SelectCardContext* IvionParser::selectCard() {
  SelectCardContext *_localctx = _tracker.createInstance<SelectCardContext>(_ctx, getState());
  enterRule(_localctx, 98, IvionParser::RuleSelectCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(704);
    match(IvionParser::A);
    setState(705);
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

IvionParser::SelectCardContext* IvionParser::SingleCardContext::selectCard() {
  return getRuleContext<IvionParser::SelectCardContext>(0);
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
  enterRule(_localctx, 100, IvionParser::RuleSingleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(712);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(707);
      cardName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(708);
      targetCard();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(709);
      bottomCard();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(710);
      previousCard();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(711);
      selectCard();
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
  enterRule(_localctx, 102, IvionParser::RuleAllCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(714);
    match(IvionParser::All);
    setState(715);
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

IvionParser::CardFilterContext* IvionParser::MultiCardContext::cardFilter() {
  return getRuleContext<IvionParser::CardFilterContext>(0);
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
  enterRule(_localctx, 104, IvionParser::RuleMultiCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(729);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(718);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Up) {
        setState(717);
        dynamic_cast<MultiCardContext *>(_localctx)->UpToFlag = upToFlag();
      }
      setState(720);
      literalValue();
      setState(721);
      targetCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(724);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Up) {
        setState(723);
        dynamic_cast<MultiCardContext *>(_localctx)->UpToFlag = upToFlag();
      }
      setState(726);
      literalValue();
      setState(727);
      cardFilter();
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
  enterRule(_localctx, 106, IvionParser::RuleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(734);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(731);
      singleCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(732);
      allCards();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(733);
      multiCard();
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
  enterRule(_localctx, 108, IvionParser::RuleHypotheticalCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(741);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(737);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::A) {
        setState(736);
        match(IvionParser::A);
      }
      setState(739);
      cardFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(740);
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

//----------------- TilePreEmptyFilterContext ------------------------------------------------------------------

IvionParser::TilePreEmptyFilterContext::TilePreEmptyFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TilePreEmptyFilterContext::Empty() {
  return getToken(IvionParser::Empty, 0);
}

tree::TerminalNode* IvionParser::TilePreEmptyFilterContext::Non() {
  return getToken(IvionParser::Non, 0);
}


size_t IvionParser::TilePreEmptyFilterContext::getRuleIndex() const {
  return IvionParser::RuleTilePreEmptyFilter;
}


antlrcpp::Any IvionParser::TilePreEmptyFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitTilePreEmptyFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::TilePreEmptyFilterContext* IvionParser::tilePreEmptyFilter() {
  TilePreEmptyFilterContext *_localctx = _tracker.createInstance<TilePreEmptyFilterContext>(_ctx, getState());
  enterRule(_localctx, 110, IvionParser::RuleTilePreEmptyFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(744);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(743);
      match(IvionParser::Non);
    }
    setState(746);
    match(IvionParser::Empty);
   
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

IvionParser::TilePreEmptyFilterContext* IvionParser::TilePreFixContext::tilePreEmptyFilter() {
  return getRuleContext<IvionParser::TilePreEmptyFilterContext>(0);
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
  enterRule(_localctx, 112, IvionParser::RuleTilePreFix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(748);
    tilePreEmptyFilter();
   
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

IvionParser::GeneralPostInTerrainFilterContext* IvionParser::TilePostFixContext::generalPostInTerrainFilter() {
  return getRuleContext<IvionParser::GeneralPostInTerrainFilterContext>(0);
}

IvionParser::GeneralPostNearTerrainFilterContext* IvionParser::TilePostFixContext::generalPostNearTerrainFilter() {
  return getRuleContext<IvionParser::GeneralPostNearTerrainFilterContext>(0);
}

IvionParser::GeneralPostNearPlayerFilterContext* IvionParser::TilePostFixContext::generalPostNearPlayerFilter() {
  return getRuleContext<IvionParser::GeneralPostNearPlayerFilterContext>(0);
}

IvionParser::GeneralPostNearTileFilterContext* IvionParser::TilePostFixContext::generalPostNearTileFilter() {
  return getRuleContext<IvionParser::GeneralPostNearTileFilterContext>(0);
}

IvionParser::GeneralPostInTileFilterContext* IvionParser::TilePostFixContext::generalPostInTileFilter() {
  return getRuleContext<IvionParser::GeneralPostInTileFilterContext>(0);
}

IvionParser::GeneralPostNearCardFilterContext* IvionParser::TilePostFixContext::generalPostNearCardFilter() {
  return getRuleContext<IvionParser::GeneralPostNearCardFilterContext>(0);
}

IvionParser::GeneralPostInCardFilterContext* IvionParser::TilePostFixContext::generalPostInCardFilter() {
  return getRuleContext<IvionParser::GeneralPostInCardFilterContext>(0);
}

IvionParser::GeneralPostPlayerChoiceFilterContext* IvionParser::TilePostFixContext::generalPostPlayerChoiceFilter() {
  return getRuleContext<IvionParser::GeneralPostPlayerChoiceFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFilterContext* IvionParser::TilePostFixContext::generalPostAtLeastAwayFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext* IvionParser::TilePostFixContext::generalPostAtLeastAwayFromPlayerFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext>(0);
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
  enterRule(_localctx, 114, IvionParser::RuleTilePostFix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(760);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(750);
      generalPostInTerrainFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(751);
      generalPostNearTerrainFilter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(752);
      generalPostNearPlayerFilter();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(753);
      generalPostNearTileFilter();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(754);
      generalPostInTileFilter();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(755);
      generalPostNearCardFilter();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(756);
      generalPostInCardFilter();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(757);
      generalPostPlayerChoiceFilter();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(758);
      generalPostAtLeastAwayFilter();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(759);
      generalPostAtLeastAwayFromPlayerFilter();
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
  enterRule(_localctx, 116, IvionParser::RuleTileFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(765);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IvionParser::Non

    || _la == IvionParser::Empty) {
      setState(762);
      tilePreFix();
      setState(767);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(768);
    match(IvionParser::Tile);
    setState(772);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(769);
        tilePostFix(); 
      }
      setState(774);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
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
  enterRule(_localctx, 118, IvionParser::RuleTargetTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(776);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(775);
      match(IvionParser::Another);
    }
    setState(779);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::A || ((((_la - 187) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 187)) & ((1ULL << (IvionParser::Once - 187))
      | (1ULL << (IvionParser::Twice - 187))
      | (1ULL << (IvionParser::Integer - 187))
      | (1ULL << (IvionParser::One - 187))
      | (1ULL << (IvionParser::Two - 187))
      | (1ULL << (IvionParser::Three - 187)))) != 0)) {
      setState(778);
      literalValue();
    }
    setState(781);
    match(IvionParser::Target);
    setState(782);
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
  enterRule(_localctx, 120, IvionParser::RulePreviousTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(788);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::That: {
        enterOuterAlt(_localctx, 1);
        setState(784);
        match(IvionParser::That);
        setState(785);
        match(IvionParser::Tile);
        break;
      }

      case IvionParser::The: {
        enterOuterAlt(_localctx, 2);
        setState(786);
        match(IvionParser::The);
        setState(787);
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
  enterRule(_localctx, 122, IvionParser::RuleTheNearestTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(790);
    match(IvionParser::The);
    setState(791);
    match(IvionParser::Nearest);
    setState(792);
    tileFilter();
    setState(793);
    match(IvionParser::Next);
    setState(794);
    match(IvionParser::To);
    setState(797);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      setState(795);
      hypotheticalPlayer();
      break;
    }

    case 2: {
      setState(796);
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

tree::TerminalNode* IvionParser::PlayersTileContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::PlayersTileContext::In() {
  return getToken(IvionParser::In, 0);
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
  enterRule(_localctx, 124, IvionParser::RulePlayersTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(799);
    match(IvionParser::The);
    setState(800);
    match(IvionParser::Tile);
    setState(801);
    player();
    setState(802);
    match(IvionParser::Is);
    setState(803);
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
  enterRule(_localctx, 126, IvionParser::RuleCardsTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(805);
    match(IvionParser::This);
    setState(806);
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
  enterRule(_localctx, 128, IvionParser::RuleSingleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(813);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(808);
      targetTile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(809);
      previousTile();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(810);
      theNearestTile();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(811);
      playersTile();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(812);
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
  enterRule(_localctx, 130, IvionParser::RuleMultiTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(816);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(815);
      dynamic_cast<MultiTileContext *>(_localctx)->UpToFlag = upToFlag();
    }
    setState(818);
    literalValue();
    setState(819);
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
  enterRule(_localctx, 132, IvionParser::RuleAllTiles);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(821);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Each

    || _la == IvionParser::All)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(822);
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
  enterRule(_localctx, 134, IvionParser::RuleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(827);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(824);
      singleTile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(825);
      allTiles();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(826);
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
  enterRule(_localctx, 136, IvionParser::RuleHypotheticalTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(834);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(830);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::A) {
        setState(829);
        match(IvionParser::A);
      }
      setState(832);
      tileFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(833);
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
  enterRule(_localctx, 138, IvionParser::RuleEntity);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(839);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(836);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(837);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(838);
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
  enterRule(_localctx, 140, IvionParser::RuleHypotheticalEntity);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(844);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(841);
      hypotheticalCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(842);
      hypotheticalPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(843);
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
  enterRule(_localctx, 142, IvionParser::RuleDisarmPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(852);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(846);
      match(IvionParser::Disarm);
      setState(847);
      literalValue();
      setState(848);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(850);
      match(IvionParser::Disarm);
      setState(851);
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
  enterRule(_localctx, 144, IvionParser::RuleSilencePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(860);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(854);
      match(IvionParser::Silence);
      setState(855);
      literalValue();
      setState(856);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(858);
      match(IvionParser::Silence);
      setState(859);
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
  enterRule(_localctx, 146, IvionParser::RuleSlowPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(868);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(862);
      match(IvionParser::Slow);
      setState(863);
      literalValue();
      setState(864);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(866);
      match(IvionParser::Slow);
      setState(867);
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
  enterRule(_localctx, 148, IvionParser::RuleControlPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(909);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(870);
      match(IvionParser::Apply);
      setState(871);
      literalValue();
      setState(872);
      match(IvionParser::More);
      setState(873);
      match(IvionParser::Instances);
      setState(874);
      match(IvionParser::Of);
      setState(875);
      match(IvionParser::A);
      setState(876);
      match(IvionParser::Control);
      setState(877);
      match(IvionParser::Type);
      setState(878);
      match(IvionParser::Of);
      setState(879);
      match(IvionParser::Your);
      setState(880);
      match(IvionParser::Choice);
      setState(881);
      match(IvionParser::To);
      setState(882);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(884);
      match(IvionParser::Apply);
      setState(885);
      match(IvionParser::A);
      setState(886);
      match(IvionParser::Instance);
      setState(887);
      match(IvionParser::Of);
      setState(888);
      match(IvionParser::A);
      setState(889);
      match(IvionParser::Control);
      setState(890);
      match(IvionParser::Type);
      setState(891);
      match(IvionParser::Of);
      setState(892);
      match(IvionParser::Your);
      setState(893);
      match(IvionParser::Choice);
      setState(894);
      match(IvionParser::To);
      setState(895);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(896);
      match(IvionParser::Increase);
      setState(897);
      match(IvionParser::The);
      setState(898);
      match(IvionParser::Value);
      setState(899);
      match(IvionParser::Of);
      setState(900);
      match(IvionParser::A);
      setState(901);
      match(IvionParser::Control);
      setState(902);
      match(IvionParser::Type);
      setState(903);
      match(IvionParser::Already);
      setState(904);
      match(IvionParser::Affecting);
      setState(905);
      player();
      setState(906);
      match(IvionParser::By);
      setState(907);
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
  enterRule(_localctx, 150, IvionParser::RuleAwayFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(911);
    match(IvionParser::Away);
    setState(912);
    match(IvionParser::From);
    setState(913);
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
  enterRule(_localctx, 152, IvionParser::RuleUpToFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(915);
    match(IvionParser::Up);
    setState(916);
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
  enterRule(_localctx, 154, IvionParser::RuleTravelDistance);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(918);
    match(IvionParser::Travel);
    setState(920);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      setState(919);
      dynamic_cast<TravelDistanceContext *>(_localctx)->TargetPlayer = player();
      break;
    }

    }
    setState(923);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(922);
      dynamic_cast<TravelDistanceContext *>(_localctx)->UpToFlag = upToFlag();
    }
    setState(926);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(925);
      match(IvionParser::Another);
    }
    setState(928);
    literalValue();
    setState(929);
    match(IvionParser::Tile);
    setState(931);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(930);
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
  enterRule(_localctx, 156, IvionParser::RuleTravelPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(933);
    match(IvionParser::Travel);
    setState(935);
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
      | (1ULL << IvionParser::Its))) != 0) || ((((_la - 148) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 148)) & ((1ULL << (IvionParser::Any - 148))
      | (1ULL << (IvionParser::Once - 148))
      | (1ULL << (IvionParser::Twice - 148))
      | (1ULL << (IvionParser::Integer - 148))
      | (1ULL << (IvionParser::One - 148))
      | (1ULL << (IvionParser::Two - 148))
      | (1ULL << (IvionParser::Three - 148))
      | (1ULL << (IvionParser::It - 148)))) != 0)) {
      setState(934);
      dynamic_cast<TravelPlayerContext *>(_localctx)->TargetPlayer = player();
    }
    setState(937);
    match(IvionParser::To);
    setState(940);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(938);
      dynamic_cast<TravelPlayerContext *>(_localctx)->TargetTile = tile();
      break;
    }

    case 2: {
      setState(939);
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
  enterRule(_localctx, 158, IvionParser::RuleDestroyCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(942);
    match(IvionParser::Destroy);
    setState(943);
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

std::vector<IvionParser::ValueContext *> IvionParser::DealDamageContext::value() {
  return getRuleContexts<IvionParser::ValueContext>();
}

IvionParser::ValueContext* IvionParser::DealDamageContext::value(size_t i) {
  return getRuleContext<IvionParser::ValueContext>(i);
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

tree::TerminalNode* IvionParser::DealDamageContext::Plus() {
  return getToken(IvionParser::Plus, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::More() {
  return getToken(IvionParser::More, 0);
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
  enterRule(_localctx, 160, IvionParser::RuleDealDamage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1002);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(945);
      match(IvionParser::Deal);
      setState(946);
      value();
      setState(947);
      match(IvionParser::Damage);
      setState(948);
      match(IvionParser::To);
      setState(949);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(951);
      match(IvionParser::Deal);
      setState(952);
      match(IvionParser::Damage);
      setState(953);
      match(IvionParser::To);
      setState(954);
      player();
      setState(955);
      match(IvionParser::Equal);
      setState(956);
      match(IvionParser::To);
      setState(957);
      value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(959);
      match(IvionParser::Deal);
      setState(960);
      value();
      setState(961);
      match(IvionParser::Damage);
      setState(962);
      match(IvionParser::To);
      setState(963);
      player();
      setState(964);
      match(IvionParser::Plus);
      setState(965);
      match(IvionParser::Damage);
      setState(966);
      match(IvionParser::Equal);
      setState(967);
      match(IvionParser::To);
      setState(968);
      value();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(970);
      match(IvionParser::Deal);
      setState(971);
      value();
      setState(972);
      match(IvionParser::Damage);
      setState(973);
      match(IvionParser::To);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(975);
      match(IvionParser::Deal);
      setState(976);
      match(IvionParser::Damage);
      setState(977);
      match(IvionParser::To);
      setState(978);
      player();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(979);
      match(IvionParser::Deal);
      setState(980);
      value();
      setState(981);
      match(IvionParser::More);
      setState(982);
      match(IvionParser::Damage);
      setState(983);
      match(IvionParser::To);
      setState(984);
      player();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(986);
      match(IvionParser::Deal);
      setState(987);
      value();
      setState(988);
      match(IvionParser::Damage);
      setState(989);
      match(IvionParser::To);
      setState(990);
      player();
      setState(991);
      match(IvionParser::Plus);
      setState(992);
      value();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(994);
      match(IvionParser::Deal);
      setState(995);
      match(IvionParser::Damage);
      setState(996);
      match(IvionParser::To);
      setState(997);
      player();
      setState(998);
      match(IvionParser::Equal);
      setState(999);
      match(IvionParser::To);
      setState(1000);
      value();
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
  enterRule(_localctx, 162, IvionParser::RuleCounterCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1004);
    match(IvionParser::Counter);
    setState(1005);
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
  enterRule(_localctx, 164, IvionParser::RuleAttachCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1020);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1007);
      match(IvionParser::Attach);
      setState(1008);
      match(IvionParser::To);
      setState(1009);
      entity();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1010);
      match(IvionParser::Attach);
      setState(1011);
      match(IvionParser::To);
      setState(1012);
      entity();
      setState(1013);
      match(IvionParser::Until);
      setState(1014);
      turnTrigger();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1016);
      match(IvionParser::Attach);
      setState(1017);
      match(IvionParser::CARD_NAME);
      setState(1018);
      match(IvionParser::To);
      setState(1019);
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

IvionParser::PlayerContext* IvionParser::GainPowerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 166, IvionParser::RuleGainPower);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1023);
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
      | (1ULL << IvionParser::Its))) != 0) || ((((_la - 148) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 148)) & ((1ULL << (IvionParser::Any - 148))
      | (1ULL << (IvionParser::Once - 148))
      | (1ULL << (IvionParser::Twice - 148))
      | (1ULL << (IvionParser::Integer - 148))
      | (1ULL << (IvionParser::One - 148))
      | (1ULL << (IvionParser::Two - 148))
      | (1ULL << (IvionParser::Three - 148))
      | (1ULL << (IvionParser::It - 148)))) != 0)) {
      setState(1022);
      player();
    }
    setState(1043);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      setState(1025);
      match(IvionParser::Gain);
      setState(1026);
      literalValue();
      setState(1027);
      match(IvionParser::POWER);
      break;
    }

    case 2: {
      setState(1029);
      match(IvionParser::Gain);
      setState(1030);
      literalValue();
      setState(1031);
      match(IvionParser::More);
      setState(1032);
      match(IvionParser::POWER);
      break;
    }

    case 3: {
      setState(1034);
      match(IvionParser::Gain);
      setState(1035);
      literalValue();
      setState(1036);
      match(IvionParser::Additional);
      setState(1037);
      match(IvionParser::POWER);
      break;
    }

    case 4: {
      setState(1039);
      match(IvionParser::Gain);
      setState(1040);
      literalValue();
      setState(1041);
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

IvionParser::PlayerContext* IvionParser::GainActionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 168, IvionParser::RuleGainAction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1046);
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
      | (1ULL << IvionParser::Its))) != 0) || ((((_la - 148) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 148)) & ((1ULL << (IvionParser::Any - 148))
      | (1ULL << (IvionParser::Once - 148))
      | (1ULL << (IvionParser::Twice - 148))
      | (1ULL << (IvionParser::Integer - 148))
      | (1ULL << (IvionParser::One - 148))
      | (1ULL << (IvionParser::Two - 148))
      | (1ULL << (IvionParser::Three - 148))
      | (1ULL << (IvionParser::It - 148)))) != 0)) {
      setState(1045);
      player();
    }
    setState(1066);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      setState(1048);
      match(IvionParser::Gain);
      setState(1049);
      literalValue();
      setState(1050);
      match(IvionParser::ACTION);
      break;
    }

    case 2: {
      setState(1052);
      match(IvionParser::Gain);
      setState(1053);
      literalValue();
      setState(1054);
      match(IvionParser::More);
      setState(1055);
      match(IvionParser::ACTION);
      break;
    }

    case 3: {
      setState(1057);
      match(IvionParser::Gain);
      setState(1058);
      literalValue();
      setState(1059);
      match(IvionParser::Additional);
      setState(1060);
      match(IvionParser::ACTION);
      break;
    }

    case 4: {
      setState(1062);
      match(IvionParser::Gain);
      setState(1063);
      literalValue();
      setState(1064);
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
  enterRule(_localctx, 170, IvionParser::RuleGainInitiative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1088);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1068);
      match(IvionParser::Gain);
      setState(1070); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1069);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1072); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1074);
      player();
      setState(1075);
      match(IvionParser::Gain);
      setState(1077); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1076);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1079); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1081);
      match(IvionParser::Gain);
      setState(1082);
      match(IvionParser::Another);
      setState(1084); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1083);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1086); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
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
  enterRule(_localctx, 172, IvionParser::RuleGainMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1098);
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
      case IvionParser::Three:
      case IvionParser::It: {
        enterOuterAlt(_localctx, 1);
        setState(1090);
        player();
        setState(1091);
        match(IvionParser::Gains);
        setState(1092);
        match(IvionParser::Mitigate);
        setState(1093);
        literalValue();
        break;
      }

      case IvionParser::Gain: {
        enterOuterAlt(_localctx, 2);
        setState(1095);
        match(IvionParser::Gain);
        setState(1096);
        match(IvionParser::Mitigate);
        setState(1097);
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
  enterRule(_localctx, 174, IvionParser::RuleLoseMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1100);
    match(IvionParser::Lose);
    setState(1101);
    match(IvionParser::Your);
    setState(1102);
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
  enterRule(_localctx, 176, IvionParser::RuleUseSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1104);
    match(IvionParser::Use);
    setState(1105);
    match(IvionParser::Your);
    setState(1106);
    match(IvionParser::Second);
    setState(1107);
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

IvionParser::CardContext* IvionParser::ReturnCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::PlayerRefContext* IvionParser::ReturnCardContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::Hand() {
  return getToken(IvionParser::Hand, 0);
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
  enterRule(_localctx, 178, IvionParser::RuleReturnCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1109);
    match(IvionParser::Return);
    setState(1110);
    card();
    setState(1111);
    match(IvionParser::To);
    setState(1112);
    playerRef();
    setState(1113);
    match(IvionParser::Hand);
   
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
  enterRule(_localctx, 180, IvionParser::RulePutBottomCardOfDeckIntoHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1115);
    match(IvionParser::Put);
    setState(1116);
    hypotheticalCard();
    setState(1117);
    match(IvionParser::Into);
    setState(1118);
    match(IvionParser::Your);
    setState(1119);
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
  enterRule(_localctx, 182, IvionParser::RuleTriggerDurationEffects);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1121);
    match(IvionParser::Trigger);
    setState(1122);
    match(IvionParser::Your);
    setState(1123);
    match(IvionParser::Duration);
    setState(1124);
    match(IvionParser::Effects);
    setState(1125);
    match(IvionParser::As);
    setState(1126);
    match(IvionParser::Though);
    setState(1127);
    match(IvionParser::Your);
    setState(1128);
    match(IvionParser::Turn);
    setState(1129);
    match(IvionParser::Had);
    setState(1130);
    match(IvionParser::Just);
    setState(1131);
    match(IvionParser::Ended);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForLessResourcesContext ------------------------------------------------------------------

IvionParser::ForLessResourcesContext::ForLessResourcesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ForLessResourcesContext::For() {
  return getToken(IvionParser::For, 0);
}

IvionParser::LiteralValueContext* IvionParser::ForLessResourcesContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::ForLessResourcesContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::ForLessResourcesContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}


size_t IvionParser::ForLessResourcesContext::getRuleIndex() const {
  return IvionParser::RuleForLessResources;
}


antlrcpp::Any IvionParser::ForLessResourcesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitForLessResources(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ForLessResourcesContext* IvionParser::forLessResources() {
  ForLessResourcesContext *_localctx = _tracker.createInstance<ForLessResourcesContext>(_ctx, getState());
  enterRule(_localctx, 184, IvionParser::RuleForLessResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1133);
    match(IvionParser::For);
    setState(1134);
    literalValue();
    setState(1135);
    match(IvionParser::Less);
    setState(1136);
    match(IvionParser::Resource);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FreeFlagContext ------------------------------------------------------------------

IvionParser::FreeFlagContext::FreeFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::FreeFlagContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::FreeFlagContext::Free() {
  return getToken(IvionParser::Free, 0);
}


size_t IvionParser::FreeFlagContext::getRuleIndex() const {
  return IvionParser::RuleFreeFlag;
}


antlrcpp::Any IvionParser::FreeFlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitFreeFlag(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::FreeFlagContext* IvionParser::freeFlag() {
  FreeFlagContext *_localctx = _tracker.createInstance<FreeFlagContext>(_ctx, getState());
  enterRule(_localctx, 186, IvionParser::RuleFreeFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1138);
    match(IvionParser::For);
    setState(1139);
    match(IvionParser::Free);
   
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

IvionParser::CardContext* IvionParser::PlayCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::FreeFlagContext* IvionParser::PlayCardContext::freeFlag() {
  return getRuleContext<IvionParser::FreeFlagContext>(0);
}

IvionParser::ForLessResourcesContext* IvionParser::PlayCardContext::forLessResources() {
  return getRuleContext<IvionParser::ForLessResourcesContext>(0);
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
  enterRule(_localctx, 188, IvionParser::RulePlayCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1141);
      match(IvionParser::Play);
      setState(1142);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1143);
      match(IvionParser::Play);
      setState(1144);
      card();
      setState(1145);
      freeFlag();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1147);
      match(IvionParser::Play);
      setState(1148);
      card();
      setState(1149);
      forLessResources();
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

//----------------- PlayUltimateContext ------------------------------------------------------------------

IvionParser::PlayUltimateContext::PlayUltimateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Play() {
  return getToken(IvionParser::Play, 0);
}

std::vector<tree::TerminalNode *> IvionParser::PlayUltimateContext::Ultimate() {
  return getTokens(IvionParser::Ultimate);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Ultimate(size_t i) {
  return getToken(IvionParser::Ultimate, i);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::P() {
  return getToken(IvionParser::P, 0);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Doesnt() {
  return getToken(IvionParser::Doesnt, 0);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Count() {
  return getToken(IvionParser::Count, 0);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Towards() {
  return getToken(IvionParser::Towards, 0);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Limit() {
  return getToken(IvionParser::Limit, 0);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Per() {
  return getToken(IvionParser::Per, 0);
}

tree::TerminalNode* IvionParser::PlayUltimateContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

std::vector<IvionParser::CardPostfixContext *> IvionParser::PlayUltimateContext::cardPostfix() {
  return getRuleContexts<IvionParser::CardPostfixContext>();
}

IvionParser::CardPostfixContext* IvionParser::PlayUltimateContext::cardPostfix(size_t i) {
  return getRuleContext<IvionParser::CardPostfixContext>(i);
}

IvionParser::FreeFlagContext* IvionParser::PlayUltimateContext::freeFlag() {
  return getRuleContext<IvionParser::FreeFlagContext>(0);
}

IvionParser::ForLessResourcesContext* IvionParser::PlayUltimateContext::forLessResources() {
  return getRuleContext<IvionParser::ForLessResourcesContext>(0);
}


size_t IvionParser::PlayUltimateContext::getRuleIndex() const {
  return IvionParser::RulePlayUltimate;
}


antlrcpp::Any IvionParser::PlayUltimateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayUltimate(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayUltimateContext* IvionParser::playUltimate() {
  PlayUltimateContext *_localctx = _tracker.createInstance<PlayUltimateContext>(_ctx, getState());
  enterRule(_localctx, 190, IvionParser::RulePlayUltimate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1211);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1153);
      match(IvionParser::Play);
      setState(1154);
      match(IvionParser::Ultimate);
      setState(1158);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::In)
        | (1ULL << IvionParser::That)
        | (1ULL << IvionParser::Of)
        | (1ULL << IvionParser::Near)
        | (1ULL << IvionParser::From)
        | (1ULL << IvionParser::Attached)
        | (1ULL << IvionParser::Targeting))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (IvionParser::With - 65))
        | (1ULL << (IvionParser::Controlled - 65))
        | (1ULL << (IvionParser::This - 65)))) != 0) || _la == IvionParser::At

      || _la == IvionParser::During) {
        setState(1155);
        cardPostfix();
        setState(1160);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1161);
      match(IvionParser::P);
      setState(1162);
      match(IvionParser::This);
      setState(1163);
      match(IvionParser::Doesnt);
      setState(1164);
      match(IvionParser::Count);
      setState(1165);
      match(IvionParser::Towards);
      setState(1166);
      match(IvionParser::Your);
      setState(1167);
      match(IvionParser::Ultimate);
      setState(1168);
      match(IvionParser::Limit);
      setState(1169);
      match(IvionParser::Per);
      setState(1170);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1171);
      match(IvionParser::Play);
      setState(1172);
      match(IvionParser::Ultimate);
      setState(1176);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::In)
        | (1ULL << IvionParser::That)
        | (1ULL << IvionParser::Of)
        | (1ULL << IvionParser::Near)
        | (1ULL << IvionParser::From)
        | (1ULL << IvionParser::Attached)
        | (1ULL << IvionParser::Targeting))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (IvionParser::With - 65))
        | (1ULL << (IvionParser::Controlled - 65))
        | (1ULL << (IvionParser::This - 65)))) != 0) || _la == IvionParser::At

      || _la == IvionParser::During) {
        setState(1173);
        cardPostfix();
        setState(1178);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1179);
      freeFlag();
      setState(1180);
      match(IvionParser::P);
      setState(1181);
      match(IvionParser::This);
      setState(1182);
      match(IvionParser::Doesnt);
      setState(1183);
      match(IvionParser::Count);
      setState(1184);
      match(IvionParser::Towards);
      setState(1185);
      match(IvionParser::Your);
      setState(1186);
      match(IvionParser::Ultimate);
      setState(1187);
      match(IvionParser::Limit);
      setState(1188);
      match(IvionParser::Per);
      setState(1189);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1191);
      match(IvionParser::Play);
      setState(1192);
      match(IvionParser::Ultimate);
      setState(1196);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << IvionParser::In)
        | (1ULL << IvionParser::That)
        | (1ULL << IvionParser::Of)
        | (1ULL << IvionParser::Near)
        | (1ULL << IvionParser::From)
        | (1ULL << IvionParser::Attached)
        | (1ULL << IvionParser::Targeting))) != 0) || ((((_la - 65) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 65)) & ((1ULL << (IvionParser::With - 65))
        | (1ULL << (IvionParser::Controlled - 65))
        | (1ULL << (IvionParser::This - 65)))) != 0) || _la == IvionParser::At

      || _la == IvionParser::During) {
        setState(1193);
        cardPostfix();
        setState(1198);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1199);
      forLessResources();
      setState(1200);
      match(IvionParser::P);
      setState(1201);
      match(IvionParser::This);
      setState(1202);
      match(IvionParser::Doesnt);
      setState(1203);
      match(IvionParser::Count);
      setState(1204);
      match(IvionParser::Towards);
      setState(1205);
      match(IvionParser::Your);
      setState(1206);
      match(IvionParser::Ultimate);
      setState(1207);
      match(IvionParser::Limit);
      setState(1208);
      match(IvionParser::Per);
      setState(1209);
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

IvionParser::CardContext* IvionParser::DiscardCardsContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::PlayerContext* IvionParser::DiscardCardsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 192, IvionParser::RuleDiscardCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1228);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1213);
      match(IvionParser::Discard);
      setState(1214);
      literalValue();
      setState(1215);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1217);
      match(IvionParser::Discard);
      setState(1218);
      card();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1219);
      player();
      setState(1220);
      match(IvionParser::Discard);
      setState(1221);
      literalValue();
      setState(1222);
      card();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1224);
      player();
      setState(1225);
      match(IvionParser::Discard);
      setState(1226);
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
  enterRule(_localctx, 194, IvionParser::RuleGainsHeroic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1230);
    match(IvionParser::That);
    setState(1231);
    match(IvionParser::Card);
    setState(1232);
    match(IvionParser::Gains);
    setState(1233);
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

IvionParser::ValueContext* IvionParser::HealPlayerContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 196, IvionParser::RuleHealPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1247);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1235);
      match(IvionParser::Heal);
      setState(1236);
      player();
      setState(1237);
      literalValue();
      setState(1238);
      match(IvionParser::HP);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1240);
      match(IvionParser::Heal);
      setState(1241);
      player();
      setState(1242);
      match(IvionParser::HP);
      setState(1243);
      match(IvionParser::Equal);
      setState(1244);
      match(IvionParser::To);
      setState(1245);
      value();
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
  enterRule(_localctx, 198, IvionParser::RuleStunPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1249);
    match(IvionParser::Stun);
    setState(1250);
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

tree::TerminalNode* IvionParser::RevealCardsContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
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
  enterRule(_localctx, 200, IvionParser::RuleRevealCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1314);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1252);
      player();
      setState(1253);
      match(IvionParser::Reveal);
      setState(1254);
      literalValue();
      setState(1255);
      match(IvionParser::Card);
      setState(1256);
      match(IvionParser::From);
      setState(1257);
      match(IvionParser::Their);
      setState(1258);
      match(IvionParser::Hand);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1260);
      player();
      setState(1261);
      match(IvionParser::Reveal);
      setState(1262);
      literalValue();
      setState(1263);
      match(IvionParser::Card);
      setState(1264);
      match(IvionParser::From);
      setState(1265);
      match(IvionParser::Their);
      setState(1266);
      match(IvionParser::Hand);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1268);
      player();
      setState(1269);
      match(IvionParser::Reveal);
      setState(1270);
      match(IvionParser::A);
      setState(1271);
      match(IvionParser::Card);
      setState(1272);
      match(IvionParser::From);
      setState(1273);
      match(IvionParser::Their);
      setState(1274);
      match(IvionParser::Hand);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1276);
      player();
      setState(1277);
      match(IvionParser::Reveal);
      setState(1278);
      match(IvionParser::A);
      setState(1279);
      match(IvionParser::Card);
      setState(1280);
      match(IvionParser::From);
      setState(1281);
      match(IvionParser::Their);
      setState(1282);
      match(IvionParser::Hand);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1284);
      player();
      setState(1285);
      match(IvionParser::Reveal);
      setState(1286);
      literalValue();
      setState(1287);
      match(IvionParser::Card);
      setState(1288);
      match(IvionParser::From);
      setState(1289);
      match(IvionParser::Their);
      setState(1290);
      match(IvionParser::Hand);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1292);
      player();
      setState(1293);
      match(IvionParser::Reveal);
      setState(1294);
      match(IvionParser::A);
      setState(1295);
      match(IvionParser::Card);
      setState(1296);
      match(IvionParser::From);
      setState(1297);
      match(IvionParser::Their);
      setState(1298);
      match(IvionParser::Hand);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1300);
      match(IvionParser::Reveal);
      setState(1301);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1302);
      match(IvionParser::Reveal);
      setState(1303);
      match(IvionParser::A);
      setState(1304);
      match(IvionParser::Card);
      setState(1305);
      match(IvionParser::From);
      setState(1306);
      match(IvionParser::Your);
      setState(1307);
      match(IvionParser::Hand);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1308);
      match(IvionParser::Reveal);
      setState(1309);
      match(IvionParser::A);
      setState(1310);
      match(IvionParser::Card);
      setState(1311);
      match(IvionParser::From);
      setState(1312);
      match(IvionParser::Their);
      setState(1313);
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
  enterRule(_localctx, 202, IvionParser::RuleDrawCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1342);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1316);
      match(IvionParser::Draw);
      setState(1317);
      match(IvionParser::A);
      setState(1318);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1319);
      match(IvionParser::Draw);
      setState(1320);
      literalValue();
      setState(1321);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1323);
      match(IvionParser::Draw);
      setState(1324);
      match(IvionParser::A);
      setState(1325);
      match(IvionParser::Additional);
      setState(1326);
      match(IvionParser::Card);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1327);
      player();
      setState(1328);
      match(IvionParser::Draw);
      setState(1329);
      literalValue();
      setState(1330);
      match(IvionParser::Card);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1332);
      player();
      setState(1333);
      match(IvionParser::Draw);
      setState(1334);
      literalValue();
      setState(1335);
      match(IvionParser::Card);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1337);
      player();
      setState(1338);
      match(IvionParser::Draw);
      setState(1339);
      match(IvionParser::A);
      setState(1340);
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
  enterRule(_localctx, 204, IvionParser::RuleRemoveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1366);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1344);
      match(IvionParser::Remove);
      setState(1345);
      match(IvionParser::Up);
      setState(1346);
      match(IvionParser::To);
      setState(1347);
      literalValue();
      setState(1348);
      match(IvionParser::Instances);
      setState(1349);
      match(IvionParser::Of);
      setState(1350);
      match(IvionParser::Control);
      setState(1351);
      match(IvionParser::From);
      setState(1352);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1354);
      match(IvionParser::Remove);
      setState(1355);
      match(IvionParser::All);
      setState(1356);
      match(IvionParser::Control);
      setState(1357);
      match(IvionParser::Affecting);
      setState(1358);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1359);
      match(IvionParser::Remove);
      setState(1360);
      match(IvionParser::A);
      setState(1361);
      match(IvionParser::Instance);
      setState(1362);
      match(IvionParser::Of);
      setState(1363);
      match(IvionParser::Control);
      setState(1364);
      match(IvionParser::From);
      setState(1365);
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
  enterRule(_localctx, 206, IvionParser::RuleHardcastEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1368);
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
  enterRule(_localctx, 208, IvionParser::RuleSeekEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1370);
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
  enterRule(_localctx, 210, IvionParser::RuleMakeTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1372);
    match(IvionParser::Make);
    setState(1373);
    tile();
    setState(1374);
    match(IvionParser::Difficult);
    setState(1375);
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
  enterRule(_localctx, 212, IvionParser::RuleRemoveTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1377);
    match(IvionParser::Remove);
    setState(1378);
    match(IvionParser::Target);
    setState(1379);
    match(IvionParser::Terrain);
    setState(1380);
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
  enterRule(_localctx, 214, IvionParser::RuleSpendResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1382);
    match(IvionParser::Spend);
    setState(1383);
    literalValue();
    setState(1384);
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
  enterRule(_localctx, 216, IvionParser::RuleScryEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1386);
    match(IvionParser::Look);
    setState(1387);
    match(IvionParser::At);
    setState(1388);
    match(IvionParser::The);
    setState(1389);
    match(IvionParser::Top);
    setState(1390);
    literalValue();
    setState(1391);
    match(IvionParser::Card);
    setState(1392);
    match(IvionParser::Of);
    setState(1393);
    match(IvionParser::Your);
    setState(1394);
    match(IvionParser::Deck);
    setState(1395);
    match(IvionParser::P);
    setState(1396);
    match(IvionParser::Put);
    setState(1397);
    match(IvionParser::Any);
    setState(1398);
    match(IvionParser::Number);
    setState(1399);
    match(IvionParser::On);
    setState(1400);
    match(IvionParser::The);
    setState(1401);
    match(IvionParser::Bottom);
    setState(1402);
    match(IvionParser::And);
    setState(1403);
    match(IvionParser::The);
    setState(1404);
    match(IvionParser::Rest);
    setState(1405);
    match(IvionParser::On);
    setState(1406);
    match(IvionParser::Top);
    setState(1407);
    match(IvionParser::In);
    setState(1408);
    match(IvionParser::Any);
    setState(1409);
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

std::vector<tree::TerminalNode *> IvionParser::OverrideFrenzyContext::Have() {
  return getTokens(IvionParser::Have);
}

tree::TerminalNode* IvionParser::OverrideFrenzyContext::Have(size_t i) {
  return getToken(IvionParser::Have, i);
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
  enterRule(_localctx, 218, IvionParser::RuleOverrideFrenzy);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1411);
    match(IvionParser::That);
    setState(1412);
    match(IvionParser::Card);
    setState(1413);
    match(IvionParser::Have);
    setState(1414);
    match(IvionParser::Frenzy);
    setState(1415);
    match(IvionParser::Even);
    setState(1416);
    match(IvionParser::If);
    setState(1417);
    match(IvionParser::No);
    setState(1418);
    match(IvionParser::Player);
    setState(1419);
    match(IvionParser::Have);
    setState(1420);
    match(IvionParser::Used);
    setState(1421);
    match(IvionParser::Their);
    setState(1422);
    match(IvionParser::Second);
    setState(1423);
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
  enterRule(_localctx, 220, IvionParser::RuleIncreaseCardDuration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1425);
    match(IvionParser::Increase);
    setState(1426);
    match(IvionParser::The);
    setState(1427);
    match(IvionParser::Duration);
    setState(1428);
    match(IvionParser::Of);
    setState(1429);
    match(IvionParser::A);
    setState(1430);
    match(IvionParser::Card);
    setState(1431);
    match(IvionParser::You);
    setState(1432);
    match(IvionParser::Control);
    setState(1433);
    match(IvionParser::By);
    setState(1434);
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
  enterRule(_localctx, 222, IvionParser::RuleResetUseOfCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1436);
    match(IvionParser::Reset);
    setState(1437);
    match(IvionParser::The);
    setState(1438);
    match(IvionParser::Use);
    setState(1439);
    match(IvionParser::Of);
    setState(1440);
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
  enterRule(_localctx, 224, IvionParser::RuleHeroic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1442);
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

IvionParser::ConditionContext* IvionParser::OnlyPlayCertainCardsContext::condition() {
  return getRuleContext<IvionParser::ConditionContext>(0);
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
  enterRule(_localctx, 226, IvionParser::RuleOnlyPlayCertainCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1457);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target:
      case IvionParser::Enemy:
      case IvionParser::Them:
      case IvionParser::That:
      case IvionParser::Yourself:
      case IvionParser::The:
      case IvionParser::A:
      case IvionParser::Your:
      case IvionParser::Each:
      case IvionParser::Another:
      case IvionParser::Player:
      case IvionParser::You:
      case IvionParser::Up:
      case IvionParser::They:
      case IvionParser::All:
      case IvionParser::Their:
      case IvionParser::Its:
      case IvionParser::Controlled:
      case IvionParser::Uncontrolled:
      case IvionParser::Any:
      case IvionParser::Ally:
      case IvionParser::Once:
      case IvionParser::Twice:
      case IvionParser::Integer:
      case IvionParser::One:
      case IvionParser::Two:
      case IvionParser::Three:
      case IvionParser::It: {
        enterOuterAlt(_localctx, 1);
        setState(1444);
        hypotheticalPlayer();
        setState(1445);
        match(IvionParser::May);
        setState(1446);
        match(IvionParser::Only);
        setState(1447);
        match(IvionParser::Play);
        setState(1448);
        match(IvionParser::Card);
        setState(1449);
        match(IvionParser::Named);
        setState(1450);
        match(IvionParser::CARD_NAME);
        break;
      }

      case IvionParser::Only: {
        enterOuterAlt(_localctx, 2);
        setState(1452);
        match(IvionParser::Only);
        setState(1453);
        match(IvionParser::Play);
        setState(1454);
        match(IvionParser::CARD_NAME);
        setState(1455);
        match(IvionParser::If);
        setState(1456);
        condition();
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
  enterRule(_localctx, 228, IvionParser::RuleCostReduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1481);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1459);
      hypotheticalCard();
      setState(1460);
      hypotheticalPlayer();
      setState(1461);
      match(IvionParser::Play);
      setState(1462);
      match(IvionParser::Cost);
      setState(1463);
      literalValue();
      setState(1464);
      match(IvionParser::Less);
      setState(1465);
      match(IvionParser::Resource);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1467);
      match(IvionParser::The);
      setState(1468);
      match(IvionParser::Second);
      setState(1469);
      match(IvionParser::Attack);
      setState(1470);
      match(IvionParser::Card);
      setState(1471);
      hypotheticalPlayer();
      setState(1472);
      match(IvionParser::Play);
      setState(1473);
      match(IvionParser::During);
      setState(1474);
      match(IvionParser::Your);
      setState(1475);
      match(IvionParser::Turn);
      setState(1476);
      match(IvionParser::Cost);
      setState(1477);
      literalValue();
      setState(1478);
      match(IvionParser::Less);
      setState(1479);
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
  enterRule(_localctx, 230, IvionParser::RuleRangeSet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1483);
    match(IvionParser::The);
    setState(1484);
    match(IvionParser::Range);
    setState(1485);
    match(IvionParser::Of);
    setState(1486);
    match(IvionParser::Your);
    setState(1487);
    match(IvionParser::Attack);
    setState(1488);
    match(IvionParser::Card);
    setState(1489);
    match(IvionParser::Is);
    setState(1490);
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
  enterRule(_localctx, 232, IvionParser::RuleCantPlayCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1492);
    hypotheticalPlayer();
    setState(1493);
    match(IvionParser::Cant);
    setState(1494);
    match(IvionParser::Play);
    setState(1495);
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
  enterRule(_localctx, 234, IvionParser::RulePlayerCantBeTargeted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1511);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1497);
      hypotheticalPlayer();
      setState(1498);
      match(IvionParser::Cant);
      setState(1499);
      match(IvionParser::Be);
      setState(1500);
      match(IvionParser::Targeted);
      setState(1501);
      match(IvionParser::By);
      setState(1502);
      match(IvionParser::Enemies);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1504);
      hypotheticalPlayer();
      setState(1505);
      match(IvionParser::Cant);
      setState(1506);
      match(IvionParser::Be);
      setState(1507);
      match(IvionParser::Targeted);
      setState(1508);
      match(IvionParser::By);
      setState(1509);
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
  enterRule(_localctx, 236, IvionParser::RuleIncreasedHandSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1513);
    match(IvionParser::Your);
    setState(1514);
    match(IvionParser::Maximum);
    setState(1515);
    match(IvionParser::Hand);
    setState(1516);
    match(IvionParser::Size);
    setState(1517);
    match(IvionParser::Is);
    setState(1518);
    match(IvionParser::Increased);
    setState(1519);
    match(IvionParser::By);
    setState(1520);
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
  enterRule(_localctx, 238, IvionParser::RuleIncreasedMaxHP);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1522);
    match(IvionParser::Your);
    setState(1523);
    match(IvionParser::Maximum);
    setState(1524);
    match(IvionParser::HP);
    setState(1525);
    match(IvionParser::Is);
    setState(1526);
    match(IvionParser::Increased);
    setState(1527);
    match(IvionParser::By);
    setState(1528);
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
  enterRule(_localctx, 240, IvionParser::RuleReplacesSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1530);
    match(IvionParser::CARD_NAME);
    setState(1531);
    match(IvionParser::Replaces);
    setState(1532);
    match(IvionParser::Your);
    setState(1533);
    match(IvionParser::Second);
    setState(1534);
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
  enterRule(_localctx, 242, IvionParser::RuleNoInitiative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1536);
    hypotheticalPlayer();
    setState(1537);
    match(IvionParser::Dont);
    setState(1538);
    match(IvionParser::Gain);
    setState(1539);
    match(IvionParser::INITIATIVE);
    setState(1540);
    match(IvionParser::At);
    setState(1541);
    match(IvionParser::The);
    setState(1542);
    match(IvionParser::Start);
    setState(1543);
    match(IvionParser::Of);
    setState(1544);
    match(IvionParser::Your);
    setState(1545);
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

IvionParser::HypotheticalCardContext* IvionParser::DrawRangeContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
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
  enterRule(_localctx, 244, IvionParser::RuleDrawRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1585);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1547);
      match(IvionParser::All);
      setState(1548);
      match(IvionParser::Of);
      setState(1549);
      hypotheticalPlayer();
      setState(1550);
      match(IvionParser::Card);
      setState(1551);
      match(IvionParser::C);
      setState(1552);
      match(IvionParser::Except);
      setState(1553);
      match(IvionParser::Travel);
      setState(1554);
      match(IvionParser::Card);
      setState(1555);
      match(IvionParser::That);
      setState(1556);
      match(IvionParser::Target);
      setState(1557);
      match(IvionParser::A);
      setState(1558);
      match(IvionParser::Tile);
      setState(1559);
      match(IvionParser::C);
      setState(1560);
      match(IvionParser::Also);
      setState(1561);
      match(IvionParser::Draw);
      setState(1562);
      match(IvionParser::Range);
      setState(1563);
      match(IvionParser::From);
      setState(1564);
      hypotheticalCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1566);
      match(IvionParser::All);
      setState(1567);
      match(IvionParser::Of);
      setState(1568);
      hypotheticalPlayer();
      setState(1569);
      match(IvionParser::Card);
      setState(1570);
      match(IvionParser::C);
      setState(1571);
      match(IvionParser::Except);
      setState(1572);
      match(IvionParser::Travel);
      setState(1573);
      match(IvionParser::Card);
      setState(1574);
      match(IvionParser::That);
      setState(1575);
      match(IvionParser::Target);
      setState(1576);
      match(IvionParser::A);
      setState(1577);
      match(IvionParser::Tile);
      setState(1578);
      match(IvionParser::C);
      setState(1579);
      match(IvionParser::Also);
      setState(1580);
      match(IvionParser::Draw);
      setState(1581);
      match(IvionParser::Range);
      setState(1582);
      match(IvionParser::From);
      setState(1583);
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
  enterRule(_localctx, 246, IvionParser::RuleGainRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1587);
    match(IvionParser::All);
    setState(1588);
    match(IvionParser::Of);
    setState(1589);
    hypotheticalPlayer();
    setState(1590);
    match(IvionParser::Card);
    setState(1591);
    match(IvionParser::C);
    setState(1592);
    match(IvionParser::Except);
    setState(1593);
    match(IvionParser::Travel);
    setState(1594);
    match(IvionParser::Card);
    setState(1595);
    match(IvionParser::That);
    setState(1596);
    match(IvionParser::Target);
    setState(1597);
    match(IvionParser::A);
    setState(1598);
    match(IvionParser::Tile);
    setState(1599);
    match(IvionParser::C);
    setState(1600);
    match(IvionParser::Gain);
    setState(1601);
    literalValue();
    setState(1602);
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

tree::TerminalNode* IvionParser::LimitTargetsContext::If() {
  return getToken(IvionParser::If, 0);
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
  enterRule(_localctx, 248, IvionParser::RuleLimitTargets);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1604);
    match(IvionParser::Only);
    setState(1605);
    match(IvionParser::Target);
    setState(1606);
    match(IvionParser::Other);
    setState(1607);
    hypotheticalPlayer();
    setState(1608);
    match(IvionParser::If);
    setState(1609);
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
  enterRule(_localctx, 250, IvionParser::RulePassiveEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1623);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1611);
      playerCantBeTargeted();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1612);
      cantPlayCards();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1613);
      rangeSet();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1614);
      costReduction();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1615);
      onlyPlayCertainCards();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1616);
      increasedHandSize();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1617);
      increasedMaxHP();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1618);
      replacesSecondWind();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1619);
      noInitiative();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1620);
      drawRange();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1621);
      gainRange();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1622);
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
  enterRule(_localctx, 252, IvionParser::RuleDurationEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1625);
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
  enterRule(_localctx, 254, IvionParser::RuleStartOfPlayerTurn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1639);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 83, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1627);
      match(IvionParser::The);
      setState(1628);
      match(IvionParser::Start);
      setState(1629);
      match(IvionParser::Of);
      setState(1630);
      hypotheticalPlayer();
      setState(1631);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1633);
      match(IvionParser::The);
      setState(1634);
      match(IvionParser::Start);
      setState(1635);
      match(IvionParser::Of);
      setState(1636);
      hypotheticalPlayer();
      setState(1637);
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
  enterRule(_localctx, 256, IvionParser::RuleEndOfPlayerTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1641);
    match(IvionParser::The);
    setState(1642);
    match(IvionParser::End);
    setState(1643);
    match(IvionParser::Of);
    setState(1644);
    hypotheticalPlayer();
    setState(1645);
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
  enterRule(_localctx, 258, IvionParser::RuleStartOfPlayerNextTurn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1647);
    match(IvionParser::The);
    setState(1648);
    match(IvionParser::Start);
    setState(1649);
    match(IvionParser::Of);
    setState(1650);
    hypotheticalPlayer();
    setState(1651);
    match(IvionParser::Next);
    setState(1652);
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
  enterRule(_localctx, 260, IvionParser::RuleEndOfTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1666);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1654);
      match(IvionParser::The);
      setState(1655);
      match(IvionParser::End);
      setState(1656);
      match(IvionParser::Of);
      setState(1657);
      match(IvionParser::The);
      setState(1658);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1659);
      match(IvionParser::The);
      setState(1660);
      match(IvionParser::End);
      setState(1661);
      match(IvionParser::Of);
      setState(1662);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1663);
      match(IvionParser::End);
      setState(1664);
      match(IvionParser::Of);
      setState(1665);
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
  enterRule(_localctx, 262, IvionParser::RuleTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1672);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1668);
      startOfPlayerTurn();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1669);
      endOfPlayerTurnTrigger();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1670);
      startOfPlayerNextTurn();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1671);
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
  enterRule(_localctx, 264, IvionParser::RuleGameStartTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1674);
    match(IvionParser::At);
    setState(1675);
    match(IvionParser::The);
    setState(1676);
    match(IvionParser::Start);
    setState(1677);
    match(IvionParser::Of);
    setState(1678);
    match(IvionParser::The);
    setState(1679);
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
  enterRule(_localctx, 266, IvionParser::RuleEffectPostfix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1703);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1681);
      match(IvionParser::For);
      setState(1682);
      match(IvionParser::The);
      setState(1683);
      match(IvionParser::First);
      setState(1684);
      match(IvionParser::Time);
      setState(1685);
      match(IvionParser::During);
      setState(1686);
      playerRef();
      setState(1687);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1689);
      match(IvionParser::For);
      setState(1690);
      match(IvionParser::The);
      setState(1691);
      match(IvionParser::First);
      setState(1692);
      match(IvionParser::Time);
      setState(1693);
      match(IvionParser::During);
      setState(1694);
      match(IvionParser::Each);
      setState(1695);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1696);
      match(IvionParser::During);
      setState(1697);
      match(IvionParser::Each);
      setState(1698);
      match(IvionParser::Turn);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1699);
      match(IvionParser::During);
      setState(1700);
      playerRef();
      setState(1701);
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

//----------------- IfPlayerMakesChoiceContext ------------------------------------------------------------------

IvionParser::IfPlayerMakesChoiceContext::IfPlayerMakesChoiceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerRefContext* IvionParser::IfPlayerMakesChoiceContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayerMakesChoiceContext::Do() {
  return getToken(IvionParser::Do, 0);
}

tree::TerminalNode* IvionParser::IfPlayerMakesChoiceContext::Dont() {
  return getToken(IvionParser::Dont, 0);
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
  enterRule(_localctx, 268, IvionParser::RuleIfPlayerMakesChoice);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1711);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1705);
      playerRef();
      setState(1706);
      match(IvionParser::Do);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1708);
      playerRef();
      setState(1709);
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

IvionParser::PlayerRefContext* IvionParser::IfPreviousActionInvalidContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::IfPreviousActionInvalidContext::Cant() {
  return getToken(IvionParser::Cant, 0);
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
  enterRule(_localctx, 270, IvionParser::RuleIfPreviousActionInvalid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1713);
    playerRef();
    setState(1714);
    match(IvionParser::Cant);
   
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

IvionParser::HypotheticalPlayerContext* IvionParser::IfResolvedCardContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::IfResolvedCardContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Have() {
  return getToken(IvionParser::Have, 0);
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
  enterRule(_localctx, 272, IvionParser::RuleIfResolvedCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1716);
    hypotheticalPlayer();
    setState(1718);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Have) {
      setState(1717);
      match(IvionParser::Have);
    }
    setState(1720);
    match(IvionParser::Resolve);
    setState(1721);
    hypotheticalCard();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfPlayedCardContext ------------------------------------------------------------------

IvionParser::IfPlayedCardContext::IfPlayedCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayedCardContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayedCardContext::Play() {
  return getToken(IvionParser::Play, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::IfPlayedCardContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayedCardContext::Have() {
  return getToken(IvionParser::Have, 0);
}


size_t IvionParser::IfPlayedCardContext::getRuleIndex() const {
  return IvionParser::RuleIfPlayedCard;
}


antlrcpp::Any IvionParser::IfPlayedCardContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfPlayedCard(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfPlayedCardContext* IvionParser::ifPlayedCard() {
  IfPlayedCardContext *_localctx = _tracker.createInstance<IfPlayedCardContext>(_ctx, getState());
  enterRule(_localctx, 274, IvionParser::RuleIfPlayedCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1723);
    hypotheticalPlayer();
    setState(1725);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Have) {
      setState(1724);
      match(IvionParser::Have);
    }
    setState(1727);
    match(IvionParser::Play);
    setState(1728);
    hypotheticalCard();
   
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

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Already() {
  return getToken(IvionParser::Already, 0);
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
  enterRule(_localctx, 276, IvionParser::RuleIfUsedSecondWind);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1746);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1730);
      hypotheticalPlayer();
      setState(1732);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Have) {
        setState(1731);
        match(IvionParser::Have);
      }
      setState(1735);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Already) {
        setState(1734);
        match(IvionParser::Already);
      }
      setState(1737);
      match(IvionParser::Used);
      setState(1738);
      playerRef();
      setState(1739);
      match(IvionParser::Second);
      setState(1740);
      match(IvionParser::Wind);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1742);
      hypotheticalPlayer();
      setState(1743);
      match(IvionParser::Second);
      setState(1744);
      match(IvionParser::Wind);
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

//----------------- IfNearContext ------------------------------------------------------------------

IvionParser::IfNearContext::IfNearContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalEntityContext* IvionParser::IfNearContext::hypotheticalEntity() {
  return getRuleContext<IvionParser::HypotheticalEntityContext>(0);
}

tree::TerminalNode* IvionParser::IfNearContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::IfNearContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::IfNearContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

IvionParser::HypotheticalTileContext* IvionParser::IfNearContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}

IvionParser::HypotheticalCardContext* IvionParser::IfNearContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfNearContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
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
  enterRule(_localctx, 278, IvionParser::RuleIfNear);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1768);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 93, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1748);
      hypotheticalEntity();
      setState(1749);
      match(IvionParser::Is);
      setState(1750);
      match(IvionParser::Near);
      setState(1751);
      match(IvionParser::Terrain);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1753);
      hypotheticalEntity();
      setState(1754);
      match(IvionParser::Is);
      setState(1755);
      match(IvionParser::Near);
      setState(1756);
      hypotheticalTile();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1758);
      hypotheticalEntity();
      setState(1759);
      match(IvionParser::Is);
      setState(1760);
      match(IvionParser::Near);
      setState(1761);
      hypotheticalCard();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1763);
      hypotheticalEntity();
      setState(1764);
      match(IvionParser::Is);
      setState(1765);
      match(IvionParser::Near);
      setState(1766);
      hypotheticalPlayer();
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

IvionParser::HypotheticalPlayerContext* IvionParser::IfControlledContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfControlledContext::Is() {
  return getToken(IvionParser::Is, 0);
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
  enterRule(_localctx, 280, IvionParser::RuleIfControlled);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1770);
    hypotheticalPlayer();
    setState(1771);
    match(IvionParser::Is);
    setState(1772);
    match(IvionParser::Controlled);
   
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
  enterRule(_localctx, 282, IvionParser::RuleIfTileHadTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1774);
    previousTile();
    setState(1775);
    match(IvionParser::Already);
    setState(1776);
    match(IvionParser::Had);
    setState(1777);
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

IvionParser::HypotheticalPlayerContext* IvionParser::IfCardRevealedContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Have() {
  return getToken(IvionParser::Have, 0);
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

tree::TerminalNode* IvionParser::IfCardRevealedContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::PlayerRefContext* IvionParser::IfCardRevealedContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::IfCardRevealedContext::Hand() {
  return getToken(IvionParser::Hand, 0);
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
  enterRule(_localctx, 284, IvionParser::RuleIfCardRevealed);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1779);
    hypotheticalPlayer();
    setState(1780);
    match(IvionParser::Have);
    setState(1781);
    match(IvionParser::At);
    setState(1782);
    match(IvionParser::Least);
    setState(1783);
    literalValue();
    setState(1784);
    match(IvionParser::Reveal);
    setState(1785);
    match(IvionParser::Card);
    setState(1786);
    match(IvionParser::In);
    setState(1787);
    playerRef();
    setState(1788);
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

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayerHasMitigateContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::Mitigate() {
  return getToken(IvionParser::Mitigate, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::Gains() {
  return getToken(IvionParser::Gains, 0);
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
  enterRule(_localctx, 286, IvionParser::RuleIfPlayerHasMitigate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1790);
    hypotheticalPlayer();
    setState(1791);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Gains

    || _la == IvionParser::Have)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1792);
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

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayerDidntLeaveTileContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
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
  enterRule(_localctx, 288, IvionParser::RuleIfPlayerDidntLeaveTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1794);
    hypotheticalPlayer();
    setState(1795);
    match(IvionParser::Didnt);
    setState(1796);
    match(IvionParser::Leave);
    setState(1797);
    match(IvionParser::A);
    setState(1798);
    match(IvionParser::Tile);
    setState(1799);
    match(IvionParser::This);
    setState(1800);
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

IvionParser::HypotheticalCardContext* IvionParser::IfCardCostReducedContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
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
  enterRule(_localctx, 290, IvionParser::RuleIfCardCostReduced);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1802);
    hypotheticalCard();
    setState(1803);
    match(IvionParser::Cost);
    setState(1804);
    match(IvionParser::Is);
    setState(1805);
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

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::IfPlayerHasMoreHPContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayerHasMoreHPContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::Have() {
  return getToken(IvionParser::Have, 0);
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
  enterRule(_localctx, 292, IvionParser::RuleIfPlayerHasMoreHP);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1807);
    hypotheticalPlayer();
    setState(1808);
    match(IvionParser::Have);
    setState(1809);
    match(IvionParser::More);
    setState(1810);
    match(IvionParser::HP);
    setState(1811);
    match(IvionParser::Than);
    setState(1812);
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

IvionParser::HypotheticalPlayerContext* IvionParser::IfPlayerHasNoActionsContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::No() {
  return getToken(IvionParser::No, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::Resource() {
  return getToken(IvionParser::Resource, 0);
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
  enterRule(_localctx, 294, IvionParser::RuleIfPlayerHasNoActions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1814);
    hypotheticalPlayer();
    setState(1815);
    match(IvionParser::Have);
    setState(1816);
    match(IvionParser::No);
    setState(1817);
    match(IvionParser::Resource);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfInTerrainContext ------------------------------------------------------------------

IvionParser::IfInTerrainContext::IfInTerrainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalEntityContext* IvionParser::IfInTerrainContext::hypotheticalEntity() {
  return getRuleContext<IvionParser::HypotheticalEntityContext>(0);
}

tree::TerminalNode* IvionParser::IfInTerrainContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::IfInTerrainContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::IfInTerrainContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}


size_t IvionParser::IfInTerrainContext::getRuleIndex() const {
  return IvionParser::RuleIfInTerrain;
}


antlrcpp::Any IvionParser::IfInTerrainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitIfInTerrain(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::IfInTerrainContext* IvionParser::ifInTerrain() {
  IfInTerrainContext *_localctx = _tracker.createInstance<IfInTerrainContext>(_ctx, getState());
  enterRule(_localctx, 296, IvionParser::RuleIfInTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1819);
    hypotheticalEntity();
    setState(1820);
    match(IvionParser::Is);
    setState(1821);
    match(IvionParser::In);
    setState(1822);
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
  enterRule(_localctx, 298, IvionParser::RuleCounterCardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1824);
    hypotheticalCard();
    setState(1825);
    match(IvionParser::Is);
    setState(1826);
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

tree::TerminalNode* IvionParser::StunPlayerConditionContext::In() {
  return getToken(IvionParser::In, 0);
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
  enterRule(_localctx, 300, IvionParser::RuleStunPlayerCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1828);
    match(IvionParser::A);
    setState(1829);
    match(IvionParser::Resource);
    setState(1830);
    match(IvionParser::Is);
    setState(1831);
    match(IvionParser::Removed);
    setState(1833);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::In) {
      setState(1832);
      match(IvionParser::In);
    }
    setState(1835);
    match(IvionParser::This);
    setState(1836);
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

IvionParser::HypotheticalCardContext* IvionParser::RevealCardsConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Way() {
  return getToken(IvionParser::Way, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::In() {
  return getToken(IvionParser::In, 0);
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
  enterRule(_localctx, 302, IvionParser::RuleRevealCardsCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1838);
    hypotheticalCard();
    setState(1839);
    match(IvionParser::Is);
    setState(1840);
    match(IvionParser::Reveal);
    setState(1842);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::In) {
      setState(1841);
      match(IvionParser::In);
    }
    setState(1844);
    match(IvionParser::This);
    setState(1845);
    match(IvionParser::Way);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerControlledConditionContext ------------------------------------------------------------------

IvionParser::PlayerControlledConditionContext::PlayerControlledConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerControlledConditionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerControlledConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::PlayerControlledConditionContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}


size_t IvionParser::PlayerControlledConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerControlledCondition;
}


antlrcpp::Any IvionParser::PlayerControlledConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerControlledCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerControlledConditionContext* IvionParser::playerControlledCondition() {
  PlayerControlledConditionContext *_localctx = _tracker.createInstance<PlayerControlledConditionContext>(_ctx, getState());
  enterRule(_localctx, 304, IvionParser::RulePlayerControlledCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1847);
    hypotheticalPlayer();
    setState(1848);
    match(IvionParser::Is);
    setState(1849);
    match(IvionParser::Controlled);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerUncontrolledConditionContext ------------------------------------------------------------------

IvionParser::PlayerUncontrolledConditionContext::PlayerUncontrolledConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerUncontrolledConditionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerUncontrolledConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::PlayerUncontrolledConditionContext::Uncontrolled() {
  return getToken(IvionParser::Uncontrolled, 0);
}


size_t IvionParser::PlayerUncontrolledConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerUncontrolledCondition;
}


antlrcpp::Any IvionParser::PlayerUncontrolledConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerUncontrolledCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerUncontrolledConditionContext* IvionParser::playerUncontrolledCondition() {
  PlayerUncontrolledConditionContext *_localctx = _tracker.createInstance<PlayerUncontrolledConditionContext>(_ctx, getState());
  enterRule(_localctx, 306, IvionParser::RulePlayerUncontrolledCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1851);
    hypotheticalPlayer();
    setState(1852);
    match(IvionParser::Is);
    setState(1853);
    match(IvionParser::Uncontrolled);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerHasCardsInDiscardConditionContext ------------------------------------------------------------------

IvionParser::PlayerHasCardsInDiscardConditionContext::PlayerHasCardsInDiscardConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerHasCardsInDiscardConditionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerHasCardsInDiscardConditionContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::PlayerHasCardsInDiscardConditionContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::PlayerHasCardsInDiscardConditionContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::LiteralValueContext* IvionParser::PlayerHasCardsInDiscardConditionContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::PlayerHasCardsInDiscardConditionContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::PlayerHasCardsInDiscardConditionContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::PlayerRefContext* IvionParser::PlayerHasCardsInDiscardConditionContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::PlayerHasCardsInDiscardConditionContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}


size_t IvionParser::PlayerHasCardsInDiscardConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerHasCardsInDiscardCondition;
}


antlrcpp::Any IvionParser::PlayerHasCardsInDiscardConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerHasCardsInDiscardCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerHasCardsInDiscardConditionContext* IvionParser::playerHasCardsInDiscardCondition() {
  PlayerHasCardsInDiscardConditionContext *_localctx = _tracker.createInstance<PlayerHasCardsInDiscardConditionContext>(_ctx, getState());
  enterRule(_localctx, 308, IvionParser::RulePlayerHasCardsInDiscardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1855);
    hypotheticalPlayer();
    setState(1856);
    match(IvionParser::Have);
    setState(1857);
    match(IvionParser::At);
    setState(1858);
    match(IvionParser::Least);
    setState(1859);
    literalValue();
    setState(1860);
    match(IvionParser::Card);
    setState(1861);
    match(IvionParser::In);
    setState(1862);
    playerRef();
    setState(1863);
    match(IvionParser::Discard);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerHasTakenDamageConditionContext ------------------------------------------------------------------

IvionParser::PlayerHasTakenDamageConditionContext::PlayerHasTakenDamageConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerHasTakenDamageConditionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerHasTakenDamageConditionContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::PlayerHasTakenDamageConditionContext::Taken() {
  return getToken(IvionParser::Taken, 0);
}

IvionParser::LiteralValueContext* IvionParser::PlayerHasTakenDamageConditionContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::PlayerHasTakenDamageConditionContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::PlayerHasTakenDamageConditionContext::More() {
  return getToken(IvionParser::More, 0);
}

tree::TerminalNode* IvionParser::PlayerHasTakenDamageConditionContext::Damage() {
  return getToken(IvionParser::Damage, 0);
}

tree::TerminalNode* IvionParser::PlayerHasTakenDamageConditionContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::PlayerHasTakenDamageConditionContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}


size_t IvionParser::PlayerHasTakenDamageConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerHasTakenDamageCondition;
}


antlrcpp::Any IvionParser::PlayerHasTakenDamageConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerHasTakenDamageCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerHasTakenDamageConditionContext* IvionParser::playerHasTakenDamageCondition() {
  PlayerHasTakenDamageConditionContext *_localctx = _tracker.createInstance<PlayerHasTakenDamageConditionContext>(_ctx, getState());
  enterRule(_localctx, 310, IvionParser::RulePlayerHasTakenDamageCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1865);
    hypotheticalPlayer();
    setState(1866);
    match(IvionParser::Have);
    setState(1867);
    match(IvionParser::Taken);
    setState(1868);
    literalValue();
    setState(1869);
    match(IvionParser::Or);
    setState(1870);
    match(IvionParser::More);
    setState(1871);
    match(IvionParser::Damage);
    setState(1872);
    match(IvionParser::This);
    setState(1873);
    match(IvionParser::Turn);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardResolvedConditionContext ------------------------------------------------------------------

IvionParser::CardResolvedConditionContext::CardResolvedConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalCardContext* IvionParser::CardResolvedConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::CardResolvedConditionContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}


size_t IvionParser::CardResolvedConditionContext::getRuleIndex() const {
  return IvionParser::RuleCardResolvedCondition;
}


antlrcpp::Any IvionParser::CardResolvedConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardResolvedCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardResolvedConditionContext* IvionParser::cardResolvedCondition() {
  CardResolvedConditionContext *_localctx = _tracker.createInstance<CardResolvedConditionContext>(_ctx, getState());
  enterRule(_localctx, 312, IvionParser::RuleCardResolvedCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1875);
    hypotheticalCard();
    setState(1876);
    match(IvionParser::Resolve);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerDrewCardConditionContext ------------------------------------------------------------------

IvionParser::PlayerDrewCardConditionContext::PlayerDrewCardConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerDrewCardConditionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerDrewCardConditionContext::Draw() {
  return getToken(IvionParser::Draw, 0);
}

tree::TerminalNode* IvionParser::PlayerDrewCardConditionContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::PlayerDrewCardConditionContext::Card() {
  return getToken(IvionParser::Card, 0);
}


size_t IvionParser::PlayerDrewCardConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerDrewCardCondition;
}


antlrcpp::Any IvionParser::PlayerDrewCardConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerDrewCardCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerDrewCardConditionContext* IvionParser::playerDrewCardCondition() {
  PlayerDrewCardConditionContext *_localctx = _tracker.createInstance<PlayerDrewCardConditionContext>(_ctx, getState());
  enterRule(_localctx, 314, IvionParser::RulePlayerDrewCardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1878);
    hypotheticalPlayer();
    setState(1879);
    match(IvionParser::Draw);
    setState(1880);
    match(IvionParser::A);
    setState(1881);
    match(IvionParser::Card);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerMadeTerrainConditionContext ------------------------------------------------------------------

IvionParser::PlayerMadeTerrainConditionContext::PlayerMadeTerrainConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerMadeTerrainConditionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerMadeTerrainConditionContext::Make() {
  return getToken(IvionParser::Make, 0);
}

tree::TerminalNode* IvionParser::PlayerMadeTerrainConditionContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::PlayerMadeTerrainConditionContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::HypotheticalTileContext* IvionParser::PlayerMadeTerrainConditionContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}


size_t IvionParser::PlayerMadeTerrainConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerMadeTerrainCondition;
}


antlrcpp::Any IvionParser::PlayerMadeTerrainConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerMadeTerrainCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerMadeTerrainConditionContext* IvionParser::playerMadeTerrainCondition() {
  PlayerMadeTerrainConditionContext *_localctx = _tracker.createInstance<PlayerMadeTerrainConditionContext>(_ctx, getState());
  enterRule(_localctx, 316, IvionParser::RulePlayerMadeTerrainCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1883);
    hypotheticalPlayer();
    setState(1884);
    match(IvionParser::Make);
    setState(1885);
    match(IvionParser::Terrain);
    setState(1886);
    match(IvionParser::In);
    setState(1887);
    hypotheticalTile();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerEntersSpaceConditionContext ------------------------------------------------------------------

IvionParser::PlayerEntersSpaceConditionContext::PlayerEntersSpaceConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::PlayerEntersSpaceConditionContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerEntersSpaceConditionContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::PlayerEntersSpaceConditionContext::Enters() {
  return getToken(IvionParser::Enters, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::PlayerEntersSpaceConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

IvionParser::HypotheticalTileContext* IvionParser::PlayerEntersSpaceConditionContext::hypotheticalTile() {
  return getRuleContext<IvionParser::HypotheticalTileContext>(0);
}

std::vector<tree::TerminalNode *> IvionParser::PlayerEntersSpaceConditionContext::Or() {
  return getTokens(IvionParser::Or);
}

tree::TerminalNode* IvionParser::PlayerEntersSpaceConditionContext::Or(size_t i) {
  return getToken(IvionParser::Or, i);
}


size_t IvionParser::PlayerEntersSpaceConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerEntersSpaceCondition;
}


antlrcpp::Any IvionParser::PlayerEntersSpaceConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerEntersSpaceCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerEntersSpaceConditionContext* IvionParser::playerEntersSpaceCondition() {
  PlayerEntersSpaceConditionContext *_localctx = _tracker.createInstance<PlayerEntersSpaceConditionContext>(_ctx, getState());
  enterRule(_localctx, 318, IvionParser::RulePlayerEntersSpaceCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1889);
    hypotheticalPlayer();
    setState(1894);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IvionParser::Or) {
      setState(1890);
      match(IvionParser::Or);
      setState(1891);
      hypotheticalPlayer();
      setState(1896);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1897);
    match(IvionParser::Enters);
    setState(1900);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      setState(1898);
      hypotheticalCard();
      break;
    }

    case 2: {
      setState(1899);
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

//----------------- PlayerAttachesCardConditionContext ------------------------------------------------------------------

IvionParser::PlayerAttachesCardConditionContext::PlayerAttachesCardConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::PlayerAttachesCardConditionContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerAttachesCardConditionContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::PlayerAttachesCardConditionContext::Attach() {
  return getToken(IvionParser::Attach, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::PlayerAttachesCardConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::PlayerAttachesCardConditionContext::To() {
  return getToken(IvionParser::To, 0);
}


size_t IvionParser::PlayerAttachesCardConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerAttachesCardCondition;
}


antlrcpp::Any IvionParser::PlayerAttachesCardConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerAttachesCardCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerAttachesCardConditionContext* IvionParser::playerAttachesCardCondition() {
  PlayerAttachesCardConditionContext *_localctx = _tracker.createInstance<PlayerAttachesCardConditionContext>(_ctx, getState());
  enterRule(_localctx, 320, IvionParser::RulePlayerAttachesCardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1902);
    hypotheticalPlayer();
    setState(1903);
    match(IvionParser::Attach);
    setState(1904);
    hypotheticalCard();
    setState(1905);
    match(IvionParser::To);
    setState(1906);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardIsRevealedConditionContext ------------------------------------------------------------------

IvionParser::CardIsRevealedConditionContext::CardIsRevealedConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalCardContext* IvionParser::CardIsRevealedConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::CardIsRevealedConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::CardIsRevealedConditionContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
}


size_t IvionParser::CardIsRevealedConditionContext::getRuleIndex() const {
  return IvionParser::RuleCardIsRevealedCondition;
}


antlrcpp::Any IvionParser::CardIsRevealedConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardIsRevealedCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardIsRevealedConditionContext* IvionParser::cardIsRevealedCondition() {
  CardIsRevealedConditionContext *_localctx = _tracker.createInstance<CardIsRevealedConditionContext>(_ctx, getState());
  enterRule(_localctx, 322, IvionParser::RuleCardIsRevealedCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1908);
    hypotheticalCard();
    setState(1909);
    match(IvionParser::Is);
    setState(1910);
    match(IvionParser::Reveal);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerStunsPlayerConditionContext ------------------------------------------------------------------

IvionParser::PlayerStunsPlayerConditionContext::PlayerStunsPlayerConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::PlayerStunsPlayerConditionContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerStunsPlayerConditionContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::PlayerStunsPlayerConditionContext::Stun() {
  return getToken(IvionParser::Stun, 0);
}


size_t IvionParser::PlayerStunsPlayerConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerStunsPlayerCondition;
}


antlrcpp::Any IvionParser::PlayerStunsPlayerConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerStunsPlayerCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerStunsPlayerConditionContext* IvionParser::playerStunsPlayerCondition() {
  PlayerStunsPlayerConditionContext *_localctx = _tracker.createInstance<PlayerStunsPlayerConditionContext>(_ctx, getState());
  enterRule(_localctx, 324, IvionParser::RulePlayerStunsPlayerCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1912);
    hypotheticalPlayer();
    setState(1913);
    match(IvionParser::Stun);
    setState(1914);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardSentToDiscardConditionContext ------------------------------------------------------------------

IvionParser::CardSentToDiscardConditionContext::CardSentToDiscardConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalCardContext* IvionParser::CardSentToDiscardConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::CardSentToDiscardConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::CardSentToDiscardConditionContext::Sent() {
  return getToken(IvionParser::Sent, 0);
}

tree::TerminalNode* IvionParser::CardSentToDiscardConditionContext::To() {
  return getToken(IvionParser::To, 0);
}

tree::TerminalNode* IvionParser::CardSentToDiscardConditionContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::CardSentToDiscardConditionContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}


size_t IvionParser::CardSentToDiscardConditionContext::getRuleIndex() const {
  return IvionParser::RuleCardSentToDiscardCondition;
}


antlrcpp::Any IvionParser::CardSentToDiscardConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardSentToDiscardCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardSentToDiscardConditionContext* IvionParser::cardSentToDiscardCondition() {
  CardSentToDiscardConditionContext *_localctx = _tracker.createInstance<CardSentToDiscardConditionContext>(_ctx, getState());
  enterRule(_localctx, 326, IvionParser::RuleCardSentToDiscardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1916);
    hypotheticalCard();
    setState(1917);
    match(IvionParser::Is);
    setState(1918);
    match(IvionParser::Sent);
    setState(1919);
    match(IvionParser::To);
    setState(1920);
    match(IvionParser::Your);
    setState(1921);
    match(IvionParser::Discard);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CardFailsToResolveConditionContext ------------------------------------------------------------------

IvionParser::CardFailsToResolveConditionContext::CardFailsToResolveConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalCardContext* IvionParser::CardFailsToResolveConditionContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

IvionParser::HypotheticalPlayerContext* IvionParser::CardFailsToResolveConditionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::CardFailsToResolveConditionContext::Play() {
  return getToken(IvionParser::Play, 0);
}

tree::TerminalNode* IvionParser::CardFailsToResolveConditionContext::Fails() {
  return getToken(IvionParser::Fails, 0);
}

tree::TerminalNode* IvionParser::CardFailsToResolveConditionContext::To() {
  return getToken(IvionParser::To, 0);
}

tree::TerminalNode* IvionParser::CardFailsToResolveConditionContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}


size_t IvionParser::CardFailsToResolveConditionContext::getRuleIndex() const {
  return IvionParser::RuleCardFailsToResolveCondition;
}


antlrcpp::Any IvionParser::CardFailsToResolveConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardFailsToResolveCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardFailsToResolveConditionContext* IvionParser::cardFailsToResolveCondition() {
  CardFailsToResolveConditionContext *_localctx = _tracker.createInstance<CardFailsToResolveConditionContext>(_ctx, getState());
  enterRule(_localctx, 328, IvionParser::RuleCardFailsToResolveCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1923);
    hypotheticalCard();
    setState(1924);
    hypotheticalPlayer();
    setState(1925);
    match(IvionParser::Play);
    setState(1926);
    match(IvionParser::Fails);
    setState(1927);
    match(IvionParser::To);
    setState(1928);
    match(IvionParser::Resolve);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerSlowsPlayerConditionContext ------------------------------------------------------------------

IvionParser::PlayerSlowsPlayerConditionContext::PlayerSlowsPlayerConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::HypotheticalPlayerContext *> IvionParser::PlayerSlowsPlayerConditionContext::hypotheticalPlayer() {
  return getRuleContexts<IvionParser::HypotheticalPlayerContext>();
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerSlowsPlayerConditionContext::hypotheticalPlayer(size_t i) {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(i);
}

tree::TerminalNode* IvionParser::PlayerSlowsPlayerConditionContext::Slow() {
  return getToken(IvionParser::Slow, 0);
}


size_t IvionParser::PlayerSlowsPlayerConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerSlowsPlayerCondition;
}


antlrcpp::Any IvionParser::PlayerSlowsPlayerConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerSlowsPlayerCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerSlowsPlayerConditionContext* IvionParser::playerSlowsPlayerCondition() {
  PlayerSlowsPlayerConditionContext *_localctx = _tracker.createInstance<PlayerSlowsPlayerConditionContext>(_ctx, getState());
  enterRule(_localctx, 330, IvionParser::RulePlayerSlowsPlayerCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1930);
    hypotheticalPlayer();
    setState(1931);
    match(IvionParser::Slow);
    setState(1932);
    hypotheticalPlayer();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerRecivesControlConditionContext ------------------------------------------------------------------

IvionParser::PlayerRecivesControlConditionContext::PlayerRecivesControlConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::HypotheticalPlayerContext* IvionParser::PlayerRecivesControlConditionContext::hypotheticalPlayer() {
  return getRuleContext<IvionParser::HypotheticalPlayerContext>(0);
}

tree::TerminalNode* IvionParser::PlayerRecivesControlConditionContext::Receive() {
  return getToken(IvionParser::Receive, 0);
}

tree::TerminalNode* IvionParser::PlayerRecivesControlConditionContext::Control() {
  return getToken(IvionParser::Control, 0);
}


size_t IvionParser::PlayerRecivesControlConditionContext::getRuleIndex() const {
  return IvionParser::RulePlayerRecivesControlCondition;
}


antlrcpp::Any IvionParser::PlayerRecivesControlConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerRecivesControlCondition(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerRecivesControlConditionContext* IvionParser::playerRecivesControlCondition() {
  PlayerRecivesControlConditionContext *_localctx = _tracker.createInstance<PlayerRecivesControlConditionContext>(_ctx, getState());
  enterRule(_localctx, 332, IvionParser::RulePlayerRecivesControlCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1934);
    hypotheticalPlayer();
    setState(1935);
    match(IvionParser::Receive);
    setState(1936);
    match(IvionParser::Control);
   
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

IvionParser::PlayerControlledConditionContext* IvionParser::ConditionContext::playerControlledCondition() {
  return getRuleContext<IvionParser::PlayerControlledConditionContext>(0);
}

IvionParser::PlayerUncontrolledConditionContext* IvionParser::ConditionContext::playerUncontrolledCondition() {
  return getRuleContext<IvionParser::PlayerUncontrolledConditionContext>(0);
}

IvionParser::PlayerHasCardsInDiscardConditionContext* IvionParser::ConditionContext::playerHasCardsInDiscardCondition() {
  return getRuleContext<IvionParser::PlayerHasCardsInDiscardConditionContext>(0);
}

IvionParser::PlayerHasTakenDamageConditionContext* IvionParser::ConditionContext::playerHasTakenDamageCondition() {
  return getRuleContext<IvionParser::PlayerHasTakenDamageConditionContext>(0);
}

IvionParser::CardResolvedConditionContext* IvionParser::ConditionContext::cardResolvedCondition() {
  return getRuleContext<IvionParser::CardResolvedConditionContext>(0);
}

IvionParser::PlayerDrewCardConditionContext* IvionParser::ConditionContext::playerDrewCardCondition() {
  return getRuleContext<IvionParser::PlayerDrewCardConditionContext>(0);
}

IvionParser::PlayerMadeTerrainConditionContext* IvionParser::ConditionContext::playerMadeTerrainCondition() {
  return getRuleContext<IvionParser::PlayerMadeTerrainConditionContext>(0);
}

IvionParser::PlayerEntersSpaceConditionContext* IvionParser::ConditionContext::playerEntersSpaceCondition() {
  return getRuleContext<IvionParser::PlayerEntersSpaceConditionContext>(0);
}

IvionParser::PlayerAttachesCardConditionContext* IvionParser::ConditionContext::playerAttachesCardCondition() {
  return getRuleContext<IvionParser::PlayerAttachesCardConditionContext>(0);
}

IvionParser::CardIsRevealedConditionContext* IvionParser::ConditionContext::cardIsRevealedCondition() {
  return getRuleContext<IvionParser::CardIsRevealedConditionContext>(0);
}

IvionParser::PlayerStunsPlayerConditionContext* IvionParser::ConditionContext::playerStunsPlayerCondition() {
  return getRuleContext<IvionParser::PlayerStunsPlayerConditionContext>(0);
}

IvionParser::CardSentToDiscardConditionContext* IvionParser::ConditionContext::cardSentToDiscardCondition() {
  return getRuleContext<IvionParser::CardSentToDiscardConditionContext>(0);
}

IvionParser::CardFailsToResolveConditionContext* IvionParser::ConditionContext::cardFailsToResolveCondition() {
  return getRuleContext<IvionParser::CardFailsToResolveConditionContext>(0);
}

IvionParser::PlayerSlowsPlayerConditionContext* IvionParser::ConditionContext::playerSlowsPlayerCondition() {
  return getRuleContext<IvionParser::PlayerSlowsPlayerConditionContext>(0);
}

IvionParser::PlayerRecivesControlConditionContext* IvionParser::ConditionContext::playerRecivesControlCondition() {
  return getRuleContext<IvionParser::PlayerRecivesControlConditionContext>(0);
}

IvionParser::StunPlayerConditionContext* IvionParser::ConditionContext::stunPlayerCondition() {
  return getRuleContext<IvionParser::StunPlayerConditionContext>(0);
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

IvionParser::IfPlayedCardContext* IvionParser::ConditionContext::ifPlayedCard() {
  return getRuleContext<IvionParser::IfPlayedCardContext>(0);
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

IvionParser::IfInTerrainContext* IvionParser::ConditionContext::ifInTerrain() {
  return getRuleContext<IvionParser::IfInTerrainContext>(0);
}

IvionParser::CounterCardConditionContext* IvionParser::ConditionContext::counterCardCondition() {
  return getRuleContext<IvionParser::CounterCardConditionContext>(0);
}

IvionParser::RevealCardsConditionContext* IvionParser::ConditionContext::revealCardsCondition() {
  return getRuleContext<IvionParser::RevealCardsConditionContext>(0);
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
  enterRule(_localctx, 334, IvionParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1972);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 98, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1938);
      playerControlledCondition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1939);
      playerUncontrolledCondition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1940);
      playerHasCardsInDiscardCondition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1941);
      playerHasTakenDamageCondition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1942);
      cardResolvedCondition();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1943);
      playerDrewCardCondition();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1944);
      playerMadeTerrainCondition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1945);
      playerEntersSpaceCondition();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1946);
      playerAttachesCardCondition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1947);
      cardIsRevealedCondition();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1948);
      playerStunsPlayerCondition();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1949);
      cardSentToDiscardCondition();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1950);
      cardFailsToResolveCondition();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1951);
      playerSlowsPlayerCondition();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1952);
      playerRecivesControlCondition();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1953);
      stunPlayerCondition();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1954);
      ifPlayerMakesChoice();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1955);
      ifPreviousActionInvalid();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(1956);
      ifResolvedCard();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(1957);
      ifUsedSecondWind();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(1958);
      ifNear();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(1959);
      ifControlled();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(1960);
      ifPlayedCard();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(1961);
      ifTileHadTerrain();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(1962);
      ifCardRevealed();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(1963);
      ifPlayerHasMitigate();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(1964);
      ifPlayerDidntLeaveTile();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(1965);
      ifCardCostReduced();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(1966);
      ifPlayerHasMoreHP();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(1967);
      ifPlayerHasNoActions();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(1968);
      ifInTerrain();
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(1969);
      counterCardCondition();
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(1970);
      stunPlayerCondition();
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(1971);
      revealCardsCondition();
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

IvionParser::ConditionContext* IvionParser::TriggerEffectContext::condition() {
  return getRuleContext<IvionParser::ConditionContext>(0);
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
  enterRule(_localctx, 336, IvionParser::RuleTriggerEffect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1995);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 100, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1974);
      match(IvionParser::At);
      setState(1975);
      turnTrigger();
      setState(1976);
      match(IvionParser::C);
      setState(1977);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1979);
      match(IvionParser::After);
      setState(1980);
      condition();
      setState(1982);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::For || _la == IvionParser::During) {
        setState(1981);
        effectPostfix();
      }
      setState(1984);
      match(IvionParser::C);
      setState(1985);
      effect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1987);
      durationEffect();
      setState(1988);
      match(IvionParser::D);
      setState(1989);
      effect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1991);
      gameStartTrigger();
      setState(1992);
      match(IvionParser::C);
      setState(1993);
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
  enterRule(_localctx, 338, IvionParser::RuleIfWouldRecieveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1997);
    match(IvionParser::If);
    setState(1998);
    hypotheticalPlayer();
    setState(1999);
    match(IvionParser::Would);
    setState(2000);
    match(IvionParser::Receive);
    setState(2001);
    match(IvionParser::Control);
    setState(2002);
    match(IvionParser::C);
    setState(2003);
    match(IvionParser::Instead);
    setState(2004);
    player();
    setState(2005);
    match(IvionParser::Receive);
    setState(2006);
    match(IvionParser::The);
    setState(2007);
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
  enterRule(_localctx, 340, IvionParser::RuleIfWouldTakeDamage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2009);
    match(IvionParser::If);
    setState(2010);
    hypotheticalPlayer();
    setState(2011);
    match(IvionParser::Would);
    setState(2012);
    match(IvionParser::Take);
    setState(2013);
    match(IvionParser::Damage);
    setState(2014);
    match(IvionParser::For);
    setState(2015);
    match(IvionParser::The);
    setState(2016);
    match(IvionParser::First);
    setState(2017);
    match(IvionParser::Time);
    setState(2018);
    match(IvionParser::During);
    setState(2019);
    match(IvionParser::Each);
    setState(2020);
    match(IvionParser::Turn);
    setState(2021);
    match(IvionParser::C);
    setState(2023);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Them)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::The)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::Their)
      | (1ULL << IvionParser::Its))) != 0) || _la == IvionParser::It) {
      setState(2022);
      playerRef();
    }
    setState(2025);
    match(IvionParser::Instead);
    setState(2026);
    match(IvionParser::Take);
    setState(2027);
    literalValue();
    setState(2028);
    match(IvionParser::Less);
    setState(2029);
    match(IvionParser::Damage);
    setState(2030);
    match(IvionParser::P);
    setState(2031);
    match(IvionParser::This);
    setState(2032);
    match(IvionParser::May);
    setState(2033);
    match(IvionParser::Not);
    setState(2034);
    match(IvionParser::Reduce);
    setState(2035);
    match(IvionParser::Damage);
    setState(2036);
    match(IvionParser::Taken);
    setState(2037);
    match(IvionParser::Below);
    setState(2038);
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
  enterRule(_localctx, 342, IvionParser::RuleIfWouldHeal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2040);
    match(IvionParser::If);
    setState(2041);
    hypotheticalPlayer();
    setState(2042);
    match(IvionParser::Would);
    setState(2043);
    match(IvionParser::Heal);
    setState(2044);
    hypotheticalPlayer();
    setState(2045);
    match(IvionParser::HP);
    setState(2046);
    match(IvionParser::C);
    setState(2047);
    match(IvionParser::Instead);
    setState(2048);
    match(IvionParser::Deal);
    setState(2049);
    match(IvionParser::That);
    setState(2050);
    match(IvionParser::Much);
    setState(2051);
    match(IvionParser::Damage);
    setState(2052);
    match(IvionParser::To);
    setState(2053);
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
  enterRule(_localctx, 344, IvionParser::RuleReplacementTriggerEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2058);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2055);
      ifWouldRecieveControl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2056);
      ifWouldTakeDamage();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2057);
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
  enterRule(_localctx, 346, IvionParser::RuleCardCantBeTargeted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2060);
    match(IvionParser::CARD_NAME);
    setState(2061);
    match(IvionParser::Cant);
    setState(2062);
    match(IvionParser::Be);
    setState(2063);
    match(IvionParser::Targeted);
    setState(2064);
    match(IvionParser::By);
    setState(2065);
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

tree::TerminalNode* IvionParser::WhileEffectContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
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
  enterRule(_localctx, 348, IvionParser::RuleWhileEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2067);
    match(IvionParser::While);
    setState(2068);
    match(IvionParser::CARD_NAME);
    setState(2069);
    match(IvionParser::Is);
    setState(2070);
    match(IvionParser::Reveal);
    setState(2071);
    match(IvionParser::In);
    setState(2072);
    match(IvionParser::Your);
    setState(2073);
    match(IvionParser::Hand);
    setState(2074);
    match(IvionParser::C);
    setState(2075);
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

tree::TerminalNode* IvionParser::PrimaryCostReductionContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
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
  enterRule(_localctx, 350, IvionParser::RulePrimaryCostReduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2077);
    match(IvionParser::CARD_NAME);
    setState(2078);
    match(IvionParser::Cost);
    setState(2079);
    literalValue();
    setState(2080);
    match(IvionParser::Less);
    setState(2081);
    match(IvionParser::POWER);
    setState(2082);
    match(IvionParser::For);
    setState(2083);
    match(IvionParser::Each);
    setState(2084);
    match(IvionParser::Other);
    setState(2085);
    match(IvionParser::Reveal);
    setState(2086);
    match(IvionParser::Card);
    setState(2087);
    match(IvionParser::In);
    setState(2088);
    match(IvionParser::Your);
    setState(2089);
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

tree::TerminalNode* IvionParser::OnlyPlayIfContext::If() {
  return getToken(IvionParser::If, 0);
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
  enterRule(_localctx, 352, IvionParser::RuleOnlyPlayIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2091);
    match(IvionParser::Only);
    setState(2092);
    match(IvionParser::Play);
    setState(2093);
    match(IvionParser::CARD_NAME);
    setState(2094);
    match(IvionParser::If);
    setState(2095);
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

tree::TerminalNode* IvionParser::OncePerGameLimitContext::Play() {
  return getToken(IvionParser::Play, 0);
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
  enterRule(_localctx, 354, IvionParser::RuleOncePerGameLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2097);
    match(IvionParser::CARD_NAME);
    setState(2098);
    match(IvionParser::May);
    setState(2099);
    match(IvionParser::Be);
    setState(2100);
    match(IvionParser::Play);
    setState(2101);
    match(IvionParser::Once);
    setState(2102);
    match(IvionParser::Per);
    setState(2103);
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

tree::TerminalNode* IvionParser::TriggerLimitContext::If() {
  return getToken(IvionParser::If, 0);
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
  enterRule(_localctx, 356, IvionParser::RuleTriggerLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2105);
    match(IvionParser::CARD_NAME);
    setState(2106);
    match(IvionParser::May);
    setState(2107);
    match(IvionParser::Only);
    setState(2108);
    match(IvionParser::Trigger);
    setState(2109);
    match(IvionParser::If);
    setState(2110);
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
  enterRule(_localctx, 358, IvionParser::RuleTriggerTurnLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2112);
    match(IvionParser::CARD_NAME);
    setState(2113);
    match(IvionParser::May);
    setState(2114);
    match(IvionParser::Trigger);
    setState(2115);
    literalValue();
    setState(2116);
    match(IvionParser::Per);
    setState(2117);
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
  enterRule(_localctx, 360, IvionParser::RuleOmniPresentEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2119);
      cardCantBeTargeted();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2120);
      whileEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2121);
      primaryCostReduction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2122);
      onlyPlayIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2123);
      oncePerGameLimit();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2124);
      triggerLimit();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2125);
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
  enterRule(_localctx, 362, IvionParser::RuleOne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2128);
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
  enterRule(_localctx, 364, IvionParser::RuleTwo);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2130);
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
  enterRule(_localctx, 366, IvionParser::RuleThree);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2132);
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
  enterRule(_localctx, 368, IvionParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2134);
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
  enterRule(_localctx, 370, IvionParser::RulePlayerPowerValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2136);
    player();
    setState(2137);
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
  enterRule(_localctx, 372, IvionParser::RulePlayerControlAmountValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2139);
    match(IvionParser::The);
    setState(2140);
    match(IvionParser::Total);
    setState(2141);
    match(IvionParser::Value);
    setState(2142);
    match(IvionParser::Of);
    setState(2143);
    match(IvionParser::Control);
    setState(2144);
    match(IvionParser::Affecting);
    setState(2145);
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
  enterRule(_localctx, 374, IvionParser::RulePlayerHandSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2147);
    match(IvionParser::The);
    setState(2148);
    match(IvionParser::Number);
    setState(2149);
    match(IvionParser::Of);
    setState(2150);
    hypotheticalCard();
    setState(2151);
    match(IvionParser::In);
    setState(2152);
    match(IvionParser::Their);
    setState(2153);
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
  enterRule(_localctx, 376, IvionParser::RulePlayerMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2155);
    player();
    setState(2156);
    match(IvionParser::Mitigate);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerCardsInHandContext ------------------------------------------------------------------

IvionParser::PlayerCardsInHandContext::PlayerCardsInHandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::LiteralValueContext* IvionParser::PlayerCardsInHandContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::Each() {
  return getToken(IvionParser::Each, 0);
}

IvionParser::HypotheticalCardContext* IvionParser::PlayerCardsInHandContext::hypotheticalCard() {
  return getRuleContext<IvionParser::HypotheticalCardContext>(0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::PlayerRefContext* IvionParser::PlayerCardsInHandContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::Damage() {
  return getToken(IvionParser::Damage, 0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::Slow() {
  return getToken(IvionParser::Slow, 0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::Silence() {
  return getToken(IvionParser::Silence, 0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::Disarm() {
  return getToken(IvionParser::Disarm, 0);
}

tree::TerminalNode* IvionParser::PlayerCardsInHandContext::More() {
  return getToken(IvionParser::More, 0);
}


size_t IvionParser::PlayerCardsInHandContext::getRuleIndex() const {
  return IvionParser::RulePlayerCardsInHand;
}


antlrcpp::Any IvionParser::PlayerCardsInHandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerCardsInHand(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerCardsInHandContext* IvionParser::playerCardsInHand() {
  PlayerCardsInHandContext *_localctx = _tracker.createInstance<PlayerCardsInHandContext>(_ctx, getState());
  enterRule(_localctx, 378, IvionParser::RulePlayerCardsInHand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2158);
    literalValue();
    setState(2160);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::More) {
      setState(2159);
      match(IvionParser::More);
    }
    setState(2167);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::For: {
        break;
      }

      case IvionParser::Damage: {
        setState(2163);
        match(IvionParser::Damage);
        break;
      }

      case IvionParser::Slow: {
        setState(2164);
        match(IvionParser::Slow);
        break;
      }

      case IvionParser::Silence: {
        setState(2165);
        match(IvionParser::Silence);
        break;
      }

      case IvionParser::Disarm: {
        setState(2166);
        match(IvionParser::Disarm);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(2169);
    match(IvionParser::For);
    setState(2170);
    match(IvionParser::Each);
    setState(2171);
    hypotheticalCard();
    setState(2172);
    match(IvionParser::In);
    setState(2173);
    playerRef();
    setState(2174);
    match(IvionParser::Hand);
   
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
  enterRule(_localctx, 380, IvionParser::RuleLiteralValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2180);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::A:
      case IvionParser::Once:
      case IvionParser::One: {
        enterOuterAlt(_localctx, 1);
        setState(2176);
        one();
        break;
      }

      case IvionParser::Twice:
      case IvionParser::Two: {
        enterOuterAlt(_localctx, 2);
        setState(2177);
        two();
        break;
      }

      case IvionParser::Three: {
        enterOuterAlt(_localctx, 3);
        setState(2178);
        three();
        break;
      }

      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 4);
        setState(2179);
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

IvionParser::PlayerCardsInHandContext* IvionParser::GameStateValueContext::playerCardsInHand() {
  return getRuleContext<IvionParser::PlayerCardsInHandContext>(0);
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
  enterRule(_localctx, 382, IvionParser::RuleGameStateValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2182);
      playerPowerValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2183);
      playerControlAmountValue();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2184);
      playerHandSize();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2185);
      playerMitigate();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2186);
      playerCardsInHand();
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

//----------------- ValueContext ------------------------------------------------------------------

IvionParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::GameStateValueContext* IvionParser::ValueContext::gameStateValue() {
  return getRuleContext<IvionParser::GameStateValueContext>(0);
}

IvionParser::LiteralValueContext* IvionParser::ValueContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}


size_t IvionParser::ValueContext::getRuleIndex() const {
  return IvionParser::RuleValue;
}


antlrcpp::Any IvionParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ValueContext* IvionParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 384, IvionParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2191);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2189);
      gameStateValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2190);
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
  enterRule(_localctx, 386, IvionParser::RuleChooseSameMultipleTimes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2193);
    match(IvionParser::You);
    setState(2194);
    match(IvionParser::May);
    setState(2195);
    match(IvionParser::Choose);
    setState(2196);
    match(IvionParser::The);
    setState(2197);
    match(IvionParser::Same);
    setState(2198);
    match(IvionParser::Mode);
    setState(2199);
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
  size_t startState = 388;
  enterRecursionRule(_localctx, 388, IvionParser::RuleEffectList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2202);
    match(IvionParser::D);
    setState(2203);
    effect();
    _ctx->stop = _input->LT(-1);
    setState(2211);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EffectListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEffectList);
        setState(2205);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2206);
        match(IvionParser::P);
        setState(2207);
        match(IvionParser::D);
        setState(2208);
        effect(); 
      }
      setState(2213);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx);
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
  enterRule(_localctx, 390, IvionParser::RuleChooseEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2248);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2214);
      match(IvionParser::Choose);
      setState(2215);
      literalValue();
      setState(2216);
      match(IvionParser::For);
      setState(2217);
      match(IvionParser::Each);
      setState(2218);
      playerFilter();
      setState(2219);
      match(IvionParser::In);
      setState(2220);
      match(IvionParser::It);
      setState(2221);
      match(IvionParser::O);
      setState(2222);
      effectList(0);
      setState(2223);
      match(IvionParser::P);
      setState(2224);
      chooseSameMultipleTimes();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2226);
      match(IvionParser::Choose);
      setState(2227);
      literalValue();
      setState(2228);
      match(IvionParser::O);
      setState(2229);
      effectList(0);
      setState(2230);
      match(IvionParser::P);
      setState(2231);
      chooseSameMultipleTimes();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2233);
      match(IvionParser::Choose);
      setState(2234);
      literalValue();
      setState(2235);
      match(IvionParser::O);
      setState(2236);
      effectList(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2238);
      match(IvionParser::Choose);
      setState(2239);
      literalValue();
      setState(2240);
      match(IvionParser::For);
      setState(2241);
      match(IvionParser::Each);
      setState(2242);
      playerFilter();
      setState(2243);
      match(IvionParser::In);
      setState(2244);
      match(IvionParser::It);
      setState(2245);
      match(IvionParser::O);
      setState(2246);
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

IvionParser::PlayUltimateContext* IvionParser::SingleEffectContext::playUltimate() {
  return getRuleContext<IvionParser::PlayUltimateContext>(0);
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
  enterRule(_localctx, 392, IvionParser::RuleSingleEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2250);
      chooseEffect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2251);
      disarmPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2252);
      silencePlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2253);
      slowPlayer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2254);
      controlPlayer();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2255);
      travelPlayer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2256);
      travelDistance();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2257);
      destroyCard();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2258);
      dealDamage();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2259);
      counterCard();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2260);
      attachCard();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2261);
      gainPower();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2262);
      gainAction();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2263);
      gainInitiative();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2264);
      gainMitigate();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2265);
      loseMitigate();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2266);
      useSecondWind();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2267);
      returnCard();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2268);
      putBottomCardOfDeckIntoHand();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2269);
      triggerDurationEffects();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2270);
      playCard();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2271);
      playUltimate();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2272);
      discardCards();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2273);
      gainsHeroic();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2274);
      healPlayer();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2275);
      stunPlayer();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2276);
      revealCards();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2277);
      drawCards();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2278);
      removeControl();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2279);
      hardcastEffect();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2280);
      seekEffect();
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2281);
      makeTerrain();
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2282);
      removeTerrain();
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2283);
      spendResources();
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2284);
      scryEffect();
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2285);
      overrideFrenzy();
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2286);
      increaseCardDuration();
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2287);
      resetUseOfCard();
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2288);
      heroic();
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2289);
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
  enterRule(_localctx, 394, IvionParser::RuleRepeatedEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2302);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2292);
      singleEffect();
      setState(2293);
      match(IvionParser::For);
      setState(2294);
      match(IvionParser::Each);
      setState(2295);
      match(IvionParser::Instance);
      setState(2296);
      match(IvionParser::Of);
      setState(2297);
      match(IvionParser::Control);
      setState(2298);
      playerRef();
      setState(2299);
      match(IvionParser::Receive);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2301);
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

tree::TerminalNode* IvionParser::ConditionalEffectContext::If() {
  return getToken(IvionParser::If, 0);
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
  enterRule(_localctx, 396, IvionParser::RuleConditionalEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2310);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(2304);
        match(IvionParser::If);
        setState(2305);
        condition();
        setState(2306);
        match(IvionParser::C);
        setState(2307);
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
      case IvionParser::Choose:
      case IvionParser::It: {
        enterOuterAlt(_localctx, 2);
        setState(2309);
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

tree::TerminalNode* IvionParser::AlternativeEffectContext::If() {
  return getToken(IvionParser::If, 0);
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
  enterRule(_localctx, 398, IvionParser::RuleAlternativeEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2319);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2312);
      match(IvionParser::If);
      setState(2313);
      condition();
      setState(2314);
      match(IvionParser::C);
      setState(2315);
      match(IvionParser::Instead);
      setState(2316);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2318);
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
  enterRule(_localctx, 400, IvionParser::RuleEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2343);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2321);
      hypotheticalPlayer();
      setState(2322);
      match(IvionParser::May);
      setState(2323);
      match(IvionParser::Have);
      setState(2324);
      hypotheticalPlayer();
      setState(2325);
      alternativeEffect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2327);
      hypotheticalPlayer();
      setState(2328);
      match(IvionParser::May);
      setState(2329);
      alternativeEffect();
      setState(2330);
      match(IvionParser::To);
      setState(2331);
      alternativeEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2333);
      hypotheticalPlayer();
      setState(2334);
      match(IvionParser::May);
      setState(2335);
      alternativeEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2337);
      alternativeEffect();
      setState(2338);
      match(IvionParser::Unless);
      setState(2339);
      hypotheticalPlayer();
      setState(2340);
      alternativeEffect();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2342);
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
  enterRule(_localctx, 402, IvionParser::RuleEffectEnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2356);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 116, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2345);
      match(IvionParser::P);
      setState(2346);
      match(IvionParser::Then);
      setState(2347);
      match(IvionParser::C);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2348);
      match(IvionParser::P);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2349);
      match(IvionParser::And);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2350);
      match(IvionParser::C);
      setState(2351);
      match(IvionParser::And);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2352);
      match(IvionParser::C);
      setState(2353);
      match(IvionParser::Then);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2354);
      match(IvionParser::C);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2355);
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
  enterRule(_localctx, 404, IvionParser::RuleAnyEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2362);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 117, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2358);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2359);
      passiveEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2360);
      replacementTriggerEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2361);
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
  enterRule(_localctx, 406, IvionParser::RuleBreachEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2364);
    match(IvionParser::Breach);
    setState(2365);
    match(IvionParser::D);
    setState(2369); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2366);
              anyEffect();
              setState(2367);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2371); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 118, _ctx);
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
  enterRule(_localctx, 408, IvionParser::RuleAdvantageEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2373);
    match(IvionParser::Advantage);
    setState(2374);
    match(IvionParser::D);
    setState(2378); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2375);
              anyEffect();
              setState(2376);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2380); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 119, _ctx);
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
  enterRule(_localctx, 410, IvionParser::RuleFrenzyEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2382);
    match(IvionParser::Frenzy);
    setState(2383);
    match(IvionParser::D);
    setState(2387); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2384);
              anyEffect();
              setState(2385);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2389); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 120, _ctx);
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
  enterRule(_localctx, 412, IvionParser::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2400);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 121, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2391);
      omniPresentEffect();
      setState(2392);
      match(IvionParser::P);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2394);
      breachEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2395);
      advantageEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2396);
      frenzyEffect();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2397);
      anyEffect();
      setState(2398);
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
  enterRule(_localctx, 414, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2403); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(2402);
      line();
      setState(2405); 
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
      | (1ULL << IvionParser::Their)
      | (1ULL << IvionParser::Counter)
      | (1ULL << IvionParser::Its)
      | (1ULL << IvionParser::Spend))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (IvionParser::Controlled - 69))
      | (1ULL << (IvionParser::Uncontrolled - 69))
      | (1ULL << (IvionParser::Non - 69))
      | (1ULL << (IvionParser::Attack - 69))
      | (1ULL << (IvionParser::Ability - 69))
      | (1ULL << (IvionParser::If - 69))
      | (1ULL << (IvionParser::Attach - 69))
      | (1ULL << (IvionParser::Gain - 69))
      | (1ULL << (IvionParser::Lose - 69))
      | (1ULL << (IvionParser::Use - 69))
      | (1ULL << (IvionParser::Second - 69))
      | (1ULL << (IvionParser::Third - 69))
      | (1ULL << (IvionParser::Return - 69))
      | (1ULL << (IvionParser::Discard - 69))
      | (1ULL << (IvionParser::Put - 69))
      | (1ULL << (IvionParser::Trigger - 69))
      | (1ULL << (IvionParser::Duration - 69))
      | (1ULL << (IvionParser::Play - 69))
      | (1ULL << (IvionParser::Frenzy - 69))
      | (1ULL << (IvionParser::Heroic - 69))
      | (1ULL << (IvionParser::Heal - 69))
      | (1ULL << (IvionParser::Stun - 69))
      | (1ULL << (IvionParser::Reveal - 69))
      | (1ULL << (IvionParser::Draw - 69)))) != 0) || ((((_la - 137) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 137)) & ((1ULL << (IvionParser::Remove - 137))
      | (1ULL << (IvionParser::Hardcast - 137))
      | (1ULL << (IvionParser::Seek - 137))
      | (1ULL << (IvionParser::Make - 137))
      | (1ULL << (IvionParser::At - 137))
      | (1ULL << (IvionParser::Look - 137))
      | (1ULL << (IvionParser::Any - 137))
      | (1ULL << (IvionParser::Reset - 137))
      | (1ULL << (IvionParser::Only - 137))
      | (1ULL << (IvionParser::After - 137))
      | (1ULL << (IvionParser::First - 137))
      | (1ULL << (IvionParser::Ally - 137))
      | (1ULL << (IvionParser::While - 137))
      | (1ULL << (IvionParser::Once - 137))
      | (1ULL << (IvionParser::Twice - 137))
      | (1ULL << (IvionParser::CARD_NAME - 137))
      | (1ULL << (IvionParser::Integer - 137))
      | (1ULL << (IvionParser::One - 137))
      | (1ULL << (IvionParser::Two - 137))
      | (1ULL << (IvionParser::Three - 137)))) != 0) || ((((_la - 202) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 202)) & ((1ULL << (IvionParser::Choose - 202))
      | (1ULL << (IvionParser::It - 202))
      | (1ULL << (IvionParser::Breach - 202))
      | (1ULL << (IvionParser::Advantage - 202)))) != 0));
    setState(2407);
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
    case 12: return playerPostFixSempred(dynamic_cast<PlayerPostFixContext *>(context), predicateIndex);
    case 194: return effectListSempred(dynamic_cast<EffectListContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool IvionParser::playerPostFixSempred(PlayerPostFixContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);
    case 6: return precpred(_ctx, 4);
    case 7: return precpred(_ctx, 3);
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool IvionParser::effectListSempred(EffectListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 1);

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
  "generalPostInTerrainFilter", "generalPostNearTerrainFilter", "generalPostNearPlayerFilter", 
  "generalPostNearTileFilter", "generalPostInTileFilter", "generalPostNearCardFilter", 
  "generalPostInCardFilter", "generalPostPlayerChoiceFilter", "generalPostAtLeastAwayFilter", 
  "generalPostAtLeastAwayFromPlayerFilter", "playerType", "playerPreFix", 
  "playerPostFix", "playerFilter", "currentPlayer", "previousPlayer", "previousCardsOwner", 
  "previousCardsController", "playerRef", "targetPlayer", "singlePlayer", 
  "multiPlayer", "allOtherPlayers", "allPlayers", "player", "hypotheticalPlayer", 
  "cardPreEnemyFilter", "cardPreAttachedFilter", "cardPreAbilityFilter", 
  "cardPreAttackFilter", "cardPreRevealedFilter", "cardPreAnotherFilter", 
  "cardPreInstanceFilter", "cardPrefix", "cardPostTargettingFilter", "cardPostCostFilter", 
  "cardPostAttachedToPlayerFilter", "cardPostAttachedToTileFilter", "cardPostControlledByPlayerFilter", 
  "cardPostHardcastFilter", "cardPostFrenzyFilter", "cardPostInDiscardFilter", 
  "cardPostTurnRefFilter", "cardPostfix", "cardFilter", "cardName", "bottomCard", 
  "previousCard", "targetCard", "selectCard", "singleCard", "allCards", 
  "multiCard", "card", "hypotheticalCard", "tilePreEmptyFilter", "tilePreFix", 
  "tilePostFix", "tileFilter", "targetTile", "previousTile", "theNearestTile", 
  "playersTile", "cardsTile", "singleTile", "multiTile", "allTiles", "tile", 
  "hypotheticalTile", "entity", "hypotheticalEntity", "disarmPlayer", "silencePlayer", 
  "slowPlayer", "controlPlayer", "awayFlag", "upToFlag", "travelDistance", 
  "travelPlayer", "destroyCard", "dealDamage", "counterCard", "attachCard", 
  "gainPower", "gainAction", "gainInitiative", "gainMitigate", "loseMitigate", 
  "useSecondWind", "returnCard", "putBottomCardOfDeckIntoHand", "triggerDurationEffects", 
  "forLessResources", "freeFlag", "playCard", "playUltimate", "discardCards", 
  "gainsHeroic", "healPlayer", "stunPlayer", "revealCards", "drawCards", 
  "removeControl", "hardcastEffect", "seekEffect", "makeTerrain", "removeTerrain", 
  "spendResources", "scryEffect", "overrideFrenzy", "increaseCardDuration", 
  "resetUseOfCard", "heroic", "onlyPlayCertainCards", "costReduction", "rangeSet", 
  "cantPlayCards", "playerCantBeTargeted", "increasedHandSize", "increasedMaxHP", 
  "replacesSecondWind", "noInitiative", "drawRange", "gainRange", "limitTargets", 
  "passiveEffect", "durationEffect", "startOfPlayerTurn", "endOfPlayerTurnTrigger", 
  "startOfPlayerNextTurn", "endOfTurnTrigger", "turnTrigger", "gameStartTrigger", 
  "effectPostfix", "ifPlayerMakesChoice", "ifPreviousActionInvalid", "ifResolvedCard", 
  "ifPlayedCard", "ifUsedSecondWind", "ifNear", "ifControlled", "ifTileHadTerrain", 
  "ifCardRevealed", "ifPlayerHasMitigate", "ifPlayerDidntLeaveTile", "ifCardCostReduced", 
  "ifPlayerHasMoreHP", "ifPlayerHasNoActions", "ifInTerrain", "counterCardCondition", 
  "stunPlayerCondition", "revealCardsCondition", "playerControlledCondition", 
  "playerUncontrolledCondition", "playerHasCardsInDiscardCondition", "playerHasTakenDamageCondition", 
  "cardResolvedCondition", "playerDrewCardCondition", "playerMadeTerrainCondition", 
  "playerEntersSpaceCondition", "playerAttachesCardCondition", "cardIsRevealedCondition", 
  "playerStunsPlayerCondition", "cardSentToDiscardCondition", "cardFailsToResolveCondition", 
  "playerSlowsPlayerCondition", "playerRecivesControlCondition", "condition", 
  "triggerEffect", "ifWouldRecieveControl", "ifWouldTakeDamage", "ifWouldHeal", 
  "replacementTriggerEffect", "cardCantBeTargeted", "whileEffect", "primaryCostReduction", 
  "onlyPlayIf", "oncePerGameLimit", "triggerLimit", "triggerTurnLimit", 
  "omniPresentEffect", "one", "two", "three", "number", "playerPowerValue", 
  "playerControlAmountValue", "playerHandSize", "playerMitigate", "playerCardsInHand", 
  "literalValue", "gameStateValue", "value", "chooseSameMultipleTimes", 
  "effectList", "chooseEffect", "singleEffect", "repeatedEffect", "conditionalEffect", 
  "alternativeEffect", "effect", "effectEnd", "anyEffect", "breachEffect", 
  "advantageEffect", "frenzyEffect", "line", "text"
};

std::vector<std::string> IvionParser::_literalNames = {
  "", "'disarm'", "'target'", "", "'in'", "'terrain'", "'them'", "'silence'", 
  "'that'", "", "'yourself'", "'slow'", "'the'", "'controller'", "'apply'", 
  "'more'", "'instances'", "'of'", "", "'control'", "'type'", "'your'", 
  "'choice'", "'to'", "'instance'", "'each'", "'near'", "'increase'", "'value'", 
  "'already'", "'affecting'", "'by'", "'travel'", "'another'", "", "'away'", 
  "'from'", "'you'", "'up'", "'nearest'", "'next'", "'unless'", "'they'", 
  "'destroy'", "", "'attached'", "'all'", "'deal'", "'damage'", "'equal'", 
  "'number'", "'their'", "'hand'", "'plus'", "'mitigate'", "'for'", "'total'", 
  "'counter'", "", "", "", "'targeting'", "'maximum'", "'size'", "'increased'", 
  "'with'", "", "'or'", "'less'", "'controlled'", "'uncontrolled'", "'non-'", 
  "'attack'", "'ability'", "'if'", "", "'replaces'", "'countered'", "'effect'", 
  "'attach'", "'empty'", "'until'", "'end'", "'turn'", "'than'", "'start'", 
  "'gain'", "'additional'", "'gains'", "'lose'", "'use'", "'second'", "'third'", 
  "'wind'", "'return'", "", "", "'may'", "'put'", "'bottom'", "'deck'", 
  "'into'", "'trigger'", "'duration'", "'effects'", "'as'", "'though'", 
  "'had'", "'just'", "'ended'", "'even'", "", "'free'", "'frenzy'", "'cursed'", 
  "'dagger'", "'this'", "'doesn't'", "'count'", "'towards'", "'limit'", 
  "'per'", "'runic'", "'slaughter'", "", "'heroic'", "'heal'", "'hp'", "'stun'", 
  "'removed'", "'way'", "", "", "'then'", "'except'", "'also'", "'range'", 
  "'remove'", "'hardcast'", "'seek'", "'make'", "'difficult'", "'ultimate'", 
  "'at'", "'least'", "'token'", "'look'", "'top'", "'any'", "'on'", "'and'", 
  "'rest'", "'much'", "'order'", "'no'", "'used'", "'reset'", "'only'", 
  "'named'", "", "'taken'", "'can't'", "'be'", "'targeted'", "'enemies'", 
  "", "'first'", "'during'", "'enters'", "'ally'", "'time'", "'receive'", 
  "'sent'", "'would'", "'instead'", "'do'", "'don't'", "'while'", "'leave'", 
  "'didn't'", "'take'", "'reduced'", "'not'", "'reduce'", "'below'", "'fails'", 
  "'other'", "'once'", "'twice'", "'game'", "'CARD_NAME'", "", "'one'", 
  "'two'", "'three'", "','", "'.'", "'-'", "':'", "", "", "", "'choose'", 
  "'same'", "'mode'", "'it'", "'breach'", "'advantage'"
};

std::vector<std::string> IvionParser::_symbolicNames = {
  "", "Disarm", "Target", "Enemy", "In", "Terrain", "Them", "Silence", "That", 
  "Tile", "Yourself", "Slow", "The", "Controller", "Apply", "More", "Instances", 
  "Of", "A", "Control", "Type", "Your", "Choice", "To", "Instance", "Each", 
  "Near", "Increase", "Value", "Already", "Affecting", "By", "Travel", "Another", 
  "Player", "Away", "From", "You", "Up", "Nearest", "Next", "Unless", "They", 
  "Destroy", "Card", "Attached", "All", "Deal", "Damage", "Equal", "Number", 
  "Their", "Hand", "Plus", "Mitigate", "For", "Total", "Counter", "Its", 
  "Spend", "Resource", "Targeting", "Maximum", "Size", "Increased", "With", 
  "Cost", "Or", "Less", "Controlled", "Uncontrolled", "Non", "Attack", "Ability", 
  "If", "Is", "Replaces", "Countered", "Effect", "Attach", "Empty", "Until", 
  "End", "Turn", "Than", "Start", "Gain", "Additional", "Gains", "Lose", 
  "Use", "Second", "Third", "Wind", "Return", "Owner", "Discard", "May", 
  "Put", "Bottom", "Deck", "Into", "Trigger", "Duration", "Effects", "As", 
  "Though", "Had", "Just", "Ended", "Even", "Play", "Free", "Frenzy", "Cursed", 
  "Dagger", "This", "Doesnt", "Count", "Towards", "Limit", "Per", "Runic", 
  "Slaughter", "Have", "Heroic", "Heal", "HP", "Stun", "Removed", "Way", 
  "Reveal", "Draw", "Then", "Except", "Also", "Range", "Remove", "Hardcast", 
  "Seek", "Make", "Difficult", "Ultimate", "At", "Least", "Token", "Look", 
  "Top", "Any", "On", "And", "Rest", "Much", "Order", "No", "Used", "Reset", 
  "Only", "Named", "Resolve", "Taken", "Cant", "Be", "Targeted", "Enemies", 
  "After", "First", "During", "Enters", "Ally", "Time", "Receive", "Sent", 
  "Would", "Instead", "Do", "Dont", "While", "Leave", "Didnt", "Take", "Reduced", 
  "Not", "Reduce", "Below", "Fails", "Other", "Once", "Twice", "Game", "CARD_NAME", 
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
    0x3, 0xd2, 0x96c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0xa1, 0x9, 0xa1, 0x4, 0xa2, 0x9, 0xa2, 0x4, 0xa3, 0x9, 0xa3, 0x4, 0xa4, 
    0x9, 0xa4, 0x4, 0xa5, 0x9, 0xa5, 0x4, 0xa6, 0x9, 0xa6, 0x4, 0xa7, 0x9, 
    0xa7, 0x4, 0xa8, 0x9, 0xa8, 0x4, 0xa9, 0x9, 0xa9, 0x4, 0xaa, 0x9, 0xaa, 
    0x4, 0xab, 0x9, 0xab, 0x4, 0xac, 0x9, 0xac, 0x4, 0xad, 0x9, 0xad, 0x4, 
    0xae, 0x9, 0xae, 0x4, 0xaf, 0x9, 0xaf, 0x4, 0xb0, 0x9, 0xb0, 0x4, 0xb1, 
    0x9, 0xb1, 0x4, 0xb2, 0x9, 0xb2, 0x4, 0xb3, 0x9, 0xb3, 0x4, 0xb4, 0x9, 
    0xb4, 0x4, 0xb5, 0x9, 0xb5, 0x4, 0xb6, 0x9, 0xb6, 0x4, 0xb7, 0x9, 0xb7, 
    0x4, 0xb8, 0x9, 0xb8, 0x4, 0xb9, 0x9, 0xb9, 0x4, 0xba, 0x9, 0xba, 0x4, 
    0xbb, 0x9, 0xbb, 0x4, 0xbc, 0x9, 0xbc, 0x4, 0xbd, 0x9, 0xbd, 0x4, 0xbe, 
    0x9, 0xbe, 0x4, 0xbf, 0x9, 0xbf, 0x4, 0xc0, 0x9, 0xc0, 0x4, 0xc1, 0x9, 
    0xc1, 0x4, 0xc2, 0x9, 0xc2, 0x4, 0xc3, 0x9, 0xc3, 0x4, 0xc4, 0x9, 0xc4, 
    0x4, 0xc5, 0x9, 0xc5, 0x4, 0xc6, 0x9, 0xc6, 0x4, 0xc7, 0x9, 0xc7, 0x4, 
    0xc8, 0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x4, 0xca, 0x9, 0xca, 0x4, 0xcb, 
    0x9, 0xcb, 0x4, 0xcc, 0x9, 0xcc, 0x4, 0xcd, 0x9, 0xcd, 0x4, 0xce, 0x9, 
    0xce, 0x4, 0xcf, 0x9, 0xcf, 0x4, 0xd0, 0x9, 0xd0, 0x4, 0xd1, 0x9, 0xd1, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x1a8, 0xa, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x5, 
    0xd, 0x1d3, 0xa, 0xd, 0x3, 0xd, 0x5, 0xd, 0x1d6, 0xa, 0xd, 0x3, 0xd, 
    0x5, 0xd, 0x1d9, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0x1f4, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x1f7, 0xb, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0x202, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 
    0x13, 0x20c, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0x212, 0xa, 0x14, 0x3, 0x15, 0x5, 0x15, 0x215, 0xa, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x21c, 
    0xa, 0x16, 0x3, 0x17, 0x5, 0x17, 0x21f, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x22e, 
    0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x234, 
    0xa, 0x1a, 0x3, 0x1b, 0x5, 0x1b, 0x237, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
    0x5, 0x1b, 0x23b, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x5, 0x1e, 0x242, 0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 
    0x5, 0x1f, 0x247, 0xa, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x252, 
    0xa, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x25d, 0xa, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x5, 0x2c, 0x287, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
    0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x5, 0x2d, 0x29c, 0xa, 0x2d, 0x3, 0x2e, 
    0x7, 0x2e, 0x29f, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x2a2, 0xb, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 0x2a6, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 
    0x2a9, 0xb, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 
    0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x5, 0x31, 0x2be, 0xa, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
    0x34, 0x3, 0x34, 0x5, 0x34, 0x2cb, 0xa, 0x34, 0x3, 0x35, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x36, 0x5, 0x36, 0x2d1, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x2d7, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x5, 0x36, 0x2dc, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x5, 0x37, 0x2e1, 0xa, 0x37, 0x3, 0x38, 0x5, 0x38, 0x2e4, 0xa, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x2e8, 0xa, 0x38, 0x3, 0x39, 0x5, 0x39, 
    0x2eb, 0xa, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 
    0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x2fb, 0xa, 0x3b, 0x3, 0x3c, 
    0x7, 0x3c, 0x2fe, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 0x301, 0xb, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x7, 0x3c, 0x305, 0xa, 0x3c, 0xc, 0x3c, 0xe, 0x3c, 
    0x308, 0xb, 0x3c, 0x3, 0x3d, 0x5, 0x3d, 0x30b, 0xa, 0x3d, 0x3, 0x3d, 
    0x5, 0x3d, 0x30e, 0xa, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x5, 0x3e, 0x317, 0xa, 0x3e, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x5, 
    0x3f, 0x320, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x42, 0x3, 
    0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x330, 0xa, 0x42, 
    0x3, 0x43, 0x5, 0x43, 0x333, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 
    0x45, 0x33e, 0xa, 0x45, 0x3, 0x46, 0x5, 0x46, 0x341, 0xa, 0x46, 0x3, 
    0x46, 0x3, 0x46, 0x5, 0x46, 0x345, 0xa, 0x46, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x5, 0x47, 0x34a, 0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x5, 0x48, 0x34f, 0xa, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x49, 0x5, 0x49, 0x357, 0xa, 0x49, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x35f, 0xa, 0x4a, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x5, 
    0x4b, 0x367, 0xa, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
    0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
    0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
    0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x390, 0xa, 0x4c, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x39b, 0xa, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 
    0x39e, 0xa, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3a1, 0xa, 0x4f, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x3a6, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 
    0x5, 0x50, 0x3aa, 0xa, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 
    0x3af, 0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
    0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x5, 0x52, 0x3ed, 0xa, 0x52, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x3, 0x54, 0x5, 0x54, 0x3ff, 0xa, 0x54, 0x3, 0x55, 0x5, 0x55, 
    0x402, 0xa, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
    0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
    0x5, 0x55, 0x416, 0xa, 0x55, 0x3, 0x56, 0x5, 0x56, 0x419, 0xa, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 
    0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x5, 0x56, 0x42d, 
    0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 0x6, 0x57, 0x431, 0xa, 0x57, 0xd, 0x57, 
    0xe, 0x57, 0x432, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x6, 0x57, 0x438, 
    0xa, 0x57, 0xd, 0x57, 0xe, 0x57, 0x439, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
    0x6, 0x57, 0x43f, 0xa, 0x57, 0xd, 0x57, 0xe, 0x57, 0x440, 0x5, 0x57, 
    0x443, 0xa, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x44d, 0xa, 0x58, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
    0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 
    0x3, 0x5b, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 
    0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 
    0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x482, 
    0xa, 0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 0x487, 0xa, 0x61, 
    0xc, 0x61, 0xe, 0x61, 0x48a, 0xb, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
    0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 0x499, 0xa, 0x61, 
    0xc, 0x61, 0xe, 0x61, 0x49c, 0xb, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
    0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 
    0x4ad, 0xa, 0x61, 0xc, 0x61, 0xe, 0x61, 0x4b0, 0xb, 0x61, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
    0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0x4be, 
    0xa, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 
    0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 
    0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0x4cf, 0xa, 0x62, 0x3, 0x63, 
    0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 
    0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
    0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0x4e2, 0xa, 0x64, 0x3, 0x65, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 
    0x525, 0xa, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x5, 0x67, 0x541, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x5, 0x68, 0x559, 0xa, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 
    0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
    0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6d, 0x3, 0x6d, 
    0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
    0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
    0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 
    0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
    0x3, 0x6e, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
    0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
    0x3, 0x6f, 0x3, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 
    0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
    0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 
    0x72, 0x3, 0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 
    0x73, 0x3, 0x73, 0x5, 0x73, 0x5b4, 0xa, 0x73, 0x3, 0x74, 0x3, 0x74, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
    0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
    0x74, 0x5, 0x74, 0x5cc, 0xa, 0x74, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 
    0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 0x3, 0x77, 
    0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 
    0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 
    0x5ea, 0xa, 0x77, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 
    0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 
    0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x7a, 
    0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 
    0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 
    0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x634, 0xa, 0x7c, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 
    0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 
    0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 
    0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 
    0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x65a, 0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 
    0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x5, 0x81, 
    0x66a, 0xa, 0x81, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 
    0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 
    0x83, 0x3, 0x83, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 
    0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
    0x84, 0x5, 0x84, 0x685, 0xa, 0x84, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x5, 0x85, 0x68b, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 
    0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 
    0x5, 0x87, 0x6aa, 0xa, 0x87, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x88, 0x5, 0x88, 0x6b2, 0xa, 0x88, 0x3, 0x89, 0x3, 0x89, 
    0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x5, 0x8a, 0x6b9, 0xa, 0x8a, 0x3, 0x8a, 
    0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x5, 0x8b, 0x6c0, 0xa, 0x8b, 
    0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x6c7, 
    0xa, 0x8c, 0x3, 0x8c, 0x5, 0x8c, 0x6ca, 0xa, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 
    0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 
    0x8c, 0x5, 0x8c, 0x6d5, 0xa, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 
    0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
    0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 
    0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x5, 0x8d, 0x6eb, 0xa, 0x8d, 
    0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 0x3, 0x8f, 0x3, 
    0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 
    0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 
    0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 
    0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 0x92, 0x3, 
    0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 0x3, 0x94, 
    0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 0x3, 
    0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x96, 0x3, 0x96, 0x3, 0x96, 
    0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 
    0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x5, 0x98, 0x72c, 
    0xa, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x99, 0x3, 0x99, 0x3, 
    0x99, 0x3, 0x99, 0x5, 0x99, 0x735, 0xa, 0x99, 0x3, 0x99, 0x3, 0x99, 
    0x3, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9b, 0x3, 
    0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 
    0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 
    0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 
    0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 
    0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 
    0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa1, 0x3, 0xa1, 0x3, 
    0xa1, 0x7, 0xa1, 0x767, 0xa, 0xa1, 0xc, 0xa1, 0xe, 0xa1, 0x76a, 0xb, 
    0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x5, 0xa1, 0x76f, 0xa, 0xa1, 
    0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 
    0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
    0x3, 0xa4, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 
    0xa5, 0x3, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 
    0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
    0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 
    0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
    0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 
    0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
    0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 
    0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x5, 0xa9, 0x7b7, 
    0xa, 0xa9, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 
    0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x7c1, 0xa, 0xaa, 0x3, 0xaa, 
    0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 
    0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x5, 0xaa, 0x7ce, 0xa, 0xaa, 
    0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 
    0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xac, 
    0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 
    0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 
    0x5, 0xac, 0x7ea, 0xa, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 
    0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 
    0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xad, 0x3, 0xad, 
    0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 
    0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 
    0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x80d, 0xa, 0xae, 0x3, 0xaf, 
    0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 0xaf, 0x3, 
    0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 
    0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 
    0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 
    0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
    0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb2, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 
    0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb4, 0x3, 
    0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb5, 
    0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
    0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb6, 
    0x5, 0xb6, 0x851, 0xa, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 
    0x3, 0xb9, 0x3, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
    0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
    0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
    0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
    0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x873, 0xa, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 
    0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x87a, 0xa, 0xbf, 0x3, 0xbf, 
    0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 
    0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x887, 0xa, 0xc0, 
    0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x5, 0xc1, 0x88e, 
    0xa, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x5, 0xc2, 0x892, 0xa, 0xc2, 0x3, 0xc3, 
    0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 
    0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
    0x3, 0xc4, 0x3, 0xc4, 0x7, 0xc4, 0x8a4, 0xa, 0xc4, 0xc, 0xc4, 0xe, 0xc4, 
    0x8a7, 0xb, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
    0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
    0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
    0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 
    0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
    0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 0x5, 0xc5, 0x8cb, 0xa, 0xc5, 0x3, 0xc6, 
    0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
    0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
    0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
    0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
    0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 
    0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 
    0x5, 0xc6, 0x8f5, 0xa, 0xc6, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 
    0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x5, 
    0xc7, 0x901, 0xa, 0xc7, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
    0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x909, 0xa, 0xc8, 0x3, 0xc9, 0x3, 0xc9, 
    0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x5, 0xc9, 0x912, 
    0xa, 0xc9, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
    0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 
    0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 
    0xca, 0x3, 0xca, 0x3, 0xca, 0x3, 0xca, 0x5, 0xca, 0x92a, 0xa, 0xca, 
    0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 
    0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x3, 0xcb, 0x5, 0xcb, 0x937, 
    0xa, 0xcb, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x3, 0xcc, 0x5, 0xcc, 0x93d, 
    0xa, 0xcc, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x3, 0xcd, 0x6, 
    0xcd, 0x944, 0xa, 0xcd, 0xd, 0xcd, 0xe, 0xcd, 0x945, 0x3, 0xce, 0x3, 
    0xce, 0x3, 0xce, 0x3, 0xce, 0x3, 0xce, 0x6, 0xce, 0x94d, 0xa, 0xce, 
    0xd, 0xce, 0xe, 0xce, 0x94e, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 0x3, 0xcf, 
    0x3, 0xcf, 0x6, 0xcf, 0x956, 0xa, 0xcf, 0xd, 0xcf, 0xe, 0xcf, 0x957, 
    0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x3, 
    0xd0, 0x3, 0xd0, 0x3, 0xd0, 0x5, 0xd0, 0x963, 0xa, 0xd0, 0x3, 0xd1, 
    0x6, 0xd1, 0x966, 0xa, 0xd1, 0xd, 0xd1, 0xe, 0xd1, 0x967, 0x3, 0xd1, 
    0x3, 0xd1, 0x3, 0xd1, 0x2, 0x4, 0x1a, 0x186, 0xd2, 0x2, 0x4, 0x6, 0x8, 
    0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
    0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
    0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 
    0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 
    0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 
    0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 
    0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0xb0, 
    0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 
    0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 0xe0, 
    0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf8, 
    0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 0x10e, 
    0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 0x122, 
    0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 0x136, 
    0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 0x14a, 
    0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 0x15e, 
    0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 0x172, 
    0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 0x186, 
    0x188, 0x18a, 0x18c, 0x18e, 0x190, 0x192, 0x194, 0x196, 0x198, 0x19a, 
    0x19c, 0x19e, 0x1a0, 0x2, 0xb, 0x5, 0x2, 0x5, 0x5, 0x24, 0x24, 0xab, 
    0xab, 0x5, 0x2, 0xc, 0xc, 0x17, 0x17, 0x27, 0x27, 0x4, 0x2, 0x1b, 0x1b, 
    0x30, 0x30, 0x5, 0x2, 0x1b, 0x1b, 0x30, 0x30, 0x96, 0x96, 0x4, 0x2, 
    0x5d, 0x5e, 0xa8, 0xa8, 0x4, 0x2, 0x11, 0x11, 0x46, 0x46, 0x4, 0x2, 
    0x5a, 0x5a, 0x7e, 0x7e, 0x5, 0x2, 0x14, 0x14, 0xbd, 0xbd, 0xc2, 0xc2, 
    0x4, 0x2, 0xbe, 0xbe, 0xc3, 0xc3, 0x2, 0x9e4, 0x2, 0x1a7, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1ae, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1b4, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x1bd, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x14, 0x1c7, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1d2, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1f8, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x20, 0x201, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x203, 0x3, 0x2, 0x2, 0x2, 0x24, 0x20b, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x211, 0x3, 0x2, 0x2, 0x2, 0x28, 0x214, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x21b, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x223, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x32, 0x233, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x36, 0x23c, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x241, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x246, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x24a, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x42, 0x251, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x25c, 0x3, 0x2, 0x2, 0x2, 0x46, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x48, 0x261, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x26e, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x272, 0x3, 0x2, 0x2, 0x2, 0x50, 0x276, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x279, 0x3, 0x2, 0x2, 0x2, 0x54, 0x27c, 0x3, 0x2, 0x2, 
    0x2, 0x56, 0x286, 0x3, 0x2, 0x2, 0x2, 0x58, 0x29b, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x2ac, 0x3, 0x2, 0x2, 0x2, 0x60, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x62, 0x2bf, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x2c2, 0x3, 0x2, 0x2, 0x2, 0x66, 0x2ca, 0x3, 
    0x2, 0x2, 0x2, 0x68, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x2db, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x2e7, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2ee, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x2fa, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x30a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x316, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x318, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x321, 0x3, 0x2, 0x2, 0x2, 0x80, 0x327, 0x3, 
    0x2, 0x2, 0x2, 0x82, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x84, 0x332, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x337, 0x3, 0x2, 0x2, 0x2, 0x88, 0x33d, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x344, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x349, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x34e, 0x3, 0x2, 0x2, 0x2, 0x90, 0x356, 0x3, 0x2, 0x2, 0x2, 0x92, 
    0x35e, 0x3, 0x2, 0x2, 0x2, 0x94, 0x366, 0x3, 0x2, 0x2, 0x2, 0x96, 0x38f, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x391, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x395, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x398, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x3a7, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0x3b0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x3ec, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0x3ee, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x3fe, 0x3, 0x2, 0x2, 0x2, 
    0xa8, 0x401, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x418, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0x442, 0x3, 0x2, 0x2, 0x2, 0xae, 0x44c, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x44e, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0x452, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x457, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0x45d, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x463, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0x46f, 0x3, 0x2, 0x2, 0x2, 0xbc, 0x474, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0x481, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x4bd, 0x3, 0x2, 0x2, 0x2, 
    0xc2, 0x4ce, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x4d0, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0x4e1, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x4e3, 0x3, 0x2, 0x2, 0x2, 0xca, 0x524, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0x540, 0x3, 0x2, 0x2, 0x2, 0xce, 0x558, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0x55a, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x55c, 0x3, 0x2, 
    0x2, 0x2, 0xd4, 0x55e, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x563, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0x568, 0x3, 0x2, 0x2, 0x2, 0xda, 0x56c, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0x585, 0x3, 0x2, 0x2, 0x2, 0xde, 0x593, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0x59e, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x5a4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x5b3, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0x5cb, 0x3, 0x2, 0x2, 0x2, 0xe8, 0x5cd, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0xec, 0x5e9, 0x3, 0x2, 
    0x2, 0x2, 0xee, 0x5eb, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x5f4, 0x3, 0x2, 0x2, 
    0x2, 0xf2, 0x5fc, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x602, 0x3, 0x2, 0x2, 0x2, 
    0xf6, 0x633, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x635, 0x3, 0x2, 0x2, 0x2, 0xfa, 
    0x646, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x659, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x65b, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x669, 0x3, 0x2, 0x2, 0x2, 0x102, 0x66b, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x671, 0x3, 0x2, 0x2, 0x2, 0x106, 0x684, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x68a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x68c, 
    0x3, 0x2, 0x2, 0x2, 0x10c, 0x6a9, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x6b1, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x6b3, 0x3, 0x2, 0x2, 0x2, 0x112, 0x6b6, 
    0x3, 0x2, 0x2, 0x2, 0x114, 0x6bd, 0x3, 0x2, 0x2, 0x2, 0x116, 0x6d4, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x6ec, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x6f0, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x6f5, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x700, 0x3, 0x2, 0x2, 0x2, 0x122, 0x704, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x70c, 0x3, 0x2, 0x2, 0x2, 0x126, 0x711, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x718, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x71d, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x722, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x726, 
    0x3, 0x2, 0x2, 0x2, 0x130, 0x730, 0x3, 0x2, 0x2, 0x2, 0x132, 0x739, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0x73d, 0x3, 0x2, 0x2, 0x2, 0x136, 0x741, 
    0x3, 0x2, 0x2, 0x2, 0x138, 0x74b, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x755, 
    0x3, 0x2, 0x2, 0x2, 0x13c, 0x758, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x75d, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x763, 0x3, 0x2, 0x2, 0x2, 0x142, 0x770, 
    0x3, 0x2, 0x2, 0x2, 0x144, 0x776, 0x3, 0x2, 0x2, 0x2, 0x146, 0x77a, 
    0x3, 0x2, 0x2, 0x2, 0x148, 0x77e, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x785, 
    0x3, 0x2, 0x2, 0x2, 0x14c, 0x78c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x790, 
    0x3, 0x2, 0x2, 0x2, 0x150, 0x7b6, 0x3, 0x2, 0x2, 0x2, 0x152, 0x7cd, 
    0x3, 0x2, 0x2, 0x2, 0x154, 0x7cf, 0x3, 0x2, 0x2, 0x2, 0x156, 0x7db, 
    0x3, 0x2, 0x2, 0x2, 0x158, 0x7fa, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x80c, 
    0x3, 0x2, 0x2, 0x2, 0x15c, 0x80e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x815, 
    0x3, 0x2, 0x2, 0x2, 0x160, 0x81f, 0x3, 0x2, 0x2, 0x2, 0x162, 0x82d, 
    0x3, 0x2, 0x2, 0x2, 0x164, 0x833, 0x3, 0x2, 0x2, 0x2, 0x166, 0x83b, 
    0x3, 0x2, 0x2, 0x2, 0x168, 0x842, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x850, 
    0x3, 0x2, 0x2, 0x2, 0x16c, 0x852, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x854, 
    0x3, 0x2, 0x2, 0x2, 0x170, 0x856, 0x3, 0x2, 0x2, 0x2, 0x172, 0x858, 
    0x3, 0x2, 0x2, 0x2, 0x174, 0x85a, 0x3, 0x2, 0x2, 0x2, 0x176, 0x85d, 
    0x3, 0x2, 0x2, 0x2, 0x178, 0x865, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x86d, 
    0x3, 0x2, 0x2, 0x2, 0x17c, 0x870, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x886, 
    0x3, 0x2, 0x2, 0x2, 0x180, 0x88d, 0x3, 0x2, 0x2, 0x2, 0x182, 0x891, 
    0x3, 0x2, 0x2, 0x2, 0x184, 0x893, 0x3, 0x2, 0x2, 0x2, 0x186, 0x89b, 
    0x3, 0x2, 0x2, 0x2, 0x188, 0x8ca, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x8f4, 
    0x3, 0x2, 0x2, 0x2, 0x18c, 0x900, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x908, 
    0x3, 0x2, 0x2, 0x2, 0x190, 0x911, 0x3, 0x2, 0x2, 0x2, 0x192, 0x929, 
    0x3, 0x2, 0x2, 0x2, 0x194, 0x936, 0x3, 0x2, 0x2, 0x2, 0x196, 0x93c, 
    0x3, 0x2, 0x2, 0x2, 0x198, 0x93e, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x947, 
    0x3, 0x2, 0x2, 0x2, 0x19c, 0x950, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x962, 
    0x3, 0x2, 0x2, 0x2, 0x1a0, 0x965, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a8, 
    0x7, 0x6, 0x2, 0x2, 0x1a3, 0x1a8, 0x7, 0x43, 0x2, 0x2, 0x1a4, 0x1a5, 
    0x7, 0xa, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 0x1f, 0x2, 0x2, 0x1a6, 0x1a8, 
    0x7, 0x6d, 0x2, 0x2, 0x1a7, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a3, 
    0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 
    0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1aa, 0x7, 0x7, 0x2, 0x2, 0x1aa, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x7, 0x1c, 0x2, 0x2, 0x1ac, 0x1ad, 0x7, 
    0x7, 0x2, 0x2, 0x1ad, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x1c, 
    0x2, 0x2, 0x1af, 0x1b0, 0x5, 0x34, 0x1b, 0x2, 0x1b0, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x1b1, 0x1b2, 0x7, 0x1c, 0x2, 0x2, 0x1b2, 0x1b3, 0x5, 0x8a, 
    0x46, 0x2, 0x1b3, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x6, 0x2, 
    0x2, 0x1b5, 0x1b6, 0x5, 0x8a, 0x46, 0x2, 0x1b6, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x1b7, 0x1b8, 0x7, 0x1c, 0x2, 0x2, 0x1b8, 0x1b9, 0x5, 0x6e, 0x38, 
    0x2, 0x1b9, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x1c, 0x2, 0x2, 
    0x1bb, 0x1bc, 0x5, 0x6e, 0x38, 0x2, 0x1bc, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x1bd, 0x1be, 0x7, 0x13, 0x2, 0x2, 0x1be, 0x1bf, 0x5, 0x32, 0x1a, 0x2, 
    0x1bf, 0x1c0, 0x7, 0x18, 0x2, 0x2, 0x1c0, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x1c1, 0x1c2, 0x7, 0x91, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x92, 0x2, 0x2, 
    0x1c3, 0x1c4, 0x5, 0x17e, 0xc0, 0x2, 0x1c4, 0x1c5, 0x7, 0xb, 0x2, 0x2, 
    0x1c5, 0x1c6, 0x7, 0x25, 0x2, 0x2, 0x1c6, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x1c7, 0x1c8, 0x7, 0x91, 0x2, 0x2, 0x1c8, 0x1c9, 0x7, 0x92, 0x2, 0x2, 
    0x1c9, 0x1ca, 0x5, 0x17e, 0xc0, 0x2, 0x1ca, 0x1cb, 0x7, 0xb, 0x2, 0x2, 
    0x1cb, 0x1cc, 0x7, 0x25, 0x2, 0x2, 0x1cc, 0x1cd, 0x7, 0x26, 0x2, 0x2, 
    0x1cd, 0x1ce, 0x5, 0x34, 0x1b, 0x2, 0x1ce, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x1cf, 0x1d0, 0x9, 0x2, 0x2, 0x2, 0x1d0, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1d1, 
    0x1d3, 0x7, 0x23, 0x2, 0x2, 0x1d2, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x1d2, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d4, 
    0x1d6, 0x7, 0x47, 0x2, 0x2, 0x1d5, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d5, 
    0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1d7, 
    0x1d9, 0x7, 0x48, 0x2, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
    0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 
    0x1db, 0x5, 0x16, 0xc, 0x2, 0x1db, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1dc, 
    0x1dd, 0x8, 0xe, 0x1, 0x2, 0x1dd, 0x1de, 0x5, 0x18, 0xd, 0x2, 0x1de, 
    0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0xc, 0xc, 0x2, 0x2, 0x1e0, 
    0x1f4, 0x5, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0xc, 0xb, 0x2, 0x2, 0x1e2, 
    0x1f4, 0x5, 0x4, 0x3, 0x2, 0x1e3, 0x1e4, 0xc, 0xa, 0x2, 0x2, 0x1e4, 
    0x1f4, 0x5, 0x6, 0x4, 0x2, 0x1e5, 0x1e6, 0xc, 0x9, 0x2, 0x2, 0x1e6, 
    0x1f4, 0x5, 0x8, 0x5, 0x2, 0x1e7, 0x1e8, 0xc, 0x8, 0x2, 0x2, 0x1e8, 
    0x1f4, 0x5, 0xa, 0x6, 0x2, 0x1e9, 0x1ea, 0xc, 0x7, 0x2, 0x2, 0x1ea, 
    0x1f4, 0x5, 0xc, 0x7, 0x2, 0x1eb, 0x1ec, 0xc, 0x6, 0x2, 0x2, 0x1ec, 
    0x1f4, 0x5, 0xe, 0x8, 0x2, 0x1ed, 0x1ee, 0xc, 0x5, 0x2, 0x2, 0x1ee, 
    0x1f4, 0x5, 0x10, 0x9, 0x2, 0x1ef, 0x1f0, 0xc, 0x4, 0x2, 0x2, 0x1f0, 
    0x1f4, 0x5, 0x12, 0xa, 0x2, 0x1f1, 0x1f2, 0xc, 0x3, 0x2, 0x2, 0x1f2, 
    0x1f4, 0x5, 0x14, 0xb, 0x2, 0x1f3, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f3, 
    0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f5, 
    0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f6, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 
    0x5, 0x1a, 0xe, 0x2, 0x1f9, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 
    0x9, 0x3, 0x2, 0x2, 0x1fb, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x202, 0x7, 
    0x8, 0x2, 0x2, 0x1fd, 0x202, 0x7, 0x2c, 0x2, 0x2, 0x1fe, 0x1ff, 0x7, 
    0xa, 0x2, 0x2, 0x1ff, 0x202, 0x5, 0x16, 0xc, 0x2, 0x200, 0x202, 0x7, 
    0x35, 0x2, 0x2, 0x201, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x201, 0x1fd, 0x3, 
    0x2, 0x2, 0x2, 0x201, 0x1fe, 0x3, 0x2, 0x2, 0x2, 0x201, 0x200, 0x3, 
    0x2, 0x2, 0x2, 0x202, 0x21, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x7, 0x3c, 
    0x2, 0x2, 0x204, 0x205, 0x7, 0x61, 0x2, 0x2, 0x205, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x206, 0x207, 0x5, 0x60, 0x31, 0x2, 0x207, 0x208, 0x7, 0xf, 
    0x2, 0x2, 0x208, 0x20c, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x7, 0x3c, 
    0x2, 0x2, 0x20a, 0x20c, 0x7, 0xf, 0x2, 0x2, 0x20b, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x25, 0x3, 0x2, 0x2, 
    0x2, 0x20d, 0x212, 0x5, 0x20, 0x11, 0x2, 0x20e, 0x212, 0x5, 0x1e, 0x10, 
    0x2, 0x20f, 0x212, 0x5, 0x22, 0x12, 0x2, 0x210, 0x212, 0x5, 0x24, 0x13, 
    0x2, 0x211, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20e, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 
    0x2, 0x212, 0x27, 0x3, 0x2, 0x2, 0x2, 0x213, 0x215, 0x7, 0x23, 0x2, 
    0x2, 0x214, 0x213, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 
    0x2, 0x215, 0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x7, 0x4, 0x2, 
    0x2, 0x217, 0x218, 0x5, 0x1c, 0xf, 0x2, 0x218, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x219, 0x21c, 0x5, 0x28, 0x15, 0x2, 0x21a, 0x21c, 0x5, 0x26, 0x14, 
    0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21a, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21f, 0x5, 0x9a, 0x4e, 
    0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 
    0x2, 0x21f, 0x220, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x5, 0x17e, 0xc0, 
    0x2, 0x221, 0x222, 0x5, 0x28, 0x15, 0x2, 0x222, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x223, 0x224, 0x9, 0x4, 0x2, 0x2, 0x224, 0x225, 0x7, 0xbc, 0x2, 
    0x2, 0x225, 0x226, 0x5, 0x1c, 0xf, 0x2, 0x226, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x227, 0x228, 0x9, 0x5, 0x2, 0x2, 0x228, 0x22e, 0x5, 0x1c, 0xf, 
    0x2, 0x229, 0x22a, 0x7, 0xc, 0x2, 0x2, 0x22a, 0x22b, 0x7, 0x45, 0x2, 
    0x2, 0x22b, 0x22c, 0x7, 0x23, 0x2, 0x2, 0x22c, 0x22e, 0x7, 0x24, 0x2, 
    0x2, 0x22d, 0x227, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x229, 0x3, 0x2, 0x2, 
    0x2, 0x22e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x234, 0x5, 0x2a, 0x16, 
    0x2, 0x230, 0x234, 0x5, 0x2c, 0x17, 0x2, 0x231, 0x234, 0x5, 0x30, 0x19, 
    0x2, 0x232, 0x234, 0x5, 0x2e, 0x18, 0x2, 0x233, 0x22f, 0x3, 0x2, 0x2, 
    0x2, 0x233, 0x230, 0x3, 0x2, 0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 
    0x2, 0x233, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x235, 0x237, 0x7, 0x14, 0x2, 0x2, 0x236, 0x235, 0x3, 0x2, 0x2, 0x2, 
    0x236, 0x237, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 0x2, 0x2, 
    0x238, 0x23b, 0x5, 0x1c, 0xf, 0x2, 0x239, 0x23b, 0x5, 0x32, 0x1a, 0x2, 
    0x23a, 0x236, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x239, 0x3, 0x2, 0x2, 0x2, 
    0x23b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x5, 0x2, 0x2, 0x23d, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x2f, 0x2, 0x2, 0x23f, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x240, 0x242, 0x7, 0x49, 0x2, 0x2, 0x241, 
    0x240, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 0x2, 0x2, 0x242, 
    0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x7, 0x4b, 0x2, 0x2, 0x244, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x245, 0x247, 0x7, 0x49, 0x2, 0x2, 0x246, 
    0x245, 0x3, 0x2, 0x2, 0x2, 0x246, 0x247, 0x3, 0x2, 0x2, 0x2, 0x247, 
    0x248, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x7, 0x4a, 0x2, 0x2, 0x249, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x85, 0x2, 0x2, 0x24b, 
    0x3f, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x7, 0x23, 0x2, 0x2, 0x24d, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x252, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x252, 
    0x7, 0xe, 0x2, 0x2, 0x250, 0x252, 0x5, 0x26, 0x14, 0x2, 0x251, 0x24e, 
    0x3, 0x2, 0x2, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x250, 
    0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 
    0x9, 0x6, 0x2, 0x2, 0x254, 0x43, 0x3, 0x2, 0x2, 0x2, 0x255, 0x25d, 0x5, 
    0x36, 0x1c, 0x2, 0x256, 0x25d, 0x5, 0x38, 0x1d, 0x2, 0x257, 0x25d, 0x5, 
    0x3a, 0x1e, 0x2, 0x258, 0x25d, 0x5, 0x3c, 0x1f, 0x2, 0x259, 0x25d, 0x5, 
    0x3e, 0x20, 0x2, 0x25a, 0x25d, 0x5, 0x40, 0x21, 0x2, 0x25b, 0x25d, 0x5, 
    0x42, 0x22, 0x2, 0x25c, 0x255, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x256, 0x3, 
    0x2, 0x2, 0x2, 0x25c, 0x257, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x258, 0x3, 
    0x2, 0x2, 0x2, 0x25c, 0x259, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25a, 0x3, 
    0x2, 0x2, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x25e, 0x25f, 0x7, 0x3f, 0x2, 0x2, 0x25f, 0x260, 0x5, 0x34, 
    0x1b, 0x2, 0x260, 0x47, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x7, 0x43, 
    0x2, 0x2, 0x262, 0x263, 0x7, 0x14, 0x2, 0x2, 0x263, 0x264, 0x7, 0x3e, 
    0x2, 0x2, 0x264, 0x265, 0x7, 0x44, 0x2, 0x2, 0x265, 0x266, 0x7, 0x13, 
    0x2, 0x2, 0x266, 0x267, 0x5, 0x17e, 0xc0, 0x2, 0x267, 0x268, 0x7, 0x45, 
    0x2, 0x2, 0x268, 0x269, 0x9, 0x7, 0x2, 0x2, 0x269, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x26a, 0x26b, 0x7, 0x2f, 0x2, 0x2, 0x26b, 0x26c, 0x7, 0x19, 0x2, 
    0x2, 0x26c, 0x26d, 0x5, 0x34, 0x1b, 0x2, 0x26d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x26e, 0x26f, 0x7, 0x2f, 0x2, 0x2, 0x26f, 0x270, 0x7, 0x19, 0x2, 
    0x2, 0x270, 0x271, 0x5, 0x8a, 0x46, 0x2, 0x271, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x272, 0x273, 0x7, 0x47, 0x2, 0x2, 0x273, 0x274, 0x7, 0x21, 0x2, 
    0x2, 0x274, 0x275, 0x5, 0x34, 0x1b, 0x2, 0x275, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x276, 0x277, 0x7, 0x43, 0x2, 0x2, 0x277, 0x278, 0x7, 0x8c, 0x2, 
    0x2, 0x278, 0x51, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x7, 0x43, 0x2, 
    0x2, 0x27a, 0x27b, 0x7, 0x73, 0x2, 0x2, 0x27b, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x27c, 0x27d, 0x7, 0x26, 0x2, 0x2, 0x27d, 0x27e, 0x7, 0x17, 0x2, 
    0x2, 0x27e, 0x27f, 0x7, 0x62, 0x2, 0x2, 0x27f, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x280, 0x281, 0x7, 0x76, 0x2, 0x2, 0x281, 0x287, 0x7, 0x55, 0x2, 
    0x2, 0x282, 0x283, 0x7, 0xa9, 0x2, 0x2, 0x283, 0x284, 0x5, 0x26, 0x14, 
    0x2, 0x284, 0x285, 0x7, 0x55, 0x2, 0x2, 0x285, 0x287, 0x3, 0x2, 0x2, 
    0x2, 0x286, 0x280, 0x3, 0x2, 0x2, 0x2, 0x286, 0x282, 0x3, 0x2, 0x2, 
    0x2, 0x287, 0x57, 0x3, 0x2, 0x2, 0x2, 0x288, 0x29c, 0x5, 0x46, 0x24, 
    0x2, 0x289, 0x29c, 0x5, 0x48, 0x25, 0x2, 0x28a, 0x29c, 0x5, 0x4a, 0x26, 
    0x2, 0x28b, 0x29c, 0x5, 0x4c, 0x27, 0x2, 0x28c, 0x29c, 0x5, 0x4e, 0x28, 
    0x2, 0x28d, 0x29c, 0x5, 0x50, 0x29, 0x2, 0x28e, 0x29c, 0x5, 0x52, 0x2a, 
    0x2, 0x28f, 0x29c, 0x5, 0x54, 0x2b, 0x2, 0x290, 0x29c, 0x5, 0x56, 0x2c, 
    0x2, 0x291, 0x29c, 0x5, 0x2, 0x2, 0x2, 0x292, 0x29c, 0x5, 0x4, 0x3, 
    0x2, 0x293, 0x29c, 0x5, 0x6, 0x4, 0x2, 0x294, 0x29c, 0x5, 0x8, 0x5, 
    0x2, 0x295, 0x29c, 0x5, 0xa, 0x6, 0x2, 0x296, 0x29c, 0x5, 0xc, 0x7, 
    0x2, 0x297, 0x29c, 0x5, 0xe, 0x8, 0x2, 0x298, 0x29c, 0x5, 0x10, 0x9, 
    0x2, 0x299, 0x29c, 0x5, 0x12, 0xa, 0x2, 0x29a, 0x29c, 0x5, 0x14, 0xb, 
    0x2, 0x29b, 0x288, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x289, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x28b, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x28d, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x28f, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x290, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x291, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x292, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x293, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x294, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x295, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x296, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x297, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x299, 0x3, 0x2, 0x2, 
    0x2, 0x29b, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x29d, 0x29f, 0x5, 0x44, 0x23, 0x2, 0x29e, 0x29d, 0x3, 0x2, 0x2, 0x2, 
    0x29f, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x29e, 0x3, 0x2, 0x2, 0x2, 
    0x2a0, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a3, 0x3, 0x2, 0x2, 0x2, 
    0x2a2, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a7, 0x7, 0x2e, 0x2, 0x2, 
    0x2a4, 0x2a6, 0x5, 0x58, 0x2d, 0x2, 0x2a5, 0x2a4, 0x3, 0x2, 0x2, 0x2, 
    0x2a6, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a5, 0x3, 0x2, 0x2, 0x2, 
    0x2a7, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x2a9, 
    0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2ab, 0x7, 0xc0, 0x2, 0x2, 0x2ab, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0xe, 0x2, 0x2, 0x2ad, 0x2ae, 
    0x7, 0x65, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x2e, 0x2, 0x2, 0x2af, 0x2b0, 
    0x7, 0x13, 0x2, 0x2, 0x2b0, 0x2b1, 0x5, 0x34, 0x1b, 0x2, 0x2b1, 0x2b2, 
    0x7, 0x66, 0x2, 0x2, 0x2b2, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 
    0x7, 0xa, 0x2, 0x2, 0x2b4, 0x2be, 0x7, 0x2e, 0x2, 0x2, 0x2b5, 0x2b6, 
    0x7, 0xe, 0x2, 0x2, 0x2b6, 0x2be, 0x7, 0x2e, 0x2, 0x2, 0x2b7, 0x2be, 
    0x7, 0x3c, 0x2, 0x2, 0x2b8, 0x2be, 0x7, 0xcf, 0x2, 0x2, 0x2b9, 0x2ba, 
    0x7, 0xcf, 0x2, 0x2, 0x2ba, 0x2bb, 0x7, 0x26, 0x2, 0x2, 0x2bb, 0x2bc, 
    0x7, 0x17, 0x2, 0x2, 0x2bc, 0x2be, 0x7, 0x62, 0x2, 0x2, 0x2bd, 0x2b3, 
    0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2b7, 
    0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2b9, 
    0x3, 0x2, 0x2, 0x2, 0x2be, 0x61, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x7, 
    0x4, 0x2, 0x2, 0x2c0, 0x2c1, 0x5, 0x5a, 0x2e, 0x2, 0x2c1, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x7, 0x14, 0x2, 0x2, 0x2c3, 0x2c4, 0x5, 
    0x5a, 0x2e, 0x2, 0x2c4, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2cb, 0x5, 
    0x5c, 0x2f, 0x2, 0x2c6, 0x2cb, 0x5, 0x62, 0x32, 0x2, 0x2c7, 0x2cb, 0x5, 
    0x5e, 0x30, 0x2, 0x2c8, 0x2cb, 0x5, 0x60, 0x31, 0x2, 0x2c9, 0x2cb, 0x5, 
    0x64, 0x33, 0x2, 0x2ca, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c6, 0x3, 
    0x2, 0x2, 0x2, 0x2ca, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2c8, 0x3, 
    0x2, 0x2, 0x2, 0x2ca, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2cb, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x2cc, 0x2cd, 0x7, 0x30, 0x2, 0x2, 0x2cd, 0x2ce, 0x5, 0x5a, 
    0x2e, 0x2, 0x2ce, 0x69, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d1, 0x5, 0x9a, 
    0x4e, 0x2, 0x2d0, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 
    0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x5, 0x17e, 
    0xc0, 0x2, 0x2d3, 0x2d4, 0x5, 0x62, 0x32, 0x2, 0x2d4, 0x2dc, 0x3, 0x2, 
    0x2, 0x2, 0x2d5, 0x2d7, 0x5, 0x9a, 0x4e, 0x2, 0x2d6, 0x2d5, 0x3, 0x2, 
    0x2, 0x2, 0x2d6, 0x2d7, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x3, 0x2, 
    0x2, 0x2, 0x2d8, 0x2d9, 0x5, 0x17e, 0xc0, 0x2, 0x2d9, 0x2da, 0x5, 0x5a, 
    0x2e, 0x2, 0x2da, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d0, 0x3, 0x2, 
    0x2, 0x2, 0x2db, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x2dd, 0x2e1, 0x5, 0x66, 0x34, 0x2, 0x2de, 0x2e1, 0x5, 0x68, 0x35, 
    0x2, 0x2df, 0x2e1, 0x5, 0x6a, 0x36, 0x2, 0x2e0, 0x2dd, 0x3, 0x2, 0x2, 
    0x2, 0x2e0, 0x2de, 0x3, 0x2, 0x2, 0x2, 0x2e0, 0x2df, 0x3, 0x2, 0x2, 
    0x2, 0x2e1, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2e2, 0x2e4, 0x7, 0x14, 0x2, 
    0x2, 0x2e3, 0x2e2, 0x3, 0x2, 0x2, 0x2, 0x2e3, 0x2e4, 0x3, 0x2, 0x2, 
    0x2, 0x2e4, 0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e8, 0x5, 0x5a, 0x2e, 
    0x2, 0x2e6, 0x2e8, 0x5, 0x6c, 0x37, 0x2, 0x2e7, 0x2e3, 0x3, 0x2, 0x2, 
    0x2, 0x2e7, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x2e9, 0x2eb, 0x7, 0x49, 0x2, 0x2, 0x2ea, 0x2e9, 0x3, 0x2, 0x2, 0x2, 
    0x2ea, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2eb, 0x2ec, 0x3, 0x2, 0x2, 0x2, 
    0x2ec, 0x2ed, 0x7, 0x52, 0x2, 0x2, 0x2ed, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x2ee, 0x2ef, 0x5, 0x70, 0x39, 0x2, 0x2ef, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x2f0, 0x2fb, 0x5, 0x2, 0x2, 0x2, 0x2f1, 0x2fb, 0x5, 0x4, 0x3, 0x2, 
    0x2f2, 0x2fb, 0x5, 0x6, 0x4, 0x2, 0x2f3, 0x2fb, 0x5, 0x8, 0x5, 0x2, 
    0x2f4, 0x2fb, 0x5, 0xa, 0x6, 0x2, 0x2f5, 0x2fb, 0x5, 0xc, 0x7, 0x2, 
    0x2f6, 0x2fb, 0x5, 0xe, 0x8, 0x2, 0x2f7, 0x2fb, 0x5, 0x10, 0x9, 0x2, 
    0x2f8, 0x2fb, 0x5, 0x12, 0xa, 0x2, 0x2f9, 0x2fb, 0x5, 0x14, 0xb, 0x2, 
    0x2fa, 0x2f0, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
    0x2fa, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f3, 0x3, 0x2, 0x2, 0x2, 
    0x2fa, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f5, 0x3, 0x2, 0x2, 0x2, 
    0x2fa, 0x2f6, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f7, 0x3, 0x2, 0x2, 0x2, 
    0x2fa, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2f9, 0x3, 0x2, 0x2, 0x2, 
    0x2fb, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2fc, 0x2fe, 0x5, 0x72, 0x3a, 0x2, 
    0x2fd, 0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x301, 0x3, 0x2, 0x2, 0x2, 
    0x2ff, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x300, 0x3, 0x2, 0x2, 0x2, 
    0x300, 0x302, 0x3, 0x2, 0x2, 0x2, 0x301, 0x2ff, 0x3, 0x2, 0x2, 0x2, 
    0x302, 0x306, 0x7, 0xb, 0x2, 0x2, 0x303, 0x305, 0x5, 0x74, 0x3b, 0x2, 
    0x304, 0x303, 0x3, 0x2, 0x2, 0x2, 0x305, 0x308, 0x3, 0x2, 0x2, 0x2, 
    0x306, 0x304, 0x3, 0x2, 0x2, 0x2, 0x306, 0x307, 0x3, 0x2, 0x2, 0x2, 
    0x307, 0x77, 0x3, 0x2, 0x2, 0x2, 0x308, 0x306, 0x3, 0x2, 0x2, 0x2, 0x309, 
    0x30b, 0x7, 0x23, 0x2, 0x2, 0x30a, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30a, 
    0x30b, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30c, 
    0x30e, 0x5, 0x17e, 0xc0, 0x2, 0x30d, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30d, 
    0x30e, 0x3, 0x2, 0x2, 0x2, 0x30e, 0x30f, 0x3, 0x2, 0x2, 0x2, 0x30f, 
    0x310, 0x7, 0x4, 0x2, 0x2, 0x310, 0x311, 0x5, 0x76, 0x3c, 0x2, 0x311, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x7, 0xa, 0x2, 0x2, 0x313, 0x317, 
    0x7, 0xb, 0x2, 0x2, 0x314, 0x315, 0x7, 0xe, 0x2, 0x2, 0x315, 0x317, 
    0x7, 0xb, 0x2, 0x2, 0x316, 0x312, 0x3, 0x2, 0x2, 0x2, 0x316, 0x314, 
    0x3, 0x2, 0x2, 0x2, 0x317, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x318, 0x319, 0x7, 
    0xe, 0x2, 0x2, 0x319, 0x31a, 0x7, 0x29, 0x2, 0x2, 0x31a, 0x31b, 0x5, 
    0x76, 0x3c, 0x2, 0x31b, 0x31c, 0x7, 0x2a, 0x2, 0x2, 0x31c, 0x31f, 0x7, 
    0x19, 0x2, 0x2, 0x31d, 0x320, 0x5, 0x34, 0x1b, 0x2, 0x31e, 0x320, 0x5, 
    0x6e, 0x38, 0x2, 0x31f, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x31f, 0x31e, 0x3, 
    0x2, 0x2, 0x2, 0x320, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x321, 0x322, 0x7, 0xe, 
    0x2, 0x2, 0x322, 0x323, 0x7, 0xb, 0x2, 0x2, 0x323, 0x324, 0x5, 0x32, 
    0x1a, 0x2, 0x324, 0x325, 0x7, 0x4d, 0x2, 0x2, 0x325, 0x326, 0x7, 0x6, 
    0x2, 0x2, 0x326, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x7, 0x76, 
    0x2, 0x2, 0x328, 0x329, 0x7, 0xb, 0x2, 0x2, 0x329, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x32a, 0x330, 0x5, 0x78, 0x3d, 0x2, 0x32b, 0x330, 0x5, 0x7a, 0x3e, 
    0x2, 0x32c, 0x330, 0x5, 0x7c, 0x3f, 0x2, 0x32d, 0x330, 0x5, 0x7e, 0x40, 
    0x2, 0x32e, 0x330, 0x5, 0x80, 0x41, 0x2, 0x32f, 0x32a, 0x3, 0x2, 0x2, 
    0x2, 0x32f, 0x32b, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x32c, 0x3, 0x2, 0x2, 
    0x2, 0x32f, 0x32d, 0x3, 0x2, 0x2, 0x2, 0x32f, 0x32e, 0x3, 0x2, 0x2, 
    0x2, 0x330, 0x83, 0x3, 0x2, 0x2, 0x2, 0x331, 0x333, 0x5, 0x9a, 0x4e, 
    0x2, 0x332, 0x331, 0x3, 0x2, 0x2, 0x2, 0x332, 0x333, 0x3, 0x2, 0x2, 
    0x2, 0x333, 0x334, 0x3, 0x2, 0x2, 0x2, 0x334, 0x335, 0x5, 0x17e, 0xc0, 
    0x2, 0x335, 0x336, 0x5, 0x78, 0x3d, 0x2, 0x336, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x337, 0x338, 0x9, 0x4, 0x2, 0x2, 0x338, 0x339, 0x5, 0x76, 0x3c, 
    0x2, 0x339, 0x87, 0x3, 0x2, 0x2, 0x2, 0x33a, 0x33e, 0x5, 0x82, 0x42, 
    0x2, 0x33b, 0x33e, 0x5, 0x86, 0x44, 0x2, 0x33c, 0x33e, 0x5, 0x84, 0x43, 
    0x2, 0x33d, 0x33a, 0x3, 0x2, 0x2, 0x2, 0x33d, 0x33b, 0x3, 0x2, 0x2, 
    0x2, 0x33d, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x89, 0x3, 0x2, 0x2, 0x2, 
    0x33f, 0x341, 0x7, 0x14, 0x2, 0x2, 0x340, 0x33f, 0x3, 0x2, 0x2, 0x2, 
    0x340, 0x341, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 0x3, 0x2, 0x2, 0x2, 
    0x342, 0x345, 0x5, 0x76, 0x3c, 0x2, 0x343, 0x345, 0x5, 0x88, 0x45, 0x2, 
    0x344, 0x340, 0x3, 0x2, 0x2, 0x2, 0x344, 0x343, 0x3, 0x2, 0x2, 0x2, 
    0x345, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x346, 0x34a, 0x5, 0x6c, 0x37, 0x2, 
    0x347, 0x34a, 0x5, 0x32, 0x1a, 0x2, 0x348, 0x34a, 0x5, 0x88, 0x45, 0x2, 
    0x349, 0x346, 0x3, 0x2, 0x2, 0x2, 0x349, 0x347, 0x3, 0x2, 0x2, 0x2, 
    0x349, 0x348, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x34b, 
    0x34f, 0x5, 0x6e, 0x38, 0x2, 0x34c, 0x34f, 0x5, 0x34, 0x1b, 0x2, 0x34d, 
    0x34f, 0x5, 0x8a, 0x46, 0x2, 0x34e, 0x34b, 0x3, 0x2, 0x2, 0x2, 0x34e, 
    0x34c, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x34d, 0x3, 0x2, 0x2, 0x2, 0x34f, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x350, 0x351, 0x7, 0x3, 0x2, 0x2, 0x351, 0x352, 
    0x5, 0x17e, 0xc0, 0x2, 0x352, 0x353, 0x5, 0x32, 0x1a, 0x2, 0x353, 0x357, 
    0x3, 0x2, 0x2, 0x2, 0x354, 0x355, 0x7, 0x3, 0x2, 0x2, 0x355, 0x357, 
    0x5, 0x17e, 0xc0, 0x2, 0x356, 0x350, 0x3, 0x2, 0x2, 0x2, 0x356, 0x354, 
    0x3, 0x2, 0x2, 0x2, 0x357, 0x91, 0x3, 0x2, 0x2, 0x2, 0x358, 0x359, 0x7, 
    0x9, 0x2, 0x2, 0x359, 0x35a, 0x5, 0x17e, 0xc0, 0x2, 0x35a, 0x35b, 0x5, 
    0x32, 0x1a, 0x2, 0x35b, 0x35f, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x35d, 0x7, 
    0x9, 0x2, 0x2, 0x35d, 0x35f, 0x5, 0x17e, 0xc0, 0x2, 0x35e, 0x358, 0x3, 
    0x2, 0x2, 0x2, 0x35e, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x93, 0x3, 0x2, 
    0x2, 0x2, 0x360, 0x361, 0x7, 0xd, 0x2, 0x2, 0x361, 0x362, 0x5, 0x17e, 
    0xc0, 0x2, 0x362, 0x363, 0x5, 0x32, 0x1a, 0x2, 0x363, 0x367, 0x3, 0x2, 
    0x2, 0x2, 0x364, 0x365, 0x7, 0xd, 0x2, 0x2, 0x365, 0x367, 0x5, 0x17e, 
    0xc0, 0x2, 0x366, 0x360, 0x3, 0x2, 0x2, 0x2, 0x366, 0x364, 0x3, 0x2, 
    0x2, 0x2, 0x367, 0x95, 0x3, 0x2, 0x2, 0x2, 0x368, 0x369, 0x7, 0x10, 
    0x2, 0x2, 0x369, 0x36a, 0x5, 0x17e, 0xc0, 0x2, 0x36a, 0x36b, 0x7, 0x11, 
    0x2, 0x2, 0x36b, 0x36c, 0x7, 0x12, 0x2, 0x2, 0x36c, 0x36d, 0x7, 0x13, 
    0x2, 0x2, 0x36d, 0x36e, 0x7, 0x14, 0x2, 0x2, 0x36e, 0x36f, 0x7, 0x15, 
    0x2, 0x2, 0x36f, 0x370, 0x7, 0x16, 0x2, 0x2, 0x370, 0x371, 0x7, 0x13, 
    0x2, 0x2, 0x371, 0x372, 0x7, 0x17, 0x2, 0x2, 0x372, 0x373, 0x7, 0x18, 
    0x2, 0x2, 0x373, 0x374, 0x7, 0x19, 0x2, 0x2, 0x374, 0x375, 0x5, 0x32, 
    0x1a, 0x2, 0x375, 0x390, 0x3, 0x2, 0x2, 0x2, 0x376, 0x377, 0x7, 0x10, 
    0x2, 0x2, 0x377, 0x378, 0x7, 0x14, 0x2, 0x2, 0x378, 0x379, 0x7, 0x1a, 
    0x2, 0x2, 0x379, 0x37a, 0x7, 0x13, 0x2, 0x2, 0x37a, 0x37b, 0x7, 0x14, 
    0x2, 0x2, 0x37b, 0x37c, 0x7, 0x15, 0x2, 0x2, 0x37c, 0x37d, 0x7, 0x16, 
    0x2, 0x2, 0x37d, 0x37e, 0x7, 0x13, 0x2, 0x2, 0x37e, 0x37f, 0x7, 0x17, 
    0x2, 0x2, 0x37f, 0x380, 0x7, 0x18, 0x2, 0x2, 0x380, 0x381, 0x7, 0x19, 
    0x2, 0x2, 0x381, 0x390, 0x5, 0x32, 0x1a, 0x2, 0x382, 0x383, 0x7, 0x1d, 
    0x2, 0x2, 0x383, 0x384, 0x7, 0xe, 0x2, 0x2, 0x384, 0x385, 0x7, 0x1e, 
    0x2, 0x2, 0x385, 0x386, 0x7, 0x13, 0x2, 0x2, 0x386, 0x387, 0x7, 0x14, 
    0x2, 0x2, 0x387, 0x388, 0x7, 0x15, 0x2, 0x2, 0x388, 0x389, 0x7, 0x16, 
    0x2, 0x2, 0x389, 0x38a, 0x7, 0x1f, 0x2, 0x2, 0x38a, 0x38b, 0x7, 0x20, 
    0x2, 0x2, 0x38b, 0x38c, 0x5, 0x32, 0x1a, 0x2, 0x38c, 0x38d, 0x7, 0x21, 
    0x2, 0x2, 0x38d, 0x38e, 0x5, 0x17e, 0xc0, 0x2, 0x38e, 0x390, 0x3, 0x2, 
    0x2, 0x2, 0x38f, 0x368, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x376, 0x3, 0x2, 
    0x2, 0x2, 0x38f, 0x382, 0x3, 0x2, 0x2, 0x2, 0x390, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x391, 0x392, 0x7, 0x25, 0x2, 0x2, 0x392, 0x393, 0x7, 0x26, 0x2, 
    0x2, 0x393, 0x394, 0x5, 0x32, 0x1a, 0x2, 0x394, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x395, 0x396, 0x7, 0x28, 0x2, 0x2, 0x396, 0x397, 0x7, 0x19, 0x2, 
    0x2, 0x397, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x398, 0x39a, 0x7, 0x22, 0x2, 
    0x2, 0x399, 0x39b, 0x5, 0x32, 0x1a, 0x2, 0x39a, 0x399, 0x3, 0x2, 0x2, 
    0x2, 0x39a, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39b, 0x39d, 0x3, 0x2, 0x2, 
    0x2, 0x39c, 0x39e, 0x5, 0x9a, 0x4e, 0x2, 0x39d, 0x39c, 0x3, 0x2, 0x2, 
    0x2, 0x39d, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x3a0, 0x3, 0x2, 0x2, 
    0x2, 0x39f, 0x3a1, 0x7, 0x23, 0x2, 0x2, 0x3a0, 0x39f, 0x3, 0x2, 0x2, 
    0x2, 0x3a0, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a2, 0x3, 0x2, 0x2, 
    0x2, 0x3a2, 0x3a3, 0x5, 0x17e, 0xc0, 0x2, 0x3a3, 0x3a5, 0x7, 0xb, 0x2, 
    0x2, 0x3a4, 0x3a6, 0x5, 0x98, 0x4d, 0x2, 0x3a5, 0x3a4, 0x3, 0x2, 0x2, 
    0x2, 0x3a5, 0x3a6, 0x3, 0x2, 0x2, 0x2, 0x3a6, 0x9d, 0x3, 0x2, 0x2, 0x2, 
    0x3a7, 0x3a9, 0x7, 0x22, 0x2, 0x2, 0x3a8, 0x3aa, 0x5, 0x32, 0x1a, 0x2, 
    0x3a9, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a9, 0x3aa, 0x3, 0x2, 0x2, 0x2, 
    0x3aa, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0x3ab, 0x3ae, 0x7, 0x19, 0x2, 0x2, 
    0x3ac, 0x3af, 0x5, 0x88, 0x45, 0x2, 0x3ad, 0x3af, 0x5, 0x6c, 0x37, 0x2, 
    0x3ae, 0x3ac, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3ad, 0x3, 0x2, 0x2, 0x2, 
    0x3af, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b1, 0x7, 0x2d, 0x2, 0x2, 
    0x3b1, 0x3b2, 0x5, 0x6c, 0x37, 0x2, 0x3b2, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0x3b3, 0x3b4, 0x7, 0x31, 0x2, 0x2, 0x3b4, 0x3b5, 0x5, 0x182, 0xc2, 0x2, 
    0x3b5, 0x3b6, 0x7, 0x32, 0x2, 0x2, 0x3b6, 0x3b7, 0x7, 0x19, 0x2, 0x2, 
    0x3b7, 0x3b8, 0x5, 0x32, 0x1a, 0x2, 0x3b8, 0x3ed, 0x3, 0x2, 0x2, 0x2, 
    0x3b9, 0x3ba, 0x7, 0x31, 0x2, 0x2, 0x3ba, 0x3bb, 0x7, 0x32, 0x2, 0x2, 
    0x3bb, 0x3bc, 0x7, 0x19, 0x2, 0x2, 0x3bc, 0x3bd, 0x5, 0x32, 0x1a, 0x2, 
    0x3bd, 0x3be, 0x7, 0x33, 0x2, 0x2, 0x3be, 0x3bf, 0x7, 0x19, 0x2, 0x2, 
    0x3bf, 0x3c0, 0x5, 0x182, 0xc2, 0x2, 0x3c0, 0x3ed, 0x3, 0x2, 0x2, 0x2, 
    0x3c1, 0x3c2, 0x7, 0x31, 0x2, 0x2, 0x3c2, 0x3c3, 0x5, 0x182, 0xc2, 0x2, 
    0x3c3, 0x3c4, 0x7, 0x32, 0x2, 0x2, 0x3c4, 0x3c5, 0x7, 0x19, 0x2, 0x2, 
    0x3c5, 0x3c6, 0x5, 0x32, 0x1a, 0x2, 0x3c6, 0x3c7, 0x7, 0x37, 0x2, 0x2, 
    0x3c7, 0x3c8, 0x7, 0x32, 0x2, 0x2, 0x3c8, 0x3c9, 0x7, 0x33, 0x2, 0x2, 
    0x3c9, 0x3ca, 0x7, 0x19, 0x2, 0x2, 0x3ca, 0x3cb, 0x5, 0x182, 0xc2, 0x2, 
    0x3cb, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 0x7, 0x31, 0x2, 0x2, 
    0x3cd, 0x3ce, 0x5, 0x182, 0xc2, 0x2, 0x3ce, 0x3cf, 0x7, 0x32, 0x2, 0x2, 
    0x3cf, 0x3d0, 0x7, 0x19, 0x2, 0x2, 0x3d0, 0x3ed, 0x3, 0x2, 0x2, 0x2, 
    0x3d1, 0x3d2, 0x7, 0x31, 0x2, 0x2, 0x3d2, 0x3d3, 0x7, 0x32, 0x2, 0x2, 
    0x3d3, 0x3d4, 0x7, 0x19, 0x2, 0x2, 0x3d4, 0x3ed, 0x5, 0x32, 0x1a, 0x2, 
    0x3d5, 0x3d6, 0x7, 0x31, 0x2, 0x2, 0x3d6, 0x3d7, 0x5, 0x182, 0xc2, 0x2, 
    0x3d7, 0x3d8, 0x7, 0x11, 0x2, 0x2, 0x3d8, 0x3d9, 0x7, 0x32, 0x2, 0x2, 
    0x3d9, 0x3da, 0x7, 0x19, 0x2, 0x2, 0x3da, 0x3db, 0x5, 0x32, 0x1a, 0x2, 
    0x3db, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 0x7, 0x31, 0x2, 0x2, 
    0x3dd, 0x3de, 0x5, 0x182, 0xc2, 0x2, 0x3de, 0x3df, 0x7, 0x32, 0x2, 0x2, 
    0x3df, 0x3e0, 0x7, 0x19, 0x2, 0x2, 0x3e0, 0x3e1, 0x5, 0x32, 0x1a, 0x2, 
    0x3e1, 0x3e2, 0x7, 0x37, 0x2, 0x2, 0x3e2, 0x3e3, 0x5, 0x182, 0xc2, 0x2, 
    0x3e3, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e5, 0x7, 0x31, 0x2, 0x2, 
    0x3e5, 0x3e6, 0x7, 0x32, 0x2, 0x2, 0x3e6, 0x3e7, 0x7, 0x19, 0x2, 0x2, 
    0x3e7, 0x3e8, 0x5, 0x32, 0x1a, 0x2, 0x3e8, 0x3e9, 0x7, 0x33, 0x2, 0x2, 
    0x3e9, 0x3ea, 0x7, 0x19, 0x2, 0x2, 0x3ea, 0x3eb, 0x5, 0x182, 0xc2, 0x2, 
    0x3eb, 0x3ed, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3b3, 0x3, 0x2, 0x2, 0x2, 
    0x3ec, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3c1, 0x3, 0x2, 0x2, 0x2, 
    0x3ec, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3d1, 0x3, 0x2, 0x2, 0x2, 
    0x3ec, 0x3d5, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3dc, 0x3, 0x2, 0x2, 0x2, 
    0x3ec, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x3ee, 
    0x3ef, 0x7, 0x3b, 0x2, 0x2, 0x3ef, 0x3f0, 0x5, 0x6c, 0x37, 0x2, 0x3f0, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0x3f2, 0x7, 0x51, 0x2, 0x2, 0x3f2, 
    0x3f3, 0x7, 0x19, 0x2, 0x2, 0x3f3, 0x3ff, 0x5, 0x8c, 0x47, 0x2, 0x3f4, 
    0x3f5, 0x7, 0x51, 0x2, 0x2, 0x3f5, 0x3f6, 0x7, 0x19, 0x2, 0x2, 0x3f6, 
    0x3f7, 0x5, 0x8c, 0x47, 0x2, 0x3f7, 0x3f8, 0x7, 0x53, 0x2, 0x2, 0x3f8, 
    0x3f9, 0x5, 0x108, 0x85, 0x2, 0x3f9, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x3fa, 
    0x3fb, 0x7, 0x51, 0x2, 0x2, 0x3fb, 0x3fc, 0x7, 0xc0, 0x2, 0x2, 0x3fc, 
    0x3fd, 0x7, 0x19, 0x2, 0x2, 0x3fd, 0x3ff, 0x5, 0x8c, 0x47, 0x2, 0x3fe, 
    0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x3fe, 
    0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x400, 0x402, 
    0x5, 0x32, 0x1a, 0x2, 0x401, 0x400, 0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 
    0x3, 0x2, 0x2, 0x2, 0x402, 0x415, 0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 
    0x7, 0x58, 0x2, 0x2, 0x404, 0x405, 0x5, 0x17e, 0xc0, 0x2, 0x405, 0x406, 
    0x7, 0xc9, 0x2, 0x2, 0x406, 0x416, 0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 
    0x7, 0x58, 0x2, 0x2, 0x408, 0x409, 0x5, 0x17e, 0xc0, 0x2, 0x409, 0x40a, 
    0x7, 0x11, 0x2, 0x2, 0x40a, 0x40b, 0x7, 0xc9, 0x2, 0x2, 0x40b, 0x416, 
    0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 0x7, 0x58, 0x2, 0x2, 0x40d, 0x40e, 
    0x5, 0x17e, 0xc0, 0x2, 0x40e, 0x40f, 0x7, 0x59, 0x2, 0x2, 0x40f, 0x410, 
    0x7, 0xc9, 0x2, 0x2, 0x410, 0x416, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 
    0x7, 0x58, 0x2, 0x2, 0x412, 0x413, 0x5, 0x17e, 0xc0, 0x2, 0x413, 0x414, 
    0x7, 0xc9, 0x2, 0x2, 0x414, 0x416, 0x3, 0x2, 0x2, 0x2, 0x415, 0x403, 
    0x3, 0x2, 0x2, 0x2, 0x415, 0x407, 0x3, 0x2, 0x2, 0x2, 0x415, 0x40c, 
    0x3, 0x2, 0x2, 0x2, 0x415, 0x411, 0x3, 0x2, 0x2, 0x2, 0x416, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0x417, 0x419, 0x5, 0x32, 0x1a, 0x2, 0x418, 0x417, 0x3, 
    0x2, 0x2, 0x2, 0x418, 0x419, 0x3, 0x2, 0x2, 0x2, 0x419, 0x42c, 0x3, 
    0x2, 0x2, 0x2, 0x41a, 0x41b, 0x7, 0x58, 0x2, 0x2, 0x41b, 0x41c, 0x5, 
    0x17e, 0xc0, 0x2, 0x41c, 0x41d, 0x7, 0xca, 0x2, 0x2, 0x41d, 0x42d, 0x3, 
    0x2, 0x2, 0x2, 0x41e, 0x41f, 0x7, 0x58, 0x2, 0x2, 0x41f, 0x420, 0x5, 
    0x17e, 0xc0, 0x2, 0x420, 0x421, 0x7, 0x11, 0x2, 0x2, 0x421, 0x422, 0x7, 
    0xca, 0x2, 0x2, 0x422, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 0x7, 
    0x58, 0x2, 0x2, 0x424, 0x425, 0x5, 0x17e, 0xc0, 0x2, 0x425, 0x426, 0x7, 
    0x59, 0x2, 0x2, 0x426, 0x427, 0x7, 0xca, 0x2, 0x2, 0x427, 0x42d, 0x3, 
    0x2, 0x2, 0x2, 0x428, 0x429, 0x7, 0x58, 0x2, 0x2, 0x429, 0x42a, 0x5, 
    0x17e, 0xc0, 0x2, 0x42a, 0x42b, 0x7, 0xca, 0x2, 0x2, 0x42b, 0x42d, 0x3, 
    0x2, 0x2, 0x2, 0x42c, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x41e, 0x3, 
    0x2, 0x2, 0x2, 0x42c, 0x423, 0x3, 0x2, 0x2, 0x2, 0x42c, 0x428, 0x3, 
    0x2, 0x2, 0x2, 0x42d, 0xab, 0x3, 0x2, 0x2, 0x2, 0x42e, 0x430, 0x7, 0x58, 
    0x2, 0x2, 0x42f, 0x431, 0x7, 0xcb, 0x2, 0x2, 0x430, 0x42f, 0x3, 0x2, 
    0x2, 0x2, 0x431, 0x432, 0x3, 0x2, 0x2, 0x2, 0x432, 0x430, 0x3, 0x2, 
    0x2, 0x2, 0x432, 0x433, 0x3, 0x2, 0x2, 0x2, 0x433, 0x443, 0x3, 0x2, 
    0x2, 0x2, 0x434, 0x435, 0x5, 0x32, 0x1a, 0x2, 0x435, 0x437, 0x7, 0x58, 
    0x2, 0x2, 0x436, 0x438, 0x7, 0xcb, 0x2, 0x2, 0x437, 0x436, 0x3, 0x2, 
    0x2, 0x2, 0x438, 0x439, 0x3, 0x2, 0x2, 0x2, 0x439, 0x437, 0x3, 0x2, 
    0x2, 0x2, 0x439, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43a, 0x443, 0x3, 0x2, 
    0x2, 0x2, 0x43b, 0x43c, 0x7, 0x58, 0x2, 0x2, 0x43c, 0x43e, 0x7, 0x23, 
    0x2, 0x2, 0x43d, 0x43f, 0x7, 0xcb, 0x2, 0x2, 0x43e, 0x43d, 0x3, 0x2, 
    0x2, 0x2, 0x43f, 0x440, 0x3, 0x2, 0x2, 0x2, 0x440, 0x43e, 0x3, 0x2, 
    0x2, 0x2, 0x440, 0x441, 0x3, 0x2, 0x2, 0x2, 0x441, 0x443, 0x3, 0x2, 
    0x2, 0x2, 0x442, 0x42e, 0x3, 0x2, 0x2, 0x2, 0x442, 0x434, 0x3, 0x2, 
    0x2, 0x2, 0x442, 0x43b, 0x3, 0x2, 0x2, 0x2, 0x443, 0xad, 0x3, 0x2, 0x2, 
    0x2, 0x444, 0x445, 0x5, 0x32, 0x1a, 0x2, 0x445, 0x446, 0x7, 0x5a, 0x2, 
    0x2, 0x446, 0x447, 0x7, 0x38, 0x2, 0x2, 0x447, 0x448, 0x5, 0x17e, 0xc0, 
    0x2, 0x448, 0x44d, 0x3, 0x2, 0x2, 0x2, 0x449, 0x44a, 0x7, 0x58, 0x2, 
    0x2, 0x44a, 0x44b, 0x7, 0x38, 0x2, 0x2, 0x44b, 0x44d, 0x5, 0x17e, 0xc0, 
    0x2, 0x44c, 0x444, 0x3, 0x2, 0x2, 0x2, 0x44c, 0x449, 0x3, 0x2, 0x2, 
    0x2, 0x44d, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44f, 0x7, 0x5b, 0x2, 
    0x2, 0x44f, 0x450, 0x7, 0x17, 0x2, 0x2, 0x450, 0x451, 0x7, 0x38, 0x2, 
    0x2, 0x451, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x452, 0x453, 0x7, 0x5c, 0x2, 
    0x2, 0x453, 0x454, 0x7, 0x17, 0x2, 0x2, 0x454, 0x455, 0x7, 0x5d, 0x2, 
    0x2, 0x455, 0x456, 0x7, 0x5f, 0x2, 0x2, 0x456, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0x457, 0x458, 0x7, 0x60, 0x2, 0x2, 0x458, 0x459, 0x5, 0x6c, 0x37, 
    0x2, 0x459, 0x45a, 0x7, 0x19, 0x2, 0x2, 0x45a, 0x45b, 0x5, 0x26, 0x14, 
    0x2, 0x45b, 0x45c, 0x7, 0x36, 0x2, 0x2, 0x45c, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0x45d, 0x45e, 0x7, 0x64, 0x2, 0x2, 0x45e, 0x45f, 0x5, 0x6e, 0x38, 
    0x2, 0x45f, 0x460, 0x7, 0x67, 0x2, 0x2, 0x460, 0x461, 0x7, 0x17, 0x2, 
    0x2, 0x461, 0x462, 0x7, 0x36, 0x2, 0x2, 0x462, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0x463, 0x464, 0x7, 0x68, 0x2, 0x2, 0x464, 0x465, 0x7, 0x17, 0x2, 
    0x2, 0x465, 0x466, 0x7, 0x69, 0x2, 0x2, 0x466, 0x467, 0x7, 0x6a, 0x2, 
    0x2, 0x467, 0x468, 0x7, 0x6b, 0x2, 0x2, 0x468, 0x469, 0x7, 0x6c, 0x2, 
    0x2, 0x469, 0x46a, 0x7, 0x17, 0x2, 0x2, 0x46a, 0x46b, 0x7, 0x55, 0x2, 
    0x2, 0x46b, 0x46c, 0x7, 0x6d, 0x2, 0x2, 0x46c, 0x46d, 0x7, 0x6e, 0x2, 
    0x2, 0x46d, 0x46e, 0x7, 0x6f, 0x2, 0x2, 0x46e, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0x46f, 0x470, 0x7, 0x39, 0x2, 0x2, 0x470, 0x471, 0x5, 0x17e, 0xc0, 
    0x2, 0x471, 0x472, 0x7, 0x46, 0x2, 0x2, 0x472, 0x473, 0x7, 0x3e, 0x2, 
    0x2, 0x473, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x474, 0x475, 0x7, 0x39, 0x2, 
    0x2, 0x475, 0x476, 0x7, 0x72, 0x2, 0x2, 0x476, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0x477, 0x478, 0x7, 0x71, 0x2, 0x2, 0x478, 0x482, 0x5, 0x6c, 0x37, 
    0x2, 0x479, 0x47a, 0x7, 0x71, 0x2, 0x2, 0x47a, 0x47b, 0x5, 0x6c, 0x37, 
    0x2, 0x47b, 0x47c, 0x5, 0xbc, 0x5f, 0x2, 0x47c, 0x482, 0x3, 0x2, 0x2, 
    0x2, 0x47d, 0x47e, 0x7, 0x71, 0x2, 0x2, 0x47e, 0x47f, 0x5, 0x6c, 0x37, 
    0x2, 0x47f, 0x480, 0x5, 0xba, 0x5e, 0x2, 0x480, 0x482, 0x3, 0x2, 0x2, 
    0x2, 0x481, 0x477, 0x3, 0x2, 0x2, 0x2, 0x481, 0x479, 0x3, 0x2, 0x2, 
    0x2, 0x481, 0x47d, 0x3, 0x2, 0x2, 0x2, 0x482, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0x483, 0x484, 0x7, 0x71, 0x2, 0x2, 0x484, 0x488, 0x7, 0x90, 0x2, 0x2, 
    0x485, 0x487, 0x5, 0x58, 0x2d, 0x2, 0x486, 0x485, 0x3, 0x2, 0x2, 0x2, 
    0x487, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x488, 0x486, 0x3, 0x2, 0x2, 0x2, 
    0x488, 0x489, 0x3, 0x2, 0x2, 0x2, 0x489, 0x48b, 0x3, 0x2, 0x2, 0x2, 
    0x48a, 0x488, 0x3, 0x2, 0x2, 0x2, 0x48b, 0x48c, 0x7, 0xc6, 0x2, 0x2, 
    0x48c, 0x48d, 0x7, 0x76, 0x2, 0x2, 0x48d, 0x48e, 0x7, 0x77, 0x2, 0x2, 
    0x48e, 0x48f, 0x7, 0x78, 0x2, 0x2, 0x48f, 0x490, 0x7, 0x79, 0x2, 0x2, 
    0x490, 0x491, 0x7, 0x17, 0x2, 0x2, 0x491, 0x492, 0x7, 0x90, 0x2, 0x2, 
    0x492, 0x493, 0x7, 0x7a, 0x2, 0x2, 0x493, 0x494, 0x7, 0x7b, 0x2, 0x2, 
    0x494, 0x4be, 0x7, 0x55, 0x2, 0x2, 0x495, 0x496, 0x7, 0x71, 0x2, 0x2, 
    0x496, 0x49a, 0x7, 0x90, 0x2, 0x2, 0x497, 0x499, 0x5, 0x58, 0x2d, 0x2, 
    0x498, 0x497, 0x3, 0x2, 0x2, 0x2, 0x499, 0x49c, 0x3, 0x2, 0x2, 0x2, 
    0x49a, 0x498, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x49b, 0x3, 0x2, 0x2, 0x2, 
    0x49b, 0x49d, 0x3, 0x2, 0x2, 0x2, 0x49c, 0x49a, 0x3, 0x2, 0x2, 0x2, 
    0x49d, 0x49e, 0x5, 0xbc, 0x5f, 0x2, 0x49e, 0x49f, 0x7, 0xc6, 0x2, 0x2, 
    0x49f, 0x4a0, 0x7, 0x76, 0x2, 0x2, 0x4a0, 0x4a1, 0x7, 0x77, 0x2, 0x2, 
    0x4a1, 0x4a2, 0x7, 0x78, 0x2, 0x2, 0x4a2, 0x4a3, 0x7, 0x79, 0x2, 0x2, 
    0x4a3, 0x4a4, 0x7, 0x17, 0x2, 0x2, 0x4a4, 0x4a5, 0x7, 0x90, 0x2, 0x2, 
    0x4a5, 0x4a6, 0x7, 0x7a, 0x2, 0x2, 0x4a6, 0x4a7, 0x7, 0x7b, 0x2, 0x2, 
    0x4a7, 0x4a8, 0x7, 0x55, 0x2, 0x2, 0x4a8, 0x4be, 0x3, 0x2, 0x2, 0x2, 
    0x4a9, 0x4aa, 0x7, 0x71, 0x2, 0x2, 0x4aa, 0x4ae, 0x7, 0x90, 0x2, 0x2, 
    0x4ab, 0x4ad, 0x5, 0x58, 0x2d, 0x2, 0x4ac, 0x4ab, 0x3, 0x2, 0x2, 0x2, 
    0x4ad, 0x4b0, 0x3, 0x2, 0x2, 0x2, 0x4ae, 0x4ac, 0x3, 0x2, 0x2, 0x2, 
    0x4ae, 0x4af, 0x3, 0x2, 0x2, 0x2, 0x4af, 0x4b1, 0x3, 0x2, 0x2, 0x2, 
    0x4b0, 0x4ae, 0x3, 0x2, 0x2, 0x2, 0x4b1, 0x4b2, 0x5, 0xba, 0x5e, 0x2, 
    0x4b2, 0x4b3, 0x7, 0xc6, 0x2, 0x2, 0x4b3, 0x4b4, 0x7, 0x76, 0x2, 0x2, 
    0x4b4, 0x4b5, 0x7, 0x77, 0x2, 0x2, 0x4b5, 0x4b6, 0x7, 0x78, 0x2, 0x2, 
    0x4b6, 0x4b7, 0x7, 0x79, 0x2, 0x2, 0x4b7, 0x4b8, 0x7, 0x17, 0x2, 0x2, 
    0x4b8, 0x4b9, 0x7, 0x90, 0x2, 0x2, 0x4b9, 0x4ba, 0x7, 0x7a, 0x2, 0x2, 
    0x4ba, 0x4bb, 0x7, 0x7b, 0x2, 0x2, 0x4bb, 0x4bc, 0x7, 0x55, 0x2, 0x2, 
    0x4bc, 0x4be, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x483, 0x3, 0x2, 0x2, 0x2, 
    0x4bd, 0x495, 0x3, 0x2, 0x2, 0x2, 0x4bd, 0x4a9, 0x3, 0x2, 0x2, 0x2, 
    0x4be, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x4bf, 0x4c0, 0x7, 0x62, 0x2, 0x2, 
    0x4c0, 0x4c1, 0x5, 0x17e, 0xc0, 0x2, 0x4c1, 0x4c2, 0x5, 0x6c, 0x37, 
    0x2, 0x4c2, 0x4cf, 0x3, 0x2, 0x2, 0x2, 0x4c3, 0x4c4, 0x7, 0x62, 0x2, 
    0x2, 0x4c4, 0x4cf, 0x5, 0x6c, 0x37, 0x2, 0x4c5, 0x4c6, 0x5, 0x32, 0x1a, 
    0x2, 0x4c6, 0x4c7, 0x7, 0x62, 0x2, 0x2, 0x4c7, 0x4c8, 0x5, 0x17e, 0xc0, 
    0x2, 0x4c8, 0x4c9, 0x5, 0x6c, 0x37, 0x2, 0x4c9, 0x4cf, 0x3, 0x2, 0x2, 
    0x2, 0x4ca, 0x4cb, 0x5, 0x32, 0x1a, 0x2, 0x4cb, 0x4cc, 0x7, 0x62, 0x2, 
    0x2, 0x4cc, 0x4cd, 0x5, 0x6c, 0x37, 0x2, 0x4cd, 0x4cf, 0x3, 0x2, 0x2, 
    0x2, 0x4ce, 0x4bf, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4c3, 0x3, 0x2, 0x2, 
    0x2, 0x4ce, 0x4c5, 0x3, 0x2, 0x2, 0x2, 0x4ce, 0x4ca, 0x3, 0x2, 0x2, 
    0x2, 0x4cf, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x4d0, 0x4d1, 0x7, 0xa, 0x2, 0x2, 
    0x4d1, 0x4d2, 0x7, 0x2e, 0x2, 0x2, 0x4d2, 0x4d3, 0x7, 0x5a, 0x2, 0x2, 
    0x4d3, 0x4d4, 0x7, 0x7f, 0x2, 0x2, 0x4d4, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0x4d5, 0x4d6, 0x7, 0x80, 0x2, 0x2, 0x4d6, 0x4d7, 0x5, 0x32, 0x1a, 0x2, 
    0x4d7, 0x4d8, 0x5, 0x17e, 0xc0, 0x2, 0x4d8, 0x4d9, 0x7, 0x81, 0x2, 0x2, 
    0x4d9, 0x4e2, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x7, 0x80, 0x2, 0x2, 
    0x4db, 0x4dc, 0x5, 0x32, 0x1a, 0x2, 0x4dc, 0x4dd, 0x7, 0x81, 0x2, 0x2, 
    0x4dd, 0x4de, 0x7, 0x33, 0x2, 0x2, 0x4de, 0x4df, 0x7, 0x19, 0x2, 0x2, 
    0x4df, 0x4e0, 0x5, 0x182, 0xc2, 0x2, 0x4e0, 0x4e2, 0x3, 0x2, 0x2, 0x2, 
    0x4e1, 0x4d5, 0x3, 0x2, 0x2, 0x2, 0x4e1, 0x4da, 0x3, 0x2, 0x2, 0x2, 
    0x4e2, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x4e3, 0x4e4, 0x7, 0x82, 0x2, 0x2, 
    0x4e4, 0x4e5, 0x5, 0x32, 0x1a, 0x2, 0x4e5, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0x4e6, 0x4e7, 0x5, 0x32, 0x1a, 0x2, 0x4e7, 0x4e8, 0x7, 0x85, 0x2, 0x2, 
    0x4e8, 0x4e9, 0x5, 0x17e, 0xc0, 0x2, 0x4e9, 0x4ea, 0x7, 0x2e, 0x2, 0x2, 
    0x4ea, 0x4eb, 0x7, 0x26, 0x2, 0x2, 0x4eb, 0x4ec, 0x7, 0x35, 0x2, 0x2, 
    0x4ec, 0x4ed, 0x7, 0x36, 0x2, 0x2, 0x4ed, 0x525, 0x3, 0x2, 0x2, 0x2, 
    0x4ee, 0x4ef, 0x5, 0x32, 0x1a, 0x2, 0x4ef, 0x4f0, 0x7, 0x85, 0x2, 0x2, 
    0x4f0, 0x4f1, 0x5, 0x17e, 0xc0, 0x2, 0x4f1, 0x4f2, 0x7, 0x2e, 0x2, 0x2, 
    0x4f2, 0x4f3, 0x7, 0x26, 0x2, 0x2, 0x4f3, 0x4f4, 0x7, 0x35, 0x2, 0x2, 
    0x4f4, 0x4f5, 0x7, 0x36, 0x2, 0x2, 0x4f5, 0x525, 0x3, 0x2, 0x2, 0x2, 
    0x4f6, 0x4f7, 0x5, 0x32, 0x1a, 0x2, 0x4f7, 0x4f8, 0x7, 0x85, 0x2, 0x2, 
    0x4f8, 0x4f9, 0x7, 0x14, 0x2, 0x2, 0x4f9, 0x4fa, 0x7, 0x2e, 0x2, 0x2, 
    0x4fa, 0x4fb, 0x7, 0x26, 0x2, 0x2, 0x4fb, 0x4fc, 0x7, 0x35, 0x2, 0x2, 
    0x4fc, 0x4fd, 0x7, 0x36, 0x2, 0x2, 0x4fd, 0x525, 0x3, 0x2, 0x2, 0x2, 
    0x4fe, 0x4ff, 0x5, 0x32, 0x1a, 0x2, 0x4ff, 0x500, 0x7, 0x85, 0x2, 0x2, 
    0x500, 0x501, 0x7, 0x14, 0x2, 0x2, 0x501, 0x502, 0x7, 0x2e, 0x2, 0x2, 
    0x502, 0x503, 0x7, 0x26, 0x2, 0x2, 0x503, 0x504, 0x7, 0x35, 0x2, 0x2, 
    0x504, 0x505, 0x7, 0x36, 0x2, 0x2, 0x505, 0x525, 0x3, 0x2, 0x2, 0x2, 
    0x506, 0x507, 0x5, 0x32, 0x1a, 0x2, 0x507, 0x508, 0x7, 0x85, 0x2, 0x2, 
    0x508, 0x509, 0x5, 0x17e, 0xc0, 0x2, 0x509, 0x50a, 0x7, 0x2e, 0x2, 0x2, 
    0x50a, 0x50b, 0x7, 0x26, 0x2, 0x2, 0x50b, 0x50c, 0x7, 0x35, 0x2, 0x2, 
    0x50c, 0x50d, 0x7, 0x36, 0x2, 0x2, 0x50d, 0x525, 0x3, 0x2, 0x2, 0x2, 
    0x50e, 0x50f, 0x5, 0x32, 0x1a, 0x2, 0x50f, 0x510, 0x7, 0x85, 0x2, 0x2, 
    0x510, 0x511, 0x7, 0x14, 0x2, 0x2, 0x511, 0x512, 0x7, 0x2e, 0x2, 0x2, 
    0x512, 0x513, 0x7, 0x26, 0x2, 0x2, 0x513, 0x514, 0x7, 0x35, 0x2, 0x2, 
    0x514, 0x515, 0x7, 0x36, 0x2, 0x2, 0x515, 0x525, 0x3, 0x2, 0x2, 0x2, 
    0x516, 0x517, 0x7, 0x85, 0x2, 0x2, 0x517, 0x525, 0x7, 0xc0, 0x2, 0x2, 
    0x518, 0x519, 0x7, 0x85, 0x2, 0x2, 0x519, 0x51a, 0x7, 0x14, 0x2, 0x2, 
    0x51a, 0x51b, 0x7, 0x2e, 0x2, 0x2, 0x51b, 0x51c, 0x7, 0x26, 0x2, 0x2, 
    0x51c, 0x51d, 0x7, 0x17, 0x2, 0x2, 0x51d, 0x525, 0x7, 0x36, 0x2, 0x2, 
    0x51e, 0x51f, 0x7, 0x85, 0x2, 0x2, 0x51f, 0x520, 0x7, 0x14, 0x2, 0x2, 
    0x520, 0x521, 0x7, 0x2e, 0x2, 0x2, 0x521, 0x522, 0x7, 0x26, 0x2, 0x2, 
    0x522, 0x523, 0x7, 0x35, 0x2, 0x2, 0x523, 0x525, 0x7, 0x36, 0x2, 0x2, 
    0x524, 0x4e6, 0x3, 0x2, 0x2, 0x2, 0x524, 0x4ee, 0x3, 0x2, 0x2, 0x2, 
    0x524, 0x4f6, 0x3, 0x2, 0x2, 0x2, 0x524, 0x4fe, 0x3, 0x2, 0x2, 0x2, 
    0x524, 0x506, 0x3, 0x2, 0x2, 0x2, 0x524, 0x50e, 0x3, 0x2, 0x2, 0x2, 
    0x524, 0x516, 0x3, 0x2, 0x2, 0x2, 0x524, 0x518, 0x3, 0x2, 0x2, 0x2, 
    0x524, 0x51e, 0x3, 0x2, 0x2, 0x2, 0x525, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x526, 
    0x527, 0x7, 0x86, 0x2, 0x2, 0x527, 0x528, 0x7, 0x14, 0x2, 0x2, 0x528, 
    0x541, 0x7, 0x2e, 0x2, 0x2, 0x529, 0x52a, 0x7, 0x86, 0x2, 0x2, 0x52a, 
    0x52b, 0x5, 0x17e, 0xc0, 0x2, 0x52b, 0x52c, 0x7, 0x2e, 0x2, 0x2, 0x52c, 
    0x541, 0x3, 0x2, 0x2, 0x2, 0x52d, 0x52e, 0x7, 0x86, 0x2, 0x2, 0x52e, 
    0x52f, 0x7, 0x14, 0x2, 0x2, 0x52f, 0x530, 0x7, 0x59, 0x2, 0x2, 0x530, 
    0x541, 0x7, 0x2e, 0x2, 0x2, 0x531, 0x532, 0x5, 0x32, 0x1a, 0x2, 0x532, 
    0x533, 0x7, 0x86, 0x2, 0x2, 0x533, 0x534, 0x5, 0x17e, 0xc0, 0x2, 0x534, 
    0x535, 0x7, 0x2e, 0x2, 0x2, 0x535, 0x541, 0x3, 0x2, 0x2, 0x2, 0x536, 
    0x537, 0x5, 0x32, 0x1a, 0x2, 0x537, 0x538, 0x7, 0x86, 0x2, 0x2, 0x538, 
    0x539, 0x5, 0x17e, 0xc0, 0x2, 0x539, 0x53a, 0x7, 0x2e, 0x2, 0x2, 0x53a, 
    0x541, 0x3, 0x2, 0x2, 0x2, 0x53b, 0x53c, 0x5, 0x32, 0x1a, 0x2, 0x53c, 
    0x53d, 0x7, 0x86, 0x2, 0x2, 0x53d, 0x53e, 0x7, 0x14, 0x2, 0x2, 0x53e, 
    0x53f, 0x7, 0x2e, 0x2, 0x2, 0x53f, 0x541, 0x3, 0x2, 0x2, 0x2, 0x540, 
    0x526, 0x3, 0x2, 0x2, 0x2, 0x540, 0x529, 0x3, 0x2, 0x2, 0x2, 0x540, 
    0x52d, 0x3, 0x2, 0x2, 0x2, 0x540, 0x531, 0x3, 0x2, 0x2, 0x2, 0x540, 
    0x536, 0x3, 0x2, 0x2, 0x2, 0x540, 0x53b, 0x3, 0x2, 0x2, 0x2, 0x541, 
    0xcd, 0x3, 0x2, 0x2, 0x2, 0x542, 0x543, 0x7, 0x8b, 0x2, 0x2, 0x543, 
    0x544, 0x7, 0x28, 0x2, 0x2, 0x544, 0x545, 0x7, 0x19, 0x2, 0x2, 0x545, 
    0x546, 0x5, 0x17e, 0xc0, 0x2, 0x546, 0x547, 0x7, 0x12, 0x2, 0x2, 0x547, 
    0x548, 0x7, 0x13, 0x2, 0x2, 0x548, 0x549, 0x7, 0x15, 0x2, 0x2, 0x549, 
    0x54a, 0x7, 0x26, 0x2, 0x2, 0x54a, 0x54b, 0x5, 0x32, 0x1a, 0x2, 0x54b, 
    0x559, 0x3, 0x2, 0x2, 0x2, 0x54c, 0x54d, 0x7, 0x8b, 0x2, 0x2, 0x54d, 
    0x54e, 0x7, 0x30, 0x2, 0x2, 0x54e, 0x54f, 0x7, 0x15, 0x2, 0x2, 0x54f, 
    0x550, 0x7, 0x20, 0x2, 0x2, 0x550, 0x559, 0x5, 0x32, 0x1a, 0x2, 0x551, 
    0x552, 0x7, 0x8b, 0x2, 0x2, 0x552, 0x553, 0x7, 0x14, 0x2, 0x2, 0x553, 
    0x554, 0x7, 0x1a, 0x2, 0x2, 0x554, 0x555, 0x7, 0x13, 0x2, 0x2, 0x555, 
    0x556, 0x7, 0x15, 0x2, 0x2, 0x556, 0x557, 0x7, 0x26, 0x2, 0x2, 0x557, 
    0x559, 0x5, 0x32, 0x1a, 0x2, 0x558, 0x542, 0x3, 0x2, 0x2, 0x2, 0x558, 
    0x54c, 0x3, 0x2, 0x2, 0x2, 0x558, 0x551, 0x3, 0x2, 0x2, 0x2, 0x559, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 0x7, 0x8c, 0x2, 0x2, 0x55b, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0x55c, 0x55d, 0x7, 0x8d, 0x2, 0x2, 0x55d, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0x55e, 0x55f, 0x7, 0x8e, 0x2, 0x2, 0x55f, 
    0x560, 0x5, 0x88, 0x45, 0x2, 0x560, 0x561, 0x7, 0x8f, 0x2, 0x2, 0x561, 
    0x562, 0x7, 0x7, 0x2, 0x2, 0x562, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x563, 0x564, 
    0x7, 0x8b, 0x2, 0x2, 0x564, 0x565, 0x7, 0x4, 0x2, 0x2, 0x565, 0x566, 
    0x7, 0x7, 0x2, 0x2, 0x566, 0x567, 0x7, 0x93, 0x2, 0x2, 0x567, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0x568, 0x569, 0x7, 0x3d, 0x2, 0x2, 0x569, 0x56a, 
    0x5, 0x17e, 0xc0, 0x2, 0x56a, 0x56b, 0x7, 0x3e, 0x2, 0x2, 0x56b, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0x56c, 0x56d, 0x7, 0x94, 0x2, 0x2, 0x56d, 0x56e, 
    0x7, 0x91, 0x2, 0x2, 0x56e, 0x56f, 0x7, 0xe, 0x2, 0x2, 0x56f, 0x570, 
    0x7, 0x95, 0x2, 0x2, 0x570, 0x571, 0x5, 0x17e, 0xc0, 0x2, 0x571, 0x572, 
    0x7, 0x2e, 0x2, 0x2, 0x572, 0x573, 0x7, 0x13, 0x2, 0x2, 0x573, 0x574, 
    0x7, 0x17, 0x2, 0x2, 0x574, 0x575, 0x7, 0x66, 0x2, 0x2, 0x575, 0x576, 
    0x7, 0xc6, 0x2, 0x2, 0x576, 0x577, 0x7, 0x64, 0x2, 0x2, 0x577, 0x578, 
    0x7, 0x96, 0x2, 0x2, 0x578, 0x579, 0x7, 0x34, 0x2, 0x2, 0x579, 0x57a, 
    0x7, 0x97, 0x2, 0x2, 0x57a, 0x57b, 0x7, 0xe, 0x2, 0x2, 0x57b, 0x57c, 
    0x7, 0x65, 0x2, 0x2, 0x57c, 0x57d, 0x7, 0x98, 0x2, 0x2, 0x57d, 0x57e, 
    0x7, 0xe, 0x2, 0x2, 0x57e, 0x57f, 0x7, 0x99, 0x2, 0x2, 0x57f, 0x580, 
    0x7, 0x97, 0x2, 0x2, 0x580, 0x581, 0x7, 0x95, 0x2, 0x2, 0x581, 0x582, 
    0x7, 0x6, 0x2, 0x2, 0x582, 0x583, 0x7, 0x96, 0x2, 0x2, 0x583, 0x584, 
    0x7, 0x9b, 0x2, 0x2, 0x584, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x585, 0x586, 
    0x7, 0xa, 0x2, 0x2, 0x586, 0x587, 0x7, 0x2e, 0x2, 0x2, 0x587, 0x588, 
    0x7, 0x7e, 0x2, 0x2, 0x588, 0x589, 0x7, 0x73, 0x2, 0x2, 0x589, 0x58a, 
    0x7, 0x70, 0x2, 0x2, 0x58a, 0x58b, 0x7, 0x4c, 0x2, 0x2, 0x58b, 0x58c, 
    0x7, 0x9c, 0x2, 0x2, 0x58c, 0x58d, 0x7, 0x24, 0x2, 0x2, 0x58d, 0x58e, 
    0x7, 0x7e, 0x2, 0x2, 0x58e, 0x58f, 0x7, 0x9d, 0x2, 0x2, 0x58f, 0x590, 
    0x7, 0x35, 0x2, 0x2, 0x590, 0x591, 0x7, 0x5d, 0x2, 0x2, 0x591, 0x592, 
    0x7, 0x5f, 0x2, 0x2, 0x592, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x593, 0x594, 
    0x7, 0x1d, 0x2, 0x2, 0x594, 0x595, 0x7, 0xe, 0x2, 0x2, 0x595, 0x596, 
    0x7, 0x69, 0x2, 0x2, 0x596, 0x597, 0x7, 0x13, 0x2, 0x2, 0x597, 0x598, 
    0x7, 0x14, 0x2, 0x2, 0x598, 0x599, 0x7, 0x2e, 0x2, 0x2, 0x599, 0x59a, 
    0x7, 0x27, 0x2, 0x2, 0x59a, 0x59b, 0x7, 0x15, 0x2, 0x2, 0x59b, 0x59c, 
    0x7, 0x21, 0x2, 0x2, 0x59c, 0x59d, 0x5, 0x17e, 0xc0, 0x2, 0x59d, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0x59e, 0x59f, 0x7, 0x9e, 0x2, 0x2, 0x59f, 0x5a0, 
    0x7, 0xe, 0x2, 0x2, 0x5a0, 0x5a1, 0x7, 0x5c, 0x2, 0x2, 0x5a1, 0x5a2, 
    0x7, 0x13, 0x2, 0x2, 0x5a2, 0x5a3, 0x7, 0xc0, 0x2, 0x2, 0x5a3, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0x5a4, 0x5a5, 0x7, 0x7f, 0x2, 0x2, 0x5a5, 0xe3, 
    0x3, 0x2, 0x2, 0x2, 0x5a6, 0x5a7, 0x5, 0x34, 0x1b, 0x2, 0x5a7, 0x5a8, 
    0x7, 0x63, 0x2, 0x2, 0x5a8, 0x5a9, 0x7, 0x9f, 0x2, 0x2, 0x5a9, 0x5aa, 
    0x7, 0x71, 0x2, 0x2, 0x5aa, 0x5ab, 0x7, 0x2e, 0x2, 0x2, 0x5ab, 0x5ac, 
    0x7, 0xa0, 0x2, 0x2, 0x5ac, 0x5ad, 0x7, 0xc0, 0x2, 0x2, 0x5ad, 0x5b4, 
    0x3, 0x2, 0x2, 0x2, 0x5ae, 0x5af, 0x7, 0x9f, 0x2, 0x2, 0x5af, 0x5b0, 
    0x7, 0x71, 0x2, 0x2, 0x5b0, 0x5b1, 0x7, 0xc0, 0x2, 0x2, 0x5b1, 0x5b2, 
    0x7, 0x4c, 0x2, 0x2, 0x5b2, 0x5b4, 0x5, 0x150, 0xa9, 0x2, 0x5b3, 0x5a6, 
    0x3, 0x2, 0x2, 0x2, 0x5b3, 0x5ae, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0xe5, 0x3, 
    0x2, 0x2, 0x2, 0x5b5, 0x5b6, 0x5, 0x6e, 0x38, 0x2, 0x5b6, 0x5b7, 0x5, 
    0x34, 0x1b, 0x2, 0x5b7, 0x5b8, 0x7, 0x71, 0x2, 0x2, 0x5b8, 0x5b9, 0x7, 
    0x44, 0x2, 0x2, 0x5b9, 0x5ba, 0x5, 0x17e, 0xc0, 0x2, 0x5ba, 0x5bb, 0x7, 
    0x46, 0x2, 0x2, 0x5bb, 0x5bc, 0x7, 0x3e, 0x2, 0x2, 0x5bc, 0x5cc, 0x3, 
    0x2, 0x2, 0x2, 0x5bd, 0x5be, 0x7, 0xe, 0x2, 0x2, 0x5be, 0x5bf, 0x7, 
    0x5d, 0x2, 0x2, 0x5bf, 0x5c0, 0x7, 0x4a, 0x2, 0x2, 0x5c0, 0x5c1, 0x7, 
    0x2e, 0x2, 0x2, 0x5c1, 0x5c2, 0x5, 0x34, 0x1b, 0x2, 0x5c2, 0x5c3, 0x7, 
    0x71, 0x2, 0x2, 0x5c3, 0x5c4, 0x7, 0xa9, 0x2, 0x2, 0x5c4, 0x5c5, 0x7, 
    0x17, 0x2, 0x2, 0x5c5, 0x5c6, 0x7, 0x55, 0x2, 0x2, 0x5c6, 0x5c7, 0x7, 
    0x44, 0x2, 0x2, 0x5c7, 0x5c8, 0x5, 0x17e, 0xc0, 0x2, 0x5c8, 0x5c9, 0x7, 
    0x46, 0x2, 0x2, 0x5c9, 0x5ca, 0x7, 0x3e, 0x2, 0x2, 0x5ca, 0x5cc, 0x3, 
    0x2, 0x2, 0x2, 0x5cb, 0x5b5, 0x3, 0x2, 0x2, 0x2, 0x5cb, 0x5bd, 0x3, 
    0x2, 0x2, 0x2, 0x5cc, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x5cd, 0x5ce, 0x7, 0xe, 
    0x2, 0x2, 0x5ce, 0x5cf, 0x7, 0x8a, 0x2, 0x2, 0x5cf, 0x5d0, 0x7, 0x13, 
    0x2, 0x2, 0x5d0, 0x5d1, 0x7, 0x17, 0x2, 0x2, 0x5d1, 0x5d2, 0x7, 0x4a, 
    0x2, 0x2, 0x5d2, 0x5d3, 0x7, 0x2e, 0x2, 0x2, 0x5d3, 0x5d4, 0x7, 0x4d, 
    0x2, 0x2, 0x5d4, 0x5d5, 0x5, 0x17e, 0xc0, 0x2, 0x5d5, 0xe9, 0x3, 0x2, 
    0x2, 0x2, 0x5d6, 0x5d7, 0x5, 0x34, 0x1b, 0x2, 0x5d7, 0x5d8, 0x7, 0xa3, 
    0x2, 0x2, 0x5d8, 0x5d9, 0x7, 0x71, 0x2, 0x2, 0x5d9, 0x5da, 0x7, 0x2e, 
    0x2, 0x2, 0x5da, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x5db, 0x5dc, 0x5, 0x34, 
    0x1b, 0x2, 0x5dc, 0x5dd, 0x7, 0xa3, 0x2, 0x2, 0x5dd, 0x5de, 0x7, 0xa4, 
    0x2, 0x2, 0x5de, 0x5df, 0x7, 0xa5, 0x2, 0x2, 0x5df, 0x5e0, 0x7, 0x21, 
    0x2, 0x2, 0x5e0, 0x5e1, 0x7, 0xa6, 0x2, 0x2, 0x5e1, 0x5ea, 0x3, 0x2, 
    0x2, 0x2, 0x5e2, 0x5e3, 0x5, 0x34, 0x1b, 0x2, 0x5e3, 0x5e4, 0x7, 0xa3, 
    0x2, 0x2, 0x5e4, 0x5e5, 0x7, 0xa4, 0x2, 0x2, 0x5e5, 0x5e6, 0x7, 0xa5, 
    0x2, 0x2, 0x5e6, 0x5e7, 0x7, 0x21, 0x2, 0x2, 0x5e7, 0x5e8, 0x7, 0x2e, 
    0x2, 0x2, 0x5e8, 0x5ea, 0x3, 0x2, 0x2, 0x2, 0x5e9, 0x5db, 0x3, 0x2, 
    0x2, 0x2, 0x5e9, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0x5ea, 0xed, 0x3, 0x2, 0x2, 
    0x2, 0x5eb, 0x5ec, 0x7, 0x17, 0x2, 0x2, 0x5ec, 0x5ed, 0x7, 0x40, 0x2, 
    0x2, 0x5ed, 0x5ee, 0x7, 0x36, 0x2, 0x2, 0x5ee, 0x5ef, 0x7, 0x41, 0x2, 
    0x2, 0x5ef, 0x5f0, 0x7, 0x4d, 0x2, 0x2, 0x5f0, 0x5f1, 0x7, 0x42, 0x2, 
    0x2, 0x5f1, 0x5f2, 0x7, 0x21, 0x2, 0x2, 0x5f2, 0x5f3, 0x5, 0x17e, 0xc0, 
    0x2, 0x5f3, 0xef, 0x3, 0x2, 0x2, 0x2, 0x5f4, 0x5f5, 0x7, 0x17, 0x2, 
    0x2, 0x5f5, 0x5f6, 0x7, 0x40, 0x2, 0x2, 0x5f6, 0x5f7, 0x7, 0x81, 0x2, 
    0x2, 0x5f7, 0x5f8, 0x7, 0x4d, 0x2, 0x2, 0x5f8, 0x5f9, 0x7, 0x42, 0x2, 
    0x2, 0x5f9, 0x5fa, 0x7, 0x21, 0x2, 0x2, 0x5fa, 0x5fb, 0x5, 0x17e, 0xc0, 
    0x2, 0x5fb, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fd, 0x7, 0xc0, 0x2, 
    0x2, 0x5fd, 0x5fe, 0x7, 0x4e, 0x2, 0x2, 0x5fe, 0x5ff, 0x7, 0x17, 0x2, 
    0x2, 0x5ff, 0x600, 0x7, 0x5d, 0x2, 0x2, 0x600, 0x601, 0x7, 0x5f, 0x2, 
    0x2, 0x601, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x602, 0x603, 0x5, 0x34, 0x1b, 
    0x2, 0x603, 0x604, 0x7, 0xb2, 0x2, 0x2, 0x604, 0x605, 0x7, 0x58, 0x2, 
    0x2, 0x605, 0x606, 0x7, 0xcb, 0x2, 0x2, 0x606, 0x607, 0x7, 0x91, 0x2, 
    0x2, 0x607, 0x608, 0x7, 0xe, 0x2, 0x2, 0x608, 0x609, 0x7, 0x57, 0x2, 
    0x2, 0x609, 0x60a, 0x7, 0x13, 0x2, 0x2, 0x60a, 0x60b, 0x7, 0x17, 0x2, 
    0x2, 0x60b, 0x60c, 0x7, 0x55, 0x2, 0x2, 0x60c, 0xf5, 0x3, 0x2, 0x2, 
    0x2, 0x60d, 0x60e, 0x7, 0x30, 0x2, 0x2, 0x60e, 0x60f, 0x7, 0x13, 0x2, 
    0x2, 0x60f, 0x610, 0x5, 0x34, 0x1b, 0x2, 0x610, 0x611, 0x7, 0x2e, 0x2, 
    0x2, 0x611, 0x612, 0x7, 0xc5, 0x2, 0x2, 0x612, 0x613, 0x7, 0x88, 0x2, 
    0x2, 0x613, 0x614, 0x7, 0x22, 0x2, 0x2, 0x614, 0x615, 0x7, 0x2e, 0x2, 
    0x2, 0x615, 0x616, 0x7, 0xa, 0x2, 0x2, 0x616, 0x617, 0x7, 0x4, 0x2, 
    0x2, 0x617, 0x618, 0x7, 0x14, 0x2, 0x2, 0x618, 0x619, 0x7, 0xb, 0x2, 
    0x2, 0x619, 0x61a, 0x7, 0xc5, 0x2, 0x2, 0x61a, 0x61b, 0x7, 0x89, 0x2, 
    0x2, 0x61b, 0x61c, 0x7, 0x86, 0x2, 0x2, 0x61c, 0x61d, 0x7, 0x8a, 0x2, 
    0x2, 0x61d, 0x61e, 0x7, 0x26, 0x2, 0x2, 0x61e, 0x61f, 0x5, 0x6e, 0x38, 
    0x2, 0x61f, 0x634, 0x3, 0x2, 0x2, 0x2, 0x620, 0x621, 0x7, 0x30, 0x2, 
    0x2, 0x621, 0x622, 0x7, 0x13, 0x2, 0x2, 0x622, 0x623, 0x5, 0x34, 0x1b, 
    0x2, 0x623, 0x624, 0x7, 0x2e, 0x2, 0x2, 0x624, 0x625, 0x7, 0xc5, 0x2, 
    0x2, 0x625, 0x626, 0x7, 0x88, 0x2, 0x2, 0x626, 0x627, 0x7, 0x22, 0x2, 
    0x2, 0x627, 0x628, 0x7, 0x2e, 0x2, 0x2, 0x628, 0x629, 0x7, 0xa, 0x2, 
    0x2, 0x629, 0x62a, 0x7, 0x4, 0x2, 0x2, 0x62a, 0x62b, 0x7, 0x14, 0x2, 
    0x2, 0x62b, 0x62c, 0x7, 0xb, 0x2, 0x2, 0x62c, 0x62d, 0x7, 0xc5, 0x2, 
    0x2, 0x62d, 0x62e, 0x7, 0x89, 0x2, 0x2, 0x62e, 0x62f, 0x7, 0x86, 0x2, 
    0x2, 0x62f, 0x630, 0x7, 0x8a, 0x2, 0x2, 0x630, 0x631, 0x7, 0x26, 0x2, 
    0x2, 0x631, 0x632, 0x5, 0x8a, 0x46, 0x2, 0x632, 0x634, 0x3, 0x2, 0x2, 
    0x2, 0x633, 0x60d, 0x3, 0x2, 0x2, 0x2, 0x633, 0x620, 0x3, 0x2, 0x2, 
    0x2, 0x634, 0xf7, 0x3, 0x2, 0x2, 0x2, 0x635, 0x636, 0x7, 0x30, 0x2, 
    0x2, 0x636, 0x637, 0x7, 0x13, 0x2, 0x2, 0x637, 0x638, 0x5, 0x34, 0x1b, 
    0x2, 0x638, 0x639, 0x7, 0x2e, 0x2, 0x2, 0x639, 0x63a, 0x7, 0xc5, 0x2, 
    0x2, 0x63a, 0x63b, 0x7, 0x88, 0x2, 0x2, 0x63b, 0x63c, 0x7, 0x22, 0x2, 
    0x2, 0x63c, 0x63d, 0x7, 0x2e, 0x2, 0x2, 0x63d, 0x63e, 0x7, 0xa, 0x2, 
    0x2, 0x63e, 0x63f, 0x7, 0x4, 0x2, 0x2, 0x63f, 0x640, 0x7, 0x14, 0x2, 
    0x2, 0x640, 0x641, 0x7, 0xb, 0x2, 0x2, 0x641, 0x642, 0x7, 0xc5, 0x2, 
    0x2, 0x642, 0x643, 0x7, 0x58, 0x2, 0x2, 0x643, 0x644, 0x5, 0x17e, 0xc0, 
    0x2, 0x644, 0x645, 0x7, 0x8a, 0x2, 0x2, 0x645, 0xf9, 0x3, 0x2, 0x2, 
    0x2, 0x646, 0x647, 0x7, 0x9f, 0x2, 0x2, 0x647, 0x648, 0x7, 0x4, 0x2, 
    0x2, 0x648, 0x649, 0x7, 0xbc, 0x2, 0x2, 0x649, 0x64a, 0x5, 0x34, 0x1b, 
    0x2, 0x64a, 0x64b, 0x7, 0x4c, 0x2, 0x2, 0x64b, 0x64c, 0x5, 0x150, 0xa9, 
    0x2, 0x64c, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x64d, 0x65a, 0x5, 0xec, 0x77, 
    0x2, 0x64e, 0x65a, 0x5, 0xea, 0x76, 0x2, 0x64f, 0x65a, 0x5, 0xe8, 0x75, 
    0x2, 0x650, 0x65a, 0x5, 0xe6, 0x74, 0x2, 0x651, 0x65a, 0x5, 0xe4, 0x73, 
    0x2, 0x652, 0x65a, 0x5, 0xee, 0x78, 0x2, 0x653, 0x65a, 0x5, 0xf0, 0x79, 
    0x2, 0x654, 0x65a, 0x5, 0xf2, 0x7a, 0x2, 0x655, 0x65a, 0x5, 0xf4, 0x7b, 
    0x2, 0x656, 0x65a, 0x5, 0xf6, 0x7c, 0x2, 0x657, 0x65a, 0x5, 0xf8, 0x7d, 
    0x2, 0x658, 0x65a, 0x5, 0xfa, 0x7e, 0x2, 0x659, 0x64d, 0x3, 0x2, 0x2, 
    0x2, 0x659, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x659, 0x64f, 0x3, 0x2, 0x2, 
    0x2, 0x659, 0x650, 0x3, 0x2, 0x2, 0x2, 0x659, 0x651, 0x3, 0x2, 0x2, 
    0x2, 0x659, 0x652, 0x3, 0x2, 0x2, 0x2, 0x659, 0x653, 0x3, 0x2, 0x2, 
    0x2, 0x659, 0x654, 0x3, 0x2, 0x2, 0x2, 0x659, 0x655, 0x3, 0x2, 0x2, 
    0x2, 0x659, 0x656, 0x3, 0x2, 0x2, 0x2, 0x659, 0x657, 0x3, 0x2, 0x2, 
    0x2, 0x659, 0x658, 0x3, 0x2, 0x2, 0x2, 0x65a, 0xfd, 0x3, 0x2, 0x2, 0x2, 
    0x65b, 0x65c, 0x7, 0x69, 0x2, 0x2, 0x65c, 0xff, 0x3, 0x2, 0x2, 0x2, 
    0x65d, 0x65e, 0x7, 0xe, 0x2, 0x2, 0x65e, 0x65f, 0x7, 0x57, 0x2, 0x2, 
    0x65f, 0x660, 0x7, 0x13, 0x2, 0x2, 0x660, 0x661, 0x5, 0x34, 0x1b, 0x2, 
    0x661, 0x662, 0x7, 0x55, 0x2, 0x2, 0x662, 0x66a, 0x3, 0x2, 0x2, 0x2, 
    0x663, 0x664, 0x7, 0xe, 0x2, 0x2, 0x664, 0x665, 0x7, 0x57, 0x2, 0x2, 
    0x665, 0x666, 0x7, 0x13, 0x2, 0x2, 0x666, 0x667, 0x5, 0x34, 0x1b, 0x2, 
    0x667, 0x668, 0x7, 0x55, 0x2, 0x2, 0x668, 0x66a, 0x3, 0x2, 0x2, 0x2, 
    0x669, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x669, 0x663, 0x3, 0x2, 0x2, 0x2, 
    0x66a, 0x101, 0x3, 0x2, 0x2, 0x2, 0x66b, 0x66c, 0x7, 0xe, 0x2, 0x2, 
    0x66c, 0x66d, 0x7, 0x54, 0x2, 0x2, 0x66d, 0x66e, 0x7, 0x13, 0x2, 0x2, 
    0x66e, 0x66f, 0x5, 0x34, 0x1b, 0x2, 0x66f, 0x670, 0x7, 0x55, 0x2, 0x2, 
    0x670, 0x103, 0x3, 0x2, 0x2, 0x2, 0x671, 0x672, 0x7, 0xe, 0x2, 0x2, 
    0x672, 0x673, 0x7, 0x57, 0x2, 0x2, 0x673, 0x674, 0x7, 0x13, 0x2, 0x2, 
    0x674, 0x675, 0x5, 0x34, 0x1b, 0x2, 0x675, 0x676, 0x7, 0x2a, 0x2, 0x2, 
    0x676, 0x677, 0x7, 0x55, 0x2, 0x2, 0x677, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x678, 0x679, 0x7, 0xe, 0x2, 0x2, 0x679, 0x67a, 0x7, 0x54, 0x2, 0x2, 
    0x67a, 0x67b, 0x7, 0x13, 0x2, 0x2, 0x67b, 0x67c, 0x7, 0xe, 0x2, 0x2, 
    0x67c, 0x685, 0x7, 0x55, 0x2, 0x2, 0x67d, 0x67e, 0x7, 0xe, 0x2, 0x2, 
    0x67e, 0x67f, 0x7, 0x54, 0x2, 0x2, 0x67f, 0x680, 0x7, 0x13, 0x2, 0x2, 
    0x680, 0x685, 0x7, 0x55, 0x2, 0x2, 0x681, 0x682, 0x7, 0x54, 0x2, 0x2, 
    0x682, 0x683, 0x7, 0x13, 0x2, 0x2, 0x683, 0x685, 0x7, 0x55, 0x2, 0x2, 
    0x684, 0x678, 0x3, 0x2, 0x2, 0x2, 0x684, 0x67d, 0x3, 0x2, 0x2, 0x2, 
    0x684, 0x681, 0x3, 0x2, 0x2, 0x2, 0x685, 0x107, 0x3, 0x2, 0x2, 0x2, 
    0x686, 0x68b, 0x5, 0x100, 0x81, 0x2, 0x687, 0x68b, 0x5, 0x102, 0x82, 
    0x2, 0x688, 0x68b, 0x5, 0x104, 0x83, 0x2, 0x689, 0x68b, 0x5, 0x106, 
    0x84, 0x2, 0x68a, 0x686, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x687, 0x3, 0x2, 
    0x2, 0x2, 0x68a, 0x688, 0x3, 0x2, 0x2, 0x2, 0x68a, 0x689, 0x3, 0x2, 
    0x2, 0x2, 0x68b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x68c, 0x68d, 0x7, 0x91, 
    0x2, 0x2, 0x68d, 0x68e, 0x7, 0xe, 0x2, 0x2, 0x68e, 0x68f, 0x7, 0x57, 
    0x2, 0x2, 0x68f, 0x690, 0x7, 0x13, 0x2, 0x2, 0x690, 0x691, 0x7, 0xe, 
    0x2, 0x2, 0x691, 0x692, 0x7, 0xbf, 0x2, 0x2, 0x692, 0x10b, 0x3, 0x2, 
    0x2, 0x2, 0x693, 0x694, 0x7, 0x39, 0x2, 0x2, 0x694, 0x695, 0x7, 0xe, 
    0x2, 0x2, 0x695, 0x696, 0x7, 0xa8, 0x2, 0x2, 0x696, 0x697, 0x7, 0xac, 
    0x2, 0x2, 0x697, 0x698, 0x7, 0xa9, 0x2, 0x2, 0x698, 0x699, 0x5, 0x26, 
    0x14, 0x2, 0x699, 0x69a, 0x7, 0x55, 0x2, 0x2, 0x69a, 0x6aa, 0x3, 0x2, 
    0x2, 0x2, 0x69b, 0x69c, 0x7, 0x39, 0x2, 0x2, 0x69c, 0x69d, 0x7, 0xe, 
    0x2, 0x2, 0x69d, 0x69e, 0x7, 0xa8, 0x2, 0x2, 0x69e, 0x69f, 0x7, 0xac, 
    0x2, 0x2, 0x69f, 0x6a0, 0x7, 0xa9, 0x2, 0x2, 0x6a0, 0x6a1, 0x7, 0x1b, 
    0x2, 0x2, 0x6a1, 0x6aa, 0x7, 0x55, 0x2, 0x2, 0x6a2, 0x6a3, 0x7, 0xa9, 
    0x2, 0x2, 0x6a3, 0x6a4, 0x7, 0x1b, 0x2, 0x2, 0x6a4, 0x6aa, 0x7, 0x55, 
    0x2, 0x2, 0x6a5, 0x6a6, 0x7, 0xa9, 0x2, 0x2, 0x6a6, 0x6a7, 0x5, 0x26, 
    0x14, 0x2, 0x6a7, 0x6a8, 0x7, 0x55, 0x2, 0x2, 0x6a8, 0x6aa, 0x3, 0x2, 
    0x2, 0x2, 0x6a9, 0x693, 0x3, 0x2, 0x2, 0x2, 0x6a9, 0x69b, 0x3, 0x2, 
    0x2, 0x2, 0x6a9, 0x6a2, 0x3, 0x2, 0x2, 0x2, 0x6a9, 0x6a5, 0x3, 0x2, 
    0x2, 0x2, 0x6aa, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x6ab, 0x6ac, 0x5, 0x26, 
    0x14, 0x2, 0x6ac, 0x6ad, 0x7, 0xb1, 0x2, 0x2, 0x6ad, 0x6b2, 0x3, 0x2, 
    0x2, 0x2, 0x6ae, 0x6af, 0x5, 0x26, 0x14, 0x2, 0x6af, 0x6b0, 0x7, 0xb2, 
    0x2, 0x2, 0x6b0, 0x6b2, 0x3, 0x2, 0x2, 0x2, 0x6b1, 0x6ab, 0x3, 0x2, 
    0x2, 0x2, 0x6b1, 0x6ae, 0x3, 0x2, 0x2, 0x2, 0x6b2, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x6b3, 0x6b4, 0x5, 0x26, 0x14, 0x2, 0x6b4, 0x6b5, 0x7, 0xa3, 
    0x2, 0x2, 0x6b5, 0x111, 0x3, 0x2, 0x2, 0x2, 0x6b6, 0x6b8, 0x5, 0x34, 
    0x1b, 0x2, 0x6b7, 0x6b9, 0x7, 0x7e, 0x2, 0x2, 0x6b8, 0x6b7, 0x3, 0x2, 
    0x2, 0x2, 0x6b8, 0x6b9, 0x3, 0x2, 0x2, 0x2, 0x6b9, 0x6ba, 0x3, 0x2, 
    0x2, 0x2, 0x6ba, 0x6bb, 0x7, 0xa1, 0x2, 0x2, 0x6bb, 0x6bc, 0x5, 0x6e, 
    0x38, 0x2, 0x6bc, 0x113, 0x3, 0x2, 0x2, 0x2, 0x6bd, 0x6bf, 0x5, 0x34, 
    0x1b, 0x2, 0x6be, 0x6c0, 0x7, 0x7e, 0x2, 0x2, 0x6bf, 0x6be, 0x3, 0x2, 
    0x2, 0x2, 0x6bf, 0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c1, 0x3, 0x2, 
    0x2, 0x2, 0x6c1, 0x6c2, 0x7, 0x71, 0x2, 0x2, 0x6c2, 0x6c3, 0x5, 0x6e, 
    0x38, 0x2, 0x6c3, 0x115, 0x3, 0x2, 0x2, 0x2, 0x6c4, 0x6c6, 0x5, 0x34, 
    0x1b, 0x2, 0x6c5, 0x6c7, 0x7, 0x7e, 0x2, 0x2, 0x6c6, 0x6c5, 0x3, 0x2, 
    0x2, 0x2, 0x6c6, 0x6c7, 0x3, 0x2, 0x2, 0x2, 0x6c7, 0x6c9, 0x3, 0x2, 
    0x2, 0x2, 0x6c8, 0x6ca, 0x7, 0x1f, 0x2, 0x2, 0x6c9, 0x6c8, 0x3, 0x2, 
    0x2, 0x2, 0x6c9, 0x6ca, 0x3, 0x2, 0x2, 0x2, 0x6ca, 0x6cb, 0x3, 0x2, 
    0x2, 0x2, 0x6cb, 0x6cc, 0x7, 0x9d, 0x2, 0x2, 0x6cc, 0x6cd, 0x5, 0x26, 
    0x14, 0x2, 0x6cd, 0x6ce, 0x7, 0x5d, 0x2, 0x2, 0x6ce, 0x6cf, 0x7, 0x5f, 
    0x2, 0x2, 0x6cf, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6d0, 0x6d1, 0x5, 0x34, 
    0x1b, 0x2, 0x6d1, 0x6d2, 0x7, 0x5d, 0x2, 0x2, 0x6d2, 0x6d3, 0x7, 0x5f, 
    0x2, 0x2, 0x6d3, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x6c4, 0x3, 0x2, 
    0x2, 0x2, 0x6d4, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6d5, 0x117, 0x3, 0x2, 
    0x2, 0x2, 0x6d6, 0x6d7, 0x5, 0x8e, 0x48, 0x2, 0x6d7, 0x6d8, 0x7, 0x4d, 
    0x2, 0x2, 0x6d8, 0x6d9, 0x7, 0x1c, 0x2, 0x2, 0x6d9, 0x6da, 0x7, 0x7, 
    0x2, 0x2, 0x6da, 0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6db, 0x6dc, 0x5, 0x8e, 
    0x48, 0x2, 0x6dc, 0x6dd, 0x7, 0x4d, 0x2, 0x2, 0x6dd, 0x6de, 0x7, 0x1c, 
    0x2, 0x2, 0x6de, 0x6df, 0x5, 0x8a, 0x46, 0x2, 0x6df, 0x6eb, 0x3, 0x2, 
    0x2, 0x2, 0x6e0, 0x6e1, 0x5, 0x8e, 0x48, 0x2, 0x6e1, 0x6e2, 0x7, 0x4d, 
    0x2, 0x2, 0x6e2, 0x6e3, 0x7, 0x1c, 0x2, 0x2, 0x6e3, 0x6e4, 0x5, 0x6e, 
    0x38, 0x2, 0x6e4, 0x6eb, 0x3, 0x2, 0x2, 0x2, 0x6e5, 0x6e6, 0x5, 0x8e, 
    0x48, 0x2, 0x6e6, 0x6e7, 0x7, 0x4d, 0x2, 0x2, 0x6e7, 0x6e8, 0x7, 0x1c, 
    0x2, 0x2, 0x6e8, 0x6e9, 0x5, 0x34, 0x1b, 0x2, 0x6e9, 0x6eb, 0x3, 0x2, 
    0x2, 0x2, 0x6ea, 0x6d6, 0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6db, 0x3, 0x2, 
    0x2, 0x2, 0x6ea, 0x6e0, 0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6e5, 0x3, 0x2, 
    0x2, 0x2, 0x6eb, 0x119, 0x3, 0x2, 0x2, 0x2, 0x6ec, 0x6ed, 0x5, 0x34, 
    0x1b, 0x2, 0x6ed, 0x6ee, 0x7, 0x4d, 0x2, 0x2, 0x6ee, 0x6ef, 0x7, 0x47, 
    0x2, 0x2, 0x6ef, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x6f0, 0x6f1, 0x5, 0x7a, 
    0x3e, 0x2, 0x6f1, 0x6f2, 0x7, 0x1f, 0x2, 0x2, 0x6f2, 0x6f3, 0x7, 0x6d, 
    0x2, 0x2, 0x6f3, 0x6f4, 0x7, 0x7, 0x2, 0x2, 0x6f4, 0x11d, 0x3, 0x2, 
    0x2, 0x2, 0x6f5, 0x6f6, 0x5, 0x34, 0x1b, 0x2, 0x6f6, 0x6f7, 0x7, 0x7e, 
    0x2, 0x2, 0x6f7, 0x6f8, 0x7, 0x91, 0x2, 0x2, 0x6f8, 0x6f9, 0x7, 0x92, 
    0x2, 0x2, 0x6f9, 0x6fa, 0x5, 0x17e, 0xc0, 0x2, 0x6fa, 0x6fb, 0x7, 0x85, 
    0x2, 0x2, 0x6fb, 0x6fc, 0x7, 0x2e, 0x2, 0x2, 0x6fc, 0x6fd, 0x7, 0x6, 
    0x2, 0x2, 0x6fd, 0x6fe, 0x5, 0x26, 0x14, 0x2, 0x6fe, 0x6ff, 0x7, 0x36, 
    0x2, 0x2, 0x6ff, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x700, 0x701, 0x5, 0x34, 
    0x1b, 0x2, 0x701, 0x702, 0x9, 0x8, 0x2, 0x2, 0x702, 0x703, 0x7, 0x38, 
    0x2, 0x2, 0x703, 0x121, 0x3, 0x2, 0x2, 0x2, 0x704, 0x705, 0x5, 0x34, 
    0x1b, 0x2, 0x705, 0x706, 0x7, 0xb5, 0x2, 0x2, 0x706, 0x707, 0x7, 0xb4, 
    0x2, 0x2, 0x707, 0x708, 0x7, 0x14, 0x2, 0x2, 0x708, 0x709, 0x7, 0xb, 
    0x2, 0x2, 0x709, 0x70a, 0x7, 0x76, 0x2, 0x2, 0x70a, 0x70b, 0x7, 0x55, 
    0x2, 0x2, 0x70b, 0x123, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70d, 0x5, 0x6e, 
    0x38, 0x2, 0x70d, 0x70e, 0x7, 0x44, 0x2, 0x2, 0x70e, 0x70f, 0x7, 0x4d, 
    0x2, 0x2, 0x70f, 0x710, 0x7, 0xb7, 0x2, 0x2, 0x710, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x711, 0x712, 0x5, 0x34, 0x1b, 0x2, 0x712, 0x713, 0x7, 0x7e, 
    0x2, 0x2, 0x713, 0x714, 0x7, 0x11, 0x2, 0x2, 0x714, 0x715, 0x7, 0x81, 
    0x2, 0x2, 0x715, 0x716, 0x7, 0x56, 0x2, 0x2, 0x716, 0x717, 0x5, 0x34, 
    0x1b, 0x2, 0x717, 0x127, 0x3, 0x2, 0x2, 0x2, 0x718, 0x719, 0x5, 0x34, 
    0x1b, 0x2, 0x719, 0x71a, 0x7, 0x7e, 0x2, 0x2, 0x71a, 0x71b, 0x7, 0x9c, 
    0x2, 0x2, 0x71b, 0x71c, 0x7, 0x3e, 0x2, 0x2, 0x71c, 0x129, 0x3, 0x2, 
    0x2, 0x2, 0x71d, 0x71e, 0x5, 0x8e, 0x48, 0x2, 0x71e, 0x71f, 0x7, 0x4d, 
    0x2, 0x2, 0x71f, 0x720, 0x7, 0x6, 0x2, 0x2, 0x720, 0x721, 0x7, 0x7, 
    0x2, 0x2, 0x721, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x722, 0x723, 0x5, 0x6e, 
    0x38, 0x2, 0x723, 0x724, 0x7, 0x4d, 0x2, 0x2, 0x724, 0x725, 0x7, 0x4f, 
    0x2, 0x2, 0x725, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x726, 0x727, 0x7, 0x14, 
    0x2, 0x2, 0x727, 0x728, 0x7, 0x3e, 0x2, 0x2, 0x728, 0x729, 0x7, 0x4d, 
    0x2, 0x2, 0x729, 0x72b, 0x7, 0x83, 0x2, 0x2, 0x72a, 0x72c, 0x7, 0x6, 
    0x2, 0x2, 0x72b, 0x72a, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x72c, 0x3, 0x2, 
    0x2, 0x2, 0x72c, 0x72d, 0x3, 0x2, 0x2, 0x2, 0x72d, 0x72e, 0x7, 0x76, 
    0x2, 0x2, 0x72e, 0x72f, 0x7, 0x84, 0x2, 0x2, 0x72f, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x730, 0x731, 0x5, 0x6e, 0x38, 0x2, 0x731, 0x732, 0x7, 0x4d, 
    0x2, 0x2, 0x732, 0x734, 0x7, 0x85, 0x2, 0x2, 0x733, 0x735, 0x7, 0x6, 
    0x2, 0x2, 0x734, 0x733, 0x3, 0x2, 0x2, 0x2, 0x734, 0x735, 0x3, 0x2, 
    0x2, 0x2, 0x735, 0x736, 0x3, 0x2, 0x2, 0x2, 0x736, 0x737, 0x7, 0x76, 
    0x2, 0x2, 0x737, 0x738, 0x7, 0x84, 0x2, 0x2, 0x738, 0x131, 0x3, 0x2, 
    0x2, 0x2, 0x739, 0x73a, 0x5, 0x34, 0x1b, 0x2, 0x73a, 0x73b, 0x7, 0x4d, 
    0x2, 0x2, 0x73b, 0x73c, 0x7, 0x47, 0x2, 0x2, 0x73c, 0x133, 0x3, 0x2, 
    0x2, 0x2, 0x73d, 0x73e, 0x5, 0x34, 0x1b, 0x2, 0x73e, 0x73f, 0x7, 0x4d, 
    0x2, 0x2, 0x73f, 0x740, 0x7, 0x48, 0x2, 0x2, 0x740, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x741, 0x742, 0x5, 0x34, 0x1b, 0x2, 0x742, 0x743, 0x7, 0x7e, 
    0x2, 0x2, 0x743, 0x744, 0x7, 0x91, 0x2, 0x2, 0x744, 0x745, 0x7, 0x92, 
    0x2, 0x2, 0x745, 0x746, 0x5, 0x17e, 0xc0, 0x2, 0x746, 0x747, 0x7, 0x2e, 
    0x2, 0x2, 0x747, 0x748, 0x7, 0x6, 0x2, 0x2, 0x748, 0x749, 0x5, 0x26, 
    0x14, 0x2, 0x749, 0x74a, 0x7, 0x62, 0x2, 0x2, 0x74a, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x74b, 0x74c, 0x5, 0x34, 0x1b, 0x2, 0x74c, 0x74d, 0x7, 0x7e, 
    0x2, 0x2, 0x74d, 0x74e, 0x7, 0xa2, 0x2, 0x2, 0x74e, 0x74f, 0x5, 0x17e, 
    0xc0, 0x2, 0x74f, 0x750, 0x7, 0x45, 0x2, 0x2, 0x750, 0x751, 0x7, 0x11, 
    0x2, 0x2, 0x751, 0x752, 0x7, 0x32, 0x2, 0x2, 0x752, 0x753, 0x7, 0x76, 
    0x2, 0x2, 0x753, 0x754, 0x7, 0x55, 0x2, 0x2, 0x754, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x755, 0x756, 0x5, 0x6e, 0x38, 0x2, 0x756, 0x757, 0x7, 0xa1, 
    0x2, 0x2, 0x757, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x758, 0x759, 0x5, 0x34, 
    0x1b, 0x2, 0x759, 0x75a, 0x7, 0x86, 0x2, 0x2, 0x75a, 0x75b, 0x7, 0x14, 
    0x2, 0x2, 0x75b, 0x75c, 0x7, 0x2e, 0x2, 0x2, 0x75c, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x75d, 0x75e, 0x5, 0x34, 0x1b, 0x2, 0x75e, 0x75f, 0x7, 0x8e, 
    0x2, 0x2, 0x75f, 0x760, 0x7, 0x7, 0x2, 0x2, 0x760, 0x761, 0x7, 0x6, 
    0x2, 0x2, 0x761, 0x762, 0x5, 0x8a, 0x46, 0x2, 0x762, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x763, 0x768, 0x5, 0x34, 0x1b, 0x2, 0x764, 0x765, 0x7, 0x45, 
    0x2, 0x2, 0x765, 0x767, 0x5, 0x34, 0x1b, 0x2, 0x766, 0x764, 0x3, 0x2, 
    0x2, 0x2, 0x767, 0x76a, 0x3, 0x2, 0x2, 0x2, 0x768, 0x766, 0x3, 0x2, 
    0x2, 0x2, 0x768, 0x769, 0x3, 0x2, 0x2, 0x2, 0x769, 0x76b, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x768, 0x3, 0x2, 0x2, 0x2, 0x76b, 0x76e, 0x7, 0xaa, 
    0x2, 0x2, 0x76c, 0x76f, 0x5, 0x6e, 0x38, 0x2, 0x76d, 0x76f, 0x5, 0x8a, 
    0x46, 0x2, 0x76e, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x76e, 0x76d, 0x3, 0x2, 
    0x2, 0x2, 0x76f, 0x141, 0x3, 0x2, 0x2, 0x2, 0x770, 0x771, 0x5, 0x34, 
    0x1b, 0x2, 0x771, 0x772, 0x7, 0x51, 0x2, 0x2, 0x772, 0x773, 0x5, 0x6e, 
    0x38, 0x2, 0x773, 0x774, 0x7, 0x19, 0x2, 0x2, 0x774, 0x775, 0x5, 0x34, 
    0x1b, 0x2, 0x775, 0x143, 0x3, 0x2, 0x2, 0x2, 0x776, 0x777, 0x5, 0x6e, 
    0x38, 0x2, 0x777, 0x778, 0x7, 0x4d, 0x2, 0x2, 0x778, 0x779, 0x7, 0x85, 
    0x2, 0x2, 0x779, 0x145, 0x3, 0x2, 0x2, 0x2, 0x77a, 0x77b, 0x5, 0x34, 
    0x1b, 0x2, 0x77b, 0x77c, 0x7, 0x82, 0x2, 0x2, 0x77c, 0x77d, 0x5, 0x34, 
    0x1b, 0x2, 0x77d, 0x147, 0x3, 0x2, 0x2, 0x2, 0x77e, 0x77f, 0x5, 0x6e, 
    0x38, 0x2, 0x77f, 0x780, 0x7, 0x4d, 0x2, 0x2, 0x780, 0x781, 0x7, 0xae, 
    0x2, 0x2, 0x781, 0x782, 0x7, 0x19, 0x2, 0x2, 0x782, 0x783, 0x7, 0x17, 
    0x2, 0x2, 0x783, 0x784, 0x7, 0x62, 0x2, 0x2, 0x784, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x785, 0x786, 0x5, 0x6e, 0x38, 0x2, 0x786, 0x787, 0x5, 0x34, 
    0x1b, 0x2, 0x787, 0x788, 0x7, 0x71, 0x2, 0x2, 0x788, 0x789, 0x7, 0xbb, 
    0x2, 0x2, 0x789, 0x78a, 0x7, 0x19, 0x2, 0x2, 0x78a, 0x78b, 0x7, 0xa1, 
    0x2, 0x2, 0x78b, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x78c, 0x78d, 0x5, 0x34, 
    0x1b, 0x2, 0x78d, 0x78e, 0x7, 0xd, 0x2, 0x2, 0x78e, 0x78f, 0x5, 0x34, 
    0x1b, 0x2, 0x78f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x790, 0x791, 0x5, 0x34, 
    0x1b, 0x2, 0x791, 0x792, 0x7, 0xad, 0x2, 0x2, 0x792, 0x793, 0x7, 0x15, 
    0x2, 0x2, 0x793, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x794, 0x7b7, 0x5, 0x132, 
    0x9a, 0x2, 0x795, 0x7b7, 0x5, 0x134, 0x9b, 0x2, 0x796, 0x7b7, 0x5, 0x136, 
    0x9c, 0x2, 0x797, 0x7b7, 0x5, 0x138, 0x9d, 0x2, 0x798, 0x7b7, 0x5, 0x13a, 
    0x9e, 0x2, 0x799, 0x7b7, 0x5, 0x13c, 0x9f, 0x2, 0x79a, 0x7b7, 0x5, 0x13e, 
    0xa0, 0x2, 0x79b, 0x7b7, 0x5, 0x140, 0xa1, 0x2, 0x79c, 0x7b7, 0x5, 0x142, 
    0xa2, 0x2, 0x79d, 0x7b7, 0x5, 0x144, 0xa3, 0x2, 0x79e, 0x7b7, 0x5, 0x146, 
    0xa4, 0x2, 0x79f, 0x7b7, 0x5, 0x148, 0xa5, 0x2, 0x7a0, 0x7b7, 0x5, 0x14a, 
    0xa6, 0x2, 0x7a1, 0x7b7, 0x5, 0x14c, 0xa7, 0x2, 0x7a2, 0x7b7, 0x5, 0x14e, 
    0xa8, 0x2, 0x7a3, 0x7b7, 0x5, 0x12e, 0x98, 0x2, 0x7a4, 0x7b7, 0x5, 0x10e, 
    0x88, 0x2, 0x7a5, 0x7b7, 0x5, 0x110, 0x89, 0x2, 0x7a6, 0x7b7, 0x5, 0x112, 
    0x8a, 0x2, 0x7a7, 0x7b7, 0x5, 0x116, 0x8c, 0x2, 0x7a8, 0x7b7, 0x5, 0x118, 
    0x8d, 0x2, 0x7a9, 0x7b7, 0x5, 0x11a, 0x8e, 0x2, 0x7aa, 0x7b7, 0x5, 0x114, 
    0x8b, 0x2, 0x7ab, 0x7b7, 0x5, 0x11c, 0x8f, 0x2, 0x7ac, 0x7b7, 0x5, 0x11e, 
    0x90, 0x2, 0x7ad, 0x7b7, 0x5, 0x120, 0x91, 0x2, 0x7ae, 0x7b7, 0x5, 0x122, 
    0x92, 0x2, 0x7af, 0x7b7, 0x5, 0x124, 0x93, 0x2, 0x7b0, 0x7b7, 0x5, 0x126, 
    0x94, 0x2, 0x7b1, 0x7b7, 0x5, 0x128, 0x95, 0x2, 0x7b2, 0x7b7, 0x5, 0x12a, 
    0x96, 0x2, 0x7b3, 0x7b7, 0x5, 0x12c, 0x97, 0x2, 0x7b4, 0x7b7, 0x5, 0x12e, 
    0x98, 0x2, 0x7b5, 0x7b7, 0x5, 0x130, 0x99, 0x2, 0x7b6, 0x794, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x795, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x796, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x797, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x798, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x799, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x79a, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x79b, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x79c, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x79d, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x79e, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x79f, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7a0, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7a1, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7a2, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7a4, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7a5, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7a6, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7a7, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7a8, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7a9, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7aa, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7ab, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7ac, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7ad, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7ae, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7af, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b0, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7b1, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b2, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7b3, 0x3, 0x2, 0x2, 0x2, 0x7b6, 0x7b4, 0x3, 0x2, 
    0x2, 0x2, 0x7b6, 0x7b5, 0x3, 0x2, 0x2, 0x2, 0x7b7, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0x7b8, 0x7b9, 0x7, 0x91, 0x2, 0x2, 0x7b9, 0x7ba, 0x5, 0x108, 
    0x85, 0x2, 0x7ba, 0x7bb, 0x7, 0xc5, 0x2, 0x2, 0x7bb, 0x7bc, 0x5, 0x192, 
    0xca, 0x2, 0x7bc, 0x7ce, 0x3, 0x2, 0x2, 0x2, 0x7bd, 0x7be, 0x7, 0xa7, 
    0x2, 0x2, 0x7be, 0x7c0, 0x5, 0x150, 0xa9, 0x2, 0x7bf, 0x7c1, 0x5, 0x10c, 
    0x87, 0x2, 0x7c0, 0x7bf, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7c1, 0x3, 0x2, 
    0x2, 0x2, 0x7c1, 0x7c2, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x7c3, 0x7, 0xc5, 
    0x2, 0x2, 0x7c3, 0x7c4, 0x5, 0x192, 0xca, 0x2, 0x7c4, 0x7ce, 0x3, 0x2, 
    0x2, 0x2, 0x7c5, 0x7c6, 0x5, 0xfe, 0x80, 0x2, 0x7c6, 0x7c7, 0x7, 0xc7, 
    0x2, 0x2, 0x7c7, 0x7c8, 0x5, 0x192, 0xca, 0x2, 0x7c8, 0x7ce, 0x3, 0x2, 
    0x2, 0x2, 0x7c9, 0x7ca, 0x5, 0x10a, 0x86, 0x2, 0x7ca, 0x7cb, 0x7, 0xc5, 
    0x2, 0x2, 0x7cb, 0x7cc, 0x5, 0x192, 0xca, 0x2, 0x7cc, 0x7ce, 0x3, 0x2, 
    0x2, 0x2, 0x7cd, 0x7b8, 0x3, 0x2, 0x2, 0x2, 0x7cd, 0x7bd, 0x3, 0x2, 
    0x2, 0x2, 0x7cd, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x7cd, 0x7c9, 0x3, 0x2, 
    0x2, 0x2, 0x7ce, 0x153, 0x3, 0x2, 0x2, 0x2, 0x7cf, 0x7d0, 0x7, 0x4c, 
    0x2, 0x2, 0x7d0, 0x7d1, 0x5, 0x34, 0x1b, 0x2, 0x7d1, 0x7d2, 0x7, 0xaf, 
    0x2, 0x2, 0x7d2, 0x7d3, 0x7, 0xad, 0x2, 0x2, 0x7d3, 0x7d4, 0x7, 0x15, 
    0x2, 0x2, 0x7d4, 0x7d5, 0x7, 0xc5, 0x2, 0x2, 0x7d5, 0x7d6, 0x7, 0xb0, 
    0x2, 0x2, 0x7d6, 0x7d7, 0x5, 0x32, 0x1a, 0x2, 0x7d7, 0x7d8, 0x7, 0xad, 
    0x2, 0x2, 0x7d8, 0x7d9, 0x7, 0xe, 0x2, 0x2, 0x7d9, 0x7da, 0x7, 0x15, 
    0x2, 0x2, 0x7da, 0x155, 0x3, 0x2, 0x2, 0x2, 0x7db, 0x7dc, 0x7, 0x4c, 
    0x2, 0x2, 0x7dc, 0x7dd, 0x5, 0x34, 0x1b, 0x2, 0x7dd, 0x7de, 0x7, 0xaf, 
    0x2, 0x2, 0x7de, 0x7df, 0x7, 0xb6, 0x2, 0x2, 0x7df, 0x7e0, 0x7, 0x32, 
    0x2, 0x2, 0x7e0, 0x7e1, 0x7, 0x39, 0x2, 0x2, 0x7e1, 0x7e2, 0x7, 0xe, 
    0x2, 0x2, 0x7e2, 0x7e3, 0x7, 0xa8, 0x2, 0x2, 0x7e3, 0x7e4, 0x7, 0xac, 
    0x2, 0x2, 0x7e4, 0x7e5, 0x7, 0xa9, 0x2, 0x2, 0x7e5, 0x7e6, 0x7, 0x1b, 
    0x2, 0x2, 0x7e6, 0x7e7, 0x7, 0x55, 0x2, 0x2, 0x7e7, 0x7e9, 0x7, 0xc5, 
    0x2, 0x2, 0x7e8, 0x7ea, 0x5, 0x26, 0x14, 0x2, 0x7e9, 0x7e8, 0x3, 0x2, 
    0x2, 0x2, 0x7e9, 0x7ea, 0x3, 0x2, 0x2, 0x2, 0x7ea, 0x7eb, 0x3, 0x2, 
    0x2, 0x2, 0x7eb, 0x7ec, 0x7, 0xb0, 0x2, 0x2, 0x7ec, 0x7ed, 0x7, 0xb6, 
    0x2, 0x2, 0x7ed, 0x7ee, 0x5, 0x17e, 0xc0, 0x2, 0x7ee, 0x7ef, 0x7, 0x46, 
    0x2, 0x2, 0x7ef, 0x7f0, 0x7, 0x32, 0x2, 0x2, 0x7f0, 0x7f1, 0x7, 0xc6, 
    0x2, 0x2, 0x7f1, 0x7f2, 0x7, 0x76, 0x2, 0x2, 0x7f2, 0x7f3, 0x7, 0x63, 
    0x2, 0x2, 0x7f3, 0x7f4, 0x7, 0xb8, 0x2, 0x2, 0x7f4, 0x7f5, 0x7, 0xb9, 
    0x2, 0x2, 0x7f5, 0x7f6, 0x7, 0x32, 0x2, 0x2, 0x7f6, 0x7f7, 0x7, 0xa2, 
    0x2, 0x2, 0x7f7, 0x7f8, 0x7, 0xba, 0x2, 0x2, 0x7f8, 0x7f9, 0x5, 0x17e, 
    0xc0, 0x2, 0x7f9, 0x157, 0x3, 0x2, 0x2, 0x2, 0x7fa, 0x7fb, 0x7, 0x4c, 
    0x2, 0x2, 0x7fb, 0x7fc, 0x5, 0x34, 0x1b, 0x2, 0x7fc, 0x7fd, 0x7, 0xaf, 
    0x2, 0x2, 0x7fd, 0x7fe, 0x7, 0x80, 0x2, 0x2, 0x7fe, 0x7ff, 0x5, 0x34, 
    0x1b, 0x2, 0x7ff, 0x800, 0x7, 0x81, 0x2, 0x2, 0x800, 0x801, 0x7, 0xc5, 
    0x2, 0x2, 0x801, 0x802, 0x7, 0xb0, 0x2, 0x2, 0x802, 0x803, 0x7, 0x31, 
    0x2, 0x2, 0x803, 0x804, 0x7, 0xa, 0x2, 0x2, 0x804, 0x805, 0x7, 0x9a, 
    0x2, 0x2, 0x805, 0x806, 0x7, 0x32, 0x2, 0x2, 0x806, 0x807, 0x7, 0x19, 
    0x2, 0x2, 0x807, 0x808, 0x5, 0x32, 0x1a, 0x2, 0x808, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x809, 0x80d, 0x5, 0x154, 0xab, 0x2, 0x80a, 0x80d, 0x5, 0x156, 
    0xac, 0x2, 0x80b, 0x80d, 0x5, 0x158, 0xad, 0x2, 0x80c, 0x809, 0x3, 0x2, 
    0x2, 0x2, 0x80c, 0x80a, 0x3, 0x2, 0x2, 0x2, 0x80c, 0x80b, 0x3, 0x2, 
    0x2, 0x2, 0x80d, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x80f, 0x7, 0xc0, 
    0x2, 0x2, 0x80f, 0x810, 0x7, 0xa3, 0x2, 0x2, 0x810, 0x811, 0x7, 0xa4, 
    0x2, 0x2, 0x811, 0x812, 0x7, 0xa5, 0x2, 0x2, 0x812, 0x813, 0x7, 0x21, 
    0x2, 0x2, 0x813, 0x814, 0x7, 0x2e, 0x2, 0x2, 0x814, 0x15d, 0x3, 0x2, 
    0x2, 0x2, 0x815, 0x816, 0x7, 0xb3, 0x2, 0x2, 0x816, 0x817, 0x7, 0xc0, 
    0x2, 0x2, 0x817, 0x818, 0x7, 0x4d, 0x2, 0x2, 0x818, 0x819, 0x7, 0x85, 
    0x2, 0x2, 0x819, 0x81a, 0x7, 0x6, 0x2, 0x2, 0x81a, 0x81b, 0x7, 0x17, 
    0x2, 0x2, 0x81b, 0x81c, 0x7, 0x36, 0x2, 0x2, 0x81c, 0x81d, 0x7, 0xc5, 
    0x2, 0x2, 0x81d, 0x81e, 0x5, 0xfc, 0x7f, 0x2, 0x81e, 0x15f, 0x3, 0x2, 
    0x2, 0x2, 0x81f, 0x820, 0x7, 0xc0, 0x2, 0x2, 0x820, 0x821, 0x7, 0x44, 
    0x2, 0x2, 0x821, 0x822, 0x5, 0x17e, 0xc0, 0x2, 0x822, 0x823, 0x7, 0x46, 
    0x2, 0x2, 0x823, 0x824, 0x7, 0xc9, 0x2, 0x2, 0x824, 0x825, 0x7, 0x39, 
    0x2, 0x2, 0x825, 0x826, 0x7, 0x1b, 0x2, 0x2, 0x826, 0x827, 0x7, 0xbc, 
    0x2, 0x2, 0x827, 0x828, 0x7, 0x85, 0x2, 0x2, 0x828, 0x829, 0x7, 0x2e, 
    0x2, 0x2, 0x829, 0x82a, 0x7, 0x6, 0x2, 0x2, 0x82a, 0x82b, 0x7, 0x17, 
    0x2, 0x2, 0x82b, 0x82c, 0x7, 0x36, 0x2, 0x2, 0x82c, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x82d, 0x82e, 0x7, 0x9f, 0x2, 0x2, 0x82e, 0x82f, 0x7, 0x71, 
    0x2, 0x2, 0x82f, 0x830, 0x7, 0xc0, 0x2, 0x2, 0x830, 0x831, 0x7, 0x4c, 
    0x2, 0x2, 0x831, 0x832, 0x5, 0x150, 0xa9, 0x2, 0x832, 0x163, 0x3, 0x2, 
    0x2, 0x2, 0x833, 0x834, 0x7, 0xc0, 0x2, 0x2, 0x834, 0x835, 0x7, 0x63, 
    0x2, 0x2, 0x835, 0x836, 0x7, 0xa4, 0x2, 0x2, 0x836, 0x837, 0x7, 0x71, 
    0x2, 0x2, 0x837, 0x838, 0x7, 0xbd, 0x2, 0x2, 0x838, 0x839, 0x7, 0x7b, 
    0x2, 0x2, 0x839, 0x83a, 0x7, 0xbf, 0x2, 0x2, 0x83a, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x83b, 0x83c, 0x7, 0xc0, 0x2, 0x2, 0x83c, 0x83d, 0x7, 0x63, 
    0x2, 0x2, 0x83d, 0x83e, 0x7, 0x9f, 0x2, 0x2, 0x83e, 0x83f, 0x7, 0x68, 
    0x2, 0x2, 0x83f, 0x840, 0x7, 0x4c, 0x2, 0x2, 0x840, 0x841, 0x5, 0x150, 
    0xa9, 0x2, 0x841, 0x167, 0x3, 0x2, 0x2, 0x2, 0x842, 0x843, 0x7, 0xc0, 
    0x2, 0x2, 0x843, 0x844, 0x7, 0x63, 0x2, 0x2, 0x844, 0x845, 0x7, 0x68, 
    0x2, 0x2, 0x845, 0x846, 0x5, 0x17e, 0xc0, 0x2, 0x846, 0x847, 0x7, 0x7b, 
    0x2, 0x2, 0x847, 0x848, 0x7, 0x55, 0x2, 0x2, 0x848, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x849, 0x851, 0x5, 0x15c, 0xaf, 0x2, 0x84a, 0x851, 0x5, 0x15e, 
    0xb0, 0x2, 0x84b, 0x851, 0x5, 0x160, 0xb1, 0x2, 0x84c, 0x851, 0x5, 0x162, 
    0xb2, 0x2, 0x84d, 0x851, 0x5, 0x164, 0xb3, 0x2, 0x84e, 0x851, 0x5, 0x166, 
    0xb4, 0x2, 0x84f, 0x851, 0x5, 0x168, 0xb5, 0x2, 0x850, 0x849, 0x3, 0x2, 
    0x2, 0x2, 0x850, 0x84a, 0x3, 0x2, 0x2, 0x2, 0x850, 0x84b, 0x3, 0x2, 
    0x2, 0x2, 0x850, 0x84c, 0x3, 0x2, 0x2, 0x2, 0x850, 0x84d, 0x3, 0x2, 
    0x2, 0x2, 0x850, 0x84e, 0x3, 0x2, 0x2, 0x2, 0x850, 0x84f, 0x3, 0x2, 
    0x2, 0x2, 0x851, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x852, 0x853, 0x9, 0x9, 
    0x2, 0x2, 0x853, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x854, 0x855, 0x9, 0xa, 
    0x2, 0x2, 0x855, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x856, 0x857, 0x7, 0xc4, 
    0x2, 0x2, 0x857, 0x171, 0x3, 0x2, 0x2, 0x2, 0x858, 0x859, 0x7, 0xc1, 
    0x2, 0x2, 0x859, 0x173, 0x3, 0x2, 0x2, 0x2, 0x85a, 0x85b, 0x5, 0x32, 
    0x1a, 0x2, 0x85b, 0x85c, 0x7, 0xc9, 0x2, 0x2, 0x85c, 0x175, 0x3, 0x2, 
    0x2, 0x2, 0x85d, 0x85e, 0x7, 0xe, 0x2, 0x2, 0x85e, 0x85f, 0x7, 0x3a, 
    0x2, 0x2, 0x85f, 0x860, 0x7, 0x1e, 0x2, 0x2, 0x860, 0x861, 0x7, 0x13, 
    0x2, 0x2, 0x861, 0x862, 0x7, 0x15, 0x2, 0x2, 0x862, 0x863, 0x7, 0x20, 
    0x2, 0x2, 0x863, 0x864, 0x5, 0x32, 0x1a, 0x2, 0x864, 0x177, 0x3, 0x2, 
    0x2, 0x2, 0x865, 0x866, 0x7, 0xe, 0x2, 0x2, 0x866, 0x867, 0x7, 0x34, 
    0x2, 0x2, 0x867, 0x868, 0x7, 0x13, 0x2, 0x2, 0x868, 0x869, 0x5, 0x6e, 
    0x38, 0x2, 0x869, 0x86a, 0x7, 0x6, 0x2, 0x2, 0x86a, 0x86b, 0x7, 0x35, 
    0x2, 0x2, 0x86b, 0x86c, 0x7, 0x36, 0x2, 0x2, 0x86c, 0x179, 0x3, 0x2, 
    0x2, 0x2, 0x86d, 0x86e, 0x5, 0x32, 0x1a, 0x2, 0x86e, 0x86f, 0x7, 0x38, 
    0x2, 0x2, 0x86f, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x870, 0x872, 0x5, 0x17e, 
    0xc0, 0x2, 0x871, 0x873, 0x7, 0x11, 0x2, 0x2, 0x872, 0x871, 0x3, 0x2, 
    0x2, 0x2, 0x872, 0x873, 0x3, 0x2, 0x2, 0x2, 0x873, 0x879, 0x3, 0x2, 
    0x2, 0x2, 0x874, 0x87a, 0x3, 0x2, 0x2, 0x2, 0x875, 0x87a, 0x7, 0x32, 
    0x2, 0x2, 0x876, 0x87a, 0x7, 0xd, 0x2, 0x2, 0x877, 0x87a, 0x7, 0x9, 
    0x2, 0x2, 0x878, 0x87a, 0x7, 0x3, 0x2, 0x2, 0x879, 0x874, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x875, 0x3, 0x2, 0x2, 0x2, 0x879, 0x876, 0x3, 0x2, 
    0x2, 0x2, 0x879, 0x877, 0x3, 0x2, 0x2, 0x2, 0x879, 0x878, 0x3, 0x2, 
    0x2, 0x2, 0x87a, 0x87b, 0x3, 0x2, 0x2, 0x2, 0x87b, 0x87c, 0x7, 0x39, 
    0x2, 0x2, 0x87c, 0x87d, 0x7, 0x1b, 0x2, 0x2, 0x87d, 0x87e, 0x5, 0x6e, 
    0x38, 0x2, 0x87e, 0x87f, 0x7, 0x6, 0x2, 0x2, 0x87f, 0x880, 0x5, 0x26, 
    0x14, 0x2, 0x880, 0x881, 0x7, 0x36, 0x2, 0x2, 0x881, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x882, 0x887, 0x5, 0x16c, 0xb7, 0x2, 0x883, 0x887, 0x5, 0x16e, 
    0xb8, 0x2, 0x884, 0x887, 0x5, 0x170, 0xb9, 0x2, 0x885, 0x887, 0x5, 0x172, 
    0xba, 0x2, 0x886, 0x882, 0x3, 0x2, 0x2, 0x2, 0x886, 0x883, 0x3, 0x2, 
    0x2, 0x2, 0x886, 0x884, 0x3, 0x2, 0x2, 0x2, 0x886, 0x885, 0x3, 0x2, 
    0x2, 0x2, 0x887, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x888, 0x88e, 0x5, 0x174, 
    0xbb, 0x2, 0x889, 0x88e, 0x5, 0x176, 0xbc, 0x2, 0x88a, 0x88e, 0x5, 0x178, 
    0xbd, 0x2, 0x88b, 0x88e, 0x5, 0x17a, 0xbe, 0x2, 0x88c, 0x88e, 0x5, 0x17c, 
    0xbf, 0x2, 0x88d, 0x888, 0x3, 0x2, 0x2, 0x2, 0x88d, 0x889, 0x3, 0x2, 
    0x2, 0x2, 0x88d, 0x88a, 0x3, 0x2, 0x2, 0x2, 0x88d, 0x88b, 0x3, 0x2, 
    0x2, 0x2, 0x88d, 0x88c, 0x3, 0x2, 0x2, 0x2, 0x88e, 0x181, 0x3, 0x2, 
    0x2, 0x2, 0x88f, 0x892, 0x5, 0x180, 0xc1, 0x2, 0x890, 0x892, 0x5, 0x17e, 
    0xc0, 0x2, 0x891, 0x88f, 0x3, 0x2, 0x2, 0x2, 0x891, 0x890, 0x3, 0x2, 
    0x2, 0x2, 0x892, 0x183, 0x3, 0x2, 0x2, 0x2, 0x893, 0x894, 0x7, 0x27, 
    0x2, 0x2, 0x894, 0x895, 0x7, 0x63, 0x2, 0x2, 0x895, 0x896, 0x7, 0xcc, 
    0x2, 0x2, 0x896, 0x897, 0x7, 0xe, 0x2, 0x2, 0x897, 0x898, 0x7, 0xcd, 
    0x2, 0x2, 0x898, 0x899, 0x7, 0xce, 0x2, 0x2, 0x899, 0x89a, 0x5, 0x17e, 
    0xc0, 0x2, 0x89a, 0x185, 0x3, 0x2, 0x2, 0x2, 0x89b, 0x89c, 0x8, 0xc4, 
    0x1, 0x2, 0x89c, 0x89d, 0x7, 0xc7, 0x2, 0x2, 0x89d, 0x89e, 0x5, 0x192, 
    0xca, 0x2, 0x89e, 0x8a5, 0x3, 0x2, 0x2, 0x2, 0x89f, 0x8a0, 0xc, 0x3, 
    0x2, 0x2, 0x8a0, 0x8a1, 0x7, 0xc6, 0x2, 0x2, 0x8a1, 0x8a2, 0x7, 0xc7, 
    0x2, 0x2, 0x8a2, 0x8a4, 0x5, 0x192, 0xca, 0x2, 0x8a3, 0x89f, 0x3, 0x2, 
    0x2, 0x2, 0x8a4, 0x8a7, 0x3, 0x2, 0x2, 0x2, 0x8a5, 0x8a3, 0x3, 0x2, 
    0x2, 0x2, 0x8a5, 0x8a6, 0x3, 0x2, 0x2, 0x2, 0x8a6, 0x187, 0x3, 0x2, 
    0x2, 0x2, 0x8a7, 0x8a5, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a9, 0x7, 0xcc, 
    0x2, 0x2, 0x8a9, 0x8aa, 0x5, 0x17e, 0xc0, 0x2, 0x8aa, 0x8ab, 0x7, 0x39, 
    0x2, 0x2, 0x8ab, 0x8ac, 0x7, 0x1b, 0x2, 0x2, 0x8ac, 0x8ad, 0x5, 0x1c, 
    0xf, 0x2, 0x8ad, 0x8ae, 0x7, 0x6, 0x2, 0x2, 0x8ae, 0x8af, 0x7, 0xcf, 
    0x2, 0x2, 0x8af, 0x8b0, 0x7, 0xc8, 0x2, 0x2, 0x8b0, 0x8b1, 0x5, 0x186, 
    0xc4, 0x2, 0x8b1, 0x8b2, 0x7, 0xc6, 0x2, 0x2, 0x8b2, 0x8b3, 0x5, 0x184, 
    0xc3, 0x2, 0x8b3, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8b4, 0x8b5, 0x7, 0xcc, 
    0x2, 0x2, 0x8b5, 0x8b6, 0x5, 0x17e, 0xc0, 0x2, 0x8b6, 0x8b7, 0x7, 0xc8, 
    0x2, 0x2, 0x8b7, 0x8b8, 0x5, 0x186, 0xc4, 0x2, 0x8b8, 0x8b9, 0x7, 0xc6, 
    0x2, 0x2, 0x8b9, 0x8ba, 0x5, 0x184, 0xc3, 0x2, 0x8ba, 0x8cb, 0x3, 0x2, 
    0x2, 0x2, 0x8bb, 0x8bc, 0x7, 0xcc, 0x2, 0x2, 0x8bc, 0x8bd, 0x5, 0x17e, 
    0xc0, 0x2, 0x8bd, 0x8be, 0x7, 0xc8, 0x2, 0x2, 0x8be, 0x8bf, 0x5, 0x186, 
    0xc4, 0x2, 0x8bf, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8c0, 0x8c1, 0x7, 0xcc, 
    0x2, 0x2, 0x8c1, 0x8c2, 0x5, 0x17e, 0xc0, 0x2, 0x8c2, 0x8c3, 0x7, 0x39, 
    0x2, 0x2, 0x8c3, 0x8c4, 0x7, 0x1b, 0x2, 0x2, 0x8c4, 0x8c5, 0x5, 0x1c, 
    0xf, 0x2, 0x8c5, 0x8c6, 0x7, 0x6, 0x2, 0x2, 0x8c6, 0x8c7, 0x7, 0xcf, 
    0x2, 0x2, 0x8c7, 0x8c8, 0x7, 0xc8, 0x2, 0x2, 0x8c8, 0x8c9, 0x5, 0x186, 
    0xc4, 0x2, 0x8c9, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8a8, 0x3, 0x2, 
    0x2, 0x2, 0x8ca, 0x8b4, 0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8bb, 0x3, 0x2, 
    0x2, 0x2, 0x8ca, 0x8c0, 0x3, 0x2, 0x2, 0x2, 0x8cb, 0x189, 0x3, 0x2, 
    0x2, 0x2, 0x8cc, 0x8f5, 0x5, 0x188, 0xc5, 0x2, 0x8cd, 0x8f5, 0x5, 0x90, 
    0x49, 0x2, 0x8ce, 0x8f5, 0x5, 0x92, 0x4a, 0x2, 0x8cf, 0x8f5, 0x5, 0x94, 
    0x4b, 0x2, 0x8d0, 0x8f5, 0x5, 0x96, 0x4c, 0x2, 0x8d1, 0x8f5, 0x5, 0x9e, 
    0x50, 0x2, 0x8d2, 0x8f5, 0x5, 0x9c, 0x4f, 0x2, 0x8d3, 0x8f5, 0x5, 0xa0, 
    0x51, 0x2, 0x8d4, 0x8f5, 0x5, 0xa2, 0x52, 0x2, 0x8d5, 0x8f5, 0x5, 0xa4, 
    0x53, 0x2, 0x8d6, 0x8f5, 0x5, 0xa6, 0x54, 0x2, 0x8d7, 0x8f5, 0x5, 0xa8, 
    0x55, 0x2, 0x8d8, 0x8f5, 0x5, 0xaa, 0x56, 0x2, 0x8d9, 0x8f5, 0x5, 0xac, 
    0x57, 0x2, 0x8da, 0x8f5, 0x5, 0xae, 0x58, 0x2, 0x8db, 0x8f5, 0x5, 0xb0, 
    0x59, 0x2, 0x8dc, 0x8f5, 0x5, 0xb2, 0x5a, 0x2, 0x8dd, 0x8f5, 0x5, 0xb4, 
    0x5b, 0x2, 0x8de, 0x8f5, 0x5, 0xb6, 0x5c, 0x2, 0x8df, 0x8f5, 0x5, 0xb8, 
    0x5d, 0x2, 0x8e0, 0x8f5, 0x5, 0xbe, 0x60, 0x2, 0x8e1, 0x8f5, 0x5, 0xc0, 
    0x61, 0x2, 0x8e2, 0x8f5, 0x5, 0xc2, 0x62, 0x2, 0x8e3, 0x8f5, 0x5, 0xc4, 
    0x63, 0x2, 0x8e4, 0x8f5, 0x5, 0xc6, 0x64, 0x2, 0x8e5, 0x8f5, 0x5, 0xc8, 
    0x65, 0x2, 0x8e6, 0x8f5, 0x5, 0xca, 0x66, 0x2, 0x8e7, 0x8f5, 0x5, 0xcc, 
    0x67, 0x2, 0x8e8, 0x8f5, 0x5, 0xce, 0x68, 0x2, 0x8e9, 0x8f5, 0x5, 0xd0, 
    0x69, 0x2, 0x8ea, 0x8f5, 0x5, 0xd2, 0x6a, 0x2, 0x8eb, 0x8f5, 0x5, 0xd4, 
    0x6b, 0x2, 0x8ec, 0x8f5, 0x5, 0xd6, 0x6c, 0x2, 0x8ed, 0x8f5, 0x5, 0xd8, 
    0x6d, 0x2, 0x8ee, 0x8f5, 0x5, 0xda, 0x6e, 0x2, 0x8ef, 0x8f5, 0x5, 0xdc, 
    0x6f, 0x2, 0x8f0, 0x8f5, 0x5, 0xde, 0x70, 0x2, 0x8f1, 0x8f5, 0x5, 0xe0, 
    0x71, 0x2, 0x8f2, 0x8f5, 0x5, 0xe2, 0x72, 0x2, 0x8f3, 0x8f5, 0x5, 0xd8, 
    0x6d, 0x2, 0x8f4, 0x8cc, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8cd, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8ce, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8cf, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8d0, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8d1, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8d2, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8d3, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8d4, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8d5, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8d6, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8d7, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8d8, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8d9, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8da, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8db, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8dc, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8dd, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8de, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8df, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8e0, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8e1, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8e2, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8e3, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8e4, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8e5, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8e6, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8e7, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8e8, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8e9, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8ea, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8eb, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8ed, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8ef, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8f1, 0x3, 0x2, 
    0x2, 0x2, 0x8f4, 0x8f2, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8f3, 0x3, 0x2, 
    0x2, 0x2, 0x8f5, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x8f6, 0x8f7, 0x5, 0x18a, 
    0xc6, 0x2, 0x8f7, 0x8f8, 0x7, 0x39, 0x2, 0x2, 0x8f8, 0x8f9, 0x7, 0x1b, 
    0x2, 0x2, 0x8f9, 0x8fa, 0x7, 0x1a, 0x2, 0x2, 0x8fa, 0x8fb, 0x7, 0x13, 
    0x2, 0x2, 0x8fb, 0x8fc, 0x7, 0x15, 0x2, 0x2, 0x8fc, 0x8fd, 0x5, 0x26, 
    0x14, 0x2, 0x8fd, 0x8fe, 0x7, 0xad, 0x2, 0x2, 0x8fe, 0x901, 0x3, 0x2, 
    0x2, 0x2, 0x8ff, 0x901, 0x5, 0x18a, 0xc6, 0x2, 0x900, 0x8f6, 0x3, 0x2, 
    0x2, 0x2, 0x900, 0x8ff, 0x3, 0x2, 0x2, 0x2, 0x901, 0x18d, 0x3, 0x2, 
    0x2, 0x2, 0x902, 0x903, 0x7, 0x4c, 0x2, 0x2, 0x903, 0x904, 0x5, 0x150, 
    0xa9, 0x2, 0x904, 0x905, 0x7, 0xc5, 0x2, 0x2, 0x905, 0x906, 0x5, 0x192, 
    0xca, 0x2, 0x906, 0x909, 0x3, 0x2, 0x2, 0x2, 0x907, 0x909, 0x5, 0x18c, 
    0xc7, 0x2, 0x908, 0x902, 0x3, 0x2, 0x2, 0x2, 0x908, 0x907, 0x3, 0x2, 
    0x2, 0x2, 0x909, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x90a, 0x90b, 0x7, 0x4c, 
    0x2, 0x2, 0x90b, 0x90c, 0x5, 0x150, 0xa9, 0x2, 0x90c, 0x90d, 0x7, 0xc5, 
    0x2, 0x2, 0x90d, 0x90e, 0x7, 0xb0, 0x2, 0x2, 0x90e, 0x90f, 0x5, 0x192, 
    0xca, 0x2, 0x90f, 0x912, 0x3, 0x2, 0x2, 0x2, 0x910, 0x912, 0x5, 0x18e, 
    0xc8, 0x2, 0x911, 0x90a, 0x3, 0x2, 0x2, 0x2, 0x911, 0x910, 0x3, 0x2, 
    0x2, 0x2, 0x912, 0x191, 0x3, 0x2, 0x2, 0x2, 0x913, 0x914, 0x5, 0x34, 
    0x1b, 0x2, 0x914, 0x915, 0x7, 0x63, 0x2, 0x2, 0x915, 0x916, 0x7, 0x7e, 
    0x2, 0x2, 0x916, 0x917, 0x5, 0x34, 0x1b, 0x2, 0x917, 0x918, 0x5, 0x190, 
    0xc9, 0x2, 0x918, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x919, 0x91a, 0x5, 0x34, 
    0x1b, 0x2, 0x91a, 0x91b, 0x7, 0x63, 0x2, 0x2, 0x91b, 0x91c, 0x5, 0x190, 
    0xc9, 0x2, 0x91c, 0x91d, 0x7, 0x19, 0x2, 0x2, 0x91d, 0x91e, 0x5, 0x190, 
    0xc9, 0x2, 0x91e, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x91f, 0x920, 0x5, 0x34, 
    0x1b, 0x2, 0x920, 0x921, 0x7, 0x63, 0x2, 0x2, 0x921, 0x922, 0x5, 0x190, 
    0xc9, 0x2, 0x922, 0x92a, 0x3, 0x2, 0x2, 0x2, 0x923, 0x924, 0x5, 0x190, 
    0xc9, 0x2, 0x924, 0x925, 0x7, 0x2b, 0x2, 0x2, 0x925, 0x926, 0x5, 0x34, 
    0x1b, 0x2, 0x926, 0x927, 0x5, 0x190, 0xc9, 0x2, 0x927, 0x92a, 0x3, 0x2, 
    0x2, 0x2, 0x928, 0x92a, 0x5, 0x190, 0xc9, 0x2, 0x929, 0x913, 0x3, 0x2, 
    0x2, 0x2, 0x929, 0x919, 0x3, 0x2, 0x2, 0x2, 0x929, 0x91f, 0x3, 0x2, 
    0x2, 0x2, 0x929, 0x923, 0x3, 0x2, 0x2, 0x2, 0x929, 0x928, 0x3, 0x2, 
    0x2, 0x2, 0x92a, 0x193, 0x3, 0x2, 0x2, 0x2, 0x92b, 0x92c, 0x7, 0xc6, 
    0x2, 0x2, 0x92c, 0x92d, 0x7, 0x87, 0x2, 0x2, 0x92d, 0x937, 0x7, 0xc5, 
    0x2, 0x2, 0x92e, 0x937, 0x7, 0xc6, 0x2, 0x2, 0x92f, 0x937, 0x7, 0x98, 
    0x2, 0x2, 0x930, 0x931, 0x7, 0xc5, 0x2, 0x2, 0x931, 0x937, 0x7, 0x98, 
    0x2, 0x2, 0x932, 0x933, 0x7, 0xc5, 0x2, 0x2, 0x933, 0x937, 0x7, 0x87, 
    0x2, 0x2, 0x934, 0x937, 0x7, 0xc5, 0x2, 0x2, 0x935, 0x937, 0x7, 0x87, 
    0x2, 0x2, 0x936, 0x92b, 0x3, 0x2, 0x2, 0x2, 0x936, 0x92e, 0x3, 0x2, 
    0x2, 0x2, 0x936, 0x92f, 0x3, 0x2, 0x2, 0x2, 0x936, 0x930, 0x3, 0x2, 
    0x2, 0x2, 0x936, 0x932, 0x3, 0x2, 0x2, 0x2, 0x936, 0x934, 0x3, 0x2, 
    0x2, 0x2, 0x936, 0x935, 0x3, 0x2, 0x2, 0x2, 0x937, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x938, 0x93d, 0x5, 0x192, 0xca, 0x2, 0x939, 0x93d, 0x5, 0xfc, 
    0x7f, 0x2, 0x93a, 0x93d, 0x5, 0x15a, 0xae, 0x2, 0x93b, 0x93d, 0x5, 0x152, 
    0xaa, 0x2, 0x93c, 0x938, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x939, 0x3, 0x2, 
    0x2, 0x2, 0x93c, 0x93a, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x93b, 0x3, 0x2, 
    0x2, 0x2, 0x93d, 0x197, 0x3, 0x2, 0x2, 0x2, 0x93e, 0x93f, 0x7, 0xd0, 
    0x2, 0x2, 0x93f, 0x943, 0x7, 0xc7, 0x2, 0x2, 0x940, 0x941, 0x5, 0x196, 
    0xcc, 0x2, 0x941, 0x942, 0x5, 0x194, 0xcb, 0x2, 0x942, 0x944, 0x3, 0x2, 
    0x2, 0x2, 0x943, 0x940, 0x3, 0x2, 0x2, 0x2, 0x944, 0x945, 0x3, 0x2, 
    0x2, 0x2, 0x945, 0x943, 0x3, 0x2, 0x2, 0x2, 0x945, 0x946, 0x3, 0x2, 
    0x2, 0x2, 0x946, 0x199, 0x3, 0x2, 0x2, 0x2, 0x947, 0x948, 0x7, 0xd1, 
    0x2, 0x2, 0x948, 0x94c, 0x7, 0xc7, 0x2, 0x2, 0x949, 0x94a, 0x5, 0x196, 
    0xcc, 0x2, 0x94a, 0x94b, 0x5, 0x194, 0xcb, 0x2, 0x94b, 0x94d, 0x3, 0x2, 
    0x2, 0x2, 0x94c, 0x949, 0x3, 0x2, 0x2, 0x2, 0x94d, 0x94e, 0x3, 0x2, 
    0x2, 0x2, 0x94e, 0x94c, 0x3, 0x2, 0x2, 0x2, 0x94e, 0x94f, 0x3, 0x2, 
    0x2, 0x2, 0x94f, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x950, 0x951, 0x7, 0x73, 
    0x2, 0x2, 0x951, 0x955, 0x7, 0xc7, 0x2, 0x2, 0x952, 0x953, 0x5, 0x196, 
    0xcc, 0x2, 0x953, 0x954, 0x5, 0x194, 0xcb, 0x2, 0x954, 0x956, 0x3, 0x2, 
    0x2, 0x2, 0x955, 0x952, 0x3, 0x2, 0x2, 0x2, 0x956, 0x957, 0x3, 0x2, 
    0x2, 0x2, 0x957, 0x955, 0x3, 0x2, 0x2, 0x2, 0x957, 0x958, 0x3, 0x2, 
    0x2, 0x2, 0x958, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x959, 0x95a, 0x5, 0x16a, 
    0xb6, 0x2, 0x95a, 0x95b, 0x7, 0xc6, 0x2, 0x2, 0x95b, 0x963, 0x3, 0x2, 
    0x2, 0x2, 0x95c, 0x963, 0x5, 0x198, 0xcd, 0x2, 0x95d, 0x963, 0x5, 0x19a, 
    0xce, 0x2, 0x95e, 0x963, 0x5, 0x19c, 0xcf, 0x2, 0x95f, 0x960, 0x5, 0x196, 
    0xcc, 0x2, 0x960, 0x961, 0x5, 0x194, 0xcb, 0x2, 0x961, 0x963, 0x3, 0x2, 
    0x2, 0x2, 0x962, 0x959, 0x3, 0x2, 0x2, 0x2, 0x962, 0x95c, 0x3, 0x2, 
    0x2, 0x2, 0x962, 0x95d, 0x3, 0x2, 0x2, 0x2, 0x962, 0x95e, 0x3, 0x2, 
    0x2, 0x2, 0x962, 0x95f, 0x3, 0x2, 0x2, 0x2, 0x963, 0x19f, 0x3, 0x2, 
    0x2, 0x2, 0x964, 0x966, 0x5, 0x19e, 0xd0, 0x2, 0x965, 0x964, 0x3, 0x2, 
    0x2, 0x2, 0x966, 0x967, 0x3, 0x2, 0x2, 0x2, 0x967, 0x965, 0x3, 0x2, 
    0x2, 0x2, 0x967, 0x968, 0x3, 0x2, 0x2, 0x2, 0x968, 0x969, 0x3, 0x2, 
    0x2, 0x2, 0x969, 0x96a, 0x7, 0x2, 0x2, 0x3, 0x96a, 0x1a1, 0x3, 0x2, 
    0x2, 0x2, 0x7d, 0x1a7, 0x1d2, 0x1d5, 0x1d8, 0x1f3, 0x1f5, 0x201, 0x20b, 
    0x211, 0x214, 0x21b, 0x21e, 0x22d, 0x233, 0x236, 0x23a, 0x241, 0x246, 
    0x251, 0x25c, 0x286, 0x29b, 0x2a0, 0x2a7, 0x2bd, 0x2ca, 0x2d0, 0x2d6, 
    0x2db, 0x2e0, 0x2e3, 0x2e7, 0x2ea, 0x2fa, 0x2ff, 0x306, 0x30a, 0x30d, 
    0x316, 0x31f, 0x32f, 0x332, 0x33d, 0x340, 0x344, 0x349, 0x34e, 0x356, 
    0x35e, 0x366, 0x38f, 0x39a, 0x39d, 0x3a0, 0x3a5, 0x3a9, 0x3ae, 0x3ec, 
    0x3fe, 0x401, 0x415, 0x418, 0x42c, 0x432, 0x439, 0x440, 0x442, 0x44c, 
    0x481, 0x488, 0x49a, 0x4ae, 0x4bd, 0x4ce, 0x4e1, 0x524, 0x540, 0x558, 
    0x5b3, 0x5cb, 0x5e9, 0x633, 0x659, 0x669, 0x684, 0x68a, 0x6a9, 0x6b1, 
    0x6b8, 0x6bf, 0x6c6, 0x6c9, 0x6d4, 0x6ea, 0x72b, 0x734, 0x768, 0x76e, 
    0x7b6, 0x7c0, 0x7cd, 0x7e9, 0x80c, 0x850, 0x872, 0x879, 0x886, 0x88d, 
    0x891, 0x8a5, 0x8ca, 0x8f4, 0x900, 0x908, 0x911, 0x929, 0x936, 0x93c, 
    0x945, 0x94e, 0x957, 0x962, 0x967, 
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
