/*
Programa para cadastrar lientes com os seguintes dados:
Nome, idade e e-mail
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    struct cliente
    {    
    char nome[30];
    char email[100];
    int idade;
    }; //struct tem que por ponto e vírgula após fechar chaves.

    struct cliente novoCliente, *pNovoCliente; //Esta é a variável que guarda os dados do struct "cliente"

    pNovoCliente = &novoCliente;

    printf("Digite o nome: ");
    scanf("%s", &pNovoCliente->nome);
    printf("digite a Idade: ");
    scanf("%d", &pNovoCliente->idade);
    printf("digite o e-mail: ");
    scanf("%s", &pNovoCliente->email);

    printf("O nome do cliente é: %s", pNovoCliente->nome);

}