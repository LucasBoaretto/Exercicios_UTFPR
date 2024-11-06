/*Gerar elementos inteiros e aleatórios entre 1 e 25 em um vetor de tamanho 15. Gerar outros dois vetores,
um contendo os valores pares e outro os ímpares e mostrar os três vetores.*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main()
{

    char reset;
    int tam = 15, vetA[tam], i, j, k;
    int contPar, contImpar;

    do
    {
        printf("=== VETOR ===\n");
        gerarVetorInteiroDe1aLimite(vetA, 15, 25);
        mostrarVetorInteiros(vetA, tam);

        contImpar = 0;
        contPar = 0;
        for (i = 0; i < tam; i++)
        {
            if (vetA[i] % 2 == 0)
            {
                contPar++;
            }
            else
            {
                contImpar++;
            }
        }
        int vetB[contPar], vetC[contImpar];
        j = 0;
        k = 0;
        for (i = 0; i < tam; i++)
        {
            if (vetA[i] % 2 == 0)
            {
                vetB[j] = vetA[i];
                j++;
            }
            else
            {
                vetC[k] = vetA[i];
                k++;
            }
        }
        printf("\n=== VETOR DE PARES ===\n");
        mostrarVetorInteiros(vetB, contPar);
        printf("\n=== VETOR DE IMPARES ===\n");
        mostrarVetorInteiros(vetC, contImpar);

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