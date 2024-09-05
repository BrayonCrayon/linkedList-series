//
// Created by bradyderoy on 8/14/24.
//
#include <LinkedList.h>

template<typename T>
LinkedList<T>::LinkedList(): count(0), item(nullptr) {}

template<typename T>
LinkedList<T>::LinkedList(T values[])
{
    count = 1;
    Node temp = new Node(values[0]);
    for(auto value:values)
    {
        item = new Node(value);
        item->setNext(value);
        temp = item->next;
    }
}

template<typename T>
LinkedList<T>::~LinkedList()
{
    delete item;
}