#include "abp.h"


Abp::No *Abp::consultar(Item *obj)
{
    No* aux = raiz;
    while ( aux != nullptr ){
        if (obj->getNome() < aux->dados->getNome()) aux = aux->fe;
        else
            if (obj->getNome() > aux->dados->getNome()) aux = aux->fd;
            else return aux; //Sucesso(encontrou)
    }
    return nullptr; // Insucesso --> nullptr
}

Item *Abp::pesquisar(Item *obj)
{
    No* aux = consultar(obj);
    if ( aux == nullptr ){
        return nullptr; //Insucesso → não encontrou
    }
    return (new Item(aux->dados->getNome(), aux->dados->getFone())); //Sucesso - encontrou
}

bool Abp::inserir(Item* obj) {
    // cria-se um novo nó
    No* aux = new No(obj);
    tamanho++;
    // verifica-se a árvore está vazia e caso afirmativo faz do nó aux a raiz da árvore
    if (vazia()) {
        raiz = aux;
        return true;
    }
    // senão encontra o local de inserção que é sempre numa folha
    No* ptr = raiz;
    No* ant = raiz;
    while ( ptr != nullptr ){
        if (obj->getNome() < ptr->dados->getNome()) { ant = ptr; ptr = ptr->fe; }
        else
            if (obj->getNome() > ptr->dados->getNome()) { ant = ptr; ptr = ptr->fd; }
            else{
                tamanho--;
                return false;
            } // Insucesso --> item já está na árvore
    }
    // faz o nó apontado por ant o pai do nó aux
    aux->pai = ant;
    // verifica-se é filho a esquerda ou a direita
    if (obj->getNome() < ant->dados->getNome()) { ant->fe = aux; }
    else { ant->fd = aux; }
    return true; // Sucesso
}

Abp::No *Abp::maximo(Abp::No *obj)
{
    if(obj == nullptr) return nullptr;
    // é necessário usar outro ponteiro
    // para não alterar o ponteiro passado no parâmentro
    No* atual = obj;
    // laço para encontrar o máximo
    while(atual->fd != nullptr) {
        atual = atual->fd;
    }
    return atual; // maior valor na árvore
}

Abp::No *Abp::minimo(Abp::No *obj)
{
    if(obj == nullptr) return nullptr;
    // é necessário usar outro ponteiro
    // para não alterar o ponteiro passada no parâmentro
    No* atual = obj;
    // laço para encontrar o máximo
    while(atual->fe != nullptr) {
        atual = atual->fe;
    }
    return atual; // maior valor na árvore
}

Abp::No *Abp::antecessor(Abp::No *obj)
{
    if(obj == nullptr) return nullptr;
    //Se tem filho a esquerda o antecessor é o
    //máximo da sub-árvore da esquerda
    if(obj->fe != nullptr) return (maximo(obj->fe));
    //Caso contrário o antecessor pode estar nos ancestrais
    //O antecessor pode ser o primeiro ancestral do qual o
    //nó é filho a direita
    //Pode não ter antecessor
    No* atual = obj->pai;
    No* ant = obj;
    while(atual != nullptr && ant == atual->fe) {
        ant = atual;
        atual = atual->pai;
    }
    //Se atual é nulo então não existe antecessor
    //Existe antecessor caso atual seja diferente de nulo
    return atual;
}

Abp::No *Abp::sucessor(Abp::No *obj)
{
    if(obj == nullptr) return nullptr;
    //Se tem filho a direito o sucessor é o mínimo
    //da sub-árvore da direita
    if(obj->fd != nullptr) return (minimo(obj->fd));
    //Caso contrário o sucessor pode estar nos ancestrais
    //O sucessor pode ser o primeiro ancestral do qual o
    //nó é filho a esquerda
    //Pode não ter sucessor
    No* atual = obj->pai;
    No* ant = obj;
    while(atual != nullptr && ant == atual->fd) {
        ant = atual;
        atual = atual->pai;
    }
    //Se atual é nulo então não existe sucessor
    //Existe Sucessor caso atual seja diferente de nulo
    return atual;
}

