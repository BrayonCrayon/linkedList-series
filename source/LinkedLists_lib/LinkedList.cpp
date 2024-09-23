//
// Created by bradyderoy on 8/14/24.
//
#include <LinkedList.h>
#include <stdexcept>

template <typename T>
LinkedList<T>::LinkedList(): count(0), item(nullptr)
{
}

template <typename T>
LinkedList<T>::LinkedList(T values[], int size)
{
    count = size;
    Node<T>* temp;
    item = new Node(values[0]);
    temp = item;
    for (int i = 1; i < size; ++i)
    {
        temp->setNext(values[i]);
        temp = temp->next;
    }
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList& list): count(0), item(nullptr)
{
    item = new Node(*list.item->value);
    Node<T>* temp = item;
    Node<T>* listToCopyIter = list.item->next;

    while (listToCopyIter != nullptr)
    {
        temp->setNext(*listToCopyIter->value);
        temp = temp->next;
        ++this->count;
        listToCopyIter = listToCopyIter->next;
    }
}

template <typename T>
Node<T>* LinkedList<T>::operator[](int index)
{
    if (index < 0)
    {
        return nullptr;
    }

    int iteratorIndex = 0;

    Node<T>* temp = item;
    while (temp != nullptr && temp->next != nullptr && iteratorIndex != index)
    {
        temp = temp->next;
        ++iteratorIndex;
    }
    return temp;
}

template <typename T>
void LinkedList<T>::add(T value, int index)
{
    if (this->item == nullptr)
    {
        this->item = new Node(value);
        ++this->count;
        return;
    }

    if (index > this->count)
    {
        throw std::invalid_argument("Cannot add value at index: " + index);
    }

    Node<T>* movingNode = this->operator[](index);
    Node<T>* previousNode = this->operator[](index - 1);

    Node<T>* newNode = new Node(value);
    newNode->next = movingNode;

    if (previousNode != nullptr)
    {
        previousNode->next = newNode;
    }

    if (previousNode == nullptr)
    {
        this->item = newNode;
    }

    ++this->count;
}

template <typename T>
void LinkedList<T>::add(T value)
{
    this->add(value, this->count);
}

template <typename T>
T LinkedList<T>::remove(const int n)
{
    Node<T>* nodeToRemove = this->operator[](n);

    if (nodeToRemove == nullptr)
    {
        throw std::invalid_argument("cannot find node to remove");
    }

    Node<T>* previousNode = this->operator[](n - 1);

    if (nodeToRemove->next != nullptr)
    {
        previousNode->next = nodeToRemove->next;
        nodeToRemove->next = nullptr;
    }

    T value(*nodeToRemove->value);
    delete nodeToRemove;

    if (nodeToRemove == item)
    {
        item = nullptr;
    }

    --this->count;

    return value;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    if (item != nullptr)
    {
        delete item;
    }
}
