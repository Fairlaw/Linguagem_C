#include <stdio.h>
#include <stdlib.h>

void main()
{   
    char prod[30];//variável do produto
    printf("Digite o nome do produto e tecle 'ENTER': ");
    scanf("\n%[^\n]s", prod);

    printf("Produto: %s \n", prod);

}