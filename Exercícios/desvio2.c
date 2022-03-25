#include <stdio.h>
#include <stdlib.h>

void main()
{
	char nome[30];
	int idade, alimentado, resfriado;
	float peso;
	
	system("clear");
	printf("Informe o nome: \n");
	scanf("%s", &nome);

	printf("Informe a idade: \n");
	scanf("%d", &idade);

	printf("Informe o peso: \n");
	scanf("%f", &peso);

	printf("Está bem alimentado? <0-sim> <1-não>\n");
	scanf("%d", &alimentado);

	printf("Está resfriado? <0-sim> <1-não>\n");
	scanf("%d", &resfriado);

	if (peso >= 50 && (idade >= 16 && idade <= 69) && alimentado && !resfriado)
	printf("O voluntário %s está apto. \n", nome);
	else
	printf("O voluntário %s não está apto.\n", nome);

}