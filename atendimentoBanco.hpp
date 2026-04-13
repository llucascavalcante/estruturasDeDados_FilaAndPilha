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
*/

#include <iostream>
using namespace std;

template <typename TIPO>
struct Elemento{
    ElementoCliente<TIPO> cliente;
    ElementoCliente *proximo;
};

template <typename TIPO>
struct Lista{
    Cliente *inicio;
};

template <typename TIPO>
void iniciaListaClientes(listaClientes<TIPO> &lista){
    lista.inicio = NULL;
}

template <typename TIPO>
void adicionaClienteLista(listaClientes<TIPO> &lista, Elemento &novo){
    
};