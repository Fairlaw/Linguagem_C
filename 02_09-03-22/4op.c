#include <stdio.h>
int main()
{
	float val1, val2, som, sub, div, mult;
	printf("Digite o valor de x: \n");
	scanf("%f", &val1);
	printf("Digite o valor de y: \n");
	scanf("%f", &val2);
	printf("Valores digitados: %1.5f e %1.5f\n", val1, val2);
	som= val1 + val2;
	mult= val1 * val2;
	sub= val1 - val2;
	div= val1 / val2;
	
	printf("O resultado das 4 operações matematicas para os valores %1.5f e %1.5f são:\n", val1, val2);
	printf("%1.5f + %1.5f = %1.5f\n", val1, val2, som);
	printf("%1.5f - %1.5f = %1.5f\n", val1, val2, sub);
	printf("%1.5f * %1.5f = %1.5f\n", val1, val2, mult);
	printf("%1.5f ÷ %1.5f = %1.5f\n", val1, val2, div);
	
	return 0;
}