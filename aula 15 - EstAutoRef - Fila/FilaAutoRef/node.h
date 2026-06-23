#ifndef NODE_H
#define NODE_H

#include "cliente.h"

class Node
{
public:
    Cliente * cliente;
    Node * anterior;
    static Node * montaNode(Cliente *);
    Node();
};

#endif // NODE_H
