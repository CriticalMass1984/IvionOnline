
// Generated from IvionGrammar/Ivion.antlr4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "IvionVisitor.h"


/**
 * This class provides an empty implementation of IvionVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  IvionBaseVisitor : public IvionVisitor {
public:

  virtual antlrcpp::Any visitTargetPlayer(IvionParser::TargetPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectPlayer(IvionParser::SelectPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCardController(IvionParser::CardControllerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreviousPlayer(IvionParser::PreviousPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlayer(IvionParser::PlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDamagePlayer(IvionParser::DamagePlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControl(IvionParser::ControlContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControlPlayer(IvionParser::ControlPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMovePlayer(IvionParser::MovePlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEffectPlayer(IvionParser::EffectPlayerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTargetTile(IvionParser::TargetTileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSelectTile(IvionParser::SelectTileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTile(IvionParser::TileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCard(IvionParser::CardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine(IvionParser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParagraph(IvionParser::ParagraphContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitText(IvionParser::TextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger(IvionParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(IvionParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

