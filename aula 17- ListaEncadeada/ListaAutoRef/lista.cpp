#include "lista.h"
#include <iostream>

Lista::Lista()
{
    tamanho=0;
    primeiro = nullptr;
    ultimo = nullptr;
}

Lista::~Lista()
{
    Node *aux;
    while (tamanho!=0) {
        aux=primeiro;
        primeiro = primeiro->proximo;
        delete [] aux;
        tamanho --;
    }
}
int Lista::getTamanho() const
{
    return tamanho;
}

std::string Lista::getLista() const
{   if(tamanho==0) return ("Lista vazia");
    Node* aux = primeiro;
    std::string saida ="";
    for(int i = 0; i<tamanho; i++){
        saida = saida + aux->compra.getCompra() +"\n";
        aux=aux->proximo;
    }
    return saida;
}

void Lista::inserirFinal(Compra * value)
{
    Node *aux = new Node();
    aux->compra = *value;

    if(tamanho == 0){
        aux->proximo = nullptr;
        primeiro = aux;
        ultimo = aux;
    }
    else{
        ultimo->proximo=aux;
        ultimo = aux;
        ultimo->proximo = nullptr;
    }

    tamanho ++;
}

bool Lista::retirar(Compra *value)
{
    Node* ligador=primeiro;
    Node* deletador;
    if(primeiro->compra.getDescricao() == value->getDescricao() &&
       primeiro->compra.getPreco() == value->getPreco() &&
       primeiro->compra.getQuantidade() == value->getQuantidade())   // se o primeiro for o resultado da busca
    {
        primeiro = primeiro->proximo;
        tamanho --;
        return true;
    }

    for(int i = 1; i<tamanho;i++){
       if(ligador->proximo->compra.getDescricao()==value->getDescricao() &&
          ligador->proximo->compra.getPreco()==value->getPreco() &&
          ligador->proximo->compra.getQuantidade()==value->getQuantidade())
       {
           if(ligador->proximo == ultimo){
               delete ultimo;
               ultimo = ligador;
               ultimo->proximo=nullptr;
               tamanho --;
               return true;
            }
           deletador = ligador->proximo;
           ligador->proximo = ligador->proximo->proximo;
           delete deletador;
           tamanho --;
           return true;
       }
       ligador = ligador->proximo;
    }
    return false;
}

bool Lista::busca(Compra *value) const
{
    Node *comparador = primeiro;
    for(int i = 0; i<tamanho ; i++){
        if(comparador->compra.getDescricao()==value->getDescricao() &&
           comparador->compra.getPreco()==value->getPreco() &&
           comparador->compra.getQuantidade()==value->getQuantidade()){
            return true;
        }
        comparador = comparador->proximo;
    }
    return false;
}

bool Lista::listaVazia()
{
    return tamanho == 0;
}
