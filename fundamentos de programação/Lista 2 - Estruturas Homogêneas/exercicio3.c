/* Na biblioteca "vetores.h" criar função:
a) Com o protótipo void gerarVetorFloat0a1(float vetor[], int tam) para gerar
valores float aleatórios entre 0 e 1 em um vetor. Use vetor[i] = (float)(rand()) /
RAND_MAX; para gerar valores aleatórios entre 0 e 1.
b) Com o protótipo void gerarVetorFloat0a100(float vetor[], int tam) para gerar
valores float aleatórios entre 0 e 100 em um vetor. Use vetor[i] = ((float)(rand()) /
RAND_MAX)*100; para gerar valores aleatórios entre 0 e 100.
c) Com o protótipo void mostrarVetorFloat(float vetor[], int tam) para mostrar
os elementos de um vetor float.
d) Com o protótipo float somarVetorFloat(float vetor[], int tam) para somar os
elementos de um vetor float.
Usando essas funções:
a) Gerar um vetor float com 10 elementos aleatórios entre 0 e 1, exibir o vetor e mostrar a soma de todos os
elementos do vetor.
b) Gerar um vetor float com 50 elementos aleatórios entre 0 e 100 e exibir o vetor. Criar outros dois vetores
numéricos do tipo float, em um deles armazenar os valores menores que 50 e em outro os maiores que 50.
Mostrar os vetores gerados.*/

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include "vetores.h"

int main()
{

    char reset;
    float soma;
    int i, j, k;

    do
    {
        printf("\n==== VETOR 1 ====\n");
        float vetA[10];
        gerarVetorFloat0a1(vetA, 10);
        mostrarVetorFloat(vetA, 10);
        soma = somarVetorFloat(vetA, 10);
        printf("\nSoma: %.2f", soma);

        printf("\n==== VETOR 2 ====\n");
        float vetB[50];
        gerarVetorFloat0a100(vetB, 50);
        mostrarVetorFloat(vetB, 50);

        printf("\n==== VETOR 3 ====\n");
        j = 0;
        k = 0;
        float vetC[50], vetD[50];
        for (i = 0; i < 50; i++)
        {
            if (vetB[i] < 50)
            {
                vetC[j] = vetB[i];
                j++;
            }
            else
            {
                vetD[k] = vetB[i];
                k++;
            }
        }
        mostrarVetorFloat(vetC, j);

        printf("\n==== VETOR 4 ====\n");
        mostrarVetorFloat(vetD, k);

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