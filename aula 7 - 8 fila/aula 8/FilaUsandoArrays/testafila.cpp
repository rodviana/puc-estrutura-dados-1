#include "testafila.h"

TestaFila::TestaFila()
{
    fila = nullptr;
}
TestaFila::~TestaFila(){
    delete fila;
}
Cliente * TestaFila::CriarCliente(){
    std::string nome;
    int idade;
    std::cout<<"Digite o nome do contato"<<std::endl;
    std::cin>>nome;
    std::cout<<"Digite a idade do contato"<<std::endl;
    std::cin>>idade;
    Cliente * aux = new Cliente(nome, idade);
    return aux;

}
void TestaFila::Menu(){
    int op;
    Cliente * aux = nullptr;
    std::cout<<"Tamanho da fila: ";
    std::cin >> op;
    fila = new Fila(op);
    do{
        std::cout<<"Digite: "<<std::endl;
        std::cout<<"1- enfileirar um cliente"<<std::endl;
        std::cout<<"2- denfileirar um cliente"<<std::endl;
        std::cout<<"3- encerrar o programa"<<std::endl;
        std::cin>>op;
        switch (op) {
            case 1:
                aux = CriarCliente();
                if(fila->enfileirar(aux)){std::cout<<"Sucesso"<<std::endl;}
                else{std::cout<<"Erro - fila cheia"<<std::endl;}
                aux = nullptr;
                break;
            case 2:
                aux = fila->desenfileirar();
                if(aux == nullptr) std::cout << "Erro - fila vazia"<<std::endl;
                else{
                    std::cout<< aux->getNome() <<std::endl;
                    std::cout<< aux->getIdade() <<std::endl;
                }
                aux=nullptr;
                break;
            case 3:
                std::cout <<"Programa Encerrado"<<std::endl;
                break;

        }
    }while(op !=3);
}
