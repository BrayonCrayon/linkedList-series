//
// Created by bradyderoy on 8/14/24.
//
#include <Node.h>
#include <iterator>
#include <concepts>

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
        // typedef hive_reverse_iterator<is_const> reverse_type;
        struct hive_iterator_tag {};
        typedef std::bidirectional_iterator_tag	iterator_category;
        typedef std::bidirectional_iterator_tag	iterator_concept;
        Iterator(Node<T>* value): current(value) {}
        Node<T>* operator*() const;
        Node<T>* operator->() const;
        Iterator& operator++();
        bool operator==(const Iterator& other) const {
            return current == other.current;
        }

        bool operator!=(const Iterator& other) const {
            return !(current == other.current);
        }
    };

    Iterator begin();
};

#endif //LINKEDLIST_H
