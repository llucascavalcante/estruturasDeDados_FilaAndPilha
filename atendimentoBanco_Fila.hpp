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
void iniciaListaClientes(Lista<TIPO> &lista){
    lista.inicio = NULL;
}

template <typename TIPO>
void adicionaElemento(Lista<TIPO> &lista, TIPO &dado){
    Elemento<TIPO> *novo = new Elemento<TIPO>;

    novo->elemento = dado;
    novo->proximo = NULL;

    if(lista.inicio == NULL){
        lista.inicio = novo;
        return;
    }

    Elemento<TIPO> *nav;

    nav = lista.inicio;
    while(nav->proximo != NULL){
        nav = nav->proximo;
    }
    nav->proximo = novo;
    return;
};

template <typename TIPO>
void imprimirLista(Lista<TIPO> lista){
    Elemento<TIPO> *nav;

    nav->proximo = lista.inicio;
    while(nav->proximo != NULL){
        nav = nav->proximo;
        cout<<nav.dado<<endl;
    }
}