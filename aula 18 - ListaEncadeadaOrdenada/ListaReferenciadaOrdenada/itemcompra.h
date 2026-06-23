#ifndef ITEMCOMPRA_H
#define ITEMCOMPRA_H
#include <iostream>
using namespace std;
class ItemCompra{
public:
    void setDescricao(string);
    bool setQde(int);
    bool setPreco(double);
    string getDescricao()const;
    int getQde()const;
    double getPreco()const;
    string getItemCompra()const;
private:
    string descricao;
    int qde;
    double preco;
};
#endif /* ITEMCOMPRA_H */
