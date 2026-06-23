#include "TestaLista.h"
ItemCompra* TestaLista::obtemItem(){
    ItemCompra* novo = new ItemCompra;
    cin.ignore();
    cout << "Descricao: ";
    string aux = "";
    getline(cin, aux);
    novo->setDescricao(aux);
    int qde;
    do{
        cout << "Quantidade: ";
        cin >> qde;
    }while(!novo->setQde(qde));

    double valor;

    do{
        cout << "Preco: ";
        cin >> valor;
    }while(!novo->setPreco(valor));

    return novo;
}
void TestaLista::menu(){
    Lista obj;
    ItemCompra* novo = nullptr;
    int op = 0;
    do{
        cout << "Digite:\n";
        cout << "1 - Inserir.\n";
        cout << "2 - Remover.\n";
        cout << "3 - Pesquisar.\n";
        cout << "4 - Mostrar a lista.\n";
        cout << "5 - Encerrar.\n";
        cin >> op;
        switch(op){
            case 1: // Inserir
                cout << "Lista com " << obj.getQde() << " itens." << endl;
                novo = obtemItem();
                obj.insereOrdenado(novo);
                cout << "Lista com " << obj.getQde() << " itens." << endl;
                novo = nullptr;
                break;

            case 2: // remover
                cout << "Lista com " << obj.getQde() << " itens." << endl;
                novo = obtemItem();
                novo = obj.retirar(novo);
                if(novo != nullptr) {
                    cout << novo->getItemCompra() << endl;
                    delete novo;
                }
                else cout<<"Objeto não encontrado.\n";
                cout << "Lista com " << obj.getQde() << " itens." << endl;
                break;

            case 3: // pesquisar
                novo = obtemItem();
                cout << "Lista com " << obj.getQde() << " itens." << endl;
                novo = obj.buscar(novo);
                if(novo != nullptr) {
                    cout << novo->getItemCompra() << endl;
                    delete novo;
                }
                else cout<<"Objeto não encontrado.\n";
                cout << "Lista com " << obj.getQde() << " itens." << endl;
                break;

            case 4: // mostrar lista
                cout << "Lista com " << obj.getQde() << " itens." << endl;
                cout << obj.getLista() << endl;
                break;

            case 5:
                cout << "Programa encerrando!!!" << endl;
        }
    }while(op != 5);
}
