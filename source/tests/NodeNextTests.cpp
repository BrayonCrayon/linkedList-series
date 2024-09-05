//
// Created by bradyderoy on 9/5/24.
//
TEST(node_next_tests, test_default_next_value)
{
    Node <int> testNode;

    EXPECT_EQ(testNode.next, nullptr);
}