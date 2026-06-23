#include "compra.h"

std::string Compra::getDescricao() const
{
    return descricao;
}

int Compra::getQuantidade() const
{
    return quantidade;
}

double Compra::getPreco() const
{
    return preco;
}

void Compra::setPreco(double value)
{
    preco = value;
}

void Compra::setQuantidade(int value)
{
    quantidade = value;
}

void Compra::setDescricao(const std::string &value)
{
    descricao = value;
}

Compra::Compra()
{
    descricao = "";
    quantidade = 0;
    preco = 0;
}

std::string Compra::getCompra()
{
    std::string saida = "";
    saida = "Descricao do produto: " + descricao + "\nQuantidade: " + std::to_string(quantidade) + "\nPreco: " + std::to_string(preco) + "\n";
    return saida;
}
