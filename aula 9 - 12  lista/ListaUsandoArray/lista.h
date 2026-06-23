#ifndef LISTA_H
#define LISTA_H

#include <contato.h>

class Lista
{
private:
    int ultimo;
    int maxTam;
    Contato **vetor;
public:
    bool listaCheia() const;
    bool listaVazia() const;
    bool insereFinal(Contato *);
    std::string getLista() const;
    Contato * retirar(Contato *);
    Contato * pesquisa(Contato *);

    Lista(int);
    ~Lista();
};

#endif // LISTA_H
