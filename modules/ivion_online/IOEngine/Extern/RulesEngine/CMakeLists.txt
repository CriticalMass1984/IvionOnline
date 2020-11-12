cmake_minimum_required(VERSION 3.10.2)
project(RulesEngine)

SET (CMAKE_C_COMPILER             "/usr/bin/clang")
SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
SET(CC /usr/bin/clang)
SET(CXX /usr/bin/clang++)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_EXTENSIONS OFF)

#################################

file(GLOB_RECURSE SRC Source/*.cpp)

add_library(RulesEngine STATIC
    ${SRC}
)

target_include_directories(RulesEngine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Include
)


#################################

#add_subdirectory(Test)