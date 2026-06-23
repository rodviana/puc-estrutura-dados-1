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
        saida = saida + aux->compra->getCompra() +"\n";
        aux=aux->proximo;
    }
    return saida;
}

void Lista::inserirFinal(Compra * value)
{
    Node *aux = new Node();
    aux->compra = value;

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

Compra * Lista::retirar(Compra *value)
{
    Node* ligador=primeiro;
    Node* deletador;
    Compra * compraRetirada;

    if(primeiro->compra->getDescricao() == value->getDescricao())   // se o primeiro for o resultado da busca
    {
        compraRetirada = primeiro->compra;
        deletador = primeiro;
        primeiro = primeiro->proximo;
        delete deletador;
        tamanho --;
        return compraRetirada;
    }

    for(int i = 1; i<tamanho;i++){
       if(ligador->proximo->compra->getDescricao()==value->getDescricao())
       {
           if(ligador->proximo == ultimo){
               compraRetirada = ultimo->compra;
               delete ultimo;
               ultimo = ligador;
               ultimo->proximo=nullptr;
               tamanho --;
               return compraRetirada;
            }
           compraRetirada = ligador->proximo->compra;
           deletador = ligador->proximo;

           ligador->proximo = ligador->proximo->proximo;
           delete deletador;
           tamanho --;
           return compraRetirada;
       }
       ligador = ligador->proximo;
    }
    return nullptr;
}

Compra * Lista::busca(Compra *value) const
{
    Node *comparador = primeiro;
    for(int i = 0; i<tamanho ; i++){
        if(comparador->compra->getDescricao()==value->getDescricao()){
            return comparador->compra;
        }
        comparador = comparador->proximo;
    }
    return nullptr;
}

bool Lista::listaVazia()
{
    return tamanho == 0;
}
