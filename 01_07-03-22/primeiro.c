#include <stdio.h>

int main()
{
    int num; //declarar variavel inteira
    printf("Digite um valor inteiro e aperte ENTER\n"); //Exibir frase na tela
    scanf("%d", &num); //Ler valor digitado pelo usuário na variavel "num" (O & da o endereço da variável)
    printf("O valor de num é: %d\nTa vendo não?\nTá cego?\n", num); //Exibir valor atribuido à variavelN "num" pelo usuário
    return 0;
}