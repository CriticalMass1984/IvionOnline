#pragma once

#include <string>
#include <unordered_map>
#include <vector>

namespace IO {
namespace Engine {
struct CardDef {
	enum class Format {
		NONE,
		SKILL,
		FEAT
	};

	enum class Category {
		NONE,
		CLASS,
		SPECIALIZATION
	};

	enum class Type {
		NONE,
		ABILITY,
		ATTACK,
		PASSIVE
	};

	enum class Color {
		NONE,
		WHITE,
		GRAY,
		BLUE,
		GREEN,
		BLACK,
		RED
	};
	int number_{ -1 };
	Format format_;
	std::string archetype_;
	std::string name_;
	int actions_;
	int power_;
	int range_;
	int maxHP_;
	bool heroic_;
	bool canBeSlowed_;
	bool canBeSilenced_;
	bool canBeDisarmed_;
	bool isInstant_;
	std::string active_mechanics_;
	std::string passive_mechanics_;
	std::string image_;
	Color colors_[3];
	Category category_;
	Type type_;
};

class CardLibrary {
	std::vector<CardDef> cardList_;
	std::unordered_map<std::string, std::unordered_map<std::string, int>> cardIndexByArchetypeName_;

	CardDef ParseLine(const std::string &line);

public:
	inline const std::vector<CardDef> &CardList(const std::string &line) const { return cardList_; }

	const CardDef *GetCard(const std::string &archetype, const std::string &name) const;

	void LoadCards(const std::string &CsvFilename);
};
} // namespace Engine
} // namespace IO