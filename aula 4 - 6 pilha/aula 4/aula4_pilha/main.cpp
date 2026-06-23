#include <iostream>
#include <string>
#define maxtam 100

using namespace std;

typedef struct{
    string nome[maxtam];
    string endereco[maxtam];
    long long int cpf[maxtam];
    int topo;
}pilha;

void inciaPilha(pilha *p){
    p->topo = 0;
}

bool pilhaVazia(pilha *p){
    if(p->topo == 0){return true;}
    else{return false;}
}
bool pilhaCheia(pilha *p){
    if(p->topo == maxtam){return true;}
    else{return false;}
}

void pilhaInsere(pilha *p, string n, string e, long long int c){
    if(pilhaCheia(p)){cout<<"pilha cheia"<<endl;}
    else{
        p->nome[p->topo]=n;
        p->endereco[p->topo]=e;
        p->cpf[p->topo]=c;
        p->topo++;
    }
}

string pilhaRemove(pilha *p){
    string aux;
    if(pilhaVazia(p)){cout<<"pilha vazia"<<endl;}
    else{
        aux ="Nome: " + p->nome[p->topo - 1];
        aux +="\nEndreco: " + p->endereco[p->topo-1];
        p->topo--;
        return aux;
    }
}

int main(){





    return 0;
}












