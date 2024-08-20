//
// Created by bradyderoy on 8/15/24.
//
#include <gtest/gtest.h>

#include "LinkedList.h"

TEST(initialization_test, basic_constructor)
{
    LinkedList linkList;
    EXPECT_EQ(linkList.count, 0);
}