/* Faça um programa que imprima os n (indicado pelo usuário) primeiros números pares (começa em 0).
Apresente 5 valores por linha.*/

#include <stdio.h>

int main()
{

    int num, i, contPar = 0;

    printf("Quantos numeros pares quer mostrar? ");
    scanf("%d", &num);

    i = 0;
    do
    {
        if (i % 2 == 0)
        {
            contPar++;
            printf("%2d\t", i);
            if (contPar % 5 == 0)
            {
                printf("\n");
            }
        }
        i++;
    } while (contPar < num);

    return 0;
}