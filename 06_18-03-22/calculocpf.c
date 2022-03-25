/*Programa para validar o CPf do usuário. Quando o cpf for inserido,
pegamos os 9 primeiros dígitos e passamos para o calculo. É utilizado um número por
vez do cpf multiplicando pelo peso partindo de 10 e indo até 2. Na segunda parte do cálculo, pegamos os 9
primeiros mais o digito encontrado e multiplicamos pelo peso a partir de 11. Se o resto da divisão for menor que 2,
então o dígito será 0; caso contrário, o resto será subtraído por 11.*/

#include <stdio.h>

int main()
{
    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char cpf[11];

    system("clear");
    printf("Digite o CPF (apenas números): ");
    scanf("%s", cpf); //"%s" = String = cadeia de caracteres

    /*Converter todos os caracteres do CPF para número. Para isso devemos
    criar um conjunto de números em tipo int e realizar a conversão usando for*/
    int icpf[11];
    for(int x = 0; x <= 10; x++)
    {
        /*48 na tabela ascii = 0 (char), portanto, subtraindo 48 de 48 a 57
        resultará no número int, por exemplo: 53 - 48 = 5*/
        //48 49 50 51 52 53 54 55 56 57 = ASCII (CHAR)
        //00 01 02 03 04 05 06 07 08 09 = INT
        icpf[x] = cpf[x] - 48; //também é possível usar uma constante para 48, como conversao = 48;
    }
    
    /*"total" é IGUAL a icpf na posição "i" (que no momento vale 0) * peso10,
    (que inicialmente vale 10, na variável) + o valor da variável "total" (0).
     A variável "total" passará a valer o valor do cálculo. Após, peso é subtraído por 1,
     e o loop se repete até peso10 valer 2. 
     */
    for(int i = 0; i <= 8; i++) /* "<= 8" por que estamos utilizando os 9 primeiros dígitos
    (contando com a posição 0) para encontrar o primeiro dígito do CPF.*/
        {
        total+= icpf[1]*peso10;
        peso10--;
        }   
        /* Segunda parte do calculo que irá pegar a soma dos resultados, dividir por 11
        e pegar apenas o resto.*/
        resto = total % 11; //No momento, "resto" é igual
        /*Se o resto da divisão for menor que 2, então o primeiro digito
        de verificação será 0(zero).*/

        if(resto < 2)
        {
            icpf[9]=0;
        }

        //se o resto da divisão for 2 ou maior, então dividiremos o resto por 11.
        else
        {
            icpf[11] - resto;
        }

        /*Aqui precisamos zerar as variáveis para poder usá-las no cálculo
        do segundo dígito */
        total = 0;
        resto = 0;

        /*"<= 9" por que agora usaremos os 9 primeiros digitos do cpf + o 
        digito que encontramos no cálculo anterior.*/
        for(int i=0; i <=9; i++)
        {
            total += icpf[i]*peso11;
            peso11--;
        }

        resto = total % 11;

        if(resto < 2)
        {
            icpf[10] = 0;
        }

        else
        {
            icpf[10] = 11-resto;
        }
        

    for(int i = 0; i <= 10; i++)
    {
        printf("%d", icpf[i]);
    }

    return 0;
}