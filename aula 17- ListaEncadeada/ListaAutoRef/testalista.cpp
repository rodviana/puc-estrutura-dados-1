#include "testalista.h"

Compra *TestaLista::criaCompra()
{
    Compra *compra = new Compra();
    std::string descricao;
    int quantidade;
    double preco;
    std::cout<<"Digite a descricao do produto: "<<std::endl;
    std::cin.ignore();
    std::getline(std::cin,descricao);
    std::cout<<"Digite a quantidade comprada: "<<std::endl;
    std::cin>>quantidade;
    std::cout<<"Digite o preco: "<<std::endl;
    std::cin>>preco;
    compra->setDescricao(descricao);
    compra->setQuantidade(quantidade);
    compra->setPreco(preco);
    return compra;
}

void TestaLista::menu()
{
    int op;
    Lista lista;
    Compra* aux = nullptr;
    do{
        std::cout << "Digite:\n";
       std:: cout << "1: Nova compra.\n";
       std:: cout << "2: Remover compra da lista.\n";
       std:: cout << "3: para pesquisar compra na lista.\n";
       std:: cout << "4: para ver a lista.\n";
       std:: cout << "5: para encerrar o programa.\n";
       std:: cin >> op;
        switch(op){
            case 1:
                aux = criaCompra();
                lista.inserirFinal(aux);
                std::cout<<"Compra inserida na lista"<<std::endl;
                std::cout<<std::endl;
               break;

        case 2:
            if(lista.listaVazia()){
                std::cout<<"Lista vazia.\n";
                break;
            }
            std::cout<<"De as informacoes do produto que deseja remover da lista.\n";
            aux=criaCompra();
            if(lista.retirar(aux)) std::cout<<"Produto removido com sucesso\n";
            else std::cout<<"Produto nao encontrado na lista\n";
            std::cout<<std::endl;
            break;

        case 3:
           std::cout<<"De as informacoes do produto que deseja buscar na lista.\n";
           aux = criaCompra();
           if(lista.busca(aux)) std::cout<<"Produto pertence a lista.\n";
           else std::cout<<"Produto nao encontrado na lista\n";
           std::cout<<std::endl;
            break;
        case 4:
            std::cout<<lista.getLista();
            std::cout<<std::endl;
            break;
        case 5:
            std::cout << "Programa encerrando!\n";
        }
    }while(op != 5);
}

TestaLista::TestaLista()
{

}
