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
LinkedList<T>::LinkedList(const LinkedList &list): count(0), item(nullptr)
{
    // if (list == nullptr) return;

    item = new Node(*list.item->value);
    Node<T>* temp = item;
    Node<T>* listToCopyIter = list.item->next;
    ++this->count;

    while(listToCopyIter != nullptr)
    {
        temp->setNext(*listToCopyIter->value);
        temp = temp->next;
        ++this->count;
        listToCopyIter = listToCopyIter->next;
    }
}

template<typename T>
Node<T>* LinkedList<T>::operator[](int index)
{
    int iteratorIndex = 0;

    Node<T>* temp = item;
    while(temp->next != nullptr && iteratorIndex != index)
    {
        temp = temp->next;
        ++iteratorIndex;
    }
    return temp;
}

template<typename T>
void LinkedList<T>::add(T value, int pos)
{

    // Node at position pos to be value
    // link next node of original node at pos to next node of new pos

    Node<T>* movingNode = this->operator[](pos);

    Node<T>* newNode = new Node(value);

    this->operator[](pos-1)->next = newNode;
    newNode->next = movingNode;
}

template<typename T>
LinkedList<T>::~LinkedList()
{
    delete item;
}