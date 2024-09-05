//
// Created by bradyderoy on 8/14/24.
//
#include <LinkedList.h>

template<typename T>
LinkedList<T>::LinkedList(): count(0), item(nullptr) {}

template<typename T>
LinkedList<T>::LinkedList(int values[])
{
    count = 1;
    item = new Node(values[0]);
}

template<typename T>
LinkedList<T>::~LinkedList()
{
    delete item;
}