/*Números palíndromos são aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um número de 4 dígitos, calcular e
escrever se este número é ou não palíndromo.*/

#include <stdio.h>

int main()
{

    int num, mil, cent, dez, uni;

    printf("\nEscreva um numero de 4 digitos: ");
    scanf("%d", &num);

    mil = num / 1000;
    cent = num % 1000 / 100;
    dez = num % 100 / 10;
    uni = num % 10;

    if (mil == uni && cent == dez)
    {
        printf("O numero eh um palindromo");
    }
    else
    {
        printf("O numero nao eh um palindromo");
    }

    return 0;
}