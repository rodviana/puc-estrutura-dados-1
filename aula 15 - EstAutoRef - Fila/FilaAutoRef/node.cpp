#include "node.h"

Node *Node::montaNode(Cliente * x)
{
    Node * aux = new Node();
    aux->cliente = x;
    return aux;
}

Node::Node()
{
    cliente = nullptr;
    anterior = nullptr;
}
