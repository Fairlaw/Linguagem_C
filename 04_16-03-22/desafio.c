#include <stdio.h>

int main ()
{
    char cargo[10];

    printf("Digite o cárgo e tecle 'ENTER': ");
    scanf("%s", cargo);

    if(strcmp(cargo, "diretor")==0) //está entre aspas pq n é numero, mas sim, texto
    {
        printf("Salário do Diretor: R$15.000,00\n");
    }
    else if(strcmp(cargo, "gerente")==0)

    {
        printf("Salário do Gerente: R$12.000,00\n");
    }
    else if(strcmp(cargo, "analista")==0)
    {
        printf("Salário do Analista: R$8.000,00\n");
    }
    else if(strcmp(cargo, "assistente")==0)
    {
        printf("Salário de Assistente: R$4.000,00\n");
    }
    else if(strcmp(cargo, "auxiliar")==0)
    {
        printf("Salário de Auxiliar: R$2.000,00\n");
    }
    else
    {
        printf("Não há salario\n");
    }

    return 0;
}