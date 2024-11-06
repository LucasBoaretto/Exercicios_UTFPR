/*Gerar elementos inteiros aleatórios entre 1 e 10 em um vetor A de tamanho 10 e criar um vetor B de
mesma dimensão e com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro elemento
de A será o último de B, o segundo elemento de A será o penúltimo de B e assim sucessivamente.
*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{

    char reset;
    int tam = 10, vetA[tam], i, j;

    do
    {
        printf("=== VETOR A ===\n");
        gerarVetorInteiroDe1aLimite(vetA, tam, 10);
        int vetB[tam];
        mostrarVetorInteiros(vetA, tam);
        /*j = 0;
        for (i = tam - 1; i >= 0; i--)
        {
            vetB[j] = vetA[i];
            j++;
        }*/
        for (i = 0; i < tam; i++)
        {
            vetB[i] = vetA[(tam - 1) - i];
        }

        printf("\n=== VETOR B ===\n");
        mostrarVetorInteiros(vetB, tam);

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