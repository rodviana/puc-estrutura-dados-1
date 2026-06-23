#ifndef TESTAPILHA_H
#define TESTAPILHA_H

#include "pilha.h"

class TestaPilha
{
private:
    Pilha pilha; // cria pilha vazia
public:
    Contato * criarContato(); // cria um novo contato e retorna um ponteiro para ele
    void menu(); // vai definir o tamanho da pilha e vai colocar repetidamente
    // um menu de escolhas (empilhar, desempilhar, encerrar programa )
    TestaPilha();
    ~TestaPilha();
};

#endif // TESTAPILHA_H
