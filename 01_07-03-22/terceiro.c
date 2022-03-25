#include <stdio.h>
#define PI 3.14159 //constante de PI

int main()
{
    float raio, area; //duas variáveis declaradas
    printf("Digite  o valor do raio do circulo e Aperte ENTER\n");
    //le do teclado com scanf; note o & em &raio
    scanf("%f", &raio);//exemplos: 1.23 12.3e-1
    //a seguir mostra na tela o valor do raio lido
    //usando 12 colunas e 2 decimais arredondados
    //por ex. 1.576 é arredondado para 1.58, só na tela
    printf("Raio digitado é %1.23f\n", raio); //%12.2f = 12 colunas e 
    area = PI * raio * raio;
    printf("Area do circulo com raio %1.2f é %1.2f\n" , raio, area);
    return 0;
}