#include <iostream>
using namespace std;

struct Cliente{
    string nome;
    int qtd_tempo;
};

void montaCliente(Cliente &novo, string nome, int qtd_tempo){
    novo.nome = nome;
    novo.qtd_tempo = qtd_tempo;
}

inline ostream& operator<<(ostream &on, Cliente &cliente){
    on <<"Nome: "<< cliente.nome << endl;
    on <<"Qtds de tempo: "<< cliente.qtd_tempo;
    return on;
}