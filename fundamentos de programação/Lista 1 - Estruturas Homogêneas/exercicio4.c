/*Gerar valores inteiros aleatórios nos vetores A e B, sendo A com n elementos entre 1 e 20 e B com n
elementos entre 1 e 15. O usuário informa a quantidade de elementos dos vetores, ou seja, o seu tamanho.
Validar para que seja informado um valor positivo o tamanho do vetor. Mostrar os elementos dos vetores A e
B. Construir um vetor C, em que cada elemento de C será 1 quando o elemento de A for maior que o
respectivo elemento em B; será 0 quando o elemento de A for igual ao respectivo elemento em B; e será -1
quando o elemento de A for menor que o respectivo elemento em B. Mostrar os elementos do vetor C.
*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{
    char reset;
    int tamA, tamB, maior, i, menor;

    do
    {
        do
        {
            printf("Informe o tamanho do vetor A: ");
            scanf("%d", &tamA);

            if (tamA < 0)
            {
                printf("Valor invalido!\n");
            }

        } while (tamA < 0);
        do
        {
            printf("Informe o tamanho do vetor B: ");
            scanf("%d", &tamB);

            if (tamB < 0)
            {
                printf("Valor invalido!\n");
            }

        } while (tamB < 0);

        int vetA[tamA], vetB[tamB];
        gerarVetorInteiroDe1aLimite(vetA, tamA, 20);
        gerarVetorInteiroDe1aLimite(vetB, tamB, 15);
        printf("\n=== VETOR A ===\n");
        mostrarVetorInteiros(vetA, tamA);
        printf("\n=== VETOR B ===\n");
        mostrarVetorInteiros(vetB, tamB);

        if (tamA > tamB)
        {
            maior = tamA;
            menor = tamB;
        }
        else
        {
            maior = tamB;
            menor = tamA;
        }
        int vetC[maior];
        for (i = 0; i < menor; i++)
        {
            if (vetA[i] > vetB[i])
            {
                vetC[i] = 1;
            }
            else if (vetB[i] > vetA[i])
            {
                vetC[i] = -1;
            }
            else
            {
                vetC[i] = 0;
            }
        }
        if (maior == tamA)
        {
            for (i = menor; i < maior; i++)
            {
                vetC[i] = 1;
            }
        }
        else
        {
            for (i = menor; i < maior; i++)
            {
                vetC[i] = -1;
            }
        }

        printf("\n=== VETOR C ===\n");
        mostrarVetorInteiros(vetC, maior);

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