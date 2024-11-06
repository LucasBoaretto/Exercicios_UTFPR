/*Gerar uma matriz 10x2 com valores de 1 a 6. A primeira coluna da matriz se refere a base e a segunda
coluna ao expoente. Criar uma função que calcule a potência, gerar um vetor que armazena o resultado da
potência obtida a partir dos valores da matriz.
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
    int matriz[10][2], vetResultado[10], i;

    do
    {
        printf("\n==== MATRIZ ====\n");
        gerarMatrizInteiroDe1ALimite(10, 2, matriz, 6);
        imprimirMatrizInteiro(10, 2, matriz);

        printf("\n==== CALCULO DA POTENCIA ====\n");
        zerarVetor(vetResultado, 10);
        printf("BASE    EXPOENTE        RESULTADO\n");
        for (i = 0; i < 10; i++)
        {
            printf("%d       ", matriz[i][0]);
            printf("%d                ", matriz[i][1]);
            vetResultado[i] = expoente(matriz[i][0], matriz[i][1]);
            printf("%d\n", vetResultado[i]);
        }

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