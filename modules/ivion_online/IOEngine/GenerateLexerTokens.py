import re

lexerTokens = set()

parserRules = set()

def StripToken(token: str):
    token = token.replace("{", "").replace("}", "")
    token = token.replace(";", "").replace(".", "").replace("+", "")
    token = token.replace("(", "") .replace(")", "")
    token = token.replace("?", "").replace(":", "").replace(":", "")
    return token.strip()


class Rule():
    def __init__(self, name: str):
        self.Name = name
        self.Rules = list()

    def AddRule(self, rule: str):
        self.Rules.append(rule)

    def __str__(self):
        return "{}\n\t: {}".format(self.Name, "| ".join(self.Rules))

with open("IvionGrammar/IvionParserRAW.antlr4", "r") as protoParserFile:
    with open("IvionGrammar/IvionParser.antlr4", "w") as parser:
        parser.write("parser grammar IvionParser;\n")
        parser.write("options { tokenVocab = IvionLexer; }\n\n")

        #
        with open("IvionGrammar/IvionLexer.antlr4", "w") as lexer:
            lexer.write("lexer grammar IvionLexer;\n\n")

            #
            wroteRule = False
            for line in protoParserFile.readlines():
                if line.startswith("/"):
                    parser.write(line)
                    continue

                if not line.startswith(" "):
                    ruleName = line.strip()
                    if ruleName == "":
                        if wroteRule:
                            wroteRule = False
                            parser.write("\n\t;\n")
                        else:
                            parser.write("\n")
                        continue
                    if wroteRule:
                        parser.write("\n\t;\n")

                    parser.write("\n{}\n\t:".format(ruleName))
                    parserRules.add(ruleName)
                    wroteRule = True
                    continue

                tokens = [StripToken(x) for x in line.split(" ")]
                for token in tokens:
                    if token == "":
                        continue
                    if token == "|":
                        parser.write("\n\t|")
                        continue
                    if token[0] == "'" or token[0] == "-" or token == "=":
                        parser.write(" {}".format(token))
                        continue
                    if token == "VALUE" or token == "CARD_NAME" or\
                        token == "ACTION" or token == "POWER" or token == "INITIATIVE":
                        parser.write(" {}".format(token))
                        continue
                    if token in parserRules:
                        parser.write(" {}".format(token))
                        continue
        
                    tokenName = token.replace("'", "").capitalize()
                    parser.write(" {}".format(tokenName))
                    if token not in lexerTokens:
                        tokenValue = token.replace("'", "\\'")
                        lexer.write("{}: '{}';\n".format(tokenName, tokenValue))
                        lexerTokens.add(token)

                
        # with open("IvionParserExtraRules.txt", "r") as extraRules:
        #     for line in extraRules.readlines():
        #         parser.write(line)
