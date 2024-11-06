/*Gerar uma matriz 3x3 com números randômicos no intervalo de 1 a 100 e a seguir escrever a localização
(linha e a coluna) do maior valor.*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "matrizes.h"
#include "vetores.h"

int main()
{

    char reset;
    int matriz[3][3], i, j, maior, posI, posJ;

    do
    {
        printf("\n==== MATRIZ ====\n");
        gerarMatrizInteiroDe1ALimite(3, 3, matriz, 100);
        imprimirMatrizInteiro(3, 3, matriz);
        maior = matriz[0][0];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    posI = i;
                    posJ = j;
                }
            }
        }
        printf("O maior elemento da matriz eh %d e se encontra na coluna %d da linha %d", maior, posJ + 1, posI + 1);

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