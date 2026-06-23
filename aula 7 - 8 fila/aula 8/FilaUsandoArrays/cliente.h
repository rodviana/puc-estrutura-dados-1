#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>

class Cliente
{
private:
    std::string nome;
    int idade;
public:
    Cliente(std::string n, int i);
    ~Cliente();
    std::string getNome() const;
    void setNome(std::string value);
    int getIdade() const;
    void setIdade(int value);
};

#endif // CLIENTE_H
