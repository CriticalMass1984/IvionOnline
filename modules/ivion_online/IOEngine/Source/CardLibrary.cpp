#include <IOEngine/CardLibrary.hpp>
#include <Util.hpp>

#include <cassert>
#include <fstream>
#include <limits>

//https://godotengine.org/qa/40566/how-can-i-import-a-csv-or-txt-file

namespace IO {
namespace Engine {

//doesn't cehck for end of line, we should never get there
std::vector<std::string> SplitCsv(const std::string &line, int limit) {
	std::vector<std::string> results;
	results.reserve(limit);

	assert(line.size() < std::numeric_limits<unsigned int>::max());
	const unsigned int size = line.size();
	for (unsigned int i = 0; i < size; ++i) {
		unsigned int start = i;
		if (line[i] == '"') {
			++i;
			start = i;
			while (i < size && line[i] != '"') {
				++i;
			}
		}
		i = (unsigned int)line.find_first_of(',', i);

		if (i - start <= 0) {
			results.emplace_back("");
		} else {
			std::string entry(line.c_str() + start, i - start);
			trim(entry);
			results.emplace_back(entry);
		}

		if (limit > 0 && (int)results.size() >= limit) {
			break;
		}
	}
	return results;
}

CardDef::Format formatFromString(const std::string &str) {
	if (str == "Skill") {
		return CardDef::Format::SKILL;
	}
	if (str == "Feat") {
		return CardDef::Format::FEAT;
	}
	return CardDef::Format::NONE;
}

CardDef::Category categoryFromString(const std::string &str) {
	if (str == "Class") {
		return CardDef::Category::CLASS;
	}
	if (str == "Specialization") {
		return CardDef::Category::SPECIALIZATION;
	}
	return CardDef::Category::NONE;
}

CardDef::Type typeFromString(const std::string &str) {
	if (str == "Ability") {
		return CardDef::Type::ABILITY;
	}
	if (str == "Attack") {
		return CardDef::Type::ATTACK;
	}
	if (str == "Passive") {
		return CardDef::Type::PASSIVE;
	}
	return CardDef::Type::NONE;
}

CardDef::Color colorFromString(const std::string &str) {
	if (str == "Green")
		return CardDef::Color::GREEN;
	if (str == "Red")
		return CardDef::Color::RED;
	if (str == "Blue")
		return CardDef::Color::BLUE;
	if (str == "Black")
		return CardDef::Color::BLACK;
	if (str == "White")
		return CardDef::Color::WHITE;
	if (str == "Gray")
		return CardDef::Color::GRAY;
	return CardDef::Color::NONE;
}

int resourceFromString(const std::string &sign, const std::string &value) {
	int val = std::atoi(value.data());
	if (sign == "-") {
		return -val;
	}
	return val;
}

CardDef CardLibrary::ParseLine(const std::string &line) {
	std::vector<std::string> entries = SplitCsv(line, 29);
	if (entries.size() < 29 || entries[0].empty()) {
		return CardDef{};
	}
	try {
		return CardDef{
			.number_ = std::atoi(entries[0].data()),
			.format_ = formatFromString(entries[1]),
			.archetype_ = FixName(entries[3]),
			.name_ = FixName(entries[2]),
			.actions_ = resourceFromString(entries[4], entries[5]),
			.power_ = resourceFromString(entries[7], entries[6]),
			.range_ = entries[8].empty() ? -1 : std::atoi(entries[8].data()),
			.maxHP_ = entries[9].empty() ? -1 : std::atoi(entries[9].data()),
			.heroic_ = !entries[10].empty(),
			.canBeSlowed_ = !entries[11].empty(),
			.canBeSilenced_ = !entries[12].empty(),
			.canBeDisarmed_ = !entries[13].empty(),
			.isInstant_ = entries[14].find("Instant") != std::string::npos,
			.active_mechanics_ = entries[19],
			.passive_mechanics_ = entries[20],
			.image_ = FixFilePath(entries[23]),
			.colors_ = { colorFromString(entries[24]), colorFromString(entries[25]), colorFromString(entries[26]) },
			.category_ = categoryFromString(entries[27]),
			.type_ = typeFromString(entries[28]),
		};
	} catch (...) {
		return CardDef{};
	}
}

void CardLibrary::LoadCards(const std::string &CsvFilename) {
	std::ifstream file(CsvFilename);
	if (!file.is_open()) {
		return;
	}

	std::string line;
	std::getline(file, line); //consume the column headers
	while (std::getline(file, line)) {
		if (line.empty()) {
			continue;
		}
		CardDef def = ParseLine(line);
		if (def.number_ < 0) {
			continue;
		}
		printf("Loaded Card: %s_%s\n", def.archetype_.c_str(), def.name_.c_str());
		auto cardIndexByName = cardIndexByArchetypeName_.find(def.archetype_);
		if (cardIndexByName == cardIndexByArchetypeName_.end()) {
			bool success;
			std::tie(cardIndexByName, success) = cardIndexByArchetypeName_.emplace(std::make_pair(def.archetype_, std::unordered_map<std::string, int>()));
			if (!success) {
				fprintf(stderr, "Could not insert new map!");
				continue;
			}
		}
		cardIndexByName->second[def.name_] = def.number_;
		if (cardList_.size() <= (unsigned int)def.number_) {
			cardList_.resize(def.number_ + 1);
		}
		cardList_[def.number_] = def;
	}
}

const CardDef *CardLibrary::GetCard(const std::string &archetype, const std::string &name) const {
	auto cardIndexByName = cardIndexByArchetypeName_.find(archetype);
	if (cardIndexByName == cardIndexByArchetypeName_.end()) {
		fprintf(stderr, "Could not find archetype: %s\n", archetype.c_str());
		return nullptr;
	}
	auto cardIt = cardIndexByName->second.find(name);
	if (cardIt == cardIndexByName->second.end()) {
		fprintf(stderr, "Could not find card  '%s' in archetype '%s'\n", name.c_str(), archetype.c_str());
		return nullptr;
	}
	if ((unsigned int)cardIt->second >= cardList_.size() || cardIt->second < 0) {
		fprintf(stderr, "Card  '%s' in archetype '%s' has index '%d', which is out of bound of the list of cards (size '%lu')\n", name.c_str(), archetype.c_str(), cardIt->second, cardList_.size());
		return nullptr;
	}
	return &cardList_[cardIt->second];
}
} // namespace Engine
} // namespace IO