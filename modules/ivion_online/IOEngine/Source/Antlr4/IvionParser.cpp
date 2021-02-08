
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
    setState(405);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::In: {
        setState(400);
        match(IvionParser::In);
        break;
      }

      case IvionParser::With: {
        setState(401);
        match(IvionParser::With);
        break;
      }

      case IvionParser::That: {
        setState(402);
        match(IvionParser::That);
        setState(403);
        match(IvionParser::Already);
        setState(404);
        match(IvionParser::Had);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(407);
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
    setState(409);
    match(IvionParser::Near);
    setState(410);
    match(IvionParser::Terrain);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostNearEntityFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostNearEntityFilterContext::GeneralPostNearEntityFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostNearEntityFilterContext::Near() {
  return getToken(IvionParser::Near, 0);
}

IvionParser::EntityContext* IvionParser::GeneralPostNearEntityFilterContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
}


size_t IvionParser::GeneralPostNearEntityFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostNearEntityFilter;
}


antlrcpp::Any IvionParser::GeneralPostNearEntityFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostNearEntityFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostNearEntityFilterContext* IvionParser::generalPostNearEntityFilter() {
  GeneralPostNearEntityFilterContext *_localctx = _tracker.createInstance<GeneralPostNearEntityFilterContext>(_ctx, getState());
  enterRule(_localctx, 4, IvionParser::RuleGeneralPostNearEntityFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    match(IvionParser::Near);
    setState(413);
    entity();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostInEntityFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostInEntityFilterContext::GeneralPostInEntityFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostInEntityFilterContext::In() {
  return getToken(IvionParser::In, 0);
}

IvionParser::EntityContext* IvionParser::GeneralPostInEntityFilterContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
}


size_t IvionParser::GeneralPostInEntityFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostInEntityFilter;
}


antlrcpp::Any IvionParser::GeneralPostInEntityFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostInEntityFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostInEntityFilterContext* IvionParser::generalPostInEntityFilter() {
  GeneralPostInEntityFilterContext *_localctx = _tracker.createInstance<GeneralPostInEntityFilterContext>(_ctx, getState());
  enterRule(_localctx, 6, IvionParser::RuleGeneralPostInEntityFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415);
    match(IvionParser::In);
    setState(416);
    entity();
   
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
  enterRule(_localctx, 8, IvionParser::RuleGeneralPostPlayerChoiceFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    match(IvionParser::Of);
    setState(419);
    player();
    setState(420);
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
  enterRule(_localctx, 10, IvionParser::RuleGeneralPostAtLeastAwayFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(422);
    match(IvionParser::At);
    setState(423);
    match(IvionParser::Least);
    setState(424);
    literalValue();
    setState(425);
    match(IvionParser::Tile);
    setState(426);
    match(IvionParser::Away);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GeneralPostAtLeastAwayFromFilterContext ------------------------------------------------------------------

IvionParser::GeneralPostAtLeastAwayFromFilterContext::GeneralPostAtLeastAwayFromFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromFilterContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromFilterContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::LiteralValueContext* IvionParser::GeneralPostAtLeastAwayFromFilterContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromFilterContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromFilterContext::Away() {
  return getToken(IvionParser::Away, 0);
}

tree::TerminalNode* IvionParser::GeneralPostAtLeastAwayFromFilterContext::From() {
  return getToken(IvionParser::From, 0);
}

IvionParser::EntityContext* IvionParser::GeneralPostAtLeastAwayFromFilterContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
}


size_t IvionParser::GeneralPostAtLeastAwayFromFilterContext::getRuleIndex() const {
  return IvionParser::RuleGeneralPostAtLeastAwayFromFilter;
}


antlrcpp::Any IvionParser::GeneralPostAtLeastAwayFromFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitGeneralPostAtLeastAwayFromFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::GeneralPostAtLeastAwayFromFilterContext* IvionParser::generalPostAtLeastAwayFromFilter() {
  GeneralPostAtLeastAwayFromFilterContext *_localctx = _tracker.createInstance<GeneralPostAtLeastAwayFromFilterContext>(_ctx, getState());
  enterRule(_localctx, 12, IvionParser::RuleGeneralPostAtLeastAwayFromFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    match(IvionParser::At);
    setState(429);
    match(IvionParser::Least);
    setState(430);
    literalValue();
    setState(431);
    match(IvionParser::Tile);
    setState(432);
    match(IvionParser::Away);
    setState(433);
    match(IvionParser::From);
    setState(434);
    entity();
   
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
  enterRule(_localctx, 14, IvionParser::RulePlayerType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(436);
    dynamic_cast<PlayerTypeContext *>(_localctx)->flag = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Enemy

    || _la == IvionParser::Player || _la == IvionParser::Ally)) {
      dynamic_cast<PlayerTypeContext *>(_localctx)->flag = _errHandler->recoverInline(this);
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

//----------------- AnotherFlagContext ------------------------------------------------------------------

IvionParser::AnotherFlagContext::AnotherFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::AnotherFlagContext::Another() {
  return getToken(IvionParser::Another, 0);
}


size_t IvionParser::AnotherFlagContext::getRuleIndex() const {
  return IvionParser::RuleAnotherFlag;
}


antlrcpp::Any IvionParser::AnotherFlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAnotherFlag(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AnotherFlagContext* IvionParser::anotherFlag() {
  AnotherFlagContext *_localctx = _tracker.createInstance<AnotherFlagContext>(_ctx, getState());
  enterRule(_localctx, 16, IvionParser::RuleAnotherFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(438);
    match(IvionParser::Another);
   
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
  enterRule(_localctx, 18, IvionParser::RuleUpToFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(440);
    match(IvionParser::Up);
    setState(441);
    match(IvionParser::To);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UncontrolledFlagContext ------------------------------------------------------------------

IvionParser::UncontrolledFlagContext::UncontrolledFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::UncontrolledFlagContext::Uncontrolled() {
  return getToken(IvionParser::Uncontrolled, 0);
}


size_t IvionParser::UncontrolledFlagContext::getRuleIndex() const {
  return IvionParser::RuleUncontrolledFlag;
}


antlrcpp::Any IvionParser::UncontrolledFlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitUncontrolledFlag(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::UncontrolledFlagContext* IvionParser::uncontrolledFlag() {
  UncontrolledFlagContext *_localctx = _tracker.createInstance<UncontrolledFlagContext>(_ctx, getState());
  enterRule(_localctx, 20, IvionParser::RuleUncontrolledFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(443);
    match(IvionParser::Uncontrolled);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlledFlagContext ------------------------------------------------------------------

IvionParser::ControlledFlagContext::ControlledFlagContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ControlledFlagContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}


size_t IvionParser::ControlledFlagContext::getRuleIndex() const {
  return IvionParser::RuleControlledFlag;
}


antlrcpp::Any IvionParser::ControlledFlagContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitControlledFlag(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ControlledFlagContext* IvionParser::controlledFlag() {
  ControlledFlagContext *_localctx = _tracker.createInstance<ControlledFlagContext>(_ctx, getState());
  enterRule(_localctx, 22, IvionParser::RuleControlledFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    match(IvionParser::Controlled);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PlayerPrefixContext ------------------------------------------------------------------

IvionParser::PlayerPrefixContext::PlayerPrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::AnotherFlagContext* IvionParser::PlayerPrefixContext::anotherFlag() {
  return getRuleContext<IvionParser::AnotherFlagContext>(0);
}

IvionParser::UncontrolledFlagContext* IvionParser::PlayerPrefixContext::uncontrolledFlag() {
  return getRuleContext<IvionParser::UncontrolledFlagContext>(0);
}

IvionParser::ControlledFlagContext* IvionParser::PlayerPrefixContext::controlledFlag() {
  return getRuleContext<IvionParser::ControlledFlagContext>(0);
}


size_t IvionParser::PlayerPrefixContext::getRuleIndex() const {
  return IvionParser::RulePlayerPrefix;
}


antlrcpp::Any IvionParser::PlayerPrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerPrefix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerPrefixContext* IvionParser::playerPrefix() {
  PlayerPrefixContext *_localctx = _tracker.createInstance<PlayerPrefixContext>(_ctx, getState());
  enterRule(_localctx, 24, IvionParser::RulePlayerPrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(450);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Another: {
        enterOuterAlt(_localctx, 1);
        setState(447);
        anotherFlag();
        break;
      }

      case IvionParser::Uncontrolled: {
        enterOuterAlt(_localctx, 2);
        setState(448);
        uncontrolledFlag();
        break;
      }

      case IvionParser::Controlled: {
        enterOuterAlt(_localctx, 3);
        setState(449);
        controlledFlag();
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

//----------------- PlayerPostfixContext ------------------------------------------------------------------

IvionParser::PlayerPostfixContext::PlayerPostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::GeneralPostInTerrainFilterContext* IvionParser::PlayerPostfixContext::generalPostInTerrainFilter() {
  return getRuleContext<IvionParser::GeneralPostInTerrainFilterContext>(0);
}

IvionParser::GeneralPostNearTerrainFilterContext* IvionParser::PlayerPostfixContext::generalPostNearTerrainFilter() {
  return getRuleContext<IvionParser::GeneralPostNearTerrainFilterContext>(0);
}

IvionParser::GeneralPostNearEntityFilterContext* IvionParser::PlayerPostfixContext::generalPostNearEntityFilter() {
  return getRuleContext<IvionParser::GeneralPostNearEntityFilterContext>(0);
}

IvionParser::GeneralPostInEntityFilterContext* IvionParser::PlayerPostfixContext::generalPostInEntityFilter() {
  return getRuleContext<IvionParser::GeneralPostInEntityFilterContext>(0);
}

IvionParser::GeneralPostPlayerChoiceFilterContext* IvionParser::PlayerPostfixContext::generalPostPlayerChoiceFilter() {
  return getRuleContext<IvionParser::GeneralPostPlayerChoiceFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFilterContext* IvionParser::PlayerPostfixContext::generalPostAtLeastAwayFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFromFilterContext* IvionParser::PlayerPostfixContext::generalPostAtLeastAwayFromFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFromFilterContext>(0);
}


size_t IvionParser::PlayerPostfixContext::getRuleIndex() const {
  return IvionParser::RulePlayerPostfix;
}


antlrcpp::Any IvionParser::PlayerPostfixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPlayerPostfix(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PlayerPostfixContext* IvionParser::playerPostfix() {
  PlayerPostfixContext *_localctx = _tracker.createInstance<PlayerPostfixContext>(_ctx, getState());
  enterRule(_localctx, 26, IvionParser::RulePlayerPostfix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(459);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(452);
      generalPostInTerrainFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(453);
      generalPostNearTerrainFilter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(454);
      generalPostNearEntityFilter();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(455);
      generalPostInEntityFilter();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(456);
      generalPostPlayerChoiceFilter();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(457);
      generalPostAtLeastAwayFilter();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(458);
      generalPostAtLeastAwayFromFilter();
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

std::vector<IvionParser::PlayerPrefixContext *> IvionParser::PlayerFilterContext::playerPrefix() {
  return getRuleContexts<IvionParser::PlayerPrefixContext>();
}

IvionParser::PlayerPrefixContext* IvionParser::PlayerFilterContext::playerPrefix(size_t i) {
  return getRuleContext<IvionParser::PlayerPrefixContext>(i);
}

std::vector<IvionParser::PlayerPostfixContext *> IvionParser::PlayerFilterContext::playerPostfix() {
  return getRuleContexts<IvionParser::PlayerPostfixContext>();
}

IvionParser::PlayerPostfixContext* IvionParser::PlayerFilterContext::playerPostfix(size_t i) {
  return getRuleContext<IvionParser::PlayerPostfixContext>(i);
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
  enterRule(_localctx, 28, IvionParser::RulePlayerFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(464);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (((((_la - 33) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 33)) & ((1ULL << (IvionParser::Another - 33))
      | (1ULL << (IvionParser::Controlled - 33))
      | (1ULL << (IvionParser::Uncontrolled - 33)))) != 0)) {
      setState(461);
      playerPrefix();
      setState(466);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(467);
    playerType();
    setState(471);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(468);
        playerPostfix(); 
      }
      setState(473);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
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
  enterRule(_localctx, 30, IvionParser::RuleCurrentPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
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
  enterRule(_localctx, 32, IvionParser::RulePreviousPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(481);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Them: {
        enterOuterAlt(_localctx, 1);
        setState(476);
        match(IvionParser::Them);
        break;
      }

      case IvionParser::They: {
        enterOuterAlt(_localctx, 2);
        setState(477);
        match(IvionParser::They);
        break;
      }

      case IvionParser::That: {
        enterOuterAlt(_localctx, 3);
        setState(478);
        match(IvionParser::That);
        setState(479);
        playerType();
        break;
      }

      case IvionParser::Their: {
        enterOuterAlt(_localctx, 4);
        setState(480);
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
  enterRule(_localctx, 34, IvionParser::RulePreviousCardsOwner);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    match(IvionParser::Its);
    setState(484);
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
  enterRule(_localctx, 36, IvionParser::RulePreviousCardsController);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(491);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(486);
      previousCard();
      setState(487);
      match(IvionParser::Controller);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(489);
      match(IvionParser::Its);
      setState(490);
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
  enterRule(_localctx, 38, IvionParser::RulePlayerRef);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(497);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(493);
      previousPlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(494);
      currentPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(495);
      previousCardsOwner();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(496);
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

//----------------- SelectPlayerContext ------------------------------------------------------------------

IvionParser::SelectPlayerContext::SelectPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerFilterContext* IvionParser::SelectPlayerContext::playerFilter() {
  return getRuleContext<IvionParser::PlayerFilterContext>(0);
}

IvionParser::UpToFlagContext* IvionParser::SelectPlayerContext::upToFlag() {
  return getRuleContext<IvionParser::UpToFlagContext>(0);
}

IvionParser::LiteralValueContext* IvionParser::SelectPlayerContext::literalValue() {
  return getRuleContext<IvionParser::LiteralValueContext>(0);
}

IvionParser::AnotherFlagContext* IvionParser::SelectPlayerContext::anotherFlag() {
  return getRuleContext<IvionParser::AnotherFlagContext>(0);
}

tree::TerminalNode* IvionParser::SelectPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}


size_t IvionParser::SelectPlayerContext::getRuleIndex() const {
  return IvionParser::RuleSelectPlayer;
}


antlrcpp::Any IvionParser::SelectPlayerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitSelectPlayer(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::SelectPlayerContext* IvionParser::selectPlayer() {
  SelectPlayerContext *_localctx = _tracker.createInstance<SelectPlayerContext>(_ctx, getState());
  enterRule(_localctx, 40, IvionParser::RuleSelectPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(499);
      upToFlag();
    }
    setState(503);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::A || ((((_la - 187) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 187)) & ((1ULL << (IvionParser::Once - 187))
      | (1ULL << (IvionParser::Twice - 187))
      | (1ULL << (IvionParser::Integer - 187))
      | (1ULL << (IvionParser::One - 187))
      | (1ULL << (IvionParser::Two - 187))
      | (1ULL << (IvionParser::Three - 187)))) != 0)) {
      setState(502);
      literalValue();
    }
    setState(506);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(505);
      anotherFlag();
      break;
    }

    }
    setState(509);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Target) {
      setState(508);
      match(IvionParser::Target);
    }
    setState(511);
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

tree::TerminalNode* IvionParser::AllPlayersContext::Other() {
  return getToken(IvionParser::Other, 0);
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
  enterRule(_localctx, 42, IvionParser::RuleAllPlayers);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(522);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Each:
      case IvionParser::All:
      case IvionParser::Any: {
        enterOuterAlt(_localctx, 1);
        setState(513);
        _la = _input->LA(1);
        if (!(_la == IvionParser::Each

        || _la == IvionParser::All || _la == IvionParser::Any)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(515);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == IvionParser::Other) {
          setState(514);
          dynamic_cast<AllPlayersContext *>(_localctx)->otherFlag = match(IvionParser::Other);
        }
        setState(517);
        playerFilter();
        break;
      }

      case IvionParser::Yourself: {
        enterOuterAlt(_localctx, 2);
        setState(518);
        match(IvionParser::Yourself);
        setState(519);
        match(IvionParser::Or);
        setState(520);
        match(IvionParser::Another);
        setState(521);
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

IvionParser::SelectPlayerContext* IvionParser::PlayerContext::selectPlayer() {
  return getRuleContext<IvionParser::SelectPlayerContext>(0);
}

IvionParser::PlayerRefContext* IvionParser::PlayerContext::playerRef() {
  return getRuleContext<IvionParser::PlayerRefContext>(0);
}

IvionParser::AllPlayersContext* IvionParser::PlayerContext::allPlayers() {
  return getRuleContext<IvionParser::AllPlayersContext>(0);
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
  enterRule(_localctx, 44, IvionParser::RulePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(527);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(524);
      selectPlayer();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(525);
      playerRef();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(526);
      allPlayers();
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
  enterRule(_localctx, 46, IvionParser::RuleCardPreEnemyFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
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
  enterRule(_localctx, 48, IvionParser::RuleCardPreAttachedFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(531);
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
  enterRule(_localctx, 50, IvionParser::RuleCardPreAbilityFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(534);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(533);
      match(IvionParser::Non);
    }
    setState(536);
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
  enterRule(_localctx, 52, IvionParser::RuleCardPreAttackFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(538);
      match(IvionParser::Non);
    }
    setState(541);
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
  enterRule(_localctx, 54, IvionParser::RuleCardPreRevealedFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(543);
    match(IvionParser::Reveal);
   
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
  enterRule(_localctx, 56, IvionParser::RuleCardPreInstanceFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(548);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      break;
    }

    case 2: {
      setState(546);
      match(IvionParser::The);
      break;
    }

    case 3: {
      setState(547);
      playerRef();
      break;
    }

    }
    setState(550);
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

IvionParser::AnotherFlagContext* IvionParser::CardPrefixContext::anotherFlag() {
  return getRuleContext<IvionParser::AnotherFlagContext>(0);
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
  enterRule(_localctx, 58, IvionParser::RuleCardPrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(559);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(552);
      cardPreEnemyFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(553);
      cardPreAttachedFilter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(554);
      cardPreAbilityFilter();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(555);
      cardPreAttackFilter();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(556);
      cardPreRevealedFilter();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(557);
      anotherFlag();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(558);
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

IvionParser::EntityContext* IvionParser::CardPostTargettingFilterContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
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
  enterRule(_localctx, 60, IvionParser::RuleCardPostTargettingFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(561);
    match(IvionParser::Targeting);
    setState(562);
    entity();
   
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
  enterRule(_localctx, 62, IvionParser::RuleCardPostCostFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    match(IvionParser::With);
    setState(565);
    match(IvionParser::A);
    setState(566);
    match(IvionParser::Resource);
    setState(567);
    match(IvionParser::Cost);
    setState(568);
    match(IvionParser::Of);
    setState(569);
    literalValue();
    setState(570);
    match(IvionParser::Or);
    setState(571);
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

//----------------- CardPostAttachedToFilterContext ------------------------------------------------------------------

IvionParser::CardPostAttachedToFilterContext::CardPostAttachedToFilterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CardPostAttachedToFilterContext::Attached() {
  return getToken(IvionParser::Attached, 0);
}

tree::TerminalNode* IvionParser::CardPostAttachedToFilterContext::To() {
  return getToken(IvionParser::To, 0);
}

IvionParser::EntityContext* IvionParser::CardPostAttachedToFilterContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
}


size_t IvionParser::CardPostAttachedToFilterContext::getRuleIndex() const {
  return IvionParser::RuleCardPostAttachedToFilter;
}


antlrcpp::Any IvionParser::CardPostAttachedToFilterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitCardPostAttachedToFilter(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::CardPostAttachedToFilterContext* IvionParser::cardPostAttachedToFilter() {
  CardPostAttachedToFilterContext *_localctx = _tracker.createInstance<CardPostAttachedToFilterContext>(_ctx, getState());
  enterRule(_localctx, 64, IvionParser::RuleCardPostAttachedToFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(573);
    match(IvionParser::Attached);
    setState(574);
    match(IvionParser::To);
    setState(575);
    entity();
   
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

IvionParser::PlayerContext* IvionParser::CardPostControlledByPlayerFilterContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 66, IvionParser::RuleCardPostControlledByPlayerFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    match(IvionParser::Controlled);
    setState(578);
    match(IvionParser::By);
    setState(579);
    player();
   
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
  enterRule(_localctx, 68, IvionParser::RuleCardPostHardcastFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    match(IvionParser::With);
    setState(582);
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
  enterRule(_localctx, 70, IvionParser::RuleCardPostFrenzyFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    match(IvionParser::With);
    setState(585);
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
  enterRule(_localctx, 72, IvionParser::RuleCardPostInDiscardFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(587);
    match(IvionParser::From);
    setState(588);
    match(IvionParser::Your);
    setState(589);
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
  enterRule(_localctx, 74, IvionParser::RuleCardPostTurnRefFilter);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(597);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::This: {
        enterOuterAlt(_localctx, 1);
        setState(591);
        match(IvionParser::This);
        setState(592);
        match(IvionParser::Turn);
        break;
      }

      case IvionParser::During: {
        enterOuterAlt(_localctx, 2);
        setState(593);
        match(IvionParser::During);
        setState(594);
        playerRef();
        setState(595);
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

IvionParser::CardPostAttachedToFilterContext* IvionParser::CardPostfixContext::cardPostAttachedToFilter() {
  return getRuleContext<IvionParser::CardPostAttachedToFilterContext>(0);
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

IvionParser::GeneralPostNearEntityFilterContext* IvionParser::CardPostfixContext::generalPostNearEntityFilter() {
  return getRuleContext<IvionParser::GeneralPostNearEntityFilterContext>(0);
}

IvionParser::GeneralPostInEntityFilterContext* IvionParser::CardPostfixContext::generalPostInEntityFilter() {
  return getRuleContext<IvionParser::GeneralPostInEntityFilterContext>(0);
}

IvionParser::GeneralPostPlayerChoiceFilterContext* IvionParser::CardPostfixContext::generalPostPlayerChoiceFilter() {
  return getRuleContext<IvionParser::GeneralPostPlayerChoiceFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFilterContext* IvionParser::CardPostfixContext::generalPostAtLeastAwayFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFromFilterContext* IvionParser::CardPostfixContext::generalPostAtLeastAwayFromFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFromFilterContext>(0);
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
  enterRule(_localctx, 76, IvionParser::RuleCardPostfix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(614);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(599);
      cardPostTargettingFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(600);
      cardPostCostFilter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(601);
      cardPostAttachedToFilter();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(602);
      cardPostControlledByPlayerFilter();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(603);
      cardPostHardcastFilter();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(604);
      cardPostFrenzyFilter();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(605);
      cardPostInDiscardFilter();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(606);
      cardPostTurnRefFilter();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(607);
      generalPostInTerrainFilter();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(608);
      generalPostNearTerrainFilter();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(609);
      generalPostNearEntityFilter();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(610);
      generalPostInEntityFilter();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(611);
      generalPostPlayerChoiceFilter();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(612);
      generalPostAtLeastAwayFilter();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(613);
      generalPostAtLeastAwayFromFilter();
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
  enterRule(_localctx, 78, IvionParser::RuleCardFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(619);
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
      setState(616);
      cardPrefix();
      setState(621);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(622);
    match(IvionParser::Card);
    setState(626);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(623);
        cardPostfix(); 
      }
      setState(628);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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
  enterRule(_localctx, 80, IvionParser::RuleCardName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(629);
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

IvionParser::PlayerContext* IvionParser::BottomCardContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 82, IvionParser::RuleBottomCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(631);
    match(IvionParser::The);
    setState(632);
    match(IvionParser::Bottom);
    setState(633);
    match(IvionParser::Card);
    setState(634);
    match(IvionParser::Of);
    setState(635);
    player();
    setState(636);
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
  enterRule(_localctx, 84, IvionParser::RulePreviousCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(648);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(638);
      match(IvionParser::That);
      setState(639);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(640);
      match(IvionParser::The);
      setState(641);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(642);
      match(IvionParser::Its);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(643);
      match(IvionParser::It);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(644);
      match(IvionParser::It);
      setState(645);
      match(IvionParser::From);
      setState(646);
      match(IvionParser::Your);
      setState(647);
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
  enterRule(_localctx, 86, IvionParser::RuleTargetCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(650);
    match(IvionParser::Target);
    setState(651);
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

IvionParser::CardFilterContext* IvionParser::SelectCardContext::cardFilter() {
  return getRuleContext<IvionParser::CardFilterContext>(0);
}

tree::TerminalNode* IvionParser::SelectCardContext::A() {
  return getToken(IvionParser::A, 0);
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
  enterRule(_localctx, 88, IvionParser::RuleSelectCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(654);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::A) {
      setState(653);
      match(IvionParser::A);
    }
    setState(656);
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
  enterRule(_localctx, 90, IvionParser::RuleSingleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(663);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(658);
      cardName();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(659);
      targetCard();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(660);
      bottomCard();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(661);
      previousCard();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(662);
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
  enterRule(_localctx, 92, IvionParser::RuleAllCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    match(IvionParser::All);
    setState(666);
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

IvionParser::CardFilterContext* IvionParser::MultiCardContext::cardFilter() {
  return getRuleContext<IvionParser::CardFilterContext>(0);
}

IvionParser::UpToFlagContext* IvionParser::MultiCardContext::upToFlag() {
  return getRuleContext<IvionParser::UpToFlagContext>(0);
}

tree::TerminalNode* IvionParser::MultiCardContext::Target() {
  return getToken(IvionParser::Target, 0);
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
  enterRule(_localctx, 94, IvionParser::RuleMultiCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(669);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(668);
      upToFlag();
    }
    setState(671);
    literalValue();
    setState(673);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Target) {
      setState(672);
      match(IvionParser::Target);
    }
    setState(675);
    cardFilter();
   
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
  enterRule(_localctx, 96, IvionParser::RuleCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(680);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(677);
      singleCard();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(678);
      allCards();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(679);
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
  enterRule(_localctx, 98, IvionParser::RuleTilePreEmptyFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(683);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Non) {
      setState(682);
      match(IvionParser::Non);
    }
    setState(685);
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
  enterRule(_localctx, 100, IvionParser::RuleTilePreFix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(687);
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

IvionParser::GeneralPostNearEntityFilterContext* IvionParser::TilePostFixContext::generalPostNearEntityFilter() {
  return getRuleContext<IvionParser::GeneralPostNearEntityFilterContext>(0);
}

IvionParser::GeneralPostInEntityFilterContext* IvionParser::TilePostFixContext::generalPostInEntityFilter() {
  return getRuleContext<IvionParser::GeneralPostInEntityFilterContext>(0);
}

IvionParser::GeneralPostPlayerChoiceFilterContext* IvionParser::TilePostFixContext::generalPostPlayerChoiceFilter() {
  return getRuleContext<IvionParser::GeneralPostPlayerChoiceFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFilterContext* IvionParser::TilePostFixContext::generalPostAtLeastAwayFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFilterContext>(0);
}

IvionParser::GeneralPostAtLeastAwayFromFilterContext* IvionParser::TilePostFixContext::generalPostAtLeastAwayFromFilter() {
  return getRuleContext<IvionParser::GeneralPostAtLeastAwayFromFilterContext>(0);
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
  enterRule(_localctx, 102, IvionParser::RuleTilePostFix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(696);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(689);
      generalPostInTerrainFilter();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(690);
      generalPostNearTerrainFilter();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(691);
      generalPostNearEntityFilter();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(692);
      generalPostInEntityFilter();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(693);
      generalPostPlayerChoiceFilter();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(694);
      generalPostAtLeastAwayFilter();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(695);
      generalPostAtLeastAwayFromFilter();
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
  enterRule(_localctx, 104, IvionParser::RuleTileFilter);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(701);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IvionParser::Non

    || _la == IvionParser::Empty) {
      setState(698);
      tilePreFix();
      setState(703);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(704);
    match(IvionParser::Tile);
    setState(708);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(705);
        tilePostFix(); 
      }
      setState(710);
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

//----------------- TargetTileContext ------------------------------------------------------------------

IvionParser::TargetTileContext::TargetTileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
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

tree::TerminalNode* IvionParser::TargetTileContext::Target() {
  return getToken(IvionParser::Target, 0);
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
  enterRule(_localctx, 106, IvionParser::RuleTargetTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(712);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(711);
      match(IvionParser::Another);
    }
    setState(715);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::A || ((((_la - 187) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 187)) & ((1ULL << (IvionParser::Once - 187))
      | (1ULL << (IvionParser::Twice - 187))
      | (1ULL << (IvionParser::Integer - 187))
      | (1ULL << (IvionParser::One - 187))
      | (1ULL << (IvionParser::Two - 187))
      | (1ULL << (IvionParser::Three - 187)))) != 0)) {
      setState(714);
      literalValue();
    }
    setState(718);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Target) {
      setState(717);
      match(IvionParser::Target);
    }
    setState(720);
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
  enterRule(_localctx, 108, IvionParser::RulePreviousTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(726);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::That: {
        enterOuterAlt(_localctx, 1);
        setState(722);
        match(IvionParser::That);
        setState(723);
        match(IvionParser::Tile);
        break;
      }

      case IvionParser::The: {
        enterOuterAlt(_localctx, 2);
        setState(724);
        match(IvionParser::The);
        setState(725);
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

IvionParser::EntityContext* IvionParser::TheNearestTileContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
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
  enterRule(_localctx, 110, IvionParser::RuleTheNearestTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(728);
    match(IvionParser::The);
    setState(729);
    match(IvionParser::Nearest);
    setState(730);
    tileFilter();
    setState(731);
    match(IvionParser::Next);
    setState(732);
    match(IvionParser::To);
    setState(733);
    entity();
   
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
  enterRule(_localctx, 112, IvionParser::RulePlayersTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(735);
    match(IvionParser::The);
    setState(736);
    match(IvionParser::Tile);
    setState(737);
    player();
    setState(738);
    match(IvionParser::Is);
    setState(739);
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
  enterRule(_localctx, 114, IvionParser::RuleCardsTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(741);
    match(IvionParser::This);
    setState(742);
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
  enterRule(_localctx, 116, IvionParser::RuleSingleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(749);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(744);
      targetTile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(745);
      previousTile();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(746);
      theNearestTile();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(747);
      playersTile();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(748);
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
  enterRule(_localctx, 118, IvionParser::RuleMultiTile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(752);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(751);
      upToFlag();
    }
    setState(754);
    literalValue();
    setState(755);
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
  enterRule(_localctx, 120, IvionParser::RuleAllTiles);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(757);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Each

    || _la == IvionParser::All)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(758);
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
  enterRule(_localctx, 122, IvionParser::RuleTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(763);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(760);
      singleTile();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(761);
      allTiles();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(762);
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
  enterRule(_localctx, 124, IvionParser::RuleEntity);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(768);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(765);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(766);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(767);
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

IvionParser::CardContext* IvionParser::HypotheticalEntityContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::PlayerContext* IvionParser::HypotheticalEntityContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::TileContext* IvionParser::HypotheticalEntityContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
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
  enterRule(_localctx, 126, IvionParser::RuleHypotheticalEntity);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(773);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(770);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(771);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(772);
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
  enterRule(_localctx, 128, IvionParser::RuleDisarmPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(781);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(775);
      match(IvionParser::Disarm);
      setState(776);
      literalValue();
      setState(777);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(779);
      match(IvionParser::Disarm);
      setState(780);
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
  enterRule(_localctx, 130, IvionParser::RuleSilencePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(789);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(783);
      match(IvionParser::Silence);
      setState(784);
      literalValue();
      setState(785);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(787);
      match(IvionParser::Silence);
      setState(788);
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
  enterRule(_localctx, 132, IvionParser::RuleSlowPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(797);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(791);
      match(IvionParser::Slow);
      setState(792);
      literalValue();
      setState(793);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(795);
      match(IvionParser::Slow);
      setState(796);
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
  enterRule(_localctx, 134, IvionParser::RuleControlPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(838);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(799);
      match(IvionParser::Apply);
      setState(800);
      literalValue();
      setState(801);
      match(IvionParser::More);
      setState(802);
      match(IvionParser::Instances);
      setState(803);
      match(IvionParser::Of);
      setState(804);
      match(IvionParser::A);
      setState(805);
      match(IvionParser::Control);
      setState(806);
      match(IvionParser::Type);
      setState(807);
      match(IvionParser::Of);
      setState(808);
      match(IvionParser::Your);
      setState(809);
      match(IvionParser::Choice);
      setState(810);
      match(IvionParser::To);
      setState(811);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(813);
      match(IvionParser::Apply);
      setState(814);
      match(IvionParser::A);
      setState(815);
      match(IvionParser::Instance);
      setState(816);
      match(IvionParser::Of);
      setState(817);
      match(IvionParser::A);
      setState(818);
      match(IvionParser::Control);
      setState(819);
      match(IvionParser::Type);
      setState(820);
      match(IvionParser::Of);
      setState(821);
      match(IvionParser::Your);
      setState(822);
      match(IvionParser::Choice);
      setState(823);
      match(IvionParser::To);
      setState(824);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(825);
      match(IvionParser::Increase);
      setState(826);
      match(IvionParser::The);
      setState(827);
      match(IvionParser::Value);
      setState(828);
      match(IvionParser::Of);
      setState(829);
      match(IvionParser::A);
      setState(830);
      match(IvionParser::Control);
      setState(831);
      match(IvionParser::Type);
      setState(832);
      match(IvionParser::Already);
      setState(833);
      match(IvionParser::Affecting);
      setState(834);
      player();
      setState(835);
      match(IvionParser::By);
      setState(836);
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

IvionParser::EntityContext* IvionParser::AwayFlagContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
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
  enterRule(_localctx, 136, IvionParser::RuleAwayFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(840);
    match(IvionParser::Away);
    setState(841);
    match(IvionParser::From);
    setState(842);
    entity();
   
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

IvionParser::PlayerContext* IvionParser::TravelDistanceContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

IvionParser::UpToFlagContext* IvionParser::TravelDistanceContext::upToFlag() {
  return getRuleContext<IvionParser::UpToFlagContext>(0);
}

IvionParser::AnotherFlagContext* IvionParser::TravelDistanceContext::anotherFlag() {
  return getRuleContext<IvionParser::AnotherFlagContext>(0);
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
  enterRule(_localctx, 138, IvionParser::RuleTravelDistance);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(844);
    match(IvionParser::Travel);
    setState(846);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      setState(845);
      player();
      break;
    }

    }
    setState(849);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Up) {
      setState(848);
      upToFlag();
    }
    setState(852);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Another) {
      setState(851);
      anotherFlag();
    }
    setState(854);
    literalValue();
    setState(855);
    match(IvionParser::Tile);
    setState(857);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      setState(856);
      awayFlag();
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

IvionParser::EntityContext* IvionParser::TravelPlayerContext::entity() {
  return getRuleContext<IvionParser::EntityContext>(0);
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
  enterRule(_localctx, 140, IvionParser::RuleTravelPlayer);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(859);
    match(IvionParser::Travel);
    setState(861);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Them)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::The)
      | (1ULL << IvionParser::A)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::Each)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::Player)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::Up)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::All)
      | (1ULL << IvionParser::Their)
      | (1ULL << IvionParser::Its))) != 0) || _la == IvionParser::Controlled

    || _la == IvionParser::Uncontrolled || ((((_la - 148) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 148)) & ((1ULL << (IvionParser::Any - 148))
      | (1ULL << (IvionParser::Ally - 148))
      | (1ULL << (IvionParser::Once - 148))
      | (1ULL << (IvionParser::Twice - 148))
      | (1ULL << (IvionParser::Integer - 148))
      | (1ULL << (IvionParser::One - 148))
      | (1ULL << (IvionParser::Two - 148))
      | (1ULL << (IvionParser::Three - 148))
      | (1ULL << (IvionParser::It - 148)))) != 0)) {
      setState(860);
      player();
    }
    setState(863);
    match(IvionParser::To);
    setState(864);
    entity();
   
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
  enterRule(_localctx, 142, IvionParser::RuleDestroyCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(866);
    match(IvionParser::Destroy);
    setState(867);
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
  enterRule(_localctx, 144, IvionParser::RuleDealDamage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(926);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(869);
      match(IvionParser::Deal);
      setState(870);
      value();
      setState(871);
      match(IvionParser::Damage);
      setState(872);
      match(IvionParser::To);
      setState(873);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(875);
      match(IvionParser::Deal);
      setState(876);
      match(IvionParser::Damage);
      setState(877);
      match(IvionParser::To);
      setState(878);
      player();
      setState(879);
      match(IvionParser::Equal);
      setState(880);
      match(IvionParser::To);
      setState(881);
      value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(883);
      match(IvionParser::Deal);
      setState(884);
      value();
      setState(885);
      match(IvionParser::Damage);
      setState(886);
      match(IvionParser::To);
      setState(887);
      player();
      setState(888);
      match(IvionParser::Plus);
      setState(889);
      match(IvionParser::Damage);
      setState(890);
      match(IvionParser::Equal);
      setState(891);
      match(IvionParser::To);
      setState(892);
      value();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(894);
      match(IvionParser::Deal);
      setState(895);
      value();
      setState(896);
      match(IvionParser::Damage);
      setState(897);
      match(IvionParser::To);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(899);
      match(IvionParser::Deal);
      setState(900);
      match(IvionParser::Damage);
      setState(901);
      match(IvionParser::To);
      setState(902);
      player();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(903);
      match(IvionParser::Deal);
      setState(904);
      value();
      setState(905);
      match(IvionParser::More);
      setState(906);
      match(IvionParser::Damage);
      setState(907);
      match(IvionParser::To);
      setState(908);
      player();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(910);
      match(IvionParser::Deal);
      setState(911);
      value();
      setState(912);
      match(IvionParser::Damage);
      setState(913);
      match(IvionParser::To);
      setState(914);
      player();
      setState(915);
      match(IvionParser::Plus);
      setState(916);
      value();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(918);
      match(IvionParser::Deal);
      setState(919);
      match(IvionParser::Damage);
      setState(920);
      match(IvionParser::To);
      setState(921);
      player();
      setState(922);
      match(IvionParser::Equal);
      setState(923);
      match(IvionParser::To);
      setState(924);
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
  enterRule(_localctx, 146, IvionParser::RuleCounterCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(928);
    match(IvionParser::Counter);
    setState(929);
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
  enterRule(_localctx, 148, IvionParser::RuleAttachCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(944);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(931);
      match(IvionParser::Attach);
      setState(932);
      match(IvionParser::To);
      setState(933);
      entity();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(934);
      match(IvionParser::Attach);
      setState(935);
      match(IvionParser::To);
      setState(936);
      entity();
      setState(937);
      match(IvionParser::Until);
      setState(938);
      turnTrigger();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(940);
      match(IvionParser::Attach);
      setState(941);
      match(IvionParser::CARD_NAME);
      setState(942);
      match(IvionParser::To);
      setState(943);
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
  enterRule(_localctx, 150, IvionParser::RuleGainPower);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(947);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Them)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::The)
      | (1ULL << IvionParser::A)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::Each)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::Player)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::Up)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::All)
      | (1ULL << IvionParser::Their)
      | (1ULL << IvionParser::Its))) != 0) || _la == IvionParser::Controlled

    || _la == IvionParser::Uncontrolled || ((((_la - 148) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 148)) & ((1ULL << (IvionParser::Any - 148))
      | (1ULL << (IvionParser::Ally - 148))
      | (1ULL << (IvionParser::Once - 148))
      | (1ULL << (IvionParser::Twice - 148))
      | (1ULL << (IvionParser::Integer - 148))
      | (1ULL << (IvionParser::One - 148))
      | (1ULL << (IvionParser::Two - 148))
      | (1ULL << (IvionParser::Three - 148))
      | (1ULL << (IvionParser::It - 148)))) != 0)) {
      setState(946);
      player();
    }
    setState(967);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx)) {
    case 1: {
      setState(949);
      match(IvionParser::Gain);
      setState(950);
      literalValue();
      setState(951);
      match(IvionParser::POWER);
      break;
    }

    case 2: {
      setState(953);
      match(IvionParser::Gain);
      setState(954);
      literalValue();
      setState(955);
      match(IvionParser::More);
      setState(956);
      match(IvionParser::POWER);
      break;
    }

    case 3: {
      setState(958);
      match(IvionParser::Gain);
      setState(959);
      literalValue();
      setState(960);
      match(IvionParser::Additional);
      setState(961);
      match(IvionParser::POWER);
      break;
    }

    case 4: {
      setState(963);
      match(IvionParser::Gain);
      setState(964);
      literalValue();
      setState(965);
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
  enterRule(_localctx, 152, IvionParser::RuleGainAction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(970);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Enemy)
      | (1ULL << IvionParser::Them)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Yourself)
      | (1ULL << IvionParser::The)
      | (1ULL << IvionParser::A)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::Each)
      | (1ULL << IvionParser::Another)
      | (1ULL << IvionParser::Player)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::Up)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::All)
      | (1ULL << IvionParser::Their)
      | (1ULL << IvionParser::Its))) != 0) || _la == IvionParser::Controlled

    || _la == IvionParser::Uncontrolled || ((((_la - 148) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 148)) & ((1ULL << (IvionParser::Any - 148))
      | (1ULL << (IvionParser::Ally - 148))
      | (1ULL << (IvionParser::Once - 148))
      | (1ULL << (IvionParser::Twice - 148))
      | (1ULL << (IvionParser::Integer - 148))
      | (1ULL << (IvionParser::One - 148))
      | (1ULL << (IvionParser::Two - 148))
      | (1ULL << (IvionParser::Three - 148))
      | (1ULL << (IvionParser::It - 148)))) != 0)) {
      setState(969);
      player();
    }
    setState(990);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      setState(972);
      match(IvionParser::Gain);
      setState(973);
      literalValue();
      setState(974);
      match(IvionParser::ACTION);
      break;
    }

    case 2: {
      setState(976);
      match(IvionParser::Gain);
      setState(977);
      literalValue();
      setState(978);
      match(IvionParser::More);
      setState(979);
      match(IvionParser::ACTION);
      break;
    }

    case 3: {
      setState(981);
      match(IvionParser::Gain);
      setState(982);
      literalValue();
      setState(983);
      match(IvionParser::Additional);
      setState(984);
      match(IvionParser::ACTION);
      break;
    }

    case 4: {
      setState(986);
      match(IvionParser::Gain);
      setState(987);
      literalValue();
      setState(988);
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
  enterRule(_localctx, 154, IvionParser::RuleGainInitiative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1012);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(992);
      match(IvionParser::Gain);
      setState(994); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(993);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(996); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 57, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(998);
      player();
      setState(999);
      match(IvionParser::Gain);
      setState(1001); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1000);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1003); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1005);
      match(IvionParser::Gain);
      setState(1006);
      match(IvionParser::Another);
      setState(1008); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1007);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1010); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
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
  enterRule(_localctx, 156, IvionParser::RuleGainMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1022);
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
        setState(1014);
        player();
        setState(1015);
        match(IvionParser::Gains);
        setState(1016);
        match(IvionParser::Mitigate);
        setState(1017);
        literalValue();
        break;
      }

      case IvionParser::Gain: {
        enterOuterAlt(_localctx, 2);
        setState(1019);
        match(IvionParser::Gain);
        setState(1020);
        match(IvionParser::Mitigate);
        setState(1021);
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
  enterRule(_localctx, 158, IvionParser::RuleLoseMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1024);
    match(IvionParser::Lose);
    setState(1025);
    match(IvionParser::Your);
    setState(1026);
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
  enterRule(_localctx, 160, IvionParser::RuleUseSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1028);
    match(IvionParser::Use);
    setState(1029);
    match(IvionParser::Your);
    setState(1030);
    match(IvionParser::Second);
    setState(1031);
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
  enterRule(_localctx, 162, IvionParser::RuleReturnCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1033);
    match(IvionParser::Return);
    setState(1034);
    card();
    setState(1035);
    match(IvionParser::To);
    setState(1036);
    playerRef();
    setState(1037);
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

IvionParser::CardContext* IvionParser::PutBottomCardOfDeckIntoHandContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 164, IvionParser::RulePutBottomCardOfDeckIntoHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1039);
    match(IvionParser::Put);
    setState(1040);
    card();
    setState(1041);
    match(IvionParser::Into);
    setState(1042);
    match(IvionParser::Your);
    setState(1043);
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
  enterRule(_localctx, 166, IvionParser::RuleTriggerDurationEffects);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1045);
    match(IvionParser::Trigger);
    setState(1046);
    match(IvionParser::Your);
    setState(1047);
    match(IvionParser::Duration);
    setState(1048);
    match(IvionParser::Effects);
    setState(1049);
    match(IvionParser::As);
    setState(1050);
    match(IvionParser::Though);
    setState(1051);
    match(IvionParser::Your);
    setState(1052);
    match(IvionParser::Turn);
    setState(1053);
    match(IvionParser::Had);
    setState(1054);
    match(IvionParser::Just);
    setState(1055);
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
  enterRule(_localctx, 168, IvionParser::RuleForLessResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1057);
    match(IvionParser::For);
    setState(1058);
    literalValue();
    setState(1059);
    match(IvionParser::Less);
    setState(1060);
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
  enterRule(_localctx, 170, IvionParser::RuleFreeFlag);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1062);
    match(IvionParser::For);
    setState(1063);
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
  enterRule(_localctx, 172, IvionParser::RulePlayCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1075);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1065);
      match(IvionParser::Play);
      setState(1066);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1067);
      match(IvionParser::Play);
      setState(1068);
      card();
      setState(1069);
      freeFlag();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1071);
      match(IvionParser::Play);
      setState(1072);
      card();
      setState(1073);
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
  enterRule(_localctx, 174, IvionParser::RulePlayUltimate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1135);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1077);
      match(IvionParser::Play);
      setState(1078);
      match(IvionParser::Ultimate);
      setState(1082);
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
        setState(1079);
        cardPostfix();
        setState(1084);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1085);
      match(IvionParser::P);
      setState(1086);
      match(IvionParser::This);
      setState(1087);
      match(IvionParser::Doesnt);
      setState(1088);
      match(IvionParser::Count);
      setState(1089);
      match(IvionParser::Towards);
      setState(1090);
      match(IvionParser::Your);
      setState(1091);
      match(IvionParser::Ultimate);
      setState(1092);
      match(IvionParser::Limit);
      setState(1093);
      match(IvionParser::Per);
      setState(1094);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1095);
      match(IvionParser::Play);
      setState(1096);
      match(IvionParser::Ultimate);
      setState(1100);
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
        setState(1097);
        cardPostfix();
        setState(1102);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1103);
      freeFlag();
      setState(1104);
      match(IvionParser::P);
      setState(1105);
      match(IvionParser::This);
      setState(1106);
      match(IvionParser::Doesnt);
      setState(1107);
      match(IvionParser::Count);
      setState(1108);
      match(IvionParser::Towards);
      setState(1109);
      match(IvionParser::Your);
      setState(1110);
      match(IvionParser::Ultimate);
      setState(1111);
      match(IvionParser::Limit);
      setState(1112);
      match(IvionParser::Per);
      setState(1113);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1115);
      match(IvionParser::Play);
      setState(1116);
      match(IvionParser::Ultimate);
      setState(1120);
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
        setState(1117);
        cardPostfix();
        setState(1122);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(1123);
      forLessResources();
      setState(1124);
      match(IvionParser::P);
      setState(1125);
      match(IvionParser::This);
      setState(1126);
      match(IvionParser::Doesnt);
      setState(1127);
      match(IvionParser::Count);
      setState(1128);
      match(IvionParser::Towards);
      setState(1129);
      match(IvionParser::Your);
      setState(1130);
      match(IvionParser::Ultimate);
      setState(1131);
      match(IvionParser::Limit);
      setState(1132);
      match(IvionParser::Per);
      setState(1133);
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
  enterRule(_localctx, 176, IvionParser::RuleDiscardCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1152);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1137);
      match(IvionParser::Discard);
      setState(1138);
      literalValue();
      setState(1139);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1141);
      match(IvionParser::Discard);
      setState(1142);
      card();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1143);
      player();
      setState(1144);
      match(IvionParser::Discard);
      setState(1145);
      literalValue();
      setState(1146);
      card();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1148);
      player();
      setState(1149);
      match(IvionParser::Discard);
      setState(1150);
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
  enterRule(_localctx, 178, IvionParser::RuleGainsHeroic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1154);
    match(IvionParser::That);
    setState(1155);
    match(IvionParser::Card);
    setState(1156);
    match(IvionParser::Gains);
    setState(1157);
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
  enterRule(_localctx, 180, IvionParser::RuleHealPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1159);
      match(IvionParser::Heal);
      setState(1160);
      player();
      setState(1161);
      literalValue();
      setState(1162);
      match(IvionParser::HP);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1164);
      match(IvionParser::Heal);
      setState(1165);
      player();
      setState(1166);
      match(IvionParser::HP);
      setState(1167);
      match(IvionParser::Equal);
      setState(1168);
      match(IvionParser::To);
      setState(1169);
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
  enterRule(_localctx, 182, IvionParser::RuleStunPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1173);
    match(IvionParser::Stun);
    setState(1174);
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
  enterRule(_localctx, 184, IvionParser::RuleRevealCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1238);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1176);
      player();
      setState(1177);
      match(IvionParser::Reveal);
      setState(1178);
      literalValue();
      setState(1179);
      match(IvionParser::Card);
      setState(1180);
      match(IvionParser::From);
      setState(1181);
      match(IvionParser::Their);
      setState(1182);
      match(IvionParser::Hand);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1184);
      player();
      setState(1185);
      match(IvionParser::Reveal);
      setState(1186);
      literalValue();
      setState(1187);
      match(IvionParser::Card);
      setState(1188);
      match(IvionParser::From);
      setState(1189);
      match(IvionParser::Their);
      setState(1190);
      match(IvionParser::Hand);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1192);
      player();
      setState(1193);
      match(IvionParser::Reveal);
      setState(1194);
      match(IvionParser::A);
      setState(1195);
      match(IvionParser::Card);
      setState(1196);
      match(IvionParser::From);
      setState(1197);
      match(IvionParser::Their);
      setState(1198);
      match(IvionParser::Hand);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1200);
      player();
      setState(1201);
      match(IvionParser::Reveal);
      setState(1202);
      match(IvionParser::A);
      setState(1203);
      match(IvionParser::Card);
      setState(1204);
      match(IvionParser::From);
      setState(1205);
      match(IvionParser::Their);
      setState(1206);
      match(IvionParser::Hand);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1208);
      player();
      setState(1209);
      match(IvionParser::Reveal);
      setState(1210);
      literalValue();
      setState(1211);
      match(IvionParser::Card);
      setState(1212);
      match(IvionParser::From);
      setState(1213);
      match(IvionParser::Their);
      setState(1214);
      match(IvionParser::Hand);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1216);
      player();
      setState(1217);
      match(IvionParser::Reveal);
      setState(1218);
      match(IvionParser::A);
      setState(1219);
      match(IvionParser::Card);
      setState(1220);
      match(IvionParser::From);
      setState(1221);
      match(IvionParser::Their);
      setState(1222);
      match(IvionParser::Hand);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1224);
      match(IvionParser::Reveal);
      setState(1225);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1226);
      match(IvionParser::Reveal);
      setState(1227);
      match(IvionParser::A);
      setState(1228);
      match(IvionParser::Card);
      setState(1229);
      match(IvionParser::From);
      setState(1230);
      match(IvionParser::Your);
      setState(1231);
      match(IvionParser::Hand);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1232);
      match(IvionParser::Reveal);
      setState(1233);
      match(IvionParser::A);
      setState(1234);
      match(IvionParser::Card);
      setState(1235);
      match(IvionParser::From);
      setState(1236);
      match(IvionParser::Their);
      setState(1237);
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
  enterRule(_localctx, 186, IvionParser::RuleDrawCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1266);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1240);
      match(IvionParser::Draw);
      setState(1241);
      match(IvionParser::A);
      setState(1242);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1243);
      match(IvionParser::Draw);
      setState(1244);
      literalValue();
      setState(1245);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1247);
      match(IvionParser::Draw);
      setState(1248);
      match(IvionParser::A);
      setState(1249);
      match(IvionParser::Additional);
      setState(1250);
      match(IvionParser::Card);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1251);
      player();
      setState(1252);
      match(IvionParser::Draw);
      setState(1253);
      literalValue();
      setState(1254);
      match(IvionParser::Card);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1256);
      player();
      setState(1257);
      match(IvionParser::Draw);
      setState(1258);
      literalValue();
      setState(1259);
      match(IvionParser::Card);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1261);
      player();
      setState(1262);
      match(IvionParser::Draw);
      setState(1263);
      match(IvionParser::A);
      setState(1264);
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
  enterRule(_localctx, 188, IvionParser::RuleRemoveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1290);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1268);
      match(IvionParser::Remove);
      setState(1269);
      match(IvionParser::Up);
      setState(1270);
      match(IvionParser::To);
      setState(1271);
      literalValue();
      setState(1272);
      match(IvionParser::Instances);
      setState(1273);
      match(IvionParser::Of);
      setState(1274);
      match(IvionParser::Control);
      setState(1275);
      match(IvionParser::From);
      setState(1276);
      player();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1278);
      match(IvionParser::Remove);
      setState(1279);
      match(IvionParser::All);
      setState(1280);
      match(IvionParser::Control);
      setState(1281);
      match(IvionParser::Affecting);
      setState(1282);
      player();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1283);
      match(IvionParser::Remove);
      setState(1284);
      match(IvionParser::A);
      setState(1285);
      match(IvionParser::Instance);
      setState(1286);
      match(IvionParser::Of);
      setState(1287);
      match(IvionParser::Control);
      setState(1288);
      match(IvionParser::From);
      setState(1289);
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
  enterRule(_localctx, 190, IvionParser::RuleHardcastEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1292);
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
  enterRule(_localctx, 192, IvionParser::RuleSeekEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1294);
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
  enterRule(_localctx, 194, IvionParser::RuleMakeTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1296);
    match(IvionParser::Make);
    setState(1297);
    tile();
    setState(1298);
    match(IvionParser::Difficult);
    setState(1299);
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
  enterRule(_localctx, 196, IvionParser::RuleRemoveTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1301);
    match(IvionParser::Remove);
    setState(1302);
    match(IvionParser::Target);
    setState(1303);
    match(IvionParser::Terrain);
    setState(1304);
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
  enterRule(_localctx, 198, IvionParser::RuleSpendResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1306);
    match(IvionParser::Spend);
    setState(1307);
    literalValue();
    setState(1308);
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
  enterRule(_localctx, 200, IvionParser::RuleScryEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1310);
    match(IvionParser::Look);
    setState(1311);
    match(IvionParser::At);
    setState(1312);
    match(IvionParser::The);
    setState(1313);
    match(IvionParser::Top);
    setState(1314);
    literalValue();
    setState(1315);
    match(IvionParser::Card);
    setState(1316);
    match(IvionParser::Of);
    setState(1317);
    match(IvionParser::Your);
    setState(1318);
    match(IvionParser::Deck);
    setState(1319);
    match(IvionParser::P);
    setState(1320);
    match(IvionParser::Put);
    setState(1321);
    match(IvionParser::Any);
    setState(1322);
    match(IvionParser::Number);
    setState(1323);
    match(IvionParser::On);
    setState(1324);
    match(IvionParser::The);
    setState(1325);
    match(IvionParser::Bottom);
    setState(1326);
    match(IvionParser::And);
    setState(1327);
    match(IvionParser::The);
    setState(1328);
    match(IvionParser::Rest);
    setState(1329);
    match(IvionParser::On);
    setState(1330);
    match(IvionParser::Top);
    setState(1331);
    match(IvionParser::In);
    setState(1332);
    match(IvionParser::Any);
    setState(1333);
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
  enterRule(_localctx, 202, IvionParser::RuleOverrideFrenzy);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1335);
    match(IvionParser::That);
    setState(1336);
    match(IvionParser::Card);
    setState(1337);
    match(IvionParser::Have);
    setState(1338);
    match(IvionParser::Frenzy);
    setState(1339);
    match(IvionParser::Even);
    setState(1340);
    match(IvionParser::If);
    setState(1341);
    match(IvionParser::No);
    setState(1342);
    match(IvionParser::Player);
    setState(1343);
    match(IvionParser::Have);
    setState(1344);
    match(IvionParser::Used);
    setState(1345);
    match(IvionParser::Their);
    setState(1346);
    match(IvionParser::Second);
    setState(1347);
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
  enterRule(_localctx, 204, IvionParser::RuleIncreaseCardDuration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1349);
    match(IvionParser::Increase);
    setState(1350);
    match(IvionParser::The);
    setState(1351);
    match(IvionParser::Duration);
    setState(1352);
    match(IvionParser::Of);
    setState(1353);
    match(IvionParser::A);
    setState(1354);
    match(IvionParser::Card);
    setState(1355);
    match(IvionParser::You);
    setState(1356);
    match(IvionParser::Control);
    setState(1357);
    match(IvionParser::By);
    setState(1358);
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
  enterRule(_localctx, 206, IvionParser::RuleResetUseOfCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1360);
    match(IvionParser::Reset);
    setState(1361);
    match(IvionParser::The);
    setState(1362);
    match(IvionParser::Use);
    setState(1363);
    match(IvionParser::Of);
    setState(1364);
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
  enterRule(_localctx, 208, IvionParser::RuleHeroic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1366);
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

