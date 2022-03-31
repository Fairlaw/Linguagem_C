/*Programa que realisa soma usando array.*/
#include<stdio.h>
#include<stdlib.h>
#include"calculos.h"

void main()
{
    system("clear");
    int v[10] = {4,5,6,1,2,3,7,8,9,12};
    soma(v,10);
    maiorValor(v,10);
    menorValor(v,10);

}