Item *Abp::retirar(Item *obj)
{

    // implementar depois
    Item* aux = nullptr;
    No* z = consultar(obj);
    if(z != nullptr) {
        aux = z->dados;
        No* y = nullptr;
        No* x = nullptr;
        if(z->fd == nullptr || z->fe == nullptr) { y = z; } // z tem 1 filho ou nenhum filho
        else { y = sucessor(z); } // z tem dois filhos
        if(y->fe != nullptr) { x = y->fe; }
        else { x = y->fd; }
        if(x != nullptr) { x->pai = y->pai; } // pois y tem um filho
        if(y->pai == nullptr) { // y é a raiz
            raiz = x;
            if(x != nullptr) { x->pai = nullptr; } // pois y tem um filho
        }
        else { // y não é raiz
            if(y == y->pai->fe) { y->pai->fe = x; }
            else { y->pai->fd = x; }
        }
        if(y != z) { z->dados = y->dados; } // y é o sucessor de z --> copia dados de y para z
        tamanho--;
    }
    return aux;
}


// método público
void Abp::visitaEmPreOrdem(string &aux) {
    // se a árvore estiver vazia não faz as chamadas recursivas
    if(vazia()) { aux = "Arvore vazia!\n"; }
    // chamar método recursivo
    else { visitaEmPreOrdem(aux, raiz); }
}
// método privado
void Abp::visitaEmPreOrdem(string &aux, No* obj) {
    if(obj != nullptr) {
        aux = aux + obj->dados->getItem();
        visitaEmPreOrdem(aux, obj->fe);
        visitaEmPreOrdem(aux, obj->fd);
    }
}

// método público
void Abp::visitaEmOrdem(string &aux) {
    // se a árvore estiver vazia não faz as chamadas recursivas
    if(vazia()) { aux = "Arvore vazia!\n"; }
    // chamar método recursivo
    else { visitaEmOrdem(aux, raiz); }
}
// método privado
void Abp::visitaEmOrdem(string &aux, No* obj) {
    if(obj != nullptr) {
        visitaEmOrdem(aux, obj->fe);
        aux = aux + obj->dados->getItem();
        visitaEmOrdem(aux, obj->fd);
    }
}

// método público
void Abp::visitaEmPosOrdem(string &aux) {
    // se a árvore estiver vazia não faz as chamadas recursivas
    if(vazia()) { aux = "Arvore vazia!\n"; }
    // chamar método recursivo
    else { visitaEmPosOrdem(aux, raiz); }
}
// método privado
void Abp::visitaEmPosOrdem(string &aux, No* obj) {
    if(obj != nullptr) {
        visitaEmPosOrdem(aux, obj->fe);
        visitaEmPosOrdem(aux, obj->fd);
        aux = aux + obj->dados->getItem();
    }
}

// método público
void Abp::testaIntegridade(string &aux) {
    // se a árvore estiver vazia não faz as chamadas recursivas
    if(vazia()) { aux = "Arvore vazia!\n"; }
    // chamar método recursivo
    else {
        testaIntegridade(aux, raiz);
        aux = "Arvore provavelmente sem erros.\nVeja mensagens de erro a anteriores.\n";
    }
}

// método privado
void Abp::testaIntegridade(string &aux, No* obj) {
    if(obj == nullptr) { return; }
    if(obj->fe != nullptr){
        if(obj->dados->getNome() < obj->fe->dados->getNome()) {
            aux = aux + "Erro!!! Pai menor que filho a esquerda.\n";
            aux = aux + "Pai --> " + obj->dados->getNome()+ "\n";
            aux = aux + "Filho a esquerda --> " + obj->fe->dados->getNome() + "\n";
        }
    }
    if(obj->fd != nullptr){
        if(obj->dados->getNome() > obj->fd->dados->getNome()) {
            aux = aux + "Erro!!! Pai maior que filho a direita.\n";
            aux = aux + "Pai --> " + obj->dados->getNome()+ "\n";
            aux = aux + "Filho a direita --> " + obj->fd->dados->getNome() + "\n";
        }
    }
    testaIntegridade(aux, obj->fe);
    testaIntegridade(aux, obj->fd);
}