IvionParser::PlayerContext* IvionParser::OnlyPlayCertainCardsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 210, IvionParser::RuleOnlyPlayCertainCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1381);
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
        setState(1368);
        player();
        setState(1369);
        match(IvionParser::May);
        setState(1370);
        match(IvionParser::Only);
        setState(1371);
        match(IvionParser::Play);
        setState(1372);
        match(IvionParser::Card);
        setState(1373);
        match(IvionParser::Named);
        setState(1374);
        match(IvionParser::CARD_NAME);
        break;
      }

      case IvionParser::Only: {
        enterOuterAlt(_localctx, 2);
        setState(1376);
        match(IvionParser::Only);
        setState(1377);
        match(IvionParser::Play);
        setState(1378);
        match(IvionParser::CARD_NAME);
        setState(1379);
        match(IvionParser::If);
        setState(1380);
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

IvionParser::CardContext* IvionParser::CostReductionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::PlayerContext* IvionParser::CostReductionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 212, IvionParser::RuleCostReduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1405);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 73, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1383);
      card();
      setState(1384);
      player();
      setState(1385);
      match(IvionParser::Play);
      setState(1386);
      match(IvionParser::Cost);
      setState(1387);
      literalValue();
      setState(1388);
      match(IvionParser::Less);
      setState(1389);
      match(IvionParser::Resource);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1391);
      match(IvionParser::The);
      setState(1392);
      match(IvionParser::Second);
      setState(1393);
      match(IvionParser::Attack);
      setState(1394);
      match(IvionParser::Card);
      setState(1395);
      player();
      setState(1396);
      match(IvionParser::Play);
      setState(1397);
      match(IvionParser::During);
      setState(1398);
      match(IvionParser::Your);
      setState(1399);
      match(IvionParser::Turn);
      setState(1400);
      match(IvionParser::Cost);
      setState(1401);
      literalValue();
      setState(1402);
      match(IvionParser::Less);
      setState(1403);
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
  enterRule(_localctx, 214, IvionParser::RuleRangeSet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1407);
    match(IvionParser::The);
    setState(1408);
    match(IvionParser::Range);
    setState(1409);
    match(IvionParser::Of);
    setState(1410);
    match(IvionParser::Your);
    setState(1411);
    match(IvionParser::Attack);
    setState(1412);
    match(IvionParser::Card);
    setState(1413);
    match(IvionParser::Is);
    setState(1414);
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

IvionParser::PlayerContext* IvionParser::CantPlayCardsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 216, IvionParser::RuleCantPlayCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1416);
    player();
    setState(1417);
    match(IvionParser::Cant);
    setState(1418);
    match(IvionParser::Play);
    setState(1419);
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

IvionParser::PlayerContext* IvionParser::PlayerCantBeTargetedContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 218, IvionParser::RulePlayerCantBeTargeted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1435);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 74, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1421);
      player();
      setState(1422);
      match(IvionParser::Cant);
      setState(1423);
      match(IvionParser::Be);
      setState(1424);
      match(IvionParser::Targeted);
      setState(1425);
      match(IvionParser::By);
      setState(1426);
      match(IvionParser::Enemies);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1428);
      player();
      setState(1429);
      match(IvionParser::Cant);
      setState(1430);
      match(IvionParser::Be);
      setState(1431);
      match(IvionParser::Targeted);
      setState(1432);
      match(IvionParser::By);
      setState(1433);
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
  enterRule(_localctx, 220, IvionParser::RuleIncreasedHandSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1437);
    match(IvionParser::Your);
    setState(1438);
    match(IvionParser::Maximum);
    setState(1439);
    match(IvionParser::Hand);
    setState(1440);
    match(IvionParser::Size);
    setState(1441);
    match(IvionParser::Is);
    setState(1442);
    match(IvionParser::Increased);
    setState(1443);
    match(IvionParser::By);
    setState(1444);
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
  enterRule(_localctx, 222, IvionParser::RuleIncreasedMaxHP);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1446);
    match(IvionParser::Your);
    setState(1447);
    match(IvionParser::Maximum);
    setState(1448);
    match(IvionParser::HP);
    setState(1449);
    match(IvionParser::Is);
    setState(1450);
    match(IvionParser::Increased);
    setState(1451);
    match(IvionParser::By);
    setState(1452);
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
  enterRule(_localctx, 224, IvionParser::RuleReplacesSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1454);
    match(IvionParser::CARD_NAME);
    setState(1455);
    match(IvionParser::Replaces);
    setState(1456);
    match(IvionParser::Your);
    setState(1457);
    match(IvionParser::Second);
    setState(1458);
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

IvionParser::PlayerContext* IvionParser::NoInitiativeContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 226, IvionParser::RuleNoInitiative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1460);
    player();
    setState(1461);
    match(IvionParser::Dont);
    setState(1462);
    match(IvionParser::Gain);
    setState(1463);
    match(IvionParser::INITIATIVE);
    setState(1464);
    match(IvionParser::At);
    setState(1465);
    match(IvionParser::The);
    setState(1466);
    match(IvionParser::Start);
    setState(1467);
    match(IvionParser::Of);
    setState(1468);
    match(IvionParser::Your);
    setState(1469);
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

IvionParser::PlayerContext* IvionParser::DrawRangeContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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

IvionParser::CardContext* IvionParser::DrawRangeContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::TileContext* IvionParser::DrawRangeContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
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
  enterRule(_localctx, 228, IvionParser::RuleDrawRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1509);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1471);
      match(IvionParser::All);
      setState(1472);
      match(IvionParser::Of);
      setState(1473);
      player();
      setState(1474);
      match(IvionParser::Card);
      setState(1475);
      match(IvionParser::C);
      setState(1476);
      match(IvionParser::Except);
      setState(1477);
      match(IvionParser::Travel);
      setState(1478);
      match(IvionParser::Card);
      setState(1479);
      match(IvionParser::That);
      setState(1480);
      match(IvionParser::Target);
      setState(1481);
      match(IvionParser::A);
      setState(1482);
      match(IvionParser::Tile);
      setState(1483);
      match(IvionParser::C);
      setState(1484);
      match(IvionParser::Also);
      setState(1485);
      match(IvionParser::Draw);
      setState(1486);
      match(IvionParser::Range);
      setState(1487);
      match(IvionParser::From);
      setState(1488);
      card();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1490);
      match(IvionParser::All);
      setState(1491);
      match(IvionParser::Of);
      setState(1492);
      player();
      setState(1493);
      match(IvionParser::Card);
      setState(1494);
      match(IvionParser::C);
      setState(1495);
      match(IvionParser::Except);
      setState(1496);
      match(IvionParser::Travel);
      setState(1497);
      match(IvionParser::Card);
      setState(1498);
      match(IvionParser::That);
      setState(1499);
      match(IvionParser::Target);
      setState(1500);
      match(IvionParser::A);
      setState(1501);
      match(IvionParser::Tile);
      setState(1502);
      match(IvionParser::C);
      setState(1503);
      match(IvionParser::Also);
      setState(1504);
      match(IvionParser::Draw);
      setState(1505);
      match(IvionParser::Range);
      setState(1506);
      match(IvionParser::From);
      setState(1507);
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

IvionParser::PlayerContext* IvionParser::GainRangeContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 230, IvionParser::RuleGainRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1511);
    match(IvionParser::All);
    setState(1512);
    match(IvionParser::Of);
    setState(1513);
    player();
    setState(1514);
    match(IvionParser::Card);
    setState(1515);
    match(IvionParser::C);
    setState(1516);
    match(IvionParser::Except);
    setState(1517);
    match(IvionParser::Travel);
    setState(1518);
    match(IvionParser::Card);
    setState(1519);
    match(IvionParser::That);
    setState(1520);
    match(IvionParser::Target);
    setState(1521);
    match(IvionParser::A);
    setState(1522);
    match(IvionParser::Tile);
    setState(1523);
    match(IvionParser::C);
    setState(1524);
    match(IvionParser::Gain);
    setState(1525);
    literalValue();
    setState(1526);
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

IvionParser::PlayerContext* IvionParser::LimitTargetsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 232, IvionParser::RuleLimitTargets);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1528);
    match(IvionParser::Only);
    setState(1529);
    match(IvionParser::Target);
    setState(1530);
    match(IvionParser::Other);
    setState(1531);
    player();
    setState(1532);
    match(IvionParser::If);
    setState(1533);
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
  enterRule(_localctx, 234, IvionParser::RulePassiveEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1547);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1535);
      playerCantBeTargeted();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1536);
      cantPlayCards();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1537);
      rangeSet();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1538);
      costReduction();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1539);
      onlyPlayCertainCards();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1540);
      increasedHandSize();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1541);
      increasedMaxHP();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1542);
      replacesSecondWind();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1543);
      noInitiative();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1544);
      drawRange();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1545);
      gainRange();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1546);
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
  enterRule(_localctx, 236, IvionParser::RuleDurationEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1549);
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

IvionParser::PlayerContext* IvionParser::StartOfPlayerTurnContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 238, IvionParser::RuleStartOfPlayerTurn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1563);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1551);
      match(IvionParser::The);
      setState(1552);
      match(IvionParser::Start);
      setState(1553);
      match(IvionParser::Of);
      setState(1554);
      player();
      setState(1555);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1557);
      match(IvionParser::The);
      setState(1558);
      match(IvionParser::Start);
      setState(1559);
      match(IvionParser::Of);
      setState(1560);
      player();
      setState(1561);
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

IvionParser::PlayerContext* IvionParser::EndOfPlayerTurnTriggerContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 240, IvionParser::RuleEndOfPlayerTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1565);
    match(IvionParser::The);
    setState(1566);
    match(IvionParser::End);
    setState(1567);
    match(IvionParser::Of);
    setState(1568);
    player();
    setState(1569);
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

IvionParser::PlayerContext* IvionParser::StartOfPlayerNextTurnContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 242, IvionParser::RuleStartOfPlayerNextTurn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1571);
    match(IvionParser::The);
    setState(1572);
    match(IvionParser::Start);
    setState(1573);
    match(IvionParser::Of);
    setState(1574);
    player();
    setState(1575);
    match(IvionParser::Next);
    setState(1576);
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
  enterRule(_localctx, 244, IvionParser::RuleEndOfTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1590);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1578);
      match(IvionParser::The);
      setState(1579);
      match(IvionParser::End);
      setState(1580);
      match(IvionParser::Of);
      setState(1581);
      match(IvionParser::The);
      setState(1582);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1583);
      match(IvionParser::The);
      setState(1584);
      match(IvionParser::End);
      setState(1585);
      match(IvionParser::Of);
      setState(1586);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1587);
      match(IvionParser::End);
      setState(1588);
      match(IvionParser::Of);
      setState(1589);
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
  enterRule(_localctx, 246, IvionParser::RuleTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1596);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 79, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1592);
      startOfPlayerTurn();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1593);
      endOfPlayerTurnTrigger();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1594);
      startOfPlayerNextTurn();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1595);
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
  enterRule(_localctx, 248, IvionParser::RuleGameStartTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1598);
    match(IvionParser::At);
    setState(1599);
    match(IvionParser::The);
    setState(1600);
    match(IvionParser::Start);
    setState(1601);
    match(IvionParser::Of);
    setState(1602);
    match(IvionParser::The);
    setState(1603);
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
  enterRule(_localctx, 250, IvionParser::RuleEffectPostfix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1627);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 80, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1605);
      match(IvionParser::For);
      setState(1606);
      match(IvionParser::The);
      setState(1607);
      match(IvionParser::First);
      setState(1608);
      match(IvionParser::Time);
      setState(1609);
      match(IvionParser::During);
      setState(1610);
      playerRef();
      setState(1611);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1613);
      match(IvionParser::For);
      setState(1614);
      match(IvionParser::The);
      setState(1615);
      match(IvionParser::First);
      setState(1616);
      match(IvionParser::Time);
      setState(1617);
      match(IvionParser::During);
      setState(1618);
      match(IvionParser::Each);
      setState(1619);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1620);
      match(IvionParser::During);
      setState(1621);
      match(IvionParser::Each);
      setState(1622);
      match(IvionParser::Turn);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1623);
      match(IvionParser::During);
      setState(1624);
      playerRef();
      setState(1625);
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
  enterRule(_localctx, 252, IvionParser::RuleIfPlayerMakesChoice);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1635);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 81, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1629);
      playerRef();
      setState(1630);
      match(IvionParser::Do);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1632);
      playerRef();
      setState(1633);
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
  enterRule(_localctx, 254, IvionParser::RuleIfPreviousActionInvalid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1637);
    playerRef();
    setState(1638);
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

IvionParser::PlayerContext* IvionParser::IfResolvedCardContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}

IvionParser::CardContext* IvionParser::IfResolvedCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 256, IvionParser::RuleIfResolvedCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1640);
    player();
    setState(1642);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Have) {
      setState(1641);
      match(IvionParser::Have);
    }
    setState(1644);
    match(IvionParser::Resolve);
    setState(1645);
    card();
   
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

IvionParser::PlayerContext* IvionParser::IfPlayedCardContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
}

tree::TerminalNode* IvionParser::IfPlayedCardContext::Play() {
  return getToken(IvionParser::Play, 0);
}

IvionParser::CardContext* IvionParser::IfPlayedCardContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 258, IvionParser::RuleIfPlayedCard);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1647);
    player();
    setState(1649);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::Have) {
      setState(1648);
      match(IvionParser::Have);
    }
    setState(1651);
    match(IvionParser::Play);
    setState(1652);
    card();
   
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

IvionParser::PlayerContext* IvionParser::IfUsedSecondWindContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 260, IvionParser::RuleIfUsedSecondWind);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1670);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 86, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1654);
      player();
      setState(1656);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Have) {
        setState(1655);
        match(IvionParser::Have);
      }
      setState(1659);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::Already) {
        setState(1658);
        match(IvionParser::Already);
      }
      setState(1661);
      match(IvionParser::Used);
      setState(1662);
      playerRef();
      setState(1663);
      match(IvionParser::Second);
      setState(1664);
      match(IvionParser::Wind);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1666);
      player();
      setState(1667);
      match(IvionParser::Second);
      setState(1668);
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

IvionParser::TileContext* IvionParser::IfNearContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
}

