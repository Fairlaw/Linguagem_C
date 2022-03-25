#include <stdio.h>

int main() 
{   int distancia, tempo, resultado;
    printf("Digite a distancia\n");
    scanf("%d", &distancia);

    printf("Digite o tempo gasto\n");
    scanf("%d", &tempo);

    resultado=distancia / tempo;

    printf("\nA velocidade média foi de %d\n", resultado);

    return 0;
}