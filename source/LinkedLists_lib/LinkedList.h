//
// Created by bradyderoy on 8/14/24.
//
#include <Node.h>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
class LinkedList
{

public:
    int count;
    Node<T>* item;

    LinkedList();

    LinkedList(int values[])
    {
        count = 1;
        item = new Node(values[0]);
    }

    ~LinkedList()
    {
        delete item;
    }
};

#endif //LINKEDLIST_H
