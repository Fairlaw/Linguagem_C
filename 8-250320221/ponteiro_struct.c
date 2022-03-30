/*programa para cadastrar clientes com as
seguintes dado: Nome, idade, email*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    struct cliente{
        char nome[30];
        char email[100];
        int idade;

    };

    struct cliente novoCliente,*pnovocliente;
    pnovocliente = &novoCliente;

    printf("Entre com o nome do cliente:\n");
    scanf("%s",&pnovocliente->nome);

    printf("Entre com o email do cliente\n");
    scanf("%s",&pnovocliente->email);

    printf("Entre com a idade do cliente\n");
    scanf("%d",&pnovocliente->idade);

    printf("O nome do cliente é %s\n",pnovocliente->nome);
    printf("O email do cliente é %s\n",pnovocliente->email);
    printf("A idade do cliente é %d\n",pnovocliente->idade);
}