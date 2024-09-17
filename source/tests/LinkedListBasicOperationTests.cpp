//
// Created by bradyderoy on 9/17/24.
//


TEST(linked_list_basic_operations, add_operation)
{
    int count = 5;
    int index = 2;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    numberList.add(6, 2);

    EXPECT_EQ(*numberList[index]->value, 6);
}

TEST(linked_list_basic_operations, add_operation_case_zero)
{
    int count = 1;
    int index = 0;
    int values[count]{1};
    LinkedList numberList(values, count);

    numberList.add(2, 0);

    EXPECT_EQ(*numberList[index]->value, 2);
}

TEST(linked_list_basic_operations, add_operation_case_pos_greater_than_count)
{
    int count = 1;
    int values[count]{1};
    LinkedList numberList(values, count);

    EXPECT_ANY_THROW({
        numberList.add(2, 100);
    });
}