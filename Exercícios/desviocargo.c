#include <stdio.h>
#include <stdlib.h>

void main()
{
    int cargo;
    float atual, reajuste;

    system("clear");
    printf("Cagos:\nDiretor:\t1\nGerente:\t2\nAnalista:\t3\n");

    printf("Informe o cargo do funcionário: ");
    scanf("%d", &cargo);
    printf("Informe o salário atual: ");
    scanf("%f", &atual);

    if(cargo == 1)
        {
            reajuste = (atual * 7) / 100;
        }

        else if (cargo == 2)
        {
            reajuste = (atual * 9) / 100;
        }
        else if (cargo == 3)
        {
            reajuste = (atual * 5) / 100;
        }
        else 
        {
        reajuste = (atual * 12) / 100;
        }
        printf("O reajuste é: %.2f\n", reajuste);
        printf("o Salário atual é: %.2f\n", atual+reajuste);   
}