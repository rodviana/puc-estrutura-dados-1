#ifndef FILA_H
#define FILA_H

#include <cliente.h>

class Fila
{
private:
    int final;
    int maxTam;
    Cliente **vetor;
public:
    Fila(int tamanho);
    ~Fila();
    bool filaVazia() const;
    bool filaCheia() const;
    int getMaxTam() const;
    bool enfileirar(Cliente * aux);
    Cliente * desenfileirar();
};

#endif // FILA_H
