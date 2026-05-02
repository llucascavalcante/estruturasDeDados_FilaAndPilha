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

Função de atendimento que contem um laço que usa as unidades de tempo de cada cliente para realizar o atendimento
Cada vez que for preencher um cliente novo, as unidades de tempo tem que ser preenchidas aleatoriamente, novamente.
*/
#include <iostream>
#include <vector>
#include "atendimentoBanco_Fila.h"
#include "Tad_clientes.h"
#include "time.h"
#include "geraDados.hpp"
using namespace std;

template<typename TIPO>
void atender(Lista<TIPO> &lista, Cliente cliente, int qtdTotalTemp){
        for(int i = 0; i < cliente.qtd_tempo; (if(cin.get()) { i++ }){
            qtdTotalTemp++;
            do{
                imprimirLista(lista);
            } while(cliente != NULL);
        }
    
        if(deque(lista, cliente) == true){
            cout<<"Cliente atendido";
            imprimirLista(lista);
        }
}

/*

template<typename TIPO>
bool criarFila(Lista<TIPO> &fila, mt19937 &gen){
    int qtdClientes
    
        cout<<"insira a qtd de clientes:\n";
        cin>> qtdClientes;

        for(int i = 0; i < qtdClientes; i++){
        int r = (1 + rand() % 5);
        string nome = gerarNome(gen);
            return montaCliente(fila, nome, r);
        }
}

*/



int main(){
    random_device rd;
    mt19937 gen(rd());
    srand(time(NULL));

    int qtdClientes;
    int opcao;
    int qtdTotaltemp;

    Lista<Cliente> fila;
    iniciaListaClientes(fila);

    Cliente a1, a2, a3, a4, a5;
    montaClienteAle(fila, a1, "Jorge");
    montaClienteAle(fila, a2, "João");
    montaClienteAle(fila, a3, "Adalberto");
    montaClienteAle(fila, a4, "Romário");
    montaClienteAle(fila, a5, "Sebastião");


    atender(fila, a1, qtdTotaltemp);
    cout<<"Quantidade total de tempo para atender os clientes: "<<qtdTotaltemp;
    return 0;
}