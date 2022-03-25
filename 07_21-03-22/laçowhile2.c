/*Programa para manter a tela sempre ativa. caso o usuário digite 9, 
então a tela será liberada.*/
#include <stdio.h>

int main()
{
    int op = 0;
    system("clear");

    printf("Digite um número para sair e tecle 'ENTER': ");
    scanf("%d", &op);

    while(op != 9)
    {
        system("clear");
        printf("\nVocê errou ... \n");

        printf("Tente outra vez KKKKKKKKKKKKKKK: ");
        scanf("%d", &op);
    }

    return 0;
}