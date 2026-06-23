#include "testapilha.h"

TestaPilha::TestaPilha(){}
TestaPilha::~TestaPilha(){}

Contato * TestaPilha::criarContato()
{
    std::string nome, endereco;
    unsigned long long cpf;

    std::cout<<"Digite o nome do contato"<<std::endl;
    std::cin.ignore();
    std::getline(std::cin,nome);
    std::cout<<"Digite o endereco do contato"<<std::endl;
    std::getline(std::cin,endereco);
    std::cout<<"Digite o CPF do contato"<<std::endl;
    std::cin>>cpf;

    Contato * a = new Contato;
    a->setNome(nome);
    a->setEndereco(endereco);
    a->setCpf(cpf);
    pilha.push(a);
    return a;
}
void TestaPilha::menu()
{
    bool rodarProg = true;
    int opcaoMenu;
    int tamMax;
    Contato * aux = new Contato;

    std::cout<<"Digite o tamanho maximo da pilha (valor>1)"<<std::endl;
    std::cin>>tamMax;
    while(!pilha.setMaxTam(tamMax)){
        std::cout<<"Tamanho invalido"<<std::endl;
        std::cout<<"Digite o tamanho maximo da pilha (>1)"<<std::endl;
        std::cin>>tamMax;
    }
    while(rodarProg)
    {
        std::cout<<"Digite o numero da opcao que deseja executar"<<std::endl;
        std::cout<<"1 - Adicionar contato ao topo da pilha"<<std::endl;
        std::cout<<"2 - Remover contato do topo da pilha"<<std::endl;
        std::cout<<"3 - Encerrar o programa"<<std::endl;
        std::cin>>opcaoMenu;
        switch(opcaoMenu)
        {
            case 1:
                pilha.push(criarContato());

                break;
            case 2:
               aux = pilha.pop();
               std::cout<<"Voce retirou:"<<std::endl;
               std::cout<<aux->getContato()<<std::endl;
               break;
            case 3:
                rodarProg = false;
                break;
        }
    }
}
