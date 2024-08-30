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

TEST(initialization_tests, one_arg_constructor)
{
    int values[]{1};
    const LinkedList<int> list(values);

    EXPECT_EQ(list.count, 1);
    EXPECT_EQ(*list.item->value, values[0]);
}