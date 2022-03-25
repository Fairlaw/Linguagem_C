#include <stdio.h>
#include <stdlib.h>

void main()
{
    int valor = 50;
    int* pvalor = &valor;

    printf("Valor: %d\tPosição: %p\n", valor, pvalor);
}