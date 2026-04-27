#include <iostream>
using namespace std;

struct Cliente{
    string nome;
    int qtd_tempo;
};

template <typename TIPO>
void montaCliente(Lista<TIPO> *&lista, string nome, int qtd_tempo){
    Cliente *novoCliente = new Cliente;
    novoCliente->nome = nome;
    novoCliente->qtd_tempo = qtd_tempo;
    queue(lista, novoCliente);
}

inline ostream& operator<<(ostream &on, Cliente &cliente){
    on <<"Nome: "<< cliente.nome << endl;
    on <<"Qtds de tempo: "<< cliente.qtd_tempo;
    return on;
}