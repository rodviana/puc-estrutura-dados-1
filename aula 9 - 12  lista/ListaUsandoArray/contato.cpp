#include "contato.h"
#include <string>
Contato::Contato(std::string n , std::string e , unsigned long long c)
{
    nome = n;
    endereco = e;
    cpf = c;
}
Contato::~Contato()
{

}
std::string Contato::getEndereco() const
{
    return endereco;
}

unsigned long long Contato::getCpf() const
{
    return cpf;
}

std::string Contato::getNome() const
{
    return nome;
}
std::string Contato::getContato() const
{
    std::string aux;
    aux = getNome() + "\n" + getEndereco() +"\n"+ std::to_string(getCpf()) + "\n";
    return aux;
}

void Contato::setCpf(unsigned long long value)
{
    cpf = value;
}

void Contato::setNome(std::string value)
{
    nome = value;
}

void Contato::setEndereco(std::string value)
{
    endereco = value;
}
