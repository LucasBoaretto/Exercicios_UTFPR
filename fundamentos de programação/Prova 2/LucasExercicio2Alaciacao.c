#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void gerarMatrizAleatorioLimiteDefinido(int linha, int coluna, int matriz[linha][coluna], int limite);
void imprimirMatriz(int linha, int coluna, int matriz[linha][coluna]);
void imprimirVetorInteiro(int vet[], int tam);

int main()
{
    int matriz[5][5], limite, i, j, contPar = 0, vetPar[10], vetImpar[10], contImpar = 0;

    printf("Insira um limite para a matriz: ");
    scanf("%d", &limite);
    printf("===========Matriz de numeros aleatorios===========\n");
    gerarMatrizAleatorioLimiteDefinido(5, 5, matriz, limite);
    imprimirMatriz(5, 5, matriz);

    for (i = 2; i < 5; i = i + 2)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] % 2 == 0 && matriz[i][j] != 0)
            {
                vetPar[contPar++] = matriz[i][j];
                matriz[i][j] = 2;
            }
        }
    }
    for (i = 1; i < 5; i = i + 2)
    {
        for (j = 0; j < 5; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                vetImpar[contImpar++] = matriz[i][j];
                matriz[i][j] = 1;
            }
        }
    }

    printf("\n===========Matriz alterada===========\n");
    imprimirMatriz(5, 5, matriz);
    printf("\n===========Vetor pares===========\n");
    imprimirVetorInteiro(vetPar, contPar);
    printf("\n===========Vetor impares===========\n");
    imprimirVetorInteiro(vetImpar, contImpar);

    return 0;
}

void gerarMatrizAleatorioLimiteDefinido(int linha, int coluna, int matriz[linha][coluna], int limite)
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
void imprimirMatriz(int linha, int coluna, int matriz[linha][coluna])
{
    int i, j;

    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            printf("%2d  ", matriz[i][j]);
        }
        printf("\n");
    }
}
void imprimirVetorInteiro(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%d\t", vet[i]);
    }
}