IvionParser::CardContext* IvionParser::IfNearContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::PlayerContext* IvionParser::IfNearContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 262, IvionParser::RuleIfNear);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1692);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 87, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1672);
      hypotheticalEntity();
      setState(1673);
      match(IvionParser::Is);
      setState(1674);
      match(IvionParser::Near);
      setState(1675);
      match(IvionParser::Terrain);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1677);
      hypotheticalEntity();
      setState(1678);
      match(IvionParser::Is);
      setState(1679);
      match(IvionParser::Near);
      setState(1680);
      tile();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1682);
      hypotheticalEntity();
      setState(1683);
      match(IvionParser::Is);
      setState(1684);
      match(IvionParser::Near);
      setState(1685);
      card();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1687);
      hypotheticalEntity();
      setState(1688);
      match(IvionParser::Is);
      setState(1689);
      match(IvionParser::Near);
      setState(1690);
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

//----------------- IfControlledContext ------------------------------------------------------------------

IvionParser::IfControlledContext::IfControlledContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::PlayerContext* IvionParser::IfControlledContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 264, IvionParser::RuleIfControlled);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1694);
    player();
    setState(1695);
    match(IvionParser::Is);
    setState(1696);
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
  enterRule(_localctx, 266, IvionParser::RuleIfTileHadTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1698);
    previousTile();
    setState(1699);
    match(IvionParser::Already);
    setState(1700);
    match(IvionParser::Had);
    setState(1701);
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

IvionParser::PlayerContext* IvionParser::IfCardRevealedContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 268, IvionParser::RuleIfCardRevealed);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1703);
    player();
    setState(1704);
    match(IvionParser::Have);
    setState(1705);
    match(IvionParser::At);
    setState(1706);
    match(IvionParser::Least);
    setState(1707);
    literalValue();
    setState(1708);
    match(IvionParser::Reveal);
    setState(1709);
    match(IvionParser::Card);
    setState(1710);
    match(IvionParser::In);
    setState(1711);
    playerRef();
    setState(1712);
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

IvionParser::PlayerContext* IvionParser::IfPlayerHasMitigateContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 270, IvionParser::RuleIfPlayerHasMitigate);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1714);
    player();
    setState(1715);
    _la = _input->LA(1);
    if (!(_la == IvionParser::Gains

    || _la == IvionParser::Have)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(1716);
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
  enterRule(_localctx, 272, IvionParser::RuleIfPlayerDidntLeaveTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1718);
    player();
    setState(1719);
    match(IvionParser::Didnt);
    setState(1720);
    match(IvionParser::Leave);
    setState(1721);
    match(IvionParser::A);
    setState(1722);
    match(IvionParser::Tile);
    setState(1723);
    match(IvionParser::This);
    setState(1724);
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

IvionParser::CardContext* IvionParser::IfCardCostReducedContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 274, IvionParser::RuleIfCardCostReduced);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1726);
    card();
    setState(1727);
    match(IvionParser::Cost);
    setState(1728);
    match(IvionParser::Is);
    setState(1729);
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

std::vector<IvionParser::PlayerContext *> IvionParser::IfPlayerHasMoreHPContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::IfPlayerHasMoreHPContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
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
  enterRule(_localctx, 276, IvionParser::RuleIfPlayerHasMoreHP);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1731);
    player();
    setState(1732);
    match(IvionParser::Have);
    setState(1733);
    match(IvionParser::More);
    setState(1734);
    match(IvionParser::HP);
    setState(1735);
    match(IvionParser::Than);
    setState(1736);
    player();
   
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

IvionParser::PlayerContext* IvionParser::IfPlayerHasNoActionsContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 278, IvionParser::RuleIfPlayerHasNoActions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1738);
    player();
    setState(1739);
    match(IvionParser::Have);
    setState(1740);
    match(IvionParser::No);
    setState(1741);
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
  enterRule(_localctx, 280, IvionParser::RuleIfInTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1743);
    hypotheticalEntity();
    setState(1744);
    match(IvionParser::Is);
    setState(1745);
    match(IvionParser::In);
    setState(1746);
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

IvionParser::CardContext* IvionParser::CounterCardConditionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 282, IvionParser::RuleCounterCardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1748);
    card();
    setState(1749);
    match(IvionParser::Is);
    setState(1750);
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
  enterRule(_localctx, 284, IvionParser::RuleStunPlayerCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1752);
    match(IvionParser::A);
    setState(1753);
    match(IvionParser::Resource);
    setState(1754);
    match(IvionParser::Is);
    setState(1755);
    match(IvionParser::Removed);
    setState(1757);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::In) {
      setState(1756);
      match(IvionParser::In);
    }
    setState(1759);
    match(IvionParser::This);
    setState(1760);
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

IvionParser::CardContext* IvionParser::RevealCardsConditionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 286, IvionParser::RuleRevealCardsCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1762);
    card();
    setState(1763);
    match(IvionParser::Is);
    setState(1764);
    match(IvionParser::Reveal);
    setState(1766);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::In) {
      setState(1765);
      match(IvionParser::In);
    }
    setState(1768);
    match(IvionParser::This);
    setState(1769);
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

IvionParser::PlayerContext* IvionParser::PlayerControlledConditionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 288, IvionParser::RulePlayerControlledCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1771);
    player();
    setState(1772);
    match(IvionParser::Is);
    setState(1773);
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

IvionParser::PlayerContext* IvionParser::PlayerUncontrolledConditionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 290, IvionParser::RulePlayerUncontrolledCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1775);
    player();
    setState(1776);
    match(IvionParser::Is);
    setState(1777);
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

IvionParser::PlayerContext* IvionParser::PlayerHasCardsInDiscardConditionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 292, IvionParser::RulePlayerHasCardsInDiscardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1779);
    player();
    setState(1780);
    match(IvionParser::Have);
    setState(1781);
    match(IvionParser::At);
    setState(1782);
    match(IvionParser::Least);
    setState(1783);
    literalValue();
    setState(1784);
    match(IvionParser::Card);
    setState(1785);
    match(IvionParser::In);
    setState(1786);
    playerRef();
    setState(1787);
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

IvionParser::PlayerContext* IvionParser::PlayerHasTakenDamageConditionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 294, IvionParser::RulePlayerHasTakenDamageCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1789);
    player();
    setState(1790);
    match(IvionParser::Have);
    setState(1791);
    match(IvionParser::Taken);
    setState(1792);
    literalValue();
    setState(1793);
    match(IvionParser::Or);
    setState(1794);
    match(IvionParser::More);
    setState(1795);
    match(IvionParser::Damage);
    setState(1796);
    match(IvionParser::This);
    setState(1797);
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

IvionParser::CardContext* IvionParser::CardResolvedConditionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 296, IvionParser::RuleCardResolvedCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1799);
    card();
    setState(1800);
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

IvionParser::PlayerContext* IvionParser::PlayerDrewCardConditionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 298, IvionParser::RulePlayerDrewCardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1802);
    player();
    setState(1803);
    match(IvionParser::Draw);
    setState(1804);
    match(IvionParser::A);
    setState(1805);
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

IvionParser::PlayerContext* IvionParser::PlayerMadeTerrainConditionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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

IvionParser::TileContext* IvionParser::PlayerMadeTerrainConditionContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
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
  enterRule(_localctx, 300, IvionParser::RulePlayerMadeTerrainCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1807);
    player();
    setState(1808);
    match(IvionParser::Make);
    setState(1809);
    match(IvionParser::Terrain);
    setState(1810);
    match(IvionParser::In);
    setState(1811);
    tile();
   
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

std::vector<IvionParser::PlayerContext *> IvionParser::PlayerEntersSpaceConditionContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::PlayerEntersSpaceConditionContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
}

tree::TerminalNode* IvionParser::PlayerEntersSpaceConditionContext::Enters() {
  return getToken(IvionParser::Enters, 0);
}

IvionParser::CardContext* IvionParser::PlayerEntersSpaceConditionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::TileContext* IvionParser::PlayerEntersSpaceConditionContext::tile() {
  return getRuleContext<IvionParser::TileContext>(0);
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
  enterRule(_localctx, 302, IvionParser::RulePlayerEntersSpaceCondition);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1813);
    player();
    setState(1818);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == IvionParser::Or) {
      setState(1814);
      match(IvionParser::Or);
      setState(1815);
      player();
      setState(1820);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(1821);
    match(IvionParser::Enters);
    setState(1824);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 91, _ctx)) {
    case 1: {
      setState(1822);
      card();
      break;
    }

    case 2: {
      setState(1823);
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

//----------------- PlayerAttachesCardConditionContext ------------------------------------------------------------------

IvionParser::PlayerAttachesCardConditionContext::PlayerAttachesCardConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<IvionParser::PlayerContext *> IvionParser::PlayerAttachesCardConditionContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::PlayerAttachesCardConditionContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
}

tree::TerminalNode* IvionParser::PlayerAttachesCardConditionContext::Attach() {
  return getToken(IvionParser::Attach, 0);
}

IvionParser::CardContext* IvionParser::PlayerAttachesCardConditionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 304, IvionParser::RulePlayerAttachesCardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1826);
    player();
    setState(1827);
    match(IvionParser::Attach);
    setState(1828);
    card();
    setState(1829);
    match(IvionParser::To);
    setState(1830);
    player();
   
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

IvionParser::CardContext* IvionParser::CardIsRevealedConditionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 306, IvionParser::RuleCardIsRevealedCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1832);
    card();
    setState(1833);
    match(IvionParser::Is);
    setState(1834);
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

std::vector<IvionParser::PlayerContext *> IvionParser::PlayerStunsPlayerConditionContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::PlayerStunsPlayerConditionContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
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
  enterRule(_localctx, 308, IvionParser::RulePlayerStunsPlayerCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1836);
    player();
    setState(1837);
    match(IvionParser::Stun);
    setState(1838);
    player();
   
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

IvionParser::CardContext* IvionParser::CardSentToDiscardConditionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 310, IvionParser::RuleCardSentToDiscardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1840);
    card();
    setState(1841);
    match(IvionParser::Is);
    setState(1842);
    match(IvionParser::Sent);
    setState(1843);
    match(IvionParser::To);
    setState(1844);
    match(IvionParser::Your);
    setState(1845);
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

IvionParser::CardContext* IvionParser::CardFailsToResolveConditionContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
}

IvionParser::PlayerContext* IvionParser::CardFailsToResolveConditionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 312, IvionParser::RuleCardFailsToResolveCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1847);
    card();
    setState(1848);
    player();
    setState(1849);
    match(IvionParser::Play);
    setState(1850);
    match(IvionParser::Fails);
    setState(1851);
    match(IvionParser::To);
    setState(1852);
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

std::vector<IvionParser::PlayerContext *> IvionParser::PlayerSlowsPlayerConditionContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::PlayerSlowsPlayerConditionContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
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
  enterRule(_localctx, 314, IvionParser::RulePlayerSlowsPlayerCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1854);
    player();
    setState(1855);
    match(IvionParser::Slow);
    setState(1856);
    player();
   
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

IvionParser::PlayerContext* IvionParser::PlayerRecivesControlConditionContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 316, IvionParser::RulePlayerRecivesControlCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1858);
    player();
    setState(1859);
    match(IvionParser::Receive);
    setState(1860);
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
  enterRule(_localctx, 318, IvionParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1896);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 92, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1862);
      playerControlledCondition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1863);
      playerUncontrolledCondition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1864);
      playerHasCardsInDiscardCondition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1865);
      playerHasTakenDamageCondition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1866);
      cardResolvedCondition();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1867);
      playerDrewCardCondition();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1868);
      playerMadeTerrainCondition();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1869);
      playerEntersSpaceCondition();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1870);
      playerAttachesCardCondition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1871);
      cardIsRevealedCondition();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1872);
      playerStunsPlayerCondition();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1873);
      cardSentToDiscardCondition();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1874);
      cardFailsToResolveCondition();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1875);
      playerSlowsPlayerCondition();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1876);
      playerRecivesControlCondition();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(1877);
      stunPlayerCondition();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(1878);
      ifPlayerMakesChoice();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(1879);
      ifPreviousActionInvalid();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(1880);
      ifResolvedCard();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(1881);
      ifUsedSecondWind();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(1882);
      ifNear();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(1883);
      ifControlled();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(1884);
      ifPlayedCard();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(1885);
      ifTileHadTerrain();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(1886);
      ifCardRevealed();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(1887);
      ifPlayerHasMitigate();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(1888);
      ifPlayerDidntLeaveTile();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(1889);
      ifCardCostReduced();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(1890);
      ifPlayerHasMoreHP();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(1891);
      ifPlayerHasNoActions();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(1892);
      ifInTerrain();
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(1893);
      counterCardCondition();
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(1894);
      stunPlayerCondition();
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(1895);
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
  enterRule(_localctx, 320, IvionParser::RuleTriggerEffect);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1919);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 94, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1898);
      match(IvionParser::At);
      setState(1899);
      turnTrigger();
      setState(1900);
      match(IvionParser::C);
      setState(1901);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1903);
      match(IvionParser::After);
      setState(1904);
      condition();
      setState(1906);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == IvionParser::For || _la == IvionParser::During) {
        setState(1905);
        effectPostfix();
      }
      setState(1908);
      match(IvionParser::C);
      setState(1909);
      effect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1911);
      durationEffect();
      setState(1912);
      match(IvionParser::D);
      setState(1913);
      effect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1915);
      gameStartTrigger();
      setState(1916);
      match(IvionParser::C);
      setState(1917);
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

std::vector<IvionParser::PlayerContext *> IvionParser::IfWouldRecieveControlContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::IfWouldRecieveControlContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
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
  enterRule(_localctx, 322, IvionParser::RuleIfWouldRecieveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1921);
    match(IvionParser::If);
    setState(1922);
    player();
    setState(1923);
    match(IvionParser::Would);
    setState(1924);
    match(IvionParser::Receive);
    setState(1925);
    match(IvionParser::Control);
    setState(1926);
    match(IvionParser::C);
    setState(1927);
    match(IvionParser::Instead);
    setState(1928);
    player();
    setState(1929);
    match(IvionParser::Receive);
    setState(1930);
    match(IvionParser::The);
    setState(1931);
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

IvionParser::PlayerContext* IvionParser::IfWouldTakeDamageContext::player() {
  return getRuleContext<IvionParser::PlayerContext>(0);
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
  enterRule(_localctx, 324, IvionParser::RuleIfWouldTakeDamage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1933);
    match(IvionParser::If);
    setState(1934);
    player();
    setState(1935);
    match(IvionParser::Would);
    setState(1936);
    match(IvionParser::Take);
    setState(1937);
    match(IvionParser::Damage);
    setState(1938);
    match(IvionParser::For);
    setState(1939);
    match(IvionParser::The);
    setState(1940);
    match(IvionParser::First);
    setState(1941);
    match(IvionParser::Time);
    setState(1942);
    match(IvionParser::During);
    setState(1943);
    match(IvionParser::Each);
    setState(1944);
    match(IvionParser::Turn);
    setState(1945);
    match(IvionParser::C);
    setState(1947);
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
      setState(1946);
      playerRef();
    }
    setState(1949);
    match(IvionParser::Instead);
    setState(1950);
    match(IvionParser::Take);
    setState(1951);
    literalValue();
    setState(1952);
    match(IvionParser::Less);
    setState(1953);
    match(IvionParser::Damage);
    setState(1954);
    match(IvionParser::P);
    setState(1955);
    match(IvionParser::This);
    setState(1956);
    match(IvionParser::May);
    setState(1957);
    match(IvionParser::Not);
    setState(1958);
    match(IvionParser::Reduce);
    setState(1959);
    match(IvionParser::Damage);
    setState(1960);
    match(IvionParser::Taken);
    setState(1961);
    match(IvionParser::Below);
    setState(1962);
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

std::vector<IvionParser::PlayerContext *> IvionParser::IfWouldHealContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::IfWouldHealContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
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
  enterRule(_localctx, 326, IvionParser::RuleIfWouldHeal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1964);
    match(IvionParser::If);
    setState(1965);
    player();
    setState(1966);
    match(IvionParser::Would);
    setState(1967);
    match(IvionParser::Heal);
    setState(1968);
    player();
    setState(1969);
    match(IvionParser::HP);
    setState(1970);
    match(IvionParser::C);
    setState(1971);
    match(IvionParser::Instead);
    setState(1972);
    match(IvionParser::Deal);
    setState(1973);
    match(IvionParser::That);
    setState(1974);
    match(IvionParser::Much);
    setState(1975);
    match(IvionParser::Damage);
    setState(1976);
    match(IvionParser::To);
    setState(1977);
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
  enterRule(_localctx, 328, IvionParser::RuleReplacementTriggerEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1982);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 96, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1979);
      ifWouldRecieveControl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1980);
      ifWouldTakeDamage();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1981);
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
  enterRule(_localctx, 330, IvionParser::RuleCardCantBeTargeted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1984);
    match(IvionParser::CARD_NAME);
    setState(1985);
    match(IvionParser::Cant);
    setState(1986);
    match(IvionParser::Be);
    setState(1987);
    match(IvionParser::Targeted);
    setState(1988);
    match(IvionParser::By);
    setState(1989);
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
  enterRule(_localctx, 332, IvionParser::RuleWhileEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1991);
    match(IvionParser::While);
    setState(1992);
    match(IvionParser::CARD_NAME);
    setState(1993);
    match(IvionParser::Is);
    setState(1994);
    match(IvionParser::Reveal);
    setState(1995);
    match(IvionParser::In);
    setState(1996);
    match(IvionParser::Your);
    setState(1997);
    match(IvionParser::Hand);
    setState(1998);
    match(IvionParser::C);
    setState(1999);
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
  enterRule(_localctx, 334, IvionParser::RulePrimaryCostReduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2001);
    match(IvionParser::CARD_NAME);
    setState(2002);
    match(IvionParser::Cost);
    setState(2003);
    literalValue();
    setState(2004);
    match(IvionParser::Less);
    setState(2005);
    match(IvionParser::POWER);
    setState(2006);
    match(IvionParser::For);
    setState(2007);
    match(IvionParser::Each);
    setState(2008);
    match(IvionParser::Other);
    setState(2009);
    match(IvionParser::Reveal);
    setState(2010);
    match(IvionParser::Card);
    setState(2011);
    match(IvionParser::In);
    setState(2012);
    match(IvionParser::Your);
    setState(2013);
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
  enterRule(_localctx, 336, IvionParser::RuleOnlyPlayIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2015);
    match(IvionParser::Only);
    setState(2016);
    match(IvionParser::Play);
    setState(2017);
    match(IvionParser::CARD_NAME);
    setState(2018);
    match(IvionParser::If);
    setState(2019);
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
  enterRule(_localctx, 338, IvionParser::RuleOncePerGameLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2021);
    match(IvionParser::CARD_NAME);
    setState(2022);
    match(IvionParser::May);
    setState(2023);
    match(IvionParser::Be);
    setState(2024);
    match(IvionParser::Play);
    setState(2025);
    match(IvionParser::Once);
    setState(2026);
    match(IvionParser::Per);
    setState(2027);
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
  enterRule(_localctx, 340, IvionParser::RuleTriggerLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2029);
    match(IvionParser::CARD_NAME);
    setState(2030);
    match(IvionParser::May);
    setState(2031);
    match(IvionParser::Only);
    setState(2032);
    match(IvionParser::Trigger);
    setState(2033);
    match(IvionParser::If);
    setState(2034);
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
  enterRule(_localctx, 342, IvionParser::RuleTriggerTurnLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2036);
    match(IvionParser::CARD_NAME);
    setState(2037);
    match(IvionParser::May);
    setState(2038);
    match(IvionParser::Trigger);
    setState(2039);
    literalValue();
    setState(2040);
    match(IvionParser::Per);
    setState(2041);
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
  enterRule(_localctx, 344, IvionParser::RuleOmniPresentEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2050);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 97, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2043);
      cardCantBeTargeted();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2044);
      whileEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2045);
      primaryCostReduction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2046);
      onlyPlayIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2047);
      oncePerGameLimit();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2048);
      triggerLimit();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2049);
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
  enterRule(_localctx, 346, IvionParser::RuleOne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2052);
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
  enterRule(_localctx, 348, IvionParser::RuleTwo);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2054);
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
  enterRule(_localctx, 350, IvionParser::RuleThree);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2056);
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
  enterRule(_localctx, 352, IvionParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2058);
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
  enterRule(_localctx, 354, IvionParser::RulePlayerPowerValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2060);
    player();
    setState(2061);
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
  enterRule(_localctx, 356, IvionParser::RulePlayerControlAmountValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2063);
    match(IvionParser::The);
    setState(2064);
    match(IvionParser::Total);
    setState(2065);
    match(IvionParser::Value);
    setState(2066);
    match(IvionParser::Of);
    setState(2067);
    match(IvionParser::Control);
    setState(2068);
    match(IvionParser::Affecting);
    setState(2069);
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

IvionParser::CardContext* IvionParser::PlayerHandSizeContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 358, IvionParser::RulePlayerHandSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2071);
    match(IvionParser::The);
    setState(2072);
    match(IvionParser::Number);
    setState(2073);
    match(IvionParser::Of);
    setState(2074);
    card();
    setState(2075);
    match(IvionParser::In);
    setState(2076);
    match(IvionParser::Their);
    setState(2077);
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
  enterRule(_localctx, 360, IvionParser::RulePlayerMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2079);
    player();
    setState(2080);
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

IvionParser::CardContext* IvionParser::PlayerCardsInHandContext::card() {
  return getRuleContext<IvionParser::CardContext>(0);
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
  enterRule(_localctx, 362, IvionParser::RulePlayerCardsInHand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2082);
    literalValue();
    setState(2084);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == IvionParser::More) {
      setState(2083);
      match(IvionParser::More);
    }
    setState(2091);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::For: {
        break;
      }

      case IvionParser::Damage: {
        setState(2087);
        match(IvionParser::Damage);
        break;
      }

      case IvionParser::Slow: {
        setState(2088);
        match(IvionParser::Slow);
        break;
      }

      case IvionParser::Silence: {
        setState(2089);
        match(IvionParser::Silence);
        break;
      }

      case IvionParser::Disarm: {
        setState(2090);
        match(IvionParser::Disarm);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(2093);
    match(IvionParser::For);
    setState(2094);
    match(IvionParser::Each);
    setState(2095);
    card();
    setState(2096);
    match(IvionParser::In);
    setState(2097);
    playerRef();
    setState(2098);
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
  enterRule(_localctx, 364, IvionParser::RuleLiteralValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2104);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::A:
      case IvionParser::Once:
      case IvionParser::One: {
        enterOuterAlt(_localctx, 1);
        setState(2100);
        one();
        break;
      }

      case IvionParser::Twice:
      case IvionParser::Two: {
        enterOuterAlt(_localctx, 2);
        setState(2101);
        two();
        break;
      }

      case IvionParser::Three: {
        enterOuterAlt(_localctx, 3);
        setState(2102);
        three();
        break;
      }

      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 4);
        setState(2103);
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
  enterRule(_localctx, 366, IvionParser::RuleGameStateValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2111);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 101, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2106);
      playerPowerValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2107);
      playerControlAmountValue();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2108);
      playerHandSize();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2109);
      playerMitigate();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2110);
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
  enterRule(_localctx, 368, IvionParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 102, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2113);
      gameStateValue();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2114);
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
  enterRule(_localctx, 370, IvionParser::RuleChooseSameMultipleTimes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2117);
    match(IvionParser::You);
    setState(2118);
    match(IvionParser::May);
    setState(2119);
    match(IvionParser::Choose);
    setState(2120);
    match(IvionParser::The);
    setState(2121);
    match(IvionParser::Same);
    setState(2122);
    match(IvionParser::Mode);
    setState(2123);
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
  size_t startState = 372;
  enterRecursionRule(_localctx, 372, IvionParser::RuleEffectList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2126);
    match(IvionParser::D);
    setState(2127);
    effect();
    _ctx->stop = _input->LT(-1);
    setState(2135);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EffectListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEffectList);
        setState(2129);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2130);
        match(IvionParser::P);
        setState(2131);
        match(IvionParser::D);
        setState(2132);
        effect(); 
      }
      setState(2137);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 103, _ctx);
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
  enterRule(_localctx, 374, IvionParser::RuleChooseEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 104, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2138);
      match(IvionParser::Choose);
      setState(2139);
      literalValue();
      setState(2140);
      match(IvionParser::For);
      setState(2141);
      match(IvionParser::Each);
      setState(2142);
      playerFilter();
      setState(2143);
      match(IvionParser::In);
      setState(2144);
      match(IvionParser::It);
      setState(2145);
      match(IvionParser::O);
      setState(2146);
      effectList(0);
      setState(2147);
      match(IvionParser::P);
      setState(2148);
      chooseSameMultipleTimes();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2150);
      match(IvionParser::Choose);
      setState(2151);
      literalValue();
      setState(2152);
      match(IvionParser::O);
      setState(2153);
      effectList(0);
      setState(2154);
      match(IvionParser::P);
      setState(2155);
      chooseSameMultipleTimes();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2157);
      match(IvionParser::Choose);
      setState(2158);
      literalValue();
      setState(2159);
      match(IvionParser::O);
      setState(2160);
      effectList(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2162);
      match(IvionParser::Choose);
      setState(2163);
      literalValue();
      setState(2164);
      match(IvionParser::For);
      setState(2165);
      match(IvionParser::Each);
      setState(2166);
      playerFilter();
      setState(2167);
      match(IvionParser::In);
      setState(2168);
      match(IvionParser::It);
      setState(2169);
      match(IvionParser::O);
      setState(2170);
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
  enterRule(_localctx, 376, IvionParser::RuleSingleEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 105, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2174);
      chooseEffect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2175);
      disarmPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2176);
      silencePlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2177);
      slowPlayer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2178);
      controlPlayer();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2179);
      travelPlayer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2180);
      travelDistance();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2181);
      destroyCard();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2182);
      dealDamage();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2183);
      counterCard();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2184);
      attachCard();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2185);
      gainPower();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2186);
      gainAction();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2187);
      gainInitiative();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2188);
      gainMitigate();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2189);
      loseMitigate();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2190);
      useSecondWind();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2191);
      returnCard();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2192);
      putBottomCardOfDeckIntoHand();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2193);
      triggerDurationEffects();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2194);
      playCard();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2195);
      playUltimate();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2196);
      discardCards();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2197);
      gainsHeroic();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2198);
      healPlayer();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2199);
      stunPlayer();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2200);
      revealCards();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2201);
      drawCards();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2202);
      removeControl();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2203);
      hardcastEffect();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2204);
      seekEffect();
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2205);
      makeTerrain();
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2206);
      removeTerrain();
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2207);
      spendResources();
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2208);
      scryEffect();
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2209);
      overrideFrenzy();
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2210);
      increaseCardDuration();
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2211);
      resetUseOfCard();
      break;
    }

    case 39: {
      enterOuterAlt(_localctx, 39);
      setState(2212);
      heroic();
      break;
    }

    case 40: {
      enterOuterAlt(_localctx, 40);
      setState(2213);
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
  enterRule(_localctx, 378, IvionParser::RuleRepeatedEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2226);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 106, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2216);
      singleEffect();
      setState(2217);
      match(IvionParser::For);
      setState(2218);
      match(IvionParser::Each);
      setState(2219);
      match(IvionParser::Instance);
      setState(2220);
      match(IvionParser::Of);
      setState(2221);
      match(IvionParser::Control);
      setState(2222);
      playerRef();
      setState(2223);
      match(IvionParser::Receive);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2225);
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
  enterRule(_localctx, 380, IvionParser::RuleConditionalEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2234);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(2228);
        match(IvionParser::If);
        setState(2229);
        condition();
        setState(2230);
        match(IvionParser::C);
        setState(2231);
        effect();
        break;
      }

      case IvionParser::Disarm:
      case IvionParser::Target:
      case IvionParser::Enemy:
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
      case IvionParser::Player:
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
      case IvionParser::Controlled:
      case IvionParser::Uncontrolled:
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
      case IvionParser::Ally:
      case IvionParser::Once:
      case IvionParser::Twice:
      case IvionParser::Integer:
      case IvionParser::One:
      case IvionParser::Two:
      case IvionParser::Three:
      case IvionParser::Choose:
      case IvionParser::It: {
        enterOuterAlt(_localctx, 2);
        setState(2233);
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
  enterRule(_localctx, 382, IvionParser::RuleAlternativeEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2243);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2236);
      match(IvionParser::If);
      setState(2237);
      condition();
      setState(2238);
      match(IvionParser::C);
      setState(2239);
      match(IvionParser::Instead);
      setState(2240);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2242);
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

std::vector<IvionParser::PlayerContext *> IvionParser::EffectContext::player() {
  return getRuleContexts<IvionParser::PlayerContext>();
}

