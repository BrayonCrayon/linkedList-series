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
    explicit LinkedList(int values[]);
    ~LinkedList();
};

#endif //LINKEDLIST_H
