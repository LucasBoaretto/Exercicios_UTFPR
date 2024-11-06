/*Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da
prestação. Calcule o valor a ser pago por meio da fórmula:
Valor com juros = prestação + (prestação * taxa /100)
*/

#include <stdio.h>

int main()
{

    int prest, taxa;
    float valorF;

    printf("Informe o valor da prestação: ");
    scanf("%d", &prest);
    printf("Informe a taxa de juros: ");
    scanf("%d", &taxa);

    valorF = prest + (prest * taxa / 100);

    printf("O valor da prestacao com juros eh: %.2f", valorF);

    return 0;
}