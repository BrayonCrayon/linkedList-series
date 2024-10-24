//
// Created by bradyderoy on 10/7/24.
//

TEST(input_iterator_tests, can_instantiate_an_input_iterator)
{
    constexpr int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    LinkedList<int>::Iterator iterator = numberList.begin();

    EXPECT_NE(*iterator, nullptr);
    for(int i = 0; i < count; ++iterator, ++i)
    {
        EXPECT_EQ(*iterator->value, values[i]);
    }
}

TEST(input_iterator_tests, can_instantiate_a_number_comparision_operator)
{
    constexpr int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList<int> numberList(values, count);
    LinkedList<int>::Iterator iterator1 = numberList.begin();
    LinkedList<int>::Iterator iterator2 = numberList.begin();

    EXPECT_TRUE(iterator1 == iterator2);
}

TEST(input_iterator_tests, can_instantiate_a_string_comparision_operator)
{
    constexpr int count = 5;
    string values[count]{"1", "2", "3", "4", "5"};
    LinkedList<string> stringList(values, count);
    LinkedList<string>::Iterator iterator1 = stringList.begin();
    LinkedList<string>::Iterator iterator2 = stringList.begin();

    EXPECT_TRUE(iterator1 == iterator2);
}

TEST(input_iterator_tests, can_instantiate_a_string_comparision_operator_snickers)
{
    constexpr int count = 5;
    string values[count]{"1", "2", "3", "4", "5"};
    LinkedList<string> stringList(values, count);
    LinkedList<string>::Iterator iterator1 = stringList.begin();
    LinkedList<string>::Iterator iterator2 = stringList.begin();

    EXPECT_FALSE(iterator1 != iterator2);
}