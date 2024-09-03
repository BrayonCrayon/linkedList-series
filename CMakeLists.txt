cmake_minimum_required(VERSION 3.28)
project(LinkedLists)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES ./source/main.cpp)

add_subdirectory(source/tests)

include_directories(source/LinkedLists_lib)
add_subdirectory(source/LinkedLists_lib)

find_package(GTest)
add_executable(LinkedLists_run source/main.cpp )
target_link_libraries(LinkedLists_run PRIVATE LinkedLists_lib PUBLIC gtest::gtest)