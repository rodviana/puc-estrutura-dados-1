#ifndef ITEM_H
#define ITEM_H
#include <string>
using namespace std;

class Item
{
private:
    string nome, fone;
public:
    Item(string pNome, string pFone) {
        nome = pNome;
        fone = pFone;
    }
    string getNome()const { return nome; }
    string getFone()const { return fone; }
    string getItem() const{
        return (nome + "\n" + fone + "\n");
    }
};

#endif // ITEM_H
