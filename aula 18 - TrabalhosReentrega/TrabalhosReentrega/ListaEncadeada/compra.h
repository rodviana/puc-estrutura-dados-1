#ifndef COMPRA_H
#define COMPRA_H
#include <string>

class Compra
{
private:
    std::string descricao;
    int quantidade;
    double preco;
public:
    Compra();
    std::string getCompra();
    std::string getDescricao() const;
    int getQuantidade() const;
    double getPreco() const;
    void setPreco(double value);
    void setQuantidade(int value);
    void setDescricao(const std::string &value);
};

#endif // COMPRA_H