IvionParser::PlayerContext* IvionParser::EffectContext::player(size_t i) {
  return getRuleContext<IvionParser::PlayerContext>(i);
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
  enterRule(_localctx, 384, IvionParser::RuleEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2267);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 109, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2245);
      player();
      setState(2246);
      match(IvionParser::May);
      setState(2247);
      match(IvionParser::Have);
      setState(2248);
      player();
      setState(2249);
      alternativeEffect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2251);
      player();
      setState(2252);
      match(IvionParser::May);
      setState(2253);
      alternativeEffect();
      setState(2254);
      match(IvionParser::To);
      setState(2255);
      alternativeEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2257);
      player();
      setState(2258);
      match(IvionParser::May);
      setState(2259);
      alternativeEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2261);
      alternativeEffect();
      setState(2262);
      match(IvionParser::Unless);
      setState(2263);
      player();
      setState(2264);
      alternativeEffect();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2266);
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
  enterRule(_localctx, 386, IvionParser::RuleEffectEnd);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2280);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 110, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2269);
      match(IvionParser::P);
      setState(2270);
      match(IvionParser::Then);
      setState(2271);
      match(IvionParser::C);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2272);
      match(IvionParser::P);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2273);
      match(IvionParser::And);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2274);
      match(IvionParser::C);
      setState(2275);
      match(IvionParser::And);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2276);
      match(IvionParser::C);
      setState(2277);
      match(IvionParser::Then);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2278);
      match(IvionParser::C);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2279);
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
  enterRule(_localctx, 388, IvionParser::RuleAnyEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2286);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 111, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2282);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2283);
      passiveEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2284);
      replacementTriggerEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2285);
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
  enterRule(_localctx, 390, IvionParser::RuleBreachEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2288);
    match(IvionParser::Breach);
    setState(2289);
    match(IvionParser::D);
    setState(2293); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2290);
              anyEffect();
              setState(2291);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2295); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 112, _ctx);
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
  enterRule(_localctx, 392, IvionParser::RuleAdvantageEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2297);
    match(IvionParser::Advantage);
    setState(2298);
    match(IvionParser::D);
    setState(2302); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2299);
              anyEffect();
              setState(2300);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2304); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 113, _ctx);
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
  enterRule(_localctx, 394, IvionParser::RuleFrenzyEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2306);
    match(IvionParser::Frenzy);
    setState(2307);
    match(IvionParser::D);
    setState(2311); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2308);
              anyEffect();
              setState(2309);
              effectEnd();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2313); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 114, _ctx);
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
  enterRule(_localctx, 396, IvionParser::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2324);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 115, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2315);
      omniPresentEffect();
      setState(2316);
      match(IvionParser::P);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2318);
      breachEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2319);
      advantageEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2320);
      frenzyEffect();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2321);
      anyEffect();
      setState(2322);
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
  enterRule(_localctx, 398, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2327); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(2326);
      line();
      setState(2329); 
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
    setState(2331);
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
    case 186: return effectListSempred(dynamic_cast<EffectListContext *>(context), predicateIndex);

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
  "generalPostInTerrainFilter", "generalPostNearTerrainFilter", "generalPostNearEntityFilter", 
  "generalPostInEntityFilter", "generalPostPlayerChoiceFilter", "generalPostAtLeastAwayFilter", 
  "generalPostAtLeastAwayFromFilter", "playerType", "anotherFlag", "upToFlag", 
  "uncontrolledFlag", "controlledFlag", "playerPrefix", "playerPostfix", 
  "playerFilter", "currentPlayer", "previousPlayer", "previousCardsOwner", 
  "previousCardsController", "playerRef", "selectPlayer", "allPlayers", 
  "player", "cardPreEnemyFilter", "cardPreAttachedFilter", "cardPreAbilityFilter", 
  "cardPreAttackFilter", "cardPreRevealedFilter", "cardPreInstanceFilter", 
  "cardPrefix", "cardPostTargettingFilter", "cardPostCostFilter", "cardPostAttachedToFilter", 
  "cardPostControlledByPlayerFilter", "cardPostHardcastFilter", "cardPostFrenzyFilter", 
  "cardPostInDiscardFilter", "cardPostTurnRefFilter", "cardPostfix", "cardFilter", 
  "cardName", "bottomCard", "previousCard", "targetCard", "selectCard", 
  "singleCard", "allCards", "multiCard", "card", "tilePreEmptyFilter", "tilePreFix", 
  "tilePostFix", "tileFilter", "targetTile", "previousTile", "theNearestTile", 
  "playersTile", "cardsTile", "singleTile", "multiTile", "allTiles", "tile", 
  "entity", "hypotheticalEntity", "disarmPlayer", "silencePlayer", "slowPlayer", 
  "controlPlayer", "awayFlag", "travelDistance", "travelPlayer", "destroyCard", 
  "dealDamage", "counterCard", "attachCard", "gainPower", "gainAction", 
  "gainInitiative", "gainMitigate", "loseMitigate", "useSecondWind", "returnCard", 
  "putBottomCardOfDeckIntoHand", "triggerDurationEffects", "forLessResources", 
  "freeFlag", "playCard", "playUltimate", "discardCards", "gainsHeroic", 
  "healPlayer", "stunPlayer", "revealCards", "drawCards", "removeControl", 
  "hardcastEffect", "seekEffect", "makeTerrain", "removeTerrain", "spendResources", 
  "scryEffect", "overrideFrenzy", "increaseCardDuration", "resetUseOfCard", 
  "heroic", "onlyPlayCertainCards", "costReduction", "rangeSet", "cantPlayCards", 
  "playerCantBeTargeted", "increasedHandSize", "increasedMaxHP", "replacesSecondWind", 
  "noInitiative", "drawRange", "gainRange", "limitTargets", "passiveEffect", 
  "durationEffect", "startOfPlayerTurn", "endOfPlayerTurnTrigger", "startOfPlayerNextTurn", 
  "endOfTurnTrigger", "turnTrigger", "gameStartTrigger", "effectPostfix", 
  "ifPlayerMakesChoice", "ifPreviousActionInvalid", "ifResolvedCard", "ifPlayedCard", 
  "ifUsedSecondWind", "ifNear", "ifControlled", "ifTileHadTerrain", "ifCardRevealed", 
  "ifPlayerHasMitigate", "ifPlayerDidntLeaveTile", "ifCardCostReduced", 
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
    0x3, 0xd2, 0x920, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0xc8, 0x9, 0xc8, 0x4, 0xc9, 0x9, 0xc9, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x198, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x1c5, 
    0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x1ce, 0xa, 0xf, 0x3, 0x10, 0x7, 0x10, 0x1d1, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0x1d4, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0x1d8, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x1db, 0xb, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x5, 0x12, 0x1e4, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x1ee, 
    0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x1f4, 
    0xa, 0x15, 0x3, 0x16, 0x5, 0x16, 0x1f7, 0xa, 0x16, 0x3, 0x16, 0x5, 0x16, 
    0x1fa, 0xa, 0x16, 0x3, 0x16, 0x5, 0x16, 0x1fd, 0xa, 0x16, 0x3, 0x16, 
    0x5, 0x16, 0x200, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x5, 0x17, 0x206, 0xa, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x5, 0x17, 0x20d, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x5, 0x18, 0x212, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x5, 0x1b, 0x219, 0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x5, 0x1c, 0x21e, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x227, 0xa, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x232, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
    0x27, 0x3, 0x27, 0x5, 0x27, 0x258, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
    0x5, 0x28, 0x269, 0xa, 0x28, 0x3, 0x29, 0x7, 0x29, 0x26c, 0xa, 0x29, 
    0xc, 0x29, 0xe, 0x29, 0x26f, 0xb, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 0x29, 
    0x273, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x276, 0xb, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x28b, 
    0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x5, 0x2e, 0x291, 
    0xa, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x29a, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x31, 0x5, 0x31, 0x2a0, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 
    0x5, 0x31, 0x2a4, 0xa, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x5, 0x32, 0x2ab, 0xa, 0x32, 0x3, 0x33, 0x5, 0x33, 0x2ae, 
    0xa, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 
    0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x5, 0x35, 
    0x2bb, 0xa, 0x35, 0x3, 0x36, 0x7, 0x36, 0x2be, 0xa, 0x36, 0xc, 0x36, 
    0xe, 0x36, 0x2c1, 0xb, 0x36, 0x3, 0x36, 0x3, 0x36, 0x7, 0x36, 0x2c5, 
    0xa, 0x36, 0xc, 0x36, 0xe, 0x36, 0x2c8, 0xb, 0x36, 0x3, 0x37, 0x5, 0x37, 
    0x2cb, 0xa, 0x37, 0x3, 0x37, 0x5, 0x37, 0x2ce, 0xa, 0x37, 0x3, 0x37, 
    0x5, 0x37, 0x2d1, 0xa, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x2d9, 0xa, 0x38, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 
    0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 
    0x3c, 0x2f0, 0xa, 0x3c, 0x3, 0x3d, 0x5, 0x3d, 0x2f3, 0xa, 0x3d, 0x3, 
    0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x5, 0x3f, 0x2fe, 0xa, 0x3f, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x5, 0x40, 0x303, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x5, 0x41, 0x308, 0xa, 0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x5, 0x42, 0x310, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x318, 0xa, 0x43, 
    0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 
    0x44, 0x320, 0xa, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 
    0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x349, 0xa, 0x45, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x351, 
    0xa, 0x47, 0x3, 0x47, 0x5, 0x47, 0x354, 0xa, 0x47, 0x3, 0x47, 0x5, 0x47, 
    0x357, 0xa, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x35c, 
    0xa, 0x47, 0x3, 0x48, 0x3, 0x48, 0x5, 0x48, 0x360, 0xa, 0x48, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
    0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x3a1, 0xa, 0x4a, 
    0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
    0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x3b3, 0xa, 0x4c, 0x3, 0x4d, 
    0x5, 0x4d, 0x3b6, 0xa, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 
    0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x5, 0x4d, 0x3ca, 0xa, 0x4d, 0x3, 0x4e, 0x5, 0x4e, 0x3cd, 
    0xa, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
    0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x5, 
    0x4e, 0x3e1, 0xa, 0x4e, 0x3, 0x4f, 0x3, 0x4f, 0x6, 0x4f, 0x3e5, 0xa, 
    0x4f, 0xd, 0x4f, 0xe, 0x4f, 0x3e6, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x6, 0x4f, 0x3ec, 0xa, 0x4f, 0xd, 0x4f, 0xe, 0x4f, 0x3ed, 0x3, 0x4f, 
    0x3, 0x4f, 0x3, 0x4f, 0x6, 0x4f, 0x3f3, 0xa, 0x4f, 0xd, 0x4f, 0xe, 0x4f, 
    0x3f4, 0x5, 0x4f, 0x3f7, 0xa, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x401, 
    0xa, 0x50, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x52, 0x3, 
    0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 
    0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 
    0x55, 0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
    0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
    0x5, 0x58, 0x436, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x7, 0x59, 
    0x43b, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x43e, 0xb, 0x59, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 
    0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x7, 0x59, 
    0x44d, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x450, 0xb, 0x59, 0x3, 0x59, 
    0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 
    0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 
    0x3, 0x59, 0x7, 0x59, 0x461, 0xa, 0x59, 0xc, 0x59, 0xe, 0x59, 0x464, 
    0xb, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 
    0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 0x3, 0x59, 
    0x5, 0x59, 0x472, 0xa, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 
    0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 
    0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x5, 0x5a, 0x483, 
    0xa, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
    0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 
    0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x496, 
    0xa, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 
    0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
    0x3, 0x5e, 0x5, 0x5e, 0x4d9, 0xa, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
    0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
    0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
    0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 0x4f5, 0xa, 0x5f, 
    0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
    0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 
    0x60, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0x50d, 0xa, 0x60, 0x3, 0x61, 
    0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
    0x63, 0x3, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
    0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 
    0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 
    0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 
    0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 
    0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 
    0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 
    0x3, 0x68, 0x3, 0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 
    0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 
    0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
    0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0x568, 0xa, 0x6b, 
    0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 
    0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 
    0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x3, 
    0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x580, 0xa, 0x6c, 0x3, 0x6d, 
    0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 0x6d, 0x3, 
    0x6d, 0x3, 0x6d, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 0x3, 0x6e, 
    0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 
    0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 0x3, 0x6f, 
    0x3, 0x6f, 0x5, 0x6f, 0x59e, 0xa, 0x6f, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 
    0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 0x70, 0x3, 
    0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 0x3, 0x71, 
    0x3, 0x71, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 0x72, 0x3, 
    0x72, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 
    0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x73, 0x3, 0x74, 0x3, 
    0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
    0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 
    0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 
    0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x3, 0x74, 0x5, 0x74, 0x5e8, 0xa, 0x74, 
    0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 
    0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 
    0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x75, 0x3, 0x76, 0x3, 0x76, 0x3, 
    0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x76, 0x3, 0x77, 0x3, 0x77, 
    0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 
    0x77, 0x3, 0x77, 0x3, 0x77, 0x3, 0x77, 0x5, 0x77, 0x60e, 0xa, 0x77, 
    0x3, 0x78, 0x3, 0x78, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 
    0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 0x3, 0x79, 
    0x3, 0x79, 0x5, 0x79, 0x61e, 0xa, 0x79, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 
    0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7a, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 
    0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7b, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 
    0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x3, 
    0x7c, 0x3, 0x7c, 0x3, 0x7c, 0x5, 0x7c, 0x639, 0xa, 0x7c, 0x3, 0x7d, 
    0x3, 0x7d, 0x3, 0x7d, 0x3, 0x7d, 0x5, 0x7d, 0x63f, 0xa, 0x7d, 0x3, 0x7e, 
    0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 0x7e, 0x3, 
    0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 
    0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 
    0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 0x3, 0x7f, 
    0x3, 0x7f, 0x3, 0x7f, 0x5, 0x7f, 0x65e, 0xa, 0x7f, 0x3, 0x80, 0x3, 0x80, 
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x5, 0x80, 0x666, 0xa, 0x80, 
    0x3, 0x81, 0x3, 0x81, 0x3, 0x81, 0x3, 0x82, 0x3, 0x82, 0x5, 0x82, 0x66d, 
    0xa, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x82, 0x3, 0x83, 0x3, 0x83, 0x5, 
    0x83, 0x674, 0xa, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x83, 0x3, 0x84, 
    0x3, 0x84, 0x5, 0x84, 0x67b, 0xa, 0x84, 0x3, 0x84, 0x5, 0x84, 0x67e, 
    0xa, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 
    0x84, 0x3, 0x84, 0x3, 0x84, 0x3, 0x84, 0x5, 0x84, 0x689, 0xa, 0x84, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 
    0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 0x85, 0x3, 
    0x85, 0x5, 0x85, 0x69f, 0xa, 0x85, 0x3, 0x86, 0x3, 0x86, 0x3, 0x86, 
    0x3, 0x86, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 0x87, 0x3, 
    0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 
    0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x88, 0x3, 0x89, 0x3, 0x89, 0x3, 
    0x89, 0x3, 0x89, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 
    0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8a, 0x3, 0x8b, 0x3, 0x8b, 0x3, 0x8b, 0x3, 
    0x8b, 0x3, 0x8b, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8c, 
    0x3, 0x8c, 0x3, 0x8c, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 0x8d, 0x3, 
    0x8d, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8e, 0x3, 0x8f, 
    0x3, 0x8f, 0x3, 0x8f, 0x3, 0x8f, 0x3, 0x90, 0x3, 0x90, 0x3, 0x90, 0x3, 
    0x90, 0x3, 0x90, 0x5, 0x90, 0x6e0, 0xa, 0x90, 0x3, 0x90, 0x3, 0x90, 
    0x3, 0x90, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x5, 0x91, 0x6e9, 
    0xa, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x91, 0x3, 0x92, 0x3, 0x92, 0x3, 
    0x92, 0x3, 0x92, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x93, 0x3, 0x94, 
    0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 
    0x94, 0x3, 0x94, 0x3, 0x94, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 
    0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 0x95, 0x3, 
    0x96, 0x3, 0x96, 0x3, 0x96, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 0x3, 0x97, 
    0x3, 0x97, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 0x98, 0x3, 
    0x98, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 0x7, 0x99, 0x71b, 0xa, 0x99, 
    0xc, 0x99, 0xe, 0x99, 0x71e, 0xb, 0x99, 0x3, 0x99, 0x3, 0x99, 0x3, 0x99, 
    0x5, 0x99, 0x723, 0xa, 0x99, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9a, 
    0x3, 0x9a, 0x3, 0x9a, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 0x9b, 0x3, 
    0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9c, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 
    0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9d, 0x3, 0x9e, 0x3, 0x9e, 0x3, 
    0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9e, 0x3, 0x9f, 0x3, 0x9f, 
    0x3, 0x9f, 0x3, 0x9f, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 0xa0, 0x3, 
    0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
    0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 
    0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
    0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 
    0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 0x3, 0xa1, 
    0x3, 0xa1, 0x5, 0xa1, 0x76b, 0xa, 0xa1, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 
    0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 0x775, 
    0xa, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 
    0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x3, 0xa2, 0x5, 0xa2, 
    0x782, 0xa, 0xa2, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 
    0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 0xa3, 0x3, 
    0xa3, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
    0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 
    0xa4, 0x3, 0xa4, 0x5, 0xa4, 0x79e, 0xa, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
    0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 
    0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 0x3, 0xa4, 
    0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 
    0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa5, 
    0x3, 0xa5, 0x3, 0xa5, 0x3, 0xa6, 0x3, 0xa6, 0x3, 0xa6, 0x5, 0xa6, 0x7c1, 
    0xa, 0xa6, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 0xa7, 0x3, 
    0xa7, 0x3, 0xa7, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 
    0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa8, 0x3, 0xa9, 0x3, 
    0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 
    0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 0xa9, 0x3, 
    0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xaa, 0x3, 0xab, 
    0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 0xab, 0x3, 
    0xab, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 0x3, 0xac, 
    0x3, 0xac, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 0xad, 0x3, 
    0xad, 0x3, 0xad, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 0x3, 0xae, 
    0x3, 0xae, 0x3, 0xae, 0x5, 0xae, 0x805, 0xa, 0xae, 0x3, 0xaf, 0x3, 0xaf, 
    0x3, 0xb0, 0x3, 0xb0, 0x3, 0xb1, 0x3, 0xb1, 0x3, 0xb2, 0x3, 0xb2, 0x3, 
    0xb3, 0x3, 0xb3, 0x3, 0xb3, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 
    0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb4, 0x3, 0xb5, 0x3, 0xb5, 0x3, 
    0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb5, 0x3, 0xb6, 
    0x3, 0xb6, 0x3, 0xb6, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x827, 0xa, 0xb7, 
    0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x5, 0xb7, 0x82e, 
    0xa, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 0xb7, 0x3, 
    0xb7, 0x3, 0xb7, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x3, 0xb8, 0x5, 0xb8, 
    0x83b, 0xa, 0xb8, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 0x3, 0xb9, 
    0x5, 0xb9, 0x842, 0xa, 0xb9, 0x3, 0xba, 0x3, 0xba, 0x5, 0xba, 0x846, 
    0xa, 0xba, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 
    0xbb, 0x3, 0xbb, 0x3, 0xbb, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 
    0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x3, 0xbc, 0x7, 0xbc, 0x858, 0xa, 0xbc, 
    0xc, 0xbc, 0xe, 0xbc, 0x85b, 0xb, 0xbc, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
    0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
    0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
    0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 
    0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 
    0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x3, 0xbd, 0x5, 0xbd, 0x87f, 
    0xa, 0xbd, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
    0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
    0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
    0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
    0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 
    0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 0x3, 0xbe, 
    0x3, 0xbe, 0x3, 0xbe, 0x5, 0xbe, 0x8a9, 0xa, 0xbe, 0x3, 0xbf, 0x3, 0xbf, 
    0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 0xbf, 0x3, 
    0xbf, 0x3, 0xbf, 0x5, 0xbf, 0x8b5, 0xa, 0xbf, 0x3, 0xc0, 0x3, 0xc0, 
    0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0, 0x5, 0xc0, 0x8bd, 0xa, 0xc0, 
    0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 0xc1, 0x3, 
    0xc1, 0x5, 0xc1, 0x8c6, 0xa, 0xc1, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 
    0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 
    0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 
    0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x3, 0xc2, 0x5, 
    0xc2, 0x8de, 0xa, 0xc2, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 
    0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 0xc3, 0x3, 
    0xc3, 0x5, 0xc3, 0x8eb, 0xa, 0xc3, 0x3, 0xc4, 0x3, 0xc4, 0x3, 0xc4, 
    0x3, 0xc4, 0x5, 0xc4, 0x8f1, 0xa, 0xc4, 0x3, 0xc5, 0x3, 0xc5, 0x3, 0xc5, 
    0x3, 0xc5, 0x3, 0xc5, 0x6, 0xc5, 0x8f8, 0xa, 0xc5, 0xd, 0xc5, 0xe, 0xc5, 
    0x8f9, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x3, 0xc6, 0x6, 0xc6, 
    0x901, 0xa, 0xc6, 0xd, 0xc6, 0xe, 0xc6, 0x902, 0x3, 0xc7, 0x3, 0xc7, 
    0x3, 0xc7, 0x3, 0xc7, 0x3, 0xc7, 0x6, 0xc7, 0x90a, 0xa, 0xc7, 0xd, 0xc7, 
    0xe, 0xc7, 0x90b, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 
    0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x3, 0xc8, 0x5, 0xc8, 0x917, 0xa, 0xc8, 
    0x3, 0xc9, 0x6, 0xc9, 0x91a, 0xa, 0xc9, 0xd, 0xc9, 0xe, 0xc9, 0x91b, 
    0x3, 0xc9, 0x3, 0xc9, 0x3, 0xc9, 0x2, 0x3, 0x176, 0xca, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
    0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
    0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
    0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 
    0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 
    0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0xd8, 0xda, 0xdc, 0xde, 
    0xe0, 0xe2, 0xe4, 0xe6, 0xe8, 0xea, 0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 
    0xf8, 0xfa, 0xfc, 0xfe, 0x100, 0x102, 0x104, 0x106, 0x108, 0x10a, 0x10c, 
    0x10e, 0x110, 0x112, 0x114, 0x116, 0x118, 0x11a, 0x11c, 0x11e, 0x120, 
    0x122, 0x124, 0x126, 0x128, 0x12a, 0x12c, 0x12e, 0x130, 0x132, 0x134, 
    0x136, 0x138, 0x13a, 0x13c, 0x13e, 0x140, 0x142, 0x144, 0x146, 0x148, 
    0x14a, 0x14c, 0x14e, 0x150, 0x152, 0x154, 0x156, 0x158, 0x15a, 0x15c, 
    0x15e, 0x160, 0x162, 0x164, 0x166, 0x168, 0x16a, 0x16c, 0x16e, 0x170, 
    0x172, 0x174, 0x176, 0x178, 0x17a, 0x17c, 0x17e, 0x180, 0x182, 0x184, 
    0x186, 0x188, 0x18a, 0x18c, 0x18e, 0x190, 0x2, 0xb, 0x5, 0x2, 0x5, 0x5, 
    0x24, 0x24, 0xab, 0xab, 0x5, 0x2, 0xc, 0xc, 0x17, 0x17, 0x27, 0x27, 
    0x5, 0x2, 0x1b, 0x1b, 0x30, 0x30, 0x96, 0x96, 0x4, 0x2, 0x5d, 0x5e, 
    0xa8, 0xa8, 0x4, 0x2, 0x11, 0x11, 0x46, 0x46, 0x4, 0x2, 0x1b, 0x1b, 
    0x30, 0x30, 0x4, 0x2, 0x5a, 0x5a, 0x7e, 0x7e, 0x5, 0x2, 0x14, 0x14, 
    0xbd, 0xbd, 0xc2, 0xc2, 0x4, 0x2, 0xbe, 0xbe, 0xc3, 0xc3, 0x2, 0x990, 
    0x2, 0x197, 0x3, 0x2, 0x2, 0x2, 0x4, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x6, 
    0x19e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0xa, 0x1a4, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0xe, 0x1ae, 0x3, 
    0x2, 0x2, 0x2, 0x10, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x12, 0x1b8, 0x3, 0x2, 
    0x2, 0x2, 0x14, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x16, 0x1bd, 0x3, 0x2, 0x2, 
    0x2, 0x18, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1c4, 0x3, 0x2, 0x2, 0x2, 
    0x1c, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x1dc, 0x3, 0x2, 0x2, 0x2, 0x22, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x24, 0x1e5, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1f3, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x20c, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x211, 0x3, 0x2, 0x2, 0x2, 0x30, 0x213, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x215, 0x3, 0x2, 0x2, 0x2, 0x34, 0x218, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x38, 0x221, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x226, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x231, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x233, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x236, 0x3, 0x2, 0x2, 0x2, 0x42, 0x23f, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x243, 0x3, 0x2, 0x2, 0x2, 0x46, 0x247, 0x3, 0x2, 
    0x2, 0x2, 0x48, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x24d, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x257, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x268, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x52, 0x277, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x279, 0x3, 0x2, 0x2, 0x2, 0x56, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x28c, 
    0x3, 0x2, 0x2, 0x2, 0x5a, 0x290, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x299, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x29f, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x64, 0x2ad, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x68, 0x2ba, 0x3, 0x2, 0x2, 0x2, 
    0x6a, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x2d8, 0x3, 0x2, 0x2, 0x2, 0x70, 0x2da, 0x3, 0x2, 0x2, 0x2, 0x72, 0x2e1, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x76, 0x2ef, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x2f7, 0x3, 0x2, 
    0x2, 0x2, 0x7c, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x302, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x307, 0x3, 0x2, 0x2, 0x2, 0x82, 0x30f, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x317, 0x3, 0x2, 0x2, 0x2, 0x86, 0x31f, 0x3, 0x2, 0x2, 0x2, 0x88, 
    0x348, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x34a, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x34e, 
    0x3, 0x2, 0x2, 0x2, 0x8e, 0x35d, 0x3, 0x2, 0x2, 0x2, 0x90, 0x364, 0x3, 
    0x2, 0x2, 0x2, 0x92, 0x3a0, 0x3, 0x2, 0x2, 0x2, 0x94, 0x3a2, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x3b2, 0x3, 0x2, 0x2, 0x2, 0x98, 0x3b5, 0x3, 0x2, 0x2, 
    0x2, 0x9a, 0x3cc, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x3f6, 0x3, 0x2, 0x2, 0x2, 
    0x9e, 0x400, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x402, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0x406, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x40b, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x411, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0x417, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x423, 0x3, 
    0x2, 0x2, 0x2, 0xac, 0x428, 0x3, 0x2, 0x2, 0x2, 0xae, 0x435, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0x471, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x482, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0x484, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x495, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0x497, 0x3, 0x2, 0x2, 0x2, 0xba, 0x4d8, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0x4f4, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x50c, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x50e, 
    0x3, 0x2, 0x2, 0x2, 0xc2, 0x510, 0x3, 0x2, 0x2, 0x2, 0xc4, 0x512, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0x517, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x51c, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0x520, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x539, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0x547, 0x3, 0x2, 0x2, 0x2, 0xd0, 0x552, 0x3, 0x2, 0x2, 0x2, 
    0xd2, 0x558, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x567, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0x57f, 0x3, 0x2, 0x2, 0x2, 0xd8, 0x581, 0x3, 0x2, 0x2, 0x2, 0xda, 0x58a, 
    0x3, 0x2, 0x2, 0x2, 0xdc, 0x59d, 0x3, 0x2, 0x2, 0x2, 0xde, 0x59f, 0x3, 
    0x2, 0x2, 0x2, 0xe0, 0x5a8, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x5b0, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0x5b6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0x5e7, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0x5e9, 0x3, 0x2, 0x2, 0x2, 0xea, 0x5fa, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0x60d, 0x3, 0x2, 0x2, 0x2, 0xee, 0x60f, 0x3, 0x2, 0x2, 0x2, 0xf0, 
    0x61d, 0x3, 0x2, 0x2, 0x2, 0xf2, 0x61f, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x625, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0x638, 0x3, 0x2, 0x2, 0x2, 0xf8, 0x63e, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0x640, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x65d, 0x3, 0x2, 
    0x2, 0x2, 0xfe, 0x665, 0x3, 0x2, 0x2, 0x2, 0x100, 0x667, 0x3, 0x2, 0x2, 
    0x2, 0x102, 0x66a, 0x3, 0x2, 0x2, 0x2, 0x104, 0x671, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0x688, 0x3, 0x2, 0x2, 0x2, 0x108, 0x69e, 0x3, 0x2, 0x2, 
    0x2, 0x10a, 0x6a0, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x6a4, 0x3, 0x2, 0x2, 
    0x2, 0x10e, 0x6a9, 0x3, 0x2, 0x2, 0x2, 0x110, 0x6b4, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x6b8, 0x3, 0x2, 0x2, 0x2, 0x114, 0x6c0, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x6c5, 0x3, 0x2, 0x2, 0x2, 0x118, 0x6cc, 0x3, 0x2, 0x2, 
    0x2, 0x11a, 0x6d1, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x6d6, 0x3, 0x2, 0x2, 
    0x2, 0x11e, 0x6da, 0x3, 0x2, 0x2, 0x2, 0x120, 0x6e4, 0x3, 0x2, 0x2, 
    0x2, 0x122, 0x6ed, 0x3, 0x2, 0x2, 0x2, 0x124, 0x6f1, 0x3, 0x2, 0x2, 
    0x2, 0x126, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x128, 0x6ff, 0x3, 0x2, 0x2, 
    0x2, 0x12a, 0x709, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x70c, 0x3, 0x2, 0x2, 
    0x2, 0x12e, 0x711, 0x3, 0x2, 0x2, 0x2, 0x130, 0x717, 0x3, 0x2, 0x2, 
    0x2, 0x132, 0x724, 0x3, 0x2, 0x2, 0x2, 0x134, 0x72a, 0x3, 0x2, 0x2, 
    0x2, 0x136, 0x72e, 0x3, 0x2, 0x2, 0x2, 0x138, 0x732, 0x3, 0x2, 0x2, 
    0x2, 0x13a, 0x739, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x740, 0x3, 0x2, 0x2, 
    0x2, 0x13e, 0x744, 0x3, 0x2, 0x2, 0x2, 0x140, 0x76a, 0x3, 0x2, 0x2, 
    0x2, 0x142, 0x781, 0x3, 0x2, 0x2, 0x2, 0x144, 0x783, 0x3, 0x2, 0x2, 
    0x2, 0x146, 0x78f, 0x3, 0x2, 0x2, 0x2, 0x148, 0x7ae, 0x3, 0x2, 0x2, 
    0x2, 0x14a, 0x7c0, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x7c2, 0x3, 0x2, 0x2, 
    0x2, 0x14e, 0x7c9, 0x3, 0x2, 0x2, 0x2, 0x150, 0x7d3, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x7e1, 0x3, 0x2, 0x2, 0x2, 0x154, 0x7e7, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x7ef, 0x3, 0x2, 0x2, 0x2, 0x158, 0x7f6, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x804, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x806, 0x3, 0x2, 0x2, 
    0x2, 0x15e, 0x808, 0x3, 0x2, 0x2, 0x2, 0x160, 0x80a, 0x3, 0x2, 0x2, 
    0x2, 0x162, 0x80c, 0x3, 0x2, 0x2, 0x2, 0x164, 0x80e, 0x3, 0x2, 0x2, 
    0x2, 0x166, 0x811, 0x3, 0x2, 0x2, 0x2, 0x168, 0x819, 0x3, 0x2, 0x2, 
    0x2, 0x16a, 0x821, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x824, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x83a, 0x3, 0x2, 0x2, 0x2, 0x170, 0x841, 0x3, 0x2, 0x2, 
    0x2, 0x172, 0x845, 0x3, 0x2, 0x2, 0x2, 0x174, 0x847, 0x3, 0x2, 0x2, 
    0x2, 0x176, 0x84f, 0x3, 0x2, 0x2, 0x2, 0x178, 0x87e, 0x3, 0x2, 0x2, 
    0x2, 0x17a, 0x8a8, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x8b4, 0x3, 0x2, 0x2, 
    0x2, 0x17e, 0x8bc, 0x3, 0x2, 0x2, 0x2, 0x180, 0x8c5, 0x3, 0x2, 0x2, 
    0x2, 0x182, 0x8dd, 0x3, 0x2, 0x2, 0x2, 0x184, 0x8ea, 0x3, 0x2, 0x2, 
    0x2, 0x186, 0x8f0, 0x3, 0x2, 0x2, 0x2, 0x188, 0x8f2, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x8fb, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x904, 0x3, 0x2, 0x2, 
    0x2, 0x18e, 0x916, 0x3, 0x2, 0x2, 0x2, 0x190, 0x919, 0x3, 0x2, 0x2, 
    0x2, 0x192, 0x198, 0x7, 0x6, 0x2, 0x2, 0x193, 0x198, 0x7, 0x43, 0x2, 
    0x2, 0x194, 0x195, 0x7, 0xa, 0x2, 0x2, 0x195, 0x196, 0x7, 0x1f, 0x2, 
    0x2, 0x196, 0x198, 0x7, 0x6d, 0x2, 0x2, 0x197, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x197, 0x193, 0x3, 0x2, 0x2, 0x2, 0x197, 0x194, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x7, 0x7, 0x2, 
    0x2, 0x19a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x7, 0x1c, 0x2, 0x2, 
    0x19c, 0x19d, 0x7, 0x7, 0x2, 0x2, 0x19d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x19e, 
    0x19f, 0x7, 0x1c, 0x2, 0x2, 0x19f, 0x1a0, 0x5, 0x7e, 0x40, 0x2, 0x1a0, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x7, 0x6, 0x2, 0x2, 0x1a2, 0x1a3, 
    0x5, 0x7e, 0x40, 0x2, 0x1a3, 0x9, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 
    0x7, 0x13, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x2e, 0x18, 0x2, 0x1a6, 0x1a7, 
    0x7, 0x18, 0x2, 0x2, 0x1a7, 0xb, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 
    0x91, 0x2, 0x2, 0x1a9, 0x1aa, 0x7, 0x92, 0x2, 0x2, 0x1aa, 0x1ab, 0x5, 
    0x16e, 0xb8, 0x2, 0x1ab, 0x1ac, 0x7, 0xb, 0x2, 0x2, 0x1ac, 0x1ad, 0x7, 
    0x25, 0x2, 0x2, 0x1ad, 0xd, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x7, 0x91, 
    0x2, 0x2, 0x1af, 0x1b0, 0x7, 0x92, 0x2, 0x2, 0x1b0, 0x1b1, 0x5, 0x16e, 
    0xb8, 0x2, 0x1b1, 0x1b2, 0x7, 0xb, 0x2, 0x2, 0x1b2, 0x1b3, 0x7, 0x25, 
    0x2, 0x2, 0x1b3, 0x1b4, 0x7, 0x26, 0x2, 0x2, 0x1b4, 0x1b5, 0x5, 0x7e, 
    0x40, 0x2, 0x1b5, 0xf, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b7, 0x9, 0x2, 0x2, 
    0x2, 0x1b7, 0x11, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x23, 0x2, 
    0x2, 0x1b9, 0x13, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x28, 0x2, 
    0x2, 0x1bb, 0x1bc, 0x7, 0x19, 0x2, 0x2, 0x1bc, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x1bd, 0x1be, 0x7, 0x48, 0x2, 0x2, 0x1be, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x1bf, 0x1c0, 0x7, 0x47, 0x2, 0x2, 0x1c0, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x1c1, 0x1c5, 0x5, 0x12, 0xa, 0x2, 0x1c2, 0x1c5, 0x5, 0x16, 0xc, 
    0x2, 0x1c3, 0x1c5, 0x5, 0x18, 0xd, 0x2, 0x1c4, 0x1c1, 0x3, 0x2, 0x2, 
    0x2, 0x1c4, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c3, 0x3, 0x2, 0x2, 
    0x2, 0x1c5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1ce, 0x5, 0x2, 0x2, 0x2, 
    0x1c7, 0x1ce, 0x5, 0x4, 0x3, 0x2, 0x1c8, 0x1ce, 0x5, 0x6, 0x4, 0x2, 
    0x1c9, 0x1ce, 0x5, 0x8, 0x5, 0x2, 0x1ca, 0x1ce, 0x5, 0xa, 0x6, 0x2, 
    0x1cb, 0x1ce, 0x5, 0xc, 0x7, 0x2, 0x1cc, 0x1ce, 0x5, 0xe, 0x8, 0x2, 
    0x1cd, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1c7, 0x3, 0x2, 0x2, 0x2, 
    0x1cd, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1c9, 0x3, 0x2, 0x2, 0x2, 
    0x1cd, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cb, 0x3, 0x2, 0x2, 0x2, 
    0x1cd, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1cf, 
    0x1d1, 0x5, 0x1a, 0xe, 0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 
    0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d4, 
    0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d9, 0x5, 0x10, 0x9, 0x2, 0x1d6, 
    0x1d8, 0x5, 0x1c, 0xf, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d8, 
    0x1db, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1d9, 
    0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x9, 0x3, 0x2, 0x2, 0x1dd, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x1de, 0x1e4, 0x7, 0x8, 0x2, 0x2, 0x1df, 0x1e4, 0x7, 
    0x2c, 0x2, 0x2, 0x1e0, 0x1e1, 0x7, 0xa, 0x2, 0x2, 0x1e1, 0x1e4, 0x5, 
    0x10, 0x9, 0x2, 0x1e2, 0x1e4, 0x7, 0x35, 0x2, 0x2, 0x1e3, 0x1de, 0x3, 
    0x2, 0x2, 0x2, 0x1e3, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e0, 0x3, 
    0x2, 0x2, 0x2, 0x1e3, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x3c, 0x2, 0x2, 0x1e6, 0x1e7, 0x7, 0x61, 
    0x2, 0x2, 0x1e7, 0x25, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x5, 0x56, 
    0x2c, 0x2, 0x1e9, 0x1ea, 0x7, 0xf, 0x2, 0x2, 0x1ea, 0x1ee, 0x3, 0x2, 
    0x2, 0x2, 0x1eb, 0x1ec, 0x7, 0x3c, 0x2, 0x2, 0x1ec, 0x1ee, 0x7, 0xf, 
    0x2, 0x2, 0x1ed, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1eb, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x27, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f4, 0x5, 0x22, 
    0x12, 0x2, 0x1f0, 0x1f4, 0x5, 0x20, 0x11, 0x2, 0x1f1, 0x1f4, 0x5, 0x24, 
    0x13, 0x2, 0x1f2, 0x1f4, 0x5, 0x26, 0x14, 0x2, 0x1f3, 0x1ef, 0x3, 0x2, 
    0x2, 0x2, 0x1f3, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f1, 0x3, 0x2, 
    0x2, 0x2, 0x1f3, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x1f5, 0x1f7, 0x5, 0x14, 0xb, 0x2, 0x1f6, 0x1f5, 0x3, 0x2, 0x2, 
    0x2, 0x1f6, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f9, 0x3, 0x2, 0x2, 
    0x2, 0x1f8, 0x1fa, 0x5, 0x16e, 0xb8, 0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 
    0x2, 0x1f9, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fc, 0x3, 0x2, 0x2, 
    0x2, 0x1fb, 0x1fd, 0x5, 0x12, 0xa, 0x2, 0x1fc, 0x1fb, 0x3, 0x2, 0x2, 
    0x2, 0x1fc, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1ff, 0x3, 0x2, 0x2, 
    0x2, 0x1fe, 0x200, 0x7, 0x4, 0x2, 0x2, 0x1ff, 0x1fe, 0x3, 0x2, 0x2, 
    0x2, 0x1ff, 0x200, 0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x3, 0x2, 0x2, 
    0x2, 0x201, 0x202, 0x5, 0x1e, 0x10, 0x2, 0x202, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x203, 0x205, 0x9, 0x4, 0x2, 0x2, 0x204, 0x206, 0x7, 0xbc, 0x2, 
    0x2, 0x205, 0x204, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 0x2, 
    0x2, 0x206, 0x207, 0x3, 0x2, 0x2, 0x2, 0x207, 0x20d, 0x5, 0x1e, 0x10, 
    0x2, 0x208, 0x209, 0x7, 0xc, 0x2, 0x2, 0x209, 0x20a, 0x7, 0x45, 0x2, 
    0x2, 0x20a, 0x20b, 0x7, 0x23, 0x2, 0x2, 0x20b, 0x20d, 0x7, 0x24, 0x2, 
    0x2, 0x20c, 0x203, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x208, 0x3, 0x2, 0x2, 
    0x2, 0x20d, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x212, 0x5, 0x2a, 0x16, 
    0x2, 0x20f, 0x212, 0x5, 0x28, 0x15, 0x2, 0x210, 0x212, 0x5, 0x2c, 0x17, 
    0x2, 0x211, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 0x2f, 0x3, 0x2, 0x2, 0x2, 
    0x213, 0x214, 0x7, 0x5, 0x2, 0x2, 0x214, 0x31, 0x3, 0x2, 0x2, 0x2, 0x215, 
    0x216, 0x7, 0x2f, 0x2, 0x2, 0x216, 0x33, 0x3, 0x2, 0x2, 0x2, 0x217, 
    0x219, 0x7, 0x49, 0x2, 0x2, 0x218, 0x217, 0x3, 0x2, 0x2, 0x2, 0x218, 
    0x219, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 0x2, 0x2, 0x21a, 
    0x21b, 0x7, 0x4b, 0x2, 0x2, 0x21b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x21c, 
    0x21e, 0x7, 0x49, 0x2, 0x2, 0x21d, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21d, 
    0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x21f, 
    0x220, 0x7, 0x4a, 0x2, 0x2, 0x220, 0x37, 0x3, 0x2, 0x2, 0x2, 0x221, 
    0x222, 0x7, 0x85, 0x2, 0x2, 0x222, 0x39, 0x3, 0x2, 0x2, 0x2, 0x223, 
    0x227, 0x3, 0x2, 0x2, 0x2, 0x224, 0x227, 0x7, 0xe, 0x2, 0x2, 0x225, 
    0x227, 0x5, 0x28, 0x15, 0x2, 0x226, 0x223, 0x3, 0x2, 0x2, 0x2, 0x226, 
    0x224, 0x3, 0x2, 0x2, 0x2, 0x226, 0x225, 0x3, 0x2, 0x2, 0x2, 0x227, 
    0x228, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x9, 0x5, 0x2, 0x2, 0x229, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x232, 0x5, 0x30, 0x19, 0x2, 0x22b, 
    0x232, 0x5, 0x32, 0x1a, 0x2, 0x22c, 0x232, 0x5, 0x34, 0x1b, 0x2, 0x22d, 
    0x232, 0x5, 0x36, 0x1c, 0x2, 0x22e, 0x232, 0x5, 0x38, 0x1d, 0x2, 0x22f, 
    0x232, 0x5, 0x12, 0xa, 0x2, 0x230, 0x232, 0x5, 0x3a, 0x1e, 0x2, 0x231, 
    0x22a, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x231, 
    0x22c, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x231, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 
    0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 
    0x7, 0x3f, 0x2, 0x2, 0x234, 0x235, 0x5, 0x7e, 0x40, 0x2, 0x235, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x43, 0x2, 0x2, 0x237, 0x238, 
    0x7, 0x14, 0x2, 0x2, 0x238, 0x239, 0x7, 0x3e, 0x2, 0x2, 0x239, 0x23a, 
    0x7, 0x44, 0x2, 0x2, 0x23a, 0x23b, 0x7, 0x13, 0x2, 0x2, 0x23b, 0x23c, 
    0x5, 0x16e, 0xb8, 0x2, 0x23c, 0x23d, 0x7, 0x45, 0x2, 0x2, 0x23d, 0x23e, 
    0x9, 0x6, 0x2, 0x2, 0x23e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x23f, 0x240, 0x7, 
    0x2f, 0x2, 0x2, 0x240, 0x241, 0x7, 0x19, 0x2, 0x2, 0x241, 0x242, 0x5, 
    0x7e, 0x40, 0x2, 0x242, 0x43, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x7, 
    0x47, 0x2, 0x2, 0x244, 0x245, 0x7, 0x21, 0x2, 0x2, 0x245, 0x246, 0x5, 
    0x2e, 0x18, 0x2, 0x246, 0x45, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x7, 
    0x43, 0x2, 0x2, 0x248, 0x249, 0x7, 0x8c, 0x2, 0x2, 0x249, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x43, 0x2, 0x2, 0x24b, 0x24c, 0x7, 
    0x73, 0x2, 0x2, 0x24c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x24e, 0x7, 
    0x26, 0x2, 0x2, 0x24e, 0x24f, 0x7, 0x17, 0x2, 0x2, 0x24f, 0x250, 0x7, 
    0x62, 0x2, 0x2, 0x250, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x7, 
    0x76, 0x2, 0x2, 0x252, 0x258, 0x7, 0x55, 0x2, 0x2, 0x253, 0x254, 0x7, 
    0xa9, 0x2, 0x2, 0x254, 0x255, 0x5, 0x28, 0x15, 0x2, 0x255, 0x256, 0x7, 
    0x55, 0x2, 0x2, 0x256, 0x258, 0x3, 0x2, 0x2, 0x2, 0x257, 0x251, 0x3, 
    0x2, 0x2, 0x2, 0x257, 0x253, 0x3, 0x2, 0x2, 0x2, 0x258, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x259, 0x269, 0x5, 0x3e, 0x20, 0x2, 0x25a, 0x269, 0x5, 0x40, 
    0x21, 0x2, 0x25b, 0x269, 0x5, 0x42, 0x22, 0x2, 0x25c, 0x269, 0x5, 0x44, 
    0x23, 0x2, 0x25d, 0x269, 0x5, 0x46, 0x24, 0x2, 0x25e, 0x269, 0x5, 0x48, 
    0x25, 0x2, 0x25f, 0x269, 0x5, 0x4a, 0x26, 0x2, 0x260, 0x269, 0x5, 0x4c, 
    0x27, 0x2, 0x261, 0x269, 0x5, 0x2, 0x2, 0x2, 0x262, 0x269, 0x5, 0x4, 
    0x3, 0x2, 0x263, 0x269, 0x5, 0x6, 0x4, 0x2, 0x264, 0x269, 0x5, 0x8, 
    0x5, 0x2, 0x265, 0x269, 0x5, 0xa, 0x6, 0x2, 0x266, 0x269, 0x5, 0xc, 
    0x7, 0x2, 0x267, 0x269, 0x5, 0xe, 0x8, 0x2, 0x268, 0x259, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x268, 0x25b, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x268, 0x25d, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x268, 0x25f, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x260, 0x3, 0x2, 0x2, 0x2, 0x268, 0x261, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x262, 0x3, 0x2, 0x2, 0x2, 0x268, 0x263, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x264, 0x3, 0x2, 0x2, 0x2, 0x268, 0x265, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 0x267, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26c, 0x5, 0x3c, 
    0x1f, 0x2, 0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26f, 0x3, 0x2, 
    0x2, 0x2, 0x26d, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x3, 0x2, 
    0x2, 0x2, 0x26e, 0x270, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x26d, 0x3, 0x2, 
    0x2, 0x2, 0x270, 0x274, 0x7, 0x2e, 0x2, 0x2, 0x271, 0x273, 0x5, 0x4e, 
    0x28, 0x2, 0x272, 0x271, 0x3, 0x2, 0x2, 0x2, 0x273, 0x276, 0x3, 0x2, 
    0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 
    0x2, 0x2, 0x275, 0x51, 0x3, 0x2, 0x2, 0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 
    0x2, 0x277, 0x278, 0x7, 0xc0, 0x2, 0x2, 0x278, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x279, 0x27a, 0x7, 0xe, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x65, 0x2, 
    0x2, 0x27b, 0x27c, 0x7, 0x2e, 0x2, 0x2, 0x27c, 0x27d, 0x7, 0x13, 0x2, 
    0x2, 0x27d, 0x27e, 0x5, 0x2e, 0x18, 0x2, 0x27e, 0x27f, 0x7, 0x66, 0x2, 
    0x2, 0x27f, 0x55, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x7, 0xa, 0x2, 0x2, 
    0x281, 0x28b, 0x7, 0x2e, 0x2, 0x2, 0x282, 0x283, 0x7, 0xe, 0x2, 0x2, 
    0x283, 0x28b, 0x7, 0x2e, 0x2, 0x2, 0x284, 0x28b, 0x7, 0x3c, 0x2, 0x2, 
    0x285, 0x28b, 0x7, 0xcf, 0x2, 0x2, 0x286, 0x287, 0x7, 0xcf, 0x2, 0x2, 
    0x287, 0x288, 0x7, 0x26, 0x2, 0x2, 0x288, 0x289, 0x7, 0x17, 0x2, 0x2, 
    0x289, 0x28b, 0x7, 0x62, 0x2, 0x2, 0x28a, 0x280, 0x3, 0x2, 0x2, 0x2, 
    0x28a, 0x282, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x284, 0x3, 0x2, 0x2, 0x2, 
    0x28a, 0x285, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x286, 0x3, 0x2, 0x2, 0x2, 
    0x28b, 0x57, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28d, 0x7, 0x4, 0x2, 0x2, 0x28d, 
    0x28e, 0x5, 0x50, 0x29, 0x2, 0x28e, 0x59, 0x3, 0x2, 0x2, 0x2, 0x28f, 
    0x291, 0x7, 0x14, 0x2, 0x2, 0x290, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x290, 
    0x291, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 0x2, 0x2, 0x292, 
    0x293, 0x5, 0x50, 0x29, 0x2, 0x293, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x294, 
    0x29a, 0x5, 0x52, 0x2a, 0x2, 0x295, 0x29a, 0x5, 0x58, 0x2d, 0x2, 0x296, 
    0x29a, 0x5, 0x54, 0x2b, 0x2, 0x297, 0x29a, 0x5, 0x56, 0x2c, 0x2, 0x298, 
    0x29a, 0x5, 0x5a, 0x2e, 0x2, 0x299, 0x294, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x295, 0x3, 0x2, 0x2, 0x2, 0x299, 0x296, 0x3, 0x2, 0x2, 0x2, 0x299, 
    0x297, 0x3, 0x2, 0x2, 0x2, 0x299, 0x298, 0x3, 0x2, 0x2, 0x2, 0x29a, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x7, 0x30, 0x2, 0x2, 0x29c, 
    0x29d, 0x5, 0x50, 0x29, 0x2, 0x29d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x29e, 
    0x2a0, 0x5, 0x14, 0xb, 0x2, 0x29f, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x29f, 
    0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a1, 
    0x2a3, 0x5, 0x16e, 0xb8, 0x2, 0x2a2, 0x2a4, 0x7, 0x4, 0x2, 0x2, 0x2a3, 
    0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a4, 
    0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x5, 0x50, 0x29, 0x2, 0x2a6, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2ab, 0x5, 0x5c, 0x2f, 0x2, 0x2a8, 
    0x2ab, 0x5, 0x5e, 0x30, 0x2, 0x2a9, 0x2ab, 0x5, 0x60, 0x31, 0x2, 0x2aa, 
    0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2aa, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
    0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x63, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ae, 
    0x7, 0x49, 0x2, 0x2, 0x2ad, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 
    0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2b0, 
    0x7, 0x52, 0x2, 0x2, 0x2b0, 0x65, 0x3, 0x2, 0x2, 0x2, 0x2b1, 0x2b2, 
    0x5, 0x64, 0x33, 0x2, 0x2b2, 0x67, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2bb, 
    0x5, 0x2, 0x2, 0x2, 0x2b4, 0x2bb, 0x5, 0x4, 0x3, 0x2, 0x2b5, 0x2bb, 
    0x5, 0x6, 0x4, 0x2, 0x2b6, 0x2bb, 0x5, 0x8, 0x5, 0x2, 0x2b7, 0x2bb, 
    0x5, 0xa, 0x6, 0x2, 0x2b8, 0x2bb, 0x5, 0xc, 0x7, 0x2, 0x2b9, 0x2bb, 
    0x5, 0xe, 0x8, 0x2, 0x2ba, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b4, 
    0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b6, 
    0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b8, 
    0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x2bc, 0x2be, 0x5, 0x66, 0x34, 0x2, 0x2bd, 0x2bc, 0x3, 
    0x2, 0x2, 0x2, 0x2be, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2bf, 0x2bd, 0x3, 
    0x2, 0x2, 0x2, 0x2bf, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c2, 0x3, 
    0x2, 0x2, 0x2, 0x2c1, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c6, 0x7, 
    0xb, 0x2, 0x2, 0x2c3, 0x2c5, 0x5, 0x68, 0x35, 0x2, 0x2c4, 0x2c3, 0x3, 
    0x2, 0x2, 0x2, 0x2c5, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x2c4, 0x3, 
    0x2, 0x2, 0x2, 0x2c6, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x2c8, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2cb, 0x7, 0x23, 
    0x2, 0x2, 0x2ca, 0x2c9, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 0x3, 0x2, 
    0x2, 0x2, 0x2cb, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2ce, 0x5, 0x16e, 
    0xb8, 0x2, 0x2cd, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2cd, 0x2ce, 0x3, 0x2, 
    0x2, 0x2, 0x2ce, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d1, 0x7, 0x4, 
    0x2, 0x2, 0x2d0, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 
    0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d2, 0x2d3, 0x5, 0x6a, 
    0x36, 0x2, 0x2d3, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x2d4, 0x2d5, 0x7, 0xa, 
    0x2, 0x2, 0x2d5, 0x2d9, 0x7, 0xb, 0x2, 0x2, 0x2d6, 0x2d7, 0x7, 0xe, 
    0x2, 0x2, 0x2d7, 0x2d9, 0x7, 0xb, 0x2, 0x2, 0x2d8, 0x2d4, 0x3, 0x2, 
    0x2, 0x2, 0x2d8, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d9, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x2da, 0x2db, 0x7, 0xe, 0x2, 0x2, 0x2db, 0x2dc, 0x7, 0x29, 0x2, 
    0x2, 0x2dc, 0x2dd, 0x5, 0x6a, 0x36, 0x2, 0x2dd, 0x2de, 0x7, 0x2a, 0x2, 
    0x2, 0x2de, 0x2df, 0x7, 0x19, 0x2, 0x2, 0x2df, 0x2e0, 0x5, 0x7e, 0x40, 
    0x2, 0x2e0, 0x71, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e2, 0x7, 0xe, 0x2, 0x2, 
    0x2e2, 0x2e3, 0x7, 0xb, 0x2, 0x2, 0x2e3, 0x2e4, 0x5, 0x2e, 0x18, 0x2, 
    0x2e4, 0x2e5, 0x7, 0x4d, 0x2, 0x2, 0x2e5, 0x2e6, 0x7, 0x6, 0x2, 0x2, 
    0x2e6, 0x73, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x7, 0x76, 0x2, 0x2, 
    0x2e8, 0x2e9, 0x7, 0xb, 0x2, 0x2, 0x2e9, 0x75, 0x3, 0x2, 0x2, 0x2, 0x2ea, 
    0x2f0, 0x5, 0x6c, 0x37, 0x2, 0x2eb, 0x2f0, 0x5, 0x6e, 0x38, 0x2, 0x2ec, 
    0x2f0, 0x5, 0x70, 0x39, 0x2, 0x2ed, 0x2f0, 0x5, 0x72, 0x3a, 0x2, 0x2ee, 
    0x2f0, 0x5, 0x74, 0x3b, 0x2, 0x2ef, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ef, 
    0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2ec, 0x3, 0x2, 0x2, 0x2, 0x2ef, 
    0x2ed, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x2f0, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2f3, 0x5, 0x14, 0xb, 0x2, 0x2f2, 
    0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f2, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f3, 
    0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x5, 0x16e, 0xb8, 0x2, 0x2f5, 
    0x2f6, 0x5, 0x6c, 0x37, 0x2, 0x2f6, 0x79, 0x3, 0x2, 0x2, 0x2, 0x2f7, 
    0x2f8, 0x9, 0x7, 0x2, 0x2, 0x2f8, 0x2f9, 0x5, 0x6a, 0x36, 0x2, 0x2f9, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fe, 0x5, 0x76, 0x3c, 0x2, 0x2fb, 
    0x2fe, 0x5, 0x7a, 0x3e, 0x2, 0x2fc, 0x2fe, 0x5, 0x78, 0x3d, 0x2, 0x2fd, 
    0x2fa, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fb, 0x3, 0x2, 0x2, 0x2, 0x2fd, 
    0x2fc, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x303, 
    0x5, 0x62, 0x32, 0x2, 0x300, 0x303, 0x5, 0x2e, 0x18, 0x2, 0x301, 0x303, 
    0x5, 0x7c, 0x3f, 0x2, 0x302, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x302, 0x300, 
    0x3, 0x2, 0x2, 0x2, 0x302, 0x301, 0x3, 0x2, 0x2, 0x2, 0x303, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x304, 0x308, 0x5, 0x62, 0x32, 0x2, 0x305, 0x308, 0x5, 
    0x2e, 0x18, 0x2, 0x306, 0x308, 0x5, 0x7c, 0x3f, 0x2, 0x307, 0x304, 0x3, 
    0x2, 0x2, 0x2, 0x307, 0x305, 0x3, 0x2, 0x2, 0x2, 0x307, 0x306, 0x3, 
    0x2, 0x2, 0x2, 0x308, 0x81, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x7, 0x3, 
    0x2, 0x2, 0x30a, 0x30b, 0x5, 0x16e, 0xb8, 0x2, 0x30b, 0x30c, 0x5, 0x2e, 
    0x18, 0x2, 0x30c, 0x310, 0x3, 0x2, 0x2, 0x2, 0x30d, 0x30e, 0x7, 0x3, 
    0x2, 0x2, 0x30e, 0x310, 0x5, 0x16e, 0xb8, 0x2, 0x30f, 0x309, 0x3, 0x2, 
    0x2, 0x2, 0x30f, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x310, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x311, 0x312, 0x7, 0x9, 0x2, 0x2, 0x312, 0x313, 0x5, 0x16e, 0xb8, 
    0x2, 0x313, 0x314, 0x5, 0x2e, 0x18, 0x2, 0x314, 0x318, 0x3, 0x2, 0x2, 
    0x2, 0x315, 0x316, 0x7, 0x9, 0x2, 0x2, 0x316, 0x318, 0x5, 0x16e, 0xb8, 
    0x2, 0x317, 0x311, 0x3, 0x2, 0x2, 0x2, 0x317, 0x315, 0x3, 0x2, 0x2, 
    0x2, 0x318, 0x85, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x7, 0xd, 0x2, 0x2, 
    0x31a, 0x31b, 0x5, 0x16e, 0xb8, 0x2, 0x31b, 0x31c, 0x5, 0x2e, 0x18, 
    0x2, 0x31c, 0x320, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x7, 0xd, 0x2, 
    0x2, 0x31e, 0x320, 0x5, 0x16e, 0xb8, 0x2, 0x31f, 0x319, 0x3, 0x2, 0x2, 
    0x2, 0x31f, 0x31d, 0x3, 0x2, 0x2, 0x2, 0x320, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x321, 0x322, 0x7, 0x10, 0x2, 0x2, 0x322, 0x323, 0x5, 0x16e, 0xb8, 0x2, 
    0x323, 0x324, 0x7, 0x11, 0x2, 0x2, 0x324, 0x325, 0x7, 0x12, 0x2, 0x2, 
    0x325, 0x326, 0x7, 0x13, 0x2, 0x2, 0x326, 0x327, 0x7, 0x14, 0x2, 0x2, 
    0x327, 0x328, 0x7, 0x15, 0x2, 0x2, 0x328, 0x329, 0x7, 0x16, 0x2, 0x2, 
    0x329, 0x32a, 0x7, 0x13, 0x2, 0x2, 0x32a, 0x32b, 0x7, 0x17, 0x2, 0x2, 
    0x32b, 0x32c, 0x7, 0x18, 0x2, 0x2, 0x32c, 0x32d, 0x7, 0x19, 0x2, 0x2, 
    0x32d, 0x32e, 0x5, 0x2e, 0x18, 0x2, 0x32e, 0x349, 0x3, 0x2, 0x2, 0x2, 
    0x32f, 0x330, 0x7, 0x10, 0x2, 0x2, 0x330, 0x331, 0x7, 0x14, 0x2, 0x2, 
    0x331, 0x332, 0x7, 0x1a, 0x2, 0x2, 0x332, 0x333, 0x7, 0x13, 0x2, 0x2, 
    0x333, 0x334, 0x7, 0x14, 0x2, 0x2, 0x334, 0x335, 0x7, 0x15, 0x2, 0x2, 
    0x335, 0x336, 0x7, 0x16, 0x2, 0x2, 0x336, 0x337, 0x7, 0x13, 0x2, 0x2, 
    0x337, 0x338, 0x7, 0x17, 0x2, 0x2, 0x338, 0x339, 0x7, 0x18, 0x2, 0x2, 
    0x339, 0x33a, 0x7, 0x19, 0x2, 0x2, 0x33a, 0x349, 0x5, 0x2e, 0x18, 0x2, 
    0x33b, 0x33c, 0x7, 0x1d, 0x2, 0x2, 0x33c, 0x33d, 0x7, 0xe, 0x2, 0x2, 
    0x33d, 0x33e, 0x7, 0x1e, 0x2, 0x2, 0x33e, 0x33f, 0x7, 0x13, 0x2, 0x2, 
    0x33f, 0x340, 0x7, 0x14, 0x2, 0x2, 0x340, 0x341, 0x7, 0x15, 0x2, 0x2, 
    0x341, 0x342, 0x7, 0x16, 0x2, 0x2, 0x342, 0x343, 0x7, 0x1f, 0x2, 0x2, 
    0x343, 0x344, 0x7, 0x20, 0x2, 0x2, 0x344, 0x345, 0x5, 0x2e, 0x18, 0x2, 
    0x345, 0x346, 0x7, 0x21, 0x2, 0x2, 0x346, 0x347, 0x5, 0x16e, 0xb8, 0x2, 
    0x347, 0x349, 0x3, 0x2, 0x2, 0x2, 0x348, 0x321, 0x3, 0x2, 0x2, 0x2, 
    0x348, 0x32f, 0x3, 0x2, 0x2, 0x2, 0x348, 0x33b, 0x3, 0x2, 0x2, 0x2, 
    0x349, 0x89, 0x3, 0x2, 0x2, 0x2, 0x34a, 0x34b, 0x7, 0x25, 0x2, 0x2, 
    0x34b, 0x34c, 0x7, 0x26, 0x2, 0x2, 0x34c, 0x34d, 0x5, 0x7e, 0x40, 0x2, 
    0x34d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x34e, 0x350, 0x7, 0x22, 0x2, 0x2, 
    0x34f, 0x351, 0x5, 0x2e, 0x18, 0x2, 0x350, 0x34f, 0x3, 0x2, 0x2, 0x2, 
    0x350, 0x351, 0x3, 0x2, 0x2, 0x2, 0x351, 0x353, 0x3, 0x2, 0x2, 0x2, 
    0x352, 0x354, 0x5, 0x14, 0xb, 0x2, 0x353, 0x352, 0x3, 0x2, 0x2, 0x2, 
    0x353, 0x354, 0x3, 0x2, 0x2, 0x2, 0x354, 0x356, 0x3, 0x2, 0x2, 0x2, 
    0x355, 0x357, 0x5, 0x12, 0xa, 0x2, 0x356, 0x355, 0x3, 0x2, 0x2, 0x2, 
    0x356, 0x357, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x3, 0x2, 0x2, 0x2, 
    0x358, 0x359, 0x5, 0x16e, 0xb8, 0x2, 0x359, 0x35b, 0x7, 0xb, 0x2, 0x2, 
    0x35a, 0x35c, 0x5, 0x8a, 0x46, 0x2, 0x35b, 0x35a, 0x3, 0x2, 0x2, 0x2, 
    0x35b, 0x35c, 0x3, 0x2, 0x2, 0x2, 0x35c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x35d, 
    0x35f, 0x7, 0x22, 0x2, 0x2, 0x35e, 0x360, 0x5, 0x2e, 0x18, 0x2, 0x35f, 
    0x35e, 0x3, 0x2, 0x2, 0x2, 0x35f, 0x360, 0x3, 0x2, 0x2, 0x2, 0x360, 
    0x361, 0x3, 0x2, 0x2, 0x2, 0x361, 0x362, 0x7, 0x19, 0x2, 0x2, 0x362, 
    0x363, 0x5, 0x7e, 0x40, 0x2, 0x363, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x364, 
    0x365, 0x7, 0x2d, 0x2, 0x2, 0x365, 0x366, 0x5, 0x62, 0x32, 0x2, 0x366, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x367, 0x368, 0x7, 0x31, 0x2, 0x2, 0x368, 
    0x369, 0x5, 0x172, 0xba, 0x2, 0x369, 0x36a, 0x7, 0x32, 0x2, 0x2, 0x36a, 
    0x36b, 0x7, 0x19, 0x2, 0x2, 0x36b, 0x36c, 0x5, 0x2e, 0x18, 0x2, 0x36c, 
    0x3a1, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36e, 0x7, 0x31, 0x2, 0x2, 0x36e, 
    0x36f, 0x7, 0x32, 0x2, 0x2, 0x36f, 0x370, 0x7, 0x19, 0x2, 0x2, 0x370, 
    0x371, 0x5, 0x2e, 0x18, 0x2, 0x371, 0x372, 0x7, 0x33, 0x2, 0x2, 0x372, 
    0x373, 0x7, 0x19, 0x2, 0x2, 0x373, 0x374, 0x5, 0x172, 0xba, 0x2, 0x374, 
    0x3a1, 0x3, 0x2, 0x2, 0x2, 0x375, 0x376, 0x7, 0x31, 0x2, 0x2, 0x376, 
    0x377, 0x5, 0x172, 0xba, 0x2, 0x377, 0x378, 0x7, 0x32, 0x2, 0x2, 0x378, 
    0x379, 0x7, 0x19, 0x2, 0x2, 0x379, 0x37a, 0x5, 0x2e, 0x18, 0x2, 0x37a, 
    0x37b, 0x7, 0x37, 0x2, 0x2, 0x37b, 0x37c, 0x7, 0x32, 0x2, 0x2, 0x37c, 
    0x37d, 0x7, 0x33, 0x2, 0x2, 0x37d, 0x37e, 0x7, 0x19, 0x2, 0x2, 0x37e, 
    0x37f, 0x5, 0x172, 0xba, 0x2, 0x37f, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x380, 
    0x381, 0x7, 0x31, 0x2, 0x2, 0x381, 0x382, 0x5, 0x172, 0xba, 0x2, 0x382, 
    0x383, 0x7, 0x32, 0x2, 0x2, 0x383, 0x384, 0x7, 0x19, 0x2, 0x2, 0x384, 
    0x3a1, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x7, 0x31, 0x2, 0x2, 0x386, 
    0x387, 0x7, 0x32, 0x2, 0x2, 0x387, 0x388, 0x7, 0x19, 0x2, 0x2, 0x388, 
    0x3a1, 0x5, 0x2e, 0x18, 0x2, 0x389, 0x38a, 0x7, 0x31, 0x2, 0x2, 0x38a, 
    0x38b, 0x5, 0x172, 0xba, 0x2, 0x38b, 0x38c, 0x7, 0x11, 0x2, 0x2, 0x38c, 
    0x38d, 0x7, 0x32, 0x2, 0x2, 0x38d, 0x38e, 0x7, 0x19, 0x2, 0x2, 0x38e, 
    0x38f, 0x5, 0x2e, 0x18, 0x2, 0x38f, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x390, 
    0x391, 0x7, 0x31, 0x2, 0x2, 0x391, 0x392, 0x5, 0x172, 0xba, 0x2, 0x392, 
    0x393, 0x7, 0x32, 0x2, 0x2, 0x393, 0x394, 0x7, 0x19, 0x2, 0x2, 0x394, 
    0x395, 0x5, 0x2e, 0x18, 0x2, 0x395, 0x396, 0x7, 0x37, 0x2, 0x2, 0x396, 
    0x397, 0x5, 0x172, 0xba, 0x2, 0x397, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x398, 
    0x399, 0x7, 0x31, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x32, 0x2, 0x2, 0x39a, 
    0x39b, 0x7, 0x19, 0x2, 0x2, 0x39b, 0x39c, 0x5, 0x2e, 0x18, 0x2, 0x39c, 
    0x39d, 0x7, 0x33, 0x2, 0x2, 0x39d, 0x39e, 0x7, 0x19, 0x2, 0x2, 0x39e, 
    0x39f, 0x5, 0x172, 0xba, 0x2, 0x39f, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a0, 
    0x367, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x3a0, 
    0x375, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x380, 0x3, 0x2, 0x2, 0x2, 0x3a0, 
    0x385, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x389, 0x3, 0x2, 0x2, 0x2, 0x3a0, 
    0x390, 0x3, 0x2, 0x2, 0x2, 0x3a0, 0x398, 0x3, 0x2, 0x2, 0x2, 0x3a1, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x3a2, 0x3a3, 0x7, 0x3b, 0x2, 0x2, 0x3a3, 
    0x3a4, 0x5, 0x62, 0x32, 0x2, 0x3a4, 0x95, 0x3, 0x2, 0x2, 0x2, 0x3a5, 
    0x3a6, 0x7, 0x51, 0x2, 0x2, 0x3a6, 0x3a7, 0x7, 0x19, 0x2, 0x2, 0x3a7, 
    0x3b3, 0x5, 0x7e, 0x40, 0x2, 0x3a8, 0x3a9, 0x7, 0x51, 0x2, 0x2, 0x3a9, 
    0x3aa, 0x7, 0x19, 0x2, 0x2, 0x3aa, 0x3ab, 0x5, 0x7e, 0x40, 0x2, 0x3ab, 
    0x3ac, 0x7, 0x53, 0x2, 0x2, 0x3ac, 0x3ad, 0x5, 0xf8, 0x7d, 0x2, 0x3ad, 
    0x3b3, 0x3, 0x2, 0x2, 0x2, 0x3ae, 0x3af, 0x7, 0x51, 0x2, 0x2, 0x3af, 
    0x3b0, 0x7, 0xc0, 0x2, 0x2, 0x3b0, 0x3b1, 0x7, 0x19, 0x2, 0x2, 0x3b1, 
    0x3b3, 0x5, 0x7e, 0x40, 0x2, 0x3b2, 0x3a5, 0x3, 0x2, 0x2, 0x2, 0x3b2, 
    0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3b2, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3b3, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b6, 0x5, 0x2e, 0x18, 0x2, 0x3b5, 
    0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x3, 0x2, 0x2, 0x2, 0x3b6, 
    0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3b8, 0x7, 0x58, 0x2, 0x2, 0x3b8, 
    0x3b9, 0x5, 0x16e, 0xb8, 0x2, 0x3b9, 0x3ba, 0x7, 0xc9, 0x2, 0x2, 0x3ba, 
    0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3bc, 0x7, 0x58, 0x2, 0x2, 0x3bc, 
    0x3bd, 0x5, 0x16e, 0xb8, 0x2, 0x3bd, 0x3be, 0x7, 0x11, 0x2, 0x2, 0x3be, 
    0x3bf, 0x7, 0xc9, 0x2, 0x2, 0x3bf, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3c0, 
    0x3c1, 0x7, 0x58, 0x2, 0x2, 0x3c1, 0x3c2, 0x5, 0x16e, 0xb8, 0x2, 0x3c2, 
    0x3c3, 0x7, 0x59, 0x2, 0x2, 0x3c3, 0x3c4, 0x7, 0xc9, 0x2, 0x2, 0x3c4, 
    0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3c5, 0x3c6, 0x7, 0x58, 0x2, 0x2, 0x3c6, 
    0x3c7, 0x5, 0x16e, 0xb8, 0x2, 0x3c7, 0x3c8, 0x7, 0xc9, 0x2, 0x2, 0x3c8, 
    0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3b7, 0x3, 0x2, 0x2, 0x2, 0x3c9, 
    0x3bb, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c9, 
    0x3c5, 0x3, 0x2, 0x2, 0x2, 0x3ca, 0x99, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3cd, 
    0x5, 0x2e, 0x18, 0x2, 0x3cc, 0x3cb, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 
    0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3e0, 0x3, 0x2, 0x2, 0x2, 0x3ce, 0x3cf, 
    0x7, 0x58, 0x2, 0x2, 0x3cf, 0x3d0, 0x5, 0x16e, 0xb8, 0x2, 0x3d0, 0x3d1, 
    0x7, 0xca, 0x2, 0x2, 0x3d1, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 
    0x7, 0x58, 0x2, 0x2, 0x3d3, 0x3d4, 0x5, 0x16e, 0xb8, 0x2, 0x3d4, 0x3d5, 
    0x7, 0x11, 0x2, 0x2, 0x3d5, 0x3d6, 0x7, 0xca, 0x2, 0x2, 0x3d6, 0x3e1, 
    0x3, 0x2, 0x2, 0x2, 0x3d7, 0x3d8, 0x7, 0x58, 0x2, 0x2, 0x3d8, 0x3d9, 
    0x5, 0x16e, 0xb8, 0x2, 0x3d9, 0x3da, 0x7, 0x59, 0x2, 0x2, 0x3da, 0x3db, 
    0x7, 0xca, 0x2, 0x2, 0x3db, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 
    0x7, 0x58, 0x2, 0x2, 0x3dd, 0x3de, 0x5, 0x16e, 0xb8, 0x2, 0x3de, 0x3df, 
    0x7, 0xca, 0x2, 0x2, 0x3df, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3ce, 
    0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3d7, 
    0x3, 0x2, 0x2, 0x2, 0x3e0, 0x3dc, 0x3, 0x2, 0x2, 0x2, 0x3e1, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x3e2, 0x3e4, 0x7, 0x58, 0x2, 0x2, 0x3e3, 0x3e5, 0x7, 
    0xcb, 0x2, 0x2, 0x3e4, 0x3e3, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 0x3, 
    0x2, 0x2, 0x2, 0x3e6, 0x3e4, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e7, 0x3, 
    0x2, 0x2, 0x2, 0x3e7, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e9, 0x5, 
    0x2e, 0x18, 0x2, 0x3e9, 0x3eb, 0x7, 0x58, 0x2, 0x2, 0x3ea, 0x3ec, 0x7, 
    0xcb, 0x2, 0x2, 0x3eb, 0x3ea, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ed, 0x3, 
    0x2, 0x2, 0x2, 0x3ed, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3ed, 0x3ee, 0x3, 
    0x2, 0x2, 0x2, 0x3ee, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x7, 
    0x58, 0x2, 0x2, 0x3f0, 0x3f2, 0x7, 0x23, 0x2, 0x2, 0x3f1, 0x3f3, 0x7, 
    0xcb, 0x2, 0x2, 0x3f2, 0x3f1, 0x3, 0x2, 0x2, 0x2, 0x3f3, 0x3f4, 0x3, 
    0x2, 0x2, 0x2, 0x3f4, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f5, 0x3, 
    0x2, 0x2, 0x2, 0x3f5, 0x3f7, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3e2, 0x3, 
    0x2, 0x2, 0x2, 0x3f6, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3ef, 0x3, 
    0x2, 0x2, 0x2, 0x3f7, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x3f8, 0x3f9, 0x5, 0x2e, 
    0x18, 0x2, 0x3f9, 0x3fa, 0x7, 0x5a, 0x2, 0x2, 0x3fa, 0x3fb, 0x7, 0x38, 
    0x2, 0x2, 0x3fb, 0x3fc, 0x5, 0x16e, 0xb8, 0x2, 0x3fc, 0x401, 0x3, 0x2, 
    0x2, 0x2, 0x3fd, 0x3fe, 0x7, 0x58, 0x2, 0x2, 0x3fe, 0x3ff, 0x7, 0x38, 
    0x2, 0x2, 0x3ff, 0x401, 0x5, 0x16e, 0xb8, 0x2, 0x400, 0x3f8, 0x3, 0x2, 
    0x2, 0x2, 0x400, 0x3fd, 0x3, 0x2, 0x2, 0x2, 0x401, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0x402, 0x403, 0x7, 0x5b, 0x2, 0x2, 0x403, 0x404, 0x7, 0x17, 0x2, 
    0x2, 0x404, 0x405, 0x7, 0x38, 0x2, 0x2, 0x405, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0x406, 0x407, 0x7, 0x5c, 0x2, 0x2, 0x407, 0x408, 0x7, 0x17, 0x2, 
    0x2, 0x408, 0x409, 0x7, 0x5d, 0x2, 0x2, 0x409, 0x40a, 0x7, 0x5f, 0x2, 
    0x2, 0x40a, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 0x7, 0x60, 0x2, 
    0x2, 0x40c, 0x40d, 0x5, 0x62, 0x32, 0x2, 0x40d, 0x40e, 0x7, 0x19, 0x2, 
    0x2, 0x40e, 0x40f, 0x5, 0x28, 0x15, 0x2, 0x40f, 0x410, 0x7, 0x36, 0x2, 
    0x2, 0x410, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x411, 0x412, 0x7, 0x64, 0x2, 
    0x2, 0x412, 0x413, 0x5, 0x62, 0x32, 0x2, 0x413, 0x414, 0x7, 0x67, 0x2, 
    0x2, 0x414, 0x415, 0x7, 0x17, 0x2, 0x2, 0x415, 0x416, 0x7, 0x36, 0x2, 
    0x2, 0x416, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x417, 0x418, 0x7, 0x68, 0x2, 
    0x2, 0x418, 0x419, 0x7, 0x17, 0x2, 0x2, 0x419, 0x41a, 0x7, 0x69, 0x2, 
    0x2, 0x41a, 0x41b, 0x7, 0x6a, 0x2, 0x2, 0x41b, 0x41c, 0x7, 0x6b, 0x2, 
    0x2, 0x41c, 0x41d, 0x7, 0x6c, 0x2, 0x2, 0x41d, 0x41e, 0x7, 0x17, 0x2, 
    0x2, 0x41e, 0x41f, 0x7, 0x55, 0x2, 0x2, 0x41f, 0x420, 0x7, 0x6d, 0x2, 
    0x2, 0x420, 0x421, 0x7, 0x6e, 0x2, 0x2, 0x421, 0x422, 0x7, 0x6f, 0x2, 
    0x2, 0x422, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x423, 0x424, 0x7, 0x39, 0x2, 
    0x2, 0x424, 0x425, 0x5, 0x16e, 0xb8, 0x2, 0x425, 0x426, 0x7, 0x46, 0x2, 
    0x2, 0x426, 0x427, 0x7, 0x3e, 0x2, 0x2, 0x427, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0x428, 0x429, 0x7, 0x39, 0x2, 0x2, 0x429, 0x42a, 0x7, 0x72, 0x2, 
    0x2, 0x42a, 0xad, 0x3, 0x2, 0x2, 0x2, 0x42b, 0x42c, 0x7, 0x71, 0x2, 
    0x2, 0x42c, 0x436, 0x5, 0x62, 0x32, 0x2, 0x42d, 0x42e, 0x7, 0x71, 0x2, 
    0x2, 0x42e, 0x42f, 0x5, 0x62, 0x32, 0x2, 0x42f, 0x430, 0x5, 0xac, 0x57, 
    0x2, 0x430, 0x436, 0x3, 0x2, 0x2, 0x2, 0x431, 0x432, 0x7, 0x71, 0x2, 
    0x2, 0x432, 0x433, 0x5, 0x62, 0x32, 0x2, 0x433, 0x434, 0x5, 0xaa, 0x56, 
    0x2, 0x434, 0x436, 0x3, 0x2, 0x2, 0x2, 0x435, 0x42b, 0x3, 0x2, 0x2, 
    0x2, 0x435, 0x42d, 0x3, 0x2, 0x2, 0x2, 0x435, 0x431, 0x3, 0x2, 0x2, 
    0x2, 0x436, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x437, 0x438, 0x7, 0x71, 0x2, 
    0x2, 0x438, 0x43c, 0x7, 0x90, 0x2, 0x2, 0x439, 0x43b, 0x5, 0x4e, 0x28, 
    0x2, 0x43a, 0x439, 0x3, 0x2, 0x2, 0x2, 0x43b, 0x43e, 0x3, 0x2, 0x2, 
    0x2, 0x43c, 0x43a, 0x3, 0x2, 0x2, 0x2, 0x43c, 0x43d, 0x3, 0x2, 0x2, 
    0x2, 0x43d, 0x43f, 0x3, 0x2, 0x2, 0x2, 0x43e, 0x43c, 0x3, 0x2, 0x2, 
    0x2, 0x43f, 0x440, 0x7, 0xc6, 0x2, 0x2, 0x440, 0x441, 0x7, 0x76, 0x2, 
    0x2, 0x441, 0x442, 0x7, 0x77, 0x2, 0x2, 0x442, 0x443, 0x7, 0x78, 0x2, 
    0x2, 0x443, 0x444, 0x7, 0x79, 0x2, 0x2, 0x444, 0x445, 0x7, 0x17, 0x2, 
    0x2, 0x445, 0x446, 0x7, 0x90, 0x2, 0x2, 0x446, 0x447, 0x7, 0x7a, 0x2, 
    0x2, 0x447, 0x448, 0x7, 0x7b, 0x2, 0x2, 0x448, 0x472, 0x7, 0x55, 0x2, 
    0x2, 0x449, 0x44a, 0x7, 0x71, 0x2, 0x2, 0x44a, 0x44e, 0x7, 0x90, 0x2, 
    0x2, 0x44b, 0x44d, 0x5, 0x4e, 0x28, 0x2, 0x44c, 0x44b, 0x3, 0x2, 0x2, 
    0x2, 0x44d, 0x450, 0x3, 0x2, 0x2, 0x2, 0x44e, 0x44c, 0x3, 0x2, 0x2, 
    0x2, 0x44e, 0x44f, 0x3, 0x2, 0x2, 0x2, 0x44f, 0x451, 0x3, 0x2, 0x2, 
    0x2, 0x450, 0x44e, 0x3, 0x2, 0x2, 0x2, 0x451, 0x452, 0x5, 0xac, 0x57, 
    0x2, 0x452, 0x453, 0x7, 0xc6, 0x2, 0x2, 0x453, 0x454, 0x7, 0x76, 0x2, 
    0x2, 0x454, 0x455, 0x7, 0x77, 0x2, 0x2, 0x455, 0x456, 0x7, 0x78, 0x2, 
    0x2, 0x456, 0x457, 0x7, 0x79, 0x2, 0x2, 0x457, 0x458, 0x7, 0x17, 0x2, 
    0x2, 0x458, 0x459, 0x7, 0x90, 0x2, 0x2, 0x459, 0x45a, 0x7, 0x7a, 0x2, 
    0x2, 0x45a, 0x45b, 0x7, 0x7b, 0x2, 0x2, 0x45b, 0x45c, 0x7, 0x55, 0x2, 
    0x2, 0x45c, 0x472, 0x3, 0x2, 0x2, 0x2, 0x45d, 0x45e, 0x7, 0x71, 0x2, 
    0x2, 0x45e, 0x462, 0x7, 0x90, 0x2, 0x2, 0x45f, 0x461, 0x5, 0x4e, 0x28, 
    0x2, 0x460, 0x45f, 0x3, 0x2, 0x2, 0x2, 0x461, 0x464, 0x3, 0x2, 0x2, 
    0x2, 0x462, 0x460, 0x3, 0x2, 0x2, 0x2, 0x462, 0x463, 0x3, 0x2, 0x2, 
    0x2, 0x463, 0x465, 0x3, 0x2, 0x2, 0x2, 0x464, 0x462, 0x3, 0x2, 0x2, 
    0x2, 0x465, 0x466, 0x5, 0xaa, 0x56, 0x2, 0x466, 0x467, 0x7, 0xc6, 0x2, 
    0x2, 0x467, 0x468, 0x7, 0x76, 0x2, 0x2, 0x468, 0x469, 0x7, 0x77, 0x2, 
    0x2, 0x469, 0x46a, 0x7, 0x78, 0x2, 0x2, 0x46a, 0x46b, 0x7, 0x79, 0x2, 
    0x2, 0x46b, 0x46c, 0x7, 0x17, 0x2, 0x2, 0x46c, 0x46d, 0x7, 0x90, 0x2, 
    0x2, 0x46d, 0x46e, 0x7, 0x7a, 0x2, 0x2, 0x46e, 0x46f, 0x7, 0x7b, 0x2, 
    0x2, 0x46f, 0x470, 0x7, 0x55, 0x2, 0x2, 0x470, 0x472, 0x3, 0x2, 0x2, 
    0x2, 0x471, 0x437, 0x3, 0x2, 0x2, 0x2, 0x471, 0x449, 0x3, 0x2, 0x2, 
    0x2, 0x471, 0x45d, 0x3, 0x2, 0x2, 0x2, 0x472, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0x473, 0x474, 0x7, 0x62, 0x2, 0x2, 0x474, 0x475, 0x5, 0x16e, 0xb8, 0x2, 
    0x475, 0x476, 0x5, 0x62, 0x32, 0x2, 0x476, 0x483, 0x3, 0x2, 0x2, 0x2, 
    0x477, 0x478, 0x7, 0x62, 0x2, 0x2, 0x478, 0x483, 0x5, 0x62, 0x32, 0x2, 
    0x479, 0x47a, 0x5, 0x2e, 0x18, 0x2, 0x47a, 0x47b, 0x7, 0x62, 0x2, 0x2, 
    0x47b, 0x47c, 0x5, 0x16e, 0xb8, 0x2, 0x47c, 0x47d, 0x5, 0x62, 0x32, 
    0x2, 0x47d, 0x483, 0x3, 0x2, 0x2, 0x2, 0x47e, 0x47f, 0x5, 0x2e, 0x18, 
    0x2, 0x47f, 0x480, 0x7, 0x62, 0x2, 0x2, 0x480, 0x481, 0x5, 0x62, 0x32, 
    0x2, 0x481, 0x483, 0x3, 0x2, 0x2, 0x2, 0x482, 0x473, 0x3, 0x2, 0x2, 
    0x2, 0x482, 0x477, 0x3, 0x2, 0x2, 0x2, 0x482, 0x479, 0x3, 0x2, 0x2, 
    0x2, 0x482, 0x47e, 0x3, 0x2, 0x2, 0x2, 0x483, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0x484, 0x485, 0x7, 0xa, 0x2, 0x2, 0x485, 0x486, 0x7, 0x2e, 0x2, 0x2, 
    0x486, 0x487, 0x7, 0x5a, 0x2, 0x2, 0x487, 0x488, 0x7, 0x7f, 0x2, 0x2, 
    0x488, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x489, 0x48a, 0x7, 0x80, 0x2, 0x2, 
    0x48a, 0x48b, 0x5, 0x2e, 0x18, 0x2, 0x48b, 0x48c, 0x5, 0x16e, 0xb8, 
    0x2, 0x48c, 0x48d, 0x7, 0x81, 0x2, 0x2, 0x48d, 0x496, 0x3, 0x2, 0x2, 
    0x2, 0x48e, 0x48f, 0x7, 0x80, 0x2, 0x2, 0x48f, 0x490, 0x5, 0x2e, 0x18, 
    0x2, 0x490, 0x491, 0x7, 0x81, 0x2, 0x2, 0x491, 0x492, 0x7, 0x33, 0x2, 
    0x2, 0x492, 0x493, 0x7, 0x19, 0x2, 0x2, 0x493, 0x494, 0x5, 0x172, 0xba, 
    0x2, 0x494, 0x496, 0x3, 0x2, 0x2, 0x2, 0x495, 0x489, 0x3, 0x2, 0x2, 
    0x2, 0x495, 0x48e, 0x3, 0x2, 0x2, 0x2, 0x496, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0x497, 0x498, 0x7, 0x82, 0x2, 0x2, 0x498, 0x499, 0x5, 0x2e, 0x18, 0x2, 
    0x499, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x49a, 0x49b, 0x5, 0x2e, 0x18, 0x2, 
    0x49b, 0x49c, 0x7, 0x85, 0x2, 0x2, 0x49c, 0x49d, 0x5, 0x16e, 0xb8, 0x2, 
    0x49d, 0x49e, 0x7, 0x2e, 0x2, 0x2, 0x49e, 0x49f, 0x7, 0x26, 0x2, 0x2, 
    0x49f, 0x4a0, 0x7, 0x35, 0x2, 0x2, 0x4a0, 0x4a1, 0x7, 0x36, 0x2, 0x2, 
    0x4a1, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a3, 0x5, 0x2e, 0x18, 0x2, 
    0x4a3, 0x4a4, 0x7, 0x85, 0x2, 0x2, 0x4a4, 0x4a5, 0x5, 0x16e, 0xb8, 0x2, 
    0x4a5, 0x4a6, 0x7, 0x2e, 0x2, 0x2, 0x4a6, 0x4a7, 0x7, 0x26, 0x2, 0x2, 
    0x4a7, 0x4a8, 0x7, 0x35, 0x2, 0x2, 0x4a8, 0x4a9, 0x7, 0x36, 0x2, 0x2, 
    0x4a9, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4aa, 0x4ab, 0x5, 0x2e, 0x18, 0x2, 
    0x4ab, 0x4ac, 0x7, 0x85, 0x2, 0x2, 0x4ac, 0x4ad, 0x7, 0x14, 0x2, 0x2, 
    0x4ad, 0x4ae, 0x7, 0x2e, 0x2, 0x2, 0x4ae, 0x4af, 0x7, 0x26, 0x2, 0x2, 
    0x4af, 0x4b0, 0x7, 0x35, 0x2, 0x2, 0x4b0, 0x4b1, 0x7, 0x36, 0x2, 0x2, 
    0x4b1, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4b2, 0x4b3, 0x5, 0x2e, 0x18, 0x2, 
    0x4b3, 0x4b4, 0x7, 0x85, 0x2, 0x2, 0x4b4, 0x4b5, 0x7, 0x14, 0x2, 0x2, 
    0x4b5, 0x4b6, 0x7, 0x2e, 0x2, 0x2, 0x4b6, 0x4b7, 0x7, 0x26, 0x2, 0x2, 
    0x4b7, 0x4b8, 0x7, 0x35, 0x2, 0x2, 0x4b8, 0x4b9, 0x7, 0x36, 0x2, 0x2, 
    0x4b9, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4ba, 0x4bb, 0x5, 0x2e, 0x18, 0x2, 
    0x4bb, 0x4bc, 0x7, 0x85, 0x2, 0x2, 0x4bc, 0x4bd, 0x5, 0x16e, 0xb8, 0x2, 
    0x4bd, 0x4be, 0x7, 0x2e, 0x2, 0x2, 0x4be, 0x4bf, 0x7, 0x26, 0x2, 0x2, 
    0x4bf, 0x4c0, 0x7, 0x35, 0x2, 0x2, 0x4c0, 0x4c1, 0x7, 0x36, 0x2, 0x2, 
    0x4c1, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4c2, 0x4c3, 0x5, 0x2e, 0x18, 0x2, 
    0x4c3, 0x4c4, 0x7, 0x85, 0x2, 0x2, 0x4c4, 0x4c5, 0x7, 0x14, 0x2, 0x2, 
    0x4c5, 0x4c6, 0x7, 0x2e, 0x2, 0x2, 0x4c6, 0x4c7, 0x7, 0x26, 0x2, 0x2, 
    0x4c7, 0x4c8, 0x7, 0x35, 0x2, 0x2, 0x4c8, 0x4c9, 0x7, 0x36, 0x2, 0x2, 
    0x4c9, 0x4d9, 0x3, 0x2, 0x2, 0x2, 0x4ca, 0x4cb, 0x7, 0x85, 0x2, 0x2, 
    0x4cb, 0x4d9, 0x7, 0xc0, 0x2, 0x2, 0x4cc, 0x4cd, 0x7, 0x85, 0x2, 0x2, 
    0x4cd, 0x4ce, 0x7, 0x14, 0x2, 0x2, 0x4ce, 0x4cf, 0x7, 0x2e, 0x2, 0x2, 
    0x4cf, 0x4d0, 0x7, 0x26, 0x2, 0x2, 0x4d0, 0x4d1, 0x7, 0x17, 0x2, 0x2, 
    0x4d1, 0x4d9, 0x7, 0x36, 0x2, 0x2, 0x4d2, 0x4d3, 0x7, 0x85, 0x2, 0x2, 
    0x4d3, 0x4d4, 0x7, 0x14, 0x2, 0x2, 0x4d4, 0x4d5, 0x7, 0x2e, 0x2, 0x2, 
    0x4d5, 0x4d6, 0x7, 0x26, 0x2, 0x2, 0x4d6, 0x4d7, 0x7, 0x35, 0x2, 0x2, 
    0x4d7, 0x4d9, 0x7, 0x36, 0x2, 0x2, 0x4d8, 0x49a, 0x3, 0x2, 0x2, 0x2, 
    0x4d8, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4aa, 0x3, 0x2, 0x2, 0x2, 
    0x4d8, 0x4b2, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4ba, 0x3, 0x2, 0x2, 0x2, 
    0x4d8, 0x4c2, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4ca, 0x3, 0x2, 0x2, 0x2, 
    0x4d8, 0x4cc, 0x3, 0x2, 0x2, 0x2, 0x4d8, 0x4d2, 0x3, 0x2, 0x2, 0x2, 
    0x4d9, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x4da, 0x4db, 0x7, 0x86, 0x2, 0x2, 
    0x4db, 0x4dc, 0x7, 0x14, 0x2, 0x2, 0x4dc, 0x4f5, 0x7, 0x2e, 0x2, 0x2, 
    0x4dd, 0x4de, 0x7, 0x86, 0x2, 0x2, 0x4de, 0x4df, 0x5, 0x16e, 0xb8, 0x2, 
    0x4df, 0x4e0, 0x7, 0x2e, 0x2, 0x2, 0x4e0, 0x4f5, 0x3, 0x2, 0x2, 0x2, 
    0x4e1, 0x4e2, 0x7, 0x86, 0x2, 0x2, 0x4e2, 0x4e3, 0x7, 0x14, 0x2, 0x2, 
    0x4e3, 0x4e4, 0x7, 0x59, 0x2, 0x2, 0x4e4, 0x4f5, 0x7, 0x2e, 0x2, 0x2, 
    0x4e5, 0x4e6, 0x5, 0x2e, 0x18, 0x2, 0x4e6, 0x4e7, 0x7, 0x86, 0x2, 0x2, 
    0x4e7, 0x4e8, 0x5, 0x16e, 0xb8, 0x2, 0x4e8, 0x4e9, 0x7, 0x2e, 0x2, 0x2, 
    0x4e9, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4ea, 0x4eb, 0x5, 0x2e, 0x18, 0x2, 
    0x4eb, 0x4ec, 0x7, 0x86, 0x2, 0x2, 0x4ec, 0x4ed, 0x5, 0x16e, 0xb8, 0x2, 
    0x4ed, 0x4ee, 0x7, 0x2e, 0x2, 0x2, 0x4ee, 0x4f5, 0x3, 0x2, 0x2, 0x2, 
    0x4ef, 0x4f0, 0x5, 0x2e, 0x18, 0x2, 0x4f0, 0x4f1, 0x7, 0x86, 0x2, 0x2, 
    0x4f1, 0x4f2, 0x7, 0x14, 0x2, 0x2, 0x4f2, 0x4f3, 0x7, 0x2e, 0x2, 0x2, 
    0x4f3, 0x4f5, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4da, 0x3, 0x2, 0x2, 0x2, 
    0x4f4, 0x4dd, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4e1, 0x3, 0x2, 0x2, 0x2, 
    0x4f4, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x4f4, 0x4ea, 0x3, 0x2, 0x2, 0x2, 
    0x4f4, 0x4ef, 0x3, 0x2, 0x2, 0x2, 0x4f5, 0xbd, 0x3, 0x2, 0x2, 0x2, 0x4f6, 
    0x4f7, 0x7, 0x8b, 0x2, 0x2, 0x4f7, 0x4f8, 0x7, 0x28, 0x2, 0x2, 0x4f8, 
    0x4f9, 0x7, 0x19, 0x2, 0x2, 0x4f9, 0x4fa, 0x5, 0x16e, 0xb8, 0x2, 0x4fa, 
    0x4fb, 0x7, 0x12, 0x2, 0x2, 0x4fb, 0x4fc, 0x7, 0x13, 0x2, 0x2, 0x4fc, 
    0x4fd, 0x7, 0x15, 0x2, 0x2, 0x4fd, 0x4fe, 0x7, 0x26, 0x2, 0x2, 0x4fe, 
    0x4ff, 0x5, 0x2e, 0x18, 0x2, 0x4ff, 0x50d, 0x3, 0x2, 0x2, 0x2, 0x500, 
    0x501, 0x7, 0x8b, 0x2, 0x2, 0x501, 0x502, 0x7, 0x30, 0x2, 0x2, 0x502, 
    0x503, 0x7, 0x15, 0x2, 0x2, 0x503, 0x504, 0x7, 0x20, 0x2, 0x2, 0x504, 
    0x50d, 0x5, 0x2e, 0x18, 0x2, 0x505, 0x506, 0x7, 0x8b, 0x2, 0x2, 0x506, 
    0x507, 0x7, 0x14, 0x2, 0x2, 0x507, 0x508, 0x7, 0x1a, 0x2, 0x2, 0x508, 
    0x509, 0x7, 0x13, 0x2, 0x2, 0x509, 0x50a, 0x7, 0x15, 0x2, 0x2, 0x50a, 
    0x50b, 0x7, 0x26, 0x2, 0x2, 0x50b, 0x50d, 0x5, 0x2e, 0x18, 0x2, 0x50c, 
    0x4f6, 0x3, 0x2, 0x2, 0x2, 0x50c, 0x500, 0x3, 0x2, 0x2, 0x2, 0x50c, 
    0x505, 0x3, 0x2, 0x2, 0x2, 0x50d, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x50e, 0x50f, 
    0x7, 0x8c, 0x2, 0x2, 0x50f, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x510, 0x511, 
    0x7, 0x8d, 0x2, 0x2, 0x511, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x512, 0x513, 
    0x7, 0x8e, 0x2, 0x2, 0x513, 0x514, 0x5, 0x7c, 0x3f, 0x2, 0x514, 0x515, 
    0x7, 0x8f, 0x2, 0x2, 0x515, 0x516, 0x7, 0x7, 0x2, 0x2, 0x516, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0x517, 0x518, 0x7, 0x8b, 0x2, 0x2, 0x518, 0x519, 
    0x7, 0x4, 0x2, 0x2, 0x519, 0x51a, 0x7, 0x7, 0x2, 0x2, 0x51a, 0x51b, 
    0x7, 0x93, 0x2, 0x2, 0x51b, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x51c, 0x51d, 
    0x7, 0x3d, 0x2, 0x2, 0x51d, 0x51e, 0x5, 0x16e, 0xb8, 0x2, 0x51e, 0x51f, 
    0x7, 0x3e, 0x2, 0x2, 0x51f, 0xc9, 0x3, 0x2, 0x2, 0x2, 0x520, 0x521, 
    0x7, 0x94, 0x2, 0x2, 0x521, 0x522, 0x7, 0x91, 0x2, 0x2, 0x522, 0x523, 
    0x7, 0xe, 0x2, 0x2, 0x523, 0x524, 0x7, 0x95, 0x2, 0x2, 0x524, 0x525, 
    0x5, 0x16e, 0xb8, 0x2, 0x525, 0x526, 0x7, 0x2e, 0x2, 0x2, 0x526, 0x527, 
    0x7, 0x13, 0x2, 0x2, 0x527, 0x528, 0x7, 0x17, 0x2, 0x2, 0x528, 0x529, 
    0x7, 0x66, 0x2, 0x2, 0x529, 0x52a, 0x7, 0xc6, 0x2, 0x2, 0x52a, 0x52b, 
    0x7, 0x64, 0x2, 0x2, 0x52b, 0x52c, 0x7, 0x96, 0x2, 0x2, 0x52c, 0x52d, 
    0x7, 0x34, 0x2, 0x2, 0x52d, 0x52e, 0x7, 0x97, 0x2, 0x2, 0x52e, 0x52f, 
    0x7, 0xe, 0x2, 0x2, 0x52f, 0x530, 0x7, 0x65, 0x2, 0x2, 0x530, 0x531, 
    0x7, 0x98, 0x2, 0x2, 0x531, 0x532, 0x7, 0xe, 0x2, 0x2, 0x532, 0x533, 
    0x7, 0x99, 0x2, 0x2, 0x533, 0x534, 0x7, 0x97, 0x2, 0x2, 0x534, 0x535, 
    0x7, 0x95, 0x2, 0x2, 0x535, 0x536, 0x7, 0x6, 0x2, 0x2, 0x536, 0x537, 
    0x7, 0x96, 0x2, 0x2, 0x537, 0x538, 0x7, 0x9b, 0x2, 0x2, 0x538, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0x539, 0x53a, 0x7, 0xa, 0x2, 0x2, 0x53a, 0x53b, 
    0x7, 0x2e, 0x2, 0x2, 0x53b, 0x53c, 0x7, 0x7e, 0x2, 0x2, 0x53c, 0x53d, 
    0x7, 0x73, 0x2, 0x2, 0x53d, 0x53e, 0x7, 0x70, 0x2, 0x2, 0x53e, 0x53f, 
    0x7, 0x4c, 0x2, 0x2, 0x53f, 0x540, 0x7, 0x9c, 0x2, 0x2, 0x540, 0x541, 
    0x7, 0x24, 0x2, 0x2, 0x541, 0x542, 0x7, 0x7e, 0x2, 0x2, 0x542, 0x543, 
    0x7, 0x9d, 0x2, 0x2, 0x543, 0x544, 0x7, 0x35, 0x2, 0x2, 0x544, 0x545, 
    0x7, 0x5d, 0x2, 0x2, 0x545, 0x546, 0x7, 0x5f, 0x2, 0x2, 0x546, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0x547, 0x548, 0x7, 0x1d, 0x2, 0x2, 0x548, 0x549, 
    0x7, 0xe, 0x2, 0x2, 0x549, 0x54a, 0x7, 0x69, 0x2, 0x2, 0x54a, 0x54b, 
    0x7, 0x13, 0x2, 0x2, 0x54b, 0x54c, 0x7, 0x14, 0x2, 0x2, 0x54c, 0x54d, 
    0x7, 0x2e, 0x2, 0x2, 0x54d, 0x54e, 0x7, 0x27, 0x2, 0x2, 0x54e, 0x54f, 
    0x7, 0x15, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x21, 0x2, 0x2, 0x550, 0x551, 
    0x5, 0x16e, 0xb8, 0x2, 0x551, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x552, 0x553, 
    0x7, 0x9e, 0x2, 0x2, 0x553, 0x554, 0x7, 0xe, 0x2, 0x2, 0x554, 0x555, 
    0x7, 0x5c, 0x2, 0x2, 0x555, 0x556, 0x7, 0x13, 0x2, 0x2, 0x556, 0x557, 
    0x7, 0xc0, 0x2, 0x2, 0x557, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x558, 0x559, 
    0x7, 0x7f, 0x2, 0x2, 0x559, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x55a, 0x55b, 
    0x5, 0x2e, 0x18, 0x2, 0x55b, 0x55c, 0x7, 0x63, 0x2, 0x2, 0x55c, 0x55d, 
    0x7, 0x9f, 0x2, 0x2, 0x55d, 0x55e, 0x7, 0x71, 0x2, 0x2, 0x55e, 0x55f, 
    0x7, 0x2e, 0x2, 0x2, 0x55f, 0x560, 0x7, 0xa0, 0x2, 0x2, 0x560, 0x561, 
    0x7, 0xc0, 0x2, 0x2, 0x561, 0x568, 0x3, 0x2, 0x2, 0x2, 0x562, 0x563, 
    0x7, 0x9f, 0x2, 0x2, 0x563, 0x564, 0x7, 0x71, 0x2, 0x2, 0x564, 0x565, 
    0x7, 0xc0, 0x2, 0x2, 0x565, 0x566, 0x7, 0x4c, 0x2, 0x2, 0x566, 0x568, 
    0x5, 0x140, 0xa1, 0x2, 0x567, 0x55a, 0x3, 0x2, 0x2, 0x2, 0x567, 0x562, 
    0x3, 0x2, 0x2, 0x2, 0x568, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x569, 0x56a, 0x5, 
    0x62, 0x32, 0x2, 0x56a, 0x56b, 0x5, 0x2e, 0x18, 0x2, 0x56b, 0x56c, 0x7, 
    0x71, 0x2, 0x2, 0x56c, 0x56d, 0x7, 0x44, 0x2, 0x2, 0x56d, 0x56e, 0x5, 
    0x16e, 0xb8, 0x2, 0x56e, 0x56f, 0x7, 0x46, 0x2, 0x2, 0x56f, 0x570, 0x7, 
    0x3e, 0x2, 0x2, 0x570, 0x580, 0x3, 0x2, 0x2, 0x2, 0x571, 0x572, 0x7, 
    0xe, 0x2, 0x2, 0x572, 0x573, 0x7, 0x5d, 0x2, 0x2, 0x573, 0x574, 0x7, 
    0x4a, 0x2, 0x2, 0x574, 0x575, 0x7, 0x2e, 0x2, 0x2, 0x575, 0x576, 0x5, 
    0x2e, 0x18, 0x2, 0x576, 0x577, 0x7, 0x71, 0x2, 0x2, 0x577, 0x578, 0x7, 
    0xa9, 0x2, 0x2, 0x578, 0x579, 0x7, 0x17, 0x2, 0x2, 0x579, 0x57a, 0x7, 
    0x55, 0x2, 0x2, 0x57a, 0x57b, 0x7, 0x44, 0x2, 0x2, 0x57b, 0x57c, 0x5, 
    0x16e, 0xb8, 0x2, 0x57c, 0x57d, 0x7, 0x46, 0x2, 0x2, 0x57d, 0x57e, 0x7, 
    0x3e, 0x2, 0x2, 0x57e, 0x580, 0x3, 0x2, 0x2, 0x2, 0x57f, 0x569, 0x3, 
    0x2, 0x2, 0x2, 0x57f, 0x571, 0x3, 0x2, 0x2, 0x2, 0x580, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0x581, 0x582, 0x7, 0xe, 0x2, 0x2, 0x582, 0x583, 0x7, 0x8a, 
    0x2, 0x2, 0x583, 0x584, 0x7, 0x13, 0x2, 0x2, 0x584, 0x585, 0x7, 0x17, 
    0x2, 0x2, 0x585, 0x586, 0x7, 0x4a, 0x2, 0x2, 0x586, 0x587, 0x7, 0x2e, 
    0x2, 0x2, 0x587, 0x588, 0x7, 0x4d, 0x2, 0x2, 0x588, 0x589, 0x5, 0x16e, 
    0xb8, 0x2, 0x589, 0xd9, 0x3, 0x2, 0x2, 0x2, 0x58a, 0x58b, 0x5, 0x2e, 
    0x18, 0x2, 0x58b, 0x58c, 0x7, 0xa3, 0x2, 0x2, 0x58c, 0x58d, 0x7, 0x71, 
    0x2, 0x2, 0x58d, 0x58e, 0x7, 0x2e, 0x2, 0x2, 0x58e, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0x58f, 0x590, 0x5, 0x2e, 0x18, 0x2, 0x590, 0x591, 0x7, 0xa3, 
    0x2, 0x2, 0x591, 0x592, 0x7, 0xa4, 0x2, 0x2, 0x592, 0x593, 0x7, 0xa5, 
    0x2, 0x2, 0x593, 0x594, 0x7, 0x21, 0x2, 0x2, 0x594, 0x595, 0x7, 0xa6, 
    0x2, 0x2, 0x595, 0x59e, 0x3, 0x2, 0x2, 0x2, 0x596, 0x597, 0x5, 0x2e, 
    0x18, 0x2, 0x597, 0x598, 0x7, 0xa3, 0x2, 0x2, 0x598, 0x599, 0x7, 0xa4, 
    0x2, 0x2, 0x599, 0x59a, 0x7, 0xa5, 0x2, 0x2, 0x59a, 0x59b, 0x7, 0x21, 
    0x2, 0x2, 0x59b, 0x59c, 0x7, 0x2e, 0x2, 0x2, 0x59c, 0x59e, 0x3, 0x2, 
    0x2, 0x2, 0x59d, 0x58f, 0x3, 0x2, 0x2, 0x2, 0x59d, 0x596, 0x3, 0x2, 
    0x2, 0x2, 0x59e, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x59f, 0x5a0, 0x7, 0x17, 
    0x2, 0x2, 0x5a0, 0x5a1, 0x7, 0x40, 0x2, 0x2, 0x5a1, 0x5a2, 0x7, 0x36, 
    0x2, 0x2, 0x5a2, 0x5a3, 0x7, 0x41, 0x2, 0x2, 0x5a3, 0x5a4, 0x7, 0x4d, 
    0x2, 0x2, 0x5a4, 0x5a5, 0x7, 0x42, 0x2, 0x2, 0x5a5, 0x5a6, 0x7, 0x21, 
    0x2, 0x2, 0x5a6, 0x5a7, 0x5, 0x16e, 0xb8, 0x2, 0x5a7, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0x5a8, 0x5a9, 0x7, 0x17, 0x2, 0x2, 0x5a9, 0x5aa, 0x7, 0x40, 
    0x2, 0x2, 0x5aa, 0x5ab, 0x7, 0x81, 0x2, 0x2, 0x5ab, 0x5ac, 0x7, 0x4d, 
    0x2, 0x2, 0x5ac, 0x5ad, 0x7, 0x42, 0x2, 0x2, 0x5ad, 0x5ae, 0x7, 0x21, 
    0x2, 0x2, 0x5ae, 0x5af, 0x5, 0x16e, 0xb8, 0x2, 0x5af, 0xe1, 0x3, 0x2, 
    0x2, 0x2, 0x5b0, 0x5b1, 0x7, 0xc0, 0x2, 0x2, 0x5b1, 0x5b2, 0x7, 0x4e, 
    0x2, 0x2, 0x5b2, 0x5b3, 0x7, 0x17, 0x2, 0x2, 0x5b3, 0x5b4, 0x7, 0x5d, 
    0x2, 0x2, 0x5b4, 0x5b5, 0x7, 0x5f, 0x2, 0x2, 0x5b5, 0xe3, 0x3, 0x2, 
    0x2, 0x2, 0x5b6, 0x5b7, 0x5, 0x2e, 0x18, 0x2, 0x5b7, 0x5b8, 0x7, 0xb2, 
    0x2, 0x2, 0x5b8, 0x5b9, 0x7, 0x58, 0x2, 0x2, 0x5b9, 0x5ba, 0x7, 0xcb, 
    0x2, 0x2, 0x5ba, 0x5bb, 0x7, 0x91, 0x2, 0x2, 0x5bb, 0x5bc, 0x7, 0xe, 
    0x2, 0x2, 0x5bc, 0x5bd, 0x7, 0x57, 0x2, 0x2, 0x5bd, 0x5be, 0x7, 0x13, 
    0x2, 0x2, 0x5be, 0x5bf, 0x7, 0x17, 0x2, 0x2, 0x5bf, 0x5c0, 0x7, 0x55, 
    0x2, 0x2, 0x5c0, 0xe5, 0x3, 0x2, 0x2, 0x2, 0x5c1, 0x5c2, 0x7, 0x30, 
    0x2, 0x2, 0x5c2, 0x5c3, 0x7, 0x13, 0x2, 0x2, 0x5c3, 0x5c4, 0x5, 0x2e, 
    0x18, 0x2, 0x5c4, 0x5c5, 0x7, 0x2e, 0x2, 0x2, 0x5c5, 0x5c6, 0x7, 0xc5, 
    0x2, 0x2, 0x5c6, 0x5c7, 0x7, 0x88, 0x2, 0x2, 0x5c7, 0x5c8, 0x7, 0x22, 
    0x2, 0x2, 0x5c8, 0x5c9, 0x7, 0x2e, 0x2, 0x2, 0x5c9, 0x5ca, 0x7, 0xa, 
    0x2, 0x2, 0x5ca, 0x5cb, 0x7, 0x4, 0x2, 0x2, 0x5cb, 0x5cc, 0x7, 0x14, 
    0x2, 0x2, 0x5cc, 0x5cd, 0x7, 0xb, 0x2, 0x2, 0x5cd, 0x5ce, 0x7, 0xc5, 
    0x2, 0x2, 0x5ce, 0x5cf, 0x7, 0x89, 0x2, 0x2, 0x5cf, 0x5d0, 0x7, 0x86, 
    0x2, 0x2, 0x5d0, 0x5d1, 0x7, 0x8a, 0x2, 0x2, 0x5d1, 0x5d2, 0x7, 0x26, 
    0x2, 0x2, 0x5d2, 0x5d3, 0x5, 0x62, 0x32, 0x2, 0x5d3, 0x5e8, 0x3, 0x2, 
    0x2, 0x2, 0x5d4, 0x5d5, 0x7, 0x30, 0x2, 0x2, 0x5d5, 0x5d6, 0x7, 0x13, 
    0x2, 0x2, 0x5d6, 0x5d7, 0x5, 0x2e, 0x18, 0x2, 0x5d7, 0x5d8, 0x7, 0x2e, 
    0x2, 0x2, 0x5d8, 0x5d9, 0x7, 0xc5, 0x2, 0x2, 0x5d9, 0x5da, 0x7, 0x88, 
    0x2, 0x2, 0x5da, 0x5db, 0x7, 0x22, 0x2, 0x2, 0x5db, 0x5dc, 0x7, 0x2e, 
    0x2, 0x2, 0x5dc, 0x5dd, 0x7, 0xa, 0x2, 0x2, 0x5dd, 0x5de, 0x7, 0x4, 
    0x2, 0x2, 0x5de, 0x5df, 0x7, 0x14, 0x2, 0x2, 0x5df, 0x5e0, 0x7, 0xb, 
    0x2, 0x2, 0x5e0, 0x5e1, 0x7, 0xc5, 0x2, 0x2, 0x5e1, 0x5e2, 0x7, 0x89, 
    0x2, 0x2, 0x5e2, 0x5e3, 0x7, 0x86, 0x2, 0x2, 0x5e3, 0x5e4, 0x7, 0x8a, 
    0x2, 0x2, 0x5e4, 0x5e5, 0x7, 0x26, 0x2, 0x2, 0x5e5, 0x5e6, 0x5, 0x7c, 
    0x3f, 0x2, 0x5e6, 0x5e8, 0x3, 0x2, 0x2, 0x2, 0x5e7, 0x5c1, 0x3, 0x2, 
    0x2, 0x2, 0x5e7, 0x5d4, 0x3, 0x2, 0x2, 0x2, 0x5e8, 0xe7, 0x3, 0x2, 0x2, 
    0x2, 0x5e9, 0x5ea, 0x7, 0x30, 0x2, 0x2, 0x5ea, 0x5eb, 0x7, 0x13, 0x2, 
    0x2, 0x5eb, 0x5ec, 0x5, 0x2e, 0x18, 0x2, 0x5ec, 0x5ed, 0x7, 0x2e, 0x2, 
    0x2, 0x5ed, 0x5ee, 0x7, 0xc5, 0x2, 0x2, 0x5ee, 0x5ef, 0x7, 0x88, 0x2, 
    0x2, 0x5ef, 0x5f0, 0x7, 0x22, 0x2, 0x2, 0x5f0, 0x5f1, 0x7, 0x2e, 0x2, 
    0x2, 0x5f1, 0x5f2, 0x7, 0xa, 0x2, 0x2, 0x5f2, 0x5f3, 0x7, 0x4, 0x2, 
    0x2, 0x5f3, 0x5f4, 0x7, 0x14, 0x2, 0x2, 0x5f4, 0x5f5, 0x7, 0xb, 0x2, 
    0x2, 0x5f5, 0x5f6, 0x7, 0xc5, 0x2, 0x2, 0x5f6, 0x5f7, 0x7, 0x58, 0x2, 
    0x2, 0x5f7, 0x5f8, 0x5, 0x16e, 0xb8, 0x2, 0x5f8, 0x5f9, 0x7, 0x8a, 0x2, 
    0x2, 0x5f9, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x5fa, 0x5fb, 0x7, 0x9f, 0x2, 
    0x2, 0x5fb, 0x5fc, 0x7, 0x4, 0x2, 0x2, 0x5fc, 0x5fd, 0x7, 0xbc, 0x2, 
    0x2, 0x5fd, 0x5fe, 0x5, 0x2e, 0x18, 0x2, 0x5fe, 0x5ff, 0x7, 0x4c, 0x2, 
    0x2, 0x5ff, 0x600, 0x5, 0x140, 0xa1, 0x2, 0x600, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0x601, 0x60e, 0x5, 0xdc, 0x6f, 0x2, 0x602, 0x60e, 0x5, 0xda, 0x6e, 
    0x2, 0x603, 0x60e, 0x5, 0xd8, 0x6d, 0x2, 0x604, 0x60e, 0x5, 0xd6, 0x6c, 
    0x2, 0x605, 0x60e, 0x5, 0xd4, 0x6b, 0x2, 0x606, 0x60e, 0x5, 0xde, 0x70, 
    0x2, 0x607, 0x60e, 0x5, 0xe0, 0x71, 0x2, 0x608, 0x60e, 0x5, 0xe2, 0x72, 
    0x2, 0x609, 0x60e, 0x5, 0xe4, 0x73, 0x2, 0x60a, 0x60e, 0x5, 0xe6, 0x74, 
    0x2, 0x60b, 0x60e, 0x5, 0xe8, 0x75, 0x2, 0x60c, 0x60e, 0x5, 0xea, 0x76, 
    0x2, 0x60d, 0x601, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x602, 0x3, 0x2, 0x2, 
    0x2, 0x60d, 0x603, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x604, 0x3, 0x2, 0x2, 
    0x2, 0x60d, 0x605, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x606, 0x3, 0x2, 0x2, 
    0x2, 0x60d, 0x607, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x608, 0x3, 0x2, 0x2, 
    0x2, 0x60d, 0x609, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x60a, 0x3, 0x2, 0x2, 
    0x2, 0x60d, 0x60b, 0x3, 0x2, 0x2, 0x2, 0x60d, 0x60c, 0x3, 0x2, 0x2, 
    0x2, 0x60e, 0xed, 0x3, 0x2, 0x2, 0x2, 0x60f, 0x610, 0x7, 0x69, 0x2, 
    0x2, 0x610, 0xef, 0x3, 0x2, 0x2, 0x2, 0x611, 0x612, 0x7, 0xe, 0x2, 0x2, 
    0x612, 0x613, 0x7, 0x57, 0x2, 0x2, 0x613, 0x614, 0x7, 0x13, 0x2, 0x2, 
    0x614, 0x615, 0x5, 0x2e, 0x18, 0x2, 0x615, 0x616, 0x7, 0x55, 0x2, 0x2, 
    0x616, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x617, 0x618, 0x7, 0xe, 0x2, 0x2, 
    0x618, 0x619, 0x7, 0x57, 0x2, 0x2, 0x619, 0x61a, 0x7, 0x13, 0x2, 0x2, 
    0x61a, 0x61b, 0x5, 0x2e, 0x18, 0x2, 0x61b, 0x61c, 0x7, 0x55, 0x2, 0x2, 
    0x61c, 0x61e, 0x3, 0x2, 0x2, 0x2, 0x61d, 0x611, 0x3, 0x2, 0x2, 0x2, 
    0x61d, 0x617, 0x3, 0x2, 0x2, 0x2, 0x61e, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x61f, 
    0x620, 0x7, 0xe, 0x2, 0x2, 0x620, 0x621, 0x7, 0x54, 0x2, 0x2, 0x621, 
    0x622, 0x7, 0x13, 0x2, 0x2, 0x622, 0x623, 0x5, 0x2e, 0x18, 0x2, 0x623, 
    0x624, 0x7, 0x55, 0x2, 0x2, 0x624, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x625, 
    0x626, 0x7, 0xe, 0x2, 0x2, 0x626, 0x627, 0x7, 0x57, 0x2, 0x2, 0x627, 
    0x628, 0x7, 0x13, 0x2, 0x2, 0x628, 0x629, 0x5, 0x2e, 0x18, 0x2, 0x629, 
    0x62a, 0x7, 0x2a, 0x2, 0x2, 0x62a, 0x62b, 0x7, 0x55, 0x2, 0x2, 0x62b, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0x62c, 0x62d, 0x7, 0xe, 0x2, 0x2, 0x62d, 0x62e, 
    0x7, 0x54, 0x2, 0x2, 0x62e, 0x62f, 0x7, 0x13, 0x2, 0x2, 0x62f, 0x630, 
    0x7, 0xe, 0x2, 0x2, 0x630, 0x639, 0x7, 0x55, 0x2, 0x2, 0x631, 0x632, 
    0x7, 0xe, 0x2, 0x2, 0x632, 0x633, 0x7, 0x54, 0x2, 0x2, 0x633, 0x634, 
    0x7, 0x13, 0x2, 0x2, 0x634, 0x639, 0x7, 0x55, 0x2, 0x2, 0x635, 0x636, 
    0x7, 0x54, 0x2, 0x2, 0x636, 0x637, 0x7, 0x13, 0x2, 0x2, 0x637, 0x639, 
    0x7, 0x55, 0x2, 0x2, 0x638, 0x62c, 0x3, 0x2, 0x2, 0x2, 0x638, 0x631, 
    0x3, 0x2, 0x2, 0x2, 0x638, 0x635, 0x3, 0x2, 0x2, 0x2, 0x639, 0xf7, 0x3, 
    0x2, 0x2, 0x2, 0x63a, 0x63f, 0x5, 0xf0, 0x79, 0x2, 0x63b, 0x63f, 0x5, 
    0xf2, 0x7a, 0x2, 0x63c, 0x63f, 0x5, 0xf4, 0x7b, 0x2, 0x63d, 0x63f, 0x5, 
    0xf6, 0x7c, 0x2, 0x63e, 0x63a, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x63b, 0x3, 
    0x2, 0x2, 0x2, 0x63e, 0x63c, 0x3, 0x2, 0x2, 0x2, 0x63e, 0x63d, 0x3, 
    0x2, 0x2, 0x2, 0x63f, 0xf9, 0x3, 0x2, 0x2, 0x2, 0x640, 0x641, 0x7, 0x91, 
    0x2, 0x2, 0x641, 0x642, 0x7, 0xe, 0x2, 0x2, 0x642, 0x643, 0x7, 0x57, 
    0x2, 0x2, 0x643, 0x644, 0x7, 0x13, 0x2, 0x2, 0x644, 0x645, 0x7, 0xe, 
    0x2, 0x2, 0x645, 0x646, 0x7, 0xbf, 0x2, 0x2, 0x646, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0x647, 0x648, 0x7, 0x39, 0x2, 0x2, 0x648, 0x649, 0x7, 0xe, 
    0x2, 0x2, 0x649, 0x64a, 0x7, 0xa8, 0x2, 0x2, 0x64a, 0x64b, 0x7, 0xac, 
    0x2, 0x2, 0x64b, 0x64c, 0x7, 0xa9, 0x2, 0x2, 0x64c, 0x64d, 0x5, 0x28, 
    0x15, 0x2, 0x64d, 0x64e, 0x7, 0x55, 0x2, 0x2, 0x64e, 0x65e, 0x3, 0x2, 
    0x2, 0x2, 0x64f, 0x650, 0x7, 0x39, 0x2, 0x2, 0x650, 0x651, 0x7, 0xe, 
    0x2, 0x2, 0x651, 0x652, 0x7, 0xa8, 0x2, 0x2, 0x652, 0x653, 0x7, 0xac, 
    0x2, 0x2, 0x653, 0x654, 0x7, 0xa9, 0x2, 0x2, 0x654, 0x655, 0x7, 0x1b, 
    0x2, 0x2, 0x655, 0x65e, 0x7, 0x55, 0x2, 0x2, 0x656, 0x657, 0x7, 0xa9, 
    0x2, 0x2, 0x657, 0x658, 0x7, 0x1b, 0x2, 0x2, 0x658, 0x65e, 0x7, 0x55, 
    0x2, 0x2, 0x659, 0x65a, 0x7, 0xa9, 0x2, 0x2, 0x65a, 0x65b, 0x5, 0x28, 
    0x15, 0x2, 0x65b, 0x65c, 0x7, 0x55, 0x2, 0x2, 0x65c, 0x65e, 0x3, 0x2, 
    0x2, 0x2, 0x65d, 0x647, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x64f, 0x3, 0x2, 
    0x2, 0x2, 0x65d, 0x656, 0x3, 0x2, 0x2, 0x2, 0x65d, 0x659, 0x3, 0x2, 
    0x2, 0x2, 0x65e, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x65f, 0x660, 0x5, 0x28, 
    0x15, 0x2, 0x660, 0x661, 0x7, 0xb1, 0x2, 0x2, 0x661, 0x666, 0x3, 0x2, 
    0x2, 0x2, 0x662, 0x663, 0x5, 0x28, 0x15, 0x2, 0x663, 0x664, 0x7, 0xb2, 
    0x2, 0x2, 0x664, 0x666, 0x3, 0x2, 0x2, 0x2, 0x665, 0x65f, 0x3, 0x2, 
    0x2, 0x2, 0x665, 0x662, 0x3, 0x2, 0x2, 0x2, 0x666, 0xff, 0x3, 0x2, 0x2, 
    0x2, 0x667, 0x668, 0x5, 0x28, 0x15, 0x2, 0x668, 0x669, 0x7, 0xa3, 0x2, 
    0x2, 0x669, 0x101, 0x3, 0x2, 0x2, 0x2, 0x66a, 0x66c, 0x5, 0x2e, 0x18, 
    0x2, 0x66b, 0x66d, 0x7, 0x7e, 0x2, 0x2, 0x66c, 0x66b, 0x3, 0x2, 0x2, 
    0x2, 0x66c, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x66e, 0x3, 0x2, 0x2, 
    0x2, 0x66e, 0x66f, 0x7, 0xa1, 0x2, 0x2, 0x66f, 0x670, 0x5, 0x62, 0x32, 
    0x2, 0x670, 0x103, 0x3, 0x2, 0x2, 0x2, 0x671, 0x673, 0x5, 0x2e, 0x18, 
    0x2, 0x672, 0x674, 0x7, 0x7e, 0x2, 0x2, 0x673, 0x672, 0x3, 0x2, 0x2, 
    0x2, 0x673, 0x674, 0x3, 0x2, 0x2, 0x2, 0x674, 0x675, 0x3, 0x2, 0x2, 
    0x2, 0x675, 0x676, 0x7, 0x71, 0x2, 0x2, 0x676, 0x677, 0x5, 0x62, 0x32, 
    0x2, 0x677, 0x105, 0x3, 0x2, 0x2, 0x2, 0x678, 0x67a, 0x5, 0x2e, 0x18, 
    0x2, 0x679, 0x67b, 0x7, 0x7e, 0x2, 0x2, 0x67a, 0x679, 0x3, 0x2, 0x2, 
    0x2, 0x67a, 0x67b, 0x3, 0x2, 0x2, 0x2, 0x67b, 0x67d, 0x3, 0x2, 0x2, 
    0x2, 0x67c, 0x67e, 0x7, 0x1f, 0x2, 0x2, 0x67d, 0x67c, 0x3, 0x2, 0x2, 
    0x2, 0x67d, 0x67e, 0x3, 0x2, 0x2, 0x2, 0x67e, 0x67f, 0x3, 0x2, 0x2, 
    0x2, 0x67f, 0x680, 0x7, 0x9d, 0x2, 0x2, 0x680, 0x681, 0x5, 0x28, 0x15, 
    0x2, 0x681, 0x682, 0x7, 0x5d, 0x2, 0x2, 0x682, 0x683, 0x7, 0x5f, 0x2, 
    0x2, 0x683, 0x689, 0x3, 0x2, 0x2, 0x2, 0x684, 0x685, 0x5, 0x2e, 0x18, 
    0x2, 0x685, 0x686, 0x7, 0x5d, 0x2, 0x2, 0x686, 0x687, 0x7, 0x5f, 0x2, 
    0x2, 0x687, 0x689, 0x3, 0x2, 0x2, 0x2, 0x688, 0x678, 0x3, 0x2, 0x2, 
    0x2, 0x688, 0x684, 0x3, 0x2, 0x2, 0x2, 0x689, 0x107, 0x3, 0x2, 0x2, 
    0x2, 0x68a, 0x68b, 0x5, 0x80, 0x41, 0x2, 0x68b, 0x68c, 0x7, 0x4d, 0x2, 
    0x2, 0x68c, 0x68d, 0x7, 0x1c, 0x2, 0x2, 0x68d, 0x68e, 0x7, 0x7, 0x2, 
    0x2, 0x68e, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x68f, 0x690, 0x5, 0x80, 0x41, 
    0x2, 0x690, 0x691, 0x7, 0x4d, 0x2, 0x2, 0x691, 0x692, 0x7, 0x1c, 0x2, 
    0x2, 0x692, 0x693, 0x5, 0x7c, 0x3f, 0x2, 0x693, 0x69f, 0x3, 0x2, 0x2, 
    0x2, 0x694, 0x695, 0x5, 0x80, 0x41, 0x2, 0x695, 0x696, 0x7, 0x4d, 0x2, 
    0x2, 0x696, 0x697, 0x7, 0x1c, 0x2, 0x2, 0x697, 0x698, 0x5, 0x62, 0x32, 
    0x2, 0x698, 0x69f, 0x3, 0x2, 0x2, 0x2, 0x699, 0x69a, 0x5, 0x80, 0x41, 
    0x2, 0x69a, 0x69b, 0x7, 0x4d, 0x2, 0x2, 0x69b, 0x69c, 0x7, 0x1c, 0x2, 
    0x2, 0x69c, 0x69d, 0x5, 0x2e, 0x18, 0x2, 0x69d, 0x69f, 0x3, 0x2, 0x2, 
    0x2, 0x69e, 0x68a, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x68f, 0x3, 0x2, 0x2, 
    0x2, 0x69e, 0x694, 0x3, 0x2, 0x2, 0x2, 0x69e, 0x699, 0x3, 0x2, 0x2, 
    0x2, 0x69f, 0x109, 0x3, 0x2, 0x2, 0x2, 0x6a0, 0x6a1, 0x5, 0x2e, 0x18, 
    0x2, 0x6a1, 0x6a2, 0x7, 0x4d, 0x2, 0x2, 0x6a2, 0x6a3, 0x7, 0x47, 0x2, 
    0x2, 0x6a3, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x6a4, 0x6a5, 0x5, 0x6e, 0x38, 
    0x2, 0x6a5, 0x6a6, 0x7, 0x1f, 0x2, 0x2, 0x6a6, 0x6a7, 0x7, 0x6d, 0x2, 
    0x2, 0x6a7, 0x6a8, 0x7, 0x7, 0x2, 0x2, 0x6a8, 0x10d, 0x3, 0x2, 0x2, 
    0x2, 0x6a9, 0x6aa, 0x5, 0x2e, 0x18, 0x2, 0x6aa, 0x6ab, 0x7, 0x7e, 0x2, 
    0x2, 0x6ab, 0x6ac, 0x7, 0x91, 0x2, 0x2, 0x6ac, 0x6ad, 0x7, 0x92, 0x2, 
    0x2, 0x6ad, 0x6ae, 0x5, 0x16e, 0xb8, 0x2, 0x6ae, 0x6af, 0x7, 0x85, 0x2, 
    0x2, 0x6af, 0x6b0, 0x7, 0x2e, 0x2, 0x2, 0x6b0, 0x6b1, 0x7, 0x6, 0x2, 
    0x2, 0x6b1, 0x6b2, 0x5, 0x28, 0x15, 0x2, 0x6b2, 0x6b3, 0x7, 0x36, 0x2, 
    0x2, 0x6b3, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x6b4, 0x6b5, 0x5, 0x2e, 0x18, 
    0x2, 0x6b5, 0x6b6, 0x9, 0x8, 0x2, 0x2, 0x6b6, 0x6b7, 0x7, 0x38, 0x2, 
    0x2, 0x6b7, 0x111, 0x3, 0x2, 0x2, 0x2, 0x6b8, 0x6b9, 0x5, 0x2e, 0x18, 
    0x2, 0x6b9, 0x6ba, 0x7, 0xb5, 0x2, 0x2, 0x6ba, 0x6bb, 0x7, 0xb4, 0x2, 
    0x2, 0x6bb, 0x6bc, 0x7, 0x14, 0x2, 0x2, 0x6bc, 0x6bd, 0x7, 0xb, 0x2, 
    0x2, 0x6bd, 0x6be, 0x7, 0x76, 0x2, 0x2, 0x6be, 0x6bf, 0x7, 0x55, 0x2, 
    0x2, 0x6bf, 0x113, 0x3, 0x2, 0x2, 0x2, 0x6c0, 0x6c1, 0x5, 0x62, 0x32, 
    0x2, 0x6c1, 0x6c2, 0x7, 0x44, 0x2, 0x2, 0x6c2, 0x6c3, 0x7, 0x4d, 0x2, 
    0x2, 0x6c3, 0x6c4, 0x7, 0xb7, 0x2, 0x2, 0x6c4, 0x115, 0x3, 0x2, 0x2, 
    0x2, 0x6c5, 0x6c6, 0x5, 0x2e, 0x18, 0x2, 0x6c6, 0x6c7, 0x7, 0x7e, 0x2, 
    0x2, 0x6c7, 0x6c8, 0x7, 0x11, 0x2, 0x2, 0x6c8, 0x6c9, 0x7, 0x81, 0x2, 
    0x2, 0x6c9, 0x6ca, 0x7, 0x56, 0x2, 0x2, 0x6ca, 0x6cb, 0x5, 0x2e, 0x18, 
    0x2, 0x6cb, 0x117, 0x3, 0x2, 0x2, 0x2, 0x6cc, 0x6cd, 0x5, 0x2e, 0x18, 
    0x2, 0x6cd, 0x6ce, 0x7, 0x7e, 0x2, 0x2, 0x6ce, 0x6cf, 0x7, 0x9c, 0x2, 
    0x2, 0x6cf, 0x6d0, 0x7, 0x3e, 0x2, 0x2, 0x6d0, 0x119, 0x3, 0x2, 0x2, 
    0x2, 0x6d1, 0x6d2, 0x5, 0x80, 0x41, 0x2, 0x6d2, 0x6d3, 0x7, 0x4d, 0x2, 
    0x2, 0x6d3, 0x6d4, 0x7, 0x6, 0x2, 0x2, 0x6d4, 0x6d5, 0x7, 0x7, 0x2, 
    0x2, 0x6d5, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x6d6, 0x6d7, 0x5, 0x62, 0x32, 
    0x2, 0x6d7, 0x6d8, 0x7, 0x4d, 0x2, 0x2, 0x6d8, 0x6d9, 0x7, 0x4f, 0x2, 
    0x2, 0x6d9, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x6da, 0x6db, 0x7, 0x14, 0x2, 
    0x2, 0x6db, 0x6dc, 0x7, 0x3e, 0x2, 0x2, 0x6dc, 0x6dd, 0x7, 0x4d, 0x2, 
    0x2, 0x6dd, 0x6df, 0x7, 0x83, 0x2, 0x2, 0x6de, 0x6e0, 0x7, 0x6, 0x2, 
    0x2, 0x6df, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x6df, 0x6e0, 0x3, 0x2, 0x2, 
    0x2, 0x6e0, 0x6e1, 0x3, 0x2, 0x2, 0x2, 0x6e1, 0x6e2, 0x7, 0x76, 0x2, 
    0x2, 0x6e2, 0x6e3, 0x7, 0x84, 0x2, 0x2, 0x6e3, 0x11f, 0x3, 0x2, 0x2, 
    0x2, 0x6e4, 0x6e5, 0x5, 0x62, 0x32, 0x2, 0x6e5, 0x6e6, 0x7, 0x4d, 0x2, 
    0x2, 0x6e6, 0x6e8, 0x7, 0x85, 0x2, 0x2, 0x6e7, 0x6e9, 0x7, 0x6, 0x2, 
    0x2, 0x6e8, 0x6e7, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6e9, 0x3, 0x2, 0x2, 
    0x2, 0x6e9, 0x6ea, 0x3, 0x2, 0x2, 0x2, 0x6ea, 0x6eb, 0x7, 0x76, 0x2, 
    0x2, 0x6eb, 0x6ec, 0x7, 0x84, 0x2, 0x2, 0x6ec, 0x121, 0x3, 0x2, 0x2, 
    0x2, 0x6ed, 0x6ee, 0x5, 0x2e, 0x18, 0x2, 0x6ee, 0x6ef, 0x7, 0x4d, 0x2, 
    0x2, 0x6ef, 0x6f0, 0x7, 0x47, 0x2, 0x2, 0x6f0, 0x123, 0x3, 0x2, 0x2, 
    0x2, 0x6f1, 0x6f2, 0x5, 0x2e, 0x18, 0x2, 0x6f2, 0x6f3, 0x7, 0x4d, 0x2, 
    0x2, 0x6f3, 0x6f4, 0x7, 0x48, 0x2, 0x2, 0x6f4, 0x125, 0x3, 0x2, 0x2, 
    0x2, 0x6f5, 0x6f6, 0x5, 0x2e, 0x18, 0x2, 0x6f6, 0x6f7, 0x7, 0x7e, 0x2, 
    0x2, 0x6f7, 0x6f8, 0x7, 0x91, 0x2, 0x2, 0x6f8, 0x6f9, 0x7, 0x92, 0x2, 
    0x2, 0x6f9, 0x6fa, 0x5, 0x16e, 0xb8, 0x2, 0x6fa, 0x6fb, 0x7, 0x2e, 0x2, 
    0x2, 0x6fb, 0x6fc, 0x7, 0x6, 0x2, 0x2, 0x6fc, 0x6fd, 0x5, 0x28, 0x15, 
    0x2, 0x6fd, 0x6fe, 0x7, 0x62, 0x2, 0x2, 0x6fe, 0x127, 0x3, 0x2, 0x2, 
    0x2, 0x6ff, 0x700, 0x5, 0x2e, 0x18, 0x2, 0x700, 0x701, 0x7, 0x7e, 0x2, 
    0x2, 0x701, 0x702, 0x7, 0xa2, 0x2, 0x2, 0x702, 0x703, 0x5, 0x16e, 0xb8, 
    0x2, 0x703, 0x704, 0x7, 0x45, 0x2, 0x2, 0x704, 0x705, 0x7, 0x11, 0x2, 
    0x2, 0x705, 0x706, 0x7, 0x32, 0x2, 0x2, 0x706, 0x707, 0x7, 0x76, 0x2, 
    0x2, 0x707, 0x708, 0x7, 0x55, 0x2, 0x2, 0x708, 0x129, 0x3, 0x2, 0x2, 
    0x2, 0x709, 0x70a, 0x5, 0x62, 0x32, 0x2, 0x70a, 0x70b, 0x7, 0xa1, 0x2, 
    0x2, 0x70b, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x70c, 0x70d, 0x5, 0x2e, 0x18, 
    0x2, 0x70d, 0x70e, 0x7, 0x86, 0x2, 0x2, 0x70e, 0x70f, 0x7, 0x14, 0x2, 
    0x2, 0x70f, 0x710, 0x7, 0x2e, 0x2, 0x2, 0x710, 0x12d, 0x3, 0x2, 0x2, 
    0x2, 0x711, 0x712, 0x5, 0x2e, 0x18, 0x2, 0x712, 0x713, 0x7, 0x8e, 0x2, 
    0x2, 0x713, 0x714, 0x7, 0x7, 0x2, 0x2, 0x714, 0x715, 0x7, 0x6, 0x2, 
    0x2, 0x715, 0x716, 0x5, 0x7c, 0x3f, 0x2, 0x716, 0x12f, 0x3, 0x2, 0x2, 
    0x2, 0x717, 0x71c, 0x5, 0x2e, 0x18, 0x2, 0x718, 0x719, 0x7, 0x45, 0x2, 
    0x2, 0x719, 0x71b, 0x5, 0x2e, 0x18, 0x2, 0x71a, 0x718, 0x3, 0x2, 0x2, 
    0x2, 0x71b, 0x71e, 0x3, 0x2, 0x2, 0x2, 0x71c, 0x71a, 0x3, 0x2, 0x2, 
    0x2, 0x71c, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71f, 0x3, 0x2, 0x2, 
    0x2, 0x71e, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71f, 0x722, 0x7, 0xaa, 0x2, 
    0x2, 0x720, 0x723, 0x5, 0x62, 0x32, 0x2, 0x721, 0x723, 0x5, 0x7c, 0x3f, 
    0x2, 0x722, 0x720, 0x3, 0x2, 0x2, 0x2, 0x722, 0x721, 0x3, 0x2, 0x2, 
    0x2, 0x723, 0x131, 0x3, 0x2, 0x2, 0x2, 0x724, 0x725, 0x5, 0x2e, 0x18, 
    0x2, 0x725, 0x726, 0x7, 0x51, 0x2, 0x2, 0x726, 0x727, 0x5, 0x62, 0x32, 
    0x2, 0x727, 0x728, 0x7, 0x19, 0x2, 0x2, 0x728, 0x729, 0x5, 0x2e, 0x18, 
    0x2, 0x729, 0x133, 0x3, 0x2, 0x2, 0x2, 0x72a, 0x72b, 0x5, 0x62, 0x32, 
    0x2, 0x72b, 0x72c, 0x7, 0x4d, 0x2, 0x2, 0x72c, 0x72d, 0x7, 0x85, 0x2, 
    0x2, 0x72d, 0x135, 0x3, 0x2, 0x2, 0x2, 0x72e, 0x72f, 0x5, 0x2e, 0x18, 
    0x2, 0x72f, 0x730, 0x7, 0x82, 0x2, 0x2, 0x730, 0x731, 0x5, 0x2e, 0x18, 
    0x2, 0x731, 0x137, 0x3, 0x2, 0x2, 0x2, 0x732, 0x733, 0x5, 0x62, 0x32, 
    0x2, 0x733, 0x734, 0x7, 0x4d, 0x2, 0x2, 0x734, 0x735, 0x7, 0xae, 0x2, 
    0x2, 0x735, 0x736, 0x7, 0x19, 0x2, 0x2, 0x736, 0x737, 0x7, 0x17, 0x2, 
    0x2, 0x737, 0x738, 0x7, 0x62, 0x2, 0x2, 0x738, 0x139, 0x3, 0x2, 0x2, 
    0x2, 0x739, 0x73a, 0x5, 0x62, 0x32, 0x2, 0x73a, 0x73b, 0x5, 0x2e, 0x18, 
    0x2, 0x73b, 0x73c, 0x7, 0x71, 0x2, 0x2, 0x73c, 0x73d, 0x7, 0xbb, 0x2, 
    0x2, 0x73d, 0x73e, 0x7, 0x19, 0x2, 0x2, 0x73e, 0x73f, 0x7, 0xa1, 0x2, 
    0x2, 0x73f, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x740, 0x741, 0x5, 0x2e, 0x18, 
    0x2, 0x741, 0x742, 0x7, 0xd, 0x2, 0x2, 0x742, 0x743, 0x5, 0x2e, 0x18, 
    0x2, 0x743, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x744, 0x745, 0x5, 0x2e, 0x18, 
    0x2, 0x745, 0x746, 0x7, 0xad, 0x2, 0x2, 0x746, 0x747, 0x7, 0x15, 0x2, 
    0x2, 0x747, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x748, 0x76b, 0x5, 0x122, 0x92, 
    0x2, 0x749, 0x76b, 0x5, 0x124, 0x93, 0x2, 0x74a, 0x76b, 0x5, 0x126, 
    0x94, 0x2, 0x74b, 0x76b, 0x5, 0x128, 0x95, 0x2, 0x74c, 0x76b, 0x5, 0x12a, 
    0x96, 0x2, 0x74d, 0x76b, 0x5, 0x12c, 0x97, 0x2, 0x74e, 0x76b, 0x5, 0x12e, 
    0x98, 0x2, 0x74f, 0x76b, 0x5, 0x130, 0x99, 0x2, 0x750, 0x76b, 0x5, 0x132, 
    0x9a, 0x2, 0x751, 0x76b, 0x5, 0x134, 0x9b, 0x2, 0x752, 0x76b, 0x5, 0x136, 
    0x9c, 0x2, 0x753, 0x76b, 0x5, 0x138, 0x9d, 0x2, 0x754, 0x76b, 0x5, 0x13a, 
    0x9e, 0x2, 0x755, 0x76b, 0x5, 0x13c, 0x9f, 0x2, 0x756, 0x76b, 0x5, 0x13e, 
    0xa0, 0x2, 0x757, 0x76b, 0x5, 0x11e, 0x90, 0x2, 0x758, 0x76b, 0x5, 0xfe, 
    0x80, 0x2, 0x759, 0x76b, 0x5, 0x100, 0x81, 0x2, 0x75a, 0x76b, 0x5, 0x102, 
    0x82, 0x2, 0x75b, 0x76b, 0x5, 0x106, 0x84, 0x2, 0x75c, 0x76b, 0x5, 0x108, 
    0x85, 0x2, 0x75d, 0x76b, 0x5, 0x10a, 0x86, 0x2, 0x75e, 0x76b, 0x5, 0x104, 
    0x83, 0x2, 0x75f, 0x76b, 0x5, 0x10c, 0x87, 0x2, 0x760, 0x76b, 0x5, 0x10e, 
    0x88, 0x2, 0x761, 0x76b, 0x5, 0x110, 0x89, 0x2, 0x762, 0x76b, 0x5, 0x112, 
    0x8a, 0x2, 0x763, 0x76b, 0x5, 0x114, 0x8b, 0x2, 0x764, 0x76b, 0x5, 0x116, 
    0x8c, 0x2, 0x765, 0x76b, 0x5, 0x118, 0x8d, 0x2, 0x766, 0x76b, 0x5, 0x11a, 
    0x8e, 0x2, 0x767, 0x76b, 0x5, 0x11c, 0x8f, 0x2, 0x768, 0x76b, 0x5, 0x11e, 
    0x90, 0x2, 0x769, 0x76b, 0x5, 0x120, 0x91, 0x2, 0x76a, 0x748, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x749, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x74a, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x74b, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x74c, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x74d, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x74e, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x74f, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x750, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x751, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x752, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x753, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x754, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x755, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x756, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x757, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x758, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x759, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x75a, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x75b, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x75c, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x75d, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x75e, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x75f, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x760, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x761, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x762, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x763, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x764, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x765, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x766, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x767, 0x3, 0x2, 0x2, 0x2, 0x76a, 0x768, 0x3, 0x2, 
    0x2, 0x2, 0x76a, 0x769, 0x3, 0x2, 0x2, 0x2, 0x76b, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x76c, 0x76d, 0x7, 0x91, 0x2, 0x2, 0x76d, 0x76e, 0x5, 0xf8, 
    0x7d, 0x2, 0x76e, 0x76f, 0x7, 0xc5, 0x2, 0x2, 0x76f, 0x770, 0x5, 0x182, 
    0xc2, 0x2, 0x770, 0x782, 0x3, 0x2, 0x2, 0x2, 0x771, 0x772, 0x7, 0xa7, 
    0x2, 0x2, 0x772, 0x774, 0x5, 0x140, 0xa1, 0x2, 0x773, 0x775, 0x5, 0xfc, 
    0x7f, 0x2, 0x774, 0x773, 0x3, 0x2, 0x2, 0x2, 0x774, 0x775, 0x3, 0x2, 
    0x2, 0x2, 0x775, 0x776, 0x3, 0x2, 0x2, 0x2, 0x776, 0x777, 0x7, 0xc5, 
    0x2, 0x2, 0x777, 0x778, 0x5, 0x182, 0xc2, 0x2, 0x778, 0x782, 0x3, 0x2, 
    0x2, 0x2, 0x779, 0x77a, 0x5, 0xee, 0x78, 0x2, 0x77a, 0x77b, 0x7, 0xc7, 
    0x2, 0x2, 0x77b, 0x77c, 0x5, 0x182, 0xc2, 0x2, 0x77c, 0x782, 0x3, 0x2, 
    0x2, 0x2, 0x77d, 0x77e, 0x5, 0xfa, 0x7e, 0x2, 0x77e, 0x77f, 0x7, 0xc5, 
    0x2, 0x2, 0x77f, 0x780, 0x5, 0x182, 0xc2, 0x2, 0x780, 0x782, 0x3, 0x2, 
    0x2, 0x2, 0x781, 0x76c, 0x3, 0x2, 0x2, 0x2, 0x781, 0x771, 0x3, 0x2, 
    0x2, 0x2, 0x781, 0x779, 0x3, 0x2, 0x2, 0x2, 0x781, 0x77d, 0x3, 0x2, 
    0x2, 0x2, 0x782, 0x143, 0x3, 0x2, 0x2, 0x2, 0x783, 0x784, 0x7, 0x4c, 
    0x2, 0x2, 0x784, 0x785, 0x5, 0x2e, 0x18, 0x2, 0x785, 0x786, 0x7, 0xaf, 
    0x2, 0x2, 0x786, 0x787, 0x7, 0xad, 0x2, 0x2, 0x787, 0x788, 0x7, 0x15, 
    0x2, 0x2, 0x788, 0x789, 0x7, 0xc5, 0x2, 0x2, 0x789, 0x78a, 0x7, 0xb0, 
    0x2, 0x2, 0x78a, 0x78b, 0x5, 0x2e, 0x18, 0x2, 0x78b, 0x78c, 0x7, 0xad, 
    0x2, 0x2, 0x78c, 0x78d, 0x7, 0xe, 0x2, 0x2, 0x78d, 0x78e, 0x7, 0x15, 
    0x2, 0x2, 0x78e, 0x145, 0x3, 0x2, 0x2, 0x2, 0x78f, 0x790, 0x7, 0x4c, 
    0x2, 0x2, 0x790, 0x791, 0x5, 0x2e, 0x18, 0x2, 0x791, 0x792, 0x7, 0xaf, 
    0x2, 0x2, 0x792, 0x793, 0x7, 0xb6, 0x2, 0x2, 0x793, 0x794, 0x7, 0x32, 
    0x2, 0x2, 0x794, 0x795, 0x7, 0x39, 0x2, 0x2, 0x795, 0x796, 0x7, 0xe, 
    0x2, 0x2, 0x796, 0x797, 0x7, 0xa8, 0x2, 0x2, 0x797, 0x798, 0x7, 0xac, 
    0x2, 0x2, 0x798, 0x799, 0x7, 0xa9, 0x2, 0x2, 0x799, 0x79a, 0x7, 0x1b, 
    0x2, 0x2, 0x79a, 0x79b, 0x7, 0x55, 0x2, 0x2, 0x79b, 0x79d, 0x7, 0xc5, 
    0x2, 0x2, 0x79c, 0x79e, 0x5, 0x28, 0x15, 0x2, 0x79d, 0x79c, 0x3, 0x2, 
    0x2, 0x2, 0x79d, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x79e, 0x79f, 0x3, 0x2, 
    0x2, 0x2, 0x79f, 0x7a0, 0x7, 0xb0, 0x2, 0x2, 0x7a0, 0x7a1, 0x7, 0xb6, 
    0x2, 0x2, 0x7a1, 0x7a2, 0x5, 0x16e, 0xb8, 0x2, 0x7a2, 0x7a3, 0x7, 0x46, 
    0x2, 0x2, 0x7a3, 0x7a4, 0x7, 0x32, 0x2, 0x2, 0x7a4, 0x7a5, 0x7, 0xc6, 
    0x2, 0x2, 0x7a5, 0x7a6, 0x7, 0x76, 0x2, 0x2, 0x7a6, 0x7a7, 0x7, 0x63, 
    0x2, 0x2, 0x7a7, 0x7a8, 0x7, 0xb8, 0x2, 0x2, 0x7a8, 0x7a9, 0x7, 0xb9, 
    0x2, 0x2, 0x7a9, 0x7aa, 0x7, 0x32, 0x2, 0x2, 0x7aa, 0x7ab, 0x7, 0xa2, 
    0x2, 0x2, 0x7ab, 0x7ac, 0x7, 0xba, 0x2, 0x2, 0x7ac, 0x7ad, 0x5, 0x16e, 
    0xb8, 0x2, 0x7ad, 0x147, 0x3, 0x2, 0x2, 0x2, 0x7ae, 0x7af, 0x7, 0x4c, 
    0x2, 0x2, 0x7af, 0x7b0, 0x5, 0x2e, 0x18, 0x2, 0x7b0, 0x7b1, 0x7, 0xaf, 
    0x2, 0x2, 0x7b1, 0x7b2, 0x7, 0x80, 0x2, 0x2, 0x7b2, 0x7b3, 0x5, 0x2e, 
    0x18, 0x2, 0x7b3, 0x7b4, 0x7, 0x81, 0x2, 0x2, 0x7b4, 0x7b5, 0x7, 0xc5, 
    0x2, 0x2, 0x7b5, 0x7b6, 0x7, 0xb0, 0x2, 0x2, 0x7b6, 0x7b7, 0x7, 0x31, 
    0x2, 0x2, 0x7b7, 0x7b8, 0x7, 0xa, 0x2, 0x2, 0x7b8, 0x7b9, 0x7, 0x9a, 
    0x2, 0x2, 0x7b9, 0x7ba, 0x7, 0x32, 0x2, 0x2, 0x7ba, 0x7bb, 0x7, 0x19, 
    0x2, 0x2, 0x7bb, 0x7bc, 0x5, 0x2e, 0x18, 0x2, 0x7bc, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x7bd, 0x7c1, 0x5, 0x144, 0xa3, 0x2, 0x7be, 0x7c1, 0x5, 0x146, 
    0xa4, 0x2, 0x7bf, 0x7c1, 0x5, 0x148, 0xa5, 0x2, 0x7c0, 0x7bd, 0x3, 0x2, 
    0x2, 0x2, 0x7c0, 0x7be, 0x3, 0x2, 0x2, 0x2, 0x7c0, 0x7bf, 0x3, 0x2, 
    0x2, 0x2, 0x7c1, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x7c2, 0x7c3, 0x7, 0xc0, 
    0x2, 0x2, 0x7c3, 0x7c4, 0x7, 0xa3, 0x2, 0x2, 0x7c4, 0x7c5, 0x7, 0xa4, 
    0x2, 0x2, 0x7c5, 0x7c6, 0x7, 0xa5, 0x2, 0x2, 0x7c6, 0x7c7, 0x7, 0x21, 
    0x2, 0x2, 0x7c7, 0x7c8, 0x7, 0x2e, 0x2, 0x2, 0x7c8, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x7c9, 0x7ca, 0x7, 0xb3, 0x2, 0x2, 0x7ca, 0x7cb, 0x7, 0xc0, 
    0x2, 0x2, 0x7cb, 0x7cc, 0x7, 0x4d, 0x2, 0x2, 0x7cc, 0x7cd, 0x7, 0x85, 
    0x2, 0x2, 0x7cd, 0x7ce, 0x7, 0x6, 0x2, 0x2, 0x7ce, 0x7cf, 0x7, 0x17, 
    0x2, 0x2, 0x7cf, 0x7d0, 0x7, 0x36, 0x2, 0x2, 0x7d0, 0x7d1, 0x7, 0xc5, 
    0x2, 0x2, 0x7d1, 0x7d2, 0x5, 0xec, 0x77, 0x2, 0x7d2, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x7d3, 0x7d4, 0x7, 0xc0, 0x2, 0x2, 0x7d4, 0x7d5, 0x7, 0x44, 
    0x2, 0x2, 0x7d5, 0x7d6, 0x5, 0x16e, 0xb8, 0x2, 0x7d6, 0x7d7, 0x7, 0x46, 
    0x2, 0x2, 0x7d7, 0x7d8, 0x7, 0xc9, 0x2, 0x2, 0x7d8, 0x7d9, 0x7, 0x39, 
    0x2, 0x2, 0x7d9, 0x7da, 0x7, 0x1b, 0x2, 0x2, 0x7da, 0x7db, 0x7, 0xbc, 
    0x2, 0x2, 0x7db, 0x7dc, 0x7, 0x85, 0x2, 0x2, 0x7dc, 0x7dd, 0x7, 0x2e, 
    0x2, 0x2, 0x7dd, 0x7de, 0x7, 0x6, 0x2, 0x2, 0x7de, 0x7df, 0x7, 0x17, 
    0x2, 0x2, 0x7df, 0x7e0, 0x7, 0x36, 0x2, 0x2, 0x7e0, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0x7e1, 0x7e2, 0x7, 0x9f, 0x2, 0x2, 0x7e2, 0x7e3, 0x7, 0x71, 
    0x2, 0x2, 0x7e3, 0x7e4, 0x7, 0xc0, 0x2, 0x2, 0x7e4, 0x7e5, 0x7, 0x4c, 
    0x2, 0x2, 0x7e5, 0x7e6, 0x5, 0x140, 0xa1, 0x2, 0x7e6, 0x153, 0x3, 0x2, 
    0x2, 0x2, 0x7e7, 0x7e8, 0x7, 0xc0, 0x2, 0x2, 0x7e8, 0x7e9, 0x7, 0x63, 
    0x2, 0x2, 0x7e9, 0x7ea, 0x7, 0xa4, 0x2, 0x2, 0x7ea, 0x7eb, 0x7, 0x71, 
    0x2, 0x2, 0x7eb, 0x7ec, 0x7, 0xbd, 0x2, 0x2, 0x7ec, 0x7ed, 0x7, 0x7b, 
    0x2, 0x2, 0x7ed, 0x7ee, 0x7, 0xbf, 0x2, 0x2, 0x7ee, 0x155, 0x3, 0x2, 
    0x2, 0x2, 0x7ef, 0x7f0, 0x7, 0xc0, 0x2, 0x2, 0x7f0, 0x7f1, 0x7, 0x63, 
    0x2, 0x2, 0x7f1, 0x7f2, 0x7, 0x9f, 0x2, 0x2, 0x7f2, 0x7f3, 0x7, 0x68, 
    0x2, 0x2, 0x7f3, 0x7f4, 0x7, 0x4c, 0x2, 0x2, 0x7f4, 0x7f5, 0x5, 0x140, 
    0xa1, 0x2, 0x7f5, 0x157, 0x3, 0x2, 0x2, 0x2, 0x7f6, 0x7f7, 0x7, 0xc0, 
    0x2, 0x2, 0x7f7, 0x7f8, 0x7, 0x63, 0x2, 0x2, 0x7f8, 0x7f9, 0x7, 0x68, 
    0x2, 0x2, 0x7f9, 0x7fa, 0x5, 0x16e, 0xb8, 0x2, 0x7fa, 0x7fb, 0x7, 0x7b, 
    0x2, 0x2, 0x7fb, 0x7fc, 0x7, 0x55, 0x2, 0x2, 0x7fc, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x7fd, 0x805, 0x5, 0x14c, 0xa7, 0x2, 0x7fe, 0x805, 0x5, 0x14e, 
    0xa8, 0x2, 0x7ff, 0x805, 0x5, 0x150, 0xa9, 0x2, 0x800, 0x805, 0x5, 0x152, 
    0xaa, 0x2, 0x801, 0x805, 0x5, 0x154, 0xab, 0x2, 0x802, 0x805, 0x5, 0x156, 
    0xac, 0x2, 0x803, 0x805, 0x5, 0x158, 0xad, 0x2, 0x804, 0x7fd, 0x3, 0x2, 
    0x2, 0x2, 0x804, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x804, 0x7ff, 0x3, 0x2, 
    0x2, 0x2, 0x804, 0x800, 0x3, 0x2, 0x2, 0x2, 0x804, 0x801, 0x3, 0x2, 
    0x2, 0x2, 0x804, 0x802, 0x3, 0x2, 0x2, 0x2, 0x804, 0x803, 0x3, 0x2, 
    0x2, 0x2, 0x805, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x806, 0x807, 0x9, 0x9, 
    0x2, 0x2, 0x807, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x808, 0x809, 0x9, 0xa, 
    0x2, 0x2, 0x809, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x80a, 0x80b, 0x7, 0xc4, 
    0x2, 0x2, 0x80b, 0x161, 0x3, 0x2, 0x2, 0x2, 0x80c, 0x80d, 0x7, 0xc1, 
    0x2, 0x2, 0x80d, 0x163, 0x3, 0x2, 0x2, 0x2, 0x80e, 0x80f, 0x5, 0x2e, 
    0x18, 0x2, 0x80f, 0x810, 0x7, 0xc9, 0x2, 0x2, 0x810, 0x165, 0x3, 0x2, 
    0x2, 0x2, 0x811, 0x812, 0x7, 0xe, 0x2, 0x2, 0x812, 0x813, 0x7, 0x3a, 
    0x2, 0x2, 0x813, 0x814, 0x7, 0x1e, 0x2, 0x2, 0x814, 0x815, 0x7, 0x13, 
    0x2, 0x2, 0x815, 0x816, 0x7, 0x15, 0x2, 0x2, 0x816, 0x817, 0x7, 0x20, 
    0x2, 0x2, 0x817, 0x818, 0x5, 0x2e, 0x18, 0x2, 0x818, 0x167, 0x3, 0x2, 
    0x2, 0x2, 0x819, 0x81a, 0x7, 0xe, 0x2, 0x2, 0x81a, 0x81b, 0x7, 0x34, 
    0x2, 0x2, 0x81b, 0x81c, 0x7, 0x13, 0x2, 0x2, 0x81c, 0x81d, 0x5, 0x62, 
    0x32, 0x2, 0x81d, 0x81e, 0x7, 0x6, 0x2, 0x2, 0x81e, 0x81f, 0x7, 0x35, 
    0x2, 0x2, 0x81f, 0x820, 0x7, 0x36, 0x2, 0x2, 0x820, 0x169, 0x3, 0x2, 
    0x2, 0x2, 0x821, 0x822, 0x5, 0x2e, 0x18, 0x2, 0x822, 0x823, 0x7, 0x38, 
    0x2, 0x2, 0x823, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x824, 0x826, 0x5, 0x16e, 
    0xb8, 0x2, 0x825, 0x827, 0x7, 0x11, 0x2, 0x2, 0x826, 0x825, 0x3, 0x2, 
    0x2, 0x2, 0x826, 0x827, 0x3, 0x2, 0x2, 0x2, 0x827, 0x82d, 0x3, 0x2, 
    0x2, 0x2, 0x828, 0x82e, 0x3, 0x2, 0x2, 0x2, 0x829, 0x82e, 0x7, 0x32, 
    0x2, 0x2, 0x82a, 0x82e, 0x7, 0xd, 0x2, 0x2, 0x82b, 0x82e, 0x7, 0x9, 
    0x2, 0x2, 0x82c, 0x82e, 0x7, 0x3, 0x2, 0x2, 0x82d, 0x828, 0x3, 0x2, 
    0x2, 0x2, 0x82d, 0x829, 0x3, 0x2, 0x2, 0x2, 0x82d, 0x82a, 0x3, 0x2, 
    0x2, 0x2, 0x82d, 0x82b, 0x3, 0x2, 0x2, 0x2, 0x82d, 0x82c, 0x3, 0x2, 
    0x2, 0x2, 0x82e, 0x82f, 0x3, 0x2, 0x2, 0x2, 0x82f, 0x830, 0x7, 0x39, 
    0x2, 0x2, 0x830, 0x831, 0x7, 0x1b, 0x2, 0x2, 0x831, 0x832, 0x5, 0x62, 
    0x32, 0x2, 0x832, 0x833, 0x7, 0x6, 0x2, 0x2, 0x833, 0x834, 0x5, 0x28, 
    0x15, 0x2, 0x834, 0x835, 0x7, 0x36, 0x2, 0x2, 0x835, 0x16d, 0x3, 0x2, 
    0x2, 0x2, 0x836, 0x83b, 0x5, 0x15c, 0xaf, 0x2, 0x837, 0x83b, 0x5, 0x15e, 
    0xb0, 0x2, 0x838, 0x83b, 0x5, 0x160, 0xb1, 0x2, 0x839, 0x83b, 0x5, 0x162, 
    0xb2, 0x2, 0x83a, 0x836, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x837, 0x3, 0x2, 
    0x2, 0x2, 0x83a, 0x838, 0x3, 0x2, 0x2, 0x2, 0x83a, 0x839, 0x3, 0x2, 
    0x2, 0x2, 0x83b, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x83c, 0x842, 0x5, 0x164, 
    0xb3, 0x2, 0x83d, 0x842, 0x5, 0x166, 0xb4, 0x2, 0x83e, 0x842, 0x5, 0x168, 
    0xb5, 0x2, 0x83f, 0x842, 0x5, 0x16a, 0xb6, 0x2, 0x840, 0x842, 0x5, 0x16c, 
    0xb7, 0x2, 0x841, 0x83c, 0x3, 0x2, 0x2, 0x2, 0x841, 0x83d, 0x3, 0x2, 
    0x2, 0x2, 0x841, 0x83e, 0x3, 0x2, 0x2, 0x2, 0x841, 0x83f, 0x3, 0x2, 
    0x2, 0x2, 0x841, 0x840, 0x3, 0x2, 0x2, 0x2, 0x842, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x843, 0x846, 0x5, 0x170, 0xb9, 0x2, 0x844, 0x846, 0x5, 0x16e, 
    0xb8, 0x2, 0x845, 0x843, 0x3, 0x2, 0x2, 0x2, 0x845, 0x844, 0x3, 0x2, 
    0x2, 0x2, 0x846, 0x173, 0x3, 0x2, 0x2, 0x2, 0x847, 0x848, 0x7, 0x27, 
    0x2, 0x2, 0x848, 0x849, 0x7, 0x63, 0x2, 0x2, 0x849, 0x84a, 0x7, 0xcc, 
    0x2, 0x2, 0x84a, 0x84b, 0x7, 0xe, 0x2, 0x2, 0x84b, 0x84c, 0x7, 0xcd, 
    0x2, 0x2, 0x84c, 0x84d, 0x7, 0xce, 0x2, 0x2, 0x84d, 0x84e, 0x5, 0x16e, 
    0xb8, 0x2, 0x84e, 0x175, 0x3, 0x2, 0x2, 0x2, 0x84f, 0x850, 0x8, 0xbc, 
    0x1, 0x2, 0x850, 0x851, 0x7, 0xc7, 0x2, 0x2, 0x851, 0x852, 0x5, 0x182, 
    0xc2, 0x2, 0x852, 0x859, 0x3, 0x2, 0x2, 0x2, 0x853, 0x854, 0xc, 0x3, 
    0x2, 0x2, 0x854, 0x855, 0x7, 0xc6, 0x2, 0x2, 0x855, 0x856, 0x7, 0xc7, 
    0x2, 0x2, 0x856, 0x858, 0x5, 0x182, 0xc2, 0x2, 0x857, 0x853, 0x3, 0x2, 
    0x2, 0x2, 0x858, 0x85b, 0x3, 0x2, 0x2, 0x2, 0x859, 0x857, 0x3, 0x2, 
    0x2, 0x2, 0x859, 0x85a, 0x3, 0x2, 0x2, 0x2, 0x85a, 0x177, 0x3, 0x2, 
    0x2, 0x2, 0x85b, 0x859, 0x3, 0x2, 0x2, 0x2, 0x85c, 0x85d, 0x7, 0xcc, 
    0x2, 0x2, 0x85d, 0x85e, 0x5, 0x16e, 0xb8, 0x2, 0x85e, 0x85f, 0x7, 0x39, 
    0x2, 0x2, 0x85f, 0x860, 0x7, 0x1b, 0x2, 0x2, 0x860, 0x861, 0x5, 0x1e, 
    0x10, 0x2, 0x861, 0x862, 0x7, 0x6, 0x2, 0x2, 0x862, 0x863, 0x7, 0xcf, 
    0x2, 0x2, 0x863, 0x864, 0x7, 0xc8, 0x2, 0x2, 0x864, 0x865, 0x5, 0x176, 
    0xbc, 0x2, 0x865, 0x866, 0x7, 0xc6, 0x2, 0x2, 0x866, 0x867, 0x5, 0x174, 
    0xbb, 0x2, 0x867, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x868, 0x869, 0x7, 0xcc, 
    0x2, 0x2, 0x869, 0x86a, 0x5, 0x16e, 0xb8, 0x2, 0x86a, 0x86b, 0x7, 0xc8, 
    0x2, 0x2, 0x86b, 0x86c, 0x5, 0x176, 0xbc, 0x2, 0x86c, 0x86d, 0x7, 0xc6, 
    0x2, 0x2, 0x86d, 0x86e, 0x5, 0x174, 0xbb, 0x2, 0x86e, 0x87f, 0x3, 0x2, 
    0x2, 0x2, 0x86f, 0x870, 0x7, 0xcc, 0x2, 0x2, 0x870, 0x871, 0x5, 0x16e, 
    0xb8, 0x2, 0x871, 0x872, 0x7, 0xc8, 0x2, 0x2, 0x872, 0x873, 0x5, 0x176, 
    0xbc, 0x2, 0x873, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x874, 0x875, 0x7, 0xcc, 
    0x2, 0x2, 0x875, 0x876, 0x5, 0x16e, 0xb8, 0x2, 0x876, 0x877, 0x7, 0x39, 
    0x2, 0x2, 0x877, 0x878, 0x7, 0x1b, 0x2, 0x2, 0x878, 0x879, 0x5, 0x1e, 
    0x10, 0x2, 0x879, 0x87a, 0x7, 0x6, 0x2, 0x2, 0x87a, 0x87b, 0x7, 0xcf, 
    0x2, 0x2, 0x87b, 0x87c, 0x7, 0xc8, 0x2, 0x2, 0x87c, 0x87d, 0x5, 0x176, 
    0xbc, 0x2, 0x87d, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x85c, 0x3, 0x2, 
    0x2, 0x2, 0x87e, 0x868, 0x3, 0x2, 0x2, 0x2, 0x87e, 0x86f, 0x3, 0x2, 
    0x2, 0x2, 0x87e, 0x874, 0x3, 0x2, 0x2, 0x2, 0x87f, 0x179, 0x3, 0x2, 
    0x2, 0x2, 0x880, 0x8a9, 0x5, 0x178, 0xbd, 0x2, 0x881, 0x8a9, 0x5, 0x82, 
    0x42, 0x2, 0x882, 0x8a9, 0x5, 0x84, 0x43, 0x2, 0x883, 0x8a9, 0x5, 0x86, 
    0x44, 0x2, 0x884, 0x8a9, 0x5, 0x88, 0x45, 0x2, 0x885, 0x8a9, 0x5, 0x8e, 
    0x48, 0x2, 0x886, 0x8a9, 0x5, 0x8c, 0x47, 0x2, 0x887, 0x8a9, 0x5, 0x90, 
    0x49, 0x2, 0x888, 0x8a9, 0x5, 0x92, 0x4a, 0x2, 0x889, 0x8a9, 0x5, 0x94, 
    0x4b, 0x2, 0x88a, 0x8a9, 0x5, 0x96, 0x4c, 0x2, 0x88b, 0x8a9, 0x5, 0x98, 
    0x4d, 0x2, 0x88c, 0x8a9, 0x5, 0x9a, 0x4e, 0x2, 0x88d, 0x8a9, 0x5, 0x9c, 
    0x4f, 0x2, 0x88e, 0x8a9, 0x5, 0x9e, 0x50, 0x2, 0x88f, 0x8a9, 0x5, 0xa0, 
    0x51, 0x2, 0x890, 0x8a9, 0x5, 0xa2, 0x52, 0x2, 0x891, 0x8a9, 0x5, 0xa4, 
    0x53, 0x2, 0x892, 0x8a9, 0x5, 0xa6, 0x54, 0x2, 0x893, 0x8a9, 0x5, 0xa8, 
    0x55, 0x2, 0x894, 0x8a9, 0x5, 0xae, 0x58, 0x2, 0x895, 0x8a9, 0x5, 0xb0, 
    0x59, 0x2, 0x896, 0x8a9, 0x5, 0xb2, 0x5a, 0x2, 0x897, 0x8a9, 0x5, 0xb4, 
    0x5b, 0x2, 0x898, 0x8a9, 0x5, 0xb6, 0x5c, 0x2, 0x899, 0x8a9, 0x5, 0xb8, 
    0x5d, 0x2, 0x89a, 0x8a9, 0x5, 0xba, 0x5e, 0x2, 0x89b, 0x8a9, 0x5, 0xbc, 
    0x5f, 0x2, 0x89c, 0x8a9, 0x5, 0xbe, 0x60, 0x2, 0x89d, 0x8a9, 0x5, 0xc0, 
    0x61, 0x2, 0x89e, 0x8a9, 0x5, 0xc2, 0x62, 0x2, 0x89f, 0x8a9, 0x5, 0xc4, 
    0x63, 0x2, 0x8a0, 0x8a9, 0x5, 0xc6, 0x64, 0x2, 0x8a1, 0x8a9, 0x5, 0xc8, 
    0x65, 0x2, 0x8a2, 0x8a9, 0x5, 0xca, 0x66, 0x2, 0x8a3, 0x8a9, 0x5, 0xcc, 
    0x67, 0x2, 0x8a4, 0x8a9, 0x5, 0xce, 0x68, 0x2, 0x8a5, 0x8a9, 0x5, 0xd0, 
    0x69, 0x2, 0x8a6, 0x8a9, 0x5, 0xd2, 0x6a, 0x2, 0x8a7, 0x8a9, 0x5, 0xc8, 
    0x65, 0x2, 0x8a8, 0x880, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x881, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x882, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x883, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x884, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x885, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x886, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x887, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x888, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x889, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x88a, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x88b, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x88c, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x88d, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x88e, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x88f, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x890, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x891, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x892, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x893, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x894, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x895, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x896, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x897, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x898, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x899, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x89a, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x89b, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x89c, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x89d, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x89e, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x89f, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x8a0, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a1, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x8a2, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a3, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a5, 0x3, 0x2, 
    0x2, 0x2, 0x8a8, 0x8a6, 0x3, 0x2, 0x2, 0x2, 0x8a8, 0x8a7, 0x3, 0x2, 
    0x2, 0x2, 0x8a9, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x8ab, 0x5, 0x17a, 
    0xbe, 0x2, 0x8ab, 0x8ac, 0x7, 0x39, 0x2, 0x2, 0x8ac, 0x8ad, 0x7, 0x1b, 
    0x2, 0x2, 0x8ad, 0x8ae, 0x7, 0x1a, 0x2, 0x2, 0x8ae, 0x8af, 0x7, 0x13, 
    0x2, 0x2, 0x8af, 0x8b0, 0x7, 0x15, 0x2, 0x2, 0x8b0, 0x8b1, 0x5, 0x28, 
    0x15, 0x2, 0x8b1, 0x8b2, 0x7, 0xad, 0x2, 0x2, 0x8b2, 0x8b5, 0x3, 0x2, 
    0x2, 0x2, 0x8b3, 0x8b5, 0x5, 0x17a, 0xbe, 0x2, 0x8b4, 0x8aa, 0x3, 0x2, 
    0x2, 0x2, 0x8b4, 0x8b3, 0x3, 0x2, 0x2, 0x2, 0x8b5, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x8b6, 0x8b7, 0x7, 0x4c, 0x2, 0x2, 0x8b7, 0x8b8, 0x5, 0x140, 
    0xa1, 0x2, 0x8b8, 0x8b9, 0x7, 0xc5, 0x2, 0x2, 0x8b9, 0x8ba, 0x5, 0x182, 
    0xc2, 0x2, 0x8ba, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8bb, 0x8bd, 0x5, 0x17c, 
    0xbf, 0x2, 0x8bc, 0x8b6, 0x3, 0x2, 0x2, 0x2, 0x8bc, 0x8bb, 0x3, 0x2, 
    0x2, 0x2, 0x8bd, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x8be, 0x8bf, 0x7, 0x4c, 
    0x2, 0x2, 0x8bf, 0x8c0, 0x5, 0x140, 0xa1, 0x2, 0x8c0, 0x8c1, 0x7, 0xc5, 
    0x2, 0x2, 0x8c1, 0x8c2, 0x7, 0xb0, 0x2, 0x2, 0x8c2, 0x8c3, 0x5, 0x182, 
    0xc2, 0x2, 0x8c3, 0x8c6, 0x3, 0x2, 0x2, 0x2, 0x8c4, 0x8c6, 0x5, 0x17e, 
    0xc0, 0x2, 0x8c5, 0x8be, 0x3, 0x2, 0x2, 0x2, 0x8c5, 0x8c4, 0x3, 0x2, 
    0x2, 0x2, 0x8c6, 0x181, 0x3, 0x2, 0x2, 0x2, 0x8c7, 0x8c8, 0x5, 0x2e, 
    0x18, 0x2, 0x8c8, 0x8c9, 0x7, 0x63, 0x2, 0x2, 0x8c9, 0x8ca, 0x7, 0x7e, 
    0x2, 0x2, 0x8ca, 0x8cb, 0x5, 0x2e, 0x18, 0x2, 0x8cb, 0x8cc, 0x5, 0x180, 
    0xc1, 0x2, 0x8cc, 0x8de, 0x3, 0x2, 0x2, 0x2, 0x8cd, 0x8ce, 0x5, 0x2e, 
    0x18, 0x2, 0x8ce, 0x8cf, 0x7, 0x63, 0x2, 0x2, 0x8cf, 0x8d0, 0x5, 0x180, 
    0xc1, 0x2, 0x8d0, 0x8d1, 0x7, 0x19, 0x2, 0x2, 0x8d1, 0x8d2, 0x5, 0x180, 
    0xc1, 0x2, 0x8d2, 0x8de, 0x3, 0x2, 0x2, 0x2, 0x8d3, 0x8d4, 0x5, 0x2e, 
    0x18, 0x2, 0x8d4, 0x8d5, 0x7, 0x63, 0x2, 0x2, 0x8d5, 0x8d6, 0x5, 0x180, 
    0xc1, 0x2, 0x8d6, 0x8de, 0x3, 0x2, 0x2, 0x2, 0x8d7, 0x8d8, 0x5, 0x180, 
    0xc1, 0x2, 0x8d8, 0x8d9, 0x7, 0x2b, 0x2, 0x2, 0x8d9, 0x8da, 0x5, 0x2e, 
    0x18, 0x2, 0x8da, 0x8db, 0x5, 0x180, 0xc1, 0x2, 0x8db, 0x8de, 0x3, 0x2, 
    0x2, 0x2, 0x8dc, 0x8de, 0x5, 0x180, 0xc1, 0x2, 0x8dd, 0x8c7, 0x3, 0x2, 
    0x2, 0x2, 0x8dd, 0x8cd, 0x3, 0x2, 0x2, 0x2, 0x8dd, 0x8d3, 0x3, 0x2, 
    0x2, 0x2, 0x8dd, 0x8d7, 0x3, 0x2, 0x2, 0x2, 0x8dd, 0x8dc, 0x3, 0x2, 
    0x2, 0x2, 0x8de, 0x183, 0x3, 0x2, 0x2, 0x2, 0x8df, 0x8e0, 0x7, 0xc6, 
    0x2, 0x2, 0x8e0, 0x8e1, 0x7, 0x87, 0x2, 0x2, 0x8e1, 0x8eb, 0x7, 0xc5, 
    0x2, 0x2, 0x8e2, 0x8eb, 0x7, 0xc6, 0x2, 0x2, 0x8e3, 0x8eb, 0x7, 0x98, 
    0x2, 0x2, 0x8e4, 0x8e5, 0x7, 0xc5, 0x2, 0x2, 0x8e5, 0x8eb, 0x7, 0x98, 
    0x2, 0x2, 0x8e6, 0x8e7, 0x7, 0xc5, 0x2, 0x2, 0x8e7, 0x8eb, 0x7, 0x87, 
    0x2, 0x2, 0x8e8, 0x8eb, 0x7, 0xc5, 0x2, 0x2, 0x8e9, 0x8eb, 0x7, 0x87, 
    0x2, 0x2, 0x8ea, 0x8df, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8e2, 0x3, 0x2, 
    0x2, 0x2, 0x8ea, 0x8e3, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8e4, 0x3, 0x2, 
    0x2, 0x2, 0x8ea, 0x8e6, 0x3, 0x2, 0x2, 0x2, 0x8ea, 0x8e8, 0x3, 0x2, 
    0x2, 0x2, 0x8ea, 0x8e9, 0x3, 0x2, 0x2, 0x2, 0x8eb, 0x185, 0x3, 0x2, 
    0x2, 0x2, 0x8ec, 0x8f1, 0x5, 0x182, 0xc2, 0x2, 0x8ed, 0x8f1, 0x5, 0xec, 
    0x77, 0x2, 0x8ee, 0x8f1, 0x5, 0x14a, 0xa6, 0x2, 0x8ef, 0x8f1, 0x5, 0x142, 
    0xa2, 0x2, 0x8f0, 0x8ec, 0x3, 0x2, 0x2, 0x2, 0x8f0, 0x8ed, 0x3, 0x2, 
    0x2, 0x2, 0x8f0, 0x8ee, 0x3, 0x2, 0x2, 0x2, 0x8f0, 0x8ef, 0x3, 0x2, 
    0x2, 0x2, 0x8f1, 0x187, 0x3, 0x2, 0x2, 0x2, 0x8f2, 0x8f3, 0x7, 0xd0, 
    0x2, 0x2, 0x8f3, 0x8f7, 0x7, 0xc7, 0x2, 0x2, 0x8f4, 0x8f5, 0x5, 0x186, 
    0xc4, 0x2, 0x8f5, 0x8f6, 0x5, 0x184, 0xc3, 0x2, 0x8f6, 0x8f8, 0x3, 0x2, 
    0x2, 0x2, 0x8f7, 0x8f4, 0x3, 0x2, 0x2, 0x2, 0x8f8, 0x8f9, 0x3, 0x2, 
    0x2, 0x2, 0x8f9, 0x8f7, 0x3, 0x2, 0x2, 0x2, 0x8f9, 0x8fa, 0x3, 0x2, 
    0x2, 0x2, 0x8fa, 0x189, 0x3, 0x2, 0x2, 0x2, 0x8fb, 0x8fc, 0x7, 0xd1, 
    0x2, 0x2, 0x8fc, 0x900, 0x7, 0xc7, 0x2, 0x2, 0x8fd, 0x8fe, 0x5, 0x186, 
    0xc4, 0x2, 0x8fe, 0x8ff, 0x5, 0x184, 0xc3, 0x2, 0x8ff, 0x901, 0x3, 0x2, 
    0x2, 0x2, 0x900, 0x8fd, 0x3, 0x2, 0x2, 0x2, 0x901, 0x902, 0x3, 0x2, 
    0x2, 0x2, 0x902, 0x900, 0x3, 0x2, 0x2, 0x2, 0x902, 0x903, 0x3, 0x2, 
    0x2, 0x2, 0x903, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x904, 0x905, 0x7, 0x73, 
    0x2, 0x2, 0x905, 0x909, 0x7, 0xc7, 0x2, 0x2, 0x906, 0x907, 0x5, 0x186, 
    0xc4, 0x2, 0x907, 0x908, 0x5, 0x184, 0xc3, 0x2, 0x908, 0x90a, 0x3, 0x2, 
    0x2, 0x2, 0x909, 0x906, 0x3, 0x2, 0x2, 0x2, 0x90a, 0x90b, 0x3, 0x2, 
    0x2, 0x2, 0x90b, 0x909, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x90c, 0x3, 0x2, 
    0x2, 0x2, 0x90c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x90d, 0x90e, 0x5, 0x15a, 
    0xae, 0x2, 0x90e, 0x90f, 0x7, 0xc6, 0x2, 0x2, 0x90f, 0x917, 0x3, 0x2, 
    0x2, 0x2, 0x910, 0x917, 0x5, 0x188, 0xc5, 0x2, 0x911, 0x917, 0x5, 0x18a, 
    0xc6, 0x2, 0x912, 0x917, 0x5, 0x18c, 0xc7, 0x2, 0x913, 0x914, 0x5, 0x186, 
    0xc4, 0x2, 0x914, 0x915, 0x5, 0x184, 0xc3, 0x2, 0x915, 0x917, 0x3, 0x2, 
    0x2, 0x2, 0x916, 0x90d, 0x3, 0x2, 0x2, 0x2, 0x916, 0x910, 0x3, 0x2, 
    0x2, 0x2, 0x916, 0x911, 0x3, 0x2, 0x2, 0x2, 0x916, 0x912, 0x3, 0x2, 
    0x2, 0x2, 0x916, 0x913, 0x3, 0x2, 0x2, 0x2, 0x917, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x918, 0x91a, 0x5, 0x18e, 0xc8, 0x2, 0x919, 0x918, 0x3, 0x2, 
    0x2, 0x2, 0x91a, 0x91b, 0x3, 0x2, 0x2, 0x2, 0x91b, 0x919, 0x3, 0x2, 
    0x2, 0x2, 0x91b, 0x91c, 0x3, 0x2, 0x2, 0x2, 0x91c, 0x91d, 0x3, 0x2, 
    0x2, 0x2, 0x91d, 0x91e, 0x7, 0x2, 0x2, 0x3, 0x91e, 0x191, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x197, 0x1c4, 0x1cd, 0x1d2, 0x1d9, 0x1e3, 0x1ed, 0x1f3, 
    0x1f6, 0x1f9, 0x1fc, 0x1ff, 0x205, 0x20c, 0x211, 0x218, 0x21d, 0x226, 
    0x231, 0x257, 0x268, 0x26d, 0x274, 0x28a, 0x290, 0x299, 0x29f, 0x2a3, 
    0x2aa, 0x2ad, 0x2ba, 0x2bf, 0x2c6, 0x2ca, 0x2cd, 0x2d0, 0x2d8, 0x2ef, 
    0x2f2, 0x2fd, 0x302, 0x307, 0x30f, 0x317, 0x31f, 0x348, 0x350, 0x353, 
    0x356, 0x35b, 0x35f, 0x3a0, 0x3b2, 0x3b5, 0x3c9, 0x3cc, 0x3e0, 0x3e6, 
    0x3ed, 0x3f4, 0x3f6, 0x400, 0x435, 0x43c, 0x44e, 0x462, 0x471, 0x482, 
    0x495, 0x4d8, 0x4f4, 0x50c, 0x567, 0x57f, 0x59d, 0x5e7, 0x60d, 0x61d, 
    0x638, 0x63e, 0x65d, 0x665, 0x66c, 0x673, 0x67a, 0x67d, 0x688, 0x69e, 
    0x6df, 0x6e8, 0x71c, 0x722, 0x76a, 0x774, 0x781, 0x79d, 0x7c0, 0x804, 
    0x826, 0x82d, 0x83a, 0x841, 0x845, 0x859, 0x87e, 0x8a8, 0x8b4, 0x8bc, 
    0x8c5, 0x8dd, 0x8ea, 0x8f0, 0x8f9, 0x902, 0x90b, 0x916, 0x91b, 
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
