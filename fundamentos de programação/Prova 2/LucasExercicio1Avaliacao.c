#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void ordenarVetor(int vetor[], int tam);
void gerarVetorAleatorioLimiteDefinido(int vet[], int tam, int limInf, int limSup);
void imprimirVetorInteiro(int vet[], int tam);
void gerarMatrizAleatorioLimiteDefinido(int linha, int coluna, int matriz[linha][coluna], int limInf, int limSup);
void imprimirMatriz(int linha, int coluna, int matriz[linha][coluna]);
int verificaSeHaRepetido(int vet[], int tam, int num);

int main()
{
    int vet[10], matriz[4][3], vetB[10], i, j, contTam = 0;

    printf("\n==== VETOR ====\n");
    gerarVetorAleatorioLimiteDefinido(vet, 10, 97, 122);
    imprimirVetorInteiro(vet, 10);
    printf("\n==== VETOR ORDENADO ====\n");
    ordenarVetor(vet, 10);
    imprimirVetorInteiro(vet, 10);
    printf("\n==== MATRIZ ====\n");
    gerarMatrizAleatorioLimiteDefinido(4, 3, matriz, 97, 122);
    imprimirMatriz(4, 3, matriz);
    printf("\n==== ELEMENTOS DO VETOR QUE EXISTEM NA MATRIZ ====\n");
  
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (verificaSeHaRepetido(vet, 10, matriz[i][j]) != 0)
            {
                if (verificaSeHaRepetido(vetB, 10, matriz[i][j]) == 0)
                {
                    vetB[contTam++] = matriz[i][j];
                }
            }
        }
    }
    imprimirVetorInteiro(vetB, contTam);

    printf("\n==== STRING ====\n");
    char string[contTam];
    for (i = 0; i < contTam; i++)
    {
        string[i] = vetB[i];
    }
    string[i] = '\0';
    puts(string);

    return 0;
}

void ordenarVetor(int vetor[], int tam)
{

    int aux, i, j;

    for (j = tam - 1; j > 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            if (vetor[i] > vetor[i + 1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }
}

void gerarVetorAleatorioLimiteDefinido(int vet[], int tam, int limInf, int limSup)
{
    int i;
    srand(time(NULL));
    for (i = 0; i < tam; i++)
    {
        vet[i] = rand() % (limSup - limInf) + limInf;
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

void gerarMatrizAleatorioLimiteDefinido(int linha, int coluna, int matriz[linha][coluna], int limInf, int limSup)
{
    int i, j;
    srand(time(NULL));
    for (i = 0; i < linha; i++)
    {
        for (j = 0; j < coluna; j++)
        {
            matriz[i][j] = rand() % (limSup - limInf) + limInf;
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
            printf("%2d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int verificaSeHaRepetido(int vet[], int tam, int num)
{
    int i, cont = 0;
    for (i = 0; i < tam; i++)
    {
        if (vet[i] == num)
        {
            cont++;
        }
    }
    return cont;
}
