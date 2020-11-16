#include <IOEngine/Antlr4/IvionBaseVisitor.h>
#include <IOEngine/Antlr4/IvionLexer.h>
#include <IOEngine/Antlr4/IvionParser.h>
#include <antlr4-runtime.h>

#include <BaseErrorListener.h>
#include <Util.hpp>

#include <iostream>
#include <regex>

class ErrorListener : public antlr4::BaseErrorListener {
public:
	IvionParser &owner;
	bool FoundError = false;

	ErrorListener(IvionParser &aOwner) :
			owner(aOwner) {}

	void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line, size_t charPositionInLine,
			const std::string &msg, std::exception_ptr e) override {
		fprintf(stderr, "Bad Symbol(%s), %lu:%lu - %s\n", offendingSymbol->getText().c_str(), line, charPositionInLine, msg.c_str());
		std::vector<char> buffer(charPositionInLine + 2, ' ');
		buffer.back() = 0;
		buffer[charPositionInLine] = '^';
		fprintf(stderr, "%s\n", buffer.data());
		FoundError = true;
	}
};

std::vector<std::string> CsvParse(const std::string &line) {
	std::vector<std::string> cells;
	// std::vector<std::tuple<char, size_t>> markers;
	const size_t Size = line.size();
	size_t start = 0;
	bool inQuotedSection = false;
	for (size_t i = 0; i < Size; ++i) {
		if (line[i] == '"') {
			++i;
			while (i < Size && line[i] != '"') {
				++i;
			}
			continue;
		}
		if (line[i] == ',') {
			cells.emplace_back(line.substr(start, i - start));
			start = i + 1;

			// printf("CELL[%lu]: '%s'\n", cells.size() - 1, cells.back().c_str());
		}
	}

	return cells;
}

std::string ScrubText(std::string text)
{	
	text = trim_copy(text);

	static std::unordered_map<std::string, std::regex> replacements = {
		{"initiative", std::regex (R"del(\[n\\])del")},
		{"actions", std::regex (R"del(\[a\])del")},
		{"power", std::regex (R"del(\[p\])del")},
	};
	for(auto rule : replacements)
	{
		text = std::regex_replace (text, rule.second, rule.first);
	}

	// call this one last
	static std::regex scrubber (R"del(\[.*?\]|<\(\.*?)>)del");
	text = std::regex_replace (text, scrubber, "");

	for(char& c : text)
	{
		if(c == '{' || c == '}')
		{
			c = ' ';
		}
	}

	// make everything lower case
	std::transform(text.begin(), text.end(), text.begin(), [](unsigned char c){ return std::tolower(c); });
	
	return text;
}

bool ParseText(const std::string &text) {
	if (text.length() < 4) {
		return true;
	}

	// printf("TEXT: '%s'\n", text.c_str());
	antlr4::ANTLRInputStream antlrStream(text);
	IvionLexer lexer(&antlrStream);
	antlr4::CommonTokenStream tokens(&lexer);
	IvionParser parser(&tokens);
	IvionBaseVisitor executor;

	ErrorListener errorListener(parser);

	parser.addErrorListener(&errorListener);

	antlrcpp::Any result = executor.visitText(parser.text());

	if (errorListener.FoundError) {
		fprintf(stderr, "%s \n", text.c_str());
		return false;
	}
	return true;
	// fprintf(stdout, "\n%s\n", parser.text()->toStringTree(true).c_str());
}

int main(int argc, char **argv) {
	// ParseText("draw a card.");
	// return 0;
	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		printf("Can't open: %s\n", argv[1]);
		return -1;
	}


	std::string line;
	std::getline(file, line); //skip columns
	int cardNum = 0;

	while (std::getline(file, line)) {
		auto cells = CsvParse(line);
		if (cells.size() < 20) {
			continue;
		}
		cardNum = std::stoi(cells[0]);
		std::string name = ScrubText(cells[2]);
		std::string activeEffect = ScrubText(cells[19]);
		std::string passiveEffect = ScrubText(cells[20]);

		if (!ParseText(activeEffect)) {
			fprintf(stderr, "FAILED: %s - %s\n", name.c_str(), activeEffect.c_str());
			break;
		}
		if (!ParseText(passiveEffect)) {
			
			fprintf(stderr, "FAILED: %s - %s\n", name.c_str(), activeEffect.c_str());
			break;
		}
	}
	fprintf(stderr, "Last parsed Card #%d\n", cardNum);
}