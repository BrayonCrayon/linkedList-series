//
// Created by bradyderoy on 9/17/24.
//


TEST(linked_list_operators, square_brackets_operator)
{
    int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    for(int i = 0; i < count; ++i)
    {
        EXPECT_EQ(values[i], *numberList[i]->value);
    }
}

TEST(linked_list_operators, square_brakets_operator_will_return_nullptr_when_no_items_are_in_list)
{
    LinkedList<int> list;

    EXPECT_EQ(list[0], nullptr);
}