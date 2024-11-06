#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarMatrizInteiroDe0ALimite(int linha, int coluna, int matriz[linha][coluna], int limite);
void imprimirMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);
int somarDiagonaPrincipal(int linha, int coluna, int matriz[linha][coluna]);
int somarDiagonaSecundaria(int linha, int coluna, int matriz[linha][coluna]);

int main()
{
    int matriz[4][4];
    gerarMatrizInteiroDe0ALimite(4, 4, matriz, 10);
    imprimirMatrizInteiro(4, 4, matriz);
    printf("Soma dos elementos da diagonal principal: %d\n", somarDiagonaPrincipal(4, 4, matriz));
    printf("Soma dos elementos da diagonal secundaria: %d", somarDiagonaSecundaria(4, 4, matriz));

    return 0;
}

void gerarMatrizInteiroDe0ALimite(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            matriz[i][j] = rand() % (limite + 1);
        }
    }
}

void imprimirMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somarDiagonaPrincipal(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j, soma = 0;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            if (i == j)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}

int somarDiagonaSecundaria(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j, soma = 0;
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            if (i + j == coluna - 1)
            {
                soma = soma + matriz[i][j];
            }
        }
    }
    return soma;
}