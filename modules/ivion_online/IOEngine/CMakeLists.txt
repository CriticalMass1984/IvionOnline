cmake_minimum_required( VERSION 3.13 )
project( IvionOnline )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_BUILD_TYPE DEBUG)

find_package( Threads )
find_package(Protobuf REQUIRED PATHS "Extern/Install/GRPC/lib/cmake")
find_package(gRPC CONFIG PATHS "Extern/Install/GRPC/lib/cmake")
if(gRPC_FOUND)
  set(GRPCPP_INCLUDE_DIRS $<TARGET_PROPERTY:gRPC::grpc++,INTERFACE_INCLUDE_DIRECTORIES>)
  set(GRPCPP_LIBRARIES $<TARGET_PROPERTY:gRPC::grpc++,INTERFACE_LINK_LIBRARIES>)
else()
  find_package(PkgConfig REQUIRED)
  pkg_search_module(GRPC REQUIRED grpc)
  pkg_search_module(GRPCPP REQUIRED grpc++)
  list(APPEND GRPCPP_INCLUDE_DIRS ${GRPC_INCLUDE_DIRS})
  list(APPEND GRPCPP_LIBRARIES ${GRPC_LIBRARIES})
endif()


file(GLOB_RECURSE SOURCES "Source/*.cpp" "Source/*.cc")
add_library(IOEngine ${SOURCES})
target_include_directories(IOEngine PUBLIC
    Include
    ${GRPCPP_INCLUDE_DIRS}
    ${Protobuf_INCLUDE_DIRS}
)
target_link_libraries(IOEngine
    ${GRPCPP_LIBRARIES}
    ${Protobuf_LIBRARIES}
)

##
add_executable(SimpleTest Test/terminal.cpp)
target_link_libraries(SimpleTest IOEngine)
