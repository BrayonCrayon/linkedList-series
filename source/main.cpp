#include <iostream>
#include "Node.cpp"
#include "LinkedList.cpp"
#include <gtest/gtest.h>
#include "tests/tests.cpp"
using namespace std;

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}