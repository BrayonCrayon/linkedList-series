//
// Created by bradyderoy on 8/14/24.
//
#include <LinkedList.h>
#include <stdexcept>

template <typename T>
LinkedList<T>::LinkedList(): count(0), head(new Node<T>(nullptr))
{
}

template <typename T>
LinkedList<T>::LinkedList(T values[], int size): count(size), head(new Node<T>(nullptr))
{
    Node<T>* current = head;
    Node<T>* previous = nullptr;
    for (int i = 0; i < size; ++i)
    {
        current->value = new T(values[i]);
        previous = current;

        if (i+1 < size)
        {
            current->next = new Node<T>(nullptr);
            current = current->next;
            current->previous = previous;
        }
    }
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList& list): count(0), head(new Node<T>(nullptr))
{
    Node<T>* current = head;
    Node<T>* listToCopyIter = list.head;
    Node<T>* previous = nullptr;

    while (listToCopyIter != nullptr)
    {
        current->value = new T(*listToCopyIter->value);
        previous = current;
        current->next = new Node<T>(nullptr);
        current = current->next;
        current->previous = previous;
        listToCopyIter = listToCopyIter->next;
        ++this->count;
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

    Node<T>* temp = head;
    while (temp != nullptr && temp->value != nullptr)
    {
        if(index == iteratorIndex )
        {
            return temp;
        }

        temp = temp->next;
        ++iteratorIndex;
    }

    throw std::out_of_range("cannot find node to remove");
}

template <typename T>
int LinkedList<T>::indexOf(Node<T>* node)
{
    Node<T>* current = this->head->next;
    int index = 0;

    while(current != nullptr)
    {
        if(current == node)
        {
            return index;
        }

        current = current->next;
        index++;
    }

    return -1;
}

template <typename T>
void LinkedList<T>::add(T value, int index)
{
    if (index > this->count)
    {
        throw std::invalid_argument("Cannot add value at index: " + index);
    }

    Node<T>* newNode = new Node(value);

    if (index == this->count)
    {
        Node<T>* lastNode = this->operator[](index - 1);
        if (lastNode == nullptr)
        {
            head = newNode;
            count++;
            return;
        }
        lastNode->next = newNode;
        ++this->count;
        return;
    }

    Node<T>* movingNode = this->operator[](index);
    Node<T>* previousNode = this->operator[](index - 1);


    newNode->next = movingNode;

    if (previousNode != nullptr)
    {
        previousNode->next = newNode;
    }

    if (previousNode == nullptr)
    {
        this->head = newNode;
    }

    ++this->count;
}

template <typename T>
void LinkedList<T>::add(T value)
{
    this->add(value, this->count);
}

template <typename T>
typename LinkedList<T>::Iterator LinkedList<T>::begin()
{
    return Iterator(head->next);
}


template <typename T>
T LinkedList<T>::remove(const int n)
{
    Node<T>* nodeToRemove = this->operator[](n);

    if (nodeToRemove == nullptr)
    {
        throw std::invalid_argument("cannot find node to remove");
    }

    Node<T>* previousNode = n == 0
        ? this->head
        : this->operator[](n - 1);

    if (nodeToRemove->next != nullptr)
    {
        previousNode->next = nodeToRemove->next;
        nodeToRemove->next = nullptr;
    }

    T value(*nodeToRemove->value);
    delete nodeToRemove;

    if (nodeToRemove == head->next)
    {
        head->next = nullptr;
    }

    --this->count;

    return value;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    delete head->next;
}

/**
 *********************************************
 * Input Iterator
 *********************************************
 */
template <typename T>
Node<T>* LinkedList<T>::Iterator::operator*() const
{
    return current;
}

template <typename T>
Node<T>* LinkedList<T>::Iterator::operator->() const
{
    return current;
}

template <typename T>
typename LinkedList<T>::Iterator& LinkedList<T>::Iterator::operator++()
{
    current = current->next;
    return *this;
}

template <typename T>
bool LinkedList<T>::Iterator::operator==(const Iterator& other)
{
    return current == other.current;
}

template <typename T>
bool LinkedList<T>::Iterator::operator!=(const Iterator& other)
{
    return !(current == other.current);
}

template <typename T>
typename LinkedList<T>::Iterator& LinkedList<T>::Iterator::operator=(const T value)
{
    delete this->current->value;

    this->current->value = new T(value);

    return *this;
}
