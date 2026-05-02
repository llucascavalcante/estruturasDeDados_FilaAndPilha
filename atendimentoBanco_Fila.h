#include <iostream>
using namespace std;

template <typename TIPO>
struct Elemento{
    TIPO dado;
    Elemento<TIPO> *proximo;
};

template <typename TIPO>
struct Lista{
     Elemento<TIPO> *inicio;
};

template <typename TIPO>
bool listaVazia(Lista<TIPO> &lista){
    return (lista.inicio == 0);
}

template <typename TIPO>
void iniciaListaClientes(Lista<TIPO> &lista){
    lista.inicio = NULL;
}

template <typename TIPO>
void queue(Lista<TIPO> &lista, TIPO dado){ //insere no fim (clientes para atender)
    Elemento<TIPO> *novo = new Elemento<TIPO>;

    novo->dado = dado;
    novo->proximo = NULL;

    if(lista.inicio == NULL){
        lista.inicio = novo;
    }

    Elemento<TIPO> *nav;

    nav = lista.inicio;
    while(nav->proximo != NULL){
        nav = nav->proximo;
    }
    nav->proximo = novo;
}


template <typename TIPO>
Elemento<TIPO> dequeue(Lista<TIPO> &lista){ //Remove no inicio (atende os clientes), retorna cliente atendido

    Elemento<TIPO> *temp = lista.inicio;
    lista.inicio = lista.inicio->proximo;

    return temp;
    delete temp;
}


template <typename TIPO>
bool dequeue(Lista<TIPO> &lista){ //Remove no inicio (atende os clientes), sem retornar cliente atendido

    Elemento<TIPO> *temp = lista.inicio;
    lista.inicio = lista.inicio->proximo;

    return temp;
    delete temp;
}

template <typename TIPO>
void imprimirLista(Lista<TIPO> lista){
    Elemento<TIPO> *nav;

    nav->proximo = lista.inicio;
    while(nav->proximo != NULL){
        nav = nav->proximo;
        cout<<nav->dado<<endl<<endl;
    }
}