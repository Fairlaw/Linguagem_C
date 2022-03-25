/*Programa para calcular o desconto de um funcionário, onde o salário sendo
maior que 5000.00, terá um desconto de 5%. Caso contrário não haverá desconto.*/
#include <stdio.h>
#define LIMITE 5000.00

int main()
{
    float salario_func;
    printf("Digite o salário do funcionário e tecle 'ENTER': ");
    scanf("%f", &salario_func);

    if(salario_func > LIMITE)
    {
        printf("O desconto é de: R$%.2f\n", (salario_func*5/100) );
        printf("Valor do salário com desconto é de: R$%.2f\n", salario_func - (salario_func*5/100) );
    }

    else
    {
        printf("Não há desconto.\n");
    }
    return 0;
}