/*Escreva um programa que leia um número e verifique se ele se encontra no intervalo entre 5 e 20 ou fora
do fora do intervalo entre 5 e 20. */

#include <stdio.h>

int main()
{

    float valor;

    printf("Informe um numero: ");
    scanf("%f", &valor);

    if (valor >= 5 && valor <= 20)
    {
        printf("%.2f se encontra no intervalo entre 5 e 20", valor);
    }
    else
    {
        printf("%.2f se encontra fora do intervalo entre 5 e 20", valor);
    }

    return 0;
}