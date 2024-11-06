/*Gerar dois vetores com 10 elementos cada, os elementos devem ser distintos. Os valores são aleatórios e
entre 1 e 15 para o primeiro vetor e entre 1 e 10 para o segundo vetor. Gerar um terceiro vetor com a união
dos valores dos vetores anteriores. Utilizar o conceito matemático de união entre conjuntos. Mostrar os três
vetores*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main()
{
    char reset;
    int tam = 10, vetA[tam], vetB[tam], i, j;

    do
    {
        printf("\n==== VETOR A ====\n");
        gerarVetorSemRepeticao(vetA, tam, 15);
        mostrarVetorInteiros(vetA, tam);

        printf("\n==== VETOR B ====\n");
        gerarVetorSemRepeticao(vetB, tam, 10);
        mostrarVetorInteiros(vetB, tam);

        printf("\n==== UNIAO ====\n");
        int vetC[tam * 2];
        for (i = 0; i < tam; i++)
        {
            vetC[i] = vetA[i];
        }
        j = 10;
        for (i = 0; i < tam; i++)
        {
            if (verificarSeHaRepetido(vetC, tam, vetB[i]) == 0)
            {
                vetC[j] = vetB[i];
                j++;
            }
        }
        mostrarVetorInteiros(vetC, j);

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
