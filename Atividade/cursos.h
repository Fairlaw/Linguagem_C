#include<stdio.h>
#include<stdlib.h>

typedef struct curso_dados //typedef "apelida" uma variável, struct, etc.
{
    char nome[30];
    char descricao[100];
    char carga_horaria[5];
    char datainicio[10];
    char datatermino[10];
    float valor[10];
}curso; //apelido da struct "curso_dados"