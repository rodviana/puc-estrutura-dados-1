#ifndef LISTA_H
#define LISTA_H
#include "compra.h"

class Lista
{
private:
    class Node
    {
        friend class Lista;
    private:
        Compra * compra;
        Node * proximo;
        Node(){}
    };


    Node *primeiro;
    Node *ultimo;
    int tamanho;
public:
    Lista();
    ~Lista();
    void inserirFinal(Compra*);
    Compra * retirar(Compra*);
    Compra * busca(Compra*)const;
    bool listaVazia();
    int getTamanho() const;
    std::string getLista()const;
};
#endif // LISTA_H
