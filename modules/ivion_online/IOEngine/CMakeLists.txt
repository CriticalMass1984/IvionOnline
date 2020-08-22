cmake_minimum_required(VERSION 3.14)
project(IvionOnline)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_EXTENSIONS OFF)

SET (CMAKE_C_COMPILER             "/usr/bin/clang")
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")

file(GLOB_RECURSE ANTLR_SRC Extern/Antlr4Runtime/Source/*.cpp)

add_library(antlr STATIC
    ${ANTLR_SRC}
)

target_include_directories(antlr PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Extern/Antlr4Runtime/Include
)

#################################

file(GLOB_RECURSE SRC Source/*.cpp)

add_library(ivion STATIC
    ${SRC}
)

target_include_directories(ivion PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Include
)
target_link_libraries(ivion antlr)


#################################

add_subdirectory(Test)