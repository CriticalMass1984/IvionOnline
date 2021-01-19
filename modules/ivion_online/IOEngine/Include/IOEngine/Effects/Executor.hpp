
// Generated from IvionParser.antlr4 by ANTLR 4.8

#pragma once

#include <IOEngine/Antlr4/IvionParserBaseVisitor.h>

#include <IOEngine/Card.hpp>
#include <IOEngine/Effects/Effects.hpp>
#include <IOEngine/GameState.hpp>
#include <IOEngine/Player.hpp>
#include <IOEngine/Tile.hpp>

#include <cassert>
#include <vector>

namespace IO {
class Executor : public IvionParserBaseVisitor {
	Player *activePlayer_{ nullptr }; //always the controller of the current card
	Card *activeCard_{ nullptr };
	Player *lastSelectedPlayer_{ nullptr };
	Card *lastSelectedCard_{ nullptr };
	Tile *lastSelectedTile_{ nullptr };

	int lastAmount_{ -1 };

public:
	class Branch {
	public:
		std::vector<Effect> Effects;
		std::vector<Branch> Branches;
	};
	Branch Root;

	Executor() noexcept {}

	virtual antlrcpp::Any visitGeneralPostInTerrainFilter(IvionParser::GeneralPostInTerrainFilterContext *ctx) override {
		return nullptr;
	}

	virtual antlrcpp::Any visitGeneralPostNearTerrainFilter(IvionParser::GeneralPostNearTerrainFilterContext *ctx) override {
		return nullptr;
	}

	virtual antlrcpp::Any visitGeneralPostNearPlayerFilter(IvionParser::GeneralPostNearPlayerFilterContext *ctx) override {
		return visitHypotheticalPlayer(ctx->hypotheticalPlayer());
	}

	virtual antlrcpp::Any visitGeneralPostNearTileFilter(IvionParser::GeneralPostNearTileFilterContext *ctx) override {
		return visitHypotheticalTile(ctx->hypotheticalTile());
	}

	virtual antlrcpp::Any visitGeneralPostInTileFilter(IvionParser::GeneralPostInTileFilterContext *ctx) override {
		return visitHypotheticalTile(ctx->hypotheticalTile());
	}

	virtual antlrcpp::Any visitGeneralPostNearCardFilter(IvionParser::GeneralPostNearCardFilterContext *ctx) override {
		return visitHypotheticalCard(ctx->hypotheticalCard());
	}

	virtual antlrcpp::Any visitGeneralPostInCardFilter(IvionParser::GeneralPostInCardFilterContext *ctx) override {
		return visitHypotheticalCard(ctx->hypotheticalCard());
	}

	virtual antlrcpp::Any visitGeneralPostPlayerChoiceFilter(IvionParser::GeneralPostPlayerChoiceFilterContext *ctx) override {
		return visitPlayer(ctx->player());
	}

	virtual antlrcpp::Any visitGeneralPostAtLeastAwayFilter(IvionParser::GeneralPostAtLeastAwayFilterContext *ctx) override {
		return visitLiteralValue(ctx->literalValue());
	}

	virtual antlrcpp::Any visitGeneralPostAtLeastAwayFromPlayerFilter(IvionParser::GeneralPostAtLeastAwayFromPlayerFilterContext *ctx) override {
		return std::tuple<int, std::vector<PlayerIndex>>(visitLiteralValue(ctx->literalValue()), visitHypotheticalPlayer(ctx->hypotheticalPlayer()));
	}

