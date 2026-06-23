#include "lista.h"

Lista::Lista(int x)
{
    if(x<2) maxTam = 2;
    else maxTam = x;
    ultimo = 0;
    vetor = new Contato*[maxTam];
    for(int i = 0; i<maxTam;i++){
        vetor[i]=nullptr;
    }
}
bool Lista::listaCheia() const
{
    return(ultimo == maxTam);
}
bool Lista::listaVazia() const
{
    return(ultimo == 0);
}
bool Lista::insereFinal(Contato * aux)
{
    if(listaCheia()) return false;
    for(int i=0;i<ultimo;i++){
        if(aux->getCpf()<vetor[i]->getCpf()){
            ultimo++;
            for(int j = ultimo-1; j>i; j--){
                vetor[j] = vetor[j-1];
            }
            vetor[i] = aux;
            return true;
        }
    }
    vetor[ultimo] = aux;
    ultimo ++;
    return true;
}
Contato * Lista::retirar(Contato * aux )
{
    if(listaVazia()) return nullptr;
    int i;
    for(i = 0; i<ultimo && aux->getCpf()!=vetor[i]->getCpf();i++);
    if(i == ultimo) return nullptr;
    ultimo --;
    aux = vetor[i];
    for(; i<ultimo;i++)
    {
        vetor[i]=vetor[i+1];
    }
    vetor[ultimo] = nullptr;
    return aux;
}
Contato * Lista::pesquisa(Contato * aux)
{
    if(listaVazia()) return nullptr;
    int i;
    for(i = 0; i<ultimo && aux->getCpf()!=vetor[i]->getCpf();i++)
    {

    }
    if(i == ultimo) return nullptr;
    aux = vetor[i];
    return aux;
}
Lista::~Lista()
{
    for(int i=0; i<ultimo; i++) delete vetor[i];
    delete []vetor;
}
std::string Lista::getLista() const{
    std::string aux = "";
    if(listaVazia()) aux = "Lista vazia.\n";
    for(int i = 0; i < ultimo; i++){
    aux = aux + vetor[i]->getContato() + "\n";
    }
    return aux;
}
