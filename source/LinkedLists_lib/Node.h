//
// Created by bradyderoy on 8/20/24.
//

#ifndef NODE_H
#define NODE_H


template<typename T>
class Node {
public:
    T* value;
    explicit Node(T* pValue = nullptr);
    explicit Node(T &value);
};



#endif //NODE_H
