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