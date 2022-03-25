#include <stdio.h>

int main()
    {
        int qtd = 0;
        int ano;

        system("clear");
        for(ano = 1950; ano <= 2022; ano++)
        {
            if(ano % 4 == 0)
            {
                printf("%d é bissexto\n", ano);
                qtd++; //adiciona + 1 à variavel "qtd" quando encontra ano bissexto 
            }
        }
        printf("Encontramos %d anos bissextos\n", qtd);

     return 0;
    }

/*{
    int ano;
    char bi;

    for(ano = 1950; ano <= 2022; ano++)
    {
        printf("%d = %c", ano)
    
    }
    ano = ano%4;
}*/