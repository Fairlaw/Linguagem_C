#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    system("clear");
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 20)
    {
        printf("Número é maior que 20\n");
    }
    else if (num == 20)
    {
        printf("Número é igual a 20\n");
    }

    else
    {
        printf("Número é menor que 20\n");
    }
}