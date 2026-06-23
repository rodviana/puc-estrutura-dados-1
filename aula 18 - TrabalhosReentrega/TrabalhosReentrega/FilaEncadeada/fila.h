#ifndef FILA_H
#define FILA_H

#include "cliente.h"
class Fila
{
private:
    class Node
    {
        friend class Fila;
    private:
        Cliente * cliente;
        Node * anterior;
    public:
        Node(){}
    };
    Node * inicio;
    Node * final;
    int quantidade;

public:
    void push(Cliente *);
    Cliente * pop();
    bool filaVazia();
    std::string getFinal();
    std::string getInicio();
    Fila();
    int getQuantidade() const;
};

#endif // FILA_H
