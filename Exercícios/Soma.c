#include <stdio.h>
#include <stdlib.h>

void main()
{
    int soma, num1, num2;

    system("clear");
    printf("Digite o primeiro número e tecle 'ENTER': ");
    scanf("%d", &num1);
    printf("Digite o segundo número e tecle 'ENTER': ");
    scanf("%d", &num2);

    soma=num1+num2;

    printf("%d + %d = %d\n", num1, num2, soma);

}