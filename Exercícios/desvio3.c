#include <stdio.h>
#include <stdlib.h>

void main()
{
    int destino, trecho;;
    printf("Informe destino conforme a tabela: \n");
    printf("1-Região Norte \t 3-Região Centro-oeste \n");
    printf("2-Região Norte \t 4-Região Sul \n");
    scanf("%d", &destino);
    printf("Informe o trecho <1-IDA ou 2-IDA E VOLTA>: ");
    scanf("%d", &trecho);
    if (destino == 1)
    {
        if (trecho == 1)
            printf("Região Norte[IDA] = R$500,00\n");
        else
            printf("Região Norte[IDA E VOLTA] = R$900,00\n");
    }
    else if (destino == 2)
    {
        if (trecho == 1)
            printf("Região Nordeste[IDA] = R$350,00\n");
        else
            printf("Região Nordeste [IDA E VOLTA] = R$650,00\n");
    }
    else if (destino == 3)
    {
        if (trecho == 1)
            printf("Região Centro-oeste [IDA] = R$350,00\n");
        else
            printf("Região Centro-oeste [IDA E VOLTA] = R$600,00\n");
    }
    else
    {
        if (trecho == 1)
            printf("Região Sul [IDA] = R$300,00\n");
        else
            printf("Região Sul [IDA E VOLTA] = R$550,00\n");
    }
}