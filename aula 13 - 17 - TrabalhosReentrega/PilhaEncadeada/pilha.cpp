#include "pilha.h"

Pilha::Pilha()
{
    topo = nullptr;
    quantidade = 0;
}

Pilha::~Pilha()
{
    while(this->pop() != nullptr);
}
int Pilha::getQuantidade() const
{
    return quantidade;
}

bool Pilha::pilhaVazia(){
    if(quantidade == 0)return true;
    else return false;
}
void Pilha::push(Livro * x){
    No * aux = new No();
    aux->livro = x;
    aux->proximo = topo;
    topo = aux;
    quantidade ++;
}
Livro * Pilha::pop(){
    if(quantidade <= 0) return nullptr;
    No * aux = topo->proximo;
    Livro * livro = topo->livro;
    delete[] topo;
    topo = aux;
    quantidade --;
    return livro;
}

std::string Pilha::getLivroTopo()
{
    if(quantidade == 0) return ("Nao ha nenhum livro na pilha");
    std::string aux;
    aux = topo->livro->getLivro();
    return aux;
}
