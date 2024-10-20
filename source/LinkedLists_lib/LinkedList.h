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
    Node<T>* head;

    LinkedList();
    explicit LinkedList(T values[], int size);
    LinkedList(const LinkedList &list);
    ~LinkedList();

    void add(T value, int index);
    void add(T value);

    T remove(int n);

    Node<T>* operator[](int index);

    /**
     * Iterators
     */
    class Iterator
    {
        Node<T>* current = nullptr;

    public:
        Iterator(Node<T>* value): current(value) {}
        Node<T>* operator*() const;
        Node<T>* operator->() const;
        Iterator& operator++();
        // template <typename U>
        // friend bool operator==(const Iterator& lhs, const typename LinkedList<U>::Iterator& rhs)
        // {
        //     return false;
        // }
    };

    Iterator begin();
};

#endif //LINKEDLIST_H
