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
bool queue(Lista<TIPO> &lista, TIPO dado){
    Elemento<TIPO> *novo = new Elemento<TIPO>;

    novo->dado = dado;
    novo->proximo = NULL;

    if(lista.inicio == NULL){
        lista.inicio = novo;
        return false;
    }

    Elemento<TIPO> *nav;

    nav = lista.inicio;
    while(nav->proximo != NULL){
        nav = nav->proximo;
    }
    nav->proximo = novo;
    return true;
}

/*

template <typename TIPO>
Elemento<TIPO> dequeue(Lista<TIPO> &lista){
    Elemento<TIPO> *nav = lista.inicio;

    //Tentar entender a lógica desse código
    nav->dado = lista.inicio->dado;
    while(lista.inicio != NULL){
        lista.inicio = lista.inicio->proximo;
    }

    return nav->dado;
    delete lista.inicio;

    while(nav-)
}
    
*/

template <typename TIPO>
void imprimirLista(Lista<TIPO> lista){
    Elemento<TIPO> *nav;

    nav->proximo = lista.inicio;
    while(nav->proximo != NULL){
        nav = nav->proximo;
        cout<<nav->dado<<endl<<endl;
    }
}