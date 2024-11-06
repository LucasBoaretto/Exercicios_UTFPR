/* Ler uma string e contar os espaços em branco que ocorrem no início, entre as palavras e no final da string,
e armazenar a contagem em um vetor. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Construir
uma matriz de n linhas e duas colunas, sendo que n representa a quantidade de elementos do vetor (se o
elemento ocorrer mais de uma vez, considerar apenas uma ocorrência). Na segunda coluna da matriz
armazenar a quantidade de repetições de cada elemento no vetor. Mostrar a matriz.
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "vetores.h"
#include "string.h"
#include "matrizes.h"

int main()
{

    char reset;
    char texto[100];
    int i, j, vet[100], contEsp, k, cont;

    do
    {
        printf("\nInforme um texto: ");
        fflush(stdin);
        gets(texto);

        printf("\n==== VETOR ====\n");
        j = 0;
        contEsp = 0;
        for (i = 0; texto[i] != '\0'; i++)
        {
            if (texto[i] == ' ')
            {
                contEsp++;
            }
            else if (contEsp != 0)
            {
                vet[j] = contEsp;
                contEsp = 0;
                j++;
            }
        }
        if (contEsp != 0)
        {
            vet[j] = contEsp;
            contEsp = 0;
            j++;
        }
        mostrarVetorInteiros(vet, j);

        printf("\n==== VETOR ORDENADO ====\n");
        ordenarVetorInteiro(vet, j);
        mostrarVetorInteiros(vet, j);

        printf("\n==== MATRIZ ====\n");
        cont = 0;
        for (i = 0; i < j; i++)
        {
            if (i == 0 || vet[i] != vet[i - 1])
            {
                cont++;
            }
        }
        int matriz[cont][2];
        k = 0;
        for (i = 0; i < j; i++)
        {
            if (i == 0 || vet[i] != vet[i - 1])
            {
                matriz[k][0] = vet[i];
                matriz[k][1] = verificarSeHaRepetido(vet, j, vet[i]);
                k++;
            }
        }
        imprimirMatrizInteiro(cont, 2, matriz);

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