	template <typename IndexType, typename postfixType>
	void CheckGeneralPostFlags(size_t TokenType, std::vector<IndexType> &items, postfixType *ctx) {
		// helper methods
		static auto NearTerrain = [](IndexType &item) -> bool {
			const Vec2i &pos = item->GetPosition();

			for (int dy = -1; dy <= 1; ++dy) {
				const int y = pos.y + dy;
				if (y < 0 || y > GameState::MapHeight) {
					continue;
				}
				for (int dx = -1; dx <= 1; ++dx) {
					const int x = pos.x + dx;
					if (x < 0 || x > GameState::MapWidth) {
						continue;
					}
					if (GameState::State->GetTile(x, y).Terrain != (Integer)TerrainType::NONE) {
						return true;
					}
				}
			}
			return false;
		};
		static auto NearPlayers = [](IndexType &item, const std::vector<PlayerIndex> &nearPlayers, int minDistance, int maxDistance) -> bool {
			for (const PlayerIndex &player : nearPlayers) {
				const int distance = item->GetPosition().Distance(*player->Position);
				if (distance >= minDistance && distance <= maxDistance) {
					return true;
				}
			}
			return false;
		};
		static auto NearCards = [](IndexType &item, const std::vector<CardIndex> &nearCards, int minDistance, int maxDistance) -> bool {
			for (const CardIndex &card : nearCards) {
				const int distance = item->GetPosition().Distance(card->GetPosition());
				if (distance >= minDistance && distance <= maxDistance) {
					return true;
				}
			}
			return false;
		};
		static auto NearTiles = [](IndexType &item, const std::vector<TileIndex> &nearTiles, int minDistance, int maxDistance) -> bool {
			for (const TileIndex &tile : nearTiles) {
				const int distance = item->GetPosition().Distance(tile->Position());
				if (distance >= minDistance && distance <= maxDistance) {
					return true;
				}
			}
			return false;
		};

		static auto InTerrain = [](IndexType &item) -> bool {
			const Vec2i &pos = item->GetPosition();
			return pos.GetTile().Terrain != (Integer)TerrainType::NONE;
		};

		// main check
		switch (TokenType) {
			case IvionParser::RuleGeneralPostInTerrainFilter:
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if (!InTerrain(*it)) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
				break;
			case IvionParser::RuleGeneralPostNearTerrainFilter:
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if (!NearTerrain(*it)) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
				break;
			case IvionParser::RuleGeneralPostNearPlayerFilter: {
				const std::vector<PlayerIndex> nearPlayers = visitGeneralPostNearPlayerFilter(ctx->generalPostNearPlayerFilter());
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if (!NearPlayers(*it, nearPlayers, 0, 1)) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
			} break;
			case IvionParser::RuleGeneralPostNearTileFilter: {
				const std::vector<TileIndex> nearTiles = visitGeneralPostNearTileFilter(ctx->generalPostNearTileFilter());
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if (!NearTiles(*it, nearTiles, 0, 1)) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
			} break;
			case IvionParser::RuleGeneralPostInTileFilter: {
				const std::vector<TileIndex> inTiles = visitGeneralPostInTileFilter(ctx->generalPostInTileFilter());
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if (!NearTiles(*it, inTiles, 0, 0)) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
			} break;
			case IvionParser::RuleGeneralPostNearCardFilter: {
				const std::vector<CardIndex> nearCards = visitGeneralPostNearCardFilter(ctx->generalPostNearCardFilter());
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if (!NearCards(*it, nearCards, 0, 1)) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
			} break;
			case IvionParser::RuleGeneralPostInCardFilter: {
				const std::vector<CardIndex> inCards = visitGeneralPostInCardFilter(ctx->generalPostInCardFilter());
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if (!NearCards(*it, inCards, 0, 0)) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
			} break;
			case IvionParser::RuleGeneralPostPlayerChoiceFilter:
				//TODO
				break;
			case IvionParser::RuleGeneralPostAtLeastAwayFilter: {
				const int distance = visitGeneralPostAtLeastAwayFilter(ctx->generalPostAtLeastAwayFilter());
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if ((**it).GetPosition().Distance(*activePlayer_->Position) > distance) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
			} break;
			case IvionParser::RuleGeneralPostAtLeastAwayFromPlayerFilter: {
				int distance;
				std::vector<PlayerIndex> players;
				std::tie<int, std::vector<PlayerIndex>>(distance, players) = visitGeneralPostAtLeastAwayFromPlayerFilter(ctx->generalPostAtLeastAwayFromPlayerFilter());
				for (auto it = items.begin(), end = items.end(); it != end;) {
					if (!NearPlayers(*it, players, distance, std::numeric_limits<decltype(TileIndex::Index)>::max())) {
						it = items.erase(it);
						continue;
					}
					++it;
				}
			} break;
			default:
				assert(false);
				break;
		}
	}
	//////////////////////////////////////////////////////////////////////////// PLAYER

	virtual antlrcpp::Any visitPlayerType(IvionParser::PlayerTypeContext *ctx) override {
		std::vector<PlayerIndex> players;

		switch (ctx->Player()->getSymbol()->getType()) {
			case IvionParser::Player:
				for (Player &player : GameState::State->Players) {
					players.push_back(player.Index());
				}
			case IvionParser::Enemy:
				for (Player &player : GameState::State->Players) {
					if (player.IsEnemy(*activePlayer_)) {
						players.push_back(player.Index());
					}
				}
			case IvionParser::Ally:
				for (Player &player : GameState::State->Players) {
					if (player.IsAlly(*activePlayer_)) {
						players.push_back(player.Index());
					}
				}
			default:
				assert(false);
				break;
		}
		return players;
	}

