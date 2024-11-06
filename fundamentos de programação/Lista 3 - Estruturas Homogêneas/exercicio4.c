/*Gerar dois vetores com 10 elementos cada, os elementos devem ser distintos. Os valores são aleatórios e
entre 1 e 15 para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor com a
interseção dos valores dos vetores anteriores. Utilizar o conceito matemático de intersecção entre conjuntos.
Mostrar os três vetores.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main()
{

    char reset;
    int tam = 10, i, j, k;
    int vetA[tam], vetB[tam], vetC[tam];

    do
    {
        printf("\n==== VETOR A ====\n");
        gerarVetorSemRepeticao(vetA, tam, 15);
        mostrarVetorInteiros(vetA, tam);

        printf("\n==== VETOR B ====\n");
        gerarVetorSemRepeticao(vetB, tam, 10);
        mostrarVetorInteiros(vetB, tam);

        printf("\n==== INTERSECAO ====\n");
        k = 0;
        for (i = 0; i < tam; i++)
        {
            for (j = 0; j < tam; j++)
            {
                if (vetA[i] == vetB[j])
                {
                    vetC[k] = vetB[j];
                    k++;
                }
            }
        }
        mostrarVetorInteiros(vetC, k);

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