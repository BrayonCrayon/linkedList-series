cmake_minimum_required(VERSION 3.28)
project(LinkedLists)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_executable(LinkedLists main.cpp)
add_executable(LinkedLists_run ${SOURCE_FILES}
        tests/LinkedListInitializationTests.cc
        tests/LinkedListInitializationTests.cc
        source/LinkedLists_lib/LinkedList.h
        source/LinkedLists_lib/LinkedList.cpp)

include_directories(source/LinkedLists_lib)
add_subdirectory(source/LinkedLists_lib)

target_link_libraries(LinkedLists_run LinkedLists_lib)

add_subdirectory(tests)