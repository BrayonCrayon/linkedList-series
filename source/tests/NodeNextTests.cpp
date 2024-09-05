//
// Created by bradyderoy on 9/5/24.
//
TEST(node_next_tests, test_default_next_value)
{
    Node <int> testNode;

    EXPECT_EQ(testNode.next, nullptr);
}

TEST(node_next_tests, be_able_to_set_next_value)
{
    int nextValue(12);

    Node<int> testNode;
    testNode.setNext(nextValue);

    EXPECT_NE(testNode.next, nullptr);
    EXPECT_EQ(*testNode.next->value, nextValue);
}