#include <iostream>
using namespace std;

struct Cliente{
    string nome;
    int qtd_tempo;
};

/*

*/ 

template <typename TIPO>
void montaClienteAle(Lista<TIPO> &lista, Cliente novoCliente, string nome){
    int r = (1 + rand() % 5);
    novoCliente.nome = nome;
    novoCliente.qtd_tempo = r;
    queue(lista, novoCliente);
}

inline ostream& operator<<(ostream &on, Cliente &cliente){
    on <<"Nome: "<< cliente.nome << endl;
    on <<"Qtds de tempo: "<< cliente.qtd_tempo;
    return on;
}

