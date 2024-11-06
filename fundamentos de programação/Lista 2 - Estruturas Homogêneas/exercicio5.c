/*Na biblioteca "vetores.h" criar uma função com o protótipo void
gerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo,
int limPositivo) para gerar números positivos e negativos em um intervalo de valores. Use
vetor[i] = rand() % (limPositivo + limNegativo + 1) - limNegativo;
Usando essa função:
Gerar um vetor A de inteiros com 100 elementos, com valores entre -50 e +50. Armazenar em um vetor B
somente os valores positivos do vetor A.*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main()
{
    char reset;
    int tam = 100, limInf = 50, i, j; // criei essa variavel com valor 50 pois meu antivirus dava problema se eu colocava o valor
    // diretamente na função (não faço ideia o porque disso).

    do
    {
        printf("\n==== VETOR A ====\n");
        int vetA[tam];
        gerarVetorPositivoNegativo(vetA, tam, limInf, 50);
        mostrarVetorInteiros(vetA, tam);
        printf("\n==== VETOR B ====\n");
        int vetB[tam];
        j = 0;
        for (i = 0; i < tam; i++)
        {
            if (vetA[i] >= 0)
            {
                vetB[j] = vetA[i];
                j++;
            }
        }
        mostrarVetorInteiros(vetB, j);

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