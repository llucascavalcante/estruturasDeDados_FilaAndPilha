#include <iostream>
using namespace std;

struct Cliente{
    string nome;
    int qtd_boletos;
};

void montaCliente(Cliente &novo, string nome, int qtd_boletos){
    novo.nome = nome;
    novo.qtd_boletos = qtd_boletos;
}