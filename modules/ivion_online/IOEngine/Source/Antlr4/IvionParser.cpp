
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


//----------------- DisarmPlayerContext ------------------------------------------------------------------

IvionParser::DisarmPlayerContext::DisarmPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::DisarmPlayerContext::Disarm() {
  return getToken(IvionParser::Disarm, 0);
}

IvionParser::ValueContext* IvionParser::DisarmPlayerContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::DisarmPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::DisarmPlayerContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::DisarmPlayerContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::DisarmPlayerContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::DisarmPlayerContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::DisarmPlayerContext::Them() {
  return getToken(IvionParser::Them, 0);
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
  enterRule(_localctx, 0, IvionParser::RuleDisarmPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(239);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(214);
      match(IvionParser::Disarm);
      setState(215);
      value();
      setState(216);
      match(IvionParser::Target);
      setState(217);
      match(IvionParser::Enemy);
      setState(218);
      match(IvionParser::In);
      setState(219);
      match(IvionParser::Terrain);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(221);
      match(IvionParser::Disarm);
      setState(222);
      value();
      setState(223);
      match(IvionParser::Target);
      setState(224);
      match(IvionParser::Enemy);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(226);
      match(IvionParser::Disarm);
      setState(227);
      value();
      setState(228);
      match(IvionParser::Target);
      setState(229);
      match(IvionParser::Enemy);
      setState(230);
      match(IvionParser::Near);
      setState(231);
      match(IvionParser::Terrain);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(233);
      match(IvionParser::Disarm);
      setState(234);
      value();
      setState(235);
      match(IvionParser::Them);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(237);
      match(IvionParser::Disarm);
      setState(238);
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

//----------------- SilencePlayerContext ------------------------------------------------------------------

IvionParser::SilencePlayerContext::SilencePlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SilencePlayerContext::Silence() {
  return getToken(IvionParser::Silence, 0);
}

IvionParser::ValueContext* IvionParser::SilencePlayerContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::SilencePlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::SilencePlayerContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::SilencePlayerContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::SilencePlayerContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::SilencePlayerContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::SilencePlayerContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
}

tree::TerminalNode* IvionParser::SilencePlayerContext::Them() {
  return getToken(IvionParser::Them, 0);
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
  enterRule(_localctx, 2, IvionParser::RuleSilencePlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(264);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(241);
      match(IvionParser::Silence);
      setState(242);
      value();
      setState(243);
      match(IvionParser::Target);
      setState(244);
      match(IvionParser::Enemy);
      setState(245);
      match(IvionParser::In);
      setState(246);
      match(IvionParser::That);
      setState(247);
      match(IvionParser::Tile);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(249);
      match(IvionParser::Silence);
      setState(250);
      value();
      setState(251);
      match(IvionParser::Yourself);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(253);
      match(IvionParser::Silence);
      setState(254);
      value();
      setState(255);
      match(IvionParser::Target);
      setState(256);
      match(IvionParser::Enemy);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(258);
      match(IvionParser::Silence);
      setState(259);
      value();
      setState(260);
      match(IvionParser::Them);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(262);
      match(IvionParser::Silence);
      setState(263);
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

//----------------- SlowPlayerContext ------------------------------------------------------------------

IvionParser::SlowPlayerContext::SlowPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SlowPlayerContext::Slow() {
  return getToken(IvionParser::Slow, 0);
}

IvionParser::ValueContext* IvionParser::SlowPlayerContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::Them() {
  return getToken(IvionParser::Them, 0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::SlowPlayerContext::Controller() {
  return getToken(IvionParser::Controller, 0);
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
  enterRule(_localctx, 4, IvionParser::RuleSlowPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(295);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(266);
      match(IvionParser::Slow);
      setState(267);
      value();
      setState(268);
      match(IvionParser::Target);
      setState(269);
      match(IvionParser::Enemy);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(271);
      match(IvionParser::Slow);
      setState(272);
      value();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(273);
      match(IvionParser::Slow);
      setState(274);
      value();
      setState(275);
      match(IvionParser::Them);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(277);
      match(IvionParser::Slow);
      setState(278);
      value();
      setState(279);
      match(IvionParser::That);
      setState(280);
      match(IvionParser::Enemy);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(282);
      match(IvionParser::Slow);
      setState(283);
      value();
      setState(284);
      match(IvionParser::Target);
      setState(285);
      match(IvionParser::Enemy);
      setState(286);
      match(IvionParser::In);
      setState(287);
      match(IvionParser::Terrain);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(289);
      match(IvionParser::Slow);
      setState(290);
      value();
      setState(291);
      match(IvionParser::The);
      setState(292);
      match(IvionParser::Card);
      setState(293);
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

//----------------- ControlPlayerContext ------------------------------------------------------------------

IvionParser::ControlPlayerContext::ControlPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Apply() {
  return getToken(IvionParser::Apply, 0);
}

IvionParser::ValueContext* IvionParser::ControlPlayerContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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

tree::TerminalNode* IvionParser::ControlPlayerContext::A() {
  return getToken(IvionParser::A, 0);
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

tree::TerminalNode* IvionParser::ControlPlayerContext::Them() {
  return getToken(IvionParser::Them, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::An() {
  return getToken(IvionParser::An, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Instance() {
  return getToken(IvionParser::Instance, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::ControlPlayerContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
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
  enterRule(_localctx, 6, IvionParser::RuleControlPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(363);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(297);
      match(IvionParser::Apply);
      setState(298);
      value();
      setState(299);
      match(IvionParser::More);
      setState(300);
      match(IvionParser::Instances);
      setState(301);
      match(IvionParser::Of);
      setState(302);
      match(IvionParser::A);
      setState(303);
      match(IvionParser::Control);
      setState(304);
      match(IvionParser::Type);
      setState(305);
      match(IvionParser::Of);
      setState(306);
      match(IvionParser::Your);
      setState(307);
      match(IvionParser::Choice);
      setState(308);
      match(IvionParser::To);
      setState(309);
      match(IvionParser::Them);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(311);
      match(IvionParser::Apply);
      setState(312);
      match(IvionParser::An);
      setState(313);
      match(IvionParser::Instance);
      setState(314);
      match(IvionParser::Of);
      setState(315);
      match(IvionParser::A);
      setState(316);
      match(IvionParser::Control);
      setState(317);
      match(IvionParser::Type);
      setState(318);
      match(IvionParser::Of);
      setState(319);
      match(IvionParser::Your);
      setState(320);
      match(IvionParser::Choice);
      setState(321);
      match(IvionParser::To);
      setState(322);
      match(IvionParser::Target);
      setState(323);
      match(IvionParser::Enemy);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(324);
      match(IvionParser::Apply);
      setState(325);
      match(IvionParser::An);
      setState(326);
      match(IvionParser::Instance);
      setState(327);
      match(IvionParser::Of);
      setState(328);
      match(IvionParser::A);
      setState(329);
      match(IvionParser::Control);
      setState(330);
      match(IvionParser::Type);
      setState(331);
      match(IvionParser::Of);
      setState(332);
      match(IvionParser::Your);
      setState(333);
      match(IvionParser::Choice);
      setState(334);
      match(IvionParser::To);
      setState(335);
      match(IvionParser::Them);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(336);
      match(IvionParser::Apply);
      setState(337);
      match(IvionParser::An);
      setState(338);
      match(IvionParser::Instance);
      setState(339);
      match(IvionParser::Of);
      setState(340);
      match(IvionParser::A);
      setState(341);
      match(IvionParser::Control);
      setState(342);
      match(IvionParser::Type);
      setState(343);
      match(IvionParser::Of);
      setState(344);
      match(IvionParser::Your);
      setState(345);
      match(IvionParser::Choice);
      setState(346);
      match(IvionParser::To);
      setState(347);
      match(IvionParser::Each);
      setState(348);
      match(IvionParser::Enemy);
      setState(349);
      match(IvionParser::Near);
      setState(350);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(351);
      match(IvionParser::Increase);
      setState(352);
      match(IvionParser::The);
      setState(353);
      match(IvionParser::Value);
      setState(354);
      match(IvionParser::Of);
      setState(355);
      match(IvionParser::A);
      setState(356);
      match(IvionParser::Control);
      setState(357);
      match(IvionParser::Type);
      setState(358);
      match(IvionParser::Already);
      setState(359);
      match(IvionParser::Affecting);
      setState(360);
      match(IvionParser::Them);
      setState(361);
      match(IvionParser::By);
      setState(362);
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

//----------------- TravelPlayerContext ------------------------------------------------------------------

IvionParser::TravelPlayerContext::TravelPlayerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Travel() {
  return getToken(IvionParser::Travel, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Player() {
  return getToken(IvionParser::Player, 0);
}

IvionParser::ValueContext* IvionParser::TravelPlayerContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Away() {
  return getToken(IvionParser::Away, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Up() {
  return getToken(IvionParser::Up, 0);
}

std::vector<tree::TerminalNode *> IvionParser::TravelPlayerContext::To() {
  return getTokens(IvionParser::To);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::To(size_t i) {
  return getToken(IvionParser::To, i);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Them() {
  return getToken(IvionParser::Them, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Nearest() {
  return getToken(IvionParser::Nearest, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Next() {
  return getToken(IvionParser::Next, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Unless() {
  return getToken(IvionParser::Unless, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Spend() {
  return getToken(IvionParser::Spend, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::TravelPlayerContext::Other() {
  return getToken(IvionParser::Other, 0);
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
  enterRule(_localctx, 8, IvionParser::RuleTravelPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(527);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(365);
      match(IvionParser::Travel);
      setState(366);
      match(IvionParser::Another);
      setState(367);
      match(IvionParser::Target);
      setState(368);
      match(IvionParser::Player);
      setState(369);
      value();
      setState(370);
      match(IvionParser::Tile);
      setState(371);
      match(IvionParser::Away);
      setState(372);
      match(IvionParser::From);
      setState(373);
      match(IvionParser::You);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(375);
      match(IvionParser::Travel);
      setState(376);
      match(IvionParser::Another);
      setState(377);
      match(IvionParser::Target);
      setState(378);
      match(IvionParser::Player);
      setState(379);
      match(IvionParser::Up);
      setState(380);
      match(IvionParser::To);
      setState(381);
      value();
      setState(382);
      match(IvionParser::Tile);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(384);
      match(IvionParser::Travel);
      setState(385);
      match(IvionParser::Another);
      setState(386);
      match(IvionParser::Target);
      setState(387);
      match(IvionParser::Player);
      setState(388);
      match(IvionParser::Up);
      setState(389);
      match(IvionParser::To);
      setState(390);
      value();
      setState(391);
      match(IvionParser::Tile);
      setState(392);
      match(IvionParser::Away);
      setState(393);
      match(IvionParser::From);
      setState(394);
      match(IvionParser::You);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(396);
      match(IvionParser::Travel);
      setState(397);
      match(IvionParser::To);
      setState(398);
      match(IvionParser::Target);
      setState(399);
      match(IvionParser::Tile);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(400);
      match(IvionParser::Travel);
      setState(401);
      match(IvionParser::Another);
      setState(402);
      match(IvionParser::Target);
      setState(403);
      match(IvionParser::Player);
      setState(404);
      match(IvionParser::Up);
      setState(405);
      match(IvionParser::To);
      setState(406);
      value();
      setState(407);
      match(IvionParser::Tile);
      setState(408);
      match(IvionParser::Away);
      setState(409);
      match(IvionParser::From);
      setState(410);
      match(IvionParser::You);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(412);
      match(IvionParser::Travel);
      setState(413);
      match(IvionParser::Them);
      setState(414);
      match(IvionParser::Up);
      setState(415);
      match(IvionParser::To);
      setState(416);
      value();
      setState(417);
      match(IvionParser::Tile);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(419);
      match(IvionParser::Travel);
      setState(420);
      match(IvionParser::Them);
      setState(421);
      match(IvionParser::Up);
      setState(422);
      match(IvionParser::To);
      setState(423);
      value();
      setState(424);
      match(IvionParser::Tile);
      setState(425);
      match(IvionParser::Away);
      setState(426);
      match(IvionParser::From);
      setState(427);
      match(IvionParser::You);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(429);
      match(IvionParser::Travel);
      setState(430);
      match(IvionParser::Them);
      setState(431);
      value();
      setState(432);
      match(IvionParser::Tile);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(434);
      match(IvionParser::Travel);
      setState(435);
      match(IvionParser::Them);
      setState(436);
      value();
      setState(437);
      match(IvionParser::Tile);
      setState(438);
      match(IvionParser::Away);
      setState(439);
      match(IvionParser::From);
      setState(440);
      match(IvionParser::You);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(442);
      match(IvionParser::Travel);
      setState(443);
      match(IvionParser::Another);
      setState(444);
      match(IvionParser::Target);
      setState(445);
      match(IvionParser::Player);
      setState(446);
      match(IvionParser::Up);
      setState(447);
      match(IvionParser::To);
      setState(448);
      value();
      setState(449);
      match(IvionParser::Tile);
      setState(450);
      match(IvionParser::Away);
      setState(451);
      match(IvionParser::From);
      setState(452);
      match(IvionParser::You);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(454);
      match(IvionParser::Travel);
      setState(455);
      match(IvionParser::Up);
      setState(456);
      match(IvionParser::To);
      setState(457);
      value();
      setState(458);
      match(IvionParser::Tile);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(460);
      match(IvionParser::Travel);
      setState(461);
      match(IvionParser::Them);
      setState(462);
      match(IvionParser::To);
      setState(463);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(464);
      match(IvionParser::Travel);
      setState(465);
      match(IvionParser::Another);
      setState(466);
      match(IvionParser::Target);
      setState(467);
      match(IvionParser::Player);
      setState(468);
      match(IvionParser::To);
      setState(469);
      match(IvionParser::The);
      setState(470);
      match(IvionParser::Nearest);
      setState(471);
      match(IvionParser::Tile);
      setState(472);
      match(IvionParser::Next);
      setState(473);
      match(IvionParser::To);
      setState(474);
      match(IvionParser::You);
      setState(475);
      match(IvionParser::Unless);
      setState(476);
      match(IvionParser::They);
      setState(477);
      match(IvionParser::Spend);
      setState(478);
      value();
      setState(479);
      match(IvionParser::Resource);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(481);
      match(IvionParser::Travel);
      setState(482);
      match(IvionParser::To);
      setState(483);
      match(IvionParser::The);
      setState(484);
      match(IvionParser::Nearest);
      setState(485);
      match(IvionParser::Tile);
      setState(486);
      match(IvionParser::Next);
      setState(487);
      match(IvionParser::To);
      setState(488);
      match(IvionParser::Another);
      setState(489);
      match(IvionParser::Target);
      setState(490);
      match(IvionParser::Player);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(491);
      match(IvionParser::Travel);
      setState(492);
      match(IvionParser::To);
      setState(493);
      match(IvionParser::The);
      setState(494);
      match(IvionParser::Nearest);
      setState(495);
      match(IvionParser::Tile);
      setState(496);
      match(IvionParser::Next);
      setState(497);
      match(IvionParser::To);
      setState(498);
      match(IvionParser::Target);
      setState(499);
      match(IvionParser::Enemy);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(500);
      match(IvionParser::Travel);
      setState(501);
      match(IvionParser::Them);
      setState(502);
      match(IvionParser::Another);
      setState(503);
      value();
      setState(504);
      match(IvionParser::Tile);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(506);
      match(IvionParser::Travel);
      setState(507);
      value();
      setState(508);
      match(IvionParser::Tile);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(510);
      match(IvionParser::Travel);
      setState(511);
      match(IvionParser::To);
      setState(512);
      match(IvionParser::Another);
      setState(513);
      match(IvionParser::Target);
      setState(514);
      match(IvionParser::Tile);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(515);
      match(IvionParser::Travel);
      setState(516);
      match(IvionParser::All);
      setState(517);
      match(IvionParser::Other);
      setState(518);
      match(IvionParser::Player);
      setState(519);
      match(IvionParser::Up);
      setState(520);
      match(IvionParser::To);
      setState(521);
      value();
      setState(522);
      match(IvionParser::Tile);
      setState(523);
      match(IvionParser::Away);
      setState(524);
      match(IvionParser::From);
      setState(525);
      match(IvionParser::You);
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

tree::TerminalNode* IvionParser::DestroyCardContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::Attached() {
  return getToken(IvionParser::Attached, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::To() {
  return getToken(IvionParser::To, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::DestroyCardContext::Up() {
  return getToken(IvionParser::Up, 0);
}

IvionParser::ValueContext* IvionParser::DestroyCardContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 10, IvionParser::RuleDestroyCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(562);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(529);
      match(IvionParser::Destroy);
      setState(530);
      match(IvionParser::Target);
      setState(531);
      match(IvionParser::Card);
      setState(532);
      match(IvionParser::Attached);
      setState(533);
      match(IvionParser::To);
      setState(534);
      match(IvionParser::You);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(535);
      match(IvionParser::Destroy);
      setState(536);
      match(IvionParser::Target);
      setState(537);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(538);
      match(IvionParser::Destroy);
      setState(539);
      match(IvionParser::Target);
      setState(540);
      match(IvionParser::Card);
      setState(541);
      match(IvionParser::In);
      setState(542);
      match(IvionParser::That);
      setState(543);
      match(IvionParser::Tile);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(544);
      match(IvionParser::Destroy);
      setState(545);
      match(IvionParser::Target);
      setState(546);
      match(IvionParser::Card);
      setState(547);
      match(IvionParser::In);
      setState(548);
      match(IvionParser::Terrain);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(549);
      match(IvionParser::Destroy);
      setState(550);
      match(IvionParser::All);
      setState(551);
      match(IvionParser::Enemy);
      setState(552);
      match(IvionParser::Card);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(553);
      match(IvionParser::Destroy);
      setState(554);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(555);
      match(IvionParser::Destroy);
      setState(556);
      match(IvionParser::Up);
      setState(557);
      match(IvionParser::To);
      setState(558);
      value();
      setState(559);
      match(IvionParser::Target);
      setState(560);
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

tree::TerminalNode* IvionParser::DealDamageContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

std::vector<tree::TerminalNode *> IvionParser::DealDamageContext::Them() {
  return getTokens(IvionParser::Them);
}

tree::TerminalNode* IvionParser::DealDamageContext::Them(size_t i) {
  return getToken(IvionParser::Them, i);
}

tree::TerminalNode* IvionParser::DealDamageContext::Equal() {
  return getToken(IvionParser::Equal, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Number() {
  return getToken(IvionParser::Number, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Their() {
  return getToken(IvionParser::Their, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Hand() {
  return getToken(IvionParser::Hand, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Plus() {
  return getToken(IvionParser::Plus, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Mitigate() {
  return getToken(IvionParser::Mitigate, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::More() {
  return getToken(IvionParser::More, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::POWER() {
  return getToken(IvionParser::POWER, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Total() {
  return getToken(IvionParser::Total, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Value() {
  return getToken(IvionParser::Value, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Control() {
  return getToken(IvionParser::Control, 0);
}

tree::TerminalNode* IvionParser::DealDamageContext::Affecting() {
  return getToken(IvionParser::Affecting, 0);
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
  enterRule(_localctx, 12, IvionParser::RuleDealDamage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(733);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(564);
      match(IvionParser::Deal);
      setState(565);
      value();
      setState(566);
      match(IvionParser::Damage);
      setState(567);
      match(IvionParser::To);
      setState(568);
      match(IvionParser::Target);
      setState(569);
      match(IvionParser::Enemy);
      setState(570);
      match(IvionParser::In);
      setState(571);
      match(IvionParser::That);
      setState(572);
      match(IvionParser::Tile);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(574);
      match(IvionParser::Deal);
      setState(575);
      value();
      setState(576);
      match(IvionParser::Damage);
      setState(577);
      match(IvionParser::To);
      setState(578);
      match(IvionParser::Target);
      setState(579);
      match(IvionParser::Enemy);
      setState(580);
      match(IvionParser::Near);
      setState(581);
      match(IvionParser::Terrain);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(583);
      match(IvionParser::Deal);
      setState(584);
      value();
      setState(585);
      match(IvionParser::Damage);
      setState(586);
      match(IvionParser::To);
      setState(587);
      match(IvionParser::Target);
      setState(588);
      match(IvionParser::Enemy);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(590);
      match(IvionParser::Deal);
      setState(591);
      match(IvionParser::Damage);
      setState(592);
      match(IvionParser::To);
      setState(593);
      match(IvionParser::Them);
      setState(594);
      match(IvionParser::Equal);
      setState(595);
      match(IvionParser::To);
      setState(596);
      match(IvionParser::The);
      setState(597);
      match(IvionParser::Number);
      setState(598);
      match(IvionParser::Of);
      setState(599);
      match(IvionParser::Revealed);
      setState(600);
      match(IvionParser::Card);
      setState(601);
      match(IvionParser::In);
      setState(602);
      match(IvionParser::Their);
      setState(603);
      match(IvionParser::Hand);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(604);
      match(IvionParser::Deal);
      setState(605);
      value();
      setState(606);
      match(IvionParser::Damage);
      setState(607);
      match(IvionParser::To);
      setState(608);
      match(IvionParser::Target);
      setState(609);
      match(IvionParser::Enemy);
      setState(610);
      match(IvionParser::Plus);
      setState(611);
      match(IvionParser::Damage);
      setState(612);
      match(IvionParser::Equal);
      setState(613);
      match(IvionParser::To);
      setState(614);
      match(IvionParser::Your);
      setState(615);
      match(IvionParser::Mitigate);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(617);
      match(IvionParser::Deal);
      setState(618);
      value();
      setState(619);
      match(IvionParser::Damage);
      setState(620);
      match(IvionParser::To);
      setState(621);
      match(IvionParser::Them);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(623);
      match(IvionParser::Deal);
      setState(624);
      value();
      setState(625);
      match(IvionParser::Damage);
      setState(626);
      match(IvionParser::To);
      setState(627);
      match(IvionParser::Yourself);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(629);
      match(IvionParser::Deal);
      setState(630);
      value();
      setState(631);
      match(IvionParser::Damage);
      setState(632);
      match(IvionParser::To);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(634);
      match(IvionParser::Deal);
      setState(635);
      match(IvionParser::Damage);
      setState(636);
      match(IvionParser::To);
      setState(637);
      match(IvionParser::Them);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(638);
      match(IvionParser::Deal);
      setState(639);
      value();
      setState(640);
      match(IvionParser::Damage);
      setState(641);
      match(IvionParser::To);
      setState(642);
      match(IvionParser::Each);
      setState(643);
      match(IvionParser::Enemy);
      setState(644);
      match(IvionParser::Near);
      setState(645);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(647);
      match(IvionParser::Deal);
      setState(648);
      value();
      setState(649);
      match(IvionParser::More);
      setState(650);
      match(IvionParser::Damage);
      setState(651);
      match(IvionParser::To);
      setState(652);
      match(IvionParser::Them);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(654);
      match(IvionParser::Deal);
      setState(655);
      value();
      setState(656);
      match(IvionParser::Damage);
      setState(657);
      match(IvionParser::To);
      setState(658);
      match(IvionParser::Them);
      setState(659);
      match(IvionParser::Plus);
      setState(660);
      value();
      setState(661);
      match(IvionParser::More);
      setState(662);
      match(IvionParser::Damage);
      setState(663);
      match(IvionParser::For);
      setState(664);
      match(IvionParser::Each);
      setState(665);
      match(IvionParser::Revealed);
      setState(666);
      match(IvionParser::Card);
      setState(667);
      match(IvionParser::In);
      setState(668);
      match(IvionParser::Their);
      setState(669);
      match(IvionParser::Hand);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(671);
      match(IvionParser::Deal);
      setState(672);
      value();
      setState(673);
      match(IvionParser::Damage);
      setState(674);
      match(IvionParser::To);
      setState(675);
      match(IvionParser::Target);
      setState(676);
      match(IvionParser::Enemy);
      setState(677);
      match(IvionParser::Plus);
      setState(678);
      value();
      setState(679);
      match(IvionParser::More);
      setState(680);
      match(IvionParser::Damage);
      setState(681);
      match(IvionParser::For);
      setState(682);
      match(IvionParser::Each);
      setState(683);
      match(IvionParser::Revealed);
      setState(684);
      match(IvionParser::Card);
      setState(685);
      match(IvionParser::In);
      setState(686);
      match(IvionParser::Their);
      setState(687);
      match(IvionParser::Hand);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(689);
      match(IvionParser::Deal);
      setState(690);
      match(IvionParser::Damage);
      setState(691);
      match(IvionParser::To);
      setState(692);
      match(IvionParser::Target);
      setState(693);
      match(IvionParser::Enemy);
      setState(694);
      match(IvionParser::Equal);
      setState(695);
      match(IvionParser::To);
      setState(696);
      match(IvionParser::Your);
      setState(697);
      match(IvionParser::POWER);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(698);
      match(IvionParser::Deal);
      setState(699);
      value();
      setState(700);
      match(IvionParser::Damage);
      setState(701);
      match(IvionParser::To);
      setState(702);
      match(IvionParser::Each);
      setState(703);
      match(IvionParser::Enemy);
      setState(704);
      match(IvionParser::In);
      setState(705);
      match(IvionParser::Terrain);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(707);
      match(IvionParser::Deal);
      setState(708);
      match(IvionParser::Damage);
      setState(709);
      match(IvionParser::To);
      setState(710);
      match(IvionParser::Them);
      setState(711);
      match(IvionParser::Equal);
      setState(712);
      match(IvionParser::To);
      setState(713);
      match(IvionParser::The);
      setState(714);
      match(IvionParser::Total);
      setState(715);
      match(IvionParser::Value);
      setState(716);
      match(IvionParser::Of);
      setState(717);
      match(IvionParser::Control);
      setState(718);
      match(IvionParser::Affecting);
      setState(719);
      match(IvionParser::Them);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(720);
      match(IvionParser::Deal);
      setState(721);
      match(IvionParser::Damage);
      setState(722);
      match(IvionParser::To);
      setState(723);
      match(IvionParser::Them);
      setState(724);
      match(IvionParser::Equal);
      setState(725);
      match(IvionParser::To);
      setState(726);
      match(IvionParser::The);
      setState(727);
      match(IvionParser::Number);
      setState(728);
      match(IvionParser::Of);
      setState(729);
      match(IvionParser::Card);
      setState(730);
      match(IvionParser::In);
      setState(731);
      match(IvionParser::Their);
      setState(732);
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

//----------------- CounterCardContext ------------------------------------------------------------------

IvionParser::CounterCardContext::CounterCardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::CounterCardContext::Counter() {
  return getToken(IvionParser::Counter, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Up() {
  return getToken(IvionParser::Up, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::To() {
  return getToken(IvionParser::To, 0);
}

std::vector<IvionParser::ValueContext *> IvionParser::CounterCardContext::value() {
  return getRuleContexts<IvionParser::ValueContext>();
}

IvionParser::ValueContext* IvionParser::CounterCardContext::value(size_t i) {
  return getRuleContext<IvionParser::ValueContext>(i);
}

tree::TerminalNode* IvionParser::CounterCardContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Unless() {
  return getToken(IvionParser::Unless, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Its() {
  return getToken(IvionParser::Its, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Controller() {
  return getToken(IvionParser::Controller, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Spends() {
  return getToken(IvionParser::Spends, 0);
}

std::vector<tree::TerminalNode *> IvionParser::CounterCardContext::Resource() {
  return getTokens(IvionParser::Resource);
}

tree::TerminalNode* IvionParser::CounterCardContext::Resource(size_t i) {
  return getToken(IvionParser::Resource, i);
}

tree::TerminalNode* IvionParser::CounterCardContext::Targeting() {
  return getToken(IvionParser::Targeting, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Cost() {
  return getToken(IvionParser::Cost, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Less() {
  return getToken(IvionParser::Less, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::By() {
  return getToken(IvionParser::By, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Spend() {
  return getToken(IvionParser::Spend, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Non() {
  return getToken(IvionParser::Non, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::CounterCardContext::Ability() {
  return getToken(IvionParser::Ability, 0);
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
  enterRule(_localctx, 14, IvionParser::RuleCounterCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(841);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(735);
      match(IvionParser::Counter);
      setState(736);
      match(IvionParser::Up);
      setState(737);
      match(IvionParser::To);
      setState(738);
      value();
      setState(739);
      match(IvionParser::Target);
      setState(740);
      match(IvionParser::Card);
      setState(741);
      match(IvionParser::Unless);
      setState(742);
      match(IvionParser::Its);
      setState(743);
      match(IvionParser::Controller);
      setState(744);
      match(IvionParser::Spends);
      setState(745);
      value();
      setState(746);
      match(IvionParser::Resource);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(748);
      match(IvionParser::Counter);
      setState(749);
      match(IvionParser::Target);
      setState(750);
      match(IvionParser::Card);
      setState(751);
      match(IvionParser::Unless);
      setState(752);
      match(IvionParser::Its);
      setState(753);
      match(IvionParser::Controller);
      setState(754);
      match(IvionParser::Spends);
      setState(755);
      value();
      setState(756);
      match(IvionParser::Resource);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(758);
      match(IvionParser::Counter);
      setState(759);
      match(IvionParser::Target);
      setState(760);
      match(IvionParser::Card);
      setState(761);
      match(IvionParser::Targeting);
      setState(762);
      match(IvionParser::You);
      setState(763);
      match(IvionParser::With);
      setState(764);
      match(IvionParser::A);
      setState(765);
      match(IvionParser::Resource);
      setState(766);
      match(IvionParser::Cost);
      setState(767);
      match(IvionParser::Of);
      setState(768);
      value();
      setState(769);
      match(IvionParser::Or);
      setState(770);
      match(IvionParser::Less);
      setState(771);
      match(IvionParser::Unless);
      setState(772);
      match(IvionParser::Its);
      setState(773);
      match(IvionParser::Controller);
      setState(774);
      match(IvionParser::Spends);
      setState(775);
      value();
      setState(776);
      match(IvionParser::Resource);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(778);
      match(IvionParser::Counter);
      setState(779);
      match(IvionParser::Target);
      setState(780);
      match(IvionParser::Card);
      setState(781);
      match(IvionParser::Controlled);
      setState(782);
      match(IvionParser::By);
      setState(783);
      match(IvionParser::A);
      setState(784);
      match(IvionParser::Player);
      setState(785);
      match(IvionParser::In);
      setState(786);
      match(IvionParser::Terrain);
      setState(787);
      match(IvionParser::Unless);
      setState(788);
      match(IvionParser::They);
      setState(789);
      match(IvionParser::Spend);
      setState(790);
      value();
      setState(791);
      match(IvionParser::Resource);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(793);
      match(IvionParser::Counter);
      setState(794);
      match(IvionParser::Target);
      setState(795);
      match(IvionParser::Card);
      setState(796);
      match(IvionParser::Targeting);
      setState(797);
      match(IvionParser::You);
      setState(798);
      match(IvionParser::Unless);
      setState(799);
      match(IvionParser::Its);
      setState(800);
      match(IvionParser::Controller);
      setState(801);
      match(IvionParser::Spends);
      setState(802);
      value();
      setState(803);
      match(IvionParser::Resource);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(805);
      match(IvionParser::Counter);
      setState(806);
      match(IvionParser::Target);
      setState(807);
      match(IvionParser::Non);
      setState(808);
      match(IvionParser::Attack);
      setState(809);
      match(IvionParser::Card);
      setState(810);
      match(IvionParser::Unless);
      setState(811);
      match(IvionParser::Its);
      setState(812);
      match(IvionParser::Controller);
      setState(813);
      match(IvionParser::Spends);
      setState(814);
      value();
      setState(815);
      match(IvionParser::Resource);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(817);
      match(IvionParser::Counter);
      setState(818);
      match(IvionParser::Target);
      setState(819);
      match(IvionParser::Attack);
      setState(820);
      match(IvionParser::Card);
      setState(821);
      match(IvionParser::Targeting);
      setState(822);
      match(IvionParser::You);
      setState(823);
      match(IvionParser::Unless);
      setState(824);
      match(IvionParser::Its);
      setState(825);
      match(IvionParser::Controller);
      setState(826);
      match(IvionParser::Spends);
      setState(827);
      value();
      setState(828);
      match(IvionParser::Resource);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(830);
      match(IvionParser::Counter);
      setState(831);
      match(IvionParser::Target);
      setState(832);
      match(IvionParser::Ability);
      setState(833);
      match(IvionParser::Card);
      setState(834);
      match(IvionParser::Unless);
      setState(835);
      match(IvionParser::Its);
      setState(836);
      match(IvionParser::Controller);
      setState(837);
      match(IvionParser::Spends);
      setState(838);
      value();
      setState(839);
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

//----------------- CounterCardConditionContext ------------------------------------------------------------------

IvionParser::CounterCardConditionContext::CounterCardConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::CounterCardContext* IvionParser::CounterCardConditionContext::counterCard() {
  return getRuleContext<IvionParser::CounterCardContext>(0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::P() {
  return getToken(IvionParser::P, 0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::Is() {
  return getToken(IvionParser::Is, 0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::Countered() {
  return getToken(IvionParser::Countered, 0);
}

tree::TerminalNode* IvionParser::CounterCardConditionContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::EffectContext* IvionParser::CounterCardConditionContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
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
  enterRule(_localctx, 16, IvionParser::RuleCounterCardCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(854);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(843);
      counterCard();
      setState(844);
      match(IvionParser::P);
      setState(845);
      match(IvionParser::If);
      setState(846);
      match(IvionParser::That);
      setState(847);
      match(IvionParser::Card);
      setState(848);
      match(IvionParser::Is);
      setState(849);
      match(IvionParser::Countered);
      setState(850);
      match(IvionParser::C);
      setState(851);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(853);
      counterCard();
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

//----------------- SpendResourcesContext ------------------------------------------------------------------

IvionParser::SpendResourcesContext::SpendResourcesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::SpendResourcesContext::Spend() {
  return getToken(IvionParser::Spend, 0);
}

IvionParser::ValueContext* IvionParser::SpendResourcesContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 18, IvionParser::RuleSpendResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(856);
    match(IvionParser::Spend);
    setState(857);
    value();
    setState(858);
    match(IvionParser::Resource);
   
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

tree::TerminalNode* IvionParser::AttachCardContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Empty() {
  return getToken(IvionParser::Empty, 0);
}

std::vector<tree::TerminalNode *> IvionParser::AttachCardContext::Tile() {
  return getTokens(IvionParser::Tile);
}

tree::TerminalNode* IvionParser::AttachCardContext::Tile(size_t i) {
  return getToken(IvionParser::Tile, i);
}

tree::TerminalNode* IvionParser::AttachCardContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::ValueContext* IvionParser::AttachCardContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Away() {
  return getToken(IvionParser::Away, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::From() {
  return getToken(IvionParser::From, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
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

std::vector<tree::TerminalNode *> IvionParser::AttachCardContext::The() {
  return getTokens(IvionParser::The);
}

tree::TerminalNode* IvionParser::AttachCardContext::The(size_t i) {
  return getToken(IvionParser::The, i);
}

tree::TerminalNode* IvionParser::AttachCardContext::Start() {
  return getToken(IvionParser::Start, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Next() {
  return getToken(IvionParser::Next, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::AttachCardContext::Them() {
  return getToken(IvionParser::Them, 0);
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
  enterRule(_localctx, 20, IvionParser::RuleAttachCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(958);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(860);
      match(IvionParser::Attach);
      setState(861);
      match(IvionParser::To);
      setState(862);
      match(IvionParser::Target);
      setState(863);
      match(IvionParser::Player);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(864);
      match(IvionParser::Attach);
      setState(865);
      match(IvionParser::To);
      setState(866);
      match(IvionParser::Target);
      setState(867);
      match(IvionParser::Enemy);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(868);
      match(IvionParser::Attach);
      setState(869);
      match(IvionParser::To);
      setState(870);
      match(IvionParser::Yourself);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(871);
      match(IvionParser::Attach);
      setState(872);
      match(IvionParser::To);
      setState(873);
      match(IvionParser::Target);
      setState(874);
      match(IvionParser::Empty);
      setState(875);
      match(IvionParser::Tile);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(876);
      match(IvionParser::Attach);
      setState(877);
      match(IvionParser::To);
      setState(878);
      match(IvionParser::Target);
      setState(879);
      match(IvionParser::Empty);
      setState(880);
      match(IvionParser::Tile);
      setState(881);
      match(IvionParser::At);
      setState(882);
      match(IvionParser::Least);
      setState(883);
      value();
      setState(884);
      match(IvionParser::Tile);
      setState(885);
      match(IvionParser::Away);
      setState(886);
      match(IvionParser::From);
      setState(887);
      match(IvionParser::You);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(889);
      match(IvionParser::Attach);
      setState(890);
      match(IvionParser::To);
      setState(891);
      match(IvionParser::Target);
      setState(892);
      match(IvionParser::Empty);
      setState(893);
      match(IvionParser::Tile);
      setState(894);
      match(IvionParser::Near);
      setState(895);
      match(IvionParser::Terrain);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(896);
      match(IvionParser::Attach);
      setState(897);
      match(IvionParser::To);
      setState(898);
      match(IvionParser::Target);
      setState(899);
      match(IvionParser::Empty);
      setState(900);
      match(IvionParser::Tile);
      setState(901);
      match(IvionParser::Until);
      setState(902);
      match(IvionParser::End);
      setState(903);
      match(IvionParser::Of);
      setState(904);
      match(IvionParser::Turn);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(905);
      match(IvionParser::Attach);
      setState(906);
      match(IvionParser::To);
      setState(907);
      match(IvionParser::Target);
      setState(908);
      match(IvionParser::Enemy);
      setState(909);
      match(IvionParser::Until);
      setState(910);
      match(IvionParser::The);
      setState(911);
      match(IvionParser::Start);
      setState(912);
      match(IvionParser::Of);
      setState(913);
      match(IvionParser::Your);
      setState(914);
      match(IvionParser::Next);
      setState(915);
      match(IvionParser::Turn);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(916);
      match(IvionParser::Attach);
      setState(917);
      match(IvionParser::To);
      setState(918);
      match(IvionParser::Yourself);
      setState(919);
      match(IvionParser::Until);
      setState(920);
      match(IvionParser::The);
      setState(921);
      match(IvionParser::End);
      setState(922);
      match(IvionParser::Of);
      setState(923);
      match(IvionParser::The);
      setState(924);
      match(IvionParser::Turn);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(925);
      match(IvionParser::Attach);
      setState(926);
      match(IvionParser::To);
      setState(927);
      match(IvionParser::Yourself);
      setState(928);
      match(IvionParser::Until);
      setState(929);
      match(IvionParser::The);
      setState(930);
      match(IvionParser::End);
      setState(931);
      match(IvionParser::Of);
      setState(932);
      match(IvionParser::Turn);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(933);
      match(IvionParser::Attach);
      setState(934);
      match(IvionParser::To);
      setState(935);
      match(IvionParser::Yourself);
      setState(936);
      match(IvionParser::Until);
      setState(937);
      match(IvionParser::End);
      setState(938);
      match(IvionParser::Of);
      setState(939);
      match(IvionParser::Turn);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(940);
      match(IvionParser::Attach);
      setState(941);
      match(IvionParser::To);
      setState(942);
      match(IvionParser::Yourself);
      setState(943);
      match(IvionParser::Until);
      setState(944);
      match(IvionParser::The);
      setState(945);
      match(IvionParser::Start);
      setState(946);
      match(IvionParser::Of);
      setState(947);
      match(IvionParser::Your);
      setState(948);
      match(IvionParser::Next);
      setState(949);
      match(IvionParser::Turn);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(950);
      match(IvionParser::Attach);
      setState(951);
      match(IvionParser::CARD_NAME);
      setState(952);
      match(IvionParser::To);
      setState(953);
      match(IvionParser::Them);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(954);
      match(IvionParser::Attach);
      setState(955);
      match(IvionParser::CARD_NAME);
      setState(956);
      match(IvionParser::To);
      setState(957);
      match(IvionParser::Yourself);
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

tree::TerminalNode* IvionParser::GainPowerContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::GainPowerContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

IvionParser::ValueContext* IvionParser::GainPowerContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 22, IvionParser::RuleGainPower);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(984);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(960);
      match(IvionParser::They);
      setState(961);
      match(IvionParser::Gain);
      setState(962);
      value();
      setState(963);
      match(IvionParser::POWER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(965);
      match(IvionParser::Gain);
      setState(966);
      value();
      setState(967);
      match(IvionParser::More);
      setState(968);
      match(IvionParser::POWER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(970);
      match(IvionParser::Gain);
      setState(971);
      value();
      setState(972);
      match(IvionParser::Additional);
      setState(973);
      match(IvionParser::POWER);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(975);
      match(IvionParser::Gain);
      setState(976);
      value();
      setState(977);
      match(IvionParser::POWER);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(979);
      match(IvionParser::Gain);
      setState(980);
      value();
      setState(981);
      match(IvionParser::More);
      setState(982);
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

tree::TerminalNode* IvionParser::GainActionContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::GainActionContext::Gain() {
  return getToken(IvionParser::Gain, 0);
}

IvionParser::ValueContext* IvionParser::GainActionContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 24, IvionParser::RuleGainAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1010);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(986);
      match(IvionParser::They);
      setState(987);
      match(IvionParser::Gain);
      setState(988);
      value();
      setState(989);
      match(IvionParser::ACTION);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(991);
      match(IvionParser::Gain);
      setState(992);
      value();
      setState(993);
      match(IvionParser::More);
      setState(994);
      match(IvionParser::ACTION);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(996);
      match(IvionParser::Gain);
      setState(997);
      value();
      setState(998);
      match(IvionParser::Additional);
      setState(999);
      match(IvionParser::ACTION);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1001);
      match(IvionParser::Gain);
      setState(1002);
      value();
      setState(1003);
      match(IvionParser::ACTION);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1005);
      match(IvionParser::Gain);
      setState(1006);
      value();
      setState(1007);
      match(IvionParser::More);
      setState(1008);
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

tree::TerminalNode* IvionParser::GainInitiativeContext::They() {
  return getToken(IvionParser::They, 0);
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
  enterRule(_localctx, 26, IvionParser::RuleGainInitiative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(1032);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1012);
      match(IvionParser::Gain);
      setState(1014); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1013);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1016); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1018);
      match(IvionParser::They);
      setState(1019);
      match(IvionParser::Gain);
      setState(1021); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1020);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1023); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1025);
      match(IvionParser::Gain);
      setState(1026);
      match(IvionParser::Another);
      setState(1028); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(1027);
                match(IvionParser::INITIATIVE);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(1030); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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

tree::TerminalNode* IvionParser::GainMitigateContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::GainMitigateContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::GainMitigateContext::Gains() {
  return getToken(IvionParser::Gains, 0);
}

tree::TerminalNode* IvionParser::GainMitigateContext::Mitigate() {
  return getToken(IvionParser::Mitigate, 0);
}

IvionParser::ValueContext* IvionParser::GainMitigateContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 28, IvionParser::RuleGainMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1042);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Target: {
        enterOuterAlt(_localctx, 1);
        setState(1034);
        match(IvionParser::Target);
        setState(1035);
        match(IvionParser::Player);
        setState(1036);
        match(IvionParser::Gains);
        setState(1037);
        match(IvionParser::Mitigate);
        setState(1038);
        value();
        break;
      }

      case IvionParser::Gain: {
        enterOuterAlt(_localctx, 2);
        setState(1039);
        match(IvionParser::Gain);
        setState(1040);
        match(IvionParser::Mitigate);
        setState(1041);
        value();
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
  enterRule(_localctx, 30, IvionParser::RuleLoseMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1044);
    match(IvionParser::Lose);
    setState(1045);
    match(IvionParser::Your);
    setState(1046);
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
  enterRule(_localctx, 32, IvionParser::RuleUseSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1048);
    match(IvionParser::Use);
    setState(1049);
    match(IvionParser::Your);
    setState(1050);
    match(IvionParser::Second);
    setState(1051);
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

tree::TerminalNode* IvionParser::ReturnCardContext::A() {
  return getToken(IvionParser::A, 0);
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

IvionParser::ValueContext* IvionParser::ReturnCardContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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

tree::TerminalNode* IvionParser::ReturnCardContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::ReturnCardContext::An() {
  return getToken(IvionParser::An, 0);
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
  enterRule(_localctx, 34, IvionParser::RuleReturnCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1053);
      match(IvionParser::Return);
      setState(1054);
      match(IvionParser::Target);
      setState(1055);
      match(IvionParser::Attached);
      setState(1056);
      match(IvionParser::Card);
      setState(1057);
      match(IvionParser::To);
      setState(1058);
      match(IvionParser::Its);
      setState(1059);
      match(IvionParser::Owners);
      setState(1060);
      match(IvionParser::Hand);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1061);
      match(IvionParser::Return);
      setState(1062);
      match(IvionParser::Target);
      setState(1063);
      match(IvionParser::Card);
      setState(1064);
      match(IvionParser::With);
      setState(1065);
      match(IvionParser::A);
      setState(1066);
      match(IvionParser::Resource);
      setState(1067);
      match(IvionParser::Cost);
      setState(1068);
      match(IvionParser::Of);
      setState(1069);
      value();
      setState(1070);
      match(IvionParser::Or);
      setState(1071);
      match(IvionParser::Less);
      setState(1072);
      match(IvionParser::From);
      setState(1073);
      match(IvionParser::Your);
      setState(1074);
      match(IvionParser::Discard);
      setState(1075);
      match(IvionParser::To);
      setState(1076);
      match(IvionParser::Your);
      setState(1077);
      match(IvionParser::Hand);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1079);
      match(IvionParser::Return);
      setState(1080);
      match(IvionParser::Target);
      setState(1081);
      match(IvionParser::Ability);
      setState(1082);
      match(IvionParser::Card);
      setState(1083);
      match(IvionParser::From);
      setState(1084);
      match(IvionParser::Your);
      setState(1085);
      match(IvionParser::Discard);
      setState(1086);
      match(IvionParser::To);
      setState(1087);
      match(IvionParser::Your);
      setState(1088);
      match(IvionParser::Hand);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1089);
      match(IvionParser::You);
      setState(1090);
      match(IvionParser::May);
      setState(1091);
      match(IvionParser::Return);
      setState(1092);
      match(IvionParser::An);
      setState(1093);
      match(IvionParser::Attack);
      setState(1094);
      match(IvionParser::Card);
      setState(1095);
      match(IvionParser::With);
      setState(1096);
      match(IvionParser::A);
      setState(1097);
      match(IvionParser::Resource);
      setState(1098);
      match(IvionParser::Cost);
      setState(1099);
      match(IvionParser::Of);
      setState(1100);
      value();
      setState(1101);
      match(IvionParser::Or);
      setState(1102);
      match(IvionParser::Less);
      setState(1103);
      match(IvionParser::From);
      setState(1104);
      match(IvionParser::Your);
      setState(1105);
      match(IvionParser::Discard);
      setState(1106);
      match(IvionParser::To);
      setState(1107);
      match(IvionParser::Your);
      setState(1108);
      match(IvionParser::Hand);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1110);
      match(IvionParser::Return);
      setState(1111);
      match(IvionParser::A);
      setState(1112);
      match(IvionParser::Card);
      setState(1113);
      match(IvionParser::From);
      setState(1114);
      match(IvionParser::Your);
      setState(1115);
      match(IvionParser::Discard);
      setState(1116);
      match(IvionParser::To);
      setState(1117);
      match(IvionParser::Your);
      setState(1118);
      match(IvionParser::Hand);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1119);
      match(IvionParser::Return);
      setState(1120);
      match(IvionParser::Target);
      setState(1121);
      match(IvionParser::Card);
      setState(1122);
      match(IvionParser::From);
      setState(1123);
      match(IvionParser::Your);
      setState(1124);
      match(IvionParser::Discard);
      setState(1125);
      match(IvionParser::To);
      setState(1126);
      match(IvionParser::Your);
      setState(1127);
      match(IvionParser::Hand);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1128);
      match(IvionParser::Return);
      setState(1129);
      match(IvionParser::CARD_NAME);
      setState(1130);
      match(IvionParser::To);
      setState(1131);
      match(IvionParser::Your);
      setState(1132);
      match(IvionParser::Hand);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1133);
      match(IvionParser::Return);
      setState(1134);
      match(IvionParser::It);
      setState(1135);
      match(IvionParser::From);
      setState(1136);
      match(IvionParser::Your);
      setState(1137);
      match(IvionParser::Discard);
      setState(1138);
      match(IvionParser::To);
      setState(1139);
      match(IvionParser::Your);
      setState(1140);
      match(IvionParser::Hand);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1141);
      match(IvionParser::Return);
      setState(1142);
      match(IvionParser::Target);
      setState(1143);
      match(IvionParser::Card);
      setState(1144);
      match(IvionParser::With);
      setState(1145);
      match(IvionParser::A);
      setState(1146);
      match(IvionParser::Resource);
      setState(1147);
      match(IvionParser::Cost);
      setState(1148);
      match(IvionParser::Of);
      setState(1149);
      value();
      setState(1150);
      match(IvionParser::Or);
      setState(1151);
      match(IvionParser::More);
      setState(1152);
      match(IvionParser::From);
      setState(1153);
      match(IvionParser::Your);
      setState(1154);
      match(IvionParser::Discard);
      setState(1155);
      match(IvionParser::To);
      setState(1156);
      match(IvionParser::Your);
      setState(1157);
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

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Bottom() {
  return getToken(IvionParser::Bottom, 0);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Of() {
  return getToken(IvionParser::Of, 0);
}

std::vector<tree::TerminalNode *> IvionParser::PutBottomCardOfDeckIntoHandContext::Your() {
  return getTokens(IvionParser::Your);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Your(size_t i) {
  return getToken(IvionParser::Your, i);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Deck() {
  return getToken(IvionParser::Deck, 0);
}

tree::TerminalNode* IvionParser::PutBottomCardOfDeckIntoHandContext::Into() {
  return getToken(IvionParser::Into, 0);
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
  enterRule(_localctx, 36, IvionParser::RulePutBottomCardOfDeckIntoHand);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1161);
    match(IvionParser::Put);
    setState(1162);
    match(IvionParser::The);
    setState(1163);
    match(IvionParser::Bottom);
    setState(1164);
    match(IvionParser::Card);
    setState(1165);
    match(IvionParser::Of);
    setState(1166);
    match(IvionParser::Your);
    setState(1167);
    match(IvionParser::Deck);
    setState(1168);
    match(IvionParser::Into);
    setState(1169);
    match(IvionParser::Your);
    setState(1170);
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
  enterRule(_localctx, 38, IvionParser::RuleTriggerDurationEffects);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1172);
    match(IvionParser::Trigger);
    setState(1173);
    match(IvionParser::Your);
    setState(1174);
    match(IvionParser::Duration);
    setState(1175);
    match(IvionParser::Effects);
    setState(1176);
    match(IvionParser::As);
    setState(1177);
    match(IvionParser::Though);
    setState(1178);
    match(IvionParser::Your);
    setState(1179);
    match(IvionParser::Turn);
    setState(1180);
    match(IvionParser::Had);
    setState(1181);
    match(IvionParser::Just);
    setState(1182);
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

tree::TerminalNode* IvionParser::PlayCardContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::May() {
  return getToken(IvionParser::May, 0);
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

IvionParser::ValueContext* IvionParser::PlayCardContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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

std::vector<tree::TerminalNode *> IvionParser::PlayCardContext::An() {
  return getTokens(IvionParser::An);
}

tree::TerminalNode* IvionParser::PlayCardContext::An(size_t i) {
  return getToken(IvionParser::An, i);
}

tree::TerminalNode* IvionParser::PlayCardContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

tree::TerminalNode* IvionParser::PlayCardContext::Them() {
  return getToken(IvionParser::Them, 0);
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
  enterRule(_localctx, 40, IvionParser::RulePlayCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1327);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1184);
      match(IvionParser::Target);
      setState(1185);
      match(IvionParser::Player);
      setState(1186);
      match(IvionParser::May);
      setState(1187);
      match(IvionParser::Play);
      setState(1188);
      match(IvionParser::A);
      setState(1189);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1190);
      match(IvionParser::Target);
      setState(1191);
      match(IvionParser::Player);
      setState(1192);
      match(IvionParser::May);
      setState(1193);
      match(IvionParser::Play);
      setState(1194);
      match(IvionParser::A);
      setState(1195);
      match(IvionParser::Card);
      setState(1196);
      match(IvionParser::For);
      setState(1197);
      value();
      setState(1198);
      match(IvionParser::Less);
      setState(1199);
      match(IvionParser::Resource);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1201);
      match(IvionParser::Play);
      setState(1202);
      match(IvionParser::A);
      setState(1203);
      match(IvionParser::Card);
      setState(1204);
      match(IvionParser::For);
      setState(1205);
      match(IvionParser::Free);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1206);
      match(IvionParser::Play);
      setState(1207);
      match(IvionParser::That);
      setState(1208);
      match(IvionParser::Card);
      setState(1209);
      match(IvionParser::For);
      setState(1210);
      match(IvionParser::Free);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1211);
      match(IvionParser::Play);
      setState(1212);
      match(IvionParser::Target);
      setState(1213);
      match(IvionParser::Non);
      setState(1214);
      match(IvionParser::Attack);
      setState(1215);
      match(IvionParser::Card);
      setState(1216);
      match(IvionParser::From);
      setState(1217);
      match(IvionParser::Your);
      setState(1218);
      match(IvionParser::Discard);
      setState(1219);
      match(IvionParser::Targeting);
      setState(1220);
      match(IvionParser::An);
      setState(1221);
      match(IvionParser::Enemy);
      setState(1222);
      match(IvionParser::For);
      setState(1223);
      match(IvionParser::Free);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1224);
      match(IvionParser::Play);
      setState(1225);
      match(IvionParser::An);
      setState(1226);
      match(IvionParser::Attack);
      setState(1227);
      match(IvionParser::Card);
      setState(1228);
      match(IvionParser::Targeting);
      setState(1229);
      match(IvionParser::An);
      setState(1230);
      match(IvionParser::Enemy);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1231);
      match(IvionParser::Play);
      setState(1232);
      match(IvionParser::An);
      setState(1233);
      match(IvionParser::Ability);
      setState(1234);
      match(IvionParser::Card);
      setState(1235);
      match(IvionParser::From);
      setState(1236);
      match(IvionParser::Your);
      setState(1237);
      match(IvionParser::Discard);
      setState(1238);
      match(IvionParser::Targeting);
      setState(1239);
      match(IvionParser::Them);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1240);
      match(IvionParser::Play);
      setState(1241);
      match(IvionParser::An);
      setState(1242);
      match(IvionParser::Attack);
      setState(1243);
      match(IvionParser::Card);
      setState(1244);
      match(IvionParser::Targeting);
      setState(1245);
      match(IvionParser::Them);
      setState(1246);
      match(IvionParser::For);
      setState(1247);
      value();
      setState(1248);
      match(IvionParser::Less);
      setState(1249);
      match(IvionParser::Resource);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1251);
      match(IvionParser::Play);
      setState(1252);
      match(IvionParser::A);
      setState(1253);
      match(IvionParser::Card);
      setState(1254);
      match(IvionParser::With);
      setState(1255);
      match(IvionParser::Frenzy);
      setState(1256);
      match(IvionParser::For);
      setState(1257);
      value();
      setState(1258);
      match(IvionParser::Less);
      setState(1259);
      match(IvionParser::Resource);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1261);
      match(IvionParser::Play);
      setState(1262);
      match(IvionParser::A);
      setState(1263);
      match(IvionParser::Card);
      setState(1264);
      match(IvionParser::Targeting);
      setState(1265);
      match(IvionParser::Them);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1266);
      match(IvionParser::Play);
      setState(1267);
      match(IvionParser::Cursed);
      setState(1268);
      match(IvionParser::Dagger);
      setState(1269);
      match(IvionParser::For);
      setState(1270);
      match(IvionParser::Free);
      setState(1271);
      match(IvionParser::P);
      setState(1272);
      match(IvionParser::This);
      setState(1273);
      match(IvionParser::Doesnt);
      setState(1274);
      match(IvionParser::Count);
      setState(1275);
      match(IvionParser::Towards);
      setState(1276);
      match(IvionParser::Your);
      setState(1277);
      match(IvionParser::Cursed);
      setState(1278);
      match(IvionParser::Dagger);
      setState(1279);
      match(IvionParser::Limit);
      setState(1280);
      match(IvionParser::Per);
      setState(1281);
      match(IvionParser::Turn);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1282);
      match(IvionParser::Play);
      setState(1283);
      match(IvionParser::Runic);
      setState(1284);
      match(IvionParser::Slaughter);
      setState(1285);
      match(IvionParser::Targeting);
      setState(1286);
      match(IvionParser::Them);
      setState(1287);
      match(IvionParser::For);
      setState(1288);
      match(IvionParser::Free);
      setState(1289);
      match(IvionParser::P);
      setState(1290);
      match(IvionParser::This);
      setState(1291);
      match(IvionParser::Doesnt);
      setState(1292);
      match(IvionParser::Count);
      setState(1293);
      match(IvionParser::Towards);
      setState(1294);
      match(IvionParser::Your);
      setState(1295);
      match(IvionParser::Runic);
      setState(1296);
      match(IvionParser::Slaughter);
      setState(1297);
      match(IvionParser::Limit);
      setState(1298);
      match(IvionParser::Per);
      setState(1299);
      match(IvionParser::Turn);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(1300);
      match(IvionParser::Play);
      setState(1301);
      match(IvionParser::A);
      setState(1302);
      match(IvionParser::Card);
      setState(1303);
      match(IvionParser::For);
      setState(1304);
      value();
      setState(1305);
      match(IvionParser::Less);
      setState(1306);
      match(IvionParser::Resource);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(1308);
      match(IvionParser::Play);
      setState(1309);
      match(IvionParser::A);
      setState(1310);
      match(IvionParser::Non);
      setState(1311);
      match(IvionParser::Attack);
      setState(1312);
      match(IvionParser::Card);
      setState(1313);
      match(IvionParser::Targeting);
      setState(1314);
      match(IvionParser::An);
      setState(1315);
      match(IvionParser::Enemy);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(1316);
      match(IvionParser::Play);
      setState(1317);
      match(IvionParser::A);
      setState(1318);
      match(IvionParser::Ability);
      setState(1319);
      match(IvionParser::Card);
      setState(1320);
      match(IvionParser::Targeting);
      setState(1321);
      match(IvionParser::Them);
      setState(1322);
      match(IvionParser::For);
      setState(1323);
      value();
      setState(1324);
      match(IvionParser::Less);
      setState(1325);
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

IvionParser::ValueContext* IvionParser::DiscardCardsContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Them() {
  return getToken(IvionParser::Them, 0);
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

tree::TerminalNode* IvionParser::DiscardCardsContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Choice() {
  return getToken(IvionParser::Choice, 0);
}

std::vector<tree::TerminalNode *> IvionParser::DiscardCardsContext::Target() {
  return getTokens(IvionParser::Target);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Target(size_t i) {
  return getToken(IvionParser::Target, i);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Discards() {
  return getToken(IvionParser::Discards, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::DiscardCardsContext::Their() {
  return getToken(IvionParser::Their, 0);
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
  enterRule(_localctx, 42, IvionParser::RuleDiscardCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1379);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1329);
      match(IvionParser::Discard);
      setState(1330);
      value();
      setState(1331);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1333);
      match(IvionParser::They);
      setState(1334);
      match(IvionParser::Discard);
      setState(1335);
      value();
      setState(1336);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1338);
      match(IvionParser::Have);
      setState(1339);
      match(IvionParser::Them);
      setState(1340);
      match(IvionParser::Discard);
      setState(1341);
      match(IvionParser::A);
      setState(1342);
      match(IvionParser::Revealed);
      setState(1343);
      match(IvionParser::Card);
      setState(1344);
      match(IvionParser::Of);
      setState(1345);
      match(IvionParser::Your);
      setState(1346);
      match(IvionParser::Choice);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1347);
      match(IvionParser::Discard);
      setState(1348);
      match(IvionParser::A);
      setState(1349);
      match(IvionParser::Card);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1350);
      match(IvionParser::They);
      setState(1351);
      match(IvionParser::Discard);
      setState(1352);
      match(IvionParser::A);
      setState(1353);
      match(IvionParser::Card);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1354);
      match(IvionParser::Target);
      setState(1355);
      match(IvionParser::Enemy);
      setState(1356);
      match(IvionParser::Discards);
      setState(1357);
      match(IvionParser::Target);
      setState(1358);
      match(IvionParser::Revealed);
      setState(1359);
      match(IvionParser::Card);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1360);
      match(IvionParser::Target);
      setState(1361);
      match(IvionParser::Enemy);
      setState(1362);
      match(IvionParser::Discards);
      setState(1363);
      value();
      setState(1364);
      match(IvionParser::Card);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1366);
      match(IvionParser::Target);
      setState(1367);
      match(IvionParser::Player);
      setState(1368);
      match(IvionParser::Discards);
      setState(1369);
      match(IvionParser::A);
      setState(1370);
      match(IvionParser::Revealed);
      setState(1371);
      match(IvionParser::Card);
      setState(1372);
      match(IvionParser::Of);
      setState(1373);
      match(IvionParser::Their);
      setState(1374);
      match(IvionParser::Choice);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1375);
      match(IvionParser::Discard);
      setState(1376);
      match(IvionParser::A);
      setState(1377);
      match(IvionParser::Revealed);
      setState(1378);
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
  enterRule(_localctx, 44, IvionParser::RuleGainsHeroic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1381);
    match(IvionParser::That);
    setState(1382);
    match(IvionParser::Card);
    setState(1383);
    match(IvionParser::Gains);
    setState(1384);
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

tree::TerminalNode* IvionParser::HealPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Player() {
  return getToken(IvionParser::Player, 0);
}

IvionParser::ValueContext* IvionParser::HealPlayerContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::HP() {
  return getToken(IvionParser::HP, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Them() {
  return getToken(IvionParser::Them, 0);
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

tree::TerminalNode* IvionParser::HealPlayerContext::Revealed() {
  return getToken(IvionParser::Revealed, 0);
}

tree::TerminalNode* IvionParser::HealPlayerContext::Card() {
  return getToken(IvionParser::Card, 0);
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
  enterRule(_localctx, 46, IvionParser::RuleHealPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1415);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1386);
      match(IvionParser::Heal);
      setState(1387);
      match(IvionParser::Target);
      setState(1388);
      match(IvionParser::Player);
      setState(1389);
      value();
      setState(1390);
      match(IvionParser::HP);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1392);
      match(IvionParser::Heal);
      setState(1393);
      match(IvionParser::Yourself);
      setState(1394);
      value();
      setState(1395);
      match(IvionParser::HP);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1397);
      match(IvionParser::Heal);
      setState(1398);
      match(IvionParser::Them);
      setState(1399);
      value();
      setState(1400);
      match(IvionParser::HP);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1402);
      match(IvionParser::Heal);
      setState(1403);
      match(IvionParser::Yourself);
      setState(1404);
      match(IvionParser::HP);
      setState(1405);
      match(IvionParser::Equal);
      setState(1406);
      match(IvionParser::To);
      setState(1407);
      match(IvionParser::The);
      setState(1408);
      match(IvionParser::Number);
      setState(1409);
      match(IvionParser::Of);
      setState(1410);
      match(IvionParser::Revealed);
      setState(1411);
      match(IvionParser::Card);
      setState(1412);
      match(IvionParser::In);
      setState(1413);
      match(IvionParser::Their);
      setState(1414);
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

tree::TerminalNode* IvionParser::StunPlayerContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::StunPlayerContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::StunPlayerContext::Them() {
  return getToken(IvionParser::Them, 0);
}

tree::TerminalNode* IvionParser::StunPlayerContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
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
  enterRule(_localctx, 48, IvionParser::RuleStunPlayer);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1424);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1417);
      match(IvionParser::Stun);
      setState(1418);
      match(IvionParser::Target);
      setState(1419);
      match(IvionParser::Enemy);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1420);
      match(IvionParser::Stun);
      setState(1421);
      match(IvionParser::Them);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1422);
      match(IvionParser::Stun);
      setState(1423);
      match(IvionParser::Yourself);
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

//----------------- StunPlayerConditionContext ------------------------------------------------------------------

IvionParser::StunPlayerConditionContext::StunPlayerConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::StunPlayerContext* IvionParser::StunPlayerConditionContext::stunPlayer() {
  return getRuleContext<IvionParser::StunPlayerContext>(0);
}

tree::TerminalNode* IvionParser::StunPlayerConditionContext::P() {
  return getToken(IvionParser::P, 0);
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

tree::TerminalNode* IvionParser::StunPlayerConditionContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::EffectContext* IvionParser::StunPlayerConditionContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
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
  enterRule(_localctx, 50, IvionParser::RuleStunPlayerCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1439);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1426);
      stunPlayer();
      setState(1427);
      match(IvionParser::P);
      setState(1428);
      match(IvionParser::If);
      setState(1429);
      match(IvionParser::A);
      setState(1430);
      match(IvionParser::Resource);
      setState(1431);
      match(IvionParser::Is);
      setState(1432);
      match(IvionParser::Removed);
      setState(1433);
      match(IvionParser::This);
      setState(1434);
      match(IvionParser::Way);
      setState(1435);
      match(IvionParser::C);
      setState(1436);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1438);
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

//----------------- RevealCardsContext ------------------------------------------------------------------

IvionParser::RevealCardsContext::RevealCardsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::RevealCardsContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Reveals() {
  return getToken(IvionParser::Reveals, 0);
}

IvionParser::ValueContext* IvionParser::RevealCardsContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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

tree::TerminalNode* IvionParser::RevealCardsContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Reveal() {
  return getToken(IvionParser::Reveal, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::RevealCardsContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
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
  enterRule(_localctx, 52, IvionParser::RuleRevealCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1504);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1441);
      match(IvionParser::Target);
      setState(1442);
      match(IvionParser::Player);
      setState(1443);
      match(IvionParser::Reveals);
      setState(1444);
      value();
      setState(1445);
      match(IvionParser::Card);
      setState(1446);
      match(IvionParser::From);
      setState(1447);
      match(IvionParser::Their);
      setState(1448);
      match(IvionParser::Hand);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1450);
      match(IvionParser::They);
      setState(1451);
      match(IvionParser::Reveal);
      setState(1452);
      value();
      setState(1453);
      match(IvionParser::Card);
      setState(1454);
      match(IvionParser::From);
      setState(1455);
      match(IvionParser::Their);
      setState(1456);
      match(IvionParser::Hand);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1458);
      match(IvionParser::They);
      setState(1459);
      match(IvionParser::Reveal);
      setState(1460);
      match(IvionParser::A);
      setState(1461);
      match(IvionParser::Card);
      setState(1462);
      match(IvionParser::From);
      setState(1463);
      match(IvionParser::Their);
      setState(1464);
      match(IvionParser::Hand);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1465);
      match(IvionParser::Target);
      setState(1466);
      match(IvionParser::Player);
      setState(1467);
      match(IvionParser::Reveals);
      setState(1468);
      match(IvionParser::A);
      setState(1469);
      match(IvionParser::Card);
      setState(1470);
      match(IvionParser::From);
      setState(1471);
      match(IvionParser::Their);
      setState(1472);
      match(IvionParser::Hand);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1473);
      match(IvionParser::Target);
      setState(1474);
      match(IvionParser::Enemy);
      setState(1475);
      match(IvionParser::Reveals);
      setState(1476);
      value();
      setState(1477);
      match(IvionParser::Card);
      setState(1478);
      match(IvionParser::From);
      setState(1479);
      match(IvionParser::Their);
      setState(1480);
      match(IvionParser::Hand);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1482);
      match(IvionParser::Target);
      setState(1483);
      match(IvionParser::Enemy);
      setState(1484);
      match(IvionParser::Reveals);
      setState(1485);
      match(IvionParser::A);
      setState(1486);
      match(IvionParser::Card);
      setState(1487);
      match(IvionParser::From);
      setState(1488);
      match(IvionParser::Their);
      setState(1489);
      match(IvionParser::Hand);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1490);
      match(IvionParser::Reveal);
      setState(1491);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1492);
      match(IvionParser::Reveal);
      setState(1493);
      match(IvionParser::A);
      setState(1494);
      match(IvionParser::Card);
      setState(1495);
      match(IvionParser::From);
      setState(1496);
      match(IvionParser::Your);
      setState(1497);
      match(IvionParser::Hand);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1498);
      match(IvionParser::Reveals);
      setState(1499);
      match(IvionParser::A);
      setState(1500);
      match(IvionParser::Card);
      setState(1501);
      match(IvionParser::From);
      setState(1502);
      match(IvionParser::Their);
      setState(1503);
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

//----------------- RevealCardsConditionContext ------------------------------------------------------------------

IvionParser::RevealCardsConditionContext::RevealCardsConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::RevealCardsContext* IvionParser::RevealCardsConditionContext::revealCards() {
  return getRuleContext<IvionParser::RevealCardsContext>(0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::P() {
  return getToken(IvionParser::P, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::If() {
  return getToken(IvionParser::If, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::A() {
  return getToken(IvionParser::A, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Non() {
  return getToken(IvionParser::Non, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::RevealCardsConditionContext::Card() {
  return getToken(IvionParser::Card, 0);
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
  enterRule(_localctx, 54, IvionParser::RuleRevealCardsCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1519);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1506);
      revealCards();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1507);
      revealCards();
      setState(1508);
      match(IvionParser::P);
      setState(1509);
      match(IvionParser::If);
      setState(1510);
      match(IvionParser::A);
      setState(1511);
      match(IvionParser::Non);
      setState(1512);
      match(IvionParser::Attack);
      setState(1513);
      match(IvionParser::Card);
      setState(1514);
      match(IvionParser::Is);
      setState(1515);
      match(IvionParser::Revealed);
      setState(1516);
      match(IvionParser::This);
      setState(1517);
      match(IvionParser::Way);
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

tree::TerminalNode* IvionParser::DrawCardsContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Player() {
  return getToken(IvionParser::Player, 0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Draws() {
  return getToken(IvionParser::Draws, 0);
}

IvionParser::ValueContext* IvionParser::DrawCardsContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::An() {
  return getToken(IvionParser::An, 0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Additional() {
  return getToken(IvionParser::Additional, 0);
}

tree::TerminalNode* IvionParser::DrawCardsContext::Each() {
  return getToken(IvionParser::Each, 0);
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
  enterRule(_localctx, 56, IvionParser::RuleDrawCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1561);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1521);
      match(IvionParser::Draw);
      setState(1522);
      match(IvionParser::A);
      setState(1523);
      match(IvionParser::Card);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1524);
      match(IvionParser::Target);
      setState(1525);
      match(IvionParser::Player);
      setState(1526);
      match(IvionParser::Draws);
      setState(1527);
      value();
      setState(1528);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1530);
      match(IvionParser::They);
      setState(1531);
      match(IvionParser::Draw);
      setState(1532);
      match(IvionParser::A);
      setState(1533);
      match(IvionParser::Card);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1534);
      match(IvionParser::You);
      setState(1535);
      match(IvionParser::Draw);
      setState(1536);
      match(IvionParser::A);
      setState(1537);
      match(IvionParser::Card);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1538);
      match(IvionParser::Draw);
      setState(1539);
      match(IvionParser::An);
      setState(1540);
      match(IvionParser::Additional);
      setState(1541);
      match(IvionParser::Card);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1542);
      match(IvionParser::They);
      setState(1543);
      match(IvionParser::Draw);
      setState(1544);
      value();
      setState(1545);
      match(IvionParser::Card);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1547);
      match(IvionParser::Draw);
      setState(1548);
      value();
      setState(1549);
      match(IvionParser::Card);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1551);
      match(IvionParser::Each);
      setState(1552);
      match(IvionParser::Player);
      setState(1553);
      match(IvionParser::Draws);
      setState(1554);
      match(IvionParser::A);
      setState(1555);
      match(IvionParser::Card);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1556);
      match(IvionParser::Target);
      setState(1557);
      match(IvionParser::Player);
      setState(1558);
      match(IvionParser::Draws);
      setState(1559);
      match(IvionParser::A);
      setState(1560);
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

IvionParser::ValueContext* IvionParser::RemoveControlContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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

tree::TerminalNode* IvionParser::RemoveControlContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::All() {
  return getToken(IvionParser::All, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::Affecting() {
  return getToken(IvionParser::Affecting, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::Them() {
  return getToken(IvionParser::Them, 0);
}

tree::TerminalNode* IvionParser::RemoveControlContext::An() {
  return getToken(IvionParser::An, 0);
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
  enterRule(_localctx, 58, IvionParser::RuleRemoveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1585);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1563);
      match(IvionParser::Remove);
      setState(1564);
      match(IvionParser::Up);
      setState(1565);
      match(IvionParser::To);
      setState(1566);
      value();
      setState(1567);
      match(IvionParser::Instances);
      setState(1568);
      match(IvionParser::Of);
      setState(1569);
      match(IvionParser::Control);
      setState(1570);
      match(IvionParser::From);
      setState(1571);
      match(IvionParser::Yourself);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1573);
      match(IvionParser::Remove);
      setState(1574);
      match(IvionParser::All);
      setState(1575);
      match(IvionParser::Control);
      setState(1576);
      match(IvionParser::Affecting);
      setState(1577);
      match(IvionParser::Them);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1578);
      match(IvionParser::Remove);
      setState(1579);
      match(IvionParser::An);
      setState(1580);
      match(IvionParser::Instance);
      setState(1581);
      match(IvionParser::Of);
      setState(1582);
      match(IvionParser::Control);
      setState(1583);
      match(IvionParser::From);
      setState(1584);
      match(IvionParser::Yourself);
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
  enterRule(_localctx, 60, IvionParser::RuleHardcastEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1587);
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
  enterRule(_localctx, 62, IvionParser::RuleSeekEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1589);
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

tree::TerminalNode* IvionParser::MakeTerrainContext::That() {
  return getToken(IvionParser::That, 0);
}

std::vector<tree::TerminalNode *> IvionParser::MakeTerrainContext::Tile() {
  return getTokens(IvionParser::Tile);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Tile(size_t i) {
  return getToken(IvionParser::Tile, i);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Difficult() {
  return getToken(IvionParser::Difficult, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::At() {
  return getToken(IvionParser::At, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Least() {
  return getToken(IvionParser::Least, 0);
}

IvionParser::ValueContext* IvionParser::MakeTerrainContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Away() {
  return getToken(IvionParser::Away, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Near() {
  return getToken(IvionParser::Near, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Them() {
  return getToken(IvionParser::Them, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Are() {
  return getToken(IvionParser::Are, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::Up() {
  return getToken(IvionParser::Up, 0);
}

tree::TerminalNode* IvionParser::MakeTerrainContext::To() {
  return getToken(IvionParser::To, 0);
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
  enterRule(_localctx, 64, IvionParser::RuleMakeTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1643);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1591);
      match(IvionParser::Make);
      setState(1592);
      match(IvionParser::That);
      setState(1593);
      match(IvionParser::Tile);
      setState(1594);
      match(IvionParser::Difficult);
      setState(1595);
      match(IvionParser::Terrain);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1596);
      match(IvionParser::Make);
      setState(1597);
      match(IvionParser::Target);
      setState(1598);
      match(IvionParser::Tile);
      setState(1599);
      match(IvionParser::At);
      setState(1600);
      match(IvionParser::Least);
      setState(1601);
      value();
      setState(1602);
      match(IvionParser::Tile);
      setState(1603);
      match(IvionParser::Away);
      setState(1604);
      match(IvionParser::Difficult);
      setState(1605);
      match(IvionParser::Terrain);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1607);
      match(IvionParser::Make);
      setState(1608);
      match(IvionParser::Target);
      setState(1609);
      match(IvionParser::Tile);
      setState(1610);
      match(IvionParser::Difficult);
      setState(1611);
      match(IvionParser::Terrain);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1612);
      match(IvionParser::Make);
      setState(1613);
      match(IvionParser::Each);
      setState(1614);
      match(IvionParser::Tile);
      setState(1615);
      match(IvionParser::Near);
      setState(1616);
      match(IvionParser::Them);
      setState(1617);
      match(IvionParser::Difficult);
      setState(1618);
      match(IvionParser::Terrain);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1619);
      match(IvionParser::Make);
      setState(1620);
      match(IvionParser::The);
      setState(1621);
      match(IvionParser::Tile);
      setState(1622);
      match(IvionParser::They);
      setState(1623);
      match(IvionParser::Are);
      setState(1624);
      match(IvionParser::In);
      setState(1625);
      match(IvionParser::Difficult);
      setState(1626);
      match(IvionParser::Terrain);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1627);
      match(IvionParser::Make);
      setState(1628);
      match(IvionParser::Up);
      setState(1629);
      match(IvionParser::To);
      setState(1630);
      value();
      setState(1631);
      match(IvionParser::Target);
      setState(1632);
      match(IvionParser::Tile);
      setState(1633);
      match(IvionParser::Difficult);
      setState(1634);
      match(IvionParser::Terrain);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1636);
      match(IvionParser::Make);
      setState(1637);
      value();
      setState(1638);
      match(IvionParser::Target);
      setState(1639);
      match(IvionParser::Tile);
      setState(1640);
      match(IvionParser::Difficult);
      setState(1641);
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
  enterRule(_localctx, 66, IvionParser::RuleRemoveTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1645);
    match(IvionParser::Remove);
    setState(1646);
    match(IvionParser::Target);
    setState(1647);
    match(IvionParser::Terrain);
    setState(1648);
    match(IvionParser::Token);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PayResourcesContext ------------------------------------------------------------------

IvionParser::PayResourcesContext::PayResourcesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::PayResourcesContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::PayResourcesContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::PayResourcesContext::May() {
  return getToken(IvionParser::May, 0);
}

tree::TerminalNode* IvionParser::PayResourcesContext::Spend() {
  return getToken(IvionParser::Spend, 0);
}

IvionParser::ValueContext* IvionParser::PayResourcesContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::PayResourcesContext::Resource() {
  return getToken(IvionParser::Resource, 0);
}


size_t IvionParser::PayResourcesContext::getRuleIndex() const {
  return IvionParser::RulePayResources;
}


antlrcpp::Any IvionParser::PayResourcesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitPayResources(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::PayResourcesContext* IvionParser::payResources() {
  PayResourcesContext *_localctx = _tracker.createInstance<PayResourcesContext>(_ctx, getState());
  enterRule(_localctx, 68, IvionParser::RulePayResources);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1650);
    match(IvionParser::Each);
    setState(1651);
    match(IvionParser::Enemy);
    setState(1652);
    match(IvionParser::May);
    setState(1653);
    match(IvionParser::Spend);
    setState(1654);
    value();
    setState(1655);
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

IvionParser::ValueContext* IvionParser::ScryEffectContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 70, IvionParser::RuleScryEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1657);
    match(IvionParser::Look);
    setState(1658);
    match(IvionParser::At);
    setState(1659);
    match(IvionParser::The);
    setState(1660);
    match(IvionParser::Top);
    setState(1661);
    value();
    setState(1662);
    match(IvionParser::Card);
    setState(1663);
    match(IvionParser::Of);
    setState(1664);
    match(IvionParser::Your);
    setState(1665);
    match(IvionParser::Deck);
    setState(1666);
    match(IvionParser::P);
    setState(1667);
    match(IvionParser::Put);
    setState(1668);
    match(IvionParser::Any);
    setState(1669);
    match(IvionParser::Number);
    setState(1670);
    match(IvionParser::On);
    setState(1671);
    match(IvionParser::The);
    setState(1672);
    match(IvionParser::Bottom);
    setState(1673);
    match(IvionParser::And);
    setState(1674);
    match(IvionParser::The);
    setState(1675);
    match(IvionParser::Rest);
    setState(1676);
    match(IvionParser::On);
    setState(1677);
    match(IvionParser::Top);
    setState(1678);
    match(IvionParser::In);
    setState(1679);
    match(IvionParser::Any);
    setState(1680);
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
  enterRule(_localctx, 72, IvionParser::RuleOverrideFrenzy);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1682);
    match(IvionParser::That);
    setState(1683);
    match(IvionParser::Card);
    setState(1684);
    match(IvionParser::Has);
    setState(1685);
    match(IvionParser::Frenzy);
    setState(1686);
    match(IvionParser::Even);
    setState(1687);
    match(IvionParser::If);
    setState(1688);
    match(IvionParser::No);
    setState(1689);
    match(IvionParser::Player);
    setState(1690);
    match(IvionParser::Has);
    setState(1691);
    match(IvionParser::Used);
    setState(1692);
    match(IvionParser::Their);
    setState(1693);
    match(IvionParser::Second);
    setState(1694);
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

IvionParser::ValueContext* IvionParser::IncreaseCardDurationContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 74, IvionParser::RuleIncreaseCardDuration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1696);
    match(IvionParser::Increase);
    setState(1697);
    match(IvionParser::The);
    setState(1698);
    match(IvionParser::Duration);
    setState(1699);
    match(IvionParser::Of);
    setState(1700);
    match(IvionParser::A);
    setState(1701);
    match(IvionParser::Card);
    setState(1702);
    match(IvionParser::You);
    setState(1703);
    match(IvionParser::Control);
    setState(1704);
    match(IvionParser::By);
    setState(1705);
    value();
   
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
  enterRule(_localctx, 76, IvionParser::RuleResetUseOfCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1707);
    match(IvionParser::Reset);
    setState(1708);
    match(IvionParser::The);
    setState(1709);
    match(IvionParser::Use);
    setState(1710);
    match(IvionParser::Of);
    setState(1711);
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
  enterRule(_localctx, 78, IvionParser::RuleHeroic);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1713);
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

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::You() {
  return getToken(IvionParser::You, 0);
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

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::An() {
  return getToken(IvionParser::An, 0);
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

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Youve() {
  return getToken(IvionParser::Youve, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Controlled() {
  return getToken(IvionParser::Controlled, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Youre() {
  return getToken(IvionParser::Youre, 0);
}

tree::TerminalNode* IvionParser::OnlyPlayCertainCardsContext::Are() {
  return getToken(IvionParser::Are, 0);
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

IvionParser::ValueContext* IvionParser::OnlyPlayCertainCardsContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 80, IvionParser::RuleOnlyPlayCertainCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1792);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1715);
      match(IvionParser::You);
      setState(1716);
      match(IvionParser::May);
      setState(1717);
      match(IvionParser::Only);
      setState(1718);
      match(IvionParser::Play);
      setState(1719);
      match(IvionParser::Card);
      setState(1720);
      match(IvionParser::Named);
      setState(1721);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1722);
      match(IvionParser::Only);
      setState(1723);
      match(IvionParser::Play);
      setState(1724);
      match(IvionParser::CARD_NAME);
      setState(1725);
      match(IvionParser::If);
      setState(1729);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Youve: {
          setState(1726);
          match(IvionParser::Youve);
          break;
        }

        case IvionParser::You: {
          setState(1727);
          match(IvionParser::You);
          setState(1728);
          match(IvionParser::Have);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1731);
      match(IvionParser::Resolve);
      setState(1732);
      match(IvionParser::An);
      setState(1733);
      match(IvionParser::Attack);
      setState(1734);
      match(IvionParser::Card);
      setState(1735);
      match(IvionParser::This);
      setState(1736);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1737);
      match(IvionParser::Only);
      setState(1738);
      match(IvionParser::Play);
      setState(1739);
      match(IvionParser::CARD_NAME);
      setState(1740);
      match(IvionParser::If);
      setState(1744);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Youre: {
          setState(1741);
          match(IvionParser::Youre);
          break;
        }

        case IvionParser::You: {
          setState(1742);
          match(IvionParser::You);
          setState(1743);
          match(IvionParser::Are);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1746);
      match(IvionParser::Controlled);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1747);
      match(IvionParser::Only);
      setState(1748);
      match(IvionParser::Play);
      setState(1749);
      match(IvionParser::CARD_NAME);
      setState(1750);
      match(IvionParser::If);
      setState(1754);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Youre: {
          setState(1751);
          match(IvionParser::Youre);
          break;
        }

        case IvionParser::You: {
          setState(1752);
          match(IvionParser::You);
          setState(1753);
          match(IvionParser::Are);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1756);
      match(IvionParser::Near);
      setState(1757);
      match(IvionParser::Terrain);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1758);
      match(IvionParser::Only);
      setState(1759);
      match(IvionParser::Play);
      setState(1760);
      match(IvionParser::CARD_NAME);
      setState(1761);
      match(IvionParser::If);
      setState(1765);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Youve: {
          setState(1762);
          match(IvionParser::Youve);
          break;
        }

        case IvionParser::You: {
          setState(1763);
          match(IvionParser::You);
          setState(1764);
          match(IvionParser::Have);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1767);
      match(IvionParser::At);
      setState(1768);
      match(IvionParser::Least);
      setState(1769);
      value();
      setState(1770);
      match(IvionParser::Card);
      setState(1771);
      match(IvionParser::In);
      setState(1772);
      match(IvionParser::Your);
      setState(1773);
      match(IvionParser::Discard);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1775);
      match(IvionParser::Only);
      setState(1776);
      match(IvionParser::Play);
      setState(1777);
      match(IvionParser::CARD_NAME);
      setState(1778);
      match(IvionParser::If);
      setState(1782);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Youve: {
          setState(1779);
          match(IvionParser::Youve);
          break;
        }

        case IvionParser::You: {
          setState(1780);
          match(IvionParser::You);
          setState(1781);
          match(IvionParser::Have);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(1784);
      match(IvionParser::Taken);
      setState(1785);
      value();
      setState(1786);
      match(IvionParser::Or);
      setState(1787);
      match(IvionParser::More);
      setState(1788);
      match(IvionParser::Damage);
      setState(1789);
      match(IvionParser::This);
      setState(1790);
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

tree::TerminalNode* IvionParser::CostReductionContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Play() {
  return getToken(IvionParser::Play, 0);
}

tree::TerminalNode* IvionParser::CostReductionContext::Cost() {
  return getToken(IvionParser::Cost, 0);
}

IvionParser::ValueContext* IvionParser::CostReductionContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 82, IvionParser::RuleCostReduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1817);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Attack: {
        enterOuterAlt(_localctx, 1);
        setState(1794);
        match(IvionParser::Attack);
        setState(1795);
        match(IvionParser::Card);
        setState(1796);
        match(IvionParser::You);
        setState(1797);
        match(IvionParser::Play);
        setState(1798);
        match(IvionParser::Cost);
        setState(1799);
        value();
        setState(1800);
        match(IvionParser::Less);
        setState(1801);
        match(IvionParser::Resource);
        break;
      }

      case IvionParser::The: {
        enterOuterAlt(_localctx, 2);
        setState(1803);
        match(IvionParser::The);
        setState(1804);
        match(IvionParser::Second);
        setState(1805);
        match(IvionParser::Attack);
        setState(1806);
        match(IvionParser::Card);
        setState(1807);
        match(IvionParser::You);
        setState(1808);
        match(IvionParser::Play);
        setState(1809);
        match(IvionParser::During);
        setState(1810);
        match(IvionParser::Your);
        setState(1811);
        match(IvionParser::Turn);
        setState(1812);
        match(IvionParser::Cost);
        setState(1813);
        value();
        setState(1814);
        match(IvionParser::Less);
        setState(1815);
        match(IvionParser::Resource);
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

IvionParser::ValueContext* IvionParser::RangeSetContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 84, IvionParser::RuleRangeSet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1819);
    match(IvionParser::The);
    setState(1820);
    match(IvionParser::Range);
    setState(1821);
    match(IvionParser::Of);
    setState(1822);
    match(IvionParser::Your);
    setState(1823);
    match(IvionParser::Attack);
    setState(1824);
    match(IvionParser::Card);
    setState(1825);
    match(IvionParser::Is);
    setState(1826);
    value();
   
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

tree::TerminalNode* IvionParser::CantPlayCardsContext::You() {
  return getToken(IvionParser::You, 0);
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
  enterRule(_localctx, 86, IvionParser::RuleCantPlayCards);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1828);
    match(IvionParser::You);
    setState(1829);
    match(IvionParser::Cant);
    setState(1830);
    match(IvionParser::Play);
    setState(1831);
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

tree::TerminalNode* IvionParser::PlayerCantBeTargetedContext::You() {
  return getToken(IvionParser::You, 0);
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
  enterRule(_localctx, 88, IvionParser::RulePlayerCantBeTargeted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1845);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1833);
      match(IvionParser::You);
      setState(1834);
      match(IvionParser::Cant);
      setState(1835);
      match(IvionParser::Be);
      setState(1836);
      match(IvionParser::Targeted);
      setState(1837);
      match(IvionParser::By);
      setState(1838);
      match(IvionParser::Enemies);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1839);
      match(IvionParser::You);
      setState(1840);
      match(IvionParser::Cant);
      setState(1841);
      match(IvionParser::Be);
      setState(1842);
      match(IvionParser::Targeted);
      setState(1843);
      match(IvionParser::By);
      setState(1844);
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

IvionParser::ValueContext* IvionParser::IncreasedHandSizeContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 90, IvionParser::RuleIncreasedHandSize);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1847);
    match(IvionParser::Your);
    setState(1848);
    match(IvionParser::Maximum);
    setState(1849);
    match(IvionParser::Hand);
    setState(1850);
    match(IvionParser::Size);
    setState(1851);
    match(IvionParser::Is);
    setState(1852);
    match(IvionParser::Increased);
    setState(1853);
    match(IvionParser::By);
    setState(1854);
    value();
   
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

IvionParser::ValueContext* IvionParser::IncreasedMaxHPContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 92, IvionParser::RuleIncreasedMaxHP);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1856);
    match(IvionParser::Your);
    setState(1857);
    match(IvionParser::Maximum);
    setState(1858);
    match(IvionParser::HP);
    setState(1859);
    match(IvionParser::Is);
    setState(1860);
    match(IvionParser::Increased);
    setState(1861);
    match(IvionParser::By);
    setState(1862);
    value();
   
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
  enterRule(_localctx, 94, IvionParser::RuleReplacesSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1864);
    match(IvionParser::CARD_NAME);
    setState(1865);
    match(IvionParser::Replaces);
    setState(1866);
    match(IvionParser::Your);
    setState(1867);
    match(IvionParser::Second);
    setState(1868);
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

tree::TerminalNode* IvionParser::NoInitiativeContext::You() {
  return getToken(IvionParser::You, 0);
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
  enterRule(_localctx, 96, IvionParser::RuleNoInitiative);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1870);
    match(IvionParser::You);
    setState(1871);
    match(IvionParser::Dont);
    setState(1872);
    match(IvionParser::Gain);
    setState(1873);
    match(IvionParser::INITIATIVE);
    setState(1874);
    match(IvionParser::At);
    setState(1875);
    match(IvionParser::The);
    setState(1876);
    match(IvionParser::Start);
    setState(1877);
    match(IvionParser::Of);
    setState(1878);
    match(IvionParser::Your);
    setState(1879);
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

tree::TerminalNode* IvionParser::DrawRangeContext::Your() {
  return getToken(IvionParser::Your, 0);
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

std::vector<tree::TerminalNode *> IvionParser::DrawRangeContext::Tile() {
  return getTokens(IvionParser::Tile);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Tile(size_t i) {
  return getToken(IvionParser::Tile, i);
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

tree::TerminalNode* IvionParser::DrawRangeContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::DrawRangeContext::Terrain() {
  return getToken(IvionParser::Terrain, 0);
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
  enterRule(_localctx, 98, IvionParser::RuleDrawRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1919);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1881);
      match(IvionParser::All);
      setState(1882);
      match(IvionParser::Of);
      setState(1883);
      match(IvionParser::Your);
      setState(1884);
      match(IvionParser::Card);
      setState(1885);
      match(IvionParser::C);
      setState(1886);
      match(IvionParser::Except);
      setState(1887);
      match(IvionParser::Travel);
      setState(1888);
      match(IvionParser::Card);
      setState(1889);
      match(IvionParser::That);
      setState(1890);
      match(IvionParser::Target);
      setState(1891);
      match(IvionParser::A);
      setState(1892);
      match(IvionParser::Tile);
      setState(1893);
      match(IvionParser::C);
      setState(1894);
      match(IvionParser::Also);
      setState(1895);
      match(IvionParser::Draw);
      setState(1896);
      match(IvionParser::Range);
      setState(1897);
      match(IvionParser::From);
      setState(1898);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1899);
      match(IvionParser::All);
      setState(1900);
      match(IvionParser::Of);
      setState(1901);
      match(IvionParser::Your);
      setState(1902);
      match(IvionParser::Card);
      setState(1903);
      match(IvionParser::C);
      setState(1904);
      match(IvionParser::Except);
      setState(1905);
      match(IvionParser::Travel);
      setState(1906);
      match(IvionParser::Card);
      setState(1907);
      match(IvionParser::That);
      setState(1908);
      match(IvionParser::Target);
      setState(1909);
      match(IvionParser::A);
      setState(1910);
      match(IvionParser::Tile);
      setState(1911);
      match(IvionParser::C);
      setState(1912);
      match(IvionParser::Also);
      setState(1913);
      match(IvionParser::Draw);
      setState(1914);
      match(IvionParser::Range);
      setState(1915);
      match(IvionParser::From);
      setState(1916);
      match(IvionParser::Tile);
      setState(1917);
      match(IvionParser::With);
      setState(1918);
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

tree::TerminalNode* IvionParser::GainRangeContext::Your() {
  return getToken(IvionParser::Your, 0);
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

IvionParser::ValueContext* IvionParser::GainRangeContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 100, IvionParser::RuleGainRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1921);
    match(IvionParser::All);
    setState(1922);
    match(IvionParser::Of);
    setState(1923);
    match(IvionParser::Your);
    setState(1924);
    match(IvionParser::Card);
    setState(1925);
    match(IvionParser::C);
    setState(1926);
    match(IvionParser::Except);
    setState(1927);
    match(IvionParser::Travel);
    setState(1928);
    match(IvionParser::Card);
    setState(1929);
    match(IvionParser::That);
    setState(1930);
    match(IvionParser::Target);
    setState(1931);
    match(IvionParser::A);
    setState(1932);
    match(IvionParser::Tile);
    setState(1933);
    match(IvionParser::C);
    setState(1934);
    match(IvionParser::Gain);
    setState(1935);
    value();
    setState(1936);
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

tree::TerminalNode* IvionParser::LimitTargetsContext::Player() {
  return getToken(IvionParser::Player, 0);
}

IvionParser::ConditionEffectContext* IvionParser::LimitTargetsContext::conditionEffect() {
  return getRuleContext<IvionParser::ConditionEffectContext>(0);
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
  enterRule(_localctx, 102, IvionParser::RuleLimitTargets);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1938);
    match(IvionParser::Only);
    setState(1939);
    match(IvionParser::Target);
    setState(1940);
    match(IvionParser::Other);
    setState(1941);
    match(IvionParser::Player);
    setState(1942);
    conditionEffect();
   
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
  enterRule(_localctx, 104, IvionParser::RulePassiveEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1956);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1944);
      playerCantBeTargeted();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1945);
      cantPlayCards();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1946);
      rangeSet();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(1947);
      costReduction();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(1948);
      onlyPlayCertainCards();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(1949);
      increasedHandSize();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(1950);
      increasedMaxHP();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(1951);
      replacesSecondWind();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(1952);
      noInitiative();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(1953);
      drawRange();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(1954);
      gainRange();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(1955);
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
  enterRule(_localctx, 106, IvionParser::RuleDurationEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1958);
    match(IvionParser::Duration);
   
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

tree::TerminalNode* IvionParser::TurnTriggerContext::Start() {
  return getToken(IvionParser::Start, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::Of() {
  return getToken(IvionParser::Of, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::End() {
  return getToken(IvionParser::End, 0);
}

tree::TerminalNode* IvionParser::TurnTriggerContext::Their() {
  return getToken(IvionParser::Their, 0);
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
  enterRule(_localctx, 108, IvionParser::RuleTurnTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(1978);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1960);
      match(IvionParser::At);
      setState(1961);
      match(IvionParser::The);
      setState(1962);
      match(IvionParser::Start);
      setState(1963);
      match(IvionParser::Of);
      setState(1964);
      match(IvionParser::Your);
      setState(1965);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1966);
      match(IvionParser::At);
      setState(1967);
      match(IvionParser::The);
      setState(1968);
      match(IvionParser::End);
      setState(1969);
      match(IvionParser::Of);
      setState(1970);
      match(IvionParser::Your);
      setState(1971);
      match(IvionParser::Turn);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(1972);
      match(IvionParser::At);
      setState(1973);
      match(IvionParser::The);
      setState(1974);
      match(IvionParser::Start);
      setState(1975);
      match(IvionParser::Of);
      setState(1976);
      match(IvionParser::Their);
      setState(1977);
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
  enterRule(_localctx, 110, IvionParser::RuleGameStartTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1980);
    match(IvionParser::At);
    setState(1981);
    match(IvionParser::The);
    setState(1982);
    match(IvionParser::Start);
    setState(1983);
    match(IvionParser::Of);
    setState(1984);
    match(IvionParser::The);
    setState(1985);
    match(IvionParser::Game);
   
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

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::After() {
  return getToken(IvionParser::After, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Resolve() {
  return getToken(IvionParser::Resolve, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::An() {
  return getToken(IvionParser::An, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Ability() {
  return getToken(IvionParser::Ability, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Card() {
  return getToken(IvionParser::Card, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Targeting() {
  return getToken(IvionParser::Targeting, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Them() {
  return getToken(IvionParser::Them, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::They() {
  return getToken(IvionParser::They, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Draw() {
  return getToken(IvionParser::Draw, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::A() {
  return getToken(IvionParser::A, 0);
}

std::vector<tree::TerminalNode *> IvionParser::AfterEffectTriggerContext::Your() {
  return getTokens(IvionParser::Your);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Your(size_t i) {
  return getToken(IvionParser::Your, i);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::First() {
  return getToken(IvionParser::First, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::During() {
  return getToken(IvionParser::During, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Turn() {
  return getToken(IvionParser::Turn, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Make() {
  return getToken(IvionParser::Make, 0);
}

std::vector<tree::TerminalNode *> IvionParser::AfterEffectTriggerContext::Terrain() {
  return getTokens(IvionParser::Terrain);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Terrain(size_t i) {
  return getToken(IvionParser::Terrain, i);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::In() {
  return getToken(IvionParser::In, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Tile() {
  return getToken(IvionParser::Tile, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Already() {
  return getToken(IvionParser::Already, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Had() {
  return getToken(IvionParser::Had, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Enters() {
  return getToken(IvionParser::Enters, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::This() {
  return getToken(IvionParser::This, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::CARD_NAME() {
  return getToken(IvionParser::CARD_NAME, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::With() {
  return getToken(IvionParser::With, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Ally() {
  return getToken(IvionParser::Ally, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Resolves() {
  return getToken(IvionParser::Resolves, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Attack() {
  return getToken(IvionParser::Attack, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::The() {
  return getToken(IvionParser::The, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Time() {
  return getToken(IvionParser::Time, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Any() {
  return getToken(IvionParser::Any, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Player() {
  return getToken(IvionParser::Player, 0);
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

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Way() {
  return getToken(IvionParser::Way, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Attach() {
  return getToken(IvionParser::Attach, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::To() {
  return getToken(IvionParser::To, 0);
}

std::vector<tree::TerminalNode *> IvionParser::AfterEffectTriggerContext::Their() {
  return getTokens(IvionParser::Their);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Their(size_t i) {
  return getToken(IvionParser::Their, i);
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

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Discard() {
  return getToken(IvionParser::Discard, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Wind() {
  return getToken(IvionParser::Wind, 0);
}

tree::TerminalNode* IvionParser::AfterEffectTriggerContext::Hardcast() {
  return getToken(IvionParser::Hardcast, 0);
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
  enterRule(_localctx, 112, IvionParser::RuleAfterEffectTrigger);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1987);
      match(IvionParser::After);
      setState(1988);
      match(IvionParser::You);
      setState(1989);
      match(IvionParser::Resolve);
      setState(1990);
      match(IvionParser::An);
      setState(1991);
      match(IvionParser::Ability);
      setState(1992);
      match(IvionParser::Card);
      setState(1993);
      match(IvionParser::Targeting);
      setState(1994);
      match(IvionParser::Them);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1995);
      match(IvionParser::After);
      setState(1996);
      match(IvionParser::They);
      setState(1997);
      match(IvionParser::Draw);
      setState(1998);
      match(IvionParser::A);
      setState(1999);
      match(IvionParser::Card);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2000);
      match(IvionParser::After);
      setState(2001);
      match(IvionParser::You);
      setState(2002);
      match(IvionParser::Resolve);
      setState(2003);
      match(IvionParser::Your);
      setState(2004);
      match(IvionParser::First);
      setState(2005);
      match(IvionParser::Ability);
      setState(2006);
      match(IvionParser::Card);
      setState(2007);
      match(IvionParser::During);
      setState(2008);
      match(IvionParser::Your);
      setState(2009);
      match(IvionParser::Turn);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2010);
      match(IvionParser::After);
      setState(2011);
      match(IvionParser::You);
      setState(2012);
      match(IvionParser::Make);
      setState(2013);
      match(IvionParser::Terrain);
      setState(2014);
      match(IvionParser::In);
      setState(2015);
      match(IvionParser::A);
      setState(2016);
      match(IvionParser::Tile);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2017);
      match(IvionParser::After);
      setState(2018);
      match(IvionParser::You);
      setState(2019);
      match(IvionParser::Make);
      setState(2020);
      match(IvionParser::Terrain);
      setState(2021);
      match(IvionParser::In);
      setState(2022);
      match(IvionParser::A);
      setState(2023);
      match(IvionParser::Tile);
      setState(2024);
      match(IvionParser::That);
      setState(2025);
      match(IvionParser::Already);
      setState(2026);
      match(IvionParser::Had);
      setState(2027);
      match(IvionParser::Terrain);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2028);
      match(IvionParser::After);
      setState(2029);
      match(IvionParser::An);
      setState(2030);
      match(IvionParser::Enemy);
      setState(2031);
      match(IvionParser::Enters);
      setState(2032);
      match(IvionParser::This);
      setState(2033);
      match(IvionParser::Tile);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2034);
      match(IvionParser::After);
      setState(2035);
      match(IvionParser::An);
      setState(2036);
      match(IvionParser::Enemy);
      setState(2037);
      match(IvionParser::Enters);
      setState(2038);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2039);
      match(IvionParser::After);
      setState(2040);
      match(IvionParser::An);
      setState(2041);
      match(IvionParser::Enemy);
      setState(2042);
      match(IvionParser::Enters);
      setState(2043);
      match(IvionParser::Terrain);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2044);
      match(IvionParser::After);
      setState(2045);
      match(IvionParser::An);
      setState(2046);
      match(IvionParser::Enemy);
      setState(2047);
      match(IvionParser::Enters);
      setState(2048);
      match(IvionParser::A);
      setState(2049);
      match(IvionParser::Tile);
      setState(2050);
      match(IvionParser::With);
      setState(2051);
      match(IvionParser::Terrain);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2052);
      match(IvionParser::After);
      setState(2053);
      match(IvionParser::You);
      setState(2054);
      match(IvionParser::Or);
      setState(2055);
      match(IvionParser::An);
      setState(2056);
      match(IvionParser::Ally);
      setState(2057);
      match(IvionParser::Enters);
      setState(2058);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2059);
      match(IvionParser::After);
      setState(2060);
      match(IvionParser::That);
      setState(2061);
      match(IvionParser::Card);
      setState(2062);
      match(IvionParser::Resolves);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2063);
      match(IvionParser::After);
      setState(2064);
      match(IvionParser::An);
      setState(2065);
      match(IvionParser::Attack);
      setState(2066);
      match(IvionParser::Card);
      setState(2067);
      match(IvionParser::Targeting);
      setState(2068);
      match(IvionParser::You);
      setState(2069);
      match(IvionParser::Resolves);
      setState(2070);
      match(IvionParser::For);
      setState(2071);
      match(IvionParser::The);
      setState(2072);
      match(IvionParser::First);
      setState(2073);
      match(IvionParser::Time);
      setState(2074);
      match(IvionParser::During);
      setState(2075);
      match(IvionParser::Each);
      setState(2076);
      match(IvionParser::Turn);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2077);
      match(IvionParser::After);
      setState(2078);
      match(IvionParser::You);
      setState(2079);
      match(IvionParser::Resolve);
      setState(2080);
      match(IvionParser::Your);
      setState(2081);
      match(IvionParser::First);
      setState(2082);
      match(IvionParser::Attack);
      setState(2083);
      match(IvionParser::Card);
      setState(2084);
      match(IvionParser::Targeting);
      setState(2085);
      match(IvionParser::An);
      setState(2086);
      match(IvionParser::Enemy);
      setState(2087);
      match(IvionParser::During);
      setState(2088);
      match(IvionParser::Your);
      setState(2089);
      match(IvionParser::Turn);
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2090);
      match(IvionParser::After);
      setState(2091);
      match(IvionParser::Any);
      setState(2092);
      match(IvionParser::Player);
      setState(2093);
      match(IvionParser::Enters);
      setState(2094);
      match(IvionParser::This);
      setState(2095);
      match(IvionParser::Tile);
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2096);
      match(IvionParser::After);
      setState(2097);
      match(IvionParser::You);
      setState(2098);
      match(IvionParser::Play);
      setState(2099);
      match(IvionParser::A);
      setState(2100);
      match(IvionParser::Card);
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2101);
      match(IvionParser::After);
      setState(2102);
      match(IvionParser::You);
      setState(2103);
      match(IvionParser::Play);
      setState(2104);
      match(IvionParser::Your);
      setState(2105);
      match(IvionParser::Second);
      setState(2106);
      match(IvionParser::Attack);
      setState(2107);
      match(IvionParser::Card);
      setState(2108);
      match(IvionParser::During);
      setState(2109);
      match(IvionParser::Your);
      setState(2110);
      match(IvionParser::Turn);
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2111);
      match(IvionParser::After);
      setState(2112);
      match(IvionParser::A);
      setState(2113);
      match(IvionParser::Resource);
      setState(2114);
      match(IvionParser::Is);
      setState(2115);
      match(IvionParser::Removed);
      setState(2116);
      match(IvionParser::In);
      setState(2117);
      match(IvionParser::This);
      setState(2118);
      match(IvionParser::Way);
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2119);
      match(IvionParser::After);
      setState(2120);
      match(IvionParser::You);
      setState(2121);
      match(IvionParser::Attach);
      setState(2122);
      match(IvionParser::Another);
      setState(2123);
      match(IvionParser::Card);
      setState(2124);
      match(IvionParser::To);
      setState(2125);
      match(IvionParser::Them);
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2126);
      match(IvionParser::After);
      setState(2127);
      match(IvionParser::They);
      setState(2128);
      match(IvionParser::Resolve);
      setState(2129);
      match(IvionParser::Their);
      setState(2130);
      match(IvionParser::First);
      setState(2131);
      match(IvionParser::Card);
      setState(2132);
      match(IvionParser::During);
      setState(2133);
      match(IvionParser::Their);
      setState(2134);
      match(IvionParser::Turn);
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2135);
      match(IvionParser::After);
      setState(2136);
      match(IvionParser::An);
      setState(2137);
      match(IvionParser::Attack);
      setState(2138);
      match(IvionParser::Card);
      setState(2139);
      match(IvionParser::Targeting);
      setState(2140);
      match(IvionParser::You);
      setState(2141);
      match(IvionParser::Resolves);
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2142);
      match(IvionParser::After);
      setState(2143);
      match(IvionParser::CARD_NAME);
      setState(2144);
      match(IvionParser::Is);
      setState(2145);
      match(IvionParser::Revealed);
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2146);
      match(IvionParser::After);
      setState(2147);
      match(IvionParser::You);
      setState(2148);
      match(IvionParser::Resolve);
      setState(2149);
      match(IvionParser::Your);
      setState(2150);
      match(IvionParser::First);
      setState(2151);
      match(IvionParser::Attack);
      setState(2152);
      match(IvionParser::Card);
      setState(2153);
      match(IvionParser::During);
      setState(2154);
      match(IvionParser::Your);
      setState(2155);
      match(IvionParser::Turn);
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2156);
      match(IvionParser::After);
      setState(2157);
      match(IvionParser::You);
      setState(2158);
      match(IvionParser::Resolve);
      setState(2159);
      match(IvionParser::Your);
      setState(2160);
      match(IvionParser::First);
      setState(2161);
      match(IvionParser::Attack);
      setState(2162);
      match(IvionParser::Card);
      setState(2163);
      match(IvionParser::Targeting);
      setState(2164);
      match(IvionParser::Them);
      setState(2165);
      match(IvionParser::During);
      setState(2166);
      match(IvionParser::Your);
      setState(2167);
      match(IvionParser::Turn);
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2168);
      match(IvionParser::After);
      setState(2169);
      match(IvionParser::You);
      setState(2170);
      match(IvionParser::Stun);
      setState(2171);
      match(IvionParser::An);
      setState(2172);
      match(IvionParser::Enemy);
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2173);
      match(IvionParser::After);
      setState(2174);
      match(IvionParser::CARD_NAME);
      setState(2175);
      match(IvionParser::Is);
      setState(2176);
      match(IvionParser::Sent);
      setState(2177);
      match(IvionParser::To);
      setState(2178);
      match(IvionParser::Your);
      setState(2179);
      match(IvionParser::Discard);
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2180);
      match(IvionParser::After);
      setState(2181);
      match(IvionParser::You);
      setState(2182);
      match(IvionParser::Second);
      setState(2183);
      match(IvionParser::Wind);
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2184);
      match(IvionParser::After);
      setState(2185);
      match(IvionParser::You);
      setState(2186);
      match(IvionParser::Play);
      setState(2187);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2188);
      match(IvionParser::After);
      setState(2189);
      match(IvionParser::A);
      setState(2190);
      match(IvionParser::Card);
      setState(2191);
      match(IvionParser::With);
      setState(2192);
      match(IvionParser::Hardcast);
      setState(2193);
      match(IvionParser::You);
      setState(2194);
      match(IvionParser::Played);
      setState(2195);
      match(IvionParser::Fails);
      setState(2196);
      match(IvionParser::To);
      setState(2197);
      match(IvionParser::Resolve);
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2198);
      match(IvionParser::After);
      setState(2199);
      match(IvionParser::You);
      setState(2200);
      match(IvionParser::Slow);
      setState(2201);
      match(IvionParser::An);
      setState(2202);
      match(IvionParser::Enemy);
      setState(2203);
      match(IvionParser::For);
      setState(2204);
      match(IvionParser::The);
      setState(2205);
      match(IvionParser::First);
      setState(2206);
      match(IvionParser::Time);
      setState(2207);
      match(IvionParser::During);
      setState(2208);
      match(IvionParser::Your);
      setState(2209);
      match(IvionParser::Turn);
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2210);
      match(IvionParser::After);
      setState(2211);
      match(IvionParser::You);
      setState(2212);
      match(IvionParser::Slow);
      setState(2213);
      match(IvionParser::An);
      setState(2214);
      match(IvionParser::Enemy);
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

//----------------- AfterControlledContext ------------------------------------------------------------------

IvionParser::AfterControlledContext::AfterControlledContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::AfterControlledContext::After() {
  return getToken(IvionParser::After, 0);
}

std::vector<tree::TerminalNode *> IvionParser::AfterControlledContext::They() {
  return getTokens(IvionParser::They);
}

tree::TerminalNode* IvionParser::AfterControlledContext::They(size_t i) {
  return getToken(IvionParser::They, i);
}

std::vector<tree::TerminalNode *> IvionParser::AfterControlledContext::Receive() {
  return getTokens(IvionParser::Receive);
}

tree::TerminalNode* IvionParser::AfterControlledContext::Receive(size_t i) {
  return getToken(IvionParser::Receive, i);
}

std::vector<tree::TerminalNode *> IvionParser::AfterControlledContext::Control() {
  return getTokens(IvionParser::Control);
}

tree::TerminalNode* IvionParser::AfterControlledContext::Control(size_t i) {
  return getToken(IvionParser::Control, i);
}

tree::TerminalNode* IvionParser::AfterControlledContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::EffectContext* IvionParser::AfterControlledContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

tree::TerminalNode* IvionParser::AfterControlledContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::AfterControlledContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::AfterControlledContext::Instance() {
  return getToken(IvionParser::Instance, 0);
}

tree::TerminalNode* IvionParser::AfterControlledContext::Of() {
  return getToken(IvionParser::Of, 0);
}


size_t IvionParser::AfterControlledContext::getRuleIndex() const {
  return IvionParser::RuleAfterControlled;
}


antlrcpp::Any IvionParser::AfterControlledContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitAfterControlled(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::AfterControlledContext* IvionParser::afterControlled() {
  AfterControlledContext *_localctx = _tracker.createInstance<AfterControlledContext>(_ctx, getState());
  enterRule(_localctx, 114, IvionParser::RuleAfterControlled);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2217);
    match(IvionParser::After);
    setState(2218);
    match(IvionParser::They);
    setState(2219);
    match(IvionParser::Receive);
    setState(2220);
    match(IvionParser::Control);
    setState(2221);
    match(IvionParser::C);
    setState(2222);
    effect();
    setState(2223);
    match(IvionParser::For);
    setState(2224);
    match(IvionParser::Each);
    setState(2225);
    match(IvionParser::Instance);
    setState(2226);
    match(IvionParser::Of);
    setState(2227);
    match(IvionParser::Control);
    setState(2228);
    match(IvionParser::They);
    setState(2229);
    match(IvionParser::Receive);
   
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

IvionParser::TurnTriggerContext* IvionParser::TriggerEffectContext::turnTrigger() {
  return getRuleContext<IvionParser::TurnTriggerContext>(0);
}

tree::TerminalNode* IvionParser::TriggerEffectContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::EffectContext* IvionParser::TriggerEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

IvionParser::AfterEffectTriggerContext* IvionParser::TriggerEffectContext::afterEffectTrigger() {
  return getRuleContext<IvionParser::AfterEffectTriggerContext>(0);
}

IvionParser::DurationEffectContext* IvionParser::TriggerEffectContext::durationEffect() {
  return getRuleContext<IvionParser::DurationEffectContext>(0);
}

tree::TerminalNode* IvionParser::TriggerEffectContext::D() {
  return getToken(IvionParser::D, 0);
}

IvionParser::AfterControlledContext* IvionParser::TriggerEffectContext::afterControlled() {
  return getRuleContext<IvionParser::AfterControlledContext>(0);
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
  enterRule(_localctx, 116, IvionParser::RuleTriggerEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2248);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2231);
      turnTrigger();
      setState(2232);
      match(IvionParser::C);
      setState(2233);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2235);
      afterEffectTrigger();
      setState(2236);
      match(IvionParser::C);
      setState(2237);
      effect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2239);
      durationEffect();
      setState(2240);
      match(IvionParser::D);
      setState(2241);
      effect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2243);
      afterControlled();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2244);
      gameStartTrigger();
      setState(2245);
      match(IvionParser::C);
      setState(2246);
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

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::You() {
  return getToken(IvionParser::You, 0);
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

tree::TerminalNode* IvionParser::IfWouldRecieveControlContext::They() {
  return getToken(IvionParser::They, 0);
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
  enterRule(_localctx, 118, IvionParser::RuleIfWouldRecieveControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2250);
    match(IvionParser::If);
    setState(2251);
    match(IvionParser::You);
    setState(2252);
    match(IvionParser::Would);
    setState(2253);
    match(IvionParser::Receive);
    setState(2254);
    match(IvionParser::Control);
    setState(2255);
    match(IvionParser::C);
    setState(2256);
    match(IvionParser::Instead);
    setState(2257);
    match(IvionParser::They);
    setState(2258);
    match(IvionParser::Receive);
    setState(2259);
    match(IvionParser::The);
    setState(2260);
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

tree::TerminalNode* IvionParser::IfWouldTakeDamageContext::You() {
  return getToken(IvionParser::You, 0);
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

std::vector<IvionParser::ValueContext *> IvionParser::IfWouldTakeDamageContext::value() {
  return getRuleContexts<IvionParser::ValueContext>();
}

IvionParser::ValueContext* IvionParser::IfWouldTakeDamageContext::value(size_t i) {
  return getRuleContext<IvionParser::ValueContext>(i);
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
  enterRule(_localctx, 120, IvionParser::RuleIfWouldTakeDamage);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2262);
    match(IvionParser::If);
    setState(2263);
    match(IvionParser::You);
    setState(2264);
    match(IvionParser::Would);
    setState(2265);
    match(IvionParser::Take);
    setState(2266);
    match(IvionParser::Damage);
    setState(2267);
    match(IvionParser::For);
    setState(2268);
    match(IvionParser::The);
    setState(2269);
    match(IvionParser::First);
    setState(2270);
    match(IvionParser::Time);
    setState(2271);
    match(IvionParser::During);
    setState(2272);
    match(IvionParser::Each);
    setState(2273);
    match(IvionParser::Turn);
    setState(2274);
    match(IvionParser::C);
    setState(2275);
    match(IvionParser::Instead);
    setState(2276);
    match(IvionParser::Take);
    setState(2277);
    value();
    setState(2278);
    match(IvionParser::Less);
    setState(2279);
    match(IvionParser::Damage);
    setState(2280);
    match(IvionParser::P);
    setState(2281);
    match(IvionParser::This);
    setState(2282);
    match(IvionParser::May);
    setState(2283);
    match(IvionParser::Not);
    setState(2284);
    match(IvionParser::Reduce);
    setState(2285);
    match(IvionParser::Damage);
    setState(2286);
    match(IvionParser::Taken);
    setState(2287);
    match(IvionParser::Below);
    setState(2288);
    value();
   
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

tree::TerminalNode* IvionParser::IfWouldHealContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Would() {
  return getToken(IvionParser::Would, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Heal() {
  return getToken(IvionParser::Heal, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Yourself() {
  return getToken(IvionParser::Yourself, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Or() {
  return getToken(IvionParser::Or, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Another() {
  return getToken(IvionParser::Another, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Player() {
  return getToken(IvionParser::Player, 0);
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

tree::TerminalNode* IvionParser::IfWouldHealContext::Target() {
  return getToken(IvionParser::Target, 0);
}

tree::TerminalNode* IvionParser::IfWouldHealContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
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
  enterRule(_localctx, 122, IvionParser::RuleIfWouldHeal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2290);
    match(IvionParser::If);
    setState(2291);
    match(IvionParser::You);
    setState(2292);
    match(IvionParser::Would);
    setState(2293);
    match(IvionParser::Heal);
    setState(2294);
    match(IvionParser::Yourself);
    setState(2295);
    match(IvionParser::Or);
    setState(2296);
    match(IvionParser::Another);
    setState(2297);
    match(IvionParser::Player);
    setState(2298);
    match(IvionParser::HP);
    setState(2299);
    match(IvionParser::C);
    setState(2300);
    match(IvionParser::Instead);
    setState(2301);
    match(IvionParser::Deal);
    setState(2302);
    match(IvionParser::That);
    setState(2303);
    match(IvionParser::Much);
    setState(2304);
    match(IvionParser::Damage);
    setState(2305);
    match(IvionParser::To);
    setState(2306);
    match(IvionParser::Target);
    setState(2307);
    match(IvionParser::Enemy);
   
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
  enterRule(_localctx, 124, IvionParser::RuleReplacementTriggerEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2312);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2309);
      ifWouldRecieveControl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2310);
      ifWouldTakeDamage();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2311);
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
  enterRule(_localctx, 126, IvionParser::RuleIfPlayerMakesChoice);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2326);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2314);
      match(IvionParser::If);
      setState(2315);
      match(IvionParser::They);
      setState(2316);
      match(IvionParser::Do);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2317);
      match(IvionParser::If);
      setState(2318);
      match(IvionParser::They);
      setState(2319);
      match(IvionParser::Dont);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2320);
      match(IvionParser::If);
      setState(2321);
      match(IvionParser::You);
      setState(2322);
      match(IvionParser::Do);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2323);
      match(IvionParser::If);
      setState(2324);
      match(IvionParser::You);
      setState(2325);
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
  enterRule(_localctx, 128, IvionParser::RuleIfPreviousActionInvalid);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2328);
      match(IvionParser::If);
      setState(2329);
      match(IvionParser::They);
      setState(2330);
      match(IvionParser::Cant);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2331);
      match(IvionParser::If);
      setState(2332);
      match(IvionParser::You);
      setState(2333);
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

tree::TerminalNode* IvionParser::IfResolvedCardContext::Youve() {
  return getToken(IvionParser::Youve, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfResolvedCardContext::An() {
  return getToken(IvionParser::An, 0);
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
  enterRule(_localctx, 130, IvionParser::RuleIfResolvedCard);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2360);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2336);
      match(IvionParser::If);
      setState(2340);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Youve: {
          setState(2337);
          match(IvionParser::Youve);
          break;
        }

        case IvionParser::You: {
          setState(2338);
          match(IvionParser::You);
          setState(2339);
          match(IvionParser::Have);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(2342);
      match(IvionParser::Resolved);
      setState(2343);
      match(IvionParser::Another);
      setState(2344);
      match(IvionParser::Ability);
      setState(2345);
      match(IvionParser::Card);
      setState(2346);
      match(IvionParser::This);
      setState(2347);
      match(IvionParser::Turn);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2348);
      match(IvionParser::If);
      setState(2352);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Youve: {
          setState(2349);
          match(IvionParser::Youve);
          break;
        }

        case IvionParser::You: {
          setState(2350);
          match(IvionParser::You);
          setState(2351);
          match(IvionParser::Have);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(2354);
      match(IvionParser::Resolved);
      setState(2355);
      match(IvionParser::An);
      setState(2356);
      match(IvionParser::Attack);
      setState(2357);
      match(IvionParser::Card);
      setState(2358);
      match(IvionParser::This);
      setState(2359);
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

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Already() {
  return getToken(IvionParser::Already, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Used() {
  return getToken(IvionParser::Used, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Your() {
  return getToken(IvionParser::Your, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Second() {
  return getToken(IvionParser::Second, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Wind() {
  return getToken(IvionParser::Wind, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Youve() {
  return getToken(IvionParser::Youve, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::IfUsedSecondWindContext::Have() {
  return getToken(IvionParser::Have, 0);
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
  enterRule(_localctx, 132, IvionParser::RuleIfUsedSecondWind);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2362);
    match(IvionParser::If);
    setState(2366);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Youve: {
        setState(2363);
        match(IvionParser::Youve);
        break;
      }

      case IvionParser::You: {
        setState(2364);
        match(IvionParser::You);
        setState(2365);
        match(IvionParser::Have);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(2368);
    match(IvionParser::Already);
    setState(2369);
    match(IvionParser::Used);
    setState(2370);
    match(IvionParser::Your);
    setState(2371);
    match(IvionParser::Second);
    setState(2372);
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

tree::TerminalNode* IvionParser::IfNearContext::You() {
  return getToken(IvionParser::You, 0);
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

tree::TerminalNode* IvionParser::IfNearContext::Youre() {
  return getToken(IvionParser::Youre, 0);
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
  enterRule(_localctx, 134, IvionParser::RuleIfNear);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2387);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2374);
      match(IvionParser::If);
      setState(2375);
      match(IvionParser::You);
      setState(2376);
      match(IvionParser::Are);
      setState(2377);
      match(IvionParser::Near);
      setState(2378);
      match(IvionParser::CARD_NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2379);
      match(IvionParser::If);
      setState(2383);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case IvionParser::Youre: {
          setState(2380);
          match(IvionParser::Youre);
          break;
        }

        case IvionParser::You: {
          setState(2381);
          match(IvionParser::You);
          setState(2382);
          match(IvionParser::Are);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(2385);
      match(IvionParser::Near);
      setState(2386);
      match(IvionParser::CARD_NAME);
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

tree::TerminalNode* IvionParser::IfControlledContext::They() {
  return getToken(IvionParser::They, 0);
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
  enterRule(_localctx, 136, IvionParser::RuleIfControlled);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2389);
    match(IvionParser::If);
    setState(2390);
    match(IvionParser::They);
    setState(2391);
    match(IvionParser::Are);
    setState(2392);
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

tree::TerminalNode* IvionParser::IfPlayedContext::Played() {
  return getToken(IvionParser::Played, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::An() {
  return getToken(IvionParser::An, 0);
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

tree::TerminalNode* IvionParser::IfPlayedContext::Youve() {
  return getToken(IvionParser::Youve, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::IfPlayedContext::Have() {
  return getToken(IvionParser::Have, 0);
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
  enterRule(_localctx, 138, IvionParser::RuleIfPlayed);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2394);
    match(IvionParser::If);
    setState(2398);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::Youve: {
        setState(2395);
        match(IvionParser::Youve);
        break;
      }

      case IvionParser::You: {
        setState(2396);
        match(IvionParser::You);
        setState(2397);
        match(IvionParser::Have);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(2400);
    match(IvionParser::Played);
    setState(2401);
    match(IvionParser::An);
    setState(2402);
    match(IvionParser::Attack);
    setState(2403);
    match(IvionParser::Card);
    setState(2404);
    match(IvionParser::This);
    setState(2405);
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

tree::TerminalNode* IvionParser::IfTileHadTerrainContext::That() {
  return getToken(IvionParser::That, 0);
}

tree::TerminalNode* IvionParser::IfTileHadTerrainContext::Tile() {
  return getToken(IvionParser::Tile, 0);
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
  enterRule(_localctx, 140, IvionParser::RuleIfTileHadTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2407);
    match(IvionParser::If);
    setState(2408);
    match(IvionParser::That);
    setState(2409);
    match(IvionParser::Tile);
    setState(2410);
    match(IvionParser::Already);
    setState(2411);
    match(IvionParser::Had);
    setState(2412);
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

tree::TerminalNode* IvionParser::IfCardRevealedContext::You() {
  return getToken(IvionParser::You, 0);
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

IvionParser::ValueContext* IvionParser::IfCardRevealedContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 142, IvionParser::RuleIfCardRevealed);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2414);
    match(IvionParser::If);
    setState(2415);
    match(IvionParser::You);
    setState(2416);
    match(IvionParser::Have);
    setState(2417);
    match(IvionParser::At);
    setState(2418);
    match(IvionParser::Least);
    setState(2419);
    value();
    setState(2420);
    match(IvionParser::Revealed);
    setState(2421);
    match(IvionParser::Card);
    setState(2422);
    match(IvionParser::In);
    setState(2423);
    match(IvionParser::Your);
    setState(2424);
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

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::Have() {
  return getToken(IvionParser::Have, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMitigateContext::Mitigate() {
  return getToken(IvionParser::Mitigate, 0);
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
  enterRule(_localctx, 144, IvionParser::RuleIfPlayerHasMitigate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2426);
    match(IvionParser::If);
    setState(2427);
    match(IvionParser::You);
    setState(2428);
    match(IvionParser::Have);
    setState(2429);
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

tree::TerminalNode* IvionParser::IfPlayerDidntLeaveTileContext::You() {
  return getToken(IvionParser::You, 0);
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
  enterRule(_localctx, 146, IvionParser::RuleIfPlayerDidntLeaveTile);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2431);
    match(IvionParser::If);
    setState(2432);
    match(IvionParser::You);
    setState(2433);
    match(IvionParser::Didnt);
    setState(2434);
    match(IvionParser::Leave);
    setState(2435);
    match(IvionParser::A);
    setState(2436);
    match(IvionParser::Tile);
    setState(2437);
    match(IvionParser::This);
    setState(2438);
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

tree::TerminalNode* IvionParser::IfCardCostReducedContext::Was() {
  return getToken(IvionParser::Was, 0);
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
  enterRule(_localctx, 148, IvionParser::RuleIfCardCostReduced);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2440);
    match(IvionParser::If);
    setState(2441);
    match(IvionParser::Its);
    setState(2442);
    match(IvionParser::Cost);
    setState(2443);
    match(IvionParser::Was);
    setState(2444);
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

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::You() {
  return getToken(IvionParser::You, 0);
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

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::IfPlayerHasMoreHPContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
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
  enterRule(_localctx, 150, IvionParser::RuleIfPlayerHasMoreHP);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2446);
    match(IvionParser::If);
    setState(2447);
    match(IvionParser::You);
    setState(2448);
    match(IvionParser::Have);
    setState(2449);
    match(IvionParser::More);
    setState(2450);
    match(IvionParser::HP);
    setState(2451);
    match(IvionParser::Than);
    setState(2452);
    match(IvionParser::Each);
    setState(2453);
    match(IvionParser::Enemy);
   
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

tree::TerminalNode* IvionParser::IfPlayerHasNoActionsContext::You() {
  return getToken(IvionParser::You, 0);
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
  enterRule(_localctx, 152, IvionParser::RuleIfPlayerHasNoActions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2455);
    match(IvionParser::If);
    setState(2456);
    match(IvionParser::You);
    setState(2457);
    match(IvionParser::Have);
    setState(2458);
    match(IvionParser::No);
    setState(2459);
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

tree::TerminalNode* IvionParser::IfPlayerInTerrainContext::They() {
  return getToken(IvionParser::They, 0);
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
  enterRule(_localctx, 154, IvionParser::RuleIfPlayerInTerrain);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2461);
    match(IvionParser::If);
    setState(2462);
    match(IvionParser::They);
    setState(2463);
    match(IvionParser::Are);
    setState(2464);
    match(IvionParser::In);
    setState(2465);
    match(IvionParser::Terrain);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionEffectContext ------------------------------------------------------------------

IvionParser::ConditionEffectContext::ConditionEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::IfPlayerMakesChoiceContext* IvionParser::ConditionEffectContext::ifPlayerMakesChoice() {
  return getRuleContext<IvionParser::IfPlayerMakesChoiceContext>(0);
}

IvionParser::IfPreviousActionInvalidContext* IvionParser::ConditionEffectContext::ifPreviousActionInvalid() {
  return getRuleContext<IvionParser::IfPreviousActionInvalidContext>(0);
}

IvionParser::IfResolvedCardContext* IvionParser::ConditionEffectContext::ifResolvedCard() {
  return getRuleContext<IvionParser::IfResolvedCardContext>(0);
}

IvionParser::IfUsedSecondWindContext* IvionParser::ConditionEffectContext::ifUsedSecondWind() {
  return getRuleContext<IvionParser::IfUsedSecondWindContext>(0);
}

IvionParser::IfNearContext* IvionParser::ConditionEffectContext::ifNear() {
  return getRuleContext<IvionParser::IfNearContext>(0);
}

IvionParser::IfControlledContext* IvionParser::ConditionEffectContext::ifControlled() {
  return getRuleContext<IvionParser::IfControlledContext>(0);
}

IvionParser::IfPlayedContext* IvionParser::ConditionEffectContext::ifPlayed() {
  return getRuleContext<IvionParser::IfPlayedContext>(0);
}

IvionParser::IfTileHadTerrainContext* IvionParser::ConditionEffectContext::ifTileHadTerrain() {
  return getRuleContext<IvionParser::IfTileHadTerrainContext>(0);
}

IvionParser::IfCardRevealedContext* IvionParser::ConditionEffectContext::ifCardRevealed() {
  return getRuleContext<IvionParser::IfCardRevealedContext>(0);
}

IvionParser::IfPlayerHasMitigateContext* IvionParser::ConditionEffectContext::ifPlayerHasMitigate() {
  return getRuleContext<IvionParser::IfPlayerHasMitigateContext>(0);
}

IvionParser::IfPlayerDidntLeaveTileContext* IvionParser::ConditionEffectContext::ifPlayerDidntLeaveTile() {
  return getRuleContext<IvionParser::IfPlayerDidntLeaveTileContext>(0);
}

IvionParser::IfCardCostReducedContext* IvionParser::ConditionEffectContext::ifCardCostReduced() {
  return getRuleContext<IvionParser::IfCardCostReducedContext>(0);
}

IvionParser::IfPlayerHasMoreHPContext* IvionParser::ConditionEffectContext::ifPlayerHasMoreHP() {
  return getRuleContext<IvionParser::IfPlayerHasMoreHPContext>(0);
}

IvionParser::IfPlayerHasNoActionsContext* IvionParser::ConditionEffectContext::ifPlayerHasNoActions() {
  return getRuleContext<IvionParser::IfPlayerHasNoActionsContext>(0);
}

IvionParser::IfPlayerInTerrainContext* IvionParser::ConditionEffectContext::ifPlayerInTerrain() {
  return getRuleContext<IvionParser::IfPlayerInTerrainContext>(0);
}


size_t IvionParser::ConditionEffectContext::getRuleIndex() const {
  return IvionParser::RuleConditionEffect;
}


antlrcpp::Any IvionParser::ConditionEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitConditionEffect(this);
  else
    return visitor->visitChildren(this);
}

IvionParser::ConditionEffectContext* IvionParser::conditionEffect() {
  ConditionEffectContext *_localctx = _tracker.createInstance<ConditionEffectContext>(_ctx, getState());
  enterRule(_localctx, 156, IvionParser::RuleConditionEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2482);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2467);
      ifPlayerMakesChoice();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2468);
      ifPreviousActionInvalid();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2469);
      ifResolvedCard();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2470);
      ifUsedSecondWind();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2471);
      ifNear();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2472);
      ifControlled();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2473);
      ifPlayed();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2474);
      ifTileHadTerrain();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2475);
      ifCardRevealed();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2476);
      ifPlayerHasMitigate();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2477);
      ifPlayerDidntLeaveTile();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2478);
      ifCardCostReduced();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2479);
      ifPlayerHasMoreHP();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2480);
      ifPlayerHasNoActions();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2481);
      ifPlayerInTerrain();
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
  enterRule(_localctx, 158, IvionParser::RuleCardCantBeTargeted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2484);
    match(IvionParser::CARD_NAME);
    setState(2485);
    match(IvionParser::Cant);
    setState(2486);
    match(IvionParser::Be);
    setState(2487);
    match(IvionParser::Targeted);
    setState(2488);
    match(IvionParser::By);
    setState(2489);
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
  enterRule(_localctx, 160, IvionParser::RuleWhileEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2491);
    match(IvionParser::While);
    setState(2492);
    match(IvionParser::CARD_NAME);
    setState(2493);
    match(IvionParser::Is);
    setState(2494);
    match(IvionParser::Revealed);
    setState(2495);
    match(IvionParser::In);
    setState(2496);
    match(IvionParser::Your);
    setState(2497);
    match(IvionParser::Hand);
    setState(2498);
    match(IvionParser::C);
    setState(2499);
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

IvionParser::ValueContext* IvionParser::PrimaryCostReductionContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 162, IvionParser::RulePrimaryCostReduction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2501);
    match(IvionParser::CARD_NAME);
    setState(2502);
    match(IvionParser::Cost);
    setState(2503);
    value();
    setState(2504);
    match(IvionParser::Less);
    setState(2505);
    match(IvionParser::POWER);
    setState(2506);
    match(IvionParser::For);
    setState(2507);
    match(IvionParser::Each);
    setState(2508);
    match(IvionParser::Other);
    setState(2509);
    match(IvionParser::Revealed);
    setState(2510);
    match(IvionParser::Card);
    setState(2511);
    match(IvionParser::In);
    setState(2512);
    match(IvionParser::Your);
    setState(2513);
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

IvionParser::ConditionEffectContext* IvionParser::OnlyPlayIfContext::conditionEffect() {
  return getRuleContext<IvionParser::ConditionEffectContext>(0);
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
  enterRule(_localctx, 164, IvionParser::RuleOnlyPlayIf);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2515);
    match(IvionParser::Only);
    setState(2516);
    match(IvionParser::Play);
    setState(2517);
    match(IvionParser::CARD_NAME);
    setState(2518);
    conditionEffect();
   
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
  enterRule(_localctx, 166, IvionParser::RuleOncePerGameLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2520);
    match(IvionParser::CARD_NAME);
    setState(2521);
    match(IvionParser::May);
    setState(2522);
    match(IvionParser::Be);
    setState(2523);
    match(IvionParser::Played);
    setState(2524);
    match(IvionParser::Once);
    setState(2525);
    match(IvionParser::Per);
    setState(2526);
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

IvionParser::ConditionEffectContext* IvionParser::TriggerLimitContext::conditionEffect() {
  return getRuleContext<IvionParser::ConditionEffectContext>(0);
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
  enterRule(_localctx, 168, IvionParser::RuleTriggerLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2528);
    match(IvionParser::CARD_NAME);
    setState(2529);
    match(IvionParser::May);
    setState(2530);
    match(IvionParser::Only);
    setState(2531);
    match(IvionParser::Trigger);
    setState(2532);
    conditionEffect();
   
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

IvionParser::ValueContext* IvionParser::TriggerTurnLimitContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 170, IvionParser::RuleTriggerTurnLimit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2534);
    match(IvionParser::CARD_NAME);
    setState(2535);
    match(IvionParser::May);
    setState(2536);
    match(IvionParser::Trigger);
    setState(2537);
    value();
    setState(2538);
    match(IvionParser::Per);
    setState(2539);
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
  enterRule(_localctx, 172, IvionParser::RuleOmniPresentEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2548);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2541);
      cardCantBeTargeted();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2542);
      whileEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2543);
      primaryCostReduction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2544);
      onlyPlayIf();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2545);
      oncePerGameLimit();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2546);
      triggerLimit();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2547);
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
  enterRule(_localctx, 174, IvionParser::RuleOne);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2550);
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
  enterRule(_localctx, 176, IvionParser::RuleTwo);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2552);
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
  enterRule(_localctx, 178, IvionParser::RuleThree);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2554);
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
  enterRule(_localctx, 180, IvionParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2556);
    match(IvionParser::Integer);
   
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

IvionParser::OneContext* IvionParser::ValueContext::one() {
  return getRuleContext<IvionParser::OneContext>(0);
}

IvionParser::TwoContext* IvionParser::ValueContext::two() {
  return getRuleContext<IvionParser::TwoContext>(0);
}

IvionParser::ThreeContext* IvionParser::ValueContext::three() {
  return getRuleContext<IvionParser::ThreeContext>(0);
}

IvionParser::NumberContext* IvionParser::ValueContext::number() {
  return getRuleContext<IvionParser::NumberContext>(0);
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
  enterRule(_localctx, 182, IvionParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2562);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::A:
      case IvionParser::Once:
      case IvionParser::One: {
        enterOuterAlt(_localctx, 1);
        setState(2558);
        one();
        break;
      }

      case IvionParser::Twice:
      case IvionParser::Two: {
        enterOuterAlt(_localctx, 2);
        setState(2559);
        two();
        break;
      }

      case IvionParser::Three: {
        enterOuterAlt(_localctx, 3);
        setState(2560);
        three();
        break;
      }

      case IvionParser::Integer: {
        enterOuterAlt(_localctx, 4);
        setState(2561);
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

IvionParser::ValueContext* IvionParser::ChooseSameMultipleTimesContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
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
  enterRule(_localctx, 184, IvionParser::RuleChooseSameMultipleTimes);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2564);
    match(IvionParser::You);
    setState(2565);
    match(IvionParser::May);
    setState(2566);
    match(IvionParser::Choose);
    setState(2567);
    match(IvionParser::The);
    setState(2568);
    match(IvionParser::Same);
    setState(2569);
    match(IvionParser::Mode);
    setState(2570);
    value();
   
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
  size_t startState = 186;
  enterRecursionRule(_localctx, 186, IvionParser::RuleEffectList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2573);
    match(IvionParser::D);
    setState(2574);
    effect();
    _ctx->stop = _input->LT(-1);
    setState(2582);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EffectListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEffectList);
        setState(2576);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(2577);
        match(IvionParser::P);
        setState(2578);
        match(IvionParser::D);
        setState(2579);
        effect(); 
      }
      setState(2584);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
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

IvionParser::ValueContext* IvionParser::ChooseEffectContext::value() {
  return getRuleContext<IvionParser::ValueContext>(0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::For() {
  return getToken(IvionParser::For, 0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::Each() {
  return getToken(IvionParser::Each, 0);
}

tree::TerminalNode* IvionParser::ChooseEffectContext::Enemy() {
  return getToken(IvionParser::Enemy, 0);
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
  enterRule(_localctx, 188, IvionParser::RuleChooseEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2619);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2585);
      match(IvionParser::Choose);
      setState(2586);
      value();
      setState(2587);
      match(IvionParser::For);
      setState(2588);
      match(IvionParser::Each);
      setState(2589);
      match(IvionParser::Enemy);
      setState(2590);
      match(IvionParser::In);
      setState(2591);
      match(IvionParser::It);
      setState(2592);
      match(IvionParser::O);
      setState(2593);
      effectList(0);
      setState(2594);
      match(IvionParser::P);
      setState(2595);
      chooseSameMultipleTimes();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2597);
      match(IvionParser::Choose);
      setState(2598);
      value();
      setState(2599);
      match(IvionParser::O);
      setState(2600);
      effectList(0);
      setState(2601);
      match(IvionParser::P);
      setState(2602);
      chooseSameMultipleTimes();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2604);
      match(IvionParser::Choose);
      setState(2605);
      value();
      setState(2606);
      match(IvionParser::O);
      setState(2607);
      effectList(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2609);
      match(IvionParser::Choose);
      setState(2610);
      value();
      setState(2611);
      match(IvionParser::For);
      setState(2612);
      match(IvionParser::Each);
      setState(2613);
      match(IvionParser::Enemy);
      setState(2614);
      match(IvionParser::In);
      setState(2615);
      match(IvionParser::It);
      setState(2616);
      match(IvionParser::O);
      setState(2617);
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

IvionParser::DestroyCardContext* IvionParser::SingleEffectContext::destroyCard() {
  return getRuleContext<IvionParser::DestroyCardContext>(0);
}

IvionParser::DealDamageContext* IvionParser::SingleEffectContext::dealDamage() {
  return getRuleContext<IvionParser::DealDamageContext>(0);
}

IvionParser::CounterCardConditionContext* IvionParser::SingleEffectContext::counterCardCondition() {
  return getRuleContext<IvionParser::CounterCardConditionContext>(0);
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

IvionParser::StunPlayerConditionContext* IvionParser::SingleEffectContext::stunPlayerCondition() {
  return getRuleContext<IvionParser::StunPlayerConditionContext>(0);
}

IvionParser::RevealCardsConditionContext* IvionParser::SingleEffectContext::revealCardsCondition() {
  return getRuleContext<IvionParser::RevealCardsConditionContext>(0);
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

IvionParser::PayResourcesContext* IvionParser::SingleEffectContext::payResources() {
  return getRuleContext<IvionParser::PayResourcesContext>(0);
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

IvionParser::SpendResourcesContext* IvionParser::SingleEffectContext::spendResources() {
  return getRuleContext<IvionParser::SpendResourcesContext>(0);
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
  enterRule(_localctx, 190, IvionParser::RuleSingleEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2659);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 56, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2621);
      chooseEffect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2622);
      disarmPlayer();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2623);
      silencePlayer();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2624);
      slowPlayer();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2625);
      controlPlayer();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(2626);
      travelPlayer();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(2627);
      destroyCard();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(2628);
      dealDamage();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(2629);
      counterCardCondition();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(2630);
      attachCard();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(2631);
      gainPower();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(2632);
      gainAction();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(2633);
      gainInitiative();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(2634);
      gainMitigate();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(2635);
      loseMitigate();
      break;
    }

    case 16: {
      enterOuterAlt(_localctx, 16);
      setState(2636);
      useSecondWind();
      break;
    }

    case 17: {
      enterOuterAlt(_localctx, 17);
      setState(2637);
      returnCard();
      break;
    }

    case 18: {
      enterOuterAlt(_localctx, 18);
      setState(2638);
      putBottomCardOfDeckIntoHand();
      break;
    }

    case 19: {
      enterOuterAlt(_localctx, 19);
      setState(2639);
      triggerDurationEffects();
      break;
    }

    case 20: {
      enterOuterAlt(_localctx, 20);
      setState(2640);
      playCard();
      break;
    }

    case 21: {
      enterOuterAlt(_localctx, 21);
      setState(2641);
      discardCards();
      break;
    }

    case 22: {
      enterOuterAlt(_localctx, 22);
      setState(2642);
      gainsHeroic();
      break;
    }

    case 23: {
      enterOuterAlt(_localctx, 23);
      setState(2643);
      healPlayer();
      break;
    }

    case 24: {
      enterOuterAlt(_localctx, 24);
      setState(2644);
      stunPlayerCondition();
      break;
    }

    case 25: {
      enterOuterAlt(_localctx, 25);
      setState(2645);
      revealCardsCondition();
      break;
    }

    case 26: {
      enterOuterAlt(_localctx, 26);
      setState(2646);
      drawCards();
      break;
    }

    case 27: {
      enterOuterAlt(_localctx, 27);
      setState(2647);
      removeControl();
      break;
    }

    case 28: {
      enterOuterAlt(_localctx, 28);
      setState(2648);
      hardcastEffect();
      break;
    }

    case 29: {
      enterOuterAlt(_localctx, 29);
      setState(2649);
      seekEffect();
      break;
    }

    case 30: {
      enterOuterAlt(_localctx, 30);
      setState(2650);
      makeTerrain();
      break;
    }

    case 31: {
      enterOuterAlt(_localctx, 31);
      setState(2651);
      removeTerrain();
      break;
    }

    case 32: {
      enterOuterAlt(_localctx, 32);
      setState(2652);
      payResources();
      break;
    }

    case 33: {
      enterOuterAlt(_localctx, 33);
      setState(2653);
      scryEffect();
      break;
    }

    case 34: {
      enterOuterAlt(_localctx, 34);
      setState(2654);
      overrideFrenzy();
      break;
    }

    case 35: {
      enterOuterAlt(_localctx, 35);
      setState(2655);
      increaseCardDuration();
      break;
    }

    case 36: {
      enterOuterAlt(_localctx, 36);
      setState(2656);
      resetUseOfCard();
      break;
    }

    case 37: {
      enterOuterAlt(_localctx, 37);
      setState(2657);
      heroic();
      break;
    }

    case 38: {
      enterOuterAlt(_localctx, 38);
      setState(2658);
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

//----------------- ConditionalEffectContext ------------------------------------------------------------------

IvionParser::ConditionalEffectContext::ConditionalEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::ConditionEffectContext* IvionParser::ConditionalEffectContext::conditionEffect() {
  return getRuleContext<IvionParser::ConditionEffectContext>(0);
}

tree::TerminalNode* IvionParser::ConditionalEffectContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::EffectContext* IvionParser::ConditionalEffectContext::effect() {
  return getRuleContext<IvionParser::EffectContext>(0);
}

IvionParser::SingleEffectContext* IvionParser::ConditionalEffectContext::singleEffect() {
  return getRuleContext<IvionParser::SingleEffectContext>(0);
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
  enterRule(_localctx, 192, IvionParser::RuleConditionalEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2666);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case IvionParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(2661);
        conditionEffect();
        setState(2662);
        match(IvionParser::C);
        setState(2663);
        effect();
        break;
      }

      case IvionParser::Disarm:
      case IvionParser::Target:
      case IvionParser::Silence:
      case IvionParser::That:
      case IvionParser::Slow:
      case IvionParser::Apply:
      case IvionParser::Each:
      case IvionParser::Increase:
      case IvionParser::Travel:
      case IvionParser::You:
      case IvionParser::They:
      case IvionParser::Destroy:
      case IvionParser::Deal:
      case IvionParser::Counter:
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
      case IvionParser::Have:
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
      case IvionParser::Reset:
      case IvionParser::Choose: {
        enterOuterAlt(_localctx, 2);
        setState(2665);
        singleEffect();
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

IvionParser::ConditionEffectContext* IvionParser::AlternativeEffectContext::conditionEffect() {
  return getRuleContext<IvionParser::ConditionEffectContext>(0);
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
  enterRule(_localctx, 194, IvionParser::RuleAlternativeEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2674);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 58, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2668);
      conditionEffect();
      setState(2669);
      match(IvionParser::C);
      setState(2670);
      match(IvionParser::Instead);
      setState(2671);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2673);
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

//----------------- OptionalEffectContext ------------------------------------------------------------------

IvionParser::OptionalEffectContext::OptionalEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* IvionParser::OptionalEffectContext::You() {
  return getToken(IvionParser::You, 0);
}

tree::TerminalNode* IvionParser::OptionalEffectContext::May() {
  return getToken(IvionParser::May, 0);
}

IvionParser::AlternativeEffectContext* IvionParser::OptionalEffectContext::alternativeEffect() {
  return getRuleContext<IvionParser::AlternativeEffectContext>(0);
}

IvionParser::OptionalEffectContext* IvionParser::OptionalEffectContext::optionalEffect() {
  return getRuleContext<IvionParser::OptionalEffectContext>(0);
}

tree::TerminalNode* IvionParser::OptionalEffectContext::To() {
  return getToken(IvionParser::To, 0);
}


size_t IvionParser::OptionalEffectContext::getRuleIndex() const {
  return IvionParser::RuleOptionalEffect;
}


antlrcpp::Any IvionParser::OptionalEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitOptionalEffect(this);
  else
    return visitor->visitChildren(this);
}


IvionParser::OptionalEffectContext* IvionParser::optionalEffect() {
   return optionalEffect(0);
}

IvionParser::OptionalEffectContext* IvionParser::optionalEffect(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  IvionParser::OptionalEffectContext *_localctx = _tracker.createInstance<OptionalEffectContext>(_ctx, parentState);
  IvionParser::OptionalEffectContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 196;
  enterRecursionRule(_localctx, 196, IvionParser::RuleOptionalEffect, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2681);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx)) {
    case 1: {
      setState(2677);
      match(IvionParser::You);
      setState(2678);
      match(IvionParser::May);
      setState(2679);
      alternativeEffect();
      break;
    }

    case 2: {
      setState(2680);
      alternativeEffect();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(2688);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<OptionalEffectContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleOptionalEffect);
        setState(2683);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(2684);
        match(IvionParser::To);
        setState(2685);
        alternativeEffect(); 
      }
      setState(2690);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiEffectContext ------------------------------------------------------------------

IvionParser::MultiEffectContext::MultiEffectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

IvionParser::OptionalEffectContext* IvionParser::MultiEffectContext::optionalEffect() {
  return getRuleContext<IvionParser::OptionalEffectContext>(0);
}

IvionParser::MultiEffectContext* IvionParser::MultiEffectContext::multiEffect() {
  return getRuleContext<IvionParser::MultiEffectContext>(0);
}

tree::TerminalNode* IvionParser::MultiEffectContext::Then() {
  return getToken(IvionParser::Then, 0);
}

tree::TerminalNode* IvionParser::MultiEffectContext::C() {
  return getToken(IvionParser::C, 0);
}

tree::TerminalNode* IvionParser::MultiEffectContext::And() {
  return getToken(IvionParser::And, 0);
}


size_t IvionParser::MultiEffectContext::getRuleIndex() const {
  return IvionParser::RuleMultiEffect;
}


antlrcpp::Any IvionParser::MultiEffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<IvionParserVisitor*>(visitor))
    return parserVisitor->visitMultiEffect(this);
  else
    return visitor->visitChildren(this);
}


IvionParser::MultiEffectContext* IvionParser::multiEffect() {
   return multiEffect(0);
}

IvionParser::MultiEffectContext* IvionParser::multiEffect(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  IvionParser::MultiEffectContext *_localctx = _tracker.createInstance<MultiEffectContext>(_ctx, parentState);
  IvionParser::MultiEffectContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 198;
  enterRecursionRule(_localctx, 198, IvionParser::RuleMultiEffect, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2692);
    optionalEffect(0);
    _ctx->stop = _input->LT(-1);
    setState(2713);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(2711);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<MultiEffectContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiEffect);
          setState(2694);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(2695);
          match(IvionParser::Then);
          setState(2696);
          optionalEffect(0);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<MultiEffectContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiEffect);
          setState(2697);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(2698);
          match(IvionParser::C);
          setState(2699);
          match(IvionParser::Then);
          setState(2700);
          optionalEffect(0);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<MultiEffectContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiEffect);
          setState(2701);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(2702);
          match(IvionParser::C);
          setState(2703);
          optionalEffect(0);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<MultiEffectContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiEffect);
          setState(2704);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(2705);
          match(IvionParser::C);
          setState(2706);
          match(IvionParser::And);
          setState(2707);
          optionalEffect(0);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<MultiEffectContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleMultiEffect);
          setState(2708);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(2709);
          match(IvionParser::And);
          setState(2710);
          optionalEffect(0);
          break;
        }

        } 
      }
      setState(2715);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 62, _ctx);
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

tree::TerminalNode* IvionParser::EffectContext::Then() {
  return getToken(IvionParser::Then, 0);
}

tree::TerminalNode* IvionParser::EffectContext::C() {
  return getToken(IvionParser::C, 0);
}

IvionParser::MultiEffectContext* IvionParser::EffectContext::multiEffect() {
  return getRuleContext<IvionParser::MultiEffectContext>(0);
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
  enterRule(_localctx, 200, IvionParser::RuleEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2723);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2716);
      match(IvionParser::Then);
      setState(2717);
      match(IvionParser::C);
      setState(2718);
      multiEffect(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2719);
      match(IvionParser::Then);
      setState(2720);
      multiEffect(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2721);
      multiEffect(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);

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
  enterRule(_localctx, 202, IvionParser::RuleAnyEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2729);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2725);
      effect();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2726);
      passiveEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2727);
      replacementTriggerEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2728);
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

std::vector<tree::TerminalNode *> IvionParser::BreachEffectContext::P() {
  return getTokens(IvionParser::P);
}

tree::TerminalNode* IvionParser::BreachEffectContext::P(size_t i) {
  return getToken(IvionParser::P, i);
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
  enterRule(_localctx, 204, IvionParser::RuleBreachEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2731);
    match(IvionParser::Breach);
    setState(2732);
    match(IvionParser::D);
    setState(2736); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2733);
              anyEffect();
              setState(2734);
              match(IvionParser::P);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2738); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
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

std::vector<tree::TerminalNode *> IvionParser::AdvantageEffectContext::P() {
  return getTokens(IvionParser::P);
}

tree::TerminalNode* IvionParser::AdvantageEffectContext::P(size_t i) {
  return getToken(IvionParser::P, i);
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
  enterRule(_localctx, 206, IvionParser::RuleAdvantageEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2740);
    match(IvionParser::Advantage);
    setState(2741);
    match(IvionParser::D);
    setState(2745); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2742);
              anyEffect();
              setState(2743);
              match(IvionParser::P);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2747); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
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

std::vector<tree::TerminalNode *> IvionParser::FrenzyEffectContext::P() {
  return getTokens(IvionParser::P);
}

tree::TerminalNode* IvionParser::FrenzyEffectContext::P(size_t i) {
  return getToken(IvionParser::P, i);
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
  enterRule(_localctx, 208, IvionParser::RuleFrenzyEffect);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(2749);
    match(IvionParser::Frenzy);
    setState(2750);
    match(IvionParser::D);
    setState(2754); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(2751);
              anyEffect();
              setState(2752);
              match(IvionParser::P);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(2756); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
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
  enterRule(_localctx, 210, IvionParser::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(2767);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(2758);
      omniPresentEffect();
      setState(2759);
      match(IvionParser::P);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(2761);
      breachEffect();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(2762);
      advantageEffect();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(2763);
      frenzyEffect();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(2764);
      anyEffect();
      setState(2765);
      match(IvionParser::P);
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
  enterRule(_localctx, 212, IvionParser::RuleText);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(2770); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(2769);
      line();
      setState(2772); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << IvionParser::Disarm)
      | (1ULL << IvionParser::Target)
      | (1ULL << IvionParser::Silence)
      | (1ULL << IvionParser::That)
      | (1ULL << IvionParser::Slow)
      | (1ULL << IvionParser::The)
      | (1ULL << IvionParser::Apply)
      | (1ULL << IvionParser::Your)
      | (1ULL << IvionParser::Each)
      | (1ULL << IvionParser::Increase)
      | (1ULL << IvionParser::Travel)
      | (1ULL << IvionParser::You)
      | (1ULL << IvionParser::They)
      | (1ULL << IvionParser::Destroy)
      | (1ULL << IvionParser::All)
      | (1ULL << IvionParser::Deal)
      | (1ULL << IvionParser::Counter)
      | (1ULL << IvionParser::Spend))) != 0) || ((((_la - 74) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 74)) & ((1ULL << (IvionParser::Attack - 74))
      | (1ULL << (IvionParser::If - 74))
      | (1ULL << (IvionParser::Attach - 74))
      | (1ULL << (IvionParser::Gain - 74))
      | (1ULL << (IvionParser::Lose - 74))
      | (1ULL << (IvionParser::Use - 74))
      | (1ULL << (IvionParser::Return - 74))
      | (1ULL << (IvionParser::Discard - 74))
      | (1ULL << (IvionParser::Put - 74))
      | (1ULL << (IvionParser::Trigger - 74))
      | (1ULL << (IvionParser::Duration - 74))
      | (1ULL << (IvionParser::Play - 74))
      | (1ULL << (IvionParser::Frenzy - 74))
      | (1ULL << (IvionParser::Have - 74))
      | (1ULL << (IvionParser::Heroic - 74))
      | (1ULL << (IvionParser::Heal - 74))
      | (1ULL << (IvionParser::Stun - 74))
      | (1ULL << (IvionParser::Reveals - 74))
      | (1ULL << (IvionParser::Reveal - 74))
      | (1ULL << (IvionParser::Draw - 74))
      | (1ULL << (IvionParser::Then - 74)))) != 0) || ((((_la - 140) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 140)) & ((1ULL << (IvionParser::Remove - 140))
      | (1ULL << (IvionParser::Hardcast - 140))
      | (1ULL << (IvionParser::Seek - 140))
      | (1ULL << (IvionParser::Make - 140))
      | (1ULL << (IvionParser::At - 140))
      | (1ULL << (IvionParser::Look - 140))
      | (1ULL << (IvionParser::Reset - 140))
      | (1ULL << (IvionParser::Only - 140))
      | (1ULL << (IvionParser::After - 140))
      | (1ULL << (IvionParser::While - 140))
      | (1ULL << (IvionParser::CARD_NAME - 140)))) != 0) || ((((_la - 208) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 208)) & ((1ULL << (IvionParser::P - 208))
      | (1ULL << (IvionParser::Choose - 208))
      | (1ULL << (IvionParser::Breach - 208))
      | (1ULL << (IvionParser::Advantage - 208)))) != 0));
    setState(2774);
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
    case 93: return effectListSempred(dynamic_cast<EffectListContext *>(context), predicateIndex);
    case 98: return optionalEffectSempred(dynamic_cast<OptionalEffectContext *>(context), predicateIndex);
    case 99: return multiEffectSempred(dynamic_cast<MultiEffectContext *>(context), predicateIndex);

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

bool IvionParser::optionalEffectSempred(OptionalEffectContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool IvionParser::multiEffectSempred(MultiEffectContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);

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
  "disarmPlayer", "silencePlayer", "slowPlayer", "controlPlayer", "travelPlayer", 
  "destroyCard", "dealDamage", "counterCard", "counterCardCondition", "spendResources", 
  "attachCard", "gainPower", "gainAction", "gainInitiative", "gainMitigate", 
  "loseMitigate", "useSecondWind", "returnCard", "putBottomCardOfDeckIntoHand", 
  "triggerDurationEffects", "playCard", "discardCards", "gainsHeroic", "healPlayer", 
  "stunPlayer", "stunPlayerCondition", "revealCards", "revealCardsCondition", 
  "drawCards", "removeControl", "hardcastEffect", "seekEffect", "makeTerrain", 
  "removeTerrain", "payResources", "scryEffect", "overrideFrenzy", "increaseCardDuration", 
  "resetUseOfCard", "heroic", "onlyPlayCertainCards", "costReduction", "rangeSet", 
  "cantPlayCards", "playerCantBeTargeted", "increasedHandSize", "increasedMaxHP", 
  "replacesSecondWind", "noInitiative", "drawRange", "gainRange", "limitTargets", 
  "passiveEffect", "durationEffect", "turnTrigger", "gameStartTrigger", 
  "afterEffectTrigger", "afterControlled", "triggerEffect", "ifWouldRecieveControl", 
  "ifWouldTakeDamage", "ifWouldHeal", "replacementTriggerEffect", "ifPlayerMakesChoice", 
  "ifPreviousActionInvalid", "ifResolvedCard", "ifUsedSecondWind", "ifNear", 
  "ifControlled", "ifPlayed", "ifTileHadTerrain", "ifCardRevealed", "ifPlayerHasMitigate", 
  "ifPlayerDidntLeaveTile", "ifCardCostReduced", "ifPlayerHasMoreHP", "ifPlayerHasNoActions", 
  "ifPlayerInTerrain", "conditionEffect", "cardCantBeTargeted", "whileEffect", 
  "primaryCostReduction", "onlyPlayIf", "oncePerGameLimit", "triggerLimit", 
  "triggerTurnLimit", "omniPresentEffect", "one", "two", "three", "number", 
  "value", "chooseSameMultipleTimes", "effectList", "chooseEffect", "singleEffect", 
  "conditionalEffect", "alternativeEffect", "optionalEffect", "multiEffect", 
  "effect", "anyEffect", "breachEffect", "advantageEffect", "frenzyEffect", 
  "line", "text"
};

std::vector<std::string> IvionParser::_literalNames = {
  "", "'disarm'", "'target'", "", "'in'", "'terrain'", "'them'", "'silence'", 
  "'that'", "", "'yourself'", "'slow'", "'the'", "'controller'", "'apply'", 
  "'more'", "'instances'", "'of'", "'a'", "'control'", "'type'", "'your'", 
  "'choice'", "'to'", "'an'", "'instance'", "'each'", "'near'", "'increase'", 
  "'value'", "'already'", "'affecting'", "'by'", "'travel'", "'another'", 
  "", "'away'", "'from'", "'you'", "'up'", "'nearest'", "'next'", "'unless'", 
  "'they'", "'destroy'", "", "'attached'", "'all'", "'deal'", "'damage'", 
  "'equal'", "'number'", "'revealed'", "'their'", "'hand'", "'plus'", "'mitigate'", 
  "'for'", "'total'", "'counter'", "", "", "", "", "'targeting'", "'maximum'", 
  "'size'", "'increased'", "'with'", "", "'or'", "'less'", "'controlled'", 
  "'non-'", "'attack'", "'ability'", "'if'", "'is'", "'replaces'", "'countered'", 
  "'effect'", "'attach'", "'empty'", "'until'", "'end'", "'turn'", "'than'", 
  "'start'", "'gain'", "'additional'", "'gains'", "'lose'", "'use'", "'second'", 
  "'wind'", "'return'", "'owner's'", "'discard'", "'may'", "'put'", "'bottom'", 
  "'deck'", "'into'", "'trigger'", "'duration'", "'effects'", "'as'", "'though'", 
  "'had'", "'just'", "'ended'", "'play'", "'free'", "'frenzy'", "'cursed'", 
  "'dagger'", "'this'", "'doesn't'", "'count'", "'towards'", "'limit'", 
  "'per'", "'runic'", "'slaughter'", "'have'", "'discards'", "'heroic'", 
  "'heal'", "'hp'", "'stun'", "'removed'", "'way'", "'reveals'", "'reveal'", 
  "'draw'", "'draws'", "'then'", "'except'", "'also'", "'range'", "'remove'", 
  "'hardcast'", "'seek'", "'make'", "'difficult'", "'at'", "'least'", "'are'", 
  "'token'", "'look'", "'top'", "'any'", "'on'", "'and'", "'rest'", "'much'", 
  "'order'", "'has'", "'even'", "'no'", "'used'", "'reset'", "'only'", "'named'", 
  "'you've'", "'resolve'", "'you're'", "'wary'", "'taken'", "'can't'", "'be'", 
  "'targeted'", "'enemies'", "", "'first'", "'during'", "'enters'", "'ally'", 
  "'resolves'", "'time'", "'receive'", "'sent'", "'would'", "'instead'", 
  "'do'", "'don't'", "'resolved'", "'played'", "'while'", "'leave'", "'didn't'", 
  "'take'", "'was'", "'reduced'", "'not'", "'reduce'", "'below'", "'fails'", 
  "'other'", "'once'", "'twice'", "'game'", "'CARD_NAME'", "", "'one'", 
  "'two'", "'three'", "','", "'.'", "'-'", "':'", "", "", "", "'choose'", 
  "'same'", "'mode'", "'it'", "'breach'", "'advantage'"
};

std::vector<std::string> IvionParser::_symbolicNames = {
  "", "Disarm", "Target", "Enemy", "In", "Terrain", "Them", "Silence", "That", 
  "Tile", "Yourself", "Slow", "The", "Controller", "Apply", "More", "Instances", 
  "Of", "A", "Control", "Type", "Your", "Choice", "To", "An", "Instance", 
  "Each", "Near", "Increase", "Value", "Already", "Affecting", "By", "Travel", 
  "Another", "Player", "Away", "From", "You", "Up", "Nearest", "Next", "Unless", 
  "They", "Destroy", "Card", "Attached", "All", "Deal", "Damage", "Equal", 
  "Number", "Revealed", "Their", "Hand", "Plus", "Mitigate", "For", "Total", 
  "Counter", "Its", "Spends", "Spend", "Resource", "Targeting", "Maximum", 
  "Size", "Increased", "With", "Cost", "Or", "Less", "Controlled", "Non", 
  "Attack", "Ability", "If", "Is", "Replaces", "Countered", "Effect", "Attach", 
  "Empty", "Until", "End", "Turn", "Than", "Start", "Gain", "Additional", 
  "Gains", "Lose", "Use", "Second", "Wind", "Return", "Owners", "Discard", 
  "May", "Put", "Bottom", "Deck", "Into", "Trigger", "Duration", "Effects", 
  "As", "Though", "Had", "Just", "Ended", "Play", "Free", "Frenzy", "Cursed", 
  "Dagger", "This", "Doesnt", "Count", "Towards", "Limit", "Per", "Runic", 
  "Slaughter", "Have", "Discards", "Heroic", "Heal", "HP", "Stun", "Removed", 
  "Way", "Reveals", "Reveal", "Draw", "Draws", "Then", "Except", "Also", 
  "Range", "Remove", "Hardcast", "Seek", "Make", "Difficult", "At", "Least", 
  "Are", "Token", "Look", "Top", "Any", "On", "And", "Rest", "Much", "Order", 
  "Has", "Even", "No", "Used", "Reset", "Only", "Named", "Youve", "Resolve", 
  "Youre", "Wary", "Taken", "Cant", "Be", "Targeted", "Enemies", "After", 
  "First", "During", "Enters", "Ally", "Resolves", "Time", "Receive", "Sent", 
  "Would", "Instead", "Do", "Dont", "Resolved", "Played", "While", "Leave", 
  "Didnt", "Take", "Was", "Reduced", "Not", "Reduce", "Below", "Fails", 
  "Other", "Once", "Twice", "Game", "CARD_NAME", "Integer", "One", "Two", 
  "Three", "C", "P", "D", "O", "POWER", "ACTION", "INITIATIVE", "Choose", 
  "Same", "Mode", "It", "Breach", "Advantage", "Whitespace"
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

  static uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xde, 0xadb, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0xf2, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x5, 0x3, 0x10b, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x5, 0x4, 0x12a, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x16e, 0xa, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
       0x6, 0x212, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x235, 0xa, 0x7, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x2e0, 
       0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x34c, 0xa, 0x9, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x359, 0xa, 0xa, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x3c1, 0xa, 0xc, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x3db, 0xa, 
       0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x3f5, 
       0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0x3f9, 0xa, 0xf, 0xd, 0xf, 
       0xe, 0xf, 0x3fa, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x6, 0xf, 0x400, 0xa, 
       0xf, 0xd, 0xf, 0xe, 0xf, 0x401, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x6, 
       0xf, 0x407, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x408, 0x5, 0xf, 0x40b, 
       0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x415, 0xa, 0x10, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x5, 0x13, 0x48a, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x5, 0x16, 0x532, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 
       0x17, 0x566, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x5, 0x19, 0x58a, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x593, 0xa, 0x1a, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 
       0x3, 0x1b, 0x5, 0x1b, 0x5a2, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
       0x1c, 0x5, 0x1c, 0x5e3, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x5f2, 0xa, 
       0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
       0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x61c, 
       0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 
       0x634, 0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x66e, 0xa, 0x22, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x5, 0x2a, 0x6c4, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x6d3, 0xa, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x6dd, 0xa, 0x2a, 0x3, 0x2a, 0x3, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
       0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x6e8, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x3, 0x2a, 0x5, 0x2a, 0x6f9, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
       0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 
       0x2a, 0x703, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x5, 0x2b, 0x71c, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
       0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
       0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x5, 
       0x2e, 0x738, 0xa, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 
       0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 
       0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 
       0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
       0x3, 0x33, 0x3, 0x33, 0x5, 0x33, 0x782, 0xa, 0x33, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 
       0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 
       0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 0x36, 0x7a7, 0xa, 0x36, 
       0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 
       0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x7bd, 0xa, 0x38, 0x3, 0x39, 0x3, 
       0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 
       0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x5, 
       0x3a, 0x8aa, 0xa, 0x3a, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
       0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
       0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
       0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x5, 0x3c, 0x8cb, 0xa, 0x3c, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 
       0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 
       0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 
       0x40, 0x3, 0x40, 0x5, 0x40, 0x90b, 0xa, 0x40, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
       0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 0x919, 0xa, 
       0x41, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 
       0x42, 0x5, 0x42, 0x921, 0xa, 0x42, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x5, 0x43, 0x927, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 
       0x43, 0x3, 0x43, 0x5, 0x43, 0x933, 0xa, 0x43, 0x3, 0x43, 0x3, 0x43, 
       0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x5, 0x43, 0x93b, 0xa, 
       0x43, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x5, 0x44, 0x941, 
       0xa, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 
       0x3, 0x44, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
       0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x952, 0xa, 
       0x45, 0x3, 0x45, 0x3, 0x45, 0x5, 0x45, 0x956, 0xa, 0x45, 0x3, 0x46, 
       0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x47, 0x3, 0x47, 
       0x3, 0x47, 0x3, 0x47, 0x5, 0x47, 0x961, 0xa, 0x47, 0x3, 0x47, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 
       0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 
       0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
       0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 
       0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 
       0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 0x3, 
       0x50, 0x3, 0x50, 0x3, 0x50, 0x5, 0x50, 0x9b5, 0xa, 0x50, 0x3, 0x51, 
       0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 
       0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x55, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
       0x3, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 
       0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x5, 0x58, 0x9f7, 0xa, 0x58, 0x3, 
       0x59, 0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5c, 0x3, 0x5c, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 
       0x5d, 0xa05, 0xa, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 
       0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 
       0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 
       0x7, 0x5f, 0xa17, 0xa, 0x5f, 0xc, 0x5f, 0xe, 0x5f, 0xa1a, 0xb, 0x5f, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 
       0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x60, 0x5, 0x60, 0xa3e, 0xa, 
       0x60, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
       0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
       0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
       0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
       0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
       0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 
       0x61, 0x3, 0x61, 0x3, 0x61, 0x5, 0x61, 0xa66, 0xa, 0x61, 0x3, 0x62, 
       0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x3, 0x62, 0x5, 0x62, 0xa6d, 0xa, 
       0x62, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x5, 0x63, 0xa75, 0xa, 0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 
       0x3, 0x64, 0x3, 0x64, 0x5, 0x64, 0xa7c, 0xa, 0x64, 0x3, 0x64, 0x3, 
       0x64, 0x3, 0x64, 0x7, 0x64, 0xa81, 0xa, 0x64, 0xc, 0x64, 0xe, 0x64, 
       0xa84, 0xb, 0x64, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
       0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
       0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 
       0x65, 0x3, 0x65, 0x3, 0x65, 0x3, 0x65, 0x7, 0x65, 0xa9a, 0xa, 0x65, 
       0xc, 0x65, 0xe, 0x65, 0xa9d, 0xb, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 
       0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0xaa6, 
       0xa, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 0x67, 
       0xaac, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 0x68, 0x3, 
       0x68, 0x6, 0x68, 0xab3, 0xa, 0x68, 0xd, 0x68, 0xe, 0x68, 0xab4, 0x3, 
       0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x6, 0x69, 0xabc, 
       0xa, 0x69, 0xd, 0x69, 0xe, 0x69, 0xabd, 0x3, 0x6a, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x6, 0x6a, 0xac5, 0xa, 0x6a, 0xd, 0x6a, 
       0xe, 0x6a, 0xac6, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 
       0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x3, 0x6b, 0x5, 0x6b, 0xad2, 
       0xa, 0x6b, 0x3, 0x6c, 0x6, 0x6c, 0xad5, 0xa, 0x6c, 0xd, 0x6c, 0xe, 
       0x6c, 0xad6, 0x3, 0x6c, 0x3, 0x6c, 0x3, 0x6c, 0x2, 0x5, 0xbc, 0xc6, 
       0xc8, 0x6d, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
       0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 
       0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 
       0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 
       0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 
       0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 0xbe, 0xc0, 0xc2, 0xc4, 
       0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 0xd4, 0xd6, 0x2, 0x4, 0x5, 
       0x2, 0x14, 0x14, 0xc9, 0xc9, 0xce, 0xce, 0x4, 0x2, 0xca, 0xca, 0xcf, 
       0xcf, 0x2, 0xba7, 0x2, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x4, 0x10a, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x129, 0x3, 0x2, 0x2, 0x2, 0x8, 0x16d, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0x211, 0x3, 0x2, 0x2, 0x2, 0xc, 0x234, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0x2df, 0x3, 0x2, 0x2, 0x2, 0x10, 0x34b, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x358, 0x3, 0x2, 0x2, 0x2, 0x14, 0x35a, 0x3, 0x2, 0x2, 
       0x2, 0x16, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x18, 0x3da, 0x3, 0x2, 0x2, 
       0x2, 0x1a, 0x3f4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x40a, 0x3, 0x2, 0x2, 
       0x2, 0x1e, 0x414, 0x3, 0x2, 0x2, 0x2, 0x20, 0x416, 0x3, 0x2, 0x2, 
       0x2, 0x22, 0x41a, 0x3, 0x2, 0x2, 0x2, 0x24, 0x489, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0x48b, 0x3, 0x2, 0x2, 0x2, 0x28, 0x496, 0x3, 0x2, 0x2, 
       0x2, 0x2a, 0x531, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x565, 0x3, 0x2, 0x2, 
       0x2, 0x2e, 0x567, 0x3, 0x2, 0x2, 0x2, 0x30, 0x589, 0x3, 0x2, 0x2, 
       0x2, 0x32, 0x592, 0x3, 0x2, 0x2, 0x2, 0x34, 0x5a1, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0x5e2, 0x3, 0x2, 0x2, 0x2, 0x38, 0x5f1, 0x3, 0x2, 0x2, 
       0x2, 0x3a, 0x61b, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x633, 0x3, 0x2, 0x2, 
       0x2, 0x3e, 0x635, 0x3, 0x2, 0x2, 0x2, 0x40, 0x637, 0x3, 0x2, 0x2, 
       0x2, 0x42, 0x66d, 0x3, 0x2, 0x2, 0x2, 0x44, 0x66f, 0x3, 0x2, 0x2, 
       0x2, 0x46, 0x674, 0x3, 0x2, 0x2, 0x2, 0x48, 0x67b, 0x3, 0x2, 0x2, 
       0x2, 0x4a, 0x694, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x6a2, 0x3, 0x2, 0x2, 
       0x2, 0x4e, 0x6ad, 0x3, 0x2, 0x2, 0x2, 0x50, 0x6b3, 0x3, 0x2, 0x2, 
       0x2, 0x52, 0x702, 0x3, 0x2, 0x2, 0x2, 0x54, 0x71b, 0x3, 0x2, 0x2, 
       0x2, 0x56, 0x71d, 0x3, 0x2, 0x2, 0x2, 0x58, 0x726, 0x3, 0x2, 0x2, 
       0x2, 0x5a, 0x737, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x739, 0x3, 0x2, 0x2, 
       0x2, 0x5e, 0x742, 0x3, 0x2, 0x2, 0x2, 0x60, 0x74a, 0x3, 0x2, 0x2, 
       0x2, 0x62, 0x750, 0x3, 0x2, 0x2, 0x2, 0x64, 0x781, 0x3, 0x2, 0x2, 
       0x2, 0x66, 0x783, 0x3, 0x2, 0x2, 0x2, 0x68, 0x794, 0x3, 0x2, 0x2, 
       0x2, 0x6a, 0x7a6, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x7a8, 0x3, 0x2, 0x2, 
       0x2, 0x6e, 0x7bc, 0x3, 0x2, 0x2, 0x2, 0x70, 0x7be, 0x3, 0x2, 0x2, 
       0x2, 0x72, 0x8a9, 0x3, 0x2, 0x2, 0x2, 0x74, 0x8ab, 0x3, 0x2, 0x2, 
       0x2, 0x76, 0x8ca, 0x3, 0x2, 0x2, 0x2, 0x78, 0x8cc, 0x3, 0x2, 0x2, 
       0x2, 0x7a, 0x8d8, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x8f4, 0x3, 0x2, 0x2, 
       0x2, 0x7e, 0x90a, 0x3, 0x2, 0x2, 0x2, 0x80, 0x918, 0x3, 0x2, 0x2, 
       0x2, 0x82, 0x920, 0x3, 0x2, 0x2, 0x2, 0x84, 0x93a, 0x3, 0x2, 0x2, 
       0x2, 0x86, 0x93c, 0x3, 0x2, 0x2, 0x2, 0x88, 0x955, 0x3, 0x2, 0x2, 
       0x2, 0x8a, 0x957, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x95c, 0x3, 0x2, 0x2, 
       0x2, 0x8e, 0x969, 0x3, 0x2, 0x2, 0x2, 0x90, 0x970, 0x3, 0x2, 0x2, 
       0x2, 0x92, 0x97c, 0x3, 0x2, 0x2, 0x2, 0x94, 0x981, 0x3, 0x2, 0x2, 
       0x2, 0x96, 0x98a, 0x3, 0x2, 0x2, 0x2, 0x98, 0x990, 0x3, 0x2, 0x2, 
       0x2, 0x9a, 0x999, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x99f, 0x3, 0x2, 0x2, 
       0x2, 0x9e, 0x9b4, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9b6, 0x3, 0x2, 0x2, 
       0x2, 0xa2, 0x9bd, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x9c7, 0x3, 0x2, 0x2, 
       0x2, 0xa6, 0x9d5, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x9da, 0x3, 0x2, 0x2, 
       0x2, 0xaa, 0x9e2, 0x3, 0x2, 0x2, 0x2, 0xac, 0x9e8, 0x3, 0x2, 0x2, 
       0x2, 0xae, 0x9f6, 0x3, 0x2, 0x2, 0x2, 0xb0, 0x9f8, 0x3, 0x2, 0x2, 
       0x2, 0xb2, 0x9fa, 0x3, 0x2, 0x2, 0x2, 0xb4, 0x9fc, 0x3, 0x2, 0x2, 
       0x2, 0xb6, 0x9fe, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xa04, 0x3, 0x2, 0x2, 
       0x2, 0xba, 0xa06, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xa0e, 0x3, 0x2, 0x2, 
       0x2, 0xbe, 0xa3d, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xa65, 0x3, 0x2, 0x2, 
       0x2, 0xc2, 0xa6c, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xa74, 0x3, 0x2, 0x2, 
       0x2, 0xc6, 0xa7b, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xa85, 0x3, 0x2, 0x2, 
       0x2, 0xca, 0xaa5, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xaab, 0x3, 0x2, 0x2, 
       0x2, 0xce, 0xaad, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xab6, 0x3, 0x2, 0x2, 
       0x2, 0xd2, 0xabf, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xad1, 0x3, 0x2, 0x2, 
       0x2, 0xd6, 0xad4, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x3, 0x2, 
       0x2, 0xd9, 0xda, 0x5, 0xb8, 0x5d, 0x2, 0xda, 0xdb, 0x7, 0x4, 0x2, 
       0x2, 0xdb, 0xdc, 0x7, 0x5, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x6, 0x2, 0x2, 
       0xdd, 0xde, 0x7, 0x7, 0x2, 0x2, 0xde, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xdf, 
       0xe0, 0x7, 0x3, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0xb8, 0x5d, 0x2, 0xe1, 
       0xe2, 0x7, 0x4, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x5, 0x2, 0x2, 0xe3, 0xf2, 
       0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x7, 0x3, 0x2, 0x2, 0xe5, 0xe6, 0x5, 
       0xb8, 0x5d, 0x2, 0xe6, 0xe7, 0x7, 0x4, 0x2, 0x2, 0xe7, 0xe8, 0x7, 
       0x5, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x1d, 0x2, 0x2, 0xe9, 0xea, 0x7, 
       0x7, 0x2, 0x2, 0xea, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x3, 
       0x2, 0x2, 0xec, 0xed, 0x5, 0xb8, 0x5d, 0x2, 0xed, 0xee, 0x7, 0x8, 
       0x2, 0x2, 0xee, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x3, 0x2, 
       0x2, 0xf0, 0xf2, 0x5, 0xb8, 0x5d, 0x2, 0xf1, 0xd8, 0x3, 0x2, 0x2, 
       0x2, 0xf1, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xe4, 0x3, 0x2, 0x2, 0x2, 
       0xf1, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf2, 
       0x3, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 0x7, 0x9, 0x2, 0x2, 0xf4, 0xf5, 
       0x5, 0xb8, 0x5d, 0x2, 0xf5, 0xf6, 0x7, 0x4, 0x2, 0x2, 0xf6, 0xf7, 
       0x7, 0x5, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x6, 0x2, 0x2, 0xf8, 0xf9, 0x7, 
       0xa, 0x2, 0x2, 0xf9, 0xfa, 0x7, 0xb, 0x2, 0x2, 0xfa, 0x10b, 0x3, 
       0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x9, 0x2, 0x2, 0xfc, 0xfd, 0x5, 0xb8, 
       0x5d, 0x2, 0xfd, 0xfe, 0x7, 0xc, 0x2, 0x2, 0xfe, 0x10b, 0x3, 0x2, 
       0x2, 0x2, 0xff, 0x100, 0x7, 0x9, 0x2, 0x2, 0x100, 0x101, 0x5, 0xb8, 
       0x5d, 0x2, 0x101, 0x102, 0x7, 0x4, 0x2, 0x2, 0x102, 0x103, 0x7, 0x5, 
       0x2, 0x2, 0x103, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x7, 0x9, 
       0x2, 0x2, 0x105, 0x106, 0x5, 0xb8, 0x5d, 0x2, 0x106, 0x107, 0x7, 
       0x8, 0x2, 0x2, 0x107, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x7, 
       0x9, 0x2, 0x2, 0x109, 0x10b, 0x5, 0xb8, 0x5d, 0x2, 0x10a, 0xf3, 0x3, 
       0x2, 0x2, 0x2, 0x10a, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x10a, 0xff, 0x3, 
       0x2, 0x2, 0x2, 0x10a, 0x104, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 
       0x2, 0x2, 0x2, 0x10b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x7, 
       0xd, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0xb8, 0x5d, 0x2, 0x10e, 0x10f, 
       0x7, 0x4, 0x2, 0x2, 0x10f, 0x110, 0x7, 0x5, 0x2, 0x2, 0x110, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x7, 0xd, 0x2, 0x2, 0x112, 0x12a, 
       0x5, 0xb8, 0x5d, 0x2, 0x113, 0x114, 0x7, 0xd, 0x2, 0x2, 0x114, 0x115, 
       0x5, 0xb8, 0x5d, 0x2, 0x115, 0x116, 0x7, 0x8, 0x2, 0x2, 0x116, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x117, 0x118, 0x7, 0xd, 0x2, 0x2, 0x118, 0x119, 
       0x5, 0xb8, 0x5d, 0x2, 0x119, 0x11a, 0x7, 0xa, 0x2, 0x2, 0x11a, 0x11b, 
       0x7, 0x5, 0x2, 0x2, 0x11b, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 
       0x7, 0xd, 0x2, 0x2, 0x11d, 0x11e, 0x5, 0xb8, 0x5d, 0x2, 0x11e, 0x11f, 
       0x7, 0x4, 0x2, 0x2, 0x11f, 0x120, 0x7, 0x5, 0x2, 0x2, 0x120, 0x121, 
       0x7, 0x6, 0x2, 0x2, 0x121, 0x122, 0x7, 0x7, 0x2, 0x2, 0x122, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x7, 0xd, 0x2, 0x2, 0x124, 0x125, 
       0x5, 0xb8, 0x5d, 0x2, 0x125, 0x126, 0x7, 0xe, 0x2, 0x2, 0x126, 0x127, 
       0x7, 0x2f, 0x2, 0x2, 0x127, 0x128, 0x7, 0xf, 0x2, 0x2, 0x128, 0x12a, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x129, 0x111, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x113, 0x3, 0x2, 0x2, 0x2, 0x129, 0x117, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x129, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x12a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 
       0x7, 0x10, 0x2, 0x2, 0x12c, 0x12d, 0x5, 0xb8, 0x5d, 0x2, 0x12d, 0x12e, 
       0x7, 0x11, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x12, 0x2, 0x2, 0x12f, 0x130, 
       0x7, 0x13, 0x2, 0x2, 0x130, 0x131, 0x7, 0x14, 0x2, 0x2, 0x131, 0x132, 
       0x7, 0x15, 0x2, 0x2, 0x132, 0x133, 0x7, 0x16, 0x2, 0x2, 0x133, 0x134, 
       0x7, 0x13, 0x2, 0x2, 0x134, 0x135, 0x7, 0x17, 0x2, 0x2, 0x135, 0x136, 
       0x7, 0x18, 0x2, 0x2, 0x136, 0x137, 0x7, 0x19, 0x2, 0x2, 0x137, 0x138, 
       0x7, 0x8, 0x2, 0x2, 0x138, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 
       0x7, 0x10, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x1a, 0x2, 0x2, 0x13b, 0x13c, 
       0x7, 0x1b, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x13, 0x2, 0x2, 0x13d, 0x13e, 
       0x7, 0x14, 0x2, 0x2, 0x13e, 0x13f, 0x7, 0x15, 0x2, 0x2, 0x13f, 0x140, 
       0x7, 0x16, 0x2, 0x2, 0x140, 0x141, 0x7, 0x13, 0x2, 0x2, 0x141, 0x142, 
       0x7, 0x17, 0x2, 0x2, 0x142, 0x143, 0x7, 0x18, 0x2, 0x2, 0x143, 0x144, 
       0x7, 0x19, 0x2, 0x2, 0x144, 0x145, 0x7, 0x4, 0x2, 0x2, 0x145, 0x16e, 
       0x7, 0x5, 0x2, 0x2, 0x146, 0x147, 0x7, 0x10, 0x2, 0x2, 0x147, 0x148, 
       0x7, 0x1a, 0x2, 0x2, 0x148, 0x149, 0x7, 0x1b, 0x2, 0x2, 0x149, 0x14a, 
       0x7, 0x13, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0x14, 0x2, 0x2, 0x14b, 0x14c, 
       0x7, 0x15, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x16, 0x2, 0x2, 0x14d, 0x14e, 
       0x7, 0x13, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x17, 0x2, 0x2, 0x14f, 0x150, 
       0x7, 0x18, 0x2, 0x2, 0x150, 0x151, 0x7, 0x19, 0x2, 0x2, 0x151, 0x16e, 
       0x7, 0x8, 0x2, 0x2, 0x152, 0x153, 0x7, 0x10, 0x2, 0x2, 0x153, 0x154, 
       0x7, 0x1a, 0x2, 0x2, 0x154, 0x155, 0x7, 0x1b, 0x2, 0x2, 0x155, 0x156, 
       0x7, 0x13, 0x2, 0x2, 0x156, 0x157, 0x7, 0x14, 0x2, 0x2, 0x157, 0x158, 
       0x7, 0x15, 0x2, 0x2, 0x158, 0x159, 0x7, 0x16, 0x2, 0x2, 0x159, 0x15a, 
       0x7, 0x13, 0x2, 0x2, 0x15a, 0x15b, 0x7, 0x17, 0x2, 0x2, 0x15b, 0x15c, 
       0x7, 0x18, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0x19, 0x2, 0x2, 0x15d, 0x15e, 
       0x7, 0x1c, 0x2, 0x2, 0x15e, 0x15f, 0x7, 0x5, 0x2, 0x2, 0x15f, 0x160, 
       0x7, 0x1d, 0x2, 0x2, 0x160, 0x16e, 0x7, 0xcc, 0x2, 0x2, 0x161, 0x162, 
       0x7, 0x1e, 0x2, 0x2, 0x162, 0x163, 0x7, 0xe, 0x2, 0x2, 0x163, 0x164, 
       0x7, 0x1f, 0x2, 0x2, 0x164, 0x165, 0x7, 0x13, 0x2, 0x2, 0x165, 0x166, 
       0x7, 0x14, 0x2, 0x2, 0x166, 0x167, 0x7, 0x15, 0x2, 0x2, 0x167, 0x168, 
       0x7, 0x16, 0x2, 0x2, 0x168, 0x169, 0x7, 0x20, 0x2, 0x2, 0x169, 0x16a, 
       0x7, 0x21, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x8, 0x2, 0x2, 0x16b, 0x16c, 
       0x7, 0x22, 0x2, 0x2, 0x16c, 0x16e, 0x5, 0xb8, 0x5d, 0x2, 0x16d, 0x12b, 
       0x3, 0x2, 0x2, 0x2, 0x16d, 0x139, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x146, 
       0x3, 0x2, 0x2, 0x2, 0x16d, 0x152, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x161, 
       0x3, 0x2, 0x2, 0x2, 0x16e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 
       0x7, 0x23, 0x2, 0x2, 0x170, 0x171, 0x7, 0x24, 0x2, 0x2, 0x171, 0x172, 
       0x7, 0x4, 0x2, 0x2, 0x172, 0x173, 0x7, 0x25, 0x2, 0x2, 0x173, 0x174, 
       0x5, 0xb8, 0x5d, 0x2, 0x174, 0x175, 0x7, 0xb, 0x2, 0x2, 0x175, 0x176, 
       0x7, 0x26, 0x2, 0x2, 0x176, 0x177, 0x7, 0x27, 0x2, 0x2, 0x177, 0x178, 
       0x7, 0x28, 0x2, 0x2, 0x178, 0x212, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 
       0x7, 0x23, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x24, 0x2, 0x2, 0x17b, 0x17c, 
       0x7, 0x4, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x25, 0x2, 0x2, 0x17d, 0x17e, 
       0x7, 0x29, 0x2, 0x2, 0x17e, 0x17f, 0x7, 0x19, 0x2, 0x2, 0x17f, 0x180, 
       0x5, 0xb8, 0x5d, 0x2, 0x180, 0x181, 0x7, 0xb, 0x2, 0x2, 0x181, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x7, 0x23, 0x2, 0x2, 0x183, 0x184, 
       0x7, 0x24, 0x2, 0x2, 0x184, 0x185, 0x7, 0x4, 0x2, 0x2, 0x185, 0x186, 
       0x7, 0x25, 0x2, 0x2, 0x186, 0x187, 0x7, 0x29, 0x2, 0x2, 0x187, 0x188, 
       0x7, 0x19, 0x2, 0x2, 0x188, 0x189, 0x5, 0xb8, 0x5d, 0x2, 0x189, 0x18a, 
       0x7, 0xb, 0x2, 0x2, 0x18a, 0x18b, 0x7, 0x26, 0x2, 0x2, 0x18b, 0x18c, 
       0x7, 0x27, 0x2, 0x2, 0x18c, 0x18d, 0x7, 0x28, 0x2, 0x2, 0x18d, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x7, 0x23, 0x2, 0x2, 0x18f, 0x190, 
       0x7, 0x19, 0x2, 0x2, 0x190, 0x191, 0x7, 0x4, 0x2, 0x2, 0x191, 0x212, 
       0x7, 0xb, 0x2, 0x2, 0x192, 0x193, 0x7, 0x23, 0x2, 0x2, 0x193, 0x194, 
       0x7, 0x24, 0x2, 0x2, 0x194, 0x195, 0x7, 0x4, 0x2, 0x2, 0x195, 0x196, 
       0x7, 0x25, 0x2, 0x2, 0x196, 0x197, 0x7, 0x29, 0x2, 0x2, 0x197, 0x198, 
       0x7, 0x19, 0x2, 0x2, 0x198, 0x199, 0x5, 0xb8, 0x5d, 0x2, 0x199, 0x19a, 
       0x7, 0xb, 0x2, 0x2, 0x19a, 0x19b, 0x7, 0x26, 0x2, 0x2, 0x19b, 0x19c, 
       0x7, 0x27, 0x2, 0x2, 0x19c, 0x19d, 0x7, 0x28, 0x2, 0x2, 0x19d, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x19e, 0x19f, 0x7, 0x23, 0x2, 0x2, 0x19f, 0x1a0, 
       0x7, 0x8, 0x2, 0x2, 0x1a0, 0x1a1, 0x7, 0x29, 0x2, 0x2, 0x1a1, 0x1a2, 
       0x7, 0x19, 0x2, 0x2, 0x1a2, 0x1a3, 0x5, 0xb8, 0x5d, 0x2, 0x1a3, 0x1a4, 
       0x7, 0xb, 0x2, 0x2, 0x1a4, 0x212, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 
       0x7, 0x23, 0x2, 0x2, 0x1a6, 0x1a7, 0x7, 0x8, 0x2, 0x2, 0x1a7, 0x1a8, 
       0x7, 0x29, 0x2, 0x2, 0x1a8, 0x1a9, 0x7, 0x19, 0x2, 0x2, 0x1a9, 0x1aa, 
       0x5, 0xb8, 0x5d, 0x2, 0x1aa, 0x1ab, 0x7, 0xb, 0x2, 0x2, 0x1ab, 0x1ac, 
       0x7, 0x26, 0x2, 0x2, 0x1ac, 0x1ad, 0x7, 0x27, 0x2, 0x2, 0x1ad, 0x1ae, 
       0x7, 0x28, 0x2, 0x2, 0x1ae, 0x212, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 
       0x7, 0x23, 0x2, 0x2, 0x1b0, 0x1b1, 0x7, 0x8, 0x2, 0x2, 0x1b1, 0x1b2, 
       0x5, 0xb8, 0x5d, 0x2, 0x1b2, 0x1b3, 0x7, 0xb, 0x2, 0x2, 0x1b3, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x23, 0x2, 0x2, 0x1b5, 0x1b6, 
       0x7, 0x8, 0x2, 0x2, 0x1b6, 0x1b7, 0x5, 0xb8, 0x5d, 0x2, 0x1b7, 0x1b8, 
       0x7, 0xb, 0x2, 0x2, 0x1b8, 0x1b9, 0x7, 0x26, 0x2, 0x2, 0x1b9, 0x1ba, 
       0x7, 0x27, 0x2, 0x2, 0x1ba, 0x1bb, 0x7, 0x28, 0x2, 0x2, 0x1bb, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x7, 0x23, 0x2, 0x2, 0x1bd, 0x1be, 
       0x7, 0x24, 0x2, 0x2, 0x1be, 0x1bf, 0x7, 0x4, 0x2, 0x2, 0x1bf, 0x1c0, 
       0x7, 0x25, 0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x29, 0x2, 0x2, 0x1c1, 0x1c2, 
       0x7, 0x19, 0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0xb8, 0x5d, 0x2, 0x1c3, 0x1c4, 
       0x7, 0xb, 0x2, 0x2, 0x1c4, 0x1c5, 0x7, 0x26, 0x2, 0x2, 0x1c5, 0x1c6, 
       0x7, 0x27, 0x2, 0x2, 0x1c6, 0x1c7, 0x7, 0x28, 0x2, 0x2, 0x1c7, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 0x7, 0x23, 0x2, 0x2, 0x1c9, 0x1ca, 
       0x7, 0x29, 0x2, 0x2, 0x1ca, 0x1cb, 0x7, 0x19, 0x2, 0x2, 0x1cb, 0x1cc, 
       0x5, 0xb8, 0x5d, 0x2, 0x1cc, 0x1cd, 0x7, 0xb, 0x2, 0x2, 0x1cd, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x7, 0x23, 0x2, 0x2, 0x1cf, 0x1d0, 
       0x7, 0x8, 0x2, 0x2, 0x1d0, 0x1d1, 0x7, 0x19, 0x2, 0x2, 0x1d1, 0x212, 
       0x7, 0xcc, 0x2, 0x2, 0x1d2, 0x1d3, 0x7, 0x23, 0x2, 0x2, 0x1d3, 0x1d4, 
       0x7, 0x24, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 0x4, 0x2, 0x2, 0x1d5, 0x1d6, 
       0x7, 0x25, 0x2, 0x2, 0x1d6, 0x1d7, 0x7, 0x19, 0x2, 0x2, 0x1d7, 0x1d8, 
       0x7, 0xe, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x2a, 0x2, 0x2, 0x1d9, 0x1da, 
       0x7, 0xb, 0x2, 0x2, 0x1da, 0x1db, 0x7, 0x2b, 0x2, 0x2, 0x1db, 0x1dc, 
       0x7, 0x19, 0x2, 0x2, 0x1dc, 0x1dd, 0x7, 0x28, 0x2, 0x2, 0x1dd, 0x1de, 
       0x7, 0x2c, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x2d, 0x2, 0x2, 0x1df, 0x1e0, 
       0x7, 0x40, 0x2, 0x2, 0x1e0, 0x1e1, 0x5, 0xb8, 0x5d, 0x2, 0x1e1, 0x1e2, 
       0x7, 0x41, 0x2, 0x2, 0x1e2, 0x212, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 
       0x7, 0x23, 0x2, 0x2, 0x1e4, 0x1e5, 0x7, 0x19, 0x2, 0x2, 0x1e5, 0x1e6, 
       0x7, 0xe, 0x2, 0x2, 0x1e6, 0x1e7, 0x7, 0x2a, 0x2, 0x2, 0x1e7, 0x1e8, 
       0x7, 0xb, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x2b, 0x2, 0x2, 0x1e9, 0x1ea, 
       0x7, 0x19, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x24, 0x2, 0x2, 0x1eb, 0x1ec, 
       0x7, 0x4, 0x2, 0x2, 0x1ec, 0x212, 0x7, 0x25, 0x2, 0x2, 0x1ed, 0x1ee, 
       0x7, 0x23, 0x2, 0x2, 0x1ee, 0x1ef, 0x7, 0x19, 0x2, 0x2, 0x1ef, 0x1f0, 
       0x7, 0xe, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x2a, 0x2, 0x2, 0x1f1, 0x1f2, 
       0x7, 0xb, 0x2, 0x2, 0x1f2, 0x1f3, 0x7, 0x2b, 0x2, 0x2, 0x1f3, 0x1f4, 
       0x7, 0x19, 0x2, 0x2, 0x1f4, 0x1f5, 0x7, 0x4, 0x2, 0x2, 0x1f5, 0x212, 
       0x7, 0x5, 0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x23, 0x2, 0x2, 0x1f7, 0x1f8, 
       0x7, 0x8, 0x2, 0x2, 0x1f8, 0x1f9, 0x7, 0x24, 0x2, 0x2, 0x1f9, 0x1fa, 
       0x5, 0xb8, 0x5d, 0x2, 0x1fa, 0x1fb, 0x7, 0xb, 0x2, 0x2, 0x1fb, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x7, 0x23, 0x2, 0x2, 0x1fd, 0x1fe, 
       0x5, 0xb8, 0x5d, 0x2, 0x1fe, 0x1ff, 0x7, 0xb, 0x2, 0x2, 0x1ff, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x200, 0x201, 0x7, 0x23, 0x2, 0x2, 0x201, 0x202, 
       0x7, 0x19, 0x2, 0x2, 0x202, 0x203, 0x7, 0x24, 0x2, 0x2, 0x203, 0x204, 
       0x7, 0x4, 0x2, 0x2, 0x204, 0x212, 0x7, 0xb, 0x2, 0x2, 0x205, 0x206, 
       0x7, 0x23, 0x2, 0x2, 0x206, 0x207, 0x7, 0x31, 0x2, 0x2, 0x207, 0x208, 
       0x7, 0xc8, 0x2, 0x2, 0x208, 0x209, 0x7, 0x25, 0x2, 0x2, 0x209, 0x20a, 
       0x7, 0x29, 0x2, 0x2, 0x20a, 0x20b, 0x7, 0x19, 0x2, 0x2, 0x20b, 0x20c, 
       0x5, 0xb8, 0x5d, 0x2, 0x20c, 0x20d, 0x7, 0xb, 0x2, 0x2, 0x20d, 0x20e, 
       0x7, 0x26, 0x2, 0x2, 0x20e, 0x20f, 0x7, 0x27, 0x2, 0x2, 0x20f, 0x210, 
       0x7, 0x28, 0x2, 0x2, 0x210, 0x212, 0x3, 0x2, 0x2, 0x2, 0x211, 0x16f, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x179, 0x3, 0x2, 0x2, 0x2, 0x211, 0x182, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x211, 0x192, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x211, 0x1a5, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x211, 0x1b4, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x1bc, 0x3, 0x2, 0x2, 0x2, 0x211, 0x1c8, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x211, 0x1d2, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x211, 0x1ed, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x211, 0x1fc, 
       0x3, 0x2, 0x2, 0x2, 0x211, 0x200, 0x3, 0x2, 0x2, 0x2, 0x211, 0x205, 
       0x3, 0x2, 0x2, 0x2, 0x212, 0xb, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 
       0x7, 0x2e, 0x2, 0x2, 0x214, 0x215, 0x7, 0x4, 0x2, 0x2, 0x215, 0x216, 
       0x7, 0x2f, 0x2, 0x2, 0x216, 0x217, 0x7, 0x30, 0x2, 0x2, 0x217, 0x218, 
       0x7, 0x19, 0x2, 0x2, 0x218, 0x235, 0x7, 0x28, 0x2, 0x2, 0x219, 0x21a, 
       0x7, 0x2e, 0x2, 0x2, 0x21a, 0x21b, 0x7, 0x4, 0x2, 0x2, 0x21b, 0x235, 
       0x7, 0x2f, 0x2, 0x2, 0x21c, 0x21d, 0x7, 0x2e, 0x2, 0x2, 0x21d, 0x21e, 
       0x7, 0x4, 0x2, 0x2, 0x21e, 0x21f, 0x7, 0x2f, 0x2, 0x2, 0x21f, 0x220, 
       0x7, 0x6, 0x2, 0x2, 0x220, 0x221, 0x7, 0xa, 0x2, 0x2, 0x221, 0x235, 
       0x7, 0xb, 0x2, 0x2, 0x222, 0x223, 0x7, 0x2e, 0x2, 0x2, 0x223, 0x224, 
       0x7, 0x4, 0x2, 0x2, 0x224, 0x225, 0x7, 0x2f, 0x2, 0x2, 0x225, 0x226, 
       0x7, 0x6, 0x2, 0x2, 0x226, 0x235, 0x7, 0x7, 0x2, 0x2, 0x227, 0x228, 
       0x7, 0x2e, 0x2, 0x2, 0x228, 0x229, 0x7, 0x31, 0x2, 0x2, 0x229, 0x22a, 
       0x7, 0x5, 0x2, 0x2, 0x22a, 0x235, 0x7, 0x2f, 0x2, 0x2, 0x22b, 0x22c, 
       0x7, 0x2e, 0x2, 0x2, 0x22c, 0x235, 0x7, 0xcc, 0x2, 0x2, 0x22d, 0x22e, 
       0x7, 0x2e, 0x2, 0x2, 0x22e, 0x22f, 0x7, 0x29, 0x2, 0x2, 0x22f, 0x230, 
       0x7, 0x19, 0x2, 0x2, 0x230, 0x231, 0x5, 0xb8, 0x5d, 0x2, 0x231, 0x232, 
       0x7, 0x4, 0x2, 0x2, 0x232, 0x233, 0x7, 0x2f, 0x2, 0x2, 0x233, 0x235, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x213, 0x3, 0x2, 0x2, 0x2, 0x234, 0x219, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x234, 0x222, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x227, 0x3, 0x2, 0x2, 0x2, 0x234, 0x22b, 
       0x3, 0x2, 0x2, 0x2, 0x234, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x235, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x32, 0x2, 0x2, 0x237, 0x238, 
       0x5, 0xb8, 0x5d, 0x2, 0x238, 0x239, 0x7, 0x33, 0x2, 0x2, 0x239, 0x23a, 
       0x7, 0x19, 0x2, 0x2, 0x23a, 0x23b, 0x7, 0x4, 0x2, 0x2, 0x23b, 0x23c, 
       0x7, 0x5, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x6, 0x2, 0x2, 0x23d, 0x23e, 
       0x7, 0xa, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0xb, 0x2, 0x2, 0x23f, 0x2e0, 
       0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x7, 0x32, 0x2, 0x2, 0x241, 0x242, 
       0x5, 0xb8, 0x5d, 0x2, 0x242, 0x243, 0x7, 0x33, 0x2, 0x2, 0x243, 0x244, 
       0x7, 0x19, 0x2, 0x2, 0x244, 0x245, 0x7, 0x4, 0x2, 0x2, 0x245, 0x246, 
       0x7, 0x5, 0x2, 0x2, 0x246, 0x247, 0x7, 0x1d, 0x2, 0x2, 0x247, 0x248, 
       0x7, 0x7, 0x2, 0x2, 0x248, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 
       0x7, 0x32, 0x2, 0x2, 0x24a, 0x24b, 0x5, 0xb8, 0x5d, 0x2, 0x24b, 0x24c, 
       0x7, 0x33, 0x2, 0x2, 0x24c, 0x24d, 0x7, 0x19, 0x2, 0x2, 0x24d, 0x24e, 
       0x7, 0x4, 0x2, 0x2, 0x24e, 0x24f, 0x7, 0x5, 0x2, 0x2, 0x24f, 0x2e0, 
       0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x7, 0x32, 0x2, 0x2, 0x251, 0x252, 
       0x7, 0x33, 0x2, 0x2, 0x252, 0x253, 0x7, 0x19, 0x2, 0x2, 0x253, 0x254, 
       0x7, 0x8, 0x2, 0x2, 0x254, 0x255, 0x7, 0x34, 0x2, 0x2, 0x255, 0x256, 
       0x7, 0x19, 0x2, 0x2, 0x256, 0x257, 0x7, 0xe, 0x2, 0x2, 0x257, 0x258, 
       0x7, 0x35, 0x2, 0x2, 0x258, 0x259, 0x7, 0x13, 0x2, 0x2, 0x259, 0x25a, 
       0x7, 0x36, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x2f, 0x2, 0x2, 0x25b, 0x25c, 
       0x7, 0x6, 0x2, 0x2, 0x25c, 0x25d, 0x7, 0x37, 0x2, 0x2, 0x25d, 0x2e0, 
       0x7, 0x38, 0x2, 0x2, 0x25e, 0x25f, 0x7, 0x32, 0x2, 0x2, 0x25f, 0x260, 
       0x5, 0xb8, 0x5d, 0x2, 0x260, 0x261, 0x7, 0x33, 0x2, 0x2, 0x261, 0x262, 
       0x7, 0x19, 0x2, 0x2, 0x262, 0x263, 0x7, 0x4, 0x2, 0x2, 0x263, 0x264, 
       0x7, 0x5, 0x2, 0x2, 0x264, 0x265, 0x7, 0x39, 0x2, 0x2, 0x265, 0x266, 
       0x7, 0x33, 0x2, 0x2, 0x266, 0x267, 0x7, 0x34, 0x2, 0x2, 0x267, 0x268, 
       0x7, 0x19, 0x2, 0x2, 0x268, 0x269, 0x7, 0x17, 0x2, 0x2, 0x269, 0x26a, 
       0x7, 0x3a, 0x2, 0x2, 0x26a, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 
       0x7, 0x32, 0x2, 0x2, 0x26c, 0x26d, 0x5, 0xb8, 0x5d, 0x2, 0x26d, 0x26e, 
       0x7, 0x33, 0x2, 0x2, 0x26e, 0x26f, 0x7, 0x19, 0x2, 0x2, 0x26f, 0x270, 
       0x7, 0x8, 0x2, 0x2, 0x270, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 
       0x7, 0x32, 0x2, 0x2, 0x272, 0x273, 0x5, 0xb8, 0x5d, 0x2, 0x273, 0x274, 
       0x7, 0x33, 0x2, 0x2, 0x274, 0x275, 0x7, 0x19, 0x2, 0x2, 0x275, 0x276, 
       0x7, 0xc, 0x2, 0x2, 0x276, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x277, 0x278, 
       0x7, 0x32, 0x2, 0x2, 0x278, 0x279, 0x5, 0xb8, 0x5d, 0x2, 0x279, 0x27a, 
       0x7, 0x33, 0x2, 0x2, 0x27a, 0x27b, 0x7, 0x19, 0x2, 0x2, 0x27b, 0x2e0, 
       0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x7, 0x32, 0x2, 0x2, 0x27d, 0x27e, 
       0x7, 0x33, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0x19, 0x2, 0x2, 0x27f, 0x2e0, 
       0x7, 0x8, 0x2, 0x2, 0x280, 0x281, 0x7, 0x32, 0x2, 0x2, 0x281, 0x282, 
       0x5, 0xb8, 0x5d, 0x2, 0x282, 0x283, 0x7, 0x33, 0x2, 0x2, 0x283, 0x284, 
       0x7, 0x19, 0x2, 0x2, 0x284, 0x285, 0x7, 0x1c, 0x2, 0x2, 0x285, 0x286, 
       0x7, 0x5, 0x2, 0x2, 0x286, 0x287, 0x7, 0x1d, 0x2, 0x2, 0x287, 0x288, 
       0x7, 0xcc, 0x2, 0x2, 0x288, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 
       0x7, 0x32, 0x2, 0x2, 0x28a, 0x28b, 0x5, 0xb8, 0x5d, 0x2, 0x28b, 0x28c, 
       0x7, 0x11, 0x2, 0x2, 0x28c, 0x28d, 0x7, 0x33, 0x2, 0x2, 0x28d, 0x28e, 
       0x7, 0x19, 0x2, 0x2, 0x28e, 0x28f, 0x7, 0x8, 0x2, 0x2, 0x28f, 0x2e0, 
       0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x7, 0x32, 0x2, 0x2, 0x291, 0x292, 
       0x5, 0xb8, 0x5d, 0x2, 0x292, 0x293, 0x7, 0x33, 0x2, 0x2, 0x293, 0x294, 
       0x7, 0x19, 0x2, 0x2, 0x294, 0x295, 0x7, 0x8, 0x2, 0x2, 0x295, 0x296, 
       0x7, 0x39, 0x2, 0x2, 0x296, 0x297, 0x5, 0xb8, 0x5d, 0x2, 0x297, 0x298, 
       0x7, 0x11, 0x2, 0x2, 0x298, 0x299, 0x7, 0x33, 0x2, 0x2, 0x299, 0x29a, 
       0x7, 0x3b, 0x2, 0x2, 0x29a, 0x29b, 0x7, 0x1c, 0x2, 0x2, 0x29b, 0x29c, 
       0x7, 0x36, 0x2, 0x2, 0x29c, 0x29d, 0x7, 0x2f, 0x2, 0x2, 0x29d, 0x29e, 
       0x7, 0x6, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x37, 0x2, 0x2, 0x29f, 0x2a0, 
       0x7, 0x38, 0x2, 0x2, 0x2a0, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 
       0x7, 0x32, 0x2, 0x2, 0x2a2, 0x2a3, 0x5, 0xb8, 0x5d, 0x2, 0x2a3, 0x2a4, 
       0x7, 0x33, 0x2, 0x2, 0x2a4, 0x2a5, 0x7, 0x19, 0x2, 0x2, 0x2a5, 0x2a6, 
       0x7, 0x4, 0x2, 0x2, 0x2a6, 0x2a7, 0x7, 0x5, 0x2, 0x2, 0x2a7, 0x2a8, 
       0x7, 0x39, 0x2, 0x2, 0x2a8, 0x2a9, 0x5, 0xb8, 0x5d, 0x2, 0x2a9, 0x2aa, 
       0x7, 0x11, 0x2, 0x2, 0x2aa, 0x2ab, 0x7, 0x33, 0x2, 0x2, 0x2ab, 0x2ac, 
       0x7, 0x3b, 0x2, 0x2, 0x2ac, 0x2ad, 0x7, 0x1c, 0x2, 0x2, 0x2ad, 0x2ae, 
       0x7, 0x36, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x2f, 0x2, 0x2, 0x2af, 0x2b0, 
       0x7, 0x6, 0x2, 0x2, 0x2b0, 0x2b1, 0x7, 0x37, 0x2, 0x2, 0x2b1, 0x2b2, 
       0x7, 0x38, 0x2, 0x2, 0x2b2, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 
       0x7, 0x32, 0x2, 0x2, 0x2b4, 0x2b5, 0x7, 0x33, 0x2, 0x2, 0x2b5, 0x2b6, 
       0x7, 0x19, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x4, 0x2, 0x2, 0x2b7, 0x2b8, 
       0x7, 0x5, 0x2, 0x2, 0x2b8, 0x2b9, 0x7, 0x34, 0x2, 0x2, 0x2b9, 0x2ba, 
       0x7, 0x19, 0x2, 0x2, 0x2ba, 0x2bb, 0x7, 0x17, 0x2, 0x2, 0x2bb, 0x2e0, 
       0x7, 0xd5, 0x2, 0x2, 0x2bc, 0x2bd, 0x7, 0x32, 0x2, 0x2, 0x2bd, 0x2be, 
       0x5, 0xb8, 0x5d, 0x2, 0x2be, 0x2bf, 0x7, 0x33, 0x2, 0x2, 0x2bf, 0x2c0, 
       0x7, 0x19, 0x2, 0x2, 0x2c0, 0x2c1, 0x7, 0x1c, 0x2, 0x2, 0x2c1, 0x2c2, 
       0x7, 0x5, 0x2, 0x2, 0x2c2, 0x2c3, 0x7, 0x6, 0x2, 0x2, 0x2c3, 0x2c4, 
       0x7, 0x7, 0x2, 0x2, 0x2c4, 0x2e0, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 
       0x7, 0x32, 0x2, 0x2, 0x2c6, 0x2c7, 0x7, 0x33, 0x2, 0x2, 0x2c7, 0x2c8, 
       0x7, 0x19, 0x2, 0x2, 0x2c8, 0x2c9, 0x7, 0x8, 0x2, 0x2, 0x2c9, 0x2ca, 
       0x7, 0x34, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x19, 0x2, 0x2, 0x2cb, 0x2cc, 
       0x7, 0xe, 0x2, 0x2, 0x2cc, 0x2cd, 0x7, 0x3c, 0x2, 0x2, 0x2cd, 0x2ce, 
       0x7, 0x1f, 0x2, 0x2, 0x2ce, 0x2cf, 0x7, 0x13, 0x2, 0x2, 0x2cf, 0x2d0, 
       0x7, 0x15, 0x2, 0x2, 0x2d0, 0x2d1, 0x7, 0x21, 0x2, 0x2, 0x2d1, 0x2e0, 
       0x7, 0x8, 0x2, 0x2, 0x2d2, 0x2d3, 0x7, 0x32, 0x2, 0x2, 0x2d3, 0x2d4, 
       0x7, 0x33, 0x2, 0x2, 0x2d4, 0x2d5, 0x7, 0x19, 0x2, 0x2, 0x2d5, 0x2d6, 
       0x7, 0x8, 0x2, 0x2, 0x2d6, 0x2d7, 0x7, 0x34, 0x2, 0x2, 0x2d7, 0x2d8, 
       0x7, 0x19, 0x2, 0x2, 0x2d8, 0x2d9, 0x7, 0xe, 0x2, 0x2, 0x2d9, 0x2da, 
       0x7, 0x35, 0x2, 0x2, 0x2da, 0x2db, 0x7, 0x13, 0x2, 0x2, 0x2db, 0x2dc, 
       0x7, 0x2f, 0x2, 0x2, 0x2dc, 0x2dd, 0x7, 0x6, 0x2, 0x2, 0x2dd, 0x2de, 
       0x7, 0x37, 0x2, 0x2, 0x2de, 0x2e0, 0x7, 0x38, 0x2, 0x2, 0x2df, 0x236, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x240, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x249, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x250, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x25e, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x271, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x277, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x27c, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x280, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x289, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x290, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2a1, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2bc, 
       0x3, 0x2, 0x2, 0x2, 0x2df, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2d2, 
       0x3, 0x2, 0x2, 0x2, 0x2e0, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e2, 
       0x7, 0x3d, 0x2, 0x2, 0x2e2, 0x2e3, 0x7, 0x29, 0x2, 0x2, 0x2e3, 0x2e4, 
       0x7, 0x19, 0x2, 0x2, 0x2e4, 0x2e5, 0x5, 0xb8, 0x5d, 0x2, 0x2e5, 0x2e6, 
       0x7, 0x4, 0x2, 0x2, 0x2e6, 0x2e7, 0x7, 0x2f, 0x2, 0x2, 0x2e7, 0x2e8, 
       0x7, 0x2c, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x3e, 0x2, 0x2, 0x2e9, 0x2ea, 
       0x7, 0xf, 0x2, 0x2, 0x2ea, 0x2eb, 0x7, 0x3f, 0x2, 0x2, 0x2eb, 0x2ec, 
       0x5, 0xb8, 0x5d, 0x2, 0x2ec, 0x2ed, 0x7, 0x41, 0x2, 0x2, 0x2ed, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x2ee, 0x2ef, 0x7, 0x3d, 0x2, 0x2, 0x2ef, 0x2f0, 
       0x7, 0x4, 0x2, 0x2, 0x2f0, 0x2f1, 0x7, 0x2f, 0x2, 0x2, 0x2f1, 0x2f2, 
       0x7, 0x2c, 0x2, 0x2, 0x2f2, 0x2f3, 0x7, 0x3e, 0x2, 0x2, 0x2f3, 0x2f4, 
       0x7, 0xf, 0x2, 0x2, 0x2f4, 0x2f5, 0x7, 0x3f, 0x2, 0x2, 0x2f5, 0x2f6, 
       0x5, 0xb8, 0x5d, 0x2, 0x2f6, 0x2f7, 0x7, 0x41, 0x2, 0x2, 0x2f7, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x2f8, 0x2f9, 0x7, 0x3d, 0x2, 0x2, 0x2f9, 0x2fa, 
       0x7, 0x4, 0x2, 0x2, 0x2fa, 0x2fb, 0x7, 0x2f, 0x2, 0x2, 0x2fb, 0x2fc, 
       0x7, 0x42, 0x2, 0x2, 0x2fc, 0x2fd, 0x7, 0x28, 0x2, 0x2, 0x2fd, 0x2fe, 
       0x7, 0x46, 0x2, 0x2, 0x2fe, 0x2ff, 0x7, 0x14, 0x2, 0x2, 0x2ff, 0x300, 
       0x7, 0x41, 0x2, 0x2, 0x300, 0x301, 0x7, 0x47, 0x2, 0x2, 0x301, 0x302, 
       0x7, 0x13, 0x2, 0x2, 0x302, 0x303, 0x5, 0xb8, 0x5d, 0x2, 0x303, 0x304, 
       0x7, 0x48, 0x2, 0x2, 0x304, 0x305, 0x7, 0x49, 0x2, 0x2, 0x305, 0x306, 
       0x7, 0x2c, 0x2, 0x2, 0x306, 0x307, 0x7, 0x3e, 0x2, 0x2, 0x307, 0x308, 
       0x7, 0xf, 0x2, 0x2, 0x308, 0x309, 0x7, 0x3f, 0x2, 0x2, 0x309, 0x30a, 
       0x5, 0xb8, 0x5d, 0x2, 0x30a, 0x30b, 0x7, 0x41, 0x2, 0x2, 0x30b, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 0x7, 0x3d, 0x2, 0x2, 0x30d, 0x30e, 
       0x7, 0x4, 0x2, 0x2, 0x30e, 0x30f, 0x7, 0x2f, 0x2, 0x2, 0x30f, 0x310, 
       0x7, 0x4a, 0x2, 0x2, 0x310, 0x311, 0x7, 0x22, 0x2, 0x2, 0x311, 0x312, 
       0x7, 0x14, 0x2, 0x2, 0x312, 0x313, 0x7, 0x25, 0x2, 0x2, 0x313, 0x314, 
       0x7, 0x6, 0x2, 0x2, 0x314, 0x315, 0x7, 0x7, 0x2, 0x2, 0x315, 0x316, 
       0x7, 0x2c, 0x2, 0x2, 0x316, 0x317, 0x7, 0x2d, 0x2, 0x2, 0x317, 0x318, 
       0x7, 0x40, 0x2, 0x2, 0x318, 0x319, 0x5, 0xb8, 0x5d, 0x2, 0x319, 0x31a, 
       0x7, 0x41, 0x2, 0x2, 0x31a, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x31b, 0x31c, 
       0x7, 0x3d, 0x2, 0x2, 0x31c, 0x31d, 0x7, 0x4, 0x2, 0x2, 0x31d, 0x31e, 
       0x7, 0x2f, 0x2, 0x2, 0x31e, 0x31f, 0x7, 0x42, 0x2, 0x2, 0x31f, 0x320, 
       0x7, 0x28, 0x2, 0x2, 0x320, 0x321, 0x7, 0x2c, 0x2, 0x2, 0x321, 0x322, 
       0x7, 0x3e, 0x2, 0x2, 0x322, 0x323, 0x7, 0xf, 0x2, 0x2, 0x323, 0x324, 
       0x7, 0x3f, 0x2, 0x2, 0x324, 0x325, 0x5, 0xb8, 0x5d, 0x2, 0x325, 0x326, 
       0x7, 0x41, 0x2, 0x2, 0x326, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 
       0x7, 0x3d, 0x2, 0x2, 0x328, 0x329, 0x7, 0x4, 0x2, 0x2, 0x329, 0x32a, 
       0x7, 0x4b, 0x2, 0x2, 0x32a, 0x32b, 0x7, 0x4c, 0x2, 0x2, 0x32b, 0x32c, 
       0x7, 0x2f, 0x2, 0x2, 0x32c, 0x32d, 0x7, 0x2c, 0x2, 0x2, 0x32d, 0x32e, 
       0x7, 0x3e, 0x2, 0x2, 0x32e, 0x32f, 0x7, 0xf, 0x2, 0x2, 0x32f, 0x330, 
       0x7, 0x3f, 0x2, 0x2, 0x330, 0x331, 0x5, 0xb8, 0x5d, 0x2, 0x331, 0x332, 
       0x7, 0x41, 0x2, 0x2, 0x332, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x333, 0x334, 
       0x7, 0x3d, 0x2, 0x2, 0x334, 0x335, 0x7, 0x4, 0x2, 0x2, 0x335, 0x336, 
       0x7, 0x4c, 0x2, 0x2, 0x336, 0x337, 0x7, 0x2f, 0x2, 0x2, 0x337, 0x338, 
       0x7, 0x42, 0x2, 0x2, 0x338, 0x339, 0x7, 0x28, 0x2, 0x2, 0x339, 0x33a, 
       0x7, 0x2c, 0x2, 0x2, 0x33a, 0x33b, 0x7, 0x3e, 0x2, 0x2, 0x33b, 0x33c, 
       0x7, 0xf, 0x2, 0x2, 0x33c, 0x33d, 0x7, 0x3f, 0x2, 0x2, 0x33d, 0x33e, 
       0x5, 0xb8, 0x5d, 0x2, 0x33e, 0x33f, 0x7, 0x41, 0x2, 0x2, 0x33f, 0x34c, 
       0x3, 0x2, 0x2, 0x2, 0x340, 0x341, 0x7, 0x3d, 0x2, 0x2, 0x341, 0x342, 
       0x7, 0x4, 0x2, 0x2, 0x342, 0x343, 0x7, 0x4d, 0x2, 0x2, 0x343, 0x344, 
       0x7, 0x2f, 0x2, 0x2, 0x344, 0x345, 0x7, 0x2c, 0x2, 0x2, 0x345, 0x346, 
       0x7, 0x3e, 0x2, 0x2, 0x346, 0x347, 0x7, 0xf, 0x2, 0x2, 0x347, 0x348, 
       0x7, 0x3f, 0x2, 0x2, 0x348, 0x349, 0x5, 0xb8, 0x5d, 0x2, 0x349, 0x34a, 
       0x7, 0x41, 0x2, 0x2, 0x34a, 0x34c, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x2e1, 
       0x3, 0x2, 0x2, 0x2, 0x34b, 0x2ee, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x2f8, 
       0x3, 0x2, 0x2, 0x2, 0x34b, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x31b, 
       0x3, 0x2, 0x2, 0x2, 0x34b, 0x327, 0x3, 0x2, 0x2, 0x2, 0x34b, 0x333, 
       0x3, 0x2, 0x2, 0x2, 0x34b, 0x340, 0x3, 0x2, 0x2, 0x2, 0x34c, 0x11, 
       0x3, 0x2, 0x2, 0x2, 0x34d, 0x34e, 0x5, 0x10, 0x9, 0x2, 0x34e, 0x34f, 
       0x7, 0xd2, 0x2, 0x2, 0x34f, 0x350, 0x7, 0x4e, 0x2, 0x2, 0x350, 0x351, 
       0x7, 0xa, 0x2, 0x2, 0x351, 0x352, 0x7, 0x2f, 0x2, 0x2, 0x352, 0x353, 
       0x7, 0x4f, 0x2, 0x2, 0x353, 0x354, 0x7, 0x51, 0x2, 0x2, 0x354, 0x355, 
       0x7, 0xd1, 0x2, 0x2, 0x355, 0x356, 0x5, 0xca, 0x66, 0x2, 0x356, 0x359, 
       0x3, 0x2, 0x2, 0x2, 0x357, 0x359, 0x5, 0x10, 0x9, 0x2, 0x358, 0x34d, 
       0x3, 0x2, 0x2, 0x2, 0x358, 0x357, 0x3, 0x2, 0x2, 0x2, 0x359, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x35a, 0x35b, 0x7, 0x40, 0x2, 0x2, 0x35b, 0x35c, 
       0x5, 0xb8, 0x5d, 0x2, 0x35c, 0x35d, 0x7, 0x41, 0x2, 0x2, 0x35d, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x35e, 0x35f, 0x7, 0x53, 0x2, 0x2, 0x35f, 0x360, 
       0x7, 0x19, 0x2, 0x2, 0x360, 0x361, 0x7, 0x4, 0x2, 0x2, 0x361, 0x3c1, 
       0x7, 0x25, 0x2, 0x2, 0x362, 0x363, 0x7, 0x53, 0x2, 0x2, 0x363, 0x364, 
       0x7, 0x19, 0x2, 0x2, 0x364, 0x365, 0x7, 0x4, 0x2, 0x2, 0x365, 0x3c1, 
       0x7, 0x5, 0x2, 0x2, 0x366, 0x367, 0x7, 0x53, 0x2, 0x2, 0x367, 0x368, 
       0x7, 0x19, 0x2, 0x2, 0x368, 0x3c1, 0x7, 0xc, 0x2, 0x2, 0x369, 0x36a, 
       0x7, 0x53, 0x2, 0x2, 0x36a, 0x36b, 0x7, 0x19, 0x2, 0x2, 0x36b, 0x36c, 
       0x7, 0x4, 0x2, 0x2, 0x36c, 0x36d, 0x7, 0x54, 0x2, 0x2, 0x36d, 0x3c1, 
       0x7, 0xb, 0x2, 0x2, 0x36e, 0x36f, 0x7, 0x53, 0x2, 0x2, 0x36f, 0x370, 
       0x7, 0x19, 0x2, 0x2, 0x370, 0x371, 0x7, 0x4, 0x2, 0x2, 0x371, 0x372, 
       0x7, 0x54, 0x2, 0x2, 0x372, 0x373, 0x7, 0xb, 0x2, 0x2, 0x373, 0x374, 
       0x7, 0x93, 0x2, 0x2, 0x374, 0x375, 0x7, 0x94, 0x2, 0x2, 0x375, 0x376, 
       0x5, 0xb8, 0x5d, 0x2, 0x376, 0x377, 0x7, 0xb, 0x2, 0x2, 0x377, 0x378, 
       0x7, 0x26, 0x2, 0x2, 0x378, 0x379, 0x7, 0x27, 0x2, 0x2, 0x379, 0x37a, 
       0x7, 0x28, 0x2, 0x2, 0x37a, 0x3c1, 0x3, 0x2, 0x2, 0x2, 0x37b, 0x37c, 
       0x7, 0x53, 0x2, 0x2, 0x37c, 0x37d, 0x7, 0x19, 0x2, 0x2, 0x37d, 0x37e, 
       0x7, 0x4, 0x2, 0x2, 0x37e, 0x37f, 0x7, 0x54, 0x2, 0x2, 0x37f, 0x380, 
       0x7, 0xb, 0x2, 0x2, 0x380, 0x381, 0x7, 0x1d, 0x2, 0x2, 0x381, 0x3c1, 
       0x7, 0x7, 0x2, 0x2, 0x382, 0x383, 0x7, 0x53, 0x2, 0x2, 0x383, 0x384, 
       0x7, 0x19, 0x2, 0x2, 0x384, 0x385, 0x7, 0x4, 0x2, 0x2, 0x385, 0x386, 
       0x7, 0x54, 0x2, 0x2, 0x386, 0x387, 0x7, 0xb, 0x2, 0x2, 0x387, 0x388, 
       0x7, 0x55, 0x2, 0x2, 0x388, 0x389, 0x7, 0x56, 0x2, 0x2, 0x389, 0x38a, 
       0x7, 0x13, 0x2, 0x2, 0x38a, 0x3c1, 0x7, 0x57, 0x2, 0x2, 0x38b, 0x38c, 
       0x7, 0x53, 0x2, 0x2, 0x38c, 0x38d, 0x7, 0x19, 0x2, 0x2, 0x38d, 0x38e, 
       0x7, 0x4, 0x2, 0x2, 0x38e, 0x38f, 0x7, 0x5, 0x2, 0x2, 0x38f, 0x390, 
       0x7, 0x55, 0x2, 0x2, 0x390, 0x391, 0x7, 0xe, 0x2, 0x2, 0x391, 0x392, 
       0x7, 0x59, 0x2, 0x2, 0x392, 0x393, 0x7, 0x13, 0x2, 0x2, 0x393, 0x394, 
       0x7, 0x17, 0x2, 0x2, 0x394, 0x395, 0x7, 0x2b, 0x2, 0x2, 0x395, 0x3c1, 
       0x7, 0x57, 0x2, 0x2, 0x396, 0x397, 0x7, 0x53, 0x2, 0x2, 0x397, 0x398, 
       0x7, 0x19, 0x2, 0x2, 0x398, 0x399, 0x7, 0xc, 0x2, 0x2, 0x399, 0x39a, 
       0x7, 0x55, 0x2, 0x2, 0x39a, 0x39b, 0x7, 0xe, 0x2, 0x2, 0x39b, 0x39c, 
       0x7, 0x56, 0x2, 0x2, 0x39c, 0x39d, 0x7, 0x13, 0x2, 0x2, 0x39d, 0x39e, 
       0x7, 0xe, 0x2, 0x2, 0x39e, 0x3c1, 0x7, 0x57, 0x2, 0x2, 0x39f, 0x3a0, 
       0x7, 0x53, 0x2, 0x2, 0x3a0, 0x3a1, 0x7, 0x19, 0x2, 0x2, 0x3a1, 0x3a2, 
       0x7, 0xc, 0x2, 0x2, 0x3a2, 0x3a3, 0x7, 0x55, 0x2, 0x2, 0x3a3, 0x3a4, 
       0x7, 0xe, 0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x56, 0x2, 0x2, 0x3a5, 0x3a6, 
       0x7, 0x13, 0x2, 0x2, 0x3a6, 0x3c1, 0x7, 0x57, 0x2, 0x2, 0x3a7, 0x3a8, 
       0x7, 0x53, 0x2, 0x2, 0x3a8, 0x3a9, 0x7, 0x19, 0x2, 0x2, 0x3a9, 0x3aa, 
       0x7, 0xc, 0x2, 0x2, 0x3aa, 0x3ab, 0x7, 0x55, 0x2, 0x2, 0x3ab, 0x3ac, 
       0x7, 0x56, 0x2, 0x2, 0x3ac, 0x3ad, 0x7, 0x13, 0x2, 0x2, 0x3ad, 0x3c1, 
       0x7, 0x57, 0x2, 0x2, 0x3ae, 0x3af, 0x7, 0x53, 0x2, 0x2, 0x3af, 0x3b0, 
       0x7, 0x19, 0x2, 0x2, 0x3b0, 0x3b1, 0x7, 0xc, 0x2, 0x2, 0x3b1, 0x3b2, 
       0x7, 0x55, 0x2, 0x2, 0x3b2, 0x3b3, 0x7, 0xe, 0x2, 0x2, 0x3b3, 0x3b4, 
       0x7, 0x59, 0x2, 0x2, 0x3b4, 0x3b5, 0x7, 0x13, 0x2, 0x2, 0x3b5, 0x3b6, 
       0x7, 0x17, 0x2, 0x2, 0x3b6, 0x3b7, 0x7, 0x2b, 0x2, 0x2, 0x3b7, 0x3c1, 
       0x7, 0x57, 0x2, 0x2, 0x3b8, 0x3b9, 0x7, 0x53, 0x2, 0x2, 0x3b9, 0x3ba, 
       0x7, 0xcc, 0x2, 0x2, 0x3ba, 0x3bb, 0x7, 0x19, 0x2, 0x2, 0x3bb, 0x3c1, 
       0x7, 0x8, 0x2, 0x2, 0x3bc, 0x3bd, 0x7, 0x53, 0x2, 0x2, 0x3bd, 0x3be, 
       0x7, 0xcc, 0x2, 0x2, 0x3be, 0x3bf, 0x7, 0x19, 0x2, 0x2, 0x3bf, 0x3c1, 
       0x7, 0xc, 0x2, 0x2, 0x3c0, 0x35e, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x362, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x366, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x369, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x36e, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x37b, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x382, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x38b, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x396, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x39f, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3a7, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3ae, 
       0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3bc, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x17, 0x3, 0x2, 0x2, 0x2, 0x3c2, 0x3c3, 
       0x7, 0x2d, 0x2, 0x2, 0x3c3, 0x3c4, 0x7, 0x5a, 0x2, 0x2, 0x3c4, 0x3c5, 
       0x5, 0xb8, 0x5d, 0x2, 0x3c5, 0x3c6, 0x7, 0xd5, 0x2, 0x2, 0x3c6, 0x3db, 
       0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3c8, 0x7, 0x5a, 0x2, 0x2, 0x3c8, 0x3c9, 
       0x5, 0xb8, 0x5d, 0x2, 0x3c9, 0x3ca, 0x7, 0x11, 0x2, 0x2, 0x3ca, 0x3cb, 
       0x7, 0xd5, 0x2, 0x2, 0x3cb, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3cc, 0x3cd, 
       0x7, 0x5a, 0x2, 0x2, 0x3cd, 0x3ce, 0x5, 0xb8, 0x5d, 0x2, 0x3ce, 0x3cf, 
       0x7, 0x5b, 0x2, 0x2, 0x3cf, 0x3d0, 0x7, 0xd5, 0x2, 0x2, 0x3d0, 0x3db, 
       0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x7, 0x5a, 0x2, 0x2, 0x3d2, 0x3d3, 
       0x5, 0xb8, 0x5d, 0x2, 0x3d3, 0x3d4, 0x7, 0xd5, 0x2, 0x2, 0x3d4, 0x3db, 
       0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3d6, 0x7, 0x5a, 0x2, 0x2, 0x3d6, 0x3d7, 
       0x5, 0xb8, 0x5d, 0x2, 0x3d7, 0x3d8, 0x7, 0x11, 0x2, 0x2, 0x3d8, 0x3d9, 
       0x7, 0xd5, 0x2, 0x2, 0x3d9, 0x3db, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3c2, 
       0x3, 0x2, 0x2, 0x2, 0x3da, 0x3c7, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3cc, 
       0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d1, 0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d5, 
       0x3, 0x2, 0x2, 0x2, 0x3db, 0x19, 0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3dd, 
       0x7, 0x2d, 0x2, 0x2, 0x3dd, 0x3de, 0x7, 0x5a, 0x2, 0x2, 0x3de, 0x3df, 
       0x5, 0xb8, 0x5d, 0x2, 0x3df, 0x3e0, 0x7, 0xd6, 0x2, 0x2, 0x3e0, 0x3f5, 
       0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e2, 0x7, 0x5a, 0x2, 0x2, 0x3e2, 0x3e3, 
       0x5, 0xb8, 0x5d, 0x2, 0x3e3, 0x3e4, 0x7, 0x11, 0x2, 0x2, 0x3e4, 0x3e5, 
       0x7, 0xd6, 0x2, 0x2, 0x3e5, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e7, 
       0x7, 0x5a, 0x2, 0x2, 0x3e7, 0x3e8, 0x5, 0xb8, 0x5d, 0x2, 0x3e8, 0x3e9, 
       0x7, 0x5b, 0x2, 0x2, 0x3e9, 0x3ea, 0x7, 0xd6, 0x2, 0x2, 0x3ea, 0x3f5, 
       0x3, 0x2, 0x2, 0x2, 0x3eb, 0x3ec, 0x7, 0x5a, 0x2, 0x2, 0x3ec, 0x3ed, 
       0x5, 0xb8, 0x5d, 0x2, 0x3ed, 0x3ee, 0x7, 0xd6, 0x2, 0x2, 0x3ee, 0x3f5, 
       0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f0, 0x7, 0x5a, 0x2, 0x2, 0x3f0, 0x3f1, 
       0x5, 0xb8, 0x5d, 0x2, 0x3f1, 0x3f2, 0x7, 0x11, 0x2, 0x2, 0x3f2, 0x3f3, 
       0x7, 0xd6, 0x2, 0x2, 0x3f3, 0x3f5, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3dc, 
       0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3e1, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3e6, 
       0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3eb, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3ef, 
       0x3, 0x2, 0x2, 0x2, 0x3f5, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f8, 
       0x7, 0x5a, 0x2, 0x2, 0x3f7, 0x3f9, 0x7, 0xd7, 0x2, 0x2, 0x3f8, 0x3f7, 
       0x3, 0x2, 0x2, 0x2, 0x3f9, 0x3fa, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3f8, 
       0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 0x3, 0x2, 0x2, 0x2, 0x3fb, 0x40b, 
       0x3, 0x2, 0x2, 0x2, 0x3fc, 0x3fd, 0x7, 0x2d, 0x2, 0x2, 0x3fd, 0x3ff, 
       0x7, 0x5a, 0x2, 0x2, 0x3fe, 0x400, 0x7, 0xd7, 0x2, 0x2, 0x3ff, 0x3fe, 
       0x3, 0x2, 0x2, 0x2, 0x400, 0x401, 0x3, 0x2, 0x2, 0x2, 0x401, 0x3ff, 
       0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 0x2, 0x2, 0x2, 0x402, 0x40b, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x404, 0x7, 0x5a, 0x2, 0x2, 0x404, 0x406, 
       0x7, 0x24, 0x2, 0x2, 0x405, 0x407, 0x7, 0xd7, 0x2, 0x2, 0x406, 0x405, 
       0x3, 0x2, 0x2, 0x2, 0x407, 0x408, 0x3, 0x2, 0x2, 0x2, 0x408, 0x406, 
       0x3, 0x2, 0x2, 0x2, 0x408, 0x409, 0x3, 0x2, 0x2, 0x2, 0x409, 0x40b, 
       0x3, 0x2, 0x2, 0x2, 0x40a, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0x40a, 0x3fc, 
       0x3, 0x2, 0x2, 0x2, 0x40a, 0x403, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x40c, 0x40d, 0x7, 0x4, 0x2, 0x2, 0x40d, 0x40e, 
       0x7, 0x25, 0x2, 0x2, 0x40e, 0x40f, 0x7, 0x5c, 0x2, 0x2, 0x40f, 0x410, 
       0x7, 0x3a, 0x2, 0x2, 0x410, 0x415, 0x5, 0xb8, 0x5d, 0x2, 0x411, 0x412, 
       0x7, 0x5a, 0x2, 0x2, 0x412, 0x413, 0x7, 0x3a, 0x2, 0x2, 0x413, 0x415, 
       0x5, 0xb8, 0x5d, 0x2, 0x414, 0x40c, 0x3, 0x2, 0x2, 0x2, 0x414, 0x411, 
       0x3, 0x2, 0x2, 0x2, 0x415, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x416, 0x417, 
       0x7, 0x5d, 0x2, 0x2, 0x417, 0x418, 0x7, 0x17, 0x2, 0x2, 0x418, 0x419, 
       0x7, 0x3a, 0x2, 0x2, 0x419, 0x21, 0x3, 0x2, 0x2, 0x2, 0x41a, 0x41b, 
       0x7, 0x5e, 0x2, 0x2, 0x41b, 0x41c, 0x7, 0x17, 0x2, 0x2, 0x41c, 0x41d, 
       0x7, 0x5f, 0x2, 0x2, 0x41d, 0x41e, 0x7, 0x60, 0x2, 0x2, 0x41e, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0x41f, 0x420, 0x7, 0x61, 0x2, 0x2, 0x420, 0x421, 
       0x7, 0x4, 0x2, 0x2, 0x421, 0x422, 0x7, 0x30, 0x2, 0x2, 0x422, 0x423, 
       0x7, 0x2f, 0x2, 0x2, 0x423, 0x424, 0x7, 0x19, 0x2, 0x2, 0x424, 0x425, 
       0x7, 0x3e, 0x2, 0x2, 0x425, 0x426, 0x7, 0x62, 0x2, 0x2, 0x426, 0x48a, 
       0x7, 0x38, 0x2, 0x2, 0x427, 0x428, 0x7, 0x61, 0x2, 0x2, 0x428, 0x429, 
       0x7, 0x4, 0x2, 0x2, 0x429, 0x42a, 0x7, 0x2f, 0x2, 0x2, 0x42a, 0x42b, 
       0x7, 0x46, 0x2, 0x2, 0x42b, 0x42c, 0x7, 0x14, 0x2, 0x2, 0x42c, 0x42d, 
       0x7, 0x41, 0x2, 0x2, 0x42d, 0x42e, 0x7, 0x47, 0x2, 0x2, 0x42e, 0x42f, 
       0x7, 0x13, 0x2, 0x2, 0x42f, 0x430, 0x5, 0xb8, 0x5d, 0x2, 0x430, 0x431, 
       0x7, 0x48, 0x2, 0x2, 0x431, 0x432, 0x7, 0x49, 0x2, 0x2, 0x432, 0x433, 
       0x7, 0x27, 0x2, 0x2, 0x433, 0x434, 0x7, 0x17, 0x2, 0x2, 0x434, 0x435, 
       0x7, 0x63, 0x2, 0x2, 0x435, 0x436, 0x7, 0x19, 0x2, 0x2, 0x436, 0x437, 
       0x7, 0x17, 0x2, 0x2, 0x437, 0x438, 0x7, 0x38, 0x2, 0x2, 0x438, 0x48a, 
       0x3, 0x2, 0x2, 0x2, 0x439, 0x43a, 0x7, 0x61, 0x2, 0x2, 0x43a, 0x43b, 
       0x7, 0x4, 0x2, 0x2, 0x43b, 0x43c, 0x7, 0x4d, 0x2, 0x2, 0x43c, 0x43d, 
       0x7, 0x2f, 0x2, 0x2, 0x43d, 0x43e, 0x7, 0x27, 0x2, 0x2, 0x43e, 0x43f, 
       0x7, 0x17, 0x2, 0x2, 0x43f, 0x440, 0x7, 0x63, 0x2, 0x2, 0x440, 0x441, 
       0x7, 0x19, 0x2, 0x2, 0x441, 0x442, 0x7, 0x17, 0x2, 0x2, 0x442, 0x48a, 
       0x7, 0x38, 0x2, 0x2, 0x443, 0x444, 0x7, 0x28, 0x2, 0x2, 0x444, 0x445, 
       0x7, 0x64, 0x2, 0x2, 0x445, 0x446, 0x7, 0x61, 0x2, 0x2, 0x446, 0x447, 
       0x7, 0x1a, 0x2, 0x2, 0x447, 0x448, 0x7, 0x4c, 0x2, 0x2, 0x448, 0x449, 
       0x7, 0x2f, 0x2, 0x2, 0x449, 0x44a, 0x7, 0x46, 0x2, 0x2, 0x44a, 0x44b, 
       0x7, 0x14, 0x2, 0x2, 0x44b, 0x44c, 0x7, 0x41, 0x2, 0x2, 0x44c, 0x44d, 
       0x7, 0x47, 0x2, 0x2, 0x44d, 0x44e, 0x7, 0x13, 0x2, 0x2, 0x44e, 0x44f, 
       0x5, 0xb8, 0x5d, 0x2, 0x44f, 0x450, 0x7, 0x48, 0x2, 0x2, 0x450, 0x451, 
       0x7, 0x49, 0x2, 0x2, 0x451, 0x452, 0x7, 0x27, 0x2, 0x2, 0x452, 0x453, 
       0x7, 0x17, 0x2, 0x2, 0x453, 0x454, 0x7, 0x63, 0x2, 0x2, 0x454, 0x455, 
       0x7, 0x19, 0x2, 0x2, 0x455, 0x456, 0x7, 0x17, 0x2, 0x2, 0x456, 0x457, 
       0x7, 0x38, 0x2, 0x2, 0x457, 0x48a, 0x3, 0x2, 0x2, 0x2, 0x458, 0x459, 
       0x7, 0x61, 0x2, 0x2, 0x459, 0x45a, 0x7, 0x14, 0x2, 0x2, 0x45a, 0x45b, 
       0x7, 0x2f, 0x2, 0x2, 0x45b, 0x45c, 0x7, 0x27, 0x2, 0x2, 0x45c, 0x45d, 
       0x7, 0x17, 0x2, 0x2, 0x45d, 0x45e, 0x7, 0x63, 0x2, 0x2, 0x45e, 0x45f, 
       0x7, 0x19, 0x2, 0x2, 0x45f, 0x460, 0x7, 0x17, 0x2, 0x2, 0x460, 0x48a, 
       0x7, 0x38, 0x2, 0x2, 0x461, 0x462, 0x7, 0x61, 0x2, 0x2, 0x462, 0x463, 
       0x7, 0x4, 0x2, 0x2, 0x463, 0x464, 0x7, 0x2f, 0x2, 0x2, 0x464, 0x465, 
       0x7, 0x27, 0x2, 0x2, 0x465, 0x466, 0x7, 0x17, 0x2, 0x2, 0x466, 0x467, 
       0x7, 0x63, 0x2, 0x2, 0x467, 0x468, 0x7, 0x19, 0x2, 0x2, 0x468, 0x469, 
       0x7, 0x17, 0x2, 0x2, 0x469, 0x48a, 0x7, 0x38, 0x2, 0x2, 0x46a, 0x46b, 
       0x7, 0x61, 0x2, 0x2, 0x46b, 0x46c, 0x7, 0xcc, 0x2, 0x2, 0x46c, 0x46d, 
       0x7, 0x19, 0x2, 0x2, 0x46d, 0x46e, 0x7, 0x17, 0x2, 0x2, 0x46e, 0x48a, 
       0x7, 0x38, 0x2, 0x2, 0x46f, 0x470, 0x7, 0x61, 0x2, 0x2, 0x470, 0x471, 
       0x7, 0xdb, 0x2, 0x2, 0x471, 0x472, 0x7, 0x27, 0x2, 0x2, 0x472, 0x473, 
       0x7, 0x17, 0x2, 0x2, 0x473, 0x474, 0x7, 0x63, 0x2, 0x2, 0x474, 0x475, 
       0x7, 0x19, 0x2, 0x2, 0x475, 0x476, 0x7, 0x17, 0x2, 0x2, 0x476, 0x48a, 
       0x7, 0x38, 0x2, 0x2, 0x477, 0x478, 0x7, 0x61, 0x2, 0x2, 0x478, 0x479, 
       0x7, 0x4, 0x2, 0x2, 0x479, 0x47a, 0x7, 0x2f, 0x2, 0x2, 0x47a, 0x47b, 
       0x7, 0x46, 0x2, 0x2, 0x47b, 0x47c, 0x7, 0x14, 0x2, 0x2, 0x47c, 0x47d, 
       0x7, 0x41, 0x2, 0x2, 0x47d, 0x47e, 0x7, 0x47, 0x2, 0x2, 0x47e, 0x47f, 
       0x7, 0x13, 0x2, 0x2, 0x47f, 0x480, 0x5, 0xb8, 0x5d, 0x2, 0x480, 0x481, 
       0x7, 0x48, 0x2, 0x2, 0x481, 0x482, 0x7, 0x11, 0x2, 0x2, 0x482, 0x483, 
       0x7, 0x27, 0x2, 0x2, 0x483, 0x484, 0x7, 0x17, 0x2, 0x2, 0x484, 0x485, 
       0x7, 0x63, 0x2, 0x2, 0x485, 0x486, 0x7, 0x19, 0x2, 0x2, 0x486, 0x487, 
       0x7, 0x17, 0x2, 0x2, 0x487, 0x488, 0x7, 0x38, 0x2, 0x2, 0x488, 0x48a, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x41f, 0x3, 0x2, 0x2, 0x2, 0x489, 0x427, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x439, 0x3, 0x2, 0x2, 0x2, 0x489, 0x443, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x458, 0x3, 0x2, 0x2, 0x2, 0x489, 0x461, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x46a, 0x3, 0x2, 0x2, 0x2, 0x489, 0x46f, 
       0x3, 0x2, 0x2, 0x2, 0x489, 0x477, 0x3, 0x2, 0x2, 0x2, 0x48a, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x48b, 0x48c, 0x7, 0x65, 0x2, 0x2, 0x48c, 0x48d, 
       0x7, 0xe, 0x2, 0x2, 0x48d, 0x48e, 0x7, 0x66, 0x2, 0x2, 0x48e, 0x48f, 
       0x7, 0x2f, 0x2, 0x2, 0x48f, 0x490, 0x7, 0x13, 0x2, 0x2, 0x490, 0x491, 
       0x7, 0x17, 0x2, 0x2, 0x491, 0x492, 0x7, 0x67, 0x2, 0x2, 0x492, 0x493, 
       0x7, 0x68, 0x2, 0x2, 0x493, 0x494, 0x7, 0x17, 0x2, 0x2, 0x494, 0x495, 
       0x7, 0x38, 0x2, 0x2, 0x495, 0x27, 0x3, 0x2, 0x2, 0x2, 0x496, 0x497, 
       0x7, 0x69, 0x2, 0x2, 0x497, 0x498, 0x7, 0x17, 0x2, 0x2, 0x498, 0x499, 
       0x7, 0x6a, 0x2, 0x2, 0x499, 0x49a, 0x7, 0x6b, 0x2, 0x2, 0x49a, 0x49b, 
       0x7, 0x6c, 0x2, 0x2, 0x49b, 0x49c, 0x7, 0x6d, 0x2, 0x2, 0x49c, 0x49d, 
       0x7, 0x17, 0x2, 0x2, 0x49d, 0x49e, 0x7, 0x57, 0x2, 0x2, 0x49e, 0x49f, 
       0x7, 0x6e, 0x2, 0x2, 0x49f, 0x4a0, 0x7, 0x6f, 0x2, 0x2, 0x4a0, 0x4a1, 
       0x7, 0x70, 0x2, 0x2, 0x4a1, 0x29, 0x3, 0x2, 0x2, 0x2, 0x4a2, 0x4a3, 
       0x7, 0x4, 0x2, 0x2, 0x4a3, 0x4a4, 0x7, 0x25, 0x2, 0x2, 0x4a4, 0x4a5, 
       0x7, 0x64, 0x2, 0x2, 0x4a5, 0x4a6, 0x7, 0x71, 0x2, 0x2, 0x4a6, 0x4a7, 
       0x7, 0x14, 0x2, 0x2, 0x4a7, 0x532, 0x7, 0x2f, 0x2, 0x2, 0x4a8, 0x4a9, 
       0x7, 0x4, 0x2, 0x2, 0x4a9, 0x4aa, 0x7, 0x25, 0x2, 0x2, 0x4aa, 0x4ab, 
       0x7, 0x64, 0x2, 0x2, 0x4ab, 0x4ac, 0x7, 0x71, 0x2, 0x2, 0x4ac, 0x4ad, 
       0x7, 0x14, 0x2, 0x2, 0x4ad, 0x4ae, 0x7, 0x2f, 0x2, 0x2, 0x4ae, 0x4af, 
       0x7, 0x3b, 0x2, 0x2, 0x4af, 0x4b0, 0x5, 0xb8, 0x5d, 0x2, 0x4b0, 0x4b1, 
       0x7, 0x49, 0x2, 0x2, 0x4b1, 0x4b2, 0x7, 0x41, 0x2, 0x2, 0x4b2, 0x532, 
       0x3, 0x2, 0x2, 0x2, 0x4b3, 0x4b4, 0x7, 0x71, 0x2, 0x2, 0x4b4, 0x4b5, 
       0x7, 0x14, 0x2, 0x2, 0x4b5, 0x4b6, 0x7, 0x2f, 0x2, 0x2, 0x4b6, 0x4b7, 
       0x7, 0x3b, 0x2, 0x2, 0x4b7, 0x532, 0x7, 0x72, 0x2, 0x2, 0x4b8, 0x4b9, 
       0x7, 0x71, 0x2, 0x2, 0x4b9, 0x4ba, 0x7, 0xa, 0x2, 0x2, 0x4ba, 0x4bb, 
       0x7, 0x2f, 0x2, 0x2, 0x4bb, 0x4bc, 0x7, 0x3b, 0x2, 0x2, 0x4bc, 0x532, 
       0x7, 0x72, 0x2, 0x2, 0x4bd, 0x4be, 0x7, 0x71, 0x2, 0x2, 0x4be, 0x4bf, 
       0x7, 0x4, 0x2, 0x2, 0x4bf, 0x4c0, 0x7, 0x4b, 0x2, 0x2, 0x4c0, 0x4c1, 
       0x7, 0x4c, 0x2, 0x2, 0x4c1, 0x4c2, 0x7, 0x2f, 0x2, 0x2, 0x4c2, 0x4c3, 
       0x7, 0x27, 0x2, 0x2, 0x4c3, 0x4c4, 0x7, 0x17, 0x2, 0x2, 0x4c4, 0x4c5, 
       0x7, 0x63, 0x2, 0x2, 0x4c5, 0x4c6, 0x7, 0x42, 0x2, 0x2, 0x4c6, 0x4c7, 
       0x7, 0x1a, 0x2, 0x2, 0x4c7, 0x4c8, 0x7, 0x5, 0x2, 0x2, 0x4c8, 0x4c9, 
       0x7, 0x3b, 0x2, 0x2, 0x4c9, 0x532, 0x7, 0x72, 0x2, 0x2, 0x4ca, 0x4cb, 
       0x7, 0x71, 0x2, 0x2, 0x4cb, 0x4cc, 0x7, 0x1a, 0x2, 0x2, 0x4cc, 0x4cd, 
       0x7, 0x4c, 0x2, 0x2, 0x4cd, 0x4ce, 0x7, 0x2f, 0x2, 0x2, 0x4ce, 0x4cf, 
       0x7, 0x42, 0x2, 0x2, 0x4cf, 0x4d0, 0x7, 0x1a, 0x2, 0x2, 0x4d0, 0x532, 
       0x7, 0x5, 0x2, 0x2, 0x4d1, 0x4d2, 0x7, 0x71, 0x2, 0x2, 0x4d2, 0x4d3, 
       0x7, 0x1a, 0x2, 0x2, 0x4d3, 0x4d4, 0x7, 0x4d, 0x2, 0x2, 0x4d4, 0x4d5, 
       0x7, 0x2f, 0x2, 0x2, 0x4d5, 0x4d6, 0x7, 0x27, 0x2, 0x2, 0x4d6, 0x4d7, 
       0x7, 0x17, 0x2, 0x2, 0x4d7, 0x4d8, 0x7, 0x63, 0x2, 0x2, 0x4d8, 0x4d9, 
       0x7, 0x42, 0x2, 0x2, 0x4d9, 0x532, 0x7, 0x8, 0x2, 0x2, 0x4da, 0x4db, 
       0x7, 0x71, 0x2, 0x2, 0x4db, 0x4dc, 0x7, 0x1a, 0x2, 0x2, 0x4dc, 0x4dd, 
       0x7, 0x4c, 0x2, 0x2, 0x4dd, 0x4de, 0x7, 0x2f, 0x2, 0x2, 0x4de, 0x4df, 
       0x7, 0x42, 0x2, 0x2, 0x4df, 0x4e0, 0x7, 0x8, 0x2, 0x2, 0x4e0, 0x4e1, 
       0x7, 0x3b, 0x2, 0x2, 0x4e1, 0x4e2, 0x5, 0xb8, 0x5d, 0x2, 0x4e2, 0x4e3, 
       0x7, 0x49, 0x2, 0x2, 0x4e3, 0x4e4, 0x7, 0x41, 0x2, 0x2, 0x4e4, 0x532, 
       0x3, 0x2, 0x2, 0x2, 0x4e5, 0x4e6, 0x7, 0x71, 0x2, 0x2, 0x4e6, 0x4e7, 
       0x7, 0x14, 0x2, 0x2, 0x4e7, 0x4e8, 0x7, 0x2f, 0x2, 0x2, 0x4e8, 0x4e9, 
       0x7, 0x46, 0x2, 0x2, 0x4e9, 0x4ea, 0x7, 0x73, 0x2, 0x2, 0x4ea, 0x4eb, 
       0x7, 0x3b, 0x2, 0x2, 0x4eb, 0x4ec, 0x5, 0xb8, 0x5d, 0x2, 0x4ec, 0x4ed, 
       0x7, 0x49, 0x2, 0x2, 0x4ed, 0x4ee, 0x7, 0x41, 0x2, 0x2, 0x4ee, 0x532, 
       0x3, 0x2, 0x2, 0x2, 0x4ef, 0x4f0, 0x7, 0x71, 0x2, 0x2, 0x4f0, 0x4f1, 
       0x7, 0x14, 0x2, 0x2, 0x4f1, 0x4f2, 0x7, 0x2f, 0x2, 0x2, 0x4f2, 0x4f3, 
       0x7, 0x42, 0x2, 0x2, 0x4f3, 0x532, 0x7, 0x8, 0x2, 0x2, 0x4f4, 0x4f5, 
       0x7, 0x71, 0x2, 0x2, 0x4f5, 0x4f6, 0x7, 0x74, 0x2, 0x2, 0x4f6, 0x4f7, 
       0x7, 0x75, 0x2, 0x2, 0x4f7, 0x4f8, 0x7, 0x3b, 0x2, 0x2, 0x4f8, 0x4f9, 
       0x7, 0x72, 0x2, 0x2, 0x4f9, 0x4fa, 0x7, 0xd2, 0x2, 0x2, 0x4fa, 0x4fb, 
       0x7, 0x76, 0x2, 0x2, 0x4fb, 0x4fc, 0x7, 0x77, 0x2, 0x2, 0x4fc, 0x4fd, 
       0x7, 0x78, 0x2, 0x2, 0x4fd, 0x4fe, 0x7, 0x79, 0x2, 0x2, 0x4fe, 0x4ff, 
       0x7, 0x17, 0x2, 0x2, 0x4ff, 0x500, 0x7, 0x74, 0x2, 0x2, 0x500, 0x501, 
       0x7, 0x75, 0x2, 0x2, 0x501, 0x502, 0x7, 0x7a, 0x2, 0x2, 0x502, 0x503, 
       0x7, 0x7b, 0x2, 0x2, 0x503, 0x532, 0x7, 0x57, 0x2, 0x2, 0x504, 0x505, 
       0x7, 0x71, 0x2, 0x2, 0x505, 0x506, 0x7, 0x7c, 0x2, 0x2, 0x506, 0x507, 
       0x7, 0x7d, 0x2, 0x2, 0x507, 0x508, 0x7, 0x42, 0x2, 0x2, 0x508, 0x509, 
       0x7, 0x8, 0x2, 0x2, 0x509, 0x50a, 0x7, 0x3b, 0x2, 0x2, 0x50a, 0x50b, 
       0x7, 0x72, 0x2, 0x2, 0x50b, 0x50c, 0x7, 0xd2, 0x2, 0x2, 0x50c, 0x50d, 
       0x7, 0x76, 0x2, 0x2, 0x50d, 0x50e, 0x7, 0x77, 0x2, 0x2, 0x50e, 0x50f, 
       0x7, 0x78, 0x2, 0x2, 0x50f, 0x510, 0x7, 0x79, 0x2, 0x2, 0x510, 0x511, 
       0x7, 0x17, 0x2, 0x2, 0x511, 0x512, 0x7, 0x7c, 0x2, 0x2, 0x512, 0x513, 
       0x7, 0x7d, 0x2, 0x2, 0x513, 0x514, 0x7, 0x7a, 0x2, 0x2, 0x514, 0x515, 
       0x7, 0x7b, 0x2, 0x2, 0x515, 0x532, 0x7, 0x57, 0x2, 0x2, 0x516, 0x517, 
       0x7, 0x71, 0x2, 0x2, 0x517, 0x518, 0x7, 0x14, 0x2, 0x2, 0x518, 0x519, 
       0x7, 0x2f, 0x2, 0x2, 0x519, 0x51a, 0x7, 0x3b, 0x2, 0x2, 0x51a, 0x51b, 
       0x5, 0xb8, 0x5d, 0x2, 0x51b, 0x51c, 0x7, 0x49, 0x2, 0x2, 0x51c, 0x51d, 
       0x7, 0x41, 0x2, 0x2, 0x51d, 0x532, 0x3, 0x2, 0x2, 0x2, 0x51e, 0x51f, 
       0x7, 0x71, 0x2, 0x2, 0x51f, 0x520, 0x7, 0x14, 0x2, 0x2, 0x520, 0x521, 
       0x7, 0x4b, 0x2, 0x2, 0x521, 0x522, 0x7, 0x4c, 0x2, 0x2, 0x522, 0x523, 
       0x7, 0x2f, 0x2, 0x2, 0x523, 0x524, 0x7, 0x42, 0x2, 0x2, 0x524, 0x525, 
       0x7, 0x1a, 0x2, 0x2, 0x525, 0x532, 0x7, 0x5, 0x2, 0x2, 0x526, 0x527, 
       0x7, 0x71, 0x2, 0x2, 0x527, 0x528, 0x7, 0x14, 0x2, 0x2, 0x528, 0x529, 
       0x7, 0x4d, 0x2, 0x2, 0x529, 0x52a, 0x7, 0x2f, 0x2, 0x2, 0x52a, 0x52b, 
       0x7, 0x42, 0x2, 0x2, 0x52b, 0x52c, 0x7, 0x8, 0x2, 0x2, 0x52c, 0x52d, 
       0x7, 0x3b, 0x2, 0x2, 0x52d, 0x52e, 0x5, 0xb8, 0x5d, 0x2, 0x52e, 0x52f, 
       0x7, 0x49, 0x2, 0x2, 0x52f, 0x530, 0x7, 0x41, 0x2, 0x2, 0x530, 0x532, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x4a2, 0x3, 0x2, 0x2, 0x2, 0x531, 0x4a8, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x4b3, 0x3, 0x2, 0x2, 0x2, 0x531, 0x4b8, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x4bd, 0x3, 0x2, 0x2, 0x2, 0x531, 0x4ca, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x4d1, 0x3, 0x2, 0x2, 0x2, 0x531, 0x4da, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x4e5, 0x3, 0x2, 0x2, 0x2, 0x531, 0x4ef, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x4f4, 0x3, 0x2, 0x2, 0x2, 0x531, 0x504, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x516, 0x3, 0x2, 0x2, 0x2, 0x531, 0x51e, 
       0x3, 0x2, 0x2, 0x2, 0x531, 0x526, 0x3, 0x2, 0x2, 0x2, 0x532, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x533, 0x534, 0x7, 0x63, 0x2, 0x2, 0x534, 0x535, 
       0x5, 0xb8, 0x5d, 0x2, 0x535, 0x536, 0x7, 0x2f, 0x2, 0x2, 0x536, 0x566, 
       0x3, 0x2, 0x2, 0x2, 0x537, 0x538, 0x7, 0x2d, 0x2, 0x2, 0x538, 0x539, 
       0x7, 0x63, 0x2, 0x2, 0x539, 0x53a, 0x5, 0xb8, 0x5d, 0x2, 0x53a, 0x53b, 
       0x7, 0x2f, 0x2, 0x2, 0x53b, 0x566, 0x3, 0x2, 0x2, 0x2, 0x53c, 0x53d, 
       0x7, 0x7e, 0x2, 0x2, 0x53d, 0x53e, 0x7, 0x8, 0x2, 0x2, 0x53e, 0x53f, 
       0x7, 0x63, 0x2, 0x2, 0x53f, 0x540, 0x7, 0x14, 0x2, 0x2, 0x540, 0x541, 
       0x7, 0x36, 0x2, 0x2, 0x541, 0x542, 0x7, 0x2f, 0x2, 0x2, 0x542, 0x543, 
       0x7, 0x13, 0x2, 0x2, 0x543, 0x544, 0x7, 0x17, 0x2, 0x2, 0x544, 0x566, 
       0x7, 0x18, 0x2, 0x2, 0x545, 0x546, 0x7, 0x63, 0x2, 0x2, 0x546, 0x547, 
       0x7, 0x14, 0x2, 0x2, 0x547, 0x566, 0x7, 0x2f, 0x2, 0x2, 0x548, 0x549, 
       0x7, 0x2d, 0x2, 0x2, 0x549, 0x54a, 0x7, 0x63, 0x2, 0x2, 0x54a, 0x54b, 
       0x7, 0x14, 0x2, 0x2, 0x54b, 0x566, 0x7, 0x2f, 0x2, 0x2, 0x54c, 0x54d, 
       0x7, 0x4, 0x2, 0x2, 0x54d, 0x54e, 0x7, 0x5, 0x2, 0x2, 0x54e, 0x54f, 
       0x7, 0x7f, 0x2, 0x2, 0x54f, 0x550, 0x7, 0x4, 0x2, 0x2, 0x550, 0x551, 
       0x7, 0x36, 0x2, 0x2, 0x551, 0x566, 0x7, 0x2f, 0x2, 0x2, 0x552, 0x553, 
       0x7, 0x4, 0x2, 0x2, 0x553, 0x554, 0x7, 0x5, 0x2, 0x2, 0x554, 0x555, 
       0x7, 0x7f, 0x2, 0x2, 0x555, 0x556, 0x5, 0xb8, 0x5d, 0x2, 0x556, 0x557, 
       0x7, 0x2f, 0x2, 0x2, 0x557, 0x566, 0x3, 0x2, 0x2, 0x2, 0x558, 0x559, 
       0x7, 0x4, 0x2, 0x2, 0x559, 0x55a, 0x7, 0x25, 0x2, 0x2, 0x55a, 0x55b, 
       0x7, 0x7f, 0x2, 0x2, 0x55b, 0x55c, 0x7, 0x14, 0x2, 0x2, 0x55c, 0x55d, 
       0x7, 0x36, 0x2, 0x2, 0x55d, 0x55e, 0x7, 0x2f, 0x2, 0x2, 0x55e, 0x55f, 
       0x7, 0x13, 0x2, 0x2, 0x55f, 0x560, 0x7, 0x37, 0x2, 0x2, 0x560, 0x566, 
       0x7, 0x18, 0x2, 0x2, 0x561, 0x562, 0x7, 0x63, 0x2, 0x2, 0x562, 0x563, 
       0x7, 0x14, 0x2, 0x2, 0x563, 0x564, 0x7, 0x36, 0x2, 0x2, 0x564, 0x566, 
       0x7, 0x2f, 0x2, 0x2, 0x565, 0x533, 0x3, 0x2, 0x2, 0x2, 0x565, 0x537, 
       0x3, 0x2, 0x2, 0x2, 0x565, 0x53c, 0x3, 0x2, 0x2, 0x2, 0x565, 0x545, 
       0x3, 0x2, 0x2, 0x2, 0x565, 0x548, 0x3, 0x2, 0x2, 0x2, 0x565, 0x54c, 
       0x3, 0x2, 0x2, 0x2, 0x565, 0x552, 0x3, 0x2, 0x2, 0x2, 0x565, 0x558, 
       0x3, 0x2, 0x2, 0x2, 0x565, 0x561, 0x3, 0x2, 0x2, 0x2, 0x566, 0x2d, 
       0x3, 0x2, 0x2, 0x2, 0x567, 0x568, 0x7, 0xa, 0x2, 0x2, 0x568, 0x569, 
       0x7, 0x2f, 0x2, 0x2, 0x569, 0x56a, 0x7, 0x5c, 0x2, 0x2, 0x56a, 0x56b, 
       0x7, 0x80, 0x2, 0x2, 0x56b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x56c, 0x56d, 
       0x7, 0x81, 0x2, 0x2, 0x56d, 0x56e, 0x7, 0x4, 0x2, 0x2, 0x56e, 0x56f, 
       0x7, 0x25, 0x2, 0x2, 0x56f, 0x570, 0x5, 0xb8, 0x5d, 0x2, 0x570, 0x571, 
       0x7, 0x82, 0x2, 0x2, 0x571, 0x58a, 0x3, 0x2, 0x2, 0x2, 0x572, 0x573, 
       0x7, 0x81, 0x2, 0x2, 0x573, 0x574, 0x7, 0xc, 0x2, 0x2, 0x574, 0x575, 
       0x5, 0xb8, 0x5d, 0x2, 0x575, 0x576, 0x7, 0x82, 0x2, 0x2, 0x576, 0x58a, 
       0x3, 0x2, 0x2, 0x2, 0x577, 0x578, 0x7, 0x81, 0x2, 0x2, 0x578, 0x579, 
       0x7, 0x8, 0x2, 0x2, 0x579, 0x57a, 0x5, 0xb8, 0x5d, 0x2, 0x57a, 0x57b, 
       0x7, 0x82, 0x2, 0x2, 0x57b, 0x58a, 0x3, 0x2, 0x2, 0x2, 0x57c, 0x57d, 
       0x7, 0x81, 0x2, 0x2, 0x57d, 0x57e, 0x7, 0xc, 0x2, 0x2, 0x57e, 0x57f, 
       0x7, 0x82, 0x2, 0x2, 0x57f, 0x580, 0x7, 0x34, 0x2, 0x2, 0x580, 0x581, 
       0x7, 0x19, 0x2, 0x2, 0x581, 0x582, 0x7, 0xe, 0x2, 0x2, 0x582, 0x583, 
       0x7, 0x35, 0x2, 0x2, 0x583, 0x584, 0x7, 0x13, 0x2, 0x2, 0x584, 0x585, 
       0x7, 0x36, 0x2, 0x2, 0x585, 0x586, 0x7, 0x2f, 0x2, 0x2, 0x586, 0x587, 
       0x7, 0x6, 0x2, 0x2, 0x587, 0x588, 0x7, 0x37, 0x2, 0x2, 0x588, 0x58a, 
       0x7, 0x38, 0x2, 0x2, 0x589, 0x56c, 0x3, 0x2, 0x2, 0x2, 0x589, 0x572, 
       0x3, 0x2, 0x2, 0x2, 0x589, 0x577, 0x3, 0x2, 0x2, 0x2, 0x589, 0x57c, 
       0x3, 0x2, 0x2, 0x2, 0x58a, 0x31, 0x3, 0x2, 0x2, 0x2, 0x58b, 0x58c, 
       0x7, 0x83, 0x2, 0x2, 0x58c, 0x58d, 0x7, 0x4, 0x2, 0x2, 0x58d, 0x593, 
       0x7, 0x5, 0x2, 0x2, 0x58e, 0x58f, 0x7, 0x83, 0x2, 0x2, 0x58f, 0x593, 
       0x7, 0x8, 0x2, 0x2, 0x590, 0x591, 0x7, 0x83, 0x2, 0x2, 0x591, 0x593, 
       0x7, 0xc, 0x2, 0x2, 0x592, 0x58b, 0x3, 0x2, 0x2, 0x2, 0x592, 0x58e, 
       0x3, 0x2, 0x2, 0x2, 0x592, 0x590, 0x3, 0x2, 0x2, 0x2, 0x593, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x594, 0x595, 0x5, 0x32, 0x1a, 0x2, 0x595, 0x596, 
       0x7, 0xd2, 0x2, 0x2, 0x596, 0x597, 0x7, 0x4e, 0x2, 0x2, 0x597, 0x598, 
       0x7, 0x14, 0x2, 0x2, 0x598, 0x599, 0x7, 0x41, 0x2, 0x2, 0x599, 0x59a, 
       0x7, 0x4f, 0x2, 0x2, 0x59a, 0x59b, 0x7, 0x84, 0x2, 0x2, 0x59b, 0x59c, 
       0x7, 0x76, 0x2, 0x2, 0x59c, 0x59d, 0x7, 0x85, 0x2, 0x2, 0x59d, 0x59e, 
       0x7, 0xd1, 0x2, 0x2, 0x59e, 0x59f, 0x5, 0xca, 0x66, 0x2, 0x59f, 0x5a2, 
       0x3, 0x2, 0x2, 0x2, 0x5a0, 0x5a2, 0x5, 0x32, 0x1a, 0x2, 0x5a1, 0x594, 
       0x3, 0x2, 0x2, 0x2, 0x5a1, 0x5a0, 0x3, 0x2, 0x2, 0x2, 0x5a2, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x5a3, 0x5a4, 0x7, 0x4, 0x2, 0x2, 0x5a4, 0x5a5, 
       0x7, 0x25, 0x2, 0x2, 0x5a5, 0x5a6, 0x7, 0x86, 0x2, 0x2, 0x5a6, 0x5a7, 
       0x5, 0xb8, 0x5d, 0x2, 0x5a7, 0x5a8, 0x7, 0x2f, 0x2, 0x2, 0x5a8, 0x5a9, 
       0x7, 0x27, 0x2, 0x2, 0x5a9, 0x5aa, 0x7, 0x37, 0x2, 0x2, 0x5aa, 0x5ab, 
       0x7, 0x38, 0x2, 0x2, 0x5ab, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5ac, 0x5ad, 
       0x7, 0x2d, 0x2, 0x2, 0x5ad, 0x5ae, 0x7, 0x87, 0x2, 0x2, 0x5ae, 0x5af, 
       0x5, 0xb8, 0x5d, 0x2, 0x5af, 0x5b0, 0x7, 0x2f, 0x2, 0x2, 0x5b0, 0x5b1, 
       0x7, 0x27, 0x2, 0x2, 0x5b1, 0x5b2, 0x7, 0x37, 0x2, 0x2, 0x5b2, 0x5b3, 
       0x7, 0x38, 0x2, 0x2, 0x5b3, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5b4, 0x5b5, 
       0x7, 0x2d, 0x2, 0x2, 0x5b5, 0x5b6, 0x7, 0x87, 0x2, 0x2, 0x5b6, 0x5b7, 
       0x7, 0x14, 0x2, 0x2, 0x5b7, 0x5b8, 0x7, 0x2f, 0x2, 0x2, 0x5b8, 0x5b9, 
       0x7, 0x27, 0x2, 0x2, 0x5b9, 0x5ba, 0x7, 0x37, 0x2, 0x2, 0x5ba, 0x5e3, 
       0x7, 0x38, 0x2, 0x2, 0x5bb, 0x5bc, 0x7, 0x4, 0x2, 0x2, 0x5bc, 0x5bd, 
       0x7, 0x25, 0x2, 0x2, 0x5bd, 0x5be, 0x7, 0x86, 0x2, 0x2, 0x5be, 0x5bf, 
       0x7, 0x14, 0x2, 0x2, 0x5bf, 0x5c0, 0x7, 0x2f, 0x2, 0x2, 0x5c0, 0x5c1, 
       0x7, 0x27, 0x2, 0x2, 0x5c1, 0x5c2, 0x7, 0x37, 0x2, 0x2, 0x5c2, 0x5e3, 
       0x7, 0x38, 0x2, 0x2, 0x5c3, 0x5c4, 0x7, 0x4, 0x2, 0x2, 0x5c4, 0x5c5, 
       0x7, 0x5, 0x2, 0x2, 0x5c5, 0x5c6, 0x7, 0x86, 0x2, 0x2, 0x5c6, 0x5c7, 
       0x5, 0xb8, 0x5d, 0x2, 0x5c7, 0x5c8, 0x7, 0x2f, 0x2, 0x2, 0x5c8, 0x5c9, 
       0x7, 0x27, 0x2, 0x2, 0x5c9, 0x5ca, 0x7, 0x37, 0x2, 0x2, 0x5ca, 0x5cb, 
       0x7, 0x38, 0x2, 0x2, 0x5cb, 0x5e3, 0x3, 0x2, 0x2, 0x2, 0x5cc, 0x5cd, 
       0x7, 0x4, 0x2, 0x2, 0x5cd, 0x5ce, 0x7, 0x5, 0x2, 0x2, 0x5ce, 0x5cf, 
       0x7, 0x86, 0x2, 0x2, 0x5cf, 0x5d0, 0x7, 0x14, 0x2, 0x2, 0x5d0, 0x5d1, 
       0x7, 0x2f, 0x2, 0x2, 0x5d1, 0x5d2, 0x7, 0x27, 0x2, 0x2, 0x5d2, 0x5d3, 
       0x7, 0x37, 0x2, 0x2, 0x5d3, 0x5e3, 0x7, 0x38, 0x2, 0x2, 0x5d4, 0x5d5, 
       0x7, 0x87, 0x2, 0x2, 0x5d5, 0x5e3, 0x7, 0xcc, 0x2, 0x2, 0x5d6, 0x5d7, 
       0x7, 0x87, 0x2, 0x2, 0x5d7, 0x5d8, 0x7, 0x14, 0x2, 0x2, 0x5d8, 0x5d9, 
       0x7, 0x2f, 0x2, 0x2, 0x5d9, 0x5da, 0x7, 0x27, 0x2, 0x2, 0x5da, 0x5db, 
       0x7, 0x17, 0x2, 0x2, 0x5db, 0x5e3, 0x7, 0x38, 0x2, 0x2, 0x5dc, 0x5dd, 
       0x7, 0x86, 0x2, 0x2, 0x5dd, 0x5de, 0x7, 0x14, 0x2, 0x2, 0x5de, 0x5df, 
       0x7, 0x2f, 0x2, 0x2, 0x5df, 0x5e0, 0x7, 0x27, 0x2, 0x2, 0x5e0, 0x5e1, 
       0x7, 0x37, 0x2, 0x2, 0x5e1, 0x5e3, 0x7, 0x38, 0x2, 0x2, 0x5e2, 0x5a3, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5ac, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5b4, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5bb, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5c3, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5cc, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5d4, 
       0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5d6, 0x3, 0x2, 0x2, 0x2, 0x5e2, 0x5dc, 
       0x3, 0x2, 0x2, 0x2, 0x5e3, 0x37, 0x3, 0x2, 0x2, 0x2, 0x5e4, 0x5f2, 
       0x5, 0x36, 0x1c, 0x2, 0x5e5, 0x5e6, 0x5, 0x36, 0x1c, 0x2, 0x5e6, 
       0x5e7, 0x7, 0xd2, 0x2, 0x2, 0x5e7, 0x5e8, 0x7, 0x4e, 0x2, 0x2, 0x5e8, 
       0x5e9, 0x7, 0x14, 0x2, 0x2, 0x5e9, 0x5ea, 0x7, 0x4b, 0x2, 0x2, 0x5ea, 
       0x5eb, 0x7, 0x4c, 0x2, 0x2, 0x5eb, 0x5ec, 0x7, 0x2f, 0x2, 0x2, 0x5ec, 
       0x5ed, 0x7, 0x4f, 0x2, 0x2, 0x5ed, 0x5ee, 0x7, 0x36, 0x2, 0x2, 0x5ee, 
       0x5ef, 0x7, 0x76, 0x2, 0x2, 0x5ef, 0x5f0, 0x7, 0x85, 0x2, 0x2, 0x5f0, 
       0x5f2, 0x3, 0x2, 0x2, 0x2, 0x5f1, 0x5e4, 0x3, 0x2, 0x2, 0x2, 0x5f1, 
       0x5e5, 0x3, 0x2, 0x2, 0x2, 0x5f2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x5f3, 
       0x5f4, 0x7, 0x88, 0x2, 0x2, 0x5f4, 0x5f5, 0x7, 0x14, 0x2, 0x2, 0x5f5, 
       0x61c, 0x7, 0x2f, 0x2, 0x2, 0x5f6, 0x5f7, 0x7, 0x4, 0x2, 0x2, 0x5f7, 
       0x5f8, 0x7, 0x25, 0x2, 0x2, 0x5f8, 0x5f9, 0x7, 0x89, 0x2, 0x2, 0x5f9, 
       0x5fa, 0x5, 0xb8, 0x5d, 0x2, 0x5fa, 0x5fb, 0x7, 0x2f, 0x2, 0x2, 0x5fb, 
       0x61c, 0x3, 0x2, 0x2, 0x2, 0x5fc, 0x5fd, 0x7, 0x2d, 0x2, 0x2, 0x5fd, 
       0x5fe, 0x7, 0x88, 0x2, 0x2, 0x5fe, 0x5ff, 0x7, 0x14, 0x2, 0x2, 0x5ff, 
       0x61c, 0x7, 0x2f, 0x2, 0x2, 0x600, 0x601, 0x7, 0x28, 0x2, 0x2, 0x601, 
       0x602, 0x7, 0x88, 0x2, 0x2, 0x602, 0x603, 0x7, 0x14, 0x2, 0x2, 0x603, 
       0x61c, 0x7, 0x2f, 0x2, 0x2, 0x604, 0x605, 0x7, 0x88, 0x2, 0x2, 0x605, 
       0x606, 0x7, 0x1a, 0x2, 0x2, 0x606, 0x607, 0x7, 0x5b, 0x2, 0x2, 0x607, 
       0x61c, 0x7, 0x2f, 0x2, 0x2, 0x608, 0x609, 0x7, 0x2d, 0x2, 0x2, 0x609, 
       0x60a, 0x7, 0x88, 0x2, 0x2, 0x60a, 0x60b, 0x5, 0xb8, 0x5d, 0x2, 0x60b, 
       0x60c, 0x7, 0x2f, 0x2, 0x2, 0x60c, 0x61c, 0x3, 0x2, 0x2, 0x2, 0x60d, 
       0x60e, 0x7, 0x88, 0x2, 0x2, 0x60e, 0x60f, 0x5, 0xb8, 0x5d, 0x2, 0x60f, 
       0x610, 0x7, 0x2f, 0x2, 0x2, 0x610, 0x61c, 0x3, 0x2, 0x2, 0x2, 0x611, 
       0x612, 0x7, 0x1c, 0x2, 0x2, 0x612, 0x613, 0x7, 0x25, 0x2, 0x2, 0x613, 
       0x614, 0x7, 0x89, 0x2, 0x2, 0x614, 0x615, 0x7, 0x14, 0x2, 0x2, 0x615, 
       0x61c, 0x7, 0x2f, 0x2, 0x2, 0x616, 0x617, 0x7, 0x4, 0x2, 0x2, 0x617, 
       0x618, 0x7, 0x25, 0x2, 0x2, 0x618, 0x619, 0x7, 0x89, 0x2, 0x2, 0x619, 
       0x61a, 0x7, 0x14, 0x2, 0x2, 0x61a, 0x61c, 0x7, 0x2f, 0x2, 0x2, 0x61b, 
       0x5f3, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x5f6, 0x3, 0x2, 0x2, 0x2, 0x61b, 
       0x5fc, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x600, 0x3, 0x2, 0x2, 0x2, 0x61b, 
       0x604, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x608, 0x3, 0x2, 0x2, 0x2, 0x61b, 
       0x60d, 0x3, 0x2, 0x2, 0x2, 0x61b, 0x611, 0x3, 0x2, 0x2, 0x2, 0x61b, 
       0x616, 0x3, 0x2, 0x2, 0x2, 0x61c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x61d, 
       0x61e, 0x7, 0x8e, 0x2, 0x2, 0x61e, 0x61f, 0x7, 0x29, 0x2, 0x2, 0x61f, 
       0x620, 0x7, 0x19, 0x2, 0x2, 0x620, 0x621, 0x5, 0xb8, 0x5d, 0x2, 0x621, 
       0x622, 0x7, 0x12, 0x2, 0x2, 0x622, 0x623, 0x7, 0x13, 0x2, 0x2, 0x623, 
       0x624, 0x7, 0x15, 0x2, 0x2, 0x624, 0x625, 0x7, 0x27, 0x2, 0x2, 0x625, 
       0x626, 0x7, 0xc, 0x2, 0x2, 0x626, 0x634, 0x3, 0x2, 0x2, 0x2, 0x627, 
       0x628, 0x7, 0x8e, 0x2, 0x2, 0x628, 0x629, 0x7, 0x31, 0x2, 0x2, 0x629, 
       0x62a, 0x7, 0x15, 0x2, 0x2, 0x62a, 0x62b, 0x7, 0x21, 0x2, 0x2, 0x62b, 
       0x634, 0x7, 0x8, 0x2, 0x2, 0x62c, 0x62d, 0x7, 0x8e, 0x2, 0x2, 0x62d, 
       0x62e, 0x7, 0x1a, 0x2, 0x2, 0x62e, 0x62f, 0x7, 0x1b, 0x2, 0x2, 0x62f, 
       0x630, 0x7, 0x13, 0x2, 0x2, 0x630, 0x631, 0x7, 0x15, 0x2, 0x2, 0x631, 
       0x632, 0x7, 0x27, 0x2, 0x2, 0x632, 0x634, 0x7, 0xc, 0x2, 0x2, 0x633, 
       0x61d, 0x3, 0x2, 0x2, 0x2, 0x633, 0x627, 0x3, 0x2, 0x2, 0x2, 0x633, 
       0x62c, 0x3, 0x2, 0x2, 0x2, 0x634, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x635, 
       0x636, 0x7, 0x8f, 0x2, 0x2, 0x636, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x637, 
       0x638, 0x7, 0x90, 0x2, 0x2, 0x638, 0x41, 0x3, 0x2, 0x2, 0x2, 0x639, 
       0x63a, 0x7, 0x91, 0x2, 0x2, 0x63a, 0x63b, 0x7, 0xa, 0x2, 0x2, 0x63b, 
       0x63c, 0x7, 0xb, 0x2, 0x2, 0x63c, 0x63d, 0x7, 0x92, 0x2, 0x2, 0x63d, 
       0x66e, 0x7, 0x7, 0x2, 0x2, 0x63e, 0x63f, 0x7, 0x91, 0x2, 0x2, 0x63f, 
       0x640, 0x7, 0x4, 0x2, 0x2, 0x640, 0x641, 0x7, 0xb, 0x2, 0x2, 0x641, 
       0x642, 0x7, 0x93, 0x2, 0x2, 0x642, 0x643, 0x7, 0x94, 0x2, 0x2, 0x643, 
       0x644, 0x5, 0xb8, 0x5d, 0x2, 0x644, 0x645, 0x7, 0xb, 0x2, 0x2, 0x645, 
       0x646, 0x7, 0x26, 0x2, 0x2, 0x646, 0x647, 0x7, 0x92, 0x2, 0x2, 0x647, 
       0x648, 0x7, 0x7, 0x2, 0x2, 0x648, 0x66e, 0x3, 0x2, 0x2, 0x2, 0x649, 
       0x64a, 0x7, 0x91, 0x2, 0x2, 0x64a, 0x64b, 0x7, 0x4, 0x2, 0x2, 0x64b, 
       0x64c, 0x7, 0xb, 0x2, 0x2, 0x64c, 0x64d, 0x7, 0x92, 0x2, 0x2, 0x64d, 
       0x66e, 0x7, 0x7, 0x2, 0x2, 0x64e, 0x64f, 0x7, 0x91, 0x2, 0x2, 0x64f, 
       0x650, 0x7, 0x1c, 0x2, 0x2, 0x650, 0x651, 0x7, 0xb, 0x2, 0x2, 0x651, 
       0x652, 0x7, 0x1d, 0x2, 0x2, 0x652, 0x653, 0x7, 0x8, 0x2, 0x2, 0x653, 
       0x654, 0x7, 0x92, 0x2, 0x2, 0x654, 0x66e, 0x7, 0x7, 0x2, 0x2, 0x655, 
       0x656, 0x7, 0x91, 0x2, 0x2, 0x656, 0x657, 0x7, 0xe, 0x2, 0x2, 0x657, 
       0x658, 0x7, 0xb, 0x2, 0x2, 0x658, 0x659, 0x7, 0x2d, 0x2, 0x2, 0x659, 
       0x65a, 0x7, 0x95, 0x2, 0x2, 0x65a, 0x65b, 0x7, 0x6, 0x2, 0x2, 0x65b, 
       0x65c, 0x7, 0x92, 0x2, 0x2, 0x65c, 0x66e, 0x7, 0x7, 0x2, 0x2, 0x65d, 
       0x65e, 0x7, 0x91, 0x2, 0x2, 0x65e, 0x65f, 0x7, 0x29, 0x2, 0x2, 0x65f, 
       0x660, 0x7, 0x19, 0x2, 0x2, 0x660, 0x661, 0x5, 0xb8, 0x5d, 0x2, 0x661, 
       0x662, 0x7, 0x4, 0x2, 0x2, 0x662, 0x663, 0x7, 0xb, 0x2, 0x2, 0x663, 
       0x664, 0x7, 0x92, 0x2, 0x2, 0x664, 0x665, 0x7, 0x7, 0x2, 0x2, 0x665, 
       0x66e, 0x3, 0x2, 0x2, 0x2, 0x666, 0x667, 0x7, 0x91, 0x2, 0x2, 0x667, 
       0x668, 0x5, 0xb8, 0x5d, 0x2, 0x668, 0x669, 0x7, 0x4, 0x2, 0x2, 0x669, 
       0x66a, 0x7, 0xb, 0x2, 0x2, 0x66a, 0x66b, 0x7, 0x92, 0x2, 0x2, 0x66b, 
       0x66c, 0x7, 0x7, 0x2, 0x2, 0x66c, 0x66e, 0x3, 0x2, 0x2, 0x2, 0x66d, 
       0x639, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x63e, 0x3, 0x2, 0x2, 0x2, 0x66d, 
       0x649, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x64e, 0x3, 0x2, 0x2, 0x2, 0x66d, 
       0x655, 0x3, 0x2, 0x2, 0x2, 0x66d, 0x65d, 0x3, 0x2, 0x2, 0x2, 0x66d, 
       0x666, 0x3, 0x2, 0x2, 0x2, 0x66e, 0x43, 0x3, 0x2, 0x2, 0x2, 0x66f, 
       0x670, 0x7, 0x8e, 0x2, 0x2, 0x670, 0x671, 0x7, 0x4, 0x2, 0x2, 0x671, 
       0x672, 0x7, 0x7, 0x2, 0x2, 0x672, 0x673, 0x7, 0x96, 0x2, 0x2, 0x673, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x674, 0x675, 0x7, 0x1c, 0x2, 0x2, 0x675, 
       0x676, 0x7, 0x5, 0x2, 0x2, 0x676, 0x677, 0x7, 0x64, 0x2, 0x2, 0x677, 
       0x678, 0x7, 0x40, 0x2, 0x2, 0x678, 0x679, 0x5, 0xb8, 0x5d, 0x2, 0x679, 
       0x67a, 0x7, 0x41, 0x2, 0x2, 0x67a, 0x47, 0x3, 0x2, 0x2, 0x2, 0x67b, 
       0x67c, 0x7, 0x97, 0x2, 0x2, 0x67c, 0x67d, 0x7, 0x93, 0x2, 0x2, 0x67d, 
       0x67e, 0x7, 0xe, 0x2, 0x2, 0x67e, 0x67f, 0x7, 0x98, 0x2, 0x2, 0x67f, 
       0x680, 0x5, 0xb8, 0x5d, 0x2, 0x680, 0x681, 0x7, 0x2f, 0x2, 0x2, 0x681, 
       0x682, 0x7, 0x13, 0x2, 0x2, 0x682, 0x683, 0x7, 0x17, 0x2, 0x2, 0x683, 
       0x684, 0x7, 0x67, 0x2, 0x2, 0x684, 0x685, 0x7, 0xd2, 0x2, 0x2, 0x685, 
       0x686, 0x7, 0x65, 0x2, 0x2, 0x686, 0x687, 0x7, 0x99, 0x2, 0x2, 0x687, 
       0x688, 0x7, 0x35, 0x2, 0x2, 0x688, 0x689, 0x7, 0x9a, 0x2, 0x2, 0x689, 
       0x68a, 0x7, 0xe, 0x2, 0x2, 0x68a, 0x68b, 0x7, 0x66, 0x2, 0x2, 0x68b, 
       0x68c, 0x7, 0x9b, 0x2, 0x2, 0x68c, 0x68d, 0x7, 0xe, 0x2, 0x2, 0x68d, 
       0x68e, 0x7, 0x9c, 0x2, 0x2, 0x68e, 0x68f, 0x7, 0x9a, 0x2, 0x2, 0x68f, 
       0x690, 0x7, 0x98, 0x2, 0x2, 0x690, 0x691, 0x7, 0x6, 0x2, 0x2, 0x691, 
       0x692, 0x7, 0x99, 0x2, 0x2, 0x692, 0x693, 0x7, 0x9e, 0x2, 0x2, 0x693, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x694, 0x695, 0x7, 0xa, 0x2, 0x2, 0x695, 
       0x696, 0x7, 0x2f, 0x2, 0x2, 0x696, 0x697, 0x7, 0x9f, 0x2, 0x2, 0x697, 
       0x698, 0x7, 0x73, 0x2, 0x2, 0x698, 0x699, 0x7, 0xa0, 0x2, 0x2, 0x699, 
       0x69a, 0x7, 0x4e, 0x2, 0x2, 0x69a, 0x69b, 0x7, 0xa1, 0x2, 0x2, 0x69b, 
       0x69c, 0x7, 0x25, 0x2, 0x2, 0x69c, 0x69d, 0x7, 0x9f, 0x2, 0x2, 0x69d, 
       0x69e, 0x7, 0xa2, 0x2, 0x2, 0x69e, 0x69f, 0x7, 0x37, 0x2, 0x2, 0x69f, 
       0x6a0, 0x7, 0x5f, 0x2, 0x2, 0x6a0, 0x6a1, 0x7, 0x60, 0x2, 0x2, 0x6a1, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x6a2, 0x6a3, 0x7, 0x1e, 0x2, 0x2, 0x6a3, 
       0x6a4, 0x7, 0xe, 0x2, 0x2, 0x6a4, 0x6a5, 0x7, 0x6a, 0x2, 0x2, 0x6a5, 
       0x6a6, 0x7, 0x13, 0x2, 0x2, 0x6a6, 0x6a7, 0x7, 0x14, 0x2, 0x2, 0x6a7, 
       0x6a8, 0x7, 0x2f, 0x2, 0x2, 0x6a8, 0x6a9, 0x7, 0x28, 0x2, 0x2, 0x6a9, 
       0x6aa, 0x7, 0x15, 0x2, 0x2, 0x6aa, 0x6ab, 0x7, 0x22, 0x2, 0x2, 0x6ab, 
       0x6ac, 0x5, 0xb8, 0x5d, 0x2, 0x6ac, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x6ad, 
       0x6ae, 0x7, 0xa3, 0x2, 0x2, 0x6ae, 0x6af, 0x7, 0xe, 0x2, 0x2, 0x6af, 
       0x6b0, 0x7, 0x5e, 0x2, 0x2, 0x6b0, 0x6b1, 0x7, 0x13, 0x2, 0x2, 0x6b1, 
       0x6b2, 0x7, 0xcc, 0x2, 0x2, 0x6b2, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x6b3, 
       0x6b4, 0x7, 0x80, 0x2, 0x2, 0x6b4, 0x51, 0x3, 0x2, 0x2, 0x2, 0x6b5, 
       0x6b6, 0x7, 0x28, 0x2, 0x2, 0x6b6, 0x6b7, 0x7, 0x64, 0x2, 0x2, 0x6b7, 
       0x6b8, 0x7, 0xa4, 0x2, 0x2, 0x6b8, 0x6b9, 0x7, 0x71, 0x2, 0x2, 0x6b9, 
       0x6ba, 0x7, 0x2f, 0x2, 0x2, 0x6ba, 0x6bb, 0x7, 0xa5, 0x2, 0x2, 0x6bb, 
       0x703, 0x7, 0xcc, 0x2, 0x2, 0x6bc, 0x6bd, 0x7, 0xa4, 0x2, 0x2, 0x6bd, 
       0x6be, 0x7, 0x71, 0x2, 0x2, 0x6be, 0x6bf, 0x7, 0xcc, 0x2, 0x2, 0x6bf, 
       0x6c3, 0x7, 0x4e, 0x2, 0x2, 0x6c0, 0x6c4, 0x7, 0xa6, 0x2, 0x2, 0x6c1, 
       0x6c2, 0x7, 0x28, 0x2, 0x2, 0x6c2, 0x6c4, 0x7, 0x7e, 0x2, 0x2, 0x6c3, 
       0x6c0, 0x3, 0x2, 0x2, 0x2, 0x6c3, 0x6c1, 0x3, 0x2, 0x2, 0x2, 0x6c4, 
       0x6c5, 0x3, 0x2, 0x2, 0x2, 0x6c5, 0x6c6, 0x7, 0xa7, 0x2, 0x2, 0x6c6, 
       0x6c7, 0x7, 0x1a, 0x2, 0x2, 0x6c7, 0x6c8, 0x7, 0x4c, 0x2, 0x2, 0x6c8, 
       0x6c9, 0x7, 0x2f, 0x2, 0x2, 0x6c9, 0x6ca, 0x7, 0x76, 0x2, 0x2, 0x6ca, 
       0x703, 0x7, 0x57, 0x2, 0x2, 0x6cb, 0x6cc, 0x7, 0xa4, 0x2, 0x2, 0x6cc, 
       0x6cd, 0x7, 0x71, 0x2, 0x2, 0x6cd, 0x6ce, 0x7, 0xcc, 0x2, 0x2, 0x6ce, 
       0x6d2, 0x7, 0x4e, 0x2, 0x2, 0x6cf, 0x6d3, 0x7, 0xa8, 0x2, 0x2, 0x6d0, 
       0x6d1, 0x7, 0x28, 0x2, 0x2, 0x6d1, 0x6d3, 0x7, 0x95, 0x2, 0x2, 0x6d2, 
       0x6cf, 0x3, 0x2, 0x2, 0x2, 0x6d2, 0x6d0, 0x3, 0x2, 0x2, 0x2, 0x6d3, 
       0x6d4, 0x3, 0x2, 0x2, 0x2, 0x6d4, 0x703, 0x7, 0x4a, 0x2, 0x2, 0x6d5, 
       0x6d6, 0x7, 0xa4, 0x2, 0x2, 0x6d6, 0x6d7, 0x7, 0x71, 0x2, 0x2, 0x6d7, 
       0x6d8, 0x7, 0xcc, 0x2, 0x2, 0x6d8, 0x6dc, 0x7, 0x4e, 0x2, 0x2, 0x6d9, 
       0x6dd, 0x7, 0xa8, 0x2, 0x2, 0x6da, 0x6db, 0x7, 0x28, 0x2, 0x2, 0x6db, 
       0x6dd, 0x7, 0x95, 0x2, 0x2, 0x6dc, 0x6d9, 0x3, 0x2, 0x2, 0x2, 0x6dc, 
       0x6da, 0x3, 0x2, 0x2, 0x2, 0x6dd, 0x6de, 0x3, 0x2, 0x2, 0x2, 0x6de, 
       0x6df, 0x7, 0x1d, 0x2, 0x2, 0x6df, 0x703, 0x7, 0x7, 0x2, 0x2, 0x6e0, 
       0x6e1, 0x7, 0xa4, 0x2, 0x2, 0x6e1, 0x6e2, 0x7, 0x71, 0x2, 0x2, 0x6e2, 
       0x6e3, 0x7, 0xcc, 0x2, 0x2, 0x6e3, 0x6e7, 0x7, 0x4e, 0x2, 0x2, 0x6e4, 
       0x6e8, 0x7, 0xa6, 0x2, 0x2, 0x6e5, 0x6e6, 0x7, 0x28, 0x2, 0x2, 0x6e6, 
       0x6e8, 0x7, 0x7e, 0x2, 0x2, 0x6e7, 0x6e4, 0x3, 0x2, 0x2, 0x2, 0x6e7, 
       0x6e5, 0x3, 0x2, 0x2, 0x2, 0x6e8, 0x6e9, 0x3, 0x2, 0x2, 0x2, 0x6e9, 
       0x6ea, 0x7, 0x93, 0x2, 0x2, 0x6ea, 0x6eb, 0x7, 0x94, 0x2, 0x2, 0x6eb, 
       0x6ec, 0x5, 0xb8, 0x5d, 0x2, 0x6ec, 0x6ed, 0x7, 0x2f, 0x2, 0x2, 0x6ed, 
       0x6ee, 0x7, 0x6, 0x2, 0x2, 0x6ee, 0x6ef, 0x7, 0x17, 0x2, 0x2, 0x6ef, 
       0x6f0, 0x7, 0x63, 0x2, 0x2, 0x6f0, 0x703, 0x3, 0x2, 0x2, 0x2, 0x6f1, 
       0x6f2, 0x7, 0xa4, 0x2, 0x2, 0x6f2, 0x6f3, 0x7, 0x71, 0x2, 0x2, 0x6f3, 
       0x6f4, 0x7, 0xcc, 0x2, 0x2, 0x6f4, 0x6f8, 0x7, 0x4e, 0x2, 0x2, 0x6f5, 
       0x6f9, 0x7, 0xa6, 0x2, 0x2, 0x6f6, 0x6f7, 0x7, 0x28, 0x2, 0x2, 0x6f7, 
       0x6f9, 0x7, 0x7e, 0x2, 0x2, 0x6f8, 0x6f5, 0x3, 0x2, 0x2, 0x2, 0x6f8, 
       0x6f6, 0x3, 0x2, 0x2, 0x2, 0x6f9, 0x6fa, 0x3, 0x2, 0x2, 0x2, 0x6fa, 
       0x6fb, 0x7, 0xaa, 0x2, 0x2, 0x6fb, 0x6fc, 0x5, 0xb8, 0x5d, 0x2, 0x6fc, 
       0x6fd, 0x7, 0x48, 0x2, 0x2, 0x6fd, 0x6fe, 0x7, 0x11, 0x2, 0x2, 0x6fe, 
       0x6ff, 0x7, 0x33, 0x2, 0x2, 0x6ff, 0x700, 0x7, 0x76, 0x2, 0x2, 0x700, 
       0x701, 0x7, 0x57, 0x2, 0x2, 0x701, 0x703, 0x3, 0x2, 0x2, 0x2, 0x702, 
       0x6b5, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6bc, 0x3, 0x2, 0x2, 0x2, 0x702, 
       0x6cb, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6d5, 0x3, 0x2, 0x2, 0x2, 0x702, 
       0x6e0, 0x3, 0x2, 0x2, 0x2, 0x702, 0x6f1, 0x3, 0x2, 0x2, 0x2, 0x703, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x704, 0x705, 0x7, 0x4c, 0x2, 0x2, 0x705, 
       0x706, 0x7, 0x2f, 0x2, 0x2, 0x706, 0x707, 0x7, 0x28, 0x2, 0x2, 0x707, 
       0x708, 0x7, 0x71, 0x2, 0x2, 0x708, 0x709, 0x7, 0x47, 0x2, 0x2, 0x709, 
       0x70a, 0x5, 0xb8, 0x5d, 0x2, 0x70a, 0x70b, 0x7, 0x49, 0x2, 0x2, 0x70b, 
       0x70c, 0x7, 0x41, 0x2, 0x2, 0x70c, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x70d, 
       0x70e, 0x7, 0xe, 0x2, 0x2, 0x70e, 0x70f, 0x7, 0x5f, 0x2, 0x2, 0x70f, 
       0x710, 0x7, 0x4c, 0x2, 0x2, 0x710, 0x711, 0x7, 0x2f, 0x2, 0x2, 0x711, 
       0x712, 0x7, 0x28, 0x2, 0x2, 0x712, 0x713, 0x7, 0x71, 0x2, 0x2, 0x713, 
       0x714, 0x7, 0xb1, 0x2, 0x2, 0x714, 0x715, 0x7, 0x17, 0x2, 0x2, 0x715, 
       0x716, 0x7, 0x57, 0x2, 0x2, 0x716, 0x717, 0x7, 0x47, 0x2, 0x2, 0x717, 
       0x718, 0x5, 0xb8, 0x5d, 0x2, 0x718, 0x719, 0x7, 0x49, 0x2, 0x2, 0x719, 
       0x71a, 0x7, 0x41, 0x2, 0x2, 0x71a, 0x71c, 0x3, 0x2, 0x2, 0x2, 0x71b, 
       0x704, 0x3, 0x2, 0x2, 0x2, 0x71b, 0x70d, 0x3, 0x2, 0x2, 0x2, 0x71c, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x71d, 0x71e, 0x7, 0xe, 0x2, 0x2, 0x71e, 
       0x71f, 0x7, 0x8d, 0x2, 0x2, 0x71f, 0x720, 0x7, 0x13, 0x2, 0x2, 0x720, 
       0x721, 0x7, 0x17, 0x2, 0x2, 0x721, 0x722, 0x7, 0x4c, 0x2, 0x2, 0x722, 
       0x723, 0x7, 0x2f, 0x2, 0x2, 0x723, 0x724, 0x7, 0x4f, 0x2, 0x2, 0x724, 
       0x725, 0x5, 0xb8, 0x5d, 0x2, 0x725, 0x57, 0x3, 0x2, 0x2, 0x2, 0x726, 
       0x727, 0x7, 0x28, 0x2, 0x2, 0x727, 0x728, 0x7, 0xab, 0x2, 0x2, 0x728, 
       0x729, 0x7, 0x71, 0x2, 0x2, 0x729, 0x72a, 0x7, 0x2f, 0x2, 0x2, 0x72a, 
       0x59, 0x3, 0x2, 0x2, 0x2, 0x72b, 0x72c, 0x7, 0x28, 0x2, 0x2, 0x72c, 
       0x72d, 0x7, 0xab, 0x2, 0x2, 0x72d, 0x72e, 0x7, 0xac, 0x2, 0x2, 0x72e, 
       0x72f, 0x7, 0xad, 0x2, 0x2, 0x72f, 0x730, 0x7, 0x22, 0x2, 0x2, 0x730, 
       0x738, 0x7, 0xae, 0x2, 0x2, 0x731, 0x732, 0x7, 0x28, 0x2, 0x2, 0x732, 
       0x733, 0x7, 0xab, 0x2, 0x2, 0x733, 0x734, 0x7, 0xac, 0x2, 0x2, 0x734, 
       0x735, 0x7, 0xad, 0x2, 0x2, 0x735, 0x736, 0x7, 0x22, 0x2, 0x2, 0x736, 
       0x738, 0x7, 0x2f, 0x2, 0x2, 0x737, 0x72b, 0x3, 0x2, 0x2, 0x2, 0x737, 
       0x731, 0x3, 0x2, 0x2, 0x2, 0x738, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x739, 
       0x73a, 0x7, 0x17, 0x2, 0x2, 0x73a, 0x73b, 0x7, 0x43, 0x2, 0x2, 0x73b, 
       0x73c, 0x7, 0x38, 0x2, 0x2, 0x73c, 0x73d, 0x7, 0x44, 0x2, 0x2, 0x73d, 
       0x73e, 0x7, 0x4f, 0x2, 0x2, 0x73e, 0x73f, 0x7, 0x45, 0x2, 0x2, 0x73f, 
       0x740, 0x7, 0x22, 0x2, 0x2, 0x740, 0x741, 0x5, 0xb8, 0x5d, 0x2, 0x741, 
       0x5d, 0x3, 0x2, 0x2, 0x2, 0x742, 0x743, 0x7, 0x17, 0x2, 0x2, 0x743, 
       0x744, 0x7, 0x43, 0x2, 0x2, 0x744, 0x745, 0x7, 0x82, 0x2, 0x2, 0x745, 
       0x746, 0x7, 0x4f, 0x2, 0x2, 0x746, 0x747, 0x7, 0x45, 0x2, 0x2, 0x747, 
       0x748, 0x7, 0x22, 0x2, 0x2, 0x748, 0x749, 0x5, 0xb8, 0x5d, 0x2, 0x749, 
       0x5f, 0x3, 0x2, 0x2, 0x2, 0x74a, 0x74b, 0x7, 0xcc, 0x2, 0x2, 0x74b, 
       0x74c, 0x7, 0x50, 0x2, 0x2, 0x74c, 0x74d, 0x7, 0x17, 0x2, 0x2, 0x74d, 
       0x74e, 0x7, 0x5f, 0x2, 0x2, 0x74e, 0x74f, 0x7, 0x60, 0x2, 0x2, 0x74f, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x750, 0x751, 0x7, 0x28, 0x2, 0x2, 0x751, 
       0x752, 0x7, 0xbb, 0x2, 0x2, 0x752, 0x753, 0x7, 0x5a, 0x2, 0x2, 0x753, 
       0x754, 0x7, 0xd7, 0x2, 0x2, 0x754, 0x755, 0x7, 0x93, 0x2, 0x2, 0x755, 
       0x756, 0x7, 0xe, 0x2, 0x2, 0x756, 0x757, 0x7, 0x59, 0x2, 0x2, 0x757, 
       0x758, 0x7, 0x13, 0x2, 0x2, 0x758, 0x759, 0x7, 0x17, 0x2, 0x2, 0x759, 
       0x75a, 0x7, 0x57, 0x2, 0x2, 0x75a, 0x63, 0x3, 0x2, 0x2, 0x2, 0x75b, 
       0x75c, 0x7, 0x31, 0x2, 0x2, 0x75c, 0x75d, 0x7, 0x13, 0x2, 0x2, 0x75d, 
       0x75e, 0x7, 0x17, 0x2, 0x2, 0x75e, 0x75f, 0x7, 0x2f, 0x2, 0x2, 0x75f, 
       0x760, 0x7, 0xd1, 0x2, 0x2, 0x760, 0x761, 0x7, 0x8b, 0x2, 0x2, 0x761, 
       0x762, 0x7, 0x23, 0x2, 0x2, 0x762, 0x763, 0x7, 0x2f, 0x2, 0x2, 0x763, 
       0x764, 0x7, 0xa, 0x2, 0x2, 0x764, 0x765, 0x7, 0x4, 0x2, 0x2, 0x765, 
       0x766, 0x7, 0x14, 0x2, 0x2, 0x766, 0x767, 0x7, 0xb, 0x2, 0x2, 0x767, 
       0x768, 0x7, 0xd1, 0x2, 0x2, 0x768, 0x769, 0x7, 0x8c, 0x2, 0x2, 0x769, 
       0x76a, 0x7, 0x88, 0x2, 0x2, 0x76a, 0x76b, 0x7, 0x8d, 0x2, 0x2, 0x76b, 
       0x76c, 0x7, 0x27, 0x2, 0x2, 0x76c, 0x782, 0x7, 0xcc, 0x2, 0x2, 0x76d, 
       0x76e, 0x7, 0x31, 0x2, 0x2, 0x76e, 0x76f, 0x7, 0x13, 0x2, 0x2, 0x76f, 
       0x770, 0x7, 0x17, 0x2, 0x2, 0x770, 0x771, 0x7, 0x2f, 0x2, 0x2, 0x771, 
       0x772, 0x7, 0xd1, 0x2, 0x2, 0x772, 0x773, 0x7, 0x8b, 0x2, 0x2, 0x773, 
       0x774, 0x7, 0x23, 0x2, 0x2, 0x774, 0x775, 0x7, 0x2f, 0x2, 0x2, 0x775, 
       0x776, 0x7, 0xa, 0x2, 0x2, 0x776, 0x777, 0x7, 0x4, 0x2, 0x2, 0x777, 
       0x778, 0x7, 0x14, 0x2, 0x2, 0x778, 0x779, 0x7, 0xb, 0x2, 0x2, 0x779, 
       0x77a, 0x7, 0xd1, 0x2, 0x2, 0x77a, 0x77b, 0x7, 0x8c, 0x2, 0x2, 0x77b, 
       0x77c, 0x7, 0x88, 0x2, 0x2, 0x77c, 0x77d, 0x7, 0x8d, 0x2, 0x2, 0x77d, 
       0x77e, 0x7, 0x27, 0x2, 0x2, 0x77e, 0x77f, 0x7, 0xb, 0x2, 0x2, 0x77f, 
       0x780, 0x7, 0x46, 0x2, 0x2, 0x780, 0x782, 0x7, 0x7, 0x2, 0x2, 0x781, 
       0x75b, 0x3, 0x2, 0x2, 0x2, 0x781, 0x76d, 0x3, 0x2, 0x2, 0x2, 0x782, 
       0x65, 0x3, 0x2, 0x2, 0x2, 0x783, 0x784, 0x7, 0x31, 0x2, 0x2, 0x784, 
       0x785, 0x7, 0x13, 0x2, 0x2, 0x785, 0x786, 0x7, 0x17, 0x2, 0x2, 0x786, 
       0x787, 0x7, 0x2f, 0x2, 0x2, 0x787, 0x788, 0x7, 0xd1, 0x2, 0x2, 0x788, 
       0x789, 0x7, 0x8b, 0x2, 0x2, 0x789, 0x78a, 0x7, 0x23, 0x2, 0x2, 0x78a, 
       0x78b, 0x7, 0x2f, 0x2, 0x2, 0x78b, 0x78c, 0x7, 0xa, 0x2, 0x2, 0x78c, 
       0x78d, 0x7, 0x4, 0x2, 0x2, 0x78d, 0x78e, 0x7, 0x14, 0x2, 0x2, 0x78e, 
       0x78f, 0x7, 0xb, 0x2, 0x2, 0x78f, 0x790, 0x7, 0xd1, 0x2, 0x2, 0x790, 
       0x791, 0x7, 0x5a, 0x2, 0x2, 0x791, 0x792, 0x5, 0xb8, 0x5d, 0x2, 0x792, 
       0x793, 0x7, 0x8d, 0x2, 0x2, 0x793, 0x67, 0x3, 0x2, 0x2, 0x2, 0x794, 
       0x795, 0x7, 0xa4, 0x2, 0x2, 0x795, 0x796, 0x7, 0x4, 0x2, 0x2, 0x796, 
       0x797, 0x7, 0xc8, 0x2, 0x2, 0x797, 0x798, 0x7, 0x25, 0x2, 0x2, 0x798, 
       0x799, 0x5, 0x9e, 0x50, 0x2, 0x799, 0x69, 0x3, 0x2, 0x2, 0x2, 0x79a, 
       0x7a7, 0x5, 0x5a, 0x2e, 0x2, 0x79b, 0x7a7, 0x5, 0x58, 0x2d, 0x2, 
       0x79c, 0x7a7, 0x5, 0x56, 0x2c, 0x2, 0x79d, 0x7a7, 0x5, 0x54, 0x2b, 
       0x2, 0x79e, 0x7a7, 0x5, 0x52, 0x2a, 0x2, 0x79f, 0x7a7, 0x5, 0x5c, 
       0x2f, 0x2, 0x7a0, 0x7a7, 0x5, 0x5e, 0x30, 0x2, 0x7a1, 0x7a7, 0x5, 
       0x60, 0x31, 0x2, 0x7a2, 0x7a7, 0x5, 0x62, 0x32, 0x2, 0x7a3, 0x7a7, 
       0x5, 0x64, 0x33, 0x2, 0x7a4, 0x7a7, 0x5, 0x66, 0x34, 0x2, 0x7a5, 
       0x7a7, 0x5, 0x68, 0x35, 0x2, 0x7a6, 0x79a, 0x3, 0x2, 0x2, 0x2, 0x7a6, 
       0x79b, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x79c, 0x3, 0x2, 0x2, 0x2, 0x7a6, 
       0x79d, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x79e, 0x3, 0x2, 0x2, 0x2, 0x7a6, 
       0x79f, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a0, 0x3, 0x2, 0x2, 0x2, 0x7a6, 
       0x7a1, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a2, 0x3, 0x2, 0x2, 0x2, 0x7a6, 
       0x7a3, 0x3, 0x2, 0x2, 0x2, 0x7a6, 0x7a4, 0x3, 0x2, 0x2, 0x2, 0x7a6, 
       0x7a5, 0x3, 0x2, 0x2, 0x2, 0x7a7, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x7a8, 
       0x7a9, 0x7, 0x6a, 0x2, 0x2, 0x7a9, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x7aa, 
       0x7ab, 0x7, 0x93, 0x2, 0x2, 0x7ab, 0x7ac, 0x7, 0xe, 0x2, 0x2, 0x7ac, 
       0x7ad, 0x7, 0x59, 0x2, 0x2, 0x7ad, 0x7ae, 0x7, 0x13, 0x2, 0x2, 0x7ae, 
       0x7af, 0x7, 0x17, 0x2, 0x2, 0x7af, 0x7bd, 0x7, 0x57, 0x2, 0x2, 0x7b0, 
       0x7b1, 0x7, 0x93, 0x2, 0x2, 0x7b1, 0x7b2, 0x7, 0xe, 0x2, 0x2, 0x7b2, 
       0x7b3, 0x7, 0x56, 0x2, 0x2, 0x7b3, 0x7b4, 0x7, 0x13, 0x2, 0x2, 0x7b4, 
       0x7b5, 0x7, 0x17, 0x2, 0x2, 0x7b5, 0x7bd, 0x7, 0x57, 0x2, 0x2, 0x7b6, 
       0x7b7, 0x7, 0x93, 0x2, 0x2, 0x7b7, 0x7b8, 0x7, 0xe, 0x2, 0x2, 0x7b8, 
       0x7b9, 0x7, 0x59, 0x2, 0x2, 0x7b9, 0x7ba, 0x7, 0x13, 0x2, 0x2, 0x7ba, 
       0x7bb, 0x7, 0x37, 0x2, 0x2, 0x7bb, 0x7bd, 0x7, 0x57, 0x2, 0x2, 0x7bc, 
       0x7aa, 0x3, 0x2, 0x2, 0x2, 0x7bc, 0x7b0, 0x3, 0x2, 0x2, 0x2, 0x7bc, 
       0x7b6, 0x3, 0x2, 0x2, 0x2, 0x7bd, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x7be, 
       0x7bf, 0x7, 0x93, 0x2, 0x2, 0x7bf, 0x7c0, 0x7, 0xe, 0x2, 0x2, 0x7c0, 
       0x7c1, 0x7, 0x59, 0x2, 0x2, 0x7c1, 0x7c2, 0x7, 0x13, 0x2, 0x2, 0x7c2, 
       0x7c3, 0x7, 0xe, 0x2, 0x2, 0x7c3, 0x7c4, 0x7, 0xcb, 0x2, 0x2, 0x7c4, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x7c5, 0x7c6, 0x7, 0xaf, 0x2, 0x2, 0x7c6, 
       0x7c7, 0x7, 0x28, 0x2, 0x2, 0x7c7, 0x7c8, 0x7, 0xa7, 0x2, 0x2, 0x7c8, 
       0x7c9, 0x7, 0x1a, 0x2, 0x2, 0x7c9, 0x7ca, 0x7, 0x4d, 0x2, 0x2, 0x7ca, 
       0x7cb, 0x7, 0x2f, 0x2, 0x2, 0x7cb, 0x7cc, 0x7, 0x42, 0x2, 0x2, 0x7cc, 
       0x8aa, 0x7, 0x8, 0x2, 0x2, 0x7cd, 0x7ce, 0x7, 0xaf, 0x2, 0x2, 0x7ce, 
       0x7cf, 0x7, 0x2d, 0x2, 0x2, 0x7cf, 0x7d0, 0x7, 0x88, 0x2, 0x2, 0x7d0, 
       0x7d1, 0x7, 0x14, 0x2, 0x2, 0x7d1, 0x8aa, 0x7, 0x2f, 0x2, 0x2, 0x7d2, 
       0x7d3, 0x7, 0xaf, 0x2, 0x2, 0x7d3, 0x7d4, 0x7, 0x28, 0x2, 0x2, 0x7d4, 
       0x7d5, 0x7, 0xa7, 0x2, 0x2, 0x7d5, 0x7d6, 0x7, 0x17, 0x2, 0x2, 0x7d6, 
       0x7d7, 0x7, 0xb0, 0x2, 0x2, 0x7d7, 0x7d8, 0x7, 0x4d, 0x2, 0x2, 0x7d8, 
       0x7d9, 0x7, 0x2f, 0x2, 0x2, 0x7d9, 0x7da, 0x7, 0xb1, 0x2, 0x2, 0x7da, 
       0x7db, 0x7, 0x17, 0x2, 0x2, 0x7db, 0x8aa, 0x7, 0x57, 0x2, 0x2, 0x7dc, 
       0x7dd, 0x7, 0xaf, 0x2, 0x2, 0x7dd, 0x7de, 0x7, 0x28, 0x2, 0x2, 0x7de, 
       0x7df, 0x7, 0x91, 0x2, 0x2, 0x7df, 0x7e0, 0x7, 0x7, 0x2, 0x2, 0x7e0, 
       0x7e1, 0x7, 0x6, 0x2, 0x2, 0x7e1, 0x7e2, 0x7, 0x14, 0x2, 0x2, 0x7e2, 
       0x8aa, 0x7, 0xb, 0x2, 0x2, 0x7e3, 0x7e4, 0x7, 0xaf, 0x2, 0x2, 0x7e4, 
       0x7e5, 0x7, 0x28, 0x2, 0x2, 0x7e5, 0x7e6, 0x7, 0x91, 0x2, 0x2, 0x7e6, 
       0x7e7, 0x7, 0x7, 0x2, 0x2, 0x7e7, 0x7e8, 0x7, 0x6, 0x2, 0x2, 0x7e8, 
       0x7e9, 0x7, 0x14, 0x2, 0x2, 0x7e9, 0x7ea, 0x7, 0xb, 0x2, 0x2, 0x7ea, 
       0x7eb, 0x7, 0xa, 0x2, 0x2, 0x7eb, 0x7ec, 0x7, 0x20, 0x2, 0x2, 0x7ec, 
       0x7ed, 0x7, 0x6e, 0x2, 0x2, 0x7ed, 0x8aa, 0x7, 0x7, 0x2, 0x2, 0x7ee, 
       0x7ef, 0x7, 0xaf, 0x2, 0x2, 0x7ef, 0x7f0, 0x7, 0x1a, 0x2, 0x2, 0x7f0, 
       0x7f1, 0x7, 0x5, 0x2, 0x2, 0x7f1, 0x7f2, 0x7, 0xb2, 0x2, 0x2, 0x7f2, 
       0x7f3, 0x7, 0x76, 0x2, 0x2, 0x7f3, 0x8aa, 0x7, 0xb, 0x2, 0x2, 0x7f4, 
       0x7f5, 0x7, 0xaf, 0x2, 0x2, 0x7f5, 0x7f6, 0x7, 0x1a, 0x2, 0x2, 0x7f6, 
       0x7f7, 0x7, 0x5, 0x2, 0x2, 0x7f7, 0x7f8, 0x7, 0xb2, 0x2, 0x2, 0x7f8, 
       0x8aa, 0x7, 0xcc, 0x2, 0x2, 0x7f9, 0x7fa, 0x7, 0xaf, 0x2, 0x2, 0x7fa, 
       0x7fb, 0x7, 0x1a, 0x2, 0x2, 0x7fb, 0x7fc, 0x7, 0x5, 0x2, 0x2, 0x7fc, 
       0x7fd, 0x7, 0xb2, 0x2, 0x2, 0x7fd, 0x8aa, 0x7, 0x7, 0x2, 0x2, 0x7fe, 
       0x7ff, 0x7, 0xaf, 0x2, 0x2, 0x7ff, 0x800, 0x7, 0x1a, 0x2, 0x2, 0x800, 
       0x801, 0x7, 0x5, 0x2, 0x2, 0x801, 0x802, 0x7, 0xb2, 0x2, 0x2, 0x802, 
       0x803, 0x7, 0x14, 0x2, 0x2, 0x803, 0x804, 0x7, 0xb, 0x2, 0x2, 0x804, 
       0x805, 0x7, 0x46, 0x2, 0x2, 0x805, 0x8aa, 0x7, 0x7, 0x2, 0x2, 0x806, 
       0x807, 0x7, 0xaf, 0x2, 0x2, 0x807, 0x808, 0x7, 0x28, 0x2, 0x2, 0x808, 
       0x809, 0x7, 0x48, 0x2, 0x2, 0x809, 0x80a, 0x7, 0x1a, 0x2, 0x2, 0x80a, 
       0x80b, 0x7, 0xb3, 0x2, 0x2, 0x80b, 0x80c, 0x7, 0xb2, 0x2, 0x2, 0x80c, 
       0x8aa, 0x7, 0xcc, 0x2, 0x2, 0x80d, 0x80e, 0x7, 0xaf, 0x2, 0x2, 0x80e, 
       0x80f, 0x7, 0xa, 0x2, 0x2, 0x80f, 0x810, 0x7, 0x2f, 0x2, 0x2, 0x810, 
       0x8aa, 0x7, 0xb4, 0x2, 0x2, 0x811, 0x812, 0x7, 0xaf, 0x2, 0x2, 0x812, 
       0x813, 0x7, 0x1a, 0x2, 0x2, 0x813, 0x814, 0x7, 0x4c, 0x2, 0x2, 0x814, 
       0x815, 0x7, 0x2f, 0x2, 0x2, 0x815, 0x816, 0x7, 0x42, 0x2, 0x2, 0x816, 
       0x817, 0x7, 0x28, 0x2, 0x2, 0x817, 0x818, 0x7, 0xb4, 0x2, 0x2, 0x818, 
       0x819, 0x7, 0x3b, 0x2, 0x2, 0x819, 0x81a, 0x7, 0xe, 0x2, 0x2, 0x81a, 
       0x81b, 0x7, 0xb0, 0x2, 0x2, 0x81b, 0x81c, 0x7, 0xb5, 0x2, 0x2, 0x81c, 
       0x81d, 0x7, 0xb1, 0x2, 0x2, 0x81d, 0x81e, 0x7, 0x1c, 0x2, 0x2, 0x81e, 
       0x8aa, 0x7, 0x57, 0x2, 0x2, 0x81f, 0x820, 0x7, 0xaf, 0x2, 0x2, 0x820, 
       0x821, 0x7, 0x28, 0x2, 0x2, 0x821, 0x822, 0x7, 0xa7, 0x2, 0x2, 0x822, 
       0x823, 0x7, 0x17, 0x2, 0x2, 0x823, 0x824, 0x7, 0xb0, 0x2, 0x2, 0x824, 
       0x825, 0x7, 0x4c, 0x2, 0x2, 0x825, 0x826, 0x7, 0x2f, 0x2, 0x2, 0x826, 
       0x827, 0x7, 0x42, 0x2, 0x2, 0x827, 0x828, 0x7, 0x1a, 0x2, 0x2, 0x828, 
       0x829, 0x7, 0x5, 0x2, 0x2, 0x829, 0x82a, 0x7, 0xb1, 0x2, 0x2, 0x82a, 
       0x82b, 0x7, 0x17, 0x2, 0x2, 0x82b, 0x8aa, 0x7, 0x57, 0x2, 0x2, 0x82c, 
       0x82d, 0x7, 0xaf, 0x2, 0x2, 0x82d, 0x82e, 0x7, 0x99, 0x2, 0x2, 0x82e, 
       0x82f, 0x7, 0x25, 0x2, 0x2, 0x82f, 0x830, 0x7, 0xb2, 0x2, 0x2, 0x830, 
       0x831, 0x7, 0x76, 0x2, 0x2, 0x831, 0x8aa, 0x7, 0xb, 0x2, 0x2, 0x832, 
       0x833, 0x7, 0xaf, 0x2, 0x2, 0x833, 0x834, 0x7, 0x28, 0x2, 0x2, 0x834, 
       0x835, 0x7, 0x71, 0x2, 0x2, 0x835, 0x836, 0x7, 0x14, 0x2, 0x2, 0x836, 
       0x8aa, 0x7, 0x2f, 0x2, 0x2, 0x837, 0x838, 0x7, 0xaf, 0x2, 0x2, 0x838, 
       0x839, 0x7, 0x28, 0x2, 0x2, 0x839, 0x83a, 0x7, 0x71, 0x2, 0x2, 0x83a, 
       0x83b, 0x7, 0x17, 0x2, 0x2, 0x83b, 0x83c, 0x7, 0x5f, 0x2, 0x2, 0x83c, 
       0x83d, 0x7, 0x4c, 0x2, 0x2, 0x83d, 0x83e, 0x7, 0x2f, 0x2, 0x2, 0x83e, 
       0x83f, 0x7, 0xb1, 0x2, 0x2, 0x83f, 0x840, 0x7, 0x17, 0x2, 0x2, 0x840, 
       0x8aa, 0x7, 0x57, 0x2, 0x2, 0x841, 0x842, 0x7, 0xaf, 0x2, 0x2, 0x842, 
       0x843, 0x7, 0x14, 0x2, 0x2, 0x843, 0x844, 0x7, 0x41, 0x2, 0x2, 0x844, 
       0x845, 0x7, 0x4f, 0x2, 0x2, 0x845, 0x846, 0x7, 0x84, 0x2, 0x2, 0x846, 
       0x847, 0x7, 0x6, 0x2, 0x2, 0x847, 0x848, 0x7, 0x76, 0x2, 0x2, 0x848, 
       0x8aa, 0x7, 0x85, 0x2, 0x2, 0x849, 0x84a, 0x7, 0xaf, 0x2, 0x2, 0x84a, 
       0x84b, 0x7, 0x28, 0x2, 0x2, 0x84b, 0x84c, 0x7, 0x53, 0x2, 0x2, 0x84c, 
       0x84d, 0x7, 0x24, 0x2, 0x2, 0x84d, 0x84e, 0x7, 0x2f, 0x2, 0x2, 0x84e, 
       0x84f, 0x7, 0x19, 0x2, 0x2, 0x84f, 0x8aa, 0x7, 0x8, 0x2, 0x2, 0x850, 
       0x851, 0x7, 0xaf, 0x2, 0x2, 0x851, 0x852, 0x7, 0x2d, 0x2, 0x2, 0x852, 
       0x853, 0x7, 0xa7, 0x2, 0x2, 0x853, 0x854, 0x7, 0x37, 0x2, 0x2, 0x854, 
       0x855, 0x7, 0xb0, 0x2, 0x2, 0x855, 0x856, 0x7, 0x2f, 0x2, 0x2, 0x856, 
       0x857, 0x7, 0xb1, 0x2, 0x2, 0x857, 0x858, 0x7, 0x37, 0x2, 0x2, 0x858, 
       0x8aa, 0x7, 0x57, 0x2, 0x2, 0x859, 0x85a, 0x7, 0xaf, 0x2, 0x2, 0x85a, 
       0x85b, 0x7, 0x1a, 0x2, 0x2, 0x85b, 0x85c, 0x7, 0x4c, 0x2, 0x2, 0x85c, 
       0x85d, 0x7, 0x2f, 0x2, 0x2, 0x85d, 0x85e, 0x7, 0x42, 0x2, 0x2, 0x85e, 
       0x85f, 0x7, 0x28, 0x2, 0x2, 0x85f, 0x8aa, 0x7, 0xb4, 0x2, 0x2, 0x860, 
       0x861, 0x7, 0xaf, 0x2, 0x2, 0x861, 0x862, 0x7, 0xcc, 0x2, 0x2, 0x862, 
       0x863, 0x7, 0x4f, 0x2, 0x2, 0x863, 0x8aa, 0x7, 0x36, 0x2, 0x2, 0x864, 
       0x865, 0x7, 0xaf, 0x2, 0x2, 0x865, 0x866, 0x7, 0x28, 0x2, 0x2, 0x866, 
       0x867, 0x7, 0xa7, 0x2, 0x2, 0x867, 0x868, 0x7, 0x17, 0x2, 0x2, 0x868, 
       0x869, 0x7, 0xb0, 0x2, 0x2, 0x869, 0x86a, 0x7, 0x4c, 0x2, 0x2, 0x86a, 
       0x86b, 0x7, 0x2f, 0x2, 0x2, 0x86b, 0x86c, 0x7, 0xb1, 0x2, 0x2, 0x86c, 
       0x86d, 0x7, 0x17, 0x2, 0x2, 0x86d, 0x8aa, 0x7, 0x57, 0x2, 0x2, 0x86e, 
       0x86f, 0x7, 0xaf, 0x2, 0x2, 0x86f, 0x870, 0x7, 0x28, 0x2, 0x2, 0x870, 
       0x871, 0x7, 0xa7, 0x2, 0x2, 0x871, 0x872, 0x7, 0x17, 0x2, 0x2, 0x872, 
       0x873, 0x7, 0xb0, 0x2, 0x2, 0x873, 0x874, 0x7, 0x4c, 0x2, 0x2, 0x874, 
       0x875, 0x7, 0x2f, 0x2, 0x2, 0x875, 0x876, 0x7, 0x42, 0x2, 0x2, 0x876, 
       0x877, 0x7, 0x8, 0x2, 0x2, 0x877, 0x878, 0x7, 0xb1, 0x2, 0x2, 0x878, 
       0x879, 0x7, 0x17, 0x2, 0x2, 0x879, 0x8aa, 0x7, 0x57, 0x2, 0x2, 0x87a, 
       0x87b, 0x7, 0xaf, 0x2, 0x2, 0x87b, 0x87c, 0x7, 0x28, 0x2, 0x2, 0x87c, 
       0x87d, 0x7, 0x83, 0x2, 0x2, 0x87d, 0x87e, 0x7, 0x1a, 0x2, 0x2, 0x87e, 
       0x8aa, 0x7, 0x5, 0x2, 0x2, 0x87f, 0x880, 0x7, 0xaf, 0x2, 0x2, 0x880, 
       0x881, 0x7, 0xcc, 0x2, 0x2, 0x881, 0x882, 0x7, 0x4f, 0x2, 0x2, 0x882, 
       0x883, 0x7, 0xb7, 0x2, 0x2, 0x883, 0x884, 0x7, 0x19, 0x2, 0x2, 0x884, 
       0x885, 0x7, 0x17, 0x2, 0x2, 0x885, 0x8aa, 0x7, 0x63, 0x2, 0x2, 0x886, 
       0x887, 0x7, 0xaf, 0x2, 0x2, 0x887, 0x888, 0x7, 0x28, 0x2, 0x2, 0x888, 
       0x889, 0x7, 0x5f, 0x2, 0x2, 0x889, 0x8aa, 0x7, 0x60, 0x2, 0x2, 0x88a, 
       0x88b, 0x7, 0xaf, 0x2, 0x2, 0x88b, 0x88c, 0x7, 0x28, 0x2, 0x2, 0x88c, 
       0x88d, 0x7, 0x71, 0x2, 0x2, 0x88d, 0x8aa, 0x7, 0xcc, 0x2, 0x2, 0x88e, 
       0x88f, 0x7, 0xaf, 0x2, 0x2, 0x88f, 0x890, 0x7, 0x14, 0x2, 0x2, 0x890, 
       0x891, 0x7, 0x2f, 0x2, 0x2, 0x891, 0x892, 0x7, 0x46, 0x2, 0x2, 0x892, 
       0x893, 0x7, 0x8f, 0x2, 0x2, 0x893, 0x894, 0x7, 0x28, 0x2, 0x2, 0x894, 
       0x895, 0x7, 0xbd, 0x2, 0x2, 0x895, 0x896, 0x7, 0xc7, 0x2, 0x2, 0x896, 
       0x897, 0x7, 0x19, 0x2, 0x2, 0x897, 0x8aa, 0x7, 0xa7, 0x2, 0x2, 0x898, 
       0x899, 0x7, 0xaf, 0x2, 0x2, 0x899, 0x89a, 0x7, 0x28, 0x2, 0x2, 0x89a, 
       0x89b, 0x7, 0xd, 0x2, 0x2, 0x89b, 0x89c, 0x7, 0x1a, 0x2, 0x2, 0x89c, 
       0x89d, 0x7, 0x5, 0x2, 0x2, 0x89d, 0x89e, 0x7, 0x3b, 0x2, 0x2, 0x89e, 
       0x89f, 0x7, 0xe, 0x2, 0x2, 0x89f, 0x8a0, 0x7, 0xb0, 0x2, 0x2, 0x8a0, 
       0x8a1, 0x7, 0xb5, 0x2, 0x2, 0x8a1, 0x8a2, 0x7, 0xb1, 0x2, 0x2, 0x8a2, 
       0x8a3, 0x7, 0x17, 0x2, 0x2, 0x8a3, 0x8aa, 0x7, 0x57, 0x2, 0x2, 0x8a4, 
       0x8a5, 0x7, 0xaf, 0x2, 0x2, 0x8a5, 0x8a6, 0x7, 0x28, 0x2, 0x2, 0x8a6, 
       0x8a7, 0x7, 0xd, 0x2, 0x2, 0x8a7, 0x8a8, 0x7, 0x1a, 0x2, 0x2, 0x8a8, 
       0x8aa, 0x7, 0x5, 0x2, 0x2, 0x8a9, 0x7c5, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x7cd, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x7d2, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x7dc, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x7e3, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x7ee, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x7f4, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x7f9, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x7fe, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x806, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x80d, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x811, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x81f, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x82c, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x832, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x837, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x841, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x849, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x850, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x859, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x860, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x864, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x86e, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x87a, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x87f, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x886, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x88a, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x88e, 0x3, 0x2, 0x2, 0x2, 0x8a9, 0x898, 0x3, 0x2, 0x2, 0x2, 0x8a9, 
       0x8a4, 0x3, 0x2, 0x2, 0x2, 0x8aa, 0x73, 0x3, 0x2, 0x2, 0x2, 0x8ab, 
       0x8ac, 0x7, 0xaf, 0x2, 0x2, 0x8ac, 0x8ad, 0x7, 0x2d, 0x2, 0x2, 0x8ad, 
       0x8ae, 0x7, 0xb6, 0x2, 0x2, 0x8ae, 0x8af, 0x7, 0x15, 0x2, 0x2, 0x8af, 
       0x8b0, 0x7, 0xd1, 0x2, 0x2, 0x8b0, 0x8b1, 0x5, 0xca, 0x66, 0x2, 0x8b1, 
       0x8b2, 0x7, 0x3b, 0x2, 0x2, 0x8b2, 0x8b3, 0x7, 0x1c, 0x2, 0x2, 0x8b3, 
       0x8b4, 0x7, 0x1b, 0x2, 0x2, 0x8b4, 0x8b5, 0x7, 0x13, 0x2, 0x2, 0x8b5, 
       0x8b6, 0x7, 0x15, 0x2, 0x2, 0x8b6, 0x8b7, 0x7, 0x2d, 0x2, 0x2, 0x8b7, 
       0x8b8, 0x7, 0xb6, 0x2, 0x2, 0x8b8, 0x75, 0x3, 0x2, 0x2, 0x2, 0x8b9, 
       0x8ba, 0x5, 0x6e, 0x38, 0x2, 0x8ba, 0x8bb, 0x7, 0xd1, 0x2, 0x2, 0x8bb, 
       0x8bc, 0x5, 0xca, 0x66, 0x2, 0x8bc, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8bd, 
       0x8be, 0x5, 0x72, 0x3a, 0x2, 0x8be, 0x8bf, 0x7, 0xd1, 0x2, 0x2, 0x8bf, 
       0x8c0, 0x5, 0xca, 0x66, 0x2, 0x8c0, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8c1, 
       0x8c2, 0x5, 0x6c, 0x37, 0x2, 0x8c2, 0x8c3, 0x7, 0xd3, 0x2, 0x2, 0x8c3, 
       0x8c4, 0x5, 0xca, 0x66, 0x2, 0x8c4, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8c5, 
       0x8cb, 0x5, 0x74, 0x3b, 0x2, 0x8c6, 0x8c7, 0x5, 0x70, 0x39, 0x2, 
       0x8c7, 0x8c8, 0x7, 0xd1, 0x2, 0x2, 0x8c8, 0x8c9, 0x5, 0xca, 0x66, 
       0x2, 0x8c9, 0x8cb, 0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8b9, 0x3, 0x2, 0x2, 
       0x2, 0x8ca, 0x8bd, 0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8c1, 0x3, 0x2, 0x2, 
       0x2, 0x8ca, 0x8c5, 0x3, 0x2, 0x2, 0x2, 0x8ca, 0x8c6, 0x3, 0x2, 0x2, 
       0x2, 0x8cb, 0x77, 0x3, 0x2, 0x2, 0x2, 0x8cc, 0x8cd, 0x7, 0x4e, 0x2, 
       0x2, 0x8cd, 0x8ce, 0x7, 0x28, 0x2, 0x2, 0x8ce, 0x8cf, 0x7, 0xb8, 
       0x2, 0x2, 0x8cf, 0x8d0, 0x7, 0xb6, 0x2, 0x2, 0x8d0, 0x8d1, 0x7, 0x15, 
       0x2, 0x2, 0x8d1, 0x8d2, 0x7, 0xd1, 0x2, 0x2, 0x8d2, 0x8d3, 0x7, 0xb9, 
       0x2, 0x2, 0x8d3, 0x8d4, 0x7, 0x2d, 0x2, 0x2, 0x8d4, 0x8d5, 0x7, 0xb6, 
       0x2, 0x2, 0x8d5, 0x8d6, 0x7, 0xe, 0x2, 0x2, 0x8d6, 0x8d7, 0x7, 0x15, 
       0x2, 0x2, 0x8d7, 0x79, 0x3, 0x2, 0x2, 0x2, 0x8d8, 0x8d9, 0x7, 0x4e, 
       0x2, 0x2, 0x8d9, 0x8da, 0x7, 0x28, 0x2, 0x2, 0x8da, 0x8db, 0x7, 0xb8, 
       0x2, 0x2, 0x8db, 0x8dc, 0x7, 0xc1, 0x2, 0x2, 0x8dc, 0x8dd, 0x7, 0x33, 
       0x2, 0x2, 0x8dd, 0x8de, 0x7, 0x3b, 0x2, 0x2, 0x8de, 0x8df, 0x7, 0xe, 
       0x2, 0x2, 0x8df, 0x8e0, 0x7, 0xb0, 0x2, 0x2, 0x8e0, 0x8e1, 0x7, 0xb5, 
       0x2, 0x2, 0x8e1, 0x8e2, 0x7, 0xb1, 0x2, 0x2, 0x8e2, 0x8e3, 0x7, 0x1c, 
       0x2, 0x2, 0x8e3, 0x8e4, 0x7, 0x57, 0x2, 0x2, 0x8e4, 0x8e5, 0x7, 0xd1, 
       0x2, 0x2, 0x8e5, 0x8e6, 0x7, 0xb9, 0x2, 0x2, 0x8e6, 0x8e7, 0x7, 0xc1, 
       0x2, 0x2, 0x8e7, 0x8e8, 0x5, 0xb8, 0x5d, 0x2, 0x8e8, 0x8e9, 0x7, 
       0x49, 0x2, 0x2, 0x8e9, 0x8ea, 0x7, 0x33, 0x2, 0x2, 0x8ea, 0x8eb, 
       0x7, 0xd2, 0x2, 0x2, 0x8eb, 0x8ec, 0x7, 0x76, 0x2, 0x2, 0x8ec, 0x8ed, 
       0x7, 0x64, 0x2, 0x2, 0x8ed, 0x8ee, 0x7, 0xc4, 0x2, 0x2, 0x8ee, 0x8ef, 
       0x7, 0xc5, 0x2, 0x2, 0x8ef, 0x8f0, 0x7, 0x33, 0x2, 0x2, 0x8f0, 0x8f1, 
       0x7, 0xaa, 0x2, 0x2, 0x8f1, 0x8f2, 0x7, 0xc6, 0x2, 0x2, 0x8f2, 0x8f3, 
       0x5, 0xb8, 0x5d, 0x2, 0x8f3, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x8f4, 0x8f5, 
       0x7, 0x4e, 0x2, 0x2, 0x8f5, 0x8f6, 0x7, 0x28, 0x2, 0x2, 0x8f6, 0x8f7, 
       0x7, 0xb8, 0x2, 0x2, 0x8f7, 0x8f8, 0x7, 0x81, 0x2, 0x2, 0x8f8, 0x8f9, 
       0x7, 0xc, 0x2, 0x2, 0x8f9, 0x8fa, 0x7, 0x48, 0x2, 0x2, 0x8fa, 0x8fb, 
       0x7, 0x24, 0x2, 0x2, 0x8fb, 0x8fc, 0x7, 0x25, 0x2, 0x2, 0x8fc, 0x8fd, 
       0x7, 0x82, 0x2, 0x2, 0x8fd, 0x8fe, 0x7, 0xd1, 0x2, 0x2, 0x8fe, 0x8ff, 
       0x7, 0xb9, 0x2, 0x2, 0x8ff, 0x900, 0x7, 0x32, 0x2, 0x2, 0x900, 0x901, 
       0x7, 0xa, 0x2, 0x2, 0x901, 0x902, 0x7, 0x9d, 0x2, 0x2, 0x902, 0x903, 
       0x7, 0x33, 0x2, 0x2, 0x903, 0x904, 0x7, 0x19, 0x2, 0x2, 0x904, 0x905, 
       0x7, 0x4, 0x2, 0x2, 0x905, 0x906, 0x7, 0x5, 0x2, 0x2, 0x906, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x907, 0x90b, 0x5, 0x78, 0x3d, 0x2, 0x908, 0x90b, 
       0x5, 0x7a, 0x3e, 0x2, 0x909, 0x90b, 0x5, 0x7c, 0x3f, 0x2, 0x90a, 
       0x907, 0x3, 0x2, 0x2, 0x2, 0x90a, 0x908, 0x3, 0x2, 0x2, 0x2, 0x90a, 
       0x909, 0x3, 0x2, 0x2, 0x2, 0x90b, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x90c, 
       0x90d, 0x7, 0x4e, 0x2, 0x2, 0x90d, 0x90e, 0x7, 0x2d, 0x2, 0x2, 0x90e, 
       0x919, 0x7, 0xba, 0x2, 0x2, 0x90f, 0x910, 0x7, 0x4e, 0x2, 0x2, 0x910, 
       0x911, 0x7, 0x2d, 0x2, 0x2, 0x911, 0x919, 0x7, 0xbb, 0x2, 0x2, 0x912, 
       0x913, 0x7, 0x4e, 0x2, 0x2, 0x913, 0x914, 0x7, 0x28, 0x2, 0x2, 0x914, 
       0x919, 0x7, 0xba, 0x2, 0x2, 0x915, 0x916, 0x7, 0x4e, 0x2, 0x2, 0x916, 
       0x917, 0x7, 0x28, 0x2, 0x2, 0x917, 0x919, 0x7, 0xbb, 0x2, 0x2, 0x918, 
       0x90c, 0x3, 0x2, 0x2, 0x2, 0x918, 0x90f, 0x3, 0x2, 0x2, 0x2, 0x918, 
       0x912, 0x3, 0x2, 0x2, 0x2, 0x918, 0x915, 0x3, 0x2, 0x2, 0x2, 0x919, 
       0x81, 0x3, 0x2, 0x2, 0x2, 0x91a, 0x91b, 0x7, 0x4e, 0x2, 0x2, 0x91b, 
       0x91c, 0x7, 0x2d, 0x2, 0x2, 0x91c, 0x921, 0x7, 0xab, 0x2, 0x2, 0x91d, 
       0x91e, 0x7, 0x4e, 0x2, 0x2, 0x91e, 0x91f, 0x7, 0x28, 0x2, 0x2, 0x91f, 
       0x921, 0x7, 0xab, 0x2, 0x2, 0x920, 0x91a, 0x3, 0x2, 0x2, 0x2, 0x920, 
       0x91d, 0x3, 0x2, 0x2, 0x2, 0x921, 0x83, 0x3, 0x2, 0x2, 0x2, 0x922, 
       0x926, 0x7, 0x4e, 0x2, 0x2, 0x923, 0x927, 0x7, 0xa6, 0x2, 0x2, 0x924, 
       0x925, 0x7, 0x28, 0x2, 0x2, 0x925, 0x927, 0x7, 0x7e, 0x2, 0x2, 0x926, 
       0x923, 0x3, 0x2, 0x2, 0x2, 0x926, 0x924, 0x3, 0x2, 0x2, 0x2, 0x927, 
       0x928, 0x3, 0x2, 0x2, 0x2, 0x928, 0x929, 0x7, 0xbc, 0x2, 0x2, 0x929, 
       0x92a, 0x7, 0x24, 0x2, 0x2, 0x92a, 0x92b, 0x7, 0x4d, 0x2, 0x2, 0x92b, 
       0x92c, 0x7, 0x2f, 0x2, 0x2, 0x92c, 0x92d, 0x7, 0x76, 0x2, 0x2, 0x92d, 
       0x93b, 0x7, 0x57, 0x2, 0x2, 0x92e, 0x932, 0x7, 0x4e, 0x2, 0x2, 0x92f, 
       0x933, 0x7, 0xa6, 0x2, 0x2, 0x930, 0x931, 0x7, 0x28, 0x2, 0x2, 0x931, 
       0x933, 0x7, 0x7e, 0x2, 0x2, 0x932, 0x92f, 0x3, 0x2, 0x2, 0x2, 0x932, 
       0x930, 0x3, 0x2, 0x2, 0x2, 0x933, 0x934, 0x3, 0x2, 0x2, 0x2, 0x934, 
       0x935, 0x7, 0xbc, 0x2, 0x2, 0x935, 0x936, 0x7, 0x1a, 0x2, 0x2, 0x936, 
       0x937, 0x7, 0x4c, 0x2, 0x2, 0x937, 0x938, 0x7, 0x2f, 0x2, 0x2, 0x938, 
       0x939, 0x7, 0x76, 0x2, 0x2, 0x939, 0x93b, 0x7, 0x57, 0x2, 0x2, 0x93a, 
       0x922, 0x3, 0x2, 0x2, 0x2, 0x93a, 0x92e, 0x3, 0x2, 0x2, 0x2, 0x93b, 
       0x85, 0x3, 0x2, 0x2, 0x2, 0x93c, 0x940, 0x7, 0x4e, 0x2, 0x2, 0x93d, 
       0x941, 0x7, 0xa6, 0x2, 0x2, 0x93e, 0x93f, 0x7, 0x28, 0x2, 0x2, 0x93f, 
       0x941, 0x7, 0x7e, 0x2, 0x2, 0x940, 0x93d, 0x3, 0x2, 0x2, 0x2, 0x940, 
       0x93e, 0x3, 0x2, 0x2, 0x2, 0x941, 0x942, 0x3, 0x2, 0x2, 0x2, 0x942, 
       0x943, 0x7, 0x20, 0x2, 0x2, 0x943, 0x944, 0x7, 0xa2, 0x2, 0x2, 0x944, 
       0x945, 0x7, 0x17, 0x2, 0x2, 0x945, 0x946, 0x7, 0x5f, 0x2, 0x2, 0x946, 
       0x947, 0x7, 0x60, 0x2, 0x2, 0x947, 0x87, 0x3, 0x2, 0x2, 0x2, 0x948, 
       0x949, 0x7, 0x4e, 0x2, 0x2, 0x949, 0x94a, 0x7, 0x28, 0x2, 0x2, 0x94a, 
       0x94b, 0x7, 0x95, 0x2, 0x2, 0x94b, 0x94c, 0x7, 0x1d, 0x2, 0x2, 0x94c, 
       0x956, 0x7, 0xcc, 0x2, 0x2, 0x94d, 0x951, 0x7, 0x4e, 0x2, 0x2, 0x94e, 
       0x952, 0x7, 0xa8, 0x2, 0x2, 0x94f, 0x950, 0x7, 0x28, 0x2, 0x2, 0x950, 
       0x952, 0x7, 0x95, 0x2, 0x2, 0x951, 0x94e, 0x3, 0x2, 0x2, 0x2, 0x951, 
       0x94f, 0x3, 0x2, 0x2, 0x2, 0x952, 0x953, 0x3, 0x2, 0x2, 0x2, 0x953, 
       0x954, 0x7, 0x1d, 0x2, 0x2, 0x954, 0x956, 0x7, 0xcc, 0x2, 0x2, 0x955, 
       0x948, 0x3, 0x2, 0x2, 0x2, 0x955, 0x94d, 0x3, 0x2, 0x2, 0x2, 0x956, 
       0x89, 0x3, 0x2, 0x2, 0x2, 0x957, 0x958, 0x7, 0x4e, 0x2, 0x2, 0x958, 
       0x959, 0x7, 0x2d, 0x2, 0x2, 0x959, 0x95a, 0x7, 0x95, 0x2, 0x2, 0x95a, 
       0x95b, 0x7, 0x4a, 0x2, 0x2, 0x95b, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x95c, 
       0x960, 0x7, 0x4e, 0x2, 0x2, 0x95d, 0x961, 0x7, 0xa6, 0x2, 0x2, 0x95e, 
       0x95f, 0x7, 0x28, 0x2, 0x2, 0x95f, 0x961, 0x7, 0x7e, 0x2, 0x2, 0x960, 
       0x95d, 0x3, 0x2, 0x2, 0x2, 0x960, 0x95e, 0x3, 0x2, 0x2, 0x2, 0x961, 
       0x962, 0x3, 0x2, 0x2, 0x2, 0x962, 0x963, 0x7, 0xbd, 0x2, 0x2, 0x963, 
       0x964, 0x7, 0x1a, 0x2, 0x2, 0x964, 0x965, 0x7, 0x4c, 0x2, 0x2, 0x965, 
       0x966, 0x7, 0x2f, 0x2, 0x2, 0x966, 0x967, 0x7, 0x76, 0x2, 0x2, 0x967, 
       0x968, 0x7, 0x57, 0x2, 0x2, 0x968, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x969, 
       0x96a, 0x7, 0x4e, 0x2, 0x2, 0x96a, 0x96b, 0x7, 0xa, 0x2, 0x2, 0x96b, 
       0x96c, 0x7, 0xb, 0x2, 0x2, 0x96c, 0x96d, 0x7, 0x20, 0x2, 0x2, 0x96d, 
       0x96e, 0x7, 0x6e, 0x2, 0x2, 0x96e, 0x96f, 0x7, 0x7, 0x2, 0x2, 0x96f, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x970, 0x971, 0x7, 0x4e, 0x2, 0x2, 0x971, 
       0x972, 0x7, 0x28, 0x2, 0x2, 0x972, 0x973, 0x7, 0x7e, 0x2, 0x2, 0x973, 
       0x974, 0x7, 0x93, 0x2, 0x2, 0x974, 0x975, 0x7, 0x94, 0x2, 0x2, 0x975, 
       0x976, 0x5, 0xb8, 0x5d, 0x2, 0x976, 0x977, 0x7, 0x36, 0x2, 0x2, 0x977, 
       0x978, 0x7, 0x2f, 0x2, 0x2, 0x978, 0x979, 0x7, 0x6, 0x2, 0x2, 0x979, 
       0x97a, 0x7, 0x17, 0x2, 0x2, 0x97a, 0x97b, 0x7, 0x38, 0x2, 0x2, 0x97b, 
       0x91, 0x3, 0x2, 0x2, 0x2, 0x97c, 0x97d, 0x7, 0x4e, 0x2, 0x2, 0x97d, 
       0x97e, 0x7, 0x28, 0x2, 0x2, 0x97e, 0x97f, 0x7, 0x7e, 0x2, 0x2, 0x97f, 
       0x980, 0x7, 0x3a, 0x2, 0x2, 0x980, 0x93, 0x3, 0x2, 0x2, 0x2, 0x981, 
       0x982, 0x7, 0x4e, 0x2, 0x2, 0x982, 0x983, 0x7, 0x28, 0x2, 0x2, 0x983, 
       0x984, 0x7, 0xc0, 0x2, 0x2, 0x984, 0x985, 0x7, 0xbf, 0x2, 0x2, 0x985, 
       0x986, 0x7, 0x14, 0x2, 0x2, 0x986, 0x987, 0x7, 0xb, 0x2, 0x2, 0x987, 
       0x988, 0x7, 0x76, 0x2, 0x2, 0x988, 0x989, 0x7, 0x57, 0x2, 0x2, 0x989, 
       0x95, 0x3, 0x2, 0x2, 0x2, 0x98a, 0x98b, 0x7, 0x4e, 0x2, 0x2, 0x98b, 
       0x98c, 0x7, 0x3e, 0x2, 0x2, 0x98c, 0x98d, 0x7, 0x47, 0x2, 0x2, 0x98d, 
       0x98e, 0x7, 0xc2, 0x2, 0x2, 0x98e, 0x98f, 0x7, 0xc3, 0x2, 0x2, 0x98f, 
       0x97, 0x3, 0x2, 0x2, 0x2, 0x990, 0x991, 0x7, 0x4e, 0x2, 0x2, 0x991, 
       0x992, 0x7, 0x28, 0x2, 0x2, 0x992, 0x993, 0x7, 0x7e, 0x2, 0x2, 0x993, 
       0x994, 0x7, 0x11, 0x2, 0x2, 0x994, 0x995, 0x7, 0x82, 0x2, 0x2, 0x995, 
       0x996, 0x7, 0x58, 0x2, 0x2, 0x996, 0x997, 0x7, 0x1c, 0x2, 0x2, 0x997, 
       0x998, 0x7, 0x5, 0x2, 0x2, 0x998, 0x99, 0x3, 0x2, 0x2, 0x2, 0x999, 
       0x99a, 0x7, 0x4e, 0x2, 0x2, 0x99a, 0x99b, 0x7, 0x28, 0x2, 0x2, 0x99b, 
       0x99c, 0x7, 0x7e, 0x2, 0x2, 0x99c, 0x99d, 0x7, 0xa1, 0x2, 0x2, 0x99d, 
       0x99e, 0x7, 0x41, 0x2, 0x2, 0x99e, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x99f, 
       0x9a0, 0x7, 0x4e, 0x2, 0x2, 0x9a0, 0x9a1, 0x7, 0x2d, 0x2, 0x2, 0x9a1, 
       0x9a2, 0x7, 0x95, 0x2, 0x2, 0x9a2, 0x9a3, 0x7, 0x6, 0x2, 0x2, 0x9a3, 
       0x9a4, 0x7, 0x7, 0x2, 0x2, 0x9a4, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9a5, 
       0x9b5, 0x5, 0x80, 0x41, 0x2, 0x9a6, 0x9b5, 0x5, 0x82, 0x42, 0x2, 
       0x9a7, 0x9b5, 0x5, 0x84, 0x43, 0x2, 0x9a8, 0x9b5, 0x5, 0x86, 0x44, 
       0x2, 0x9a9, 0x9b5, 0x5, 0x88, 0x45, 0x2, 0x9aa, 0x9b5, 0x5, 0x8a, 
       0x46, 0x2, 0x9ab, 0x9b5, 0x5, 0x8c, 0x47, 0x2, 0x9ac, 0x9b5, 0x5, 
       0x8e, 0x48, 0x2, 0x9ad, 0x9b5, 0x5, 0x90, 0x49, 0x2, 0x9ae, 0x9b5, 
       0x5, 0x92, 0x4a, 0x2, 0x9af, 0x9b5, 0x5, 0x94, 0x4b, 0x2, 0x9b0, 
       0x9b5, 0x5, 0x96, 0x4c, 0x2, 0x9b1, 0x9b5, 0x5, 0x98, 0x4d, 0x2, 
       0x9b2, 0x9b5, 0x5, 0x9a, 0x4e, 0x2, 0x9b3, 0x9b5, 0x5, 0x9c, 0x4f, 
       0x2, 0x9b4, 0x9a5, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9a6, 0x3, 0x2, 0x2, 
       0x2, 0x9b4, 0x9a7, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9a8, 0x3, 0x2, 0x2, 
       0x2, 0x9b4, 0x9a9, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9aa, 0x3, 0x2, 0x2, 
       0x2, 0x9b4, 0x9ab, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9ac, 0x3, 0x2, 0x2, 
       0x2, 0x9b4, 0x9ad, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9ae, 0x3, 0x2, 0x2, 
       0x2, 0x9b4, 0x9af, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9b0, 0x3, 0x2, 0x2, 
       0x2, 0x9b4, 0x9b1, 0x3, 0x2, 0x2, 0x2, 0x9b4, 0x9b2, 0x3, 0x2, 0x2, 
       0x2, 0x9b4, 0x9b3, 0x3, 0x2, 0x2, 0x2, 0x9b5, 0x9f, 0x3, 0x2, 0x2, 
       0x2, 0x9b6, 0x9b7, 0x7, 0xcc, 0x2, 0x2, 0x9b7, 0x9b8, 0x7, 0xab, 
       0x2, 0x2, 0x9b8, 0x9b9, 0x7, 0xac, 0x2, 0x2, 0x9b9, 0x9ba, 0x7, 0xad, 
       0x2, 0x2, 0x9ba, 0x9bb, 0x7, 0x22, 0x2, 0x2, 0x9bb, 0x9bc, 0x7, 0x2f, 
       0x2, 0x2, 0x9bc, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x9bd, 0x9be, 0x7, 0xbe, 
       0x2, 0x2, 0x9be, 0x9bf, 0x7, 0xcc, 0x2, 0x2, 0x9bf, 0x9c0, 0x7, 0x4f, 
       0x2, 0x2, 0x9c0, 0x9c1, 0x7, 0x36, 0x2, 0x2, 0x9c1, 0x9c2, 0x7, 0x6, 
       0x2, 0x2, 0x9c2, 0x9c3, 0x7, 0x17, 0x2, 0x2, 0x9c3, 0x9c4, 0x7, 0x38, 
       0x2, 0x2, 0x9c4, 0x9c5, 0x7, 0xd1, 0x2, 0x2, 0x9c5, 0x9c6, 0x5, 0x6a, 
       0x36, 0x2, 0x9c6, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x9c7, 0x9c8, 0x7, 0xcc, 
       0x2, 0x2, 0x9c8, 0x9c9, 0x7, 0x47, 0x2, 0x2, 0x9c9, 0x9ca, 0x5, 0xb8, 
       0x5d, 0x2, 0x9ca, 0x9cb, 0x7, 0x49, 0x2, 0x2, 0x9cb, 0x9cc, 0x7, 
       0xd5, 0x2, 0x2, 0x9cc, 0x9cd, 0x7, 0x3b, 0x2, 0x2, 0x9cd, 0x9ce, 
       0x7, 0x1c, 0x2, 0x2, 0x9ce, 0x9cf, 0x7, 0xc8, 0x2, 0x2, 0x9cf, 0x9d0, 
       0x7, 0x36, 0x2, 0x2, 0x9d0, 0x9d1, 0x7, 0x2f, 0x2, 0x2, 0x9d1, 0x9d2, 
       0x7, 0x6, 0x2, 0x2, 0x9d2, 0x9d3, 0x7, 0x17, 0x2, 0x2, 0x9d3, 0x9d4, 
       0x7, 0x38, 0x2, 0x2, 0x9d4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x9d5, 0x9d6, 
       0x7, 0xa4, 0x2, 0x2, 0x9d6, 0x9d7, 0x7, 0x71, 0x2, 0x2, 0x9d7, 0x9d8, 
       0x7, 0xcc, 0x2, 0x2, 0x9d8, 0x9d9, 0x5, 0x9e, 0x50, 0x2, 0x9d9, 0xa7, 
       0x3, 0x2, 0x2, 0x2, 0x9da, 0x9db, 0x7, 0xcc, 0x2, 0x2, 0x9db, 0x9dc, 
       0x7, 0x64, 0x2, 0x2, 0x9dc, 0x9dd, 0x7, 0xac, 0x2, 0x2, 0x9dd, 0x9de, 
       0x7, 0xbd, 0x2, 0x2, 0x9de, 0x9df, 0x7, 0xc9, 0x2, 0x2, 0x9df, 0x9e0, 
       0x7, 0x7b, 0x2, 0x2, 0x9e0, 0x9e1, 0x7, 0xcb, 0x2, 0x2, 0x9e1, 0xa9, 
       0x3, 0x2, 0x2, 0x2, 0x9e2, 0x9e3, 0x7, 0xcc, 0x2, 0x2, 0x9e3, 0x9e4, 
       0x7, 0x64, 0x2, 0x2, 0x9e4, 0x9e5, 0x7, 0xa4, 0x2, 0x2, 0x9e5, 0x9e6, 
       0x7, 0x69, 0x2, 0x2, 0x9e6, 0x9e7, 0x5, 0x9e, 0x50, 0x2, 0x9e7, 0xab, 
       0x3, 0x2, 0x2, 0x2, 0x9e8, 0x9e9, 0x7, 0xcc, 0x2, 0x2, 0x9e9, 0x9ea, 
       0x7, 0x64, 0x2, 0x2, 0x9ea, 0x9eb, 0x7, 0x69, 0x2, 0x2, 0x9eb, 0x9ec, 
       0x5, 0xb8, 0x5d, 0x2, 0x9ec, 0x9ed, 0x7, 0x7b, 0x2, 0x2, 0x9ed, 0x9ee, 
       0x7, 0x57, 0x2, 0x2, 0x9ee, 0xad, 0x3, 0x2, 0x2, 0x2, 0x9ef, 0x9f7, 
       0x5, 0xa0, 0x51, 0x2, 0x9f0, 0x9f7, 0x5, 0xa2, 0x52, 0x2, 0x9f1, 
       0x9f7, 0x5, 0xa4, 0x53, 0x2, 0x9f2, 0x9f7, 0x5, 0xa6, 0x54, 0x2, 
       0x9f3, 0x9f7, 0x5, 0xa8, 0x55, 0x2, 0x9f4, 
  };
  static uint16_t serializedATNSegment1[] = {
    0x9f7, 0x5, 0xaa, 0x56, 0x2, 0x9f5, 0x9f7, 0x5, 0xac, 0x57, 0x2, 0x9f6, 
       0x9ef, 0x3, 0x2, 0x2, 0x2, 0x9f6, 0x9f0, 0x3, 0x2, 0x2, 0x2, 0x9f6, 
       0x9f1, 0x3, 0x2, 0x2, 0x2, 0x9f6, 0x9f2, 0x3, 0x2, 0x2, 0x2, 0x9f6, 
       0x9f3, 0x3, 0x2, 0x2, 0x2, 0x9f6, 0x9f4, 0x3, 0x2, 0x2, 0x2, 0x9f6, 
       0x9f5, 0x3, 0x2, 0x2, 0x2, 0x9f7, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x9f8, 
       0x9f9, 0x9, 0x2, 0x2, 0x2, 0x9f9, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x9fa, 
       0x9fb, 0x9, 0x3, 0x2, 0x2, 0x9fb, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x9fc, 
       0x9fd, 0x7, 0xd0, 0x2, 0x2, 0x9fd, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x9fe, 
       0x9ff, 0x7, 0xcd, 0x2, 0x2, 0x9ff, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xa00, 
       0xa05, 0x5, 0xb0, 0x59, 0x2, 0xa01, 0xa05, 0x5, 0xb2, 0x5a, 0x2, 
       0xa02, 0xa05, 0x5, 0xb4, 0x5b, 0x2, 0xa03, 0xa05, 0x5, 0xb6, 0x5c, 
       0x2, 0xa04, 0xa00, 0x3, 0x2, 0x2, 0x2, 0xa04, 0xa01, 0x3, 0x2, 0x2, 
       0x2, 0xa04, 0xa02, 0x3, 0x2, 0x2, 0x2, 0xa04, 0xa03, 0x3, 0x2, 0x2, 
       0x2, 0xa05, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xa06, 0xa07, 0x7, 0x28, 0x2, 
       0x2, 0xa07, 0xa08, 0x7, 0x64, 0x2, 0x2, 0xa08, 0xa09, 0x7, 0xd8, 
       0x2, 0x2, 0xa09, 0xa0a, 0x7, 0xe, 0x2, 0x2, 0xa0a, 0xa0b, 0x7, 0xd9, 
       0x2, 0x2, 0xa0b, 0xa0c, 0x7, 0xda, 0x2, 0x2, 0xa0c, 0xa0d, 0x5, 0xb8, 
       0x5d, 0x2, 0xa0d, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xa0e, 0xa0f, 0x8, 0x5f, 
       0x1, 0x2, 0xa0f, 0xa10, 0x7, 0xd3, 0x2, 0x2, 0xa10, 0xa11, 0x5, 0xca, 
       0x66, 0x2, 0xa11, 0xa18, 0x3, 0x2, 0x2, 0x2, 0xa12, 0xa13, 0xc, 0x3, 
       0x2, 0x2, 0xa13, 0xa14, 0x7, 0xd2, 0x2, 0x2, 0xa14, 0xa15, 0x7, 0xd3, 
       0x2, 0x2, 0xa15, 0xa17, 0x5, 0xca, 0x66, 0x2, 0xa16, 0xa12, 0x3, 
       0x2, 0x2, 0x2, 0xa17, 0xa1a, 0x3, 0x2, 0x2, 0x2, 0xa18, 0xa16, 0x3, 
       0x2, 0x2, 0x2, 0xa18, 0xa19, 0x3, 0x2, 0x2, 0x2, 0xa19, 0xbd, 0x3, 
       0x2, 0x2, 0x2, 0xa1a, 0xa18, 0x3, 0x2, 0x2, 0x2, 0xa1b, 0xa1c, 0x7, 
       0xd8, 0x2, 0x2, 0xa1c, 0xa1d, 0x5, 0xb8, 0x5d, 0x2, 0xa1d, 0xa1e, 
       0x7, 0x3b, 0x2, 0x2, 0xa1e, 0xa1f, 0x7, 0x1c, 0x2, 0x2, 0xa1f, 0xa20, 
       0x7, 0x5, 0x2, 0x2, 0xa20, 0xa21, 0x7, 0x6, 0x2, 0x2, 0xa21, 0xa22, 
       0x7, 0xdb, 0x2, 0x2, 0xa22, 0xa23, 0x7, 0xd4, 0x2, 0x2, 0xa23, 0xa24, 
       0x5, 0xbc, 0x5f, 0x2, 0xa24, 0xa25, 0x7, 0xd2, 0x2, 0x2, 0xa25, 0xa26, 
       0x5, 0xba, 0x5e, 0x2, 0xa26, 0xa3e, 0x3, 0x2, 0x2, 0x2, 0xa27, 0xa28, 
       0x7, 0xd8, 0x2, 0x2, 0xa28, 0xa29, 0x5, 0xb8, 0x5d, 0x2, 0xa29, 0xa2a, 
       0x7, 0xd4, 0x2, 0x2, 0xa2a, 0xa2b, 0x5, 0xbc, 0x5f, 0x2, 0xa2b, 0xa2c, 
       0x7, 0xd2, 0x2, 0x2, 0xa2c, 0xa2d, 0x5, 0xba, 0x5e, 0x2, 0xa2d, 0xa3e, 
       0x3, 0x2, 0x2, 0x2, 0xa2e, 0xa2f, 0x7, 0xd8, 0x2, 0x2, 0xa2f, 0xa30, 
       0x5, 0xb8, 0x5d, 0x2, 0xa30, 0xa31, 0x7, 0xd4, 0x2, 0x2, 0xa31, 0xa32, 
       0x5, 0xbc, 0x5f, 0x2, 0xa32, 0xa3e, 0x3, 0x2, 0x2, 0x2, 0xa33, 0xa34, 
       0x7, 0xd8, 0x2, 0x2, 0xa34, 0xa35, 0x5, 0xb8, 0x5d, 0x2, 0xa35, 0xa36, 
       0x7, 0x3b, 0x2, 0x2, 0xa36, 0xa37, 0x7, 0x1c, 0x2, 0x2, 0xa37, 0xa38, 
       0x7, 0x5, 0x2, 0x2, 0xa38, 0xa39, 0x7, 0x6, 0x2, 0x2, 0xa39, 0xa3a, 
       0x7, 0xdb, 0x2, 0x2, 0xa3a, 0xa3b, 0x7, 0xd4, 0x2, 0x2, 0xa3b, 0xa3c, 
       0x5, 0xbc, 0x5f, 0x2, 0xa3c, 0xa3e, 0x3, 0x2, 0x2, 0x2, 0xa3d, 0xa1b, 
       0x3, 0x2, 0x2, 0x2, 0xa3d, 0xa27, 0x3, 0x2, 0x2, 0x2, 0xa3d, 0xa2e, 
       0x3, 0x2, 0x2, 0x2, 0xa3d, 0xa33, 0x3, 0x2, 0x2, 0x2, 0xa3e, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0xa3f, 0xa66, 0x5, 0xbe, 0x60, 0x2, 0xa40, 0xa66, 
       0x5, 0x2, 0x2, 0x2, 0xa41, 0xa66, 0x5, 0x4, 0x3, 0x2, 0xa42, 0xa66, 
       0x5, 0x6, 0x4, 0x2, 0xa43, 0xa66, 0x5, 0x8, 0x5, 0x2, 0xa44, 0xa66, 
       0x5, 0xa, 0x6, 0x2, 0xa45, 0xa66, 0x5, 0xc, 0x7, 0x2, 0xa46, 0xa66, 
       0x5, 0xe, 0x8, 0x2, 0xa47, 0xa66, 0x5, 0x12, 0xa, 0x2, 0xa48, 0xa66, 
       0x5, 0x16, 0xc, 0x2, 0xa49, 0xa66, 0x5, 0x18, 0xd, 0x2, 0xa4a, 0xa66, 
       0x5, 0x1a, 0xe, 0x2, 0xa4b, 0xa66, 0x5, 0x1c, 0xf, 0x2, 0xa4c, 0xa66, 
       0x5, 0x1e, 0x10, 0x2, 0xa4d, 0xa66, 0x5, 0x20, 0x11, 0x2, 0xa4e, 
       0xa66, 0x5, 0x22, 0x12, 0x2, 0xa4f, 0xa66, 0x5, 0x24, 0x13, 0x2, 
       0xa50, 0xa66, 0x5, 0x26, 0x14, 0x2, 0xa51, 0xa66, 0x5, 0x28, 0x15, 
       0x2, 0xa52, 0xa66, 0x5, 0x2a, 0x16, 0x2, 0xa53, 0xa66, 0x5, 0x2c, 
       0x17, 0x2, 0xa54, 0xa66, 0x5, 0x2e, 0x18, 0x2, 0xa55, 0xa66, 0x5, 
       0x30, 0x19, 0x2, 0xa56, 0xa66, 0x5, 0x34, 0x1b, 0x2, 0xa57, 0xa66, 
       0x5, 0x38, 0x1d, 0x2, 0xa58, 0xa66, 0x5, 0x3a, 0x1e, 0x2, 0xa59, 
       0xa66, 0x5, 0x3c, 0x1f, 0x2, 0xa5a, 0xa66, 0x5, 0x3e, 0x20, 0x2, 
       0xa5b, 0xa66, 0x5, 0x40, 0x21, 0x2, 0xa5c, 0xa66, 0x5, 0x42, 0x22, 
       0x2, 0xa5d, 0xa66, 0x5, 0x44, 0x23, 0x2, 0xa5e, 0xa66, 0x5, 0x46, 
       0x24, 0x2, 0xa5f, 0xa66, 0x5, 0x48, 0x25, 0x2, 0xa60, 0xa66, 0x5, 
       0x4a, 0x26, 0x2, 0xa61, 0xa66, 0x5, 0x4c, 0x27, 0x2, 0xa62, 0xa66, 
       0x5, 0x4e, 0x28, 0x2, 0xa63, 0xa66, 0x5, 0x50, 0x29, 0x2, 0xa64, 
       0xa66, 0x5, 0x14, 0xb, 0x2, 0xa65, 0xa3f, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa40, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa41, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa42, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa43, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa44, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa45, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa46, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa47, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa48, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa49, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa4a, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa4b, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa4c, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa4d, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa4e, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa4f, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa50, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa51, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa52, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa53, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa54, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa55, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa56, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa57, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa58, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa59, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa5a, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa5b, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa5c, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa5d, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa5e, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa5f, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa60, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa61, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa62, 0x3, 0x2, 0x2, 0x2, 0xa65, 0xa63, 0x3, 0x2, 0x2, 0x2, 0xa65, 
       0xa64, 0x3, 0x2, 0x2, 0x2, 0xa66, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xa67, 
       0xa68, 0x5, 0x9e, 0x50, 0x2, 0xa68, 0xa69, 0x7, 0xd1, 0x2, 0x2, 0xa69, 
       0xa6a, 0x5, 0xca, 0x66, 0x2, 0xa6a, 0xa6d, 0x3, 0x2, 0x2, 0x2, 0xa6b, 
       0xa6d, 0x5, 0xc0, 0x61, 0x2, 0xa6c, 0xa67, 0x3, 0x2, 0x2, 0x2, 0xa6c, 
       0xa6b, 0x3, 0x2, 0x2, 0x2, 0xa6d, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xa6e, 
       0xa6f, 0x5, 0x9e, 0x50, 0x2, 0xa6f, 0xa70, 0x7, 0xd1, 0x2, 0x2, 0xa70, 
       0xa71, 0x7, 0xb9, 0x2, 0x2, 0xa71, 0xa72, 0x5, 0xca, 0x66, 0x2, 0xa72, 
       0xa75, 0x3, 0x2, 0x2, 0x2, 0xa73, 0xa75, 0x5, 0xc2, 0x62, 0x2, 0xa74, 
       0xa6e, 0x3, 0x2, 0x2, 0x2, 0xa74, 0xa73, 0x3, 0x2, 0x2, 0x2, 0xa75, 
       0xc5, 0x3, 0x2, 0x2, 0x2, 0xa76, 0xa77, 0x8, 0x64, 0x1, 0x2, 0xa77, 
       0xa78, 0x7, 0x28, 0x2, 0x2, 0xa78, 0xa79, 0x7, 0x64, 0x2, 0x2, 0xa79, 
       0xa7c, 0x5, 0xc4, 0x63, 0x2, 0xa7a, 0xa7c, 0x5, 0xc4, 0x63, 0x2, 
       0xa7b, 0xa76, 0x3, 0x2, 0x2, 0x2, 0xa7b, 0xa7a, 0x3, 0x2, 0x2, 0x2, 
       0xa7c, 0xa82, 0x3, 0x2, 0x2, 0x2, 0xa7d, 0xa7e, 0xc, 0x4, 0x2, 0x2, 
       0xa7e, 0xa7f, 0x7, 0x19, 0x2, 0x2, 0xa7f, 0xa81, 0x5, 0xc4, 0x63, 
       0x2, 0xa80, 0xa7d, 0x3, 0x2, 0x2, 0x2, 0xa81, 0xa84, 0x3, 0x2, 0x2, 
       0x2, 0xa82, 0xa80, 0x3, 0x2, 0x2, 0x2, 0xa82, 0xa83, 0x3, 0x2, 0x2, 
       0x2, 0xa83, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xa84, 0xa82, 0x3, 0x2, 0x2, 
       0x2, 0xa85, 0xa86, 0x8, 0x65, 0x1, 0x2, 0xa86, 0xa87, 0x5, 0xc6, 
       0x64, 0x2, 0xa87, 0xa9b, 0x3, 0x2, 0x2, 0x2, 0xa88, 0xa89, 0xc, 0x8, 
       0x2, 0x2, 0xa89, 0xa8a, 0x7, 0x8a, 0x2, 0x2, 0xa8a, 0xa9a, 0x5, 0xc6, 
       0x64, 0x2, 0xa8b, 0xa8c, 0xc, 0x7, 0x2, 0x2, 0xa8c, 0xa8d, 0x7, 0xd1, 
       0x2, 0x2, 0xa8d, 0xa8e, 0x7, 0x8a, 0x2, 0x2, 0xa8e, 0xa9a, 0x5, 0xc6, 
       0x64, 0x2, 0xa8f, 0xa90, 0xc, 0x6, 0x2, 0x2, 0xa90, 0xa91, 0x7, 0xd1, 
       0x2, 0x2, 0xa91, 0xa9a, 0x5, 0xc6, 0x64, 0x2, 0xa92, 0xa93, 0xc, 
       0x5, 0x2, 0x2, 0xa93, 0xa94, 0x7, 0xd1, 0x2, 0x2, 0xa94, 0xa95, 0x7, 
       0x9b, 0x2, 0x2, 0xa95, 0xa9a, 0x5, 0xc6, 0x64, 0x2, 0xa96, 0xa97, 
       0xc, 0x4, 0x2, 0x2, 0xa97, 0xa98, 0x7, 0x9b, 0x2, 0x2, 0xa98, 0xa9a, 
       0x5, 0xc6, 0x64, 0x2, 0xa99, 0xa88, 0x3, 0x2, 0x2, 0x2, 0xa99, 0xa8b, 
       0x3, 0x2, 0x2, 0x2, 0xa99, 0xa8f, 0x3, 0x2, 0x2, 0x2, 0xa99, 0xa92, 
       0x3, 0x2, 0x2, 0x2, 0xa99, 0xa96, 0x3, 0x2, 0x2, 0x2, 0xa9a, 0xa9d, 
       0x3, 0x2, 0x2, 0x2, 0xa9b, 0xa99, 0x3, 0x2, 0x2, 0x2, 0xa9b, 0xa9c, 
       0x3, 0x2, 0x2, 0x2, 0xa9c, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xa9d, 0xa9b, 
       0x3, 0x2, 0x2, 0x2, 0xa9e, 0xa9f, 0x7, 0x8a, 0x2, 0x2, 0xa9f, 0xaa0, 
       0x7, 0xd1, 0x2, 0x2, 0xaa0, 0xaa6, 0x5, 0xc8, 0x65, 0x2, 0xaa1, 0xaa2, 
       0x7, 0x8a, 0x2, 0x2, 0xaa2, 0xaa6, 0x5, 0xc8, 0x65, 0x2, 0xaa3, 0xaa6, 
       0x5, 0xc8, 0x65, 0x2, 0xaa4, 0xaa6, 0x3, 0x2, 0x2, 0x2, 0xaa5, 0xa9e, 
       0x3, 0x2, 0x2, 0x2, 0xaa5, 0xaa1, 0x3, 0x2, 0x2, 0x2, 0xaa5, 0xaa3, 
       0x3, 0x2, 0x2, 0x2, 0xaa5, 0xaa4, 0x3, 0x2, 0x2, 0x2, 0xaa6, 0xcb, 
       0x3, 0x2, 0x2, 0x2, 0xaa7, 0xaac, 0x5, 0xca, 0x66, 0x2, 0xaa8, 0xaac, 
       0x5, 0x6a, 0x36, 0x2, 0xaa9, 0xaac, 0x5, 0x7e, 0x40, 0x2, 0xaaa, 
       0xaac, 0x5, 0x76, 0x3c, 0x2, 0xaab, 0xaa7, 0x3, 0x2, 0x2, 0x2, 0xaab, 
       0xaa8, 0x3, 0x2, 0x2, 0x2, 0xaab, 0xaa9, 0x3, 0x2, 0x2, 0x2, 0xaab, 
       0xaaa, 0x3, 0x2, 0x2, 0x2, 0xaac, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xaad, 
       0xaae, 0x7, 0xdc, 0x2, 0x2, 0xaae, 0xab2, 0x7, 0xd3, 0x2, 0x2, 0xaaf, 
       0xab0, 0x5, 0xcc, 0x67, 0x2, 0xab0, 0xab1, 0x7, 0xd2, 0x2, 0x2, 0xab1, 
       0xab3, 0x3, 0x2, 0x2, 0x2, 0xab2, 0xaaf, 0x3, 0x2, 0x2, 0x2, 0xab3, 
       0xab4, 0x3, 0x2, 0x2, 0x2, 0xab4, 0xab2, 0x3, 0x2, 0x2, 0x2, 0xab4, 
       0xab5, 0x3, 0x2, 0x2, 0x2, 0xab5, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xab6, 
       0xab7, 0x7, 0xdd, 0x2, 0x2, 0xab7, 0xabb, 0x7, 0xd3, 0x2, 0x2, 0xab8, 
       0xab9, 0x5, 0xcc, 0x67, 0x2, 0xab9, 0xaba, 0x7, 0xd2, 0x2, 0x2, 0xaba, 
       0xabc, 0x3, 0x2, 0x2, 0x2, 0xabb, 0xab8, 0x3, 0x2, 0x2, 0x2, 0xabc, 
       0xabd, 0x3, 0x2, 0x2, 0x2, 0xabd, 0xabb, 0x3, 0x2, 0x2, 0x2, 0xabd, 
       0xabe, 0x3, 0x2, 0x2, 0x2, 0xabe, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xabf, 
       0xac0, 0x7, 0x73, 0x2, 0x2, 0xac0, 0xac4, 0x7, 0xd3, 0x2, 0x2, 0xac1, 
       0xac2, 0x5, 0xcc, 0x67, 0x2, 0xac2, 0xac3, 0x7, 0xd2, 0x2, 0x2, 0xac3, 
       0xac5, 0x3, 0x2, 0x2, 0x2, 0xac4, 0xac1, 0x3, 0x2, 0x2, 0x2, 0xac5, 
       0xac6, 0x3, 0x2, 0x2, 0x2, 0xac6, 0xac4, 0x3, 0x2, 0x2, 0x2, 0xac6, 
       0xac7, 0x3, 0x2, 0x2, 0x2, 0xac7, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xac8, 
       0xac9, 0x5, 0xae, 0x58, 0x2, 0xac9, 0xaca, 0x7, 0xd2, 0x2, 0x2, 0xaca, 
       0xad2, 0x3, 0x2, 0x2, 0x2, 0xacb, 0xad2, 0x5, 0xce, 0x68, 0x2, 0xacc, 
       0xad2, 0x5, 0xd0, 0x69, 0x2, 0xacd, 0xad2, 0x5, 0xd2, 0x6a, 0x2, 
       0xace, 0xacf, 0x5, 0xcc, 0x67, 0x2, 0xacf, 0xad0, 0x7, 0xd2, 0x2, 
       0x2, 0xad0, 0xad2, 0x3, 0x2, 0x2, 0x2, 0xad1, 0xac8, 0x3, 0x2, 0x2, 
       0x2, 0xad1, 0xacb, 0x3, 0x2, 0x2, 0x2, 0xad1, 0xacc, 0x3, 0x2, 0x2, 
       0x2, 0xad1, 0xacd, 0x3, 0x2, 0x2, 0x2, 0xad1, 0xace, 0x3, 0x2, 0x2, 
       0x2, 0xad2, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xad3, 0xad5, 0x5, 0xd4, 0x6b, 
       0x2, 0xad4, 0xad3, 0x3, 0x2, 0x2, 0x2, 0xad5, 0xad6, 0x3, 0x2, 0x2, 
       0x2, 0xad6, 0xad4, 0x3, 0x2, 0x2, 0x2, 0xad6, 0xad7, 0x3, 0x2, 0x2, 
       0x2, 0xad7, 0xad8, 0x3, 0x2, 0x2, 0x2, 0xad8, 0xad9, 0x7, 0x2, 0x2, 
       0x3, 0xad9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x48, 0xf1, 0x10a, 0x129, 0x16d, 
       0x211, 0x234, 0x2df, 0x34b, 0x358, 0x3c0, 0x3da, 0x3f4, 0x3fa, 0x401, 
       0x408, 0x40a, 0x414, 0x489, 0x531, 0x565, 0x589, 0x592, 0x5a1, 0x5e2, 
       0x5f1, 0x61b, 0x633, 0x66d, 0x6c3, 0x6d2, 0x6dc, 0x6e7, 0x6f8, 0x702, 
       0x71b, 0x737, 0x781, 0x7a6, 0x7bc, 0x8a9, 0x8ca, 0x90a, 0x918, 0x920, 
       0x926, 0x932, 0x93a, 0x940, 0x951, 0x955, 0x960, 0x9b4, 0x9f6, 0xa04, 
       0xa18, 0xa3d, 0xa65, 0xa6c, 0xa74, 0xa7b, 0xa82, 0xa99, 0xa9b, 0xaa5, 
       0xaab, 0xab4, 0xabd, 0xac6, 0xad1, 0xad6, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));
  _serializedATN.insert(_serializedATN.end(), serializedATNSegment1,
    serializedATNSegment1 + sizeof(serializedATNSegment1) / sizeof(serializedATNSegment1[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

IvionParser::Initializer IvionParser::_init;
