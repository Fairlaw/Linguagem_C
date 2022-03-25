/*programa para calcular o resultado da situação do aluno se está aprovado ou reprovado.
Vamos levar em consideração a nota do aluno e compará-la à média de aprovação da escola.
Caso a nota do aluno seja maior ou igual a 7, então o aluno está aprovado, caso contrário,
estará reprovado.*/
#include <stdio.h> //Incluir cabeçalho padrão de entrada e saída (STandard Input Output)
#define MEDIAP 7.0 //definir uma constante sempre em letras maiúsculas

int main()
{
    float nota_aluno; //declaração da variável 'nota_aluno' tipo float

    printf("Digite a nota do aluno e tecle Enter: ");
    scanf("%f", &nota_aluno);

    //desvio de fluxo com if .. else
    if(nota_aluno >= MEDIAP)
    {
        printf("ALUNO APROVADO.\n");
    }

    else
    {
        printf("ALUNO REPROVADO.\n");
    }

    return 0;
}