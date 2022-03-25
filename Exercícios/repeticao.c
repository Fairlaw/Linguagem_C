#include <stdio.h>
#include <stdlib.h>

void main()
{
    float num, soma=0, media=0;
    int i;

    for (i=1; i<=10; i++)
    {
        printf("Informe o número: ");
        scanf("%f", &num);
        soma += num;
    }

    media = soma / 10;
    printf("A média é: %f, media");
}