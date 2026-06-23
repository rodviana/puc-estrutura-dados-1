#include "fila.h"

int Fila::getQuantidade() const
{
    return quantidade;
}

void Fila::push(Cliente * x)
{
    Node * aux = new Node();
    aux->cliente = x;
    aux->anterior = nullptr;
    if(this->filaVazia()){
        inicio = aux;
        final = aux;
    }
    else{
        final->anterior = aux;
        final = aux;
    }
    quantidade ++;
}

Cliente * Fila::pop()
{
    if(this->filaVazia()) return nullptr;
    Cliente* clienteRetorno = inicio->cliente;
    Node * aux = inicio;
    inicio = inicio->anterior;
    delete[]aux;
    quantidade --;
    return clienteRetorno;
}
bool Fila::filaVazia()
{
    if(this->quantidade == 0) return true;
    return false;
}

std::string Fila::getFinal()
{
    if(this->filaVazia()) return ("A fila nao possui clientes");
    std::string cliente = "";
    cliente = this->final->cliente->getCliente();
    return cliente;
}

std::string Fila::getInicio()
{
    if(this->filaVazia()) return ("A fila nao possui clientes");
    std::string cliente = "";
    cliente = this->inicio->cliente->getCliente();
    return cliente;
}

Fila::Fila()
{
    inicio = nullptr;
    final = nullptr;
    quantidade = 0;

}
