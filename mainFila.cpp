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
#include "atendimentoBanco_Fila.hpp"
#include "Tad_clientes.hpp"
#include "time.h"
using namespace std;

int main(){
    srand(time(NULL));

    Cliente a1, a2, a3, a4, a5;
    int r1 = (1 + rand() % 5);
    int r2 = (1 + rand() % 5);
    int r3 = (1 + rand() % 5);
    int r4 = (1 + rand() % 5);
    int r5 = (1 + rand() % 5);

    montaCliente(a1, "Lucas", r1);
    montaCliente(a2, "Jorge", r2);
    montaCliente(a3, "Robert", r3);
    montaCliente(a4, "Bartolomeu", r4);
    montaCliente(a5, "Juremo", r5);



    Lista<Cliente> lista;

    iniciaListaClientes(lista);
    queue(lista, a1);
    queue(lista, a2);
    queue(lista, a3);
    queue(lista, a4);
    queue(lista, a5);

    imprimirLista(lista);
    
    /* 
    removeElemento(lista, a1); //Realiza o atendimento do cliente em um laço for (decrementando a quantidade de tempo dele) 
    e somando as unidades de tempo de todos os clientes para dizer no final quanto tempo deu 
    */


    return 0;
}