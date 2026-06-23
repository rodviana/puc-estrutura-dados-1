#ifndef LISTA_H
#define LISTA_H
#include "ItemCompra.h"
class Lista {
public:
    Lista();
    int getQde()const;
    bool listaVazia()const;
    void insereOrdenado(ItemCompra*);
    ItemCompra* buscar(ItemCompra*);
    ItemCompra* retirar(ItemCompra*);
    string getLista()const;
    ~Lista();
private:
    class No{
        friend class Lista;
    private:
        No* prox;
        ItemCompra* dados;
    public:
        No(ItemCompra* aux){
        prox = nullptr;
        dados = aux;
    }
    };
    No *primeiro, *ultimo;
    int qde;
};
#endif /* LISTA_H */
