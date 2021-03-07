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
	# git clone https://github.com/grpc/grpc.git Extern/grpc 2>/dev/null
	# cd Extern/grpc/ && git submodule update --init --recursive
	# cd Extern/grpc/third_party/protobuf && mkdir -p build && cd build && CC=/usr/bin/clangmake CXX=/usr/bin/clang++ cmake .. && make -j6
	cd Extern/grpc/ && mkdir -p build && cd build && \
		cmake  ..\
			-DgRPC_INSTALL=ON               \
			-DCMAKE_BUILD_TYPE=Release      \
			-DgRPC_ABSL_PROVIDER=module     \
			-DgRPC_CARES_PROVIDER=module    \
			-DgRPC_PROTOBUF_PROVIDER=module \
			-DgRPC_RE2_PROVIDER=module      \
			-DgRPC_SSL_PROVIDER=module      \
			-DgRPC_ZLIB_PROVIDER=module     \
			-DCMAKE_INSTALL_PREFIX=${ROOT_DIR}/Extern/Install/GRPC \
		&& make -j6 && make install

cmake:
	cd build && cmake -DCMAKE_BUILD_TYPE=DEBUG .. && make -j4

.PHONY: all
all:
	mkdir -p build
	find build/ -type f -name "*.a" -delete -name "*.so" -delete
	scons

python3.9:
	curl -C - https://www.python.org/ftp/python/3.9.1/Python-3.9.1.tgz --output ${ROOT_DIR}/python-3.9.tgz
	tar -xf ${ROOT_DIR}/python-3.9.tgz -C ${ROOT_DIR}/Extern/Source/
	cd ${ROOT_DIR}/Extern/Source/Python-3.9.1 && \
		./configure \
			--prefix=${ROOT_DIR}/Extern/Install/PythonDev \
			CFLAGS='-Xlinker -export-dynamic' \
			CXXFLAGS='-Xlinker -export-dynamic' \
			--enable-shared \
			--enable-optimizations \
		&& make clean && make -j6 && make install
	# --target=arm-linux --prefix=dir=/usr/local/arm-linux/

protobuf:
	${ROOT_DIR}/Extern/Install/GRPC/bin/protoc -I${ROOT_DIR}/Protobuf \
	--plugin=protoc-gen-grpc_python=${ROOT_DIR}/Extern/Install/GRPC/bin/grpc_python_plugin \
	--plugin=protoc-gen-grpc_cpp=${ROOT_DIR}/Extern/Install/GRPC/bin/grpc_cpp_plugin \
	--cpp_out=${ROOT_DIR}/Source/GRPC \
	--grpc_cpp_out=${ROOT_DIR}/Source/GRPC \
	GameState.proto GameInfo.proto
	sed -i \
		-e 's|"GameState.pb.h"|<GRPC/GameState.pb.h>|g' \
		-e 's|"GameState.grpc.pb.h"|<GRPC/GameState.grpc.pb.h>|g' \
		-e 's|"GameInfo.pb.h"|<GRPC/GameInfo.pb.h>|g' \
		-e 's|"GameInfo.grpc.pb.h"|<GRPC/GameInfo.grpc.pb.h>|g' \
		${ROOT_DIR}/Source/GRPC/*
	mv ${ROOT_DIR}/Source/GRPC/*.h ${ROOT_DIR}/Include/GRPC/

generatedCode:
	cd ${ROOT_DIR} && /usr/bin/python3.8 ${ROOT_DIR}/GenerateGameFromMetaData.py