SET(CMAKE_BUILD_TYPE DEBUG)

add_executable(TestDictionary TestDictionary.cpp ${CMAKE_CURRENT_SOURCE_DIR}/../Source/Branch.cpp)

target_include_directories(TestDictionary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../Include
)

add_executable(TestRef TestRef.cpp)

target_include_directories(TestRef PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../Include
)

add_executable(TestArray TestArray.cpp ${CMAKE_CURRENT_SOURCE_DIR}/../Source/Branch.cpp)

target_include_directories(TestArray PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../Include
)