//
// Created by bradyderoy on 8/20/24.
//

#include "Node.h"

Node::Node(int* pValue)
{
    value = pValue;
}

Node::Node(int &value): value(&value) {}

