/* (Desafio) Gerar um vetor A (pode conter valores repetidos) com 15 valores aleatórios entre 1 e 20 e fazer
as seguintes funcionalidades:
 Ordenar o vetor e mostrar o vetor.
 Gerar um vetor B que contenha apenas os valores que se repetem no vetor A e mostrar o vetor.
 Gerar um vetor C que contenha apenas os valores que não se repetem no vetor A e mostrar o vetor.
Dicas:
Para verificar se os números se repetem ou não no vetor, poderá ser criada uma função com o protótipo int
existeNoVetor(int vet[], int tamanho, int valor) que recebe como parâmetros o vetor, o
tamanho do vetor e um valor e retorna o número de vezes que esse valor ocorre no vetor.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main()
{

    char reset;
    int tam = 15, vetA[tam], vetB[tam], vetC[tam], i, j, k;

    do
    {
        gerarVetorInteiroDe1aLimite(vetA, tam, 20);
        ordenarVetorInteiro(vetA, tam);
        printf("\n==== VETOR ====\n");
        mostrarVetorInteiros(vetA, tam);

        j = 0;
        k = 0;
        for (i = 0; i < tam; i++)
        {
            if (verificarSeHaRepetido(vetA, tam, vetA[i]) > 1)
            {
                if (verificarSeHaRepetido(vetB, tam, vetA[i]) == 0)
                {
                    vetB[j] = vetA[i];
                    j++;
                }
            }
            else
            {
                vetC[k] = vetA[i];
                k++;
            }
        }

        printf("\n==== REPETIDOS ====\n");
        mostrarVetorInteiros(vetB, j);
        printf("\n==== NAO REPETIDOS ====\n");
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