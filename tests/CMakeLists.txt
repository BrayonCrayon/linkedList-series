project(tests)
add_subdirectory(lib/googletest-1.15.2)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
# adding the Google_Tests_run target
add_executable(Google_Tests_run LinkedListInitialization.cpp) #.cpp test files

# linking Google_Tests_run with DateConverter_lib which will be tested
target_link_libraries(Google_Tests_run LinkedLists_lib)

target_link_libraries(Google_Tests_run gtest gtest_main)