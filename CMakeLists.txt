cmake_minimum_required(VERSION 2.8.7)
project(BinarySearchTree)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(include)

set(SOURCE_FILES examples/main.cpp)
add_executable(BinarySearchTree ${SOURCE_FILES})
add_executable(Tests ${TESTS_SOURCE} tests/catch.hpp tests/size.cpp tests/insert.cpp tests/find.cpp tests/main.cpp tests/remove.cpp)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include DESTINATION include)
