#include "fila.h"

Fila::Fila(int tamanho)
{
    if(tamanho <2){maxTam = 2;}
    else{maxTam = tamanho;}
    final = 0;
    vetor = new Cliente*[maxTam];
    for(int i =0; i<maxTam; i++){
        vetor[i] = nullptr;
    }
}
bool Fila::filaVazia() const{
    if(final == 0){
        return true;
    }
    else{return false;}
}
bool Fila::filaCheia() const{
    if(final == maxTam){
        return true;
    }
    else{return false;}
}
int Fila::getMaxTam() const{
    return maxTam;
}
bool Fila::enfileirar(Cliente* aux){
    if(filaCheia()){return false;}
    else{
        vetor[final]=aux;
        final++;
        return true;
    }
}
Cliente * Fila::desenfileirar(){
    if(filaVazia()){return nullptr;}
    else{
        Cliente * aux = vetor[0];
        final--;
        for(int i=0; i<final; i++){
            vetor[i]=vetor[i+1];
        }
        vetor[final] = nullptr;
        return aux;
    }
}
Fila::~Fila(){
    Cliente * aux = nullptr;
    while(!filaVazia()){
        aux = desenfileirar();
        delete aux;
        aux = nullptr;
    }
    delete []vetor;
}
