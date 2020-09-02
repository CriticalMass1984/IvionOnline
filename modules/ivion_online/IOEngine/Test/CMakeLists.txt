add_executable(TestAntlr4
    TestAntlr4.cpp
)

target_link_libraries(TestAntlr4 ivion)

#################################


add_executable(TestGame
    TestGame.cpp
)

target_link_libraries(TestGame ivion)


#################################

add_executable(TestMemoryPool
    TestMemoryPool.cpp
)
target_include_directories(TestMemoryPool PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../Include
)


#################################

add_executable(TestCard
    TestCard.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../Source/Card.cpp
)
target_include_directories(TestCard PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../Include
)

#################################

add_executable(TestPlayer
    TestPlayer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../Source/Player.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../Source/Card.cpp
)
target_include_directories(TestPlayer PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../Include
)


#################################

add_executable(TestBranch
    TestBranch.cpp
)
target_include_directories(TestBranch PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../Include
)
target_link_libraries(TestBranch ivion)

#################################

add_executable(TestCardLibrary
    TestCardLibrary.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../Source/CardLibrary.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../Source/Util.cpp
)
target_include_directories(TestCardLibrary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../Include
)
