#ifndef NO_H
#define NO_H

#include "livro.h"

class No
{
    friend class Pilha;
private:
    Livro * livro;
    No * proximo;
public:
    static No * montaNo(Livro *x);
    static No * demontaNo(No * x);

    No();
};

#endif // NO_H
