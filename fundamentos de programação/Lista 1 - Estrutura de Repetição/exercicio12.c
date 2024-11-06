/*Mostre os valores ímpares e não divisíveis por 5 entre 200 e 1. Apresente os valores em ordem
decrescente. Faça a média dos valores desse intervalo que são divisíveis por 3 e por 5.*/

#include <stdio.h>

int main()
{

    int i, contLinha = 0, soma = 0, cont = 0;
    float media;

    for (i = 200; i >= 1; i--)
    {
        if (i % 2 != 0 && i % 5 != 0)
        {
            contLinha++;
            printf("%d\t", i);
            if (contLinha % 9 == 0)
            {
                printf("\n");
            }
        }
        if (i % 3 == 0 && i % 5 == 0)
        {
            cont++;
            soma = soma + i;
        }
    }
    media = (float)soma / cont;
    printf("\nA media dos numeros divisiveis por 3 e 5 eh: %.1f", media);

    return 0;
}