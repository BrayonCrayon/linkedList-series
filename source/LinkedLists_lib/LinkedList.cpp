//
// Created by bradyderoy on 8/14/24.
//
#include <LinkedList.h>

template<typename T>
LinkedList<T>::LinkedList(): count(0), item(nullptr) {}

template<typename T>
LinkedList<T>::LinkedList(T values[], int size)
{
    count = size;
    Node<T>* temp;
    item = new Node(values[0]);
    temp = item;
    for(int i = 1; i < size; ++i)
    {
        temp->setNext(values[i]);
        temp = temp->next;
    }
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList &list)
{
    if (list == nullptr) return;

    Node<T>* temp;
    item = new Node(list.item->value);
    temp = item;
    Node<T>* currentNext = list.item->next;

    while(currentNext != nullptr)
    {

    }

    // for(int i = 0; i < list->count; ++i )
    // {
    //
    // }
}


template<typename T>
LinkedList<T>::~LinkedList()
{
    delete item;
}