#include "livro.h"

void Livro::setTitulo(std::string value)
{
    titulo = value;
}

void Livro::setAutor(std::string value)
{
    autor = value;
}
void Livro::setEditora(std::string value)
{
    editora = value;
}

std::string Livro::getLivro() const
{
    std::string saida ="Titulo: " + titulo + "\n";
    saida =saida + "Autor: " + autor + "\n";
    saida =saida + "Editora: " + editora + "\n";
    return saida;
}

Livro::Livro()
{

}
