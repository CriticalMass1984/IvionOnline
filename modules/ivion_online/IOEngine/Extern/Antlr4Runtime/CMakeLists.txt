file(GLOB_RECURSE ANTLR_SRC Source/*.cpp)

add_library(antlr STATIC
    ${ANTLR_SRC}
)

target_include_directories(antlr PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/Include
)

