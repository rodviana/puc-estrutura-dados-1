#include "ItemCompra.h"
void ItemCompra::setDescricao(string aux){
    descricao = aux;
}
bool ItemCompra::setQde(int aux){
    if(aux < 1) return false;
    qde = aux;
    return true;
}
bool ItemCompra::setPreco(double aux){
    if(aux <= 0) return false;
    preco = aux;
    return true;
}
string ItemCompra::getDescricao()const{
    return descricao;
}
int ItemCompra::getQde()const{
    return qde;
}
double ItemCompra::getPreco()const{
    return preco;
}
string ItemCompra::getItemCompra()const{
    string aux = "\n" + descricao + "\n" + to_string(qde) + "\n";
    aux = aux + to_string(preco) + "\n";
    return aux;
}
