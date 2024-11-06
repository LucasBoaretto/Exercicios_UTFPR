/*Gerar aleatoriamente valores 0 ou 1 um vetor com 100 elementos. Mostrar o vetor. Em seguida contar quantos
0s sucessivos o vetor contém, armazenar essa quantidade em outro vetor e mostrá-lo. Qual seria o tamanho
mínimo e máximo do vetor que armazena as quantidades? Criá-lo para o tamanho máximo possível.
*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{

    char reset;
    int i, contZero, j, contVet;

    do
    {
        int vet[100], vetB[100];
        criarVetorDe0Limite(vet, 100, 1);
        printf("=== VETOR A ===\n");
        mostrarVetorInteiros(vet, 100);

        contZero = 0;
        j = 0;
        contVet = 0;
        for (i = 0; i < 100; i++)
        {
            if (vet[i] == 0)
            {
                contZero++;
            }
            else
            {
                vetB[j] = contZero;
                j++;
                contZero = 0;
                contVet++;
            }
        }

        printf("\n=== VETOR B ===\n");
        mostrarVetorInteiros(vetB, contVet);

        do
        {
            printf("\nExecutar novamente (S ou N)?: ");
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