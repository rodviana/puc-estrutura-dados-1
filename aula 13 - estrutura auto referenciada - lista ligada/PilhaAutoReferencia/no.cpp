#include "no.h"

No *No::montaNo(Livro *x)
{
    No * aux = new No();
    aux->livro = x;
    return aux;
}

No * No::demontaNo(No * x)
{
    No * aux = x->proximo;
    delete[] x;
    return aux;
}

No::No(){}
