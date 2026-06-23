#include "testafila.h"
#include <iostream>
Cliente *TestaFila::criaCliente()
{
    Cliente * aux = new Cliente();
    std::string value="";
    std::cout<<"Digite as informacoes do cliente\n";

    std::cout<<"Nome: ";
    std::cin.ignore();
    std::getline(std::cin,value);
    aux->setNome(value);

    std::cout<<"Telefone: ";
    std::getline(std::cin,value);
    aux->setTelefone(value);

    std::cout<<"CPF: ";
    std::getline(std::cin,value);
    aux->setCpf(value);

    return aux;
}

TestaFila::TestaFila()
{   int op = 0;
    while(op!=6){
       std::cout<<"1-Coloque um cliente na fila"<<std::endl;
       std::cout<<"2-Tire um cliente na fila"<<std::endl;
       std::cout<<"3-Informe quem eh o primeiro da fila"<<std::endl;
       std::cout<<"4-Informe quem eh o ultimo da fila"<<std::endl;
       std::cout<<"5-Informe quantas pessoas estao na fila"<<std::endl;
       std::cout<<"6-Encerre o programa"<<std::endl;

       std::cin>>op;

       switch (op) {
       case 1:
           fila.push(criaCliente());
           std::cout<<std::endl;
           break;
       case 2:
           if(fila.pop() != nullptr) std::cout<<"Primeiro da fila retirado com sucesso\n";
           else std::cout<<"Lista vazia: nenhum contato foi retirado\n";
           std::cout<<std::endl;
           break;
       case 3:
           std::cout<<fila.getInicio();
           std::cout<<std::endl;
           break;
       case 4:
           std::cout<<fila.getFinal();
           std::cout<<std::endl;
           break;
       case 5:
           if(fila.filaVazia()) std::cout<<"Fila vazia: "<<fila.getQuantidade()<<" clientes na fila\n";
           else std::cout<<"A fila possui "<<fila.getQuantidade()<<" clientes.\n";
           std::cout<<std::endl;
           break;
       case 6:
           std::cout<<"O programa foi encerrado\n";
           break;

       }
    }

}
