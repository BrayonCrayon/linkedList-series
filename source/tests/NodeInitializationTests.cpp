//
// Created by bradyderoy on 8/20/24.
//
#include <string>

using namespace std;

TEST(node_initialization_tests, basic_constructor)
{
    const Node <int> testNode;
    EXPECT_EQ(testNode.value, nullptr);
}

TEST(node_initialization_tests, one_arg_pointer_constructor)
{
    int value = 13;
    const Node testNode(value);

    EXPECT_NE(testNode.value, &value);
    EXPECT_EQ(*testNode.value, value);
}

TEST(node_initialization_tests, one_arg_int_value_constructor)
{
    int value = 13;
    const Node testNode(value);

    EXPECT_EQ(*testNode.value, value);
    EXPECT_NE(testNode.value, &value);
}

TEST(node_initialization_tests, one_arg_string_value_constructor)
{
    string testStr;
    const Node testNode(testStr);

    EXPECT_NE(testNode.value, &testStr);
    EXPECT_EQ(*testNode.value, testStr);
}


