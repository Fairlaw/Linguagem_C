/* Programa para calcular a situação do aluno (reprovado/aprovado/recuperação)
aprovado >= 7 (do contrario = reprovdo)
recuperação = entre 4.1 e 6.9 */
#include <stdio.h>
#define MEDIAAPROV 7.0
#define MEDIAREPROV 4.0

int main()
{
    float notaAluno;
    printf("digite a nota do aluno e tecle 'ENTER': ");
    scanf("%f", &notaAluno);

    if(notaAluno >= MEDIAAPROV)
    {
        printf("Aluno aprovado.\n");
    }
    else if(notaAluno <= MEDIAREPROV)
    {
        printf("Aluno reprovado\n");
    }

    else
    {
        printf("Recuperação\n");
    }
    
    return 0;
}