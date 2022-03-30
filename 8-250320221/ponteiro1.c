/*programa para estudar um pouco sobre ponteiro
esta será o nosso primeiro exemplo*/

#include <stdio.h>
#include <stdlib.h>

void main(){

    int valor = 50;
    int *pvalor = &valor;

    printf("o valor e %d \t a posição em memória é %p\n",valor,pvalor);
}