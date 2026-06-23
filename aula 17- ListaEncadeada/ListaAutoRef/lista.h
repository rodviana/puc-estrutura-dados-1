#ifndef LISTA_H
#define LISTA_H
#include "node.h"

class Lista
{
private:
    Node *primeiro;
    Node *ultimo;
    int tamanho;
public:
    Lista();
    ~Lista();
    void inserirFinal(Compra*);
    bool retirar(Compra*);
    bool busca(Compra*)const;
    bool listaVazia();
    int getTamanho() const;
    std::string getLista()const;
};
#endif // LISTA_H
