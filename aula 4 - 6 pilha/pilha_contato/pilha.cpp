#include "pilha.h"

Pilha::Pilha(){topo = 0; maxTam = 0; vetor = nullptr;}
Pilha::~Pilha(){}

int Pilha::getTopo()const{
    return topo;
}
int Pilha::getMaxTam()const
{
    return maxTam;
}
bool Pilha::setMaxTam(int value)
{
   if(value<2){return false;}
   else
   {
       maxTam=value;
        vetor = new Contato*[maxTam];
        for(int i =0; i<maxTam;i++) vetor[i]=nullptr;
        return true;
    }
}
bool Pilha::pilhaCheia()const
{
    if(topo==maxTam){return true;}
    else{return false;}
}
bool Pilha::pilhaVazia()const
{
    if(topo==0){return true;}
    else{return false;}
}
void Pilha::push(Contato * value)
{
    if(pilhaCheia()){std::cout<<"Pilha cheia"<<std::endl;}
    else
    {
        vetor[topo] = value;
        topo++;
    }
}
Contato * Pilha::pop()
{
    if(pilhaVazia()){std::cout<<"Pilha Vazia"<<std::endl;}
    else
    {
      Contato * aux = new Contato;
      aux = vetor[topo-1];
      topo--;
      return aux;
    }

}
