cmake_minimum_required(VERSION 3.28)
project(LinkedLists)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_executable(LinkedLists main.cpp)
add_executable(LinkedLists_run source/main.cpp)

include_directories(source/LinkedLists_lib)
add_subdirectory(source/LinkedLists_lib)
target_link_libraries(LinkedLists_run LinkedLists_lib)

find_package(GTest)
target_link_libraries(LinkedLists_lib gtest::gtest)

add_subdirectory(source/tests)