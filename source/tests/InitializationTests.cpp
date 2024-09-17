//
// Created by bradyderoy on 8/15/24.
//
using namespace std;

TEST(initialization_tests, basic_constructor)
{
    const LinkedList<int> linkList;
    EXPECT_EQ(linkList.count, 0);
    EXPECT_EQ(linkList.item, nullptr);
}

TEST(initialization_tests, one_arg_constructor)
{
    int values[]{1};
    const LinkedList<int> list(values, 1);

    EXPECT_EQ(list.count, 1);
    EXPECT_EQ(*list.item->value, values[0]);
}

TEST(initialization_tests, be_able_to_setup_linked_list)
{
    int count = 6;
    int values[count] = {1,2,3,4,5,6};
    const LinkedList<int> list(values, count);

    EXPECT_EQ(list.count, count);

    Node<int>* currentNode = list.item;
    for(auto value: values)
    {
        EXPECT_EQ(*currentNode->value, value);
        currentNode = currentNode->next;
    }
}

TEST(initialization_tests, be_able_to_copy_linked_list_to_another_linked_list)
{
    int count = 5;
    int values[count] = {1, 2, 3, 4, 5};

    LinkedList A(values, count);
    LinkedList B(A);

    Node<int>* aIter = A.item;
    Node<int>* bIter = B.item;

    for(int i = 0; i < count; ++i)
    {
        EXPECT_EQ(*aIter->value, *bIter->value);
        aIter = aIter->next;
        bIter = bIter->next;
    }
    EXPECT_EQ(A.count, B.count);
}

TEST(initialization_tests, for_another_day)
{
    // A = listing being copied
    // B = new linked list

    // get count of nodes in linked list A
    // for loop for all nodes where i < count
    // copy data from a[i] to new node
}
