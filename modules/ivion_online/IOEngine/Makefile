export OUT_DIR=$(realpath $(pwd)/Source/Antlr4)
ROOT_DIR:=$(strip $(shell dirname $(realpath $(lastword $(MAKEFILE_LIST)))))

.PHONY: antlr4
antlr4:
	cd IvionGrammar && java -jar ${ROOT_DIR}/antlr-4.8-complete.jar \
		-Dlanguage=python3 -no-listener -visitor \
		-o ${ROOT_DIR}/Python/Engine/Parser  -lib ${ROOT_DIR}/Python/Engine/Parser \
		IvionLexer.antlr4 IvionParser.antlr4 
	# mv Source/Antlr4/*.h Include/IOEngine/Antlr4
	# sed -i 's!#include "!#include "IOEngine/Antlr4/!g' Source/Antlr4/*.cpp

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

python3.9:
	curl -C - https://www.python.org/ftp/python/3.9.1/Python-3.9.1.tgz --output ${ROOT_DIR}/python-3.9.tgz
	tar -xf ${ROOT_DIR}/python-3.9.tgz -C ${ROOT_DIR}
	cd ${ROOT_DIR}/Python-3.9.1 && ./configure --enable-optimizations && make -j6
	# --target=arm-linux --prefix=dir=/usr/local/arm-linux/

protobuf:
	/usr/bin/python3.8 -m grpc.tools.protoc -I${ROOT_DIR}/Protobuf --python_out=${ROOT_DIR}/Python/Engine/NetworkIO --grpc_python_out=${ROOT_DIR}/Python/Engine/NetworkIO GameInfo.proto