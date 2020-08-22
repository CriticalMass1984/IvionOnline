.PHONY: antlr4
antlr4:
	java -jar antlr-4.8-complete.jar \
		-Dlanguage=Cpp -no-listener -visitor \
		-lib . \
		-o Source/Antlr4 IvionGrammar/Ivion.antlr4 
	mv Source/Antlr4/IvionGrammar/*.h Include/IOEngine/Antlr4
	sed -i 's!#include "!#include "IOEngine/Antlr4/!g' Source/Antlr4/IvionGrammar/*.cpp

cmake:
	cd build && cmake -DCMAKE_BUILD_TYPE=DEBUG .. && make -j4

.PHONY: all
all:
	mkdir -p build
	find build/ -type f -name "*.a" -delete -name "*.so" -delete
	scons