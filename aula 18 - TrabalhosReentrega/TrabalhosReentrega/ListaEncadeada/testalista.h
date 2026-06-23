#ifndef TESTALISTA_H
#define TESTALISTA_H
#include "lista.h"
#include <iostream>

class TestaLista
{
private:
    Lista lista;
public:
    Compra* criaCompra();
    void menu();
    TestaLista();
};

#endif // TESTALISTA_H
