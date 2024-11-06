/*Criar um arquivo "matrizes.h". Dentro desse arquivo incluir função para:
a) Gerar uma matriz de elementos inteiros randômicos entre 1 e limite com o protótipo:
void gerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int
limite)
b) Mostrar uma matriz com o protótipo:
void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
Usar as funções para:
a) Gerar uma matriz de 3x3 com números aleatórios entre 1 e 10.
b) Somar todos os elementos da matriz.
c) Somar os elementos da diagonal principal da matriz.
d) Somar os elementos da diagonal secundária da matriz.
e) Mostrar a matriz e as somas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "matrizes.h"

int main()
{
    int matriz[3][3];
    char reset;

    do
    {
        printf("\n==== MATRIZ ====\n");
        gerarMatrizInteiroDe1ALimite(3, 3, matriz, 10);
        imprimirMatrizInteiro(3, 3, matriz);
        printf("Soma dos elementos da diagonal secundaria: %d\n", somarDiagonaSecundaria(3, 3, matriz));
        printf("Soma dos elementos da diagonal principal: %d\n", somarDiagonaPrincipal(3, 3, matriz));
        printf("Soma de todos os elementos: %d\n", somarElementosDaMatriz(3, 3, matriz));

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
