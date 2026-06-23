#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
class Cliente
{
private:
    std::string nome,telefone,cpf;

public:

    Cliente();
    void setNome( std::string value);
    void setTelefone( std::string value);
    void setCpf( std::string value);
    std::string getCliente()const;
};

#endif // CLIENTE_H
