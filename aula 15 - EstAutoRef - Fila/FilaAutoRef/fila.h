#ifndef FILA_H
#define FILA_H

#include "node.h"
class Fila
{
private:
    Node * inicio;
    Node * final;
    int quantidade;

public:
    void push(Cliente *);
    bool pop();
    bool filaVazia();
    std::string getFinal();
    std::string getInicio();
    Fila();
    int getQuantidade() const;
};

#endif // FILA_H
