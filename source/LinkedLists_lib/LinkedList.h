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
    typedef std::iterator<std::input_iterator_tag, T> Tacos;
    // TODO: we are here, the line above does not work?????
    class Iterator : Tacos
    {

    };

    Iterator begin();
};

#endif //LINKEDLIST_H
