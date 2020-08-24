.PHONY: antlr4
antlr4:
	java -jar antlr-4.8-complete.jar \
		-Dlanguage=Cpp -no-listener -visitor \
		-lib . \
		-o Source/Antlr4 IvionGrammar/Ivion.antlr4 
	mv Source/Antlr4/IvionGrammar/*.h Include/IOEngine/Antlr4
	sed -i 's!#include "!#include "IOEngine/Antlr4/!g' Source/Antlr4/IvionGrammar/*.cpp

grpc:
	#git clone https://github.com/grpc/grpc.git Extern/grpc 2>/dev/null
	cd Extern/grpc/ && git submodule update --init --recursive
	cd Extern/grpc/third_party/protobuf && mkdir -p build && cd build && CC=/usr/bin/clangmake CXX=/usr/bin/clang++ cmake .. && make -j6
	cd Extern/grpc/ && mkdir -p build && cd build && CC=/usr/bin/clangmake CXX=/usr/bin/clang++ cmake .. && make -j6
	

cmake:
	cd build && cmake -DCMAKE_BUILD_TYPE=DEBUG .. && make -j4

.PHONY: all
all:
	mkdir -p build
	find build/ -type f -name "*.a" -delete -name "*.so" -delete
	scons