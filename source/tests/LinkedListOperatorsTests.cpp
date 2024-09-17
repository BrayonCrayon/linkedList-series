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