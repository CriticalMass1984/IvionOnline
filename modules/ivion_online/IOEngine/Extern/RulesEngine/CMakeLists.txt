file(GLOB_RECURSE SRC Source/*.cpp)

add_library(RulesEngine STATIC
    ${SRC}
)

target_include_directories(RulesEngine PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Include
)