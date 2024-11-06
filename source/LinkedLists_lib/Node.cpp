//
// Created by bradyderoy on 8/20/24.
//

#include <Node.h>

template<typename T>
Node<T>::Node(T* pValue) : value(pValue), next(nullptr), previous(nullptr) {}

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

