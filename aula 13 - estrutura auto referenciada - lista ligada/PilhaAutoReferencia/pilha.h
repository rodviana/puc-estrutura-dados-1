#ifndef PILHA_H
#define PILHA_H
#include "no.h"
class Pilha
{
private:
    No * topo;
    int quantidade;
public:
    bool pilhaVazia();
    void push(Livro * x);
    bool pop();
    std::string getLivroTopo();

    Pilha();
    ~Pilha();
    int getQuantidade() const;
};

#endif // PILHA_H
