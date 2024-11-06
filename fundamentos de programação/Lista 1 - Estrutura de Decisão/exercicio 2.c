/* Escreva um programa que leia um número e verifique se ele é maior, menor ou igual a 10.*/

#include <stdio.h>

int main()
{

    float valor;

    printf("Informe um numero: ");
    scanf("%f", &valor);

    if (valor > 10)
    {
        printf("O valor eh maior que 10");
    }
    else if (valor < 10)
    {
        printf("O valor eh menor que 10");
    }
    else
    {
        printf("O valor eh igual a 10");
    }

    return 0;
}