#include "pilha.h"

Pilha::Pilha()
{
    topo = new No();
    quantidade = 0;
    topo->livro = nullptr;
    topo->proximo = nullptr;
}

Pilha::~Pilha()
{
    while(this->pop());
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
    No * aux;
    aux = No::montaNo(x);
    aux->proximo = topo;
    topo = aux;
    quantidade ++;
}
bool Pilha::pop(){
    if(quantidade <= 0) return false;
    topo = No::demontaNo(topo);
    quantidade --;
    return true;
}

std::string Pilha::getLivroTopo()
{
    if(quantidade == 0) return ("Nao ha nenhum livro na pilha");
    std::string aux;
    aux = topo->livro->getLivro();
    return aux;
}
