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
    EXPECT_NE(list.head, nullptr);
    EXPECT_EQ(*list.head->value, 100);
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

TEST(linked_list_basic_operations, will_be_able_to_get_index_from_node_reference)
{
    int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    Node<int>* node = numberList[2];

    const int indexOfNode = numberList.indexOf(node);

    EXPECT_EQ(2, indexOfNode);
}

TEST(linked_list_basic_operations, will_return_bad_value_if_node_does_not_exist_in_list)
{
    int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    auto node = new Node<int>(99);

    const int indexOfNode = numberList.indexOf(node);

    EXPECT_EQ(-1, indexOfNode);
}

TEST(linked_list_basic_operations, will_return_correct_index_when_list_is_manipulated)
{
    int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    numberList.remove(0);
    numberList.remove(2);

    const int indexOfNode = numberList.indexOf(numberList[2]);

    EXPECT_EQ(2, indexOfNode);
}

TEST(linked_list_basic_operations, will_remove_node_even_when_previous_is_null)
{
    int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    numberList.remove(0);

    EXPECT_EQ(4, numberList.count);
    EXPECT_EQ(2, *numberList[0]->value);
}

TEST(linked_list_basic_operations, will_throw_an_error_when_retriving_an_item_from_an_empty_list)
{
    int values[0];
    LinkedList<int> numberList(values, 0);

    EXPECT_ANY_THROW({
        numberList[0];
    });
}

TEST(linked_list_basic_operations, will_assign_previouses_properly_when_adding_an_element_for_the_first_time)
{
    int values[0];
    LinkedList<int> list(values, 0);

    list.add(2);

    EXPECT_EQ(list[0]->previous, list.head);
}

TEST(linked_list_basic_operations, it_snickers_)
{
    int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    numberList.add(99, 3);

    for(int i = 0; i < numberList.count; i++)
    {
        EXPECT_EQ(numberList[i]->next, numberList[i + 1]);
        EXPECT_EQ(numberList[i]->previous, numberList[i - 1]);
    }
}

TEST(linked_list_basic_operations, it_adds_to_end)
{
    int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    numberList.add(99);
}
