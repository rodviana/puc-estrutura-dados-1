#ifndef PILHA_H
#define PILHA_H

#include "contato.h"

class Pilha
{
    int topo, maxTam;
    Contato ** vetor;
public:
    int getTopo()const;
    int getMaxTam()const;
    bool setMaxTam(int value); // definir maxTam (>=2) e alocar o vetor de ponteiros para contato
    bool pilhaCheia()const;
    bool pilhaVazia()const;
    void push(Contato*);
    Contato * pop();
    Pilha();
    ~Pilha();
};

#endif // PILHA_H