	virtual antlrcpp::Any visitPlayerPreFix(IvionParser::PlayerPreFixContext *ctx) override {
		std::vector<PlayerIndex> players = visitPlayerType(ctx->playerType());

		for (auto it = players.begin(), end = players.end(); it != end;) {
			if (ctx->Another()) {
				if ((**it).Index() == activePlayer_->Index()) {
					it = players.erase(it);
					continue;
				}
			}
			if (ctx->Controlled()) {
				if ((**it).IsUncontrolled()) {
					it = players.erase(it);
					continue;
				}
			}
			if (ctx->Uncontrolled()) {
				if ((**it).IsControlled()) {
					it = players.erase(it);
					continue;
				}
			}
			++it;
		}
		return players;
	}

	virtual antlrcpp::Any visitPlayerPostFix(IvionParser::PlayerPostFixContext *ctx) override {
		if (ctx->playerPreFix()) {
			return visitPlayerPreFix(ctx->playerPreFix());
		}
		std::vector<PlayerIndex> players = visitPlayerPostFix(ctx->playerPostFix());
		assert(ctx->children.size() == 2);

		antlr4::tree::TerminalNode *tnode = dynamic_cast<antlr4::tree::TerminalNode *>(ctx->children.at(1));
		CheckGeneralPostFlags(tnode->getSymbol()->getType(), players, ctx);

		return players;
	}

