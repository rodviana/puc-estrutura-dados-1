#ifndef CONTATO_H
#define CONTATO_H

#include <iostream>
#include <string>

class Contato
{
private:
    std::string nome, endereco;
    unsigned long long cpf;
public:
    Contato();
    ~Contato();
    std::string getNome() const;
    std::string getEndereco()const;
    unsigned long long getCpf() const;
    std::string getContato() const;

    void setNome(const std::string &value);
    void setEndereco(std::string a);
    void setCpf(unsigned long long value);
};

#endif // CONTATO_H
