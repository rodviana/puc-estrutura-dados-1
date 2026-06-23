#ifndef ABP_H
#define ABP_H

#include <item.h>

class Abp
{

private:

    class No {
        friend class Abp;
    private:
        Item* dados;
        No *fd, *fe, *pai;

    public:
        No(Item* aux) {
            dados = aux;
            fd = fe = pai = nullptr;
        }
    };

    No* raiz;
    int tamanho;

public:
    Abp() { raiz = nullptr; tamanho=0;}

    int getTamanho() { return tamanho; }
    bool vazia() { return (raiz == nullptr);}


    No* consultar(Item* obj);
    Item* pesquisar(Item* obj);
    bool inserir(Item* obj);

    No* maximo(No* obj);
    No *minimo(No* obj);
    No* antecessor(No* obj);
    No* sucessor(No* obj);
    Item* retirar(Item* obj);

    void visitaEmOrdem(string&);
    void visitaEmPreOrdem(string&);
    void visitaEmPosOrdem(string&);
    void testaIntegridade(string &);
private:
    void visitaEmOrdem(string&, No*);
    void visitaEmPreOrdem(string&, No*);
    void visitaEmPosOrdem(string&, No*);
    void testaIntegridade(string &, No*);

};

#endif // ABP_H
