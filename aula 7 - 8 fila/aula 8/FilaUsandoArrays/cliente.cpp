#include "cliente.h"

std::string Cliente::getNome() const
{
    return nome;
}

void Cliente::setNome(std::string value)
{
    nome = value;
}

int Cliente::getIdade() const
{
    return idade;
}

void Cliente::setIdade(int value)
{
    idade = value;
}

Cliente::Cliente(std::string n, int i)
{
    nome=n;
    idade=i;
}
Cliente::~Cliente(){}
