//
// Created by bradyderoy on 11/6/24.
//

TEST(node_previous_tests, test_default_previous_value)
{
    Node <int> testNode;

    EXPECT_EQ(testNode.previous, nullptr);
}

TEST(node_previous_tests, be_able_to_set_previous_value)
{
    int previousValue(12);

    Node<int> testNode;
    testNode.setPrevious(previousValue);

    EXPECT_NE(testNode.previous, nullptr);
    EXPECT_EQ(*testNode.previous->value, previousValue);
}