	virtual antlrcpp::Any visitPlayerFilter(IvionParser::PlayerFilterContext *ctx) override {
		std::vector<Player *> players;
		for (Player &player : GameState::State->Players) {
		}
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCurrentPlayer(IvionParser::CurrentPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPreviousPlayer(IvionParser::PreviousPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPreviousCardsOwner(IvionParser::PreviousCardsOwnerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPreviousCardsController(IvionParser::PreviousCardsControllerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerRef(IvionParser::PlayerRefContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTargetPlayer(IvionParser::TargetPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSinglePlayer(IvionParser::SinglePlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMultiPlayer(IvionParser::MultiPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAllOtherPlayers(IvionParser::AllOtherPlayersContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAllPlayers(IvionParser::AllPlayersContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayer(IvionParser::PlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitHypotheticalPlayer(IvionParser::HypotheticalPlayerContext *ctx) override {
		return visitChildren(ctx);
	}
	//////////////////////////////////////////////////////////////////////////// CARD

	virtual antlrcpp::Any visitCardPreEnemyFilter(IvionParser::CardPreEnemyFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPreAttachedFilter(IvionParser::CardPreAttachedFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPreAbilityFilter(IvionParser::CardPreAbilityFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPreAttackFilter(IvionParser::CardPreAttackFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPreRevealedFilter(IvionParser::CardPreRevealedFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPreAnotherFilter(IvionParser::CardPreAnotherFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPreInstanceFilter(IvionParser::CardPreInstanceFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPrefix(IvionParser::CardPrefixContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostTargettingFilter(IvionParser::CardPostTargettingFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostCostFilter(IvionParser::CardPostCostFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostAttachedToPlayerFilter(IvionParser::CardPostAttachedToPlayerFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostAttachedToTileFilter(IvionParser::CardPostAttachedToTileFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostControlledByPlayerFilter(IvionParser::CardPostControlledByPlayerFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostHardcastFilter(IvionParser::CardPostHardcastFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostFrenzyFilter(IvionParser::CardPostFrenzyFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostInDiscardFilter(IvionParser::CardPostInDiscardFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostTurnRefFilter(IvionParser::CardPostTurnRefFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardPostfix(IvionParser::CardPostfixContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardFilter(IvionParser::CardFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardName(IvionParser::CardNameContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitBottomCard(IvionParser::BottomCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPreviousCard(IvionParser::PreviousCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTargetCard(IvionParser::TargetCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSelectCard(IvionParser::SelectCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSingleCard(IvionParser::SingleCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAllCards(IvionParser::AllCardsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMultiCard(IvionParser::MultiCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCard(IvionParser::CardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitHypotheticalCard(IvionParser::HypotheticalCardContext *ctx) override {
		return visitChildren(ctx);
	}
	//////////////////////////////////////////////////////////////////////////// TILE

	virtual antlrcpp::Any visitTilePreEmptyFilter(IvionParser::TilePreEmptyFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTilePreFix(IvionParser::TilePreFixContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTilePostFix(IvionParser::TilePostFixContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTileFilter(IvionParser::TileFilterContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTargetTile(IvionParser::TargetTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPreviousTile(IvionParser::PreviousTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTheNearestTile(IvionParser::TheNearestTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayersTile(IvionParser::PlayersTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardsTile(IvionParser::CardsTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSingleTile(IvionParser::SingleTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMultiTile(IvionParser::MultiTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAllTiles(IvionParser::AllTilesContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTile(IvionParser::TileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitHypotheticalTile(IvionParser::HypotheticalTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEntity(IvionParser::EntityContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitHypotheticalEntity(IvionParser::HypotheticalEntityContext *ctx) override {
		return visitChildren(ctx);
	}

	//////////////////////////////////////////////////////////////////////////// EFFECTS

	virtual antlrcpp::Any visitDisarmPlayer(IvionParser::DisarmPlayerContext *ctx) override {
		int amount = visitLiteralValue(ctx->literalValue());
		std::vector<Player *> target;

		// if the player is ommitted, then use the last player
		if (ctx->player()) {
			target = std::forward<std::vector<Player *>>(visitPlayer(ctx->player()));
		} else {
			assert(lastSelectedPlayer_);
			target.push_back(lastSelectedPlayer_);
		}

		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSilencePlayer(IvionParser::SilencePlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSlowPlayer(IvionParser::SlowPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitControlPlayer(IvionParser::ControlPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAwayFlag(IvionParser::AwayFlagContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitUpToFlag(IvionParser::UpToFlagContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTravelDistance(IvionParser::TravelDistanceContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTravelPlayer(IvionParser::TravelPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDestroyCard(IvionParser::DestroyCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDealDamage(IvionParser::DealDamageContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCounterCard(IvionParser::CounterCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAttachCard(IvionParser::AttachCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitGainPower(IvionParser::GainPowerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitGainAction(IvionParser::GainActionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitGainInitiative(IvionParser::GainInitiativeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitGainMitigate(IvionParser::GainMitigateContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitLoseMitigate(IvionParser::LoseMitigateContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitUseSecondWind(IvionParser::UseSecondWindContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitReturnCard(IvionParser::ReturnCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPutBottomCardOfDeckIntoHand(IvionParser::PutBottomCardOfDeckIntoHandContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTriggerDurationEffects(IvionParser::TriggerDurationEffectsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitForLessResources(IvionParser::ForLessResourcesContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitFreeFlag(IvionParser::FreeFlagContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayCard(IvionParser::PlayCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayUltimate(IvionParser::PlayUltimateContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDiscardCards(IvionParser::DiscardCardsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitGainsHeroic(IvionParser::GainsHeroicContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitHealPlayer(IvionParser::HealPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitStunPlayer(IvionParser::StunPlayerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitRevealCards(IvionParser::RevealCardsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDrawCards(IvionParser::DrawCardsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitRemoveControl(IvionParser::RemoveControlContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitHardcastEffect(IvionParser::HardcastEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSeekEffect(IvionParser::SeekEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitMakeTerrain(IvionParser::MakeTerrainContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitRemoveTerrain(IvionParser::RemoveTerrainContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSpendResources(IvionParser::SpendResourcesContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitScryEffect(IvionParser::ScryEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitOverrideFrenzy(IvionParser::OverrideFrenzyContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIncreaseCardDuration(IvionParser::IncreaseCardDurationContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitResetUseOfCard(IvionParser::ResetUseOfCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitHeroic(IvionParser::HeroicContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitOnlyPlayCertainCards(IvionParser::OnlyPlayCertainCardsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCostReduction(IvionParser::CostReductionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitRangeSet(IvionParser::RangeSetContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCantPlayCards(IvionParser::CantPlayCardsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerCantBeTargeted(IvionParser::PlayerCantBeTargetedContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIncreasedHandSize(IvionParser::IncreasedHandSizeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIncreasedMaxHP(IvionParser::IncreasedMaxHPContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitReplacesSecondWind(IvionParser::ReplacesSecondWindContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNoInitiative(IvionParser::NoInitiativeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDrawRange(IvionParser::DrawRangeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitGainRange(IvionParser::GainRangeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitLimitTargets(IvionParser::LimitTargetsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPassiveEffect(IvionParser::PassiveEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitDurationEffect(IvionParser::DurationEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitStartOfPlayerTurn(IvionParser::StartOfPlayerTurnContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEndOfPlayerTurnTrigger(IvionParser::EndOfPlayerTurnTriggerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitStartOfPlayerNextTurn(IvionParser::StartOfPlayerNextTurnContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEndOfTurnTrigger(IvionParser::EndOfTurnTriggerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTurnTrigger(IvionParser::TurnTriggerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitGameStartTrigger(IvionParser::GameStartTriggerContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEffectPostfix(IvionParser::EffectPostfixContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfPlayerMakesChoice(IvionParser::IfPlayerMakesChoiceContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfPreviousActionInvalid(IvionParser::IfPreviousActionInvalidContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfResolvedCard(IvionParser::IfResolvedCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfPlayedCard(IvionParser::IfPlayedCardContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfUsedSecondWind(IvionParser::IfUsedSecondWindContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfNear(IvionParser::IfNearContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfControlled(IvionParser::IfControlledContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfTileHadTerrain(IvionParser::IfTileHadTerrainContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfCardRevealed(IvionParser::IfCardRevealedContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfPlayerHasMitigate(IvionParser::IfPlayerHasMitigateContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfPlayerDidntLeaveTile(IvionParser::IfPlayerDidntLeaveTileContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfCardCostReduced(IvionParser::IfCardCostReducedContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfPlayerHasMoreHP(IvionParser::IfPlayerHasMoreHPContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfPlayerHasNoActions(IvionParser::IfPlayerHasNoActionsContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfInTerrain(IvionParser::IfInTerrainContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCounterCardCondition(IvionParser::CounterCardConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitStunPlayerCondition(IvionParser::StunPlayerConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitRevealCardsCondition(IvionParser::RevealCardsConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerControlledCondition(IvionParser::PlayerControlledConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerUncontrolledCondition(IvionParser::PlayerUncontrolledConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerHasCardsInDiscardCondition(IvionParser::PlayerHasCardsInDiscardConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerHasTakenDamageCondition(IvionParser::PlayerHasTakenDamageConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardResolvedCondition(IvionParser::CardResolvedConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerDrewCardCondition(IvionParser::PlayerDrewCardConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerMadeTerrainCondition(IvionParser::PlayerMadeTerrainConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerEntersSpaceCondition(IvionParser::PlayerEntersSpaceConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerAttachesCardCondition(IvionParser::PlayerAttachesCardConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardIsRevealedCondition(IvionParser::CardIsRevealedConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerStunsPlayerCondition(IvionParser::PlayerStunsPlayerConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardSentToDiscardCondition(IvionParser::CardSentToDiscardConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardFailsToResolveCondition(IvionParser::CardFailsToResolveConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerSlowsPlayerCondition(IvionParser::PlayerSlowsPlayerConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerRecivesControlCondition(IvionParser::PlayerRecivesControlConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCondition(IvionParser::ConditionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTriggerEffect(IvionParser::TriggerEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfWouldRecieveControl(IvionParser::IfWouldRecieveControlContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfWouldTakeDamage(IvionParser::IfWouldTakeDamageContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitIfWouldHeal(IvionParser::IfWouldHealContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitReplacementTriggerEffect(IvionParser::ReplacementTriggerEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitCardCantBeTargeted(IvionParser::CardCantBeTargetedContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitWhileEffect(IvionParser::WhileEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPrimaryCostReduction(IvionParser::PrimaryCostReductionContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitOnlyPlayIf(IvionParser::OnlyPlayIfContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitOncePerGameLimit(IvionParser::OncePerGameLimitContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTriggerLimit(IvionParser::TriggerLimitContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTriggerTurnLimit(IvionParser::TriggerTurnLimitContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitOmniPresentEffect(IvionParser::OmniPresentEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitOne(IvionParser::OneContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitTwo(IvionParser::TwoContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitThree(IvionParser::ThreeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitNumber(IvionParser::NumberContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerPowerValue(IvionParser::PlayerPowerValueContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerControlAmountValue(IvionParser::PlayerControlAmountValueContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerHandSize(IvionParser::PlayerHandSizeContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerMitigate(IvionParser::PlayerMitigateContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitPlayerCardsInHand(IvionParser::PlayerCardsInHandContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitLiteralValue(IvionParser::LiteralValueContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitGameStateValue(IvionParser::GameStateValueContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitValue(IvionParser::ValueContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitChooseSameMultipleTimes(IvionParser::ChooseSameMultipleTimesContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEffectList(IvionParser::EffectListContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitChooseEffect(IvionParser::ChooseEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitSingleEffect(IvionParser::SingleEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitRepeatedEffect(IvionParser::RepeatedEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitConditionalEffect(IvionParser::ConditionalEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAlternativeEffect(IvionParser::AlternativeEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEffect(IvionParser::EffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitEffectEnd(IvionParser::EffectEndContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAnyEffect(IvionParser::AnyEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitBreachEffect(IvionParser::BreachEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitAdvantageEffect(IvionParser::AdvantageEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitFrenzyEffect(IvionParser::FrenzyEffectContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitLine(IvionParser::LineContext *ctx) override {
		return visitChildren(ctx);
	}

	virtual antlrcpp::Any visitText(IvionParser::TextContext *ctx) override {
		return visitChildren(ctx);
	}
};
} // namespace IO