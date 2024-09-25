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
    EXPECT_NE(list.head->next, nullptr);
    EXPECT_EQ(*list.head->next->value, 100);
}

TEST(linked_list_basic_operations, it_delets_node_from_middle_of_list)
{
    LinkedList<int> list;

    list.add(1);
    list.add(2);
    list.add(3);

    int removedValue = list.remove(1);

    ASSERT_EQ(*list[0]->value, 1);
    ASSERT_EQ(*list[1]->value, 3);
    ASSERT_EQ(removedValue, 2);
}

TEST(linked_list_basic_operations, it_throws_error_when_value_doesnt_exist)
{
    LinkedList<int> list;

    EXPECT_ANY_THROW({
        list.remove(1);
    });
}

TEST(linked_list_basic_operations, it_throws_error_when_index_negative)
{
    LinkedList<int> list;

    EXPECT_ANY_THROW({
        list.remove(-1);
    });
}

TEST(linked_list_basic_operations, it_decrements_count_when_item_removed)
{
    LinkedList<int> list;

    EXPECT_EQ(0, list.count);

    list.add(1);

    EXPECT_EQ(1, list.count);

    list.remove(0);

    EXPECT_EQ(0, list.count);
}

TEST(linked_list_basic_operations, it_configures_list_as_expected)
{
    LinkedList<int> list;

    list.add(1);
    list.add(2);
    list.add(3);

    ASSERT_EQ(*list[0]->value, 1);
    ASSERT_EQ(*list[1]->value, 2);
    ASSERT_EQ(*list[2]->value, 3);
}