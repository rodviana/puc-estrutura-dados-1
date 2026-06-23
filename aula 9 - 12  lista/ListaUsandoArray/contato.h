#ifndef CONTATO_H
#define CONTATO_H

#include <iostream>

class Contato
{
private:
    std::string nome, endereco;
    unsigned long long cpf;
public:
    Contato(std::string n, std::string e, unsigned long long c);
    ~Contato();
    std::string getNome() const;
    std::string getEndereco() const;
    unsigned long long getCpf() const;
    std::string getContato() const;
    void setNome(std::string value);
    void setEndereco(std::string value);
    void setCpf(unsigned long long value);
};

#endif // CONTATO_H
