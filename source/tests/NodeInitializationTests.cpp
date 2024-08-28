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

TEST(node_initialization_tests, one_arg_pointer_constructor)
{
    int value = 13;
    const Node testNode(&value);

    EXPECT_EQ(testNode.value, &value);
    EXPECT_EQ(*testNode.value, value);
}

TEST(node_initialization_tests, one_arg_value_constructor)
{
    int value = 13;
    const Node testNode(value);

    EXPECT_EQ(*testNode.value, value);
    EXPECT_EQ(testNode.value, &value);
}