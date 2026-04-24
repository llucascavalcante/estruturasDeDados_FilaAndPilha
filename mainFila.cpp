/*
Desenvolva um programa para 'simular' o atendimento a clientes de um banco, utilizando uma fila para o 
guichê de atendimento: 

Cada cliente deve ter um nome e a quantidade de unidades de tempo(ex: número de boletos) do seu 
atendimento 

Crie 5 clientes com um número de unidades de tempo aleatório, inserindo cada cliente na fila.  
Crie um laço para fazer o atendimento, que será realizado com base nas unidades de tempo de cada 
cliente. Ex: Cliente 1 tem 3 unidades de tempo, o laço precisa executar 3 vezes decrementando as 
unidades de tempo a cada atendimento. 

No final mostre a quantidade de unidades de tempo total necessárias para atender todos os clientes.


Falta fazer:

Criar operador para mostrar clientes
Criar clientes com numero de unidades de tempo aleatório na função adicionaElemento 
Função de atendimento que contem um laço que usa as unidades de tempo de cada cliente para realizar o atendimento
Cada vez que for preencher um cliente novo, as unidades de tempo tem que ser preenchidas aleatoriamente, novamente.
*/
#include <iostream>
#include <vector>
#include "atendimentoBanco_Fila.hpp"
#include "Tad_clientes.hpp"
#include "time.h"
#include "geraDados.hpp"

using namespace std;

int main(){
    random_device rd;
    mt19937 gen(rd());
    srand(time(NULL));

    int qtdClientes;

    Lista<Cliente> clientes;
    iniciaListaClientes(clientes);


    cout<<"qtd de clientes: "<<qtdClientes;
    for(int i = 0; i < qtdClientes; i++){
        int r = (1 + rand() % 5);
        string nome = gerarNome(gen);
        montaCliente(clientes, nome, r);
    }

    imprimirLista(clientes);

    
    /* 
        removeElemento(lista, a1); //Realiza o atendimento do cliente em um laço for (decrementando a quantidade de tempo dele) 
        e somando as unidades de tempo de todos os clientes para dizer no final quanto tempo deu 
    */


    return 0;
}