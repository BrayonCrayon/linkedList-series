//
// Created by bradyderoy on 8/20/24.
//

#ifndef NODE_H
#define NODE_H


template<typename T>
class Node {
public:
    T* value;
    Node* next;
    explicit Node(T* pValue = nullptr);
    explicit Node(T value);
    ~Node();
    Node* operator=(Node* rhs);

    void setNext(T value);
};



#endif //NODE_H
