/*Apresente os múltiplos de 10 entre 1000 e 0 (ordem decrescente). Mostre os valores separados
por uma tabulação e em colunas com 8 números por linha.*/

#include <stdio.h>

int main()
{
    int i, quantLi = 0;

    for (i = 1000; i >= 0; i--)
    {
        if (i % 10 == 0)
        {
            quantLi++;
            printf("%d\t", i);

            if (quantLi % 8 == 0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
