#ifndef TESTAFILA_H
#define TESTAFILA_H

#include "fila.h"
class TestaFila
{
private:
    Fila fila;
public:
    Cliente * criaCliente();
    void menu();
    TestaFila();
};

#endif // TESTAFILA_H
