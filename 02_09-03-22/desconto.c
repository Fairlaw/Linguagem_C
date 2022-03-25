#include <stdio.h>

int main() 
{
    float precof,/*preço final*/valor,/*valor do produto*/ desc,/*desconto percentual*/ valdesc;/*Valor do desconto em inteiro*/

    printf("Entre com o valor do produto\n");
    scanf("%.2f", &valor); //Valor do produto. Ex: 40

    printf("Entre com o valor do desconto em porcentagem\n");
    scanf("%.2f", &valdesc); //Aqui o "vendedor" entra com o desconto, ex: 5

    valdesc=valdesc/100; //converter o inteiro digitado acima para percentual. Ex= 5 > 0,5
    desc=valdesc*valor; //definir o valor do desconto. Ex: 0,5 x 40
    precof=valor-desc; //subtrair o valor do produto pelo valor de desconto

    printf("Valor do desconto: %f\n", desc);
    printf("valor do produto com desconto: %f\n", precof);

    return 0;
}