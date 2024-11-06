/*Gerar aleatoriamente um vetor com 5 elementos inteiros entre 1 a 9. Mostrar a tabuada de cada um dos
elementos armazenados no vetor. A tabuada deve ser mostrada por uma função, que recebe como parâmetro
o número e apresenta a respectiva tabuada.
*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{

    char reset;
    int tam = 5, vetA[tam];

    do
    {
        printf("\n==== VETOR ====\n");
        gerarVetorInteiroDe1aLimite(vetA, tam, 9);
        mostrarVetorInteiros(vetA, tam);

        printf("\n==== TABUADA DE %d ====\n", vetA[0]);
        gerarEImprimirTabuada(vetA, 0);

        printf("\n==== TABUADA DE %d ====\n", vetA[1]);
        gerarEImprimirTabuada(vetA, 1);

        printf("\n==== TABUADA DE %d ====\n", vetA[2]);
        gerarEImprimirTabuada(vetA, 2);

        printf("\n==== TABUADA DE %d ====\n", vetA[3]);
        gerarEImprimirTabuada(vetA, 3);

        printf("\n==== TABUADA DE %d ====\n", vetA[4]);
        gerarEImprimirTabuada(vetA, 4);

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