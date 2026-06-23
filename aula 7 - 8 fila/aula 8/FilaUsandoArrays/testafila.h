#ifndef TESTAFILA_H
#define TESTAFILA_H

#include<fila.h>

class TestaFila
{
private:
    Fila *fila;
public:
    TestaFila();
    ~TestaFila();
    Cliente * CriarCliente();
    void Menu();
};

#endif // TESTAFILA_H
