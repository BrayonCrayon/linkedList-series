//
// Created by bradyderoy on 8/20/24.
//

#ifndef NODE_H
#define NODE_H



class Node {
public:
    int* value;
    explicit Node(int* pValue = nullptr);
    Node(int &value);
};



#endif //NODE_H
