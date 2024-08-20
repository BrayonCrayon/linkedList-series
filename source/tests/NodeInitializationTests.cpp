//
// Created by bradyderoy on 8/20/24.
//
#include <gtest/gtest.h>

#include "Node.h"

TEST(node_initialization_test, basic_constructor)
{
    const Node testNode;
    EXPECT_EQ(testNode.value, nullptr);
}