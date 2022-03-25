//Programa para calcular a tabuada de acordo com a entrada do usuário.
#include <stdio.h>

int main()
{
    int num;
    int mult;

    system("clear");
    printf("Digite um número para a tabuada e tecle 'ENTER': ");
    scanf("%d", &num);
    
    for(mult = 0; mult <= 10; mult++)
    {
        printf("%d x %d\t=   %d\n", num,mult,(num*mult));
    }

    return 0;
}