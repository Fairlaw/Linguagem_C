#include <stdio.h>

int main()
    {
        int divo, divr, rest, quo;

        printf("Qual o DIVIDENDO?\n");
        scanf("%d", &divo);

        printf("Qual o DIVISOR?\n");
        scanf("%d", &divr);

        quo= divo / divr;
        rest= divo % divr; //"%" entre duas variáveis, mostra o "resto" do cálculo entre os 2 números
        
        printf("Resultado: %d\n", quo);
        printf("Resto: %d\n", rest);

        return 0;
    }

