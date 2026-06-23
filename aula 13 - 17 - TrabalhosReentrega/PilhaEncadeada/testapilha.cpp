#include "testapilha.h"

Livro * TestaPilha::criaLivro()
{
    Livro *livro = new Livro;
    std::string titulo, autor, editora;
    std::cin.ignore();
    std::cout<<"Digite as informacoes do livro\nTitulo: ";
    std::getline(std::cin,titulo);
    std::cout<<"Autor: ";
    std::getline(std::cin,autor);
    std::cout<<"Editora: ";
    std::getline(std::cin,editora);
    livro->setTitulo(titulo);
    livro->setAutor(autor);
    livro->setEditora(editora);
    return livro;
}

void TestaPilha::menu()
{
    Pilha teste;

    int op=0;
    while(op!=5){
        std::cout<<"1-Adicione um livro na pilha"<<std::endl;
        std::cout<<"2-Remova um livro da pilha"<<std::endl;
        std::cout<<"3-Informe o livro do topo da pilha"<<std::endl;
        std::cout<<"4-Informe quantos livros tem na pilha"<<std::endl;
        std::cout<<"5-Encerre o programa"<<std::endl;
        std::cin>>op;
        switch (op) {
        case 1:
            teste.push(criaLivro());
            std::cout<<std::endl<<"Livro adicionado com sucesso"<<std::endl<<std::endl;
            break;
        case 2:
            if(teste.pop()!=nullptr) std::cout<<"Removido com sucesso"<<std::endl<<std::endl;
            else std::cout<<"Nao ha livros na pilha"<<std::endl<<std::endl;
            break;
        case 3:
            std::cout<<teste.getLivroTopo()<<std::endl<<std::endl;
            break;
        case 4:
            std::cout<<teste.getQuantidade()<<" livros empilhados."<<std::endl<<std::endl;
            break;
        case 5:
            break;
        }
    }
}

TestaPilha::TestaPilha()
{

}
