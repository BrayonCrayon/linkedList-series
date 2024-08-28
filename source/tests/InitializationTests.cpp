//
// Created by bradyderoy on 8/15/24.
//
#include <gtest/gtest.h>

#include "LinkedList.cpp"
using namespace std;

TEST(initialization_test, basic_constructor)
{
    const LinkedList<int> linkList;
    EXPECT_EQ(linkList.count, 0);
    EXPECT_EQ(linkList.item, nullptr);
}
//
// TEST(initialization_tests, one_arg_constructor)
// {
//     LinkedListNode* node = ;
// }