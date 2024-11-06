/*Gerar uma matriz 5x5 com números randômicos, no intervalo de 1 a 5. Em seguida criar dois vetores que
contenham, respectivamente, as somas das linhas e das colunas da matriz. Mostrar os vetores criados.
*/

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
    int matriz[5][5], vetLinhas[5], vetColunas[5], i, j;

    do
    {
        printf("\n==== MATRIZ ====\n");
        gerarMatrizInteiroDe1ALimite(5, 5, matriz, 5);
        imprimirMatrizInteiro(5, 5, matriz);

        printf("\n==== SOMA DAS LINHAS ====\n");
        zerarVetor(vetLinhas, 5);
        zerarVetor(vetColunas, 5);
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 5; j++)
            {
                vetLinhas[i] = vetLinhas[i] + matriz[i][j];
                vetColunas[j] = vetColunas[j] + matriz[i][j];
            }
        }
        mostrarVetorInteiros(vetLinhas, 5);
        printf("\n==== SOMA DAS COLUNAS ====\n");
        mostrarVetorInteiros(vetColunas, 5);

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
