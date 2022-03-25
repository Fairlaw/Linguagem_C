//Programa para exibir o salário do cargo de acordo com a escolha do usuário.

#include <stdio.h>

int main()
{
    int opcao = 0;

    //comando para limpar a tela
    system("clear");//clear screen
    printf("     ##################################################");
    printf("\t\n     # \t\tPrograma para exibir salário\t      #\n");
    printf("     ##################################################\n");
    printf("\t ==========================================\n");
    printf("\t ||\t\t1 - Diretor\t\t ||\n");
    printf("\t ||\t\t2 - Gerente\t\t ||\n");
    printf("\t ||\t\t3 - Analista\t\t ||\n");
    printf("\t ||\t\t4 - Assistente\t\t ||\n");
    printf("\t ||\t\t5 - Auxiliar\t\t ||\n");
    printf("\t ==========================================\n");
    printf("\n     Escolha o cargo através do número correspondente: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
       
        case 1:
            printf("\n     O salário do diretor é R$15.000,00\n");
        break;

        case 2:
            printf("\n     O Salário do Gerente é R$12.000,00\n");
        break;

        case 3:
            printf("\n     O salário do Analista é R$:8.000,00\n");
        break;

        case 4:
            printf("\n     O salário do Assistente é R$4.000,00\n");
        break;

        case 5:
            printf("\n     O Salário do Auxiliar é R$2.000,00\n");
        break;

        default:
            printf("\n     Opção inválida.\n");
        break;
    }
        
    return 0;
}