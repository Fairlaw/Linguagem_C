#include <stdio.h>

int main ()
{
    int decimal = 0;
    int resto = 1;
    int multiplicador = 1;
    int resultado = 0;
    char ch;

    do
    {
        printf("Digite um número e tecle 'ENTER': ");
        scanf("%d", &decimal);
        
        while(decimal !=0)
        {
            resto = decimal % 2;
            decimal = decimal / 2;
            resultado = resultado + resto * multiplicador;
            multiplicador = multiplicador * 10;
        }
        printf("%d\n", resultado);
    }
    
    while(ch != 'n'); //ta com erro em algum lugar aki e fica em loop...(pesquisar).

    return 0;
}