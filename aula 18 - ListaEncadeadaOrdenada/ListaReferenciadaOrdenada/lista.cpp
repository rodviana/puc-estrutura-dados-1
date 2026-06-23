#include "Lista.h"
Lista::Lista() {
    primeiro = ultimo = nullptr;
    qde=0;
    }

int Lista::getQde()const{
    return qde;
}
bool Lista::listaVazia()const{
    return primeiro == nullptr;
}
void Lista::insereOrdenado(ItemCompra* obj){

    No * novo = new No(obj);

    if(listaVazia()){
        novo->prox = nullptr;
        primeiro = novo;
        ultimo = primeiro;
        qde++;
        return;
    }

    No *comparador = primeiro;
    No *anterior= primeiro;

    while(comparador != nullptr && comparador->dados->getDescricao() < obj->getDescricao()){
        anterior = comparador;
        comparador = comparador->prox;
    }
    if(comparador == nullptr){ // se comparador chegar até onde o último aponta, ele é o maior de todos
        ultimo->prox = novo;
        ultimo = novo;
        ultimo->prox = nullptr;
    }
    else{// se o novo não é o maior de todos // novo é menor ou igual do que comparador
        if(primeiro!=ultimo){ //se tem mais de um elemento da lista
            novo->prox=comparador;
            anterior->prox = novo;
        }
        else{ // se tem um único elemento na lista
            novo->prox=comparador;
            primeiro = novo;
            ultimo = comparador;
        }
    }
    qde++;
}
ItemCompra* Lista::buscar(ItemCompra* obj){
    if(listaVazia()) return nullptr;
    No *aux = primeiro;
    while(aux != nullptr && aux->dados->getDescricao() != obj->getDescricao()){
    aux = aux->prox;
    }
    if(aux == nullptr) return nullptr;
    *obj = *aux->dados;
    return obj;
}
ItemCompra* Lista::retirar(ItemCompra* value){

    No* ligador=primeiro;
    No* deletador;
    ItemCompra * compraRetirada;

    if(primeiro->dados->getDescricao() == value->getDescricao())   // se o primeiro for o resultado da busca
    {
        compraRetirada = primeiro->dados;
        deletador = primeiro;
        primeiro = primeiro->prox;
        delete deletador;
        qde --;
        return compraRetirada;
    }

    for(int i = 1; i<qde;i++){
       if(ligador->prox->dados->getDescricao()==value->getDescricao())
       {
           if(ligador->prox == ultimo){
               compraRetirada = ultimo->dados;
               delete ultimo;
               ultimo = ligador;
               ultimo->prox=nullptr;
               qde --;
               return compraRetirada;
            }
           compraRetirada = ligador->prox->dados;
           deletador = ligador->prox;

           ligador->prox = ligador->prox->prox;
           delete deletador;
           qde --;
           return compraRetirada;
       }
       ligador = ligador->prox;
    }
    return nullptr;
}
string Lista::getLista()const{
    if(listaVazia()) return "Lista vazia!!!";
    string aux = "";
    No* ptr = primeiro;
    while(ptr != nullptr){
        aux = aux + ptr->dados->getItemCompra() + "\n";
        ptr = ptr->prox;
    }
    return aux;
}
Lista::~Lista() {
    No* ptr = primeiro, *at = nullptr;
    ItemCompra* aux = nullptr;
    while(ptr != nullptr){
        aux = ptr->dados;
        delete aux;
        aux = nullptr;
        at = ptr;
        ptr = ptr->prox;
        delete at;
        at = nullptr;
    }
}
