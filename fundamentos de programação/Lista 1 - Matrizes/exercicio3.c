/*Gerar uma matriz 10x10 preenchida com o número 1 e mostrar a matriz. Em seguida, preencher com 0 as
diagonais principal e secundária e mostrar a matriz.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "matrizes.h"

int main()
{

    char reset;
    int matriz[10][10], i, j;

    do
    {
        printf("\n==== MATRIZ ORIGINAL ====\n");
        gerarMatrizInteiroDe1ALimite(10, 10, matriz, 1);
        imprimirMatrizInteiro(10, 10, matriz);

        printf("\n==== MATRIZ ATUAL ====\n");
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (i == j)
                {
                    matriz[i][j] = 0;
                }
                else if (i + j == 10 - 1)
                {
                    matriz[i][j] = 0;
                }
            }
        }
        imprimirMatrizInteiro(10, 10, matriz);

        do
        {
            printf("\nExecutar novamente (S ou N)?:");
            fflush(stdin);
            scanf("%c", &reset);
            reset = toupper(reset);

            if (reset != 'S' && reset != 'N')
            {
                printf("Opcao invalida!\n");
            }
        } while (reset != 'S' && reset != 'N');
    } while (reset == 'S');

    return 0;
}