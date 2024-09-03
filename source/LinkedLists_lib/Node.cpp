//
// Created by bradyderoy on 8/20/24.
//

#include <Node.h>

template<typename T>
Node<T>::Node(T* pValue) : value(pValue) {}

template<typename T>
Node<T>::Node(T &value): value(&value) {}

