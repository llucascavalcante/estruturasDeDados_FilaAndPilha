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