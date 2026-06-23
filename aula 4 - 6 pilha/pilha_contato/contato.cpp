#include "contato.h"

Contato::Contato(){cpf = 0;}
Contato::~Contato(){}
std::string Contato::getNome() const
{
    return nome;
}

void Contato::setNome(const std::string &value)
{
    nome = value;
}
std::string Contato::getEndereco() const
{
    return endereco;
}
void Contato::setEndereco(std::string a)
{
    endereco = a;
}
unsigned long long Contato::getCpf() const
{
    return cpf;
}
void Contato::setCpf(unsigned long long value)
{
    cpf = value;
}
std::string Contato::getContato()const
{
    std::string contato;
    contato = getNome() + "\n" + getEndereco() + "\n" + std::to_string(getCpf()) + "\n";
    return contato;

}
