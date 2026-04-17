#include <iostream>
using namespace std;

template <typename TIPO>
struct ElementoP{
    TIPO dado;
    ElementoP<TIPO> *proximo;
};

template <typename TIPO>
struct ListaP{
     ElementoP<TIPO> *inicio;
};

template <typename TIPO>
void iniciaListaClientes(ListaP<TIPO> &lista){
    lista.inicio = NULL;
}

template<typename TIPO>
bool estaVazia(ListaP<TIPO> &lista){
    return lista.inicio == NULL;
}

template <typename TIPO>
void push(ListaP<TIPO> &lista, TIPO dado){
    ElementoP<TIPO> *novo = new ElementoP<TIPO>;

    novo->dado = dado;
    novo->proximo = NULL;
    lista.inicio = novo;
}

template<typename TIPO>
TIPO pop(ListaP<TIPO> &lista){
    if(estaVazia(lista)){
        cout<< "LISTA VAZIA!";
        return TIPO();
    }

    ElementoP<TIPO> temp = lista.inicio;
    TIPO valor = temp->dado;
    lista.inicio = temp->proximo;
}