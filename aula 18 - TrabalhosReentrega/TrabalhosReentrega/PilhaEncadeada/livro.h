#ifndef LIVRO_H
#define LIVRO_H
#include<iostream>
#include<string>
class Livro
{
private:
    std::string titulo;
    std::string autor;
    std::string editora;
public:
    Livro();
    void setTitulo(std::string value);
    void setAutor(std::string value);
    void setEditora(std::string value);

    std::string getLivro()const;
};

#endif // LIVRO_H
