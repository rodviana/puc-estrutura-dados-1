#include "cliente.h"

void Cliente::setNome( std::string value)
{
    nome = value;
}

void Cliente::setTelefone( std::string value)
{
    telefone = value;
}

void Cliente::setCpf( std::string value)
{
    cpf = value;
}

std::string Cliente::getCliente() const
{
    std::string saida = "";
    saida = saida +"Nome: " + nome + "\n";
    saida = saida + "Telefone: " + telefone + "\n";
    saida = saida + "CPF: " + cpf + "\n";
    return saida;
}

Cliente::Cliente()
{
    nome = "";
    telefone = "";
    cpf = "";
}
