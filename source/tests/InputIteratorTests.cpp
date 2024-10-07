//
// Created by bradyderoy on 10/7/24.
//

TEST(input_iterator_tests, can_instantiate_an_input_iterator)
{
    int count = 5;
    int values[count]{1,2,3,4,5};
    LinkedList numberList(values, count);

    // create an input iterator from the list
    LinkedList<int>::Iterator iterator = numberList.begin();

    EXPECT_NE(iterator, nullptr);
}
