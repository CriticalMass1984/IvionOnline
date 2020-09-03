#################################


add_executable(TestGame
    TestGame.cpp
)

target_link_libraries(TestGame ivion)

#################################

add_executable(TestRandomGame
    TestRandomGame.cpp
)

target_link_libraries(TestRandomGame ivion)


#################################

add_executable(TestMemoryPool
    TestMemoryPool.cpp
)
target_include_directories(TestMemoryPool PUBLIC
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
