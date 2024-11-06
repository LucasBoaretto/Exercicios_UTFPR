/* Ler uma string e criar uma função que receba a string e retorne quantas palavras a mesma possui. Criar
uma segunda função para contar quantas letras têm em cada palavra da string, armazenando essa contagem
em um vetor passado por parâmetro para a função (esse vetor terá como tamanho o número de palavras da
string). Na sequência, ordenar o vetor e mostrar o vetor. Construir uma matriz de n linhas e duas colunas,
sendo que n representa a quantidade de elementos do vetor (se o elemento ocorrer mais de uma vez,
considerar apenas uma ocorrência). Na segunda coluna da matriz armazenar a quantidade de divisores que o
elemento possui será armazenada. Percorrer a matriz mostrando os elementos das colunas 0 e 1 e
escrevendo “Sim” quando o elemento que está na coluna 0 for primo e “Não” caso contrário.
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "string.h"
#include "matrizes.h"
#include "vetores.h"

int contDivisores(int x);
void mostraDivisores(int x);
int primo(int x);

int main()
{

    char reset;
    char string[100];
    int i, contPalavras, j, k;

    do
    {
        printf("\nInforme uma string: ");
        fflush(stdin);
        gets(string);
        contPalavras = contarPalavrasEmString(string);
        printf("\nA string tem %d palavras", contPalavras);

        printf("\n==== VETOR ====\n");
        int vet[contPalavras], vetAux[contPalavras];
        contarLetrasDePalavras(string, vet);
        mostrarVetorInteiros(vet, contPalavras);

        printf("\n==== VETOR ORDENADO ====\n");
        ordenarVetorInteiro(vet, contPalavras);
        mostrarVetorInteiros(vet, contPalavras);

        printf("\n==== MATRIZ ====\n");
        int matriz[contPalavras][2];
        k = 0;
        for (i = 0; i < contPalavras; i++)
        {
            for (j = 0; j < k; j++)
            {
                if (vet[i] == vetAux[j])
                {
                    break;
                }
            }
            if (j == k)
            {
                vetAux[k] = vet[i];
                k++;
            }
        }
        printf("\nVALOR  QTDE DIVISORES  PRIMO\n");
        j = 0;
        for (i = 0; i < k; i++)
        {
            matriz[i][0] = vetAux[i];
            printf("%2d     ", matriz[i][0]);
            matriz[i][1] = contDivisores(vet[i]);
            printf("%2d         ", matriz[i][1]);
            if (primo(vetAux[i]) == 0 && vet[i] != 1)
            {
                printf("     Sim");
            }
            else
                printf("     Nao");

            printf("\n");
        }

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

int contDivisores(int x)
{
    int i, cont = 0;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cont++;
        }
    }
    return cont;
}

void mostraDivisores(int x)
{
    int i;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d  ", i);
        }
    }
}

int primo(int x)
{
    int i, contDiv = 0;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            contDiv++;
            break;
        }
    }
    return contDiv;
}