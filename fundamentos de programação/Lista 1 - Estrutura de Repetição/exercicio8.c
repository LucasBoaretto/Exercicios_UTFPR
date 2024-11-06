/* Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média desses múltiplos.*/

#include <stdio.h>

int main()
{

    int i, cont = 0, soma = 0;
    float media;

    for (i = 500; i > 0; i--)
    {
        if (i % 4 == 0 || i % 10 == 0)
        {
            cont++;
            soma = soma + i;
            printf("%d\t", i);
            if (cont % 9 == 0)
            {
                printf("\n");
            }
        }
    }

    media = (float)soma / cont;
    printf("\nMedia: %.2f", media);

    return 0;
}