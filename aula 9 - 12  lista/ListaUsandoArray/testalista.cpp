#include "testalista.h"
using namespace std;
TestaLista::TestaLista(){}
Contato* TestaLista::criarContato(){
    string n, e;
    unsigned long long c;
    cin.ignore();
    cout << "Nome: ";
    getline(cin, n);
    cout << "Endereço: ";
    getline(cin, e);
    cout << "CPF: ";
    cin >> c;
    Contato* aux = new Contato(n, e, c);
    return aux;
}

void TestaLista::menu(){
    int op;
    cout << "Tamanho da lista: ";
    cin >> op;
    Lista obj(op);
    Contato* aux = nullptr;
    do{
        cout << "Digite:\n";
        cout << "1: para inserir Contato na lista.\n";
        cout << "2: para remover Contato da lista.\n";
        cout << "3: para pesquisar Contato na lista.\n";
        cout << "4: para listar todos Contatos da lista.\n";
        cout << "5: para encerrar o programa.\n";
        cin >> op;
        switch(op){
            case 1:
                aux = criarContato();
                if(obj.insereFinal(aux)) cout << "Sucesso!\n";
                else cout << "Erro - lista cheia.\n";
                aux = nullptr;
                break;
        case 2:
            aux = criarContato();
            aux = obj.retirar(aux);
            if(aux == nullptr) cout << "Erro - Contato não encontrado.\n";
            else cout << aux->getContato() << endl;
            aux = nullptr;
            break;
        case 3:
            aux = criarContato();
            aux = obj.pesquisa(aux);
            if(aux == nullptr) cout << "Erro - Contato não encontrado.\n";
            else cout << aux->getContato() << endl;
            aux = nullptr;
            break;
        case 4:
            cout << obj.getLista() << endl;
            break;
        case 5:
            cout << "Programa encerrando!\n";
        }
    }while(op != 5);
}
