#ifndef PILHA_H
#define PILHA_H
#include "livro.h"
class Pilha
{
private:
    class No
    {
        friend class Pilha;
    private:
        Livro * livro;
        No * proximo;
        No(){}
    };
    No * topo;
    int quantidade;
public:
    bool pilhaVazia();
    void push(Livro * x);
    Livro * pop();
    std::string getLivroTopo();

    Pilha();
    ~Pilha();
    int getQuantidade() const;
};

#endif // PILHA_H
