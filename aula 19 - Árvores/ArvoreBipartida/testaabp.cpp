#include "testaabp.h"
using namespace std;

TestaAbp::TestaAbp()
{

}
Item* TestaAbp::obtemItem(){
    string nome, fone;
    cin.ignore();
    cout << "Nome: ";
    getline(cin, nome);
    cout << "Telefone: ";
    getline(cin, fone);
    Item* aux = new Item(nome, fone);
    return aux;
}

void TestaAbp ::menu() {
    int op;
    Item* novo = nullptr;
    Abp arvore;
    bool ok = false;
    string aux, aux2, aux3, aux4;
    do {
        cout << "Digite:\n";
        cout << "1 - para adicionar um item.\n";
        cout << "2 - para remover um item.\n";
        cout << "3 - para pesquisar um item.\n";
        cout << "4 - para imprimir a arvore.\n";
        cout << "5 - para testar integridade da árvore.\n";
        cout << "6 - para encerrar o programa.\n";
        cin >> op;
        switch(op) {
        case 1: // adicionar
            novo = obtemItem();
            ok = arvore.inserir(novo);
            if(ok) cout<<"Sucesso!";
            else cout<<"Insucesso - item ja esta na lista!";
            cout<<"Arvore com "<<arvore.getTamanho()<<" itens.";
            novo = nullptr;
            break;

        case 2: // retirar
            novo = obtemItem();
            novo = arvore.retirar(novo);
            if(novo == nullptr) cout << "Erro!\n";
            else cout << novo->getItem() << endl;
            cout << "Arvore com " << arvore.getTamanho() << " itens.\n";
            novo = nullptr;
            break;

        case 3: // pesquisar
            novo = obtemItem();
            novo = arvore.pesquisar(novo);
            if(novo == nullptr) cout << "Erro!\n";
            else cout << novo->getItem() << endl;
            cout << "Arvore com " << arvore.getTamanho() << " itens." << endl;
            novo = nullptr;
            break;

        case 4: // visita em ordem, pre-ordem e pos-ordem
             aux = "";
            arvore.visitaEmOrdem(aux);
            cout << aux << "\nFim ............. \n";
             aux2 = "";
            arvore.visitaEmPreOrdem(aux2);
            cout << aux2 << "\nFim ............. \n";
            aux3 = "";
            arvore.visitaEmPosOrdem(aux3);
            cout << aux3 << "\nFim ............. \n";
            break;

        case 5: // testa integridade
             aux4 = "";
            arvore.testaIntegridade(aux4);
            cout << aux4 << "\nFim .............. \n";
            break;

        case 6:
            cout << "Arvore com " << arvore.getTamanho() << " itens.\n";
            cout << "Programa encerrando!\n";

        }
    } while(op != 6);
}
