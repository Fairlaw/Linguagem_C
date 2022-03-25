/*Programa que pede para o usuário que digite o seu nome.
Ao fazer isso, será alocado numa variável, neste caso, "username".*/

#include <stdio.h>

int main()
{
    char username[30]; // "[30]" máximo de 30 caractéres serão exibidos.

    printf("Digite o seu nome e tecle 'ENTER': ");
    scanf("%s", username);// "%s" (string) para receber uma cadeia de caractéres.
    printf("%s\n", username);

    return 0;
}