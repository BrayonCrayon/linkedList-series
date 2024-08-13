cmake_minimum_required(VERSION 3.28)
project(LinkedLists)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_executable(LinkedLists main.cpp)
add_executable(LinkedLists_run ${SOURCE_FILES}
        tests/LinkedListInitialization.cpp)

include_directories(LinkedLists_lib)
add_subdirectory(LinkedLists_lib)

target_link_libraries(LinkedLists_run LinkedLists_lib)

add_subdirectory(tests)

