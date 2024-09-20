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
    EXPECT_EQ(numberList.count, ++count);
}

TEST(linked_list_basic_operations, add_operation_case_zero)
{
    int count = 1;
    int index = 0;
    int values[count]{1};
    LinkedList numberList(values, count);

    numberList.add(2, 0);

    EXPECT_EQ(*numberList[index]->value, 2);
    EXPECT_EQ(numberList.count, ++count);
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

TEST(linked_list_basic_operations, it_will_default_to_adding_value_to_end_of_list_when_index_is_not_provided)
{
    LinkedList<int> list;

    list.add(100);

    EXPECT_EQ(list.count, 1);
    EXPECT_NE(list.item, nullptr);
    EXPECT_EQ(*list.item->value, 100);
}