//
// Created by bradyderoy on 8/20/24.
//

#include <Node.h>

template <typename T>
Node<T>::Node(T value, T previous, T next) : value(new T(value)), previous(new Node(previous)), next(new Node(next)){}

template<typename T>
Node<T>::Node(T* pValue) : value(pValue), previous(nullptr), next(nullptr) {}

template<typename T>
Node<T>::Node(T value): value(new T(value)) {}

template<typename T>
Node<T>::~Node()
{
    delete value;
}

template<typename T>
Node<T>* Node<T>::operator=(Node* rhs)
{
    value = rhs->value;
    return this;
}

template <typename T>
void Node<T>::setNext(T value)
{
    next = new Node(value);
}

template <typename T>
void Node<T>::setPrevious(T value)
{
    previous = new Node(value);
}

