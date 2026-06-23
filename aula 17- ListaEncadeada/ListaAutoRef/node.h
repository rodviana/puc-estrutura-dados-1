#ifndef NODE_H
#define NODE_H
#include "compra.h"

class Node
{
public:
    Compra compra;
    Node * proximo;
    Node();
};

#endif // NODE_H
