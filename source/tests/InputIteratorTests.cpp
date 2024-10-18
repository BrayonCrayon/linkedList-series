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
