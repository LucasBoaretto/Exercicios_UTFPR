/*O Triângulo de Floyd é um triângulo formado com números naturais. O triângulo começa em 1 no canto
superior esquerdo e continua a escrever a sequência de números naturais de tal modo que cada linha contém
um número a mais do que a linha anterior. Escreva um programa que leia um número inteiro positivo n e em
seguida imprima n linhas do Triângulo de Floyd.*/

#include <stdio.h>

int main()
{

    int num, i, j, cont = 0;

    do
    {
        printf("Informe um numero positivo: ");
        scanf("%d", &num);

        if (num < 0)
        {
            printf("Valor invalido!\n");
        }

    } while (num < 0);

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cont++;
            printf("%d ", cont);
        }
        printf("\n");
    }

    return 0;
}