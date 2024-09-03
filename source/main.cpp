#include <gtest/gtest.h>
#include <Node.cpp>
#include <LinkedList.cpp>
#include "tests/test.cpp"
using namespace std;